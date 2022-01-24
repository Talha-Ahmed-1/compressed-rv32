import chisel3._
import chisel3.util._

class AlignerIO extends Bundle {
  val instIn = Input(UInt(32.W))
    val instOut = Output(UInt(32.W))
    val pcIn = Input(UInt(32.W))
    val pcOut= Output(UInt(32.W))
}

class InstAligner extends Module{
    val io = IO(new AlignerIO)


    val case1 = RegInit(0.B)
    val case2 = RegInit(0.B)
    val instReg = Wire(UInt(32.W))
    instReg := io.instIn
    io.pcOut := io.pcIn
    io.instOut := instReg

    

    // switch(case1){
    //     is (0.B){
    //         when(io.instIn(1,0) =/= 3.U && io.instIn(17,16) =/= 3.U){
    //             io.instOut := io.instIn(15,0)
    //             instReg := io.instIn
    //             io.pcOut := io.pcIn + 2.U
    //             case1 := true.B
    //         }
    //     }
    //     is (1.B){
    //         case1 := false.B
    //         io.instOut := instReg(31,16)
    //         io.pcOut := io.pcIn + 2.U   
    //     }
    // }

    switch(case2){
        is (0.B){
            when(io.instIn(1,0) =/= 3.U && io.instIn(17,16) === 3.U){
                io.instOut := io.instIn(15,0)
                instReg := io.instIn
                io.pcOut := io.pcIn + 2.U
                case2 := true.B
            }
        }
        is (1.B){
            case2 := false.B
            io.instOut := Cat(io.instIn(15,0), instReg(31,16))
            io.pcOut := io.pcIn + 4.U
        }
    }

    // when(wire1){
    //     wire1 := 0.U
    //     io.instOut := instReg(31,16)
    //     io.pcOut := io.pcIn + 2.U

    // }.elsewhen(io.instIn(1,0) =/= 3.U && io.instIn(17,16) =/= 3.U && ~wire1){
    //     io.instOut := io.instIn(15,0)
    //     instReg := io.instIn
    //     io.pcOut := io.pcIn + 2.U
    //     wire1 := 1.B}
    // }.elsewhen(wire2 === 1.U){
    //     wire2 := 0.U
    //     io.instOut := Cat(io.instIn(15,0) + instReg(15,0))
    //     io.pcOut := io.pcIn + 4.U
    // }.elsewhen(io.instIn(1,0) === 3.U && io.instIn(17,16) =/= 3.U && wire2 === 0.U){
    //     io.instOut := instIn(15,0)
    //     instReg := instIn
    //     pcOut := pcIn + 2.U
    //     wire2 := 1
    // }
}

