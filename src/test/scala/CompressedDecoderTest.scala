import chisel3._
import org.scalatest._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation

class CompressedDecoderTest extends FreeSpec with ChiselScalatestTester {

  "Compressed Decoder Test" in {
    test(new CompressedDecoder()).withAnnotations(Seq(VerilatorBackendAnnotation)){ c =>
      // c.io.instIn.poke("h94AA9426".U)
      // c.clock.step(1)
      // c.io.instOut.expect("h9426".U)
    }
  }
}

// 0x00009426
// 0x000094AA
