// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCompressedDecoder__Syms.h"


//======================

void VCompressedDecoder::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCompressedDecoder::traceInit, &VCompressedDecoder::traceFull, &VCompressedDecoder::traceChg, this);
}
void VCompressedDecoder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCompressedDecoder* t=(VCompressedDecoder*)userthis;
    VCompressedDecoder__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCompressedDecoder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCompressedDecoder* t=(VCompressedDecoder*)userthis;
    VCompressedDecoder__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCompressedDecoder::traceInitThis(VCompressedDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCompressedDecoder::traceFullThis(VCompressedDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCompressedDecoder::traceInitThis__1(VCompressedDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_instIn",-1,31,0);
	vcdp->declBus  (c+4,"io_instOut",-1,31,0);
	vcdp->declBit  (c+5,"io_compressed",-1);
	vcdp->declBit  (c+1,"CompressedDecoder clock",-1);
	vcdp->declBit  (c+2,"CompressedDecoder reset",-1);
	vcdp->declBus  (c+3,"CompressedDecoder io_instIn",-1,31,0);
	vcdp->declBus  (c+4,"CompressedDecoder io_instOut",-1,31,0);
	vcdp->declBit  (c+5,"CompressedDecoder io_compressed",-1);
	// Tracing: CompressedDecoder _GEN_0 // Ignored: Inlined leading underscore at CompressedDecoder.v:8
	// Tracing: CompressedDecoder _RS1_T_2 // Ignored: Inlined leading underscore at CompressedDecoder.v:9
	// Tracing: CompressedDecoder _GEN_1 // Ignored: Inlined leading underscore at CompressedDecoder.v:10
	// Tracing: CompressedDecoder _RD_RS2_T_2 // Ignored: Inlined leading underscore at CompressedDecoder.v:11
	// Tracing: CompressedDecoder _T_1 // Ignored: Inlined leading underscore at CompressedDecoder.v:12
	// Tracing: CompressedDecoder _T_2 // Ignored: Inlined leading underscore at CompressedDecoder.v:13
	vcdp->declBit  (c+6,"CompressedDecoder hi_hi_hi",-1);
	vcdp->declBus  (c+7,"CompressedDecoder hi_hi_lo",-1,2,0);
	vcdp->declBit  (c+8,"CompressedDecoder hi_lo_hi",-1);
	vcdp->declBus  (c+9,"CompressedDecoder RS1",-1,4,0);
	vcdp->declBus  (c+10,"CompressedDecoder RD_RS2",-1,4,0);
	// Tracing: CompressedDecoder _T_3 // Ignored: Inlined leading underscore at CompressedDecoder.v:19
	// Tracing: CompressedDecoder _T_6 // Ignored: Inlined leading underscore at CompressedDecoder.v:20
	vcdp->declBit  (c+11,"CompressedDecoder hi_hi_lo_1",-1);
	vcdp->declBus  (c+12,"CompressedDecoder lo_hi_hi_lo",-1,1,0);
	// Tracing: CompressedDecoder _T_7 // Ignored: Inlined leading underscore at CompressedDecoder.v:23
	// Tracing: CompressedDecoder _T_9 // Ignored: Inlined leading underscore at CompressedDecoder.v:24
	// Tracing: CompressedDecoder _T_10 // Ignored: Inlined leading underscore at CompressedDecoder.v:25
	// Tracing: CompressedDecoder _T_11 // Ignored: Inlined leading underscore at CompressedDecoder.v:26
	// Tracing: CompressedDecoder _T_14 // Ignored: Inlined leading underscore at CompressedDecoder.v:27
	// Tracing: CompressedDecoder _T_15 // Ignored: Inlined leading underscore at CompressedDecoder.v:28
	// Tracing: CompressedDecoder _T_18 // Ignored: Inlined leading underscore at CompressedDecoder.v:29
	// Tracing: CompressedDecoder _T_19 // Ignored: Inlined leading underscore at CompressedDecoder.v:30
	// Tracing: CompressedDecoder _T_22 // Ignored: Inlined leading underscore at CompressedDecoder.v:31
	// Tracing: CompressedDecoder _T_23 // Ignored: Inlined leading underscore at CompressedDecoder.v:32
	// Tracing: CompressedDecoder _T_26 // Ignored: Inlined leading underscore at CompressedDecoder.v:33
	// Tracing: CompressedDecoder _T_29 // Ignored: Inlined leading underscore at CompressedDecoder.v:34
	// Tracing: CompressedDecoder _T_32 // Ignored: Inlined leading underscore at CompressedDecoder.v:35
	// Tracing: CompressedDecoder _io_instOut_T // Ignored: Inlined leading underscore at CompressedDecoder.v:36
	// Tracing: CompressedDecoder _io_instOut_T_1 // Ignored: Inlined leading underscore at CompressedDecoder.v:37
	// Tracing: CompressedDecoder _io_instOut_T_2 // Ignored: Inlined leading underscore at CompressedDecoder.v:38
	// Tracing: CompressedDecoder _io_instOut_T_3 // Ignored: Inlined leading underscore at CompressedDecoder.v:39
	// Tracing: CompressedDecoder _io_instOut_T_4 // Ignored: Inlined leading underscore at CompressedDecoder.v:40
	// Tracing: CompressedDecoder _io_instOut_T_5 // Ignored: Inlined leading underscore at CompressedDecoder.v:41
	// Tracing: CompressedDecoder _io_instOut_T_6 // Ignored: Inlined leading underscore at CompressedDecoder.v:42
	// Tracing: CompressedDecoder _io_instOut_T_7 // Ignored: Inlined leading underscore at CompressedDecoder.v:43
    }
}

void VCompressedDecoder::traceFullThis__1(VCompressedDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_instIn),32);
	vcdp->fullBus  (c+4,(vlTOPp->io_instOut),32);
	vcdp->fullBit  (c+5,(vlTOPp->io_compressed));
	vcdp->fullBit  (c+6,((1U & (vlTOPp->io_instIn 
				    >> 5U))));
	vcdp->fullBus  (c+7,((7U & (vlTOPp->io_instIn 
				    >> 0xaU))),3);
	vcdp->fullBit  (c+8,((1U & (vlTOPp->io_instIn 
				    >> 6U))));
	vcdp->fullBus  (c+9,((0xfU & ((IData)(8U) + 
				      (7U & (vlTOPp->io_instIn 
					     >> 2U))))),5);
	vcdp->fullBus  (c+10,((0xfU & ((IData)(8U) 
				       + (7U & (vlTOPp->io_instIn 
						>> 7U))))),5);
	vcdp->fullBit  (c+11,((1U & (vlTOPp->io_instIn 
				     >> 0xcU))));
	vcdp->fullBus  (c+12,((3U & (vlTOPp->io_instIn 
				     >> 0xaU))),2);
    }
}
