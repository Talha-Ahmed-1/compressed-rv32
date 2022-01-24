// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstAligner__Syms.h"


//======================

void VInstAligner::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstAligner* t=(VInstAligner*)userthis;
    VInstAligner__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VInstAligner::traceChgThis(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstAligner::traceChgThis__2(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->InstAligner__DOT__case2));
    }
}

void VInstAligner::traceChgThis__3(VInstAligner__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
	vcdp->chgBus  (c+4,(vlTOPp->io_instIn),32);
	vcdp->chgBus  (c+5,(vlTOPp->io_instOut),32);
	vcdp->chgBus  (c+6,(vlTOPp->io_pcIn),32);
	vcdp->chgBus  (c+7,(vlTOPp->io_pcOut),32);
	vcdp->chgBus  (c+8,((0xffffU & (vlTOPp->io_instIn 
					>> 0x10U))),16);
    }
}
