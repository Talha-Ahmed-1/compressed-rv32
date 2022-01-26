module InstAligner(
  input         clock,
  input         reset,
  input  [31:0] io_instIn,
  output [31:0] io_instOut,
  input  [31:0] io_pcIn,
  output [31:0] io_pcOut
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg  case1; // @[InstAligner.scala 16:24]
  reg  case2; // @[InstAligner.scala 17:24]
  reg [31:0] instReg; // @[InstAligner.scala 18:26]
  wire  _T = ~case1; // @[Conditional.scala 37:30]
  wire  _T_2 = io_instIn[1:0] != 2'h3; // @[InstAligner.scala 27:33]
  wire  _T_4 = io_instIn[17:16] != 2'h3; // @[InstAligner.scala 27:61]
  reg [15:0] io_instOut_REG; // @[InstAligner.scala 28:38]
  reg [31:0] instReg_REG; // @[InstAligner.scala 30:35]
  wire [31:0] _io_pcOut_T_1 = io_pcIn + 32'h2; // @[InstAligner.scala 31:53]
  reg [31:0] io_pcOut_REG; // @[InstAligner.scala 31:44]
  reg [31:0] io_pcOut_REG_1; // @[InstAligner.scala 31:36]
  wire [31:0] _GEN_0 = io_instIn[1:0] != 2'h3 & io_instIn[17:16] != 2'h3 ? {{16'd0}, io_instOut_REG} : instReg; // @[InstAligner.scala 27:69 InstAligner.scala 28:28 InstAligner.scala 20:16]
  wire [31:0] _GEN_1 = io_instIn[1:0] != 2'h3 & io_instIn[17:16] != 2'h3 ? instReg_REG : instReg; // @[InstAligner.scala 27:69 InstAligner.scala 30:25 InstAligner.scala 18:26]
  wire [31:0] _GEN_2 = io_instIn[1:0] != 2'h3 & io_instIn[17:16] != 2'h3 ? io_pcOut_REG_1 : io_pcIn; // @[InstAligner.scala 27:69 InstAligner.scala 31:26 InstAligner.scala 19:14]
  wire  _GEN_3 = io_instIn[1:0] != 2'h3 & io_instIn[17:16] != 2'h3 | case1; // @[InstAligner.scala 27:69 InstAligner.scala 32:23 InstAligner.scala 16:24]
  wire [31:0] _GEN_4 = case1 ? {{16'd0}, instReg[31:16]} : instReg; // @[Conditional.scala 39:67 InstAligner.scala 36:24 InstAligner.scala 20:16]
  wire [31:0] _GEN_5 = case1 ? _io_pcOut_T_1 : io_pcIn; // @[Conditional.scala 39:67 InstAligner.scala 38:22 InstAligner.scala 19:14]
  wire  _GEN_6 = case1 ? 1'h0 : case1; // @[Conditional.scala 39:67 InstAligner.scala 39:19 InstAligner.scala 16:24]
  wire [31:0] _GEN_7 = _T ? _GEN_0 : _GEN_4; // @[Conditional.scala 40:58]
  wire [31:0] _GEN_8 = _T ? _GEN_1 : instReg; // @[Conditional.scala 40:58 InstAligner.scala 18:26]
  wire [31:0] _GEN_9 = _T ? _GEN_2 : _GEN_5; // @[Conditional.scala 40:58]
  wire  _GEN_10 = _T ? _GEN_3 : _GEN_6; // @[Conditional.scala 40:58]
  wire  _T_7 = ~case2; // @[Conditional.scala 37:30]
  wire  _T_11 = io_instIn[17:16] == 2'h3; // @[InstAligner.scala 46:61]
  wire [31:0] _GEN_11 = _T_2 & io_instIn[17:16] == 2'h3 ? {{16'd0}, io_instIn[15:0]} : _GEN_7; // @[InstAligner.scala 46:69 InstAligner.scala 47:28]
  wire [31:0] _GEN_13 = _T_2 & io_instIn[17:16] == 2'h3 ? _io_pcOut_T_1 : _GEN_9; // @[InstAligner.scala 46:69 InstAligner.scala 50:26]
  wire  _GEN_14 = _T_2 & io_instIn[17:16] == 2'h3 | case2; // @[InstAligner.scala 46:69 InstAligner.scala 51:23 InstAligner.scala 17:24]
  wire [31:0] _io_instOut_T_3 = {io_instIn[15:0],instReg[31:16]}; // @[Cat.scala 30:58]
  wire [31:0] _io_pcOut_T_7 = io_pcIn + 32'h4; // @[InstAligner.scala 57:33]
  wire [31:0] _GEN_15 = _T_11 ? io_instIn : _GEN_8; // @[InstAligner.scala 61:49 InstAligner.scala 62:25]
  wire [31:0] _GEN_20 = case2 ? _io_instOut_T_3 : _GEN_7; // @[Conditional.scala 39:67 InstAligner.scala 55:24]
  wire [31:0] _GEN_21 = case2 ? _io_pcOut_T_7 : _GEN_9; // @[Conditional.scala 39:67 InstAligner.scala 57:22]
  assign io_instOut = _T_7 ? _GEN_11 : _GEN_20; // @[Conditional.scala 40:58]
  assign io_pcOut = _T_7 ? _GEN_13 : _GEN_21; // @[Conditional.scala 40:58]
  always @(posedge clock) begin
    if (reset) begin // @[InstAligner.scala 16:24]
      case1 <= 1'h0; // @[InstAligner.scala 16:24]
    end else if (_T_7) begin // @[Conditional.scala 40:58]
      case1 <= _GEN_10;
    end else if (case2) begin // @[Conditional.scala 39:67]
      if (_T_4) begin // @[InstAligner.scala 58:44]
        case1 <= 1'h0; // @[InstAligner.scala 59:23]
      end else begin
        case1 <= _GEN_10;
      end
    end else begin
      case1 <= _GEN_10;
    end
    if (reset) begin // @[InstAligner.scala 17:24]
      case2 <= 1'h0; // @[InstAligner.scala 17:24]
    end else if (_T_7) begin // @[Conditional.scala 40:58]
      case2 <= _GEN_14;
    end else if (case2) begin // @[Conditional.scala 39:67]
      if (_T_4) begin // @[InstAligner.scala 58:44]
        case2 <= 1'h0; // @[InstAligner.scala 60:23]
      end else begin
        case2 <= _T_11;
      end
    end
    if (reset) begin // @[InstAligner.scala 18:26]
      instReg <= io_instIn; // @[InstAligner.scala 18:26]
    end else if (_T_7) begin // @[Conditional.scala 40:58]
      if (_T_2 & io_instIn[17:16] == 2'h3) begin // @[InstAligner.scala 46:69]
        instReg <= io_instIn; // @[InstAligner.scala 49:25]
      end else begin
        instReg <= _GEN_8;
      end
    end else if (case2) begin // @[Conditional.scala 39:67]
      if (_T_4) begin // @[InstAligner.scala 58:44]
        instReg <= _GEN_8;
      end else begin
        instReg <= _GEN_15;
      end
    end else begin
      instReg <= _GEN_8;
    end
    io_instOut_REG <= io_instIn[15:0]; // @[InstAligner.scala 28:48]
    instReg_REG <= io_instIn; // @[InstAligner.scala 30:35]
    io_pcOut_REG <= io_pcIn + 32'h2; // @[InstAligner.scala 31:53]
    io_pcOut_REG_1 <= io_pcOut_REG; // @[InstAligner.scala 31:36]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  case1 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  case2 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  instReg = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  io_instOut_REG = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  instReg_REG = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  io_pcOut_REG = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  io_pcOut_REG_1 = _RAND_6[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
