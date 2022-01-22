import chisel3._
import chisel3.util._

object compressed{
    def CLW       = BitPat("b010???????????00")
    // def CFLW      = BitPat("b011???????????00")
    def CLWSP     = BitPat("b010???????????10")
    // def CFLWSP    = BitPat("b011???????????00")
    def CSW       = BitPat("b110???????????00")
    // def CFSW      = BitPat("b111???????????00")
    def CSWSP     = BitPat("b110???????????10")
    // def CFSWSP    = BitPat("b111???????????10")
    def CJ        = BitPat("b101???????????01")
    def CJAL      = BitPat("b001???????????01")
    def CJR       = BitPat("b1000?????0000010")
    def CJALR     = BitPat("b1001?????0000010")
    def CBEQZ     = BitPat("b110???????????01")
    def CBNEQZ    = BitPat("b111???????????01")
    def CLI       = BitPat("b010???????????01")
    def CLUI      = BitPat("b011???????????01")
    def CADDI     = BitPat("b000???????????01")
    def CADDI16SP = BitPat("b011?00010?????01")
    def CADDI4SPN = BitPat("b000???????????00")
    def CSLLI     = BitPat("b000???????????10")
    def CSRLI     = BitPat("b100?00????????01")
    def CSRAI     = BitPat("b100?01????????01")
    def CANDI     = BitPat("b100?10????????01")
    def CMV       = BitPat("b1000??????????10")
    def CADD      = BitPat("b1001??????????10")
    def CAND      = BitPat("b100011???11???01")
    def COR       = BitPat("b100011???10???01")
    def CXOR      = BitPat("b100011???01???01")
    def CSUB      = BitPat("b100011???00???01")
    def CNOP      = BitPat("b0000000000000001")
    // def CEBREAK   = BitPat("b1001000000000010")
    def CILLEGAL  = BitPat("b0000000000000000")
}

import compressed._

class CDecoderIO extends Bundle{
    val instIn = Input(UInt(32.W))
    val instOut = Output(UInt(32.W))
    val compressed = Output(Bool())
}

class CompressedDecoder extends Module{
    val io = IO(new CDecoderIO)

    val RS1 = WireInit(io.instIn(4,2) + 8.U)
    val RD_RS2 = WireInit(io.instIn(9,7) + 8.U)

    def LW = Cat(io.instIn(5), io.instIn(12,10), io.instIn(6), "b00".U, RD_RS2, "b010".U, RS1, "b0000011".U)
    def SW = Cat("b00000".U, io.instIn(5), io.instIn(12), RS1, RD_RS2, "b010".U, io.instIn(11,10), io.instIn(6), "b00".U, "b0100011".U)

    val cases = Array(
        (io.instIn(15,0) === CLW) -> LW,
        // (io.instIn(15,0) === CFLW) -> ,
        // (io.instIn(15,0) === CLWSP) -> ,
        // (io.instIn(15,0) === CFLWSP) -> ,
        (io.instIn(15,0) === CSW) -> SW,
        // (io.instIn(15,0) === CFSW) -> ,
        // (io.instIn(15,0) === CSWSP) -> ,
        // (io.instIn(15,0) === CFSWSP) -> ,
        // (io.instIn(15,0) === CJ) -> ,
        // (io.instIn(15,0) === CJAL) -> ,
        // (io.instIn(15,0) === CJR) -> ,
        // (io.instIn(15,0) === CJALR) -> ,
        // (io.instIn(15,0) === CBEQZ) -> ,
        // (io.instIn(15,0) === CBNEQZ) -> ,
        // (io.instIn(15,0) === CLI) -> ,
        // (io.instIn(15,0) === CLUI) -> ,
        // (io.instIn(15,0) === CADDI) -> ,
        // (io.instIn(15,0) === CADDI16SP) -> ,
        // (io.instIn(15,0) === CADDI4SPN) -> ,
        // (io.instIn(15,0) === CSLLI) -> ,
        // (io.instIn(15,0) === CSRLI) -> ,
        // (io.instIn(15,0) === CSRAI) -> ,
        // (io.instIn(15,0) === CANDI) -> ,
        // (io.instIn(15,0) === CMV) -> Cat("b0000000".U, RD_RS2, RS1, "b000".U, RD_RS2, "b0110011".U),
        // (io.instIn(15,0) === CADD) -> Cat("b0000000".U, RD_RS2, RS1, "b000".U, RD_RS2, "b0110011".U),
        (io.instIn(15,0) === CAND) -> Cat("b0000000".U, RD_RS2, RS1, "b111".U, RD_RS2, "b0110011".U),
        (io.instIn(15,0) === COR) -> Cat("b0000000".U, RD_RS2, RS1, "b110".U, RD_RS2, "b0110011".U),
        (io.instIn(15,0) === CXOR) -> Cat("b0000000".U, RD_RS2, RS1, "b100".U, RD_RS2, "b0110011".U),
        (io.instIn(15,0) === CSUB) -> Cat("b0100000".U, RD_RS2, RS1, "b000".U, RD_RS2, "b0110011".U),
        (io.instIn(15,0) === CNOP) -> "h00000013".U,
        // (io.instIn(15,0) === CEBREAK) -> "h00000013".U,
        (io.instIn(15,0) === CILLEGAL) -> 0.U)

    io.instOut := MuxCase(io.instIn, cases)
    io.compressed := 1.B

}