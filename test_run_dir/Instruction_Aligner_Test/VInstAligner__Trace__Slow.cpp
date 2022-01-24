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
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBus  (c+4,"io_instIn",-1,31,0);
	vcdp->declBus  (c+5,"io_instOut",-1,31,0);
	vcdp->declBus  (c+6,"io_pcIn",-1,31,0);
	vcdp->declBus  (c+7,"io_pcOut",-1,31,0);
	vcdp->declBit  (c+2,"InstAligner clock",-1);
	vcdp->declBit  (c+3,"InstAligner reset",-1);
	vcdp->declBus  (c+4,"InstAligner io_instIn",-1,31,0);
	vcdp->declBus  (c+5,"InstAligner io_instOut",-1,31,0);
	vcdp->declBus  (c+6,"InstAligner io_pcIn",-1,31,0);
	vcdp->declBus  (c+7,"InstAligner io_pcOut",-1,31,0);
	vcdp->declBit  (c+1,"InstAligner case2",-1);
	// Tracing: InstAligner _T // Ignored: Inlined leading underscore at InstAligner.v:13
	// Tracing: InstAligner _io_pcOut_T_1 // Ignored: Inlined leading underscore at InstAligner.v:14
	// Tracing: InstAligner _GEN_0 // Ignored: Inlined leading underscore at InstAligner.v:15
	// Tracing: InstAligner _GEN_2 // Ignored: Inlined leading underscore at InstAligner.v:16
	// Tracing: InstAligner _GEN_3 // Ignored: Inlined leading underscore at InstAligner.v:17
	vcdp->declBus  (c+8,"InstAligner io_instOut_lo",-1,15,0);
	// Tracing: InstAligner _io_instOut_T_1 // Ignored: Inlined leading underscore at InstAligner.v:19
	// Tracing: InstAligner _io_pcOut_T_3 // Ignored: Inlined leading underscore at InstAligner.v:20
	// Tracing: InstAligner _GEN_5 // Ignored: Inlined leading underscore at InstAligner.v:21
	// Tracing: InstAligner _GEN_6 // Ignored: Inlined leading underscore at InstAligner.v:22
    }
}

void VInstAligner::traceFullThis__1(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->InstAligner__DOT__case2));
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
	vcdp->fullBus  (c+4,(vlTOPp->io_instIn),32);
	vcdp->fullBus  (c+5,(vlTOPp->io_instOut),32);
	vcdp->fullBus  (c+6,(vlTOPp->io_pcIn),32);
	vcdp->fullBus  (c+7,(vlTOPp->io_pcOut),32);
	vcdp->fullBus  (c+8,((0xffffU & (vlTOPp->io_instIn 
					 >> 0x10U))),16);
    }
}
