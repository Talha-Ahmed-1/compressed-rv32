;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit InstAligner : 
  module InstAligner : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip instIn : UInt<32>, instOut : UInt<32>, flip pcIn : UInt<32>, pcOut : UInt<32>}
    
    reg case1 : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[InstAligner.scala 15:24]
    reg case2 : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[InstAligner.scala 16:24]
    wire instReg : UInt<32> @[InstAligner.scala 17:23]
    instReg <= io.instIn @[InstAligner.scala 18:13]
    io.pcOut <= io.pcIn @[InstAligner.scala 19:14]
    io.instOut <= instReg @[InstAligner.scala 20:16]
    node _T = eq(UInt<1>("h00"), case2) @[Conditional.scala 37:30]
    when _T : @[Conditional.scala 40:58]
      node _T_1 = bits(io.instIn, 1, 0) @[InstAligner.scala 42:27]
      node _T_2 = neq(_T_1, UInt<2>("h03")) @[InstAligner.scala 42:33]
      node _T_3 = bits(io.instIn, 17, 16) @[InstAligner.scala 42:53]
      node _T_4 = eq(_T_3, UInt<2>("h03")) @[InstAligner.scala 42:61]
      node _T_5 = and(_T_2, _T_4) @[InstAligner.scala 42:41]
      when _T_5 : @[InstAligner.scala 42:69]
        node _io_instOut_T = bits(io.instIn, 15, 0) @[InstAligner.scala 43:40]
        io.instOut <= _io_instOut_T @[InstAligner.scala 43:28]
        instReg <= io.instIn @[InstAligner.scala 44:25]
        node _io_pcOut_T = add(io.pcIn, UInt<2>("h02")) @[InstAligner.scala 45:37]
        node _io_pcOut_T_1 = tail(_io_pcOut_T, 1) @[InstAligner.scala 45:37]
        io.pcOut <= _io_pcOut_T_1 @[InstAligner.scala 45:26]
        case2 <= UInt<1>("h01") @[InstAligner.scala 46:23]
        skip @[InstAligner.scala 42:69]
      skip @[Conditional.scala 40:58]
    else : @[Conditional.scala 39:67]
      node _T_6 = eq(UInt<1>("h01"), case2) @[Conditional.scala 37:30]
      when _T_6 : @[Conditional.scala 39:67]
        case2 <= UInt<1>("h00") @[InstAligner.scala 50:19]
        node io_instOut_hi = bits(io.instIn, 15, 0) @[InstAligner.scala 51:40]
        node io_instOut_lo = bits(instReg, 31, 16) @[InstAligner.scala 51:55]
        node _io_instOut_T_1 = cat(io_instOut_hi, io_instOut_lo) @[Cat.scala 30:58]
        io.instOut <= _io_instOut_T_1 @[InstAligner.scala 51:24]
        node _io_pcOut_T_2 = add(io.pcIn, UInt<3>("h04")) @[InstAligner.scala 52:33]
        node _io_pcOut_T_3 = tail(_io_pcOut_T_2, 1) @[InstAligner.scala 52:33]
        io.pcOut <= _io_pcOut_T_3 @[InstAligner.scala 52:22]
        skip @[Conditional.scala 39:67]
    
