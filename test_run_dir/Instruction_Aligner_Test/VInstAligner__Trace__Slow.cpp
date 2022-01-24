// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstAligner__Syms.h"


//======================

void VInstAligner::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VInstAligner::traceInit, &VInstAligner::traceFull, &VInstAligner::traceChg, this);
}
void VInstAligner::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VInstAligner* t=(VInstAligner*)userthis;
    VInstAligner__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VInstAligner::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstAligner* t=(VInstAligner*)userthis;
    VInstAligner__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VInstAligner::traceInitThis(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VInstAligner::traceFullThis(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstAligner::traceInitThis__1(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+4,"clock",-1);
	vcdp->declBit  (c+5,"reset",-1);
	vcdp->declBus  (c+6,"io_instIn",-1,31,0);
	vcdp->declBus  (c+7,"io_instOut",-1,31,0);
	vcdp->declBus  (c+8,"io_pcIn",-1,31,0);
	vcdp->declBus  (c+9,"io_pcOut",-1,31,0);
	vcdp->declBit  (c+4,"InstAligner clock",-1);
	vcdp->declBit  (c+5,"InstAligner reset",-1);
	vcdp->declBus  (c+6,"InstAligner io_instIn",-1,31,0);
	vcdp->declBus  (c+7,"InstAligner io_instOut",-1,31,0);
	vcdp->declBus  (c+8,"InstAligner io_pcIn",-1,31,0);
	vcdp->declBus  (c+9,"InstAligner io_pcOut",-1,31,0);
	vcdp->declBit  (c+1,"InstAligner case1",-1);
	vcdp->declBit  (c+2,"InstAligner case2",-1);
	vcdp->declBus  (c+3,"InstAligner instReg",-1,31,0);
	// Tracing: InstAligner _T // Ignored: Inlined leading underscore at InstAligner.v:17
	// Tracing: InstAligner _T_2 // Ignored: Inlined leading underscore at InstAligner.v:18
	// Tracing: InstAligner _T_4 // Ignored: Inlined leading underscore at InstAligner.v:19
	// Tracing: InstAligner _io_pcOut_T_1 // Ignored: Inlined leading underscore at InstAligner.v:20
	// Tracing: InstAligner _GEN_0 // Ignored: Inlined leading underscore at InstAligner.v:21
	// Tracing: InstAligner _GEN_1 // Ignored: Inlined leading underscore at InstAligner.v:22
	// Tracing: InstAligner _GEN_2 // Ignored: Inlined leading underscore at InstAligner.v:23
	// Tracing: InstAligner _GEN_3 // Ignored: Inlined leading underscore at InstAligner.v:24
	// Tracing: InstAligner _GEN_4 // Ignored: Inlined leading underscore at InstAligner.v:25
	// Tracing: InstAligner _GEN_5 // Ignored: Inlined leading underscore at InstAligner.v:26
	// Tracing: InstAligner _GEN_6 // Ignored: Inlined leading underscore at InstAligner.v:27
	// Tracing: InstAligner _GEN_7 // Ignored: Inlined leading underscore at InstAligner.v:28
	// Tracing: InstAligner _GEN_8 // Ignored: Inlined leading underscore at InstAligner.v:29
	// Tracing: InstAligner _GEN_9 // Ignored: Inlined leading underscore at InstAligner.v:30
	// Tracing: InstAligner _GEN_10 // Ignored: Inlined leading underscore at InstAligner.v:31
	// Tracing: InstAligner _T_7 // Ignored: Inlined leading underscore at InstAligner.v:32
	// Tracing: InstAligner _T_11 // Ignored: Inlined leading underscore at InstAligner.v:33
	// Tracing: InstAligner _GEN_11 // Ignored: Inlined leading underscore at InstAligner.v:34
	// Tracing: InstAligner _GEN_13 // Ignored: Inlined leading underscore at InstAligner.v:35
	// Tracing: InstAligner _GEN_14 // Ignored: Inlined leading underscore at InstAligner.v:36
	// Tracing: InstAligner _io_instOut_T_3 // Ignored: Inlined leading underscore at InstAligner.v:37
	// Tracing: InstAligner _io_pcOut_T_7 // Ignored: Inlined leading underscore at InstAligner.v:38
	// Tracing: InstAligner _GEN_15 // Ignored: Inlined leading underscore at InstAligner.v:39
	// Tracing: InstAligner _GEN_20 // Ignored: Inlined leading underscore at InstAligner.v:40
	// Tracing: InstAligner _GEN_21 // Ignored: Inlined leading underscore at InstAligner.v:41
    }
}

void VInstAligner::traceFullThis__1(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->InstAligner__DOT__case1));
	vcdp->fullBit  (c+2,(vlTOPp->InstAligner__DOT__case2));
	vcdp->fullBus  (c+3,(vlTOPp->InstAligner__DOT__instReg),32);
	vcdp->fullBit  (c+4,(vlTOPp->clock));
	vcdp->fullBit  (c+5,(vlTOPp->reset));
	vcdp->fullBus  (c+6,(vlTOPp->io_instIn),32);
	vcdp->fullBus  (c+7,(vlTOPp->io_instOut),32);
	vcdp->fullBus  (c+8,(vlTOPp->io_pcIn),32);
	vcdp->fullBus  (c+9,(vlTOPp->io_pcOut),32);
    }
}
