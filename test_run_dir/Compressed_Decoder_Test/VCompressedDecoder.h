// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCompressedDecoder_H_
#define _VCompressedDecoder_H_

#include "verilated.h"
class VCompressedDecoder__Syms;

//----------

VL_MODULE(VCompressedDecoder) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_compressed,0,0);
    //char	__VpadToAlign3[1];
    VL_IN(io_instIn,31,0);
    VL_OUT(io_instOut,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCompressedDecoder__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCompressedDecoder& operator= (const VCompressedDecoder&);	///< Copying not allowed
    VCompressedDecoder(const VCompressedDecoder&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCompressedDecoder(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCompressedDecoder();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCompressedDecoder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCompressedDecoder__Syms* symsp, bool first);
  private:
    static QData	_change_request(VCompressedDecoder__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(VCompressedDecoder__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VCompressedDecoder__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VCompressedDecoder__Syms* __restrict vlSymsp);
    static void	_eval_initial(VCompressedDecoder__Syms* __restrict vlSymsp);
    static void	_eval_settle(VCompressedDecoder__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VCompressedDecoder__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
