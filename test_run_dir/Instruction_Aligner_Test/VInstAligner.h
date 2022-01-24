// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VInstAligner_H_
#define _VInstAligner_H_

#include "verilated.h"
class VInstAligner__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VInstAligner) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    //char	__VpadToAlign2[2];
    VL_IN(io_instIn,31,0);
    VL_OUT(io_instOut,31,0);
    VL_IN(io_pcIn,31,0);
    VL_OUT(io_pcOut,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(InstAligner__DOT__case2,0,0);
    VL_SIG8(InstAligner__DOT___T,0,0);
    VL_SIG8(InstAligner__DOT___GEN_3,0,0);
    //char	__VpadToAlign27[1];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign33[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign44[4];
    VInstAligner__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VInstAligner& operator= (const VInstAligner&);	///< Copying not allowed
    VInstAligner(const VInstAligner&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VInstAligner(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VInstAligner();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VInstAligner__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VInstAligner__Syms* symsp, bool first);
  private:
    static QData	_change_request(VInstAligner__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__3(VInstAligner__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VInstAligner__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VInstAligner__Syms* __restrict vlSymsp);
    static void	_eval_initial(VInstAligner__Syms* __restrict vlSymsp);
    static void	_eval_settle(VInstAligner__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VInstAligner__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(VInstAligner__Syms* __restrict vlSymsp);
    static void	traceChgThis(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
