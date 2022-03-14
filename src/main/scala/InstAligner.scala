import chisel3._
import chisel3.util._

class AlignerIO extends Bundle {
    val instIn = Input(UInt(32.W))
    val instOut = Output(UInt(32.W))
    // val instValid = Output(Bool())
    val pcIn = Input(UInt(32.W))
    val pcOut= Output(UInt(32.W))
}

class InstAligner extends Module{
    val io = IO(new AlignerIO)

    val case1 = RegInit(0.B)
    val case2 = RegInit(0.B)
    val case3 = RegInit(0.B)
    val pcReg = RegInit(0.U(32.W))
    val instReg = RegInit(0.U(32.W))

    io.instOut := io.instIn
    io.pcOut := io.pcIn + 4.U

    switch(case1){
        is (0.B){
            when(io.instIn(1,0) =/= 3.U && io.instIn(17,16) =/= 3.U){
                io.instOut := io.instIn(15,0)
                // io.instValid := true.B
                instReg := io.instIn
                io.pcOut := io.pcIn + 2.U
                case1 := true.B
            }
            // .otherwise{
            //     io.instOut := io.instIn
            //     io.pcOut := io.pcIn + 4.U
            // }
        }
        is (1.B){
            io.instOut := instReg(31,16)
            // io.instValid := true.B
            io.pcOut := io.pcIn + 2.U
            case1 := false.B
        }
    }
    switch(case2){
        is (0.B){
            when(io.instIn(17,16) === 3.U && io.instIn(1,0) =/= 3.U && case3 === 0.B){
                io.instOut := io.instIn(15,0)
                // io.instValid := true.B
                instReg := io.instIn
                io.pcOut := io.pcIn + 2.U
                case2 := true.B
                case3 := true.B
            }
            .elsewhen(instReg(17,16) =/= 3.U && case3 === 1.B){
                io.instOut := instReg(31,16)
                // io.instValid := true.B
                // instReg := io.instIn
                io.pcOut := io.pcIn + 2.U
                case1 := false.B
                case3 := false.B
            }
        }
        is (1.B){
            io.instOut := Cat(io.instIn(15,0), instReg(31,16))
            // io.instValid := true.B
            io.pcOut := io.pcIn + 4.U
            // when(io.instIn(1,0) === 3.U && io.instIn(17,16) =/= 3.U){
            //     io.instOut := io.instIn(31,16)
            //     // io.instValid := true.B
            //     // instReg := io.instIn
            //     io.pcOut := io.pcIn + 2.U
            //     case1 := false.B}
            when (io.instIn(17,16) =/= 3.U){
                instReg := io.instIn
                case1 := false.B
                case2 := false.B
            }.elsewhen(io.instIn(17,16) === 3.U){
                instReg := io.instIn
                case2 := true.B
            }.otherwise{
                case2 := false.B
            }

            // case2 := false.B
        }
    }



    // io.instOut := RegNext(io.instIn)
    // val r = RegInit(0.U(32.W))
    // r := io.pcIn
    // io.pcOut := r
}

