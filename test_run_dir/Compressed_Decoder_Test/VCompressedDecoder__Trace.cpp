// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCompressedDecoder__Syms.h"


//======================

void VCompressedDecoder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCompressedDecoder* t=(VCompressedDecoder*)userthis;
    VCompressedDecoder__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCompressedDecoder::traceChgThis(VCompressedDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCompressedDecoder::traceChgThis__2(VCompressedDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBus  (c+3,(vlTOPp->io_instIn),32);
	vcdp->chgBus  (c+4,(vlTOPp->io_instOut),32);
	vcdp->chgBit  (c+5,(vlTOPp->io_compressed));
	vcdp->chgBit  (c+6,((1U & (vlTOPp->io_instIn 
				   >> 5U))));
	vcdp->chgBus  (c+7,((7U & (vlTOPp->io_instIn 
				   >> 0xaU))),3);
	vcdp->chgBit  (c+8,((1U & (vlTOPp->io_instIn 
				   >> 6U))));
	vcdp->chgBus  (c+9,((0xfU & ((IData)(8U) + 
				     (7U & (vlTOPp->io_instIn 
					    >> 2U))))),5);
	vcdp->chgBus  (c+10,((0xfU & ((IData)(8U) + 
				      (7U & (vlTOPp->io_instIn 
					     >> 7U))))),5);
	vcdp->chgBit  (c+11,((1U & (vlTOPp->io_instIn 
				    >> 0xcU))));
	vcdp->chgBus  (c+12,((3U & (vlTOPp->io_instIn 
				    >> 0xaU))),2);
    }
}
