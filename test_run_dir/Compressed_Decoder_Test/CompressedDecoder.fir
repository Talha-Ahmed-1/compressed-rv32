;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit CompressedDecoder : 
  module CompressedDecoder : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip instIn : UInt<32>, instOut : UInt<32>, compressed : UInt<1>}
    
    wire RS1 : UInt<5> @[CompressedDecoder.scala 50:19]
    node _RS1_T = bits(io.instIn, 4, 2) @[CompressedDecoder.scala 51:21]
    node _RS1_T_1 = add(_RS1_T, UInt<4>("h08")) @[CompressedDecoder.scala 51:27]
    node _RS1_T_2 = tail(_RS1_T_1, 1) @[CompressedDecoder.scala 51:27]
    RS1 <= _RS1_T_2 @[CompressedDecoder.scala 51:9]
    wire RD_RS2 : UInt<5> @[CompressedDecoder.scala 52:22]
    node _RD_RS2_T = bits(io.instIn, 9, 7) @[CompressedDecoder.scala 53:24]
    node _RD_RS2_T_1 = add(_RD_RS2_T, UInt<4>("h08")) @[CompressedDecoder.scala 53:30]
    node _RD_RS2_T_2 = tail(_RD_RS2_T_1, 1) @[CompressedDecoder.scala 53:30]
    RD_RS2 <= _RD_RS2_T_2 @[CompressedDecoder.scala 53:12]
    node _T = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 66:19]
    node _T_1 = and(_T, UInt<16>("h0e003")) @[CompressedDecoder.scala 66:26]
    node _T_2 = eq(UInt<15>("h04000"), _T_1) @[CompressedDecoder.scala 66:26]
    node hi_hi_hi = bits(io.instIn, 5, 5) @[CompressedDecoder.scala 55:32]
    node hi_hi_lo = bits(io.instIn, 12, 10) @[CompressedDecoder.scala 55:46]
    node hi_lo_hi = bits(io.instIn, 6, 6) @[CompressedDecoder.scala 55:64]
    node lo_lo = cat(RS1, UInt<2>("h03")) @[Cat.scala 30:58]
    node lo_hi = cat(RD_RS2, UInt<2>("h02")) @[Cat.scala 30:58]
    node lo = cat(lo_hi, lo_lo) @[Cat.scala 30:58]
    node hi_lo = cat(hi_lo_hi, UInt<1>("h00")) @[Cat.scala 30:58]
    node hi_hi = cat(hi_hi_hi, hi_hi_lo) @[Cat.scala 30:58]
    node hi = cat(hi_hi, hi_lo) @[Cat.scala 30:58]
    node _T_3 = cat(hi, lo) @[Cat.scala 30:58]
    node _T_4 = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 70:19]
    node _T_5 = and(_T_4, UInt<16>("h0e003")) @[CompressedDecoder.scala 70:26]
    node _T_6 = eq(UInt<16>("h0c000"), _T_5) @[CompressedDecoder.scala 70:26]
    node hi_hi_hi_lo = bits(io.instIn, 5, 5) @[CompressedDecoder.scala 56:44]
    node hi_hi_lo_1 = bits(io.instIn, 12, 12) @[CompressedDecoder.scala 56:58]
    node lo_hi_hi_lo = bits(io.instIn, 11, 10) @[CompressedDecoder.scala 56:96]
    node lo_hi_lo = bits(io.instIn, 6, 6) @[CompressedDecoder.scala 56:114]
    node lo_lo_1 = cat(UInt<1>("h00"), UInt<6>("h023")) @[Cat.scala 30:58]
    node lo_hi_hi = cat(UInt<2>("h02"), lo_hi_hi_lo) @[Cat.scala 30:58]
    node lo_hi_1 = cat(lo_hi_hi, lo_hi_lo) @[Cat.scala 30:58]
    node lo_1 = cat(lo_hi_1, lo_lo_1) @[Cat.scala 30:58]
    node hi_lo_1 = cat(RS1, RD_RS2) @[Cat.scala 30:58]
    node hi_hi_hi_1 = cat(UInt<1>("h00"), hi_hi_hi_lo) @[Cat.scala 30:58]
    node hi_hi_1 = cat(hi_hi_hi_1, hi_hi_lo_1) @[Cat.scala 30:58]
    node hi_1 = cat(hi_hi_1, hi_lo_1) @[Cat.scala 30:58]
    node _T_7 = cat(hi_1, lo_1) @[Cat.scala 30:58]
    node _T_8 = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 91:19]
    node _T_9 = and(_T_8, UInt<16>("h0fc63")) @[CompressedDecoder.scala 91:26]
    node _T_10 = eq(UInt<16>("h08c61"), _T_9) @[CompressedDecoder.scala 91:26]
    node lo_hi_2 = cat(UInt<3>("h07"), RD_RS2) @[Cat.scala 30:58]
    node lo_2 = cat(lo_hi_2, UInt<7>("h033")) @[Cat.scala 30:58]
    node hi_hi_2 = cat(UInt<1>("h00"), RD_RS2) @[Cat.scala 30:58]
    node hi_2 = cat(hi_hi_2, RS1) @[Cat.scala 30:58]
    node _T_11 = cat(hi_2, lo_2) @[Cat.scala 30:58]
    node _T_12 = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 92:19]
    node _T_13 = and(_T_12, UInt<16>("h0fc63")) @[CompressedDecoder.scala 92:26]
    node _T_14 = eq(UInt<16>("h08c41"), _T_13) @[CompressedDecoder.scala 92:26]
    node lo_hi_3 = cat(UInt<3>("h06"), RD_RS2) @[Cat.scala 30:58]
    node lo_3 = cat(lo_hi_3, UInt<7>("h033")) @[Cat.scala 30:58]
    node hi_hi_3 = cat(UInt<1>("h00"), RD_RS2) @[Cat.scala 30:58]
    node hi_3 = cat(hi_hi_3, RS1) @[Cat.scala 30:58]
    node _T_15 = cat(hi_3, lo_3) @[Cat.scala 30:58]
    node _T_16 = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 93:19]
    node _T_17 = and(_T_16, UInt<16>("h0fc63")) @[CompressedDecoder.scala 93:26]
    node _T_18 = eq(UInt<16>("h08c21"), _T_17) @[CompressedDecoder.scala 93:26]
    node lo_hi_4 = cat(UInt<3>("h04"), RD_RS2) @[Cat.scala 30:58]
    node lo_4 = cat(lo_hi_4, UInt<7>("h033")) @[Cat.scala 30:58]
    node hi_hi_4 = cat(UInt<1>("h00"), RD_RS2) @[Cat.scala 30:58]
    node hi_4 = cat(hi_hi_4, RS1) @[Cat.scala 30:58]
    node _T_19 = cat(hi_4, lo_4) @[Cat.scala 30:58]
    node _T_20 = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 94:19]
    node _T_21 = and(_T_20, UInt<16>("h0fc63")) @[CompressedDecoder.scala 94:26]
    node _T_22 = eq(UInt<16>("h08c01"), _T_21) @[CompressedDecoder.scala 94:26]
    node lo_hi_5 = cat(UInt<3>("h00"), RD_RS2) @[Cat.scala 30:58]
    node lo_5 = cat(lo_hi_5, UInt<7>("h033")) @[Cat.scala 30:58]
    node hi_hi_5 = cat(UInt<6>("h020"), RD_RS2) @[Cat.scala 30:58]
    node hi_5 = cat(hi_hi_5, RS1) @[Cat.scala 30:58]
    node _T_23 = cat(hi_5, lo_5) @[Cat.scala 30:58]
    node _T_24 = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 95:19]
    node _T_25 = and(_T_24, UInt<16>("h0ffff")) @[CompressedDecoder.scala 95:26]
    node _T_26 = eq(UInt<1>("h01"), _T_25) @[CompressedDecoder.scala 95:26]
    node _T_27 = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 96:19]
    node _T_28 = and(_T_27, UInt<16>("h0ffff")) @[CompressedDecoder.scala 96:26]
    node _T_29 = eq(UInt<16>("h09002"), _T_28) @[CompressedDecoder.scala 96:26]
    node _T_30 = bits(io.instIn, 15, 0) @[CompressedDecoder.scala 97:19]
    node _T_31 = and(_T_30, UInt<16>("h0ffff")) @[CompressedDecoder.scala 97:26]
    node _T_32 = eq(UInt<1>("h00"), _T_31) @[CompressedDecoder.scala 97:26]
    node _io_instOut_T = mux(_T_32, UInt<1>("h00"), io.instIn) @[Mux.scala 98:16]
    node _io_instOut_T_1 = mux(_T_29, UInt<21>("h0100073"), _io_instOut_T) @[Mux.scala 98:16]
    node _io_instOut_T_2 = mux(_T_26, UInt<5>("h013"), _io_instOut_T_1) @[Mux.scala 98:16]
    node _io_instOut_T_3 = mux(_T_22, _T_23, _io_instOut_T_2) @[Mux.scala 98:16]
    node _io_instOut_T_4 = mux(_T_18, _T_19, _io_instOut_T_3) @[Mux.scala 98:16]
    node _io_instOut_T_5 = mux(_T_14, _T_15, _io_instOut_T_4) @[Mux.scala 98:16]
    node _io_instOut_T_6 = mux(_T_10, _T_11, _io_instOut_T_5) @[Mux.scala 98:16]
    node _io_instOut_T_7 = mux(_T_6, _T_7, _io_instOut_T_6) @[Mux.scala 98:16]
    node _io_instOut_T_8 = mux(_T_2, _T_3, _io_instOut_T_7) @[Mux.scala 98:16]
    io.instOut <= _io_instOut_T_8 @[CompressedDecoder.scala 99:16]
    node _io_compressed_T = neq(io.instIn, io.instOut) @[CompressedDecoder.scala 100:32]
    io.compressed <= _io_compressed_T @[CompressedDecoder.scala 100:19]
    
