module CompressedDecoder(
  input         clock,
  input         reset,
  input  [31:0] io_instIn,
  output [31:0] io_instOut,
  output        io_compressed
);
  wire [3:0] _GEN_0 = {{1'd0}, io_instIn[4:2]}; // @[CompressedDecoder.scala 50:39]
  wire [3:0] RS1 = _GEN_0 + 4'h8; // @[CompressedDecoder.scala 50:39]
  wire [3:0] _GEN_1 = {{1'd0}, io_instIn[9:7]}; // @[CompressedDecoder.scala 51:42]
  wire [3:0] RD_RS2 = _GEN_1 + 4'h8; // @[CompressedDecoder.scala 51:42]
  wire [15:0] _T_1 = io_instIn[15:0] & 16'he003; // @[CompressedDecoder.scala 57:26]
  wire  _T_2 = 16'h4000 == _T_1; // @[CompressedDecoder.scala 57:26]
  wire  hi_hi_hi = io_instIn[5]; // @[CompressedDecoder.scala 53:27]
  wire [2:0] hi_hi_lo = io_instIn[12:10]; // @[CompressedDecoder.scala 53:41]
  wire  hi_lo_hi = io_instIn[6]; // @[CompressedDecoder.scala 53:59]
  wire [17:0] _T_3 = {hi_hi_hi,hi_hi_lo,hi_lo_hi,1'h0,RD_RS2,2'h2,RS1,2'h3}; // @[Cat.scala 30:58]
  wire  _T_6 = 16'hc000 == _T_1; // @[CompressedDecoder.scala 61:26]
  wire  hi_hi_lo_1 = io_instIn[12]; // @[CompressedDecoder.scala 54:53]
  wire [1:0] lo_hi_hi_lo = io_instIn[11:10]; // @[CompressedDecoder.scala 54:91]
  wire [22:0] _T_7 = {1'h0,hi_hi_hi,hi_hi_lo_1,RS1,RD_RS2,2'h2,lo_hi_hi_lo,hi_lo_hi,7'h23}; // @[Cat.scala 30:58]
  wire [15:0] _T_9 = io_instIn[15:0] & 16'hfc63; // @[CompressedDecoder.scala 82:26]
  wire  _T_10 = 16'h8c61 == _T_9; // @[CompressedDecoder.scala 82:26]
  wire [21:0] _T_11 = {1'h0,RD_RS2,RS1,3'h7,RD_RS2,6'h33}; // @[Cat.scala 30:58]
  wire  _T_14 = 16'h8c41 == _T_9; // @[CompressedDecoder.scala 83:26]
  wire [21:0] _T_15 = {1'h0,RD_RS2,RS1,3'h6,RD_RS2,6'h33}; // @[Cat.scala 30:58]
  wire  _T_18 = 16'h8c21 == _T_9; // @[CompressedDecoder.scala 84:26]
  wire [21:0] _T_19 = {1'h0,RD_RS2,RS1,3'h4,RD_RS2,6'h33}; // @[Cat.scala 30:58]
  wire  _T_22 = 16'h8c01 == _T_9; // @[CompressedDecoder.scala 85:26]
  wire [24:0] _T_23 = {6'h20,RD_RS2,RS1,1'h0,RD_RS2,6'h33}; // @[Cat.scala 30:58]
  wire  _T_26 = 16'h1 == io_instIn[15:0]; // @[CompressedDecoder.scala 86:26]
  wire  _T_29 = 16'h0 == io_instIn[15:0]; // @[CompressedDecoder.scala 88:26]
  wire [31:0] _io_instOut_T = _T_29 ? 32'h0 : io_instIn; // @[Mux.scala 98:16]
  wire [31:0] _io_instOut_T_1 = _T_26 ? 32'h13 : _io_instOut_T; // @[Mux.scala 98:16]
  wire [31:0] _io_instOut_T_2 = _T_22 ? {{7'd0}, _T_23} : _io_instOut_T_1; // @[Mux.scala 98:16]
  wire [31:0] _io_instOut_T_3 = _T_18 ? {{10'd0}, _T_19} : _io_instOut_T_2; // @[Mux.scala 98:16]
  wire [31:0] _io_instOut_T_4 = _T_14 ? {{10'd0}, _T_15} : _io_instOut_T_3; // @[Mux.scala 98:16]
  wire [31:0] _io_instOut_T_5 = _T_10 ? {{10'd0}, _T_11} : _io_instOut_T_4; // @[Mux.scala 98:16]
  wire [31:0] _io_instOut_T_6 = _T_6 ? {{9'd0}, _T_7} : _io_instOut_T_5; // @[Mux.scala 98:16]
  assign io_instOut = _T_2 ? {{14'd0}, _T_3} : _io_instOut_T_6; // @[Mux.scala 98:16]
  assign io_compressed = 1'h1; // @[CompressedDecoder.scala 91:19]
endmodule
