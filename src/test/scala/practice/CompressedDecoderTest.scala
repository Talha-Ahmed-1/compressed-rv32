import chisel3._
import org.scalatest._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation

class CompressedDecoderTest extends FreeSpec with ChiselScalatestTester {

  "Compressed Decoder Test" in {
    test(new CompressedDecoder()).withAnnotations(Seq(VerilatorBackendAnnotation)){ c =>
      c.io.instIn.poke("h0001".U)
      c.clock.step(1)
      c.io.instOut.expect("h00000013".U)
    }
  }
}