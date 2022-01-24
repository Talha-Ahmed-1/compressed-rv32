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
`endif // RANDOMIZE_REG_INIT
  reg  case2; // @[InstAligner.scala 16:24]
  wire  _T = ~case2; // @[Conditional.scala 37:30]
  wire [31:0] _io_pcOut_T_1 = io_pcIn + 32'h2; // @[InstAligner.scala 45:37]
  wire [31:0] _GEN_0 = io_instIn[1:0] != 2'h3 & io_instIn[17:16] == 2'h3 ? {{16'd0}, io_instIn[15:0]} : io_instIn; // @[InstAligner.scala 42:69 InstAligner.scala 43:28 InstAligner.scala 20:16]
  wire [31:0] _GEN_2 = io_instIn[1:0] != 2'h3 & io_instIn[17:16] == 2'h3 ? _io_pcOut_T_1 : io_pcIn; // @[InstAligner.scala 42:69 InstAligner.scala 45:26 InstAligner.scala 19:14]
  wire  _GEN_3 = io_instIn[1:0] != 2'h3 & io_instIn[17:16] == 2'h3 | case2; // @[InstAligner.scala 42:69 InstAligner.scala 46:23 InstAligner.scala 16:24]
  wire [15:0] io_instOut_lo = io_instIn[31:16]; // @[InstAligner.scala 51:55]
  wire [31:0] _io_instOut_T_1 = {io_instIn[15:0],io_instOut_lo}; // @[Cat.scala 30:58]
  wire [31:0] _io_pcOut_T_3 = io_pcIn + 32'h4; // @[InstAligner.scala 52:33]
  wire [31:0] _GEN_5 = case2 ? _io_instOut_T_1 : io_instIn; // @[Conditional.scala 39:67 InstAligner.scala 51:24 InstAligner.scala 20:16]
  wire [31:0] _GEN_6 = case2 ? _io_pcOut_T_3 : io_pcIn; // @[Conditional.scala 39:67 InstAligner.scala 52:22 InstAligner.scala 19:14]
  assign io_instOut = _T ? _GEN_0 : _GEN_5; // @[Conditional.scala 40:58]
  assign io_pcOut = _T ? _GEN_2 : _GEN_6; // @[Conditional.scala 40:58]
  always @(posedge clock) begin
    if (reset) begin // @[InstAligner.scala 16:24]
      case2 <= 1'h0; // @[InstAligner.scala 16:24]
    end else if (_T) begin // @[Conditional.scala 40:58]
      case2 <= _GEN_3;
    end else if (case2) begin // @[Conditional.scala 39:67]
      case2 <= 1'h0; // @[InstAligner.scala 50:19]
    end
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
  case2 = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
