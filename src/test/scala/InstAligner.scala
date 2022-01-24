import chisel3._
import org.scalatest._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation

class InstAlignerTest extends FreeSpec with ChiselScalatestTester {

  "Instruction Aligner Test" in {
    test(new InstAligner()).withAnnotations(Seq(VerilatorBackendAnnotation)){ c =>
    // Case 2
      c.io.instIn.poke("h04339426".U)
      c.clock.step(1)
      c.io.instIn.poke("h952E0094".U)
      c.clock.step(100)
    //Case1
      // c.io.instIn.poke("h94AA9426".U)
      // c.io.pcIn.poke(12.U)
      // // c.clock.step(100)
      // c.io.instOut.expect("h9426".U)
      // c.clock.step(1)
      // c.io.pcIn.poke(c.io.pcOut.peek)
      // c.io.instOut.expect("h94AA".U)
      // c.clock.step(100)
    }
  }
}

// 0x00009426
// 0x00940433
// 0x0000952E