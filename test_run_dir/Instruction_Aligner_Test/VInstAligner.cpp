// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstAligner.h for the primary calling header

#include "VInstAligner.h"      // For This
#include "VInstAligner__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VInstAligner) {
    VInstAligner__Syms* __restrict vlSymsp = __VlSymsp = new VInstAligner__Syms(this, name());
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInstAligner::__Vconfigure(VInstAligner__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VInstAligner::~VInstAligner() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VInstAligner::eval() {
    VInstAligner__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VInstAligner::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VInstAligner::_eval_initial_loop(VInstAligner__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VInstAligner::_sequent__TOP__1(VInstAligner__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_sequent__TOP__1\n"); );
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__InstAligner__DOT__case2,0,0);
    //char	__VpadToAlign5[3];
    // Body
    __Vdly__InstAligner__DOT__case2 = vlTOPp->InstAligner__DOT__case2;
    // ALWAYS at InstAligner.v:44
    vlTOPp->InstAligner__DOT__case1 = ((~ (IData)(vlTOPp->reset)) 
				       & ((IData)(vlTOPp->InstAligner__DOT___T_7)
					   ? (IData)(vlTOPp->InstAligner__DOT___GEN_10)
					   : ((IData)(vlTOPp->InstAligner__DOT__case2)
					       ? ((3U 
						   == 
						   (3U 
						    & (vlTOPp->io_instIn 
						       >> 0x10U))) 
						  & (IData)(vlTOPp->InstAligner__DOT___GEN_10))
					       : (IData)(vlTOPp->InstAligner__DOT___GEN_10))));
    if (vlTOPp->reset) {
	__Vdly__InstAligner__DOT__case2 = 0U;
    } else {
	if (vlTOPp->InstAligner__DOT___T_7) {
	    __Vdly__InstAligner__DOT__case2 = vlTOPp->InstAligner__DOT___GEN_14;
	} else {
	    if (vlTOPp->InstAligner__DOT__case2) {
		__Vdly__InstAligner__DOT__case2 = (
						   (3U 
						    == 
						    (3U 
						     & (vlTOPp->io_instIn 
							>> 0x10U))) 
						   & (3U 
						      == 
						      (3U 
						       & (vlTOPp->io_instIn 
							  >> 0x10U))));
	    }
	}
    }
    vlTOPp->InstAligner__DOT__instReg = ((IData)(vlTOPp->reset)
					  ? vlTOPp->io_instIn
					  : ((IData)(vlTOPp->InstAligner__DOT___T_7)
					      ? (((3U 
						   != 
						   (3U 
						    & vlTOPp->io_instIn)) 
						  & (3U 
						     == 
						     (3U 
						      & (vlTOPp->io_instIn 
							 >> 0x10U))))
						  ? vlTOPp->io_instIn
						  : vlTOPp->InstAligner__DOT___GEN_8)
					      : ((IData)(vlTOPp->InstAligner__DOT__case2)
						  ? 
						 ((3U 
						   != 
						   (3U 
						    & (vlTOPp->io_instIn 
						       >> 0x10U)))
						   ? vlTOPp->InstAligner__DOT___GEN_8
						   : 
						  ((3U 
						    == 
						    (3U 
						     & (vlTOPp->io_instIn 
							>> 0x10U)))
						    ? vlTOPp->io_instIn
						    : vlTOPp->InstAligner__DOT___GEN_8))
						  : vlTOPp->InstAligner__DOT___GEN_8)));
    vlTOPp->InstAligner__DOT__case2 = __Vdly__InstAligner__DOT__case2;
    vlTOPp->InstAligner__DOT___T_7 = (1U & (~ (IData)(vlTOPp->InstAligner__DOT__case2)));
}

void VInstAligner::_settle__TOP__2(VInstAligner__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_settle__TOP__2\n"); );
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->InstAligner__DOT___T_7 = (1U & (~ (IData)(vlTOPp->InstAligner__DOT__case2)));
    vlTOPp->InstAligner__DOT___GEN_14 = (((3U != (3U 
						  & vlTOPp->io_instIn)) 
					  & (3U == 
					     (3U & 
					      (vlTOPp->io_instIn 
					       >> 0x10U)))) 
					 | (IData)(vlTOPp->InstAligner__DOT__case2));
    vlTOPp->InstAligner__DOT___GEN_10 = ((IData)(vlTOPp->InstAligner__DOT__case1)
					  ? ((~ (IData)(vlTOPp->InstAligner__DOT__case1)) 
					     & (IData)(vlTOPp->InstAligner__DOT__case1))
					  : (((3U != 
					       (3U 
						& vlTOPp->io_instIn)) 
					      & (3U 
						 != 
						 (3U 
						  & (vlTOPp->io_instIn 
						     >> 0x10U)))) 
					     | (IData)(vlTOPp->InstAligner__DOT__case1)));
    vlTOPp->InstAligner__DOT___GEN_8 = ((IData)(vlTOPp->InstAligner__DOT__case1)
					 ? vlTOPp->InstAligner__DOT__instReg
					 : (((3U != 
					      (3U & vlTOPp->io_instIn)) 
					     & (3U 
						!= 
						(3U 
						 & (vlTOPp->io_instIn 
						    >> 0x10U))))
					     ? vlTOPp->io_instIn
					     : vlTOPp->InstAligner__DOT__instReg));
    vlTOPp->InstAligner__DOT___GEN_7 = ((IData)(vlTOPp->InstAligner__DOT__case1)
					 ? ((IData)(vlTOPp->InstAligner__DOT__case1)
					     ? (0xffffU 
						& (vlTOPp->InstAligner__DOT__instReg 
						   >> 0x10U))
					     : vlTOPp->InstAligner__DOT__instReg)
					 : (((3U != 
					      (3U & vlTOPp->io_instIn)) 
					     & (3U 
						!= 
						(3U 
						 & (vlTOPp->io_instIn 
						    >> 0x10U))))
					     ? (0xffffU 
						& vlTOPp->io_instIn)
					     : vlTOPp->InstAligner__DOT__instReg));
    vlTOPp->InstAligner__DOT___GEN_9 = ((IData)(vlTOPp->InstAligner__DOT__case1)
					 ? ((IData)(vlTOPp->InstAligner__DOT__case1)
					     ? ((IData)(2U) 
						+ vlTOPp->io_pcIn)
					     : vlTOPp->io_pcIn)
					 : (((3U != 
					      (3U & vlTOPp->io_instIn)) 
					     & (3U 
						!= 
						(3U 
						 & (vlTOPp->io_instIn 
						    >> 0x10U))))
					     ? ((IData)(2U) 
						+ vlTOPp->io_pcIn)
					     : vlTOPp->io_pcIn));
}

VL_INLINE_OPT void VInstAligner::_combo__TOP__3(VInstAligner__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_combo__TOP__3\n"); );
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->InstAligner__DOT___GEN_14 = (((3U != (3U 
						  & vlTOPp->io_instIn)) 
					  & (3U == 
					     (3U & 
					      (vlTOPp->io_instIn 
					       >> 0x10U)))) 
					 | (IData)(vlTOPp->InstAligner__DOT__case2));
    vlTOPp->InstAligner__DOT___GEN_10 = ((IData)(vlTOPp->InstAligner__DOT__case1)
					  ? ((~ (IData)(vlTOPp->InstAligner__DOT__case1)) 
					     & (IData)(vlTOPp->InstAligner__DOT__case1))
					  : (((3U != 
					       (3U 
						& vlTOPp->io_instIn)) 
					      & (3U 
						 != 
						 (3U 
						  & (vlTOPp->io_instIn 
						     >> 0x10U)))) 
					     | (IData)(vlTOPp->InstAligner__DOT__case1)));
    vlTOPp->InstAligner__DOT___GEN_8 = ((IData)(vlTOPp->InstAligner__DOT__case1)
					 ? vlTOPp->InstAligner__DOT__instReg
					 : (((3U != 
					      (3U & vlTOPp->io_instIn)) 
					     & (3U 
						!= 
						(3U 
						 & (vlTOPp->io_instIn 
						    >> 0x10U))))
					     ? vlTOPp->io_instIn
					     : vlTOPp->InstAligner__DOT__instReg));
    vlTOPp->InstAligner__DOT___GEN_7 = ((IData)(vlTOPp->InstAligner__DOT__case1)
					 ? ((IData)(vlTOPp->InstAligner__DOT__case1)
					     ? (0xffffU 
						& (vlTOPp->InstAligner__DOT__instReg 
						   >> 0x10U))
					     : vlTOPp->InstAligner__DOT__instReg)
					 : (((3U != 
					      (3U & vlTOPp->io_instIn)) 
					     & (3U 
						!= 
						(3U 
						 & (vlTOPp->io_instIn 
						    >> 0x10U))))
					     ? (0xffffU 
						& vlTOPp->io_instIn)
					     : vlTOPp->InstAligner__DOT__instReg));
    vlTOPp->InstAligner__DOT___GEN_9 = ((IData)(vlTOPp->InstAligner__DOT__case1)
					 ? ((IData)(vlTOPp->InstAligner__DOT__case1)
					     ? ((IData)(2U) 
						+ vlTOPp->io_pcIn)
					     : vlTOPp->io_pcIn)
					 : (((3U != 
					      (3U & vlTOPp->io_instIn)) 
					     & (3U 
						!= 
						(3U 
						 & (vlTOPp->io_instIn 
						    >> 0x10U))))
					     ? ((IData)(2U) 
						+ vlTOPp->io_pcIn)
					     : vlTOPp->io_pcIn));
    vlTOPp->io_instOut = ((IData)(vlTOPp->InstAligner__DOT__case2)
			   ? ((IData)(vlTOPp->InstAligner__DOT__case2)
			       ? ((0xffff0000U & (vlTOPp->io_instIn 
						  << 0x10U)) 
				  | (0xffffU & (vlTOPp->InstAligner__DOT__instReg 
						>> 0x10U)))
			       : vlTOPp->InstAligner__DOT___GEN_7)
			   : (((3U != (3U & vlTOPp->io_instIn)) 
			       & (3U == (3U & (vlTOPp->io_instIn 
					       >> 0x10U))))
			       ? (0xffffU & vlTOPp->io_instIn)
			       : vlTOPp->InstAligner__DOT___GEN_7));
    vlTOPp->io_pcOut = ((IData)(vlTOPp->InstAligner__DOT__case2)
			 ? ((IData)(vlTOPp->InstAligner__DOT__case2)
			     ? ((IData)(4U) + vlTOPp->io_pcIn)
			     : vlTOPp->InstAligner__DOT___GEN_9)
			 : (((3U != (3U & vlTOPp->io_instIn)) 
			     & (3U == (3U & (vlTOPp->io_instIn 
					     >> 0x10U))))
			     ? ((IData)(2U) + vlTOPp->io_pcIn)
			     : vlTOPp->InstAligner__DOT___GEN_9));
}

void VInstAligner::_settle__TOP__4(VInstAligner__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_settle__TOP__4\n"); );
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_instOut = ((IData)(vlTOPp->InstAligner__DOT__case2)
			   ? ((IData)(vlTOPp->InstAligner__DOT__case2)
			       ? ((0xffff0000U & (vlTOPp->io_instIn 
						  << 0x10U)) 
				  | (0xffffU & (vlTOPp->InstAligner__DOT__instReg 
						>> 0x10U)))
			       : vlTOPp->InstAligner__DOT___GEN_7)
			   : (((3U != (3U & vlTOPp->io_instIn)) 
			       & (3U == (3U & (vlTOPp->io_instIn 
					       >> 0x10U))))
			       ? (0xffffU & vlTOPp->io_instIn)
			       : vlTOPp->InstAligner__DOT___GEN_7));
    vlTOPp->io_pcOut = ((IData)(vlTOPp->InstAligner__DOT__case2)
			 ? ((IData)(vlTOPp->InstAligner__DOT__case2)
			     ? ((IData)(4U) + vlTOPp->io_pcIn)
			     : vlTOPp->InstAligner__DOT___GEN_9)
			 : (((3U != (3U & vlTOPp->io_instIn)) 
			     & (3U == (3U & (vlTOPp->io_instIn 
					     >> 0x10U))))
			     ? ((IData)(2U) + vlTOPp->io_pcIn)
			     : vlTOPp->InstAligner__DOT___GEN_9));
}

void VInstAligner::_eval(VInstAligner__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_eval\n"); );
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VInstAligner::_eval_initial(VInstAligner__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_eval_initial\n"); );
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstAligner::final() {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::final\n"); );
    // Variables
    VInstAligner__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstAligner::_eval_settle(VInstAligner__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_eval_settle\n"); );
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

VL_INLINE_OPT QData VInstAligner::_change_request(VInstAligner__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_change_request\n"); );
    VInstAligner* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VInstAligner::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instIn = VL_RAND_RESET_I(32);
    io_instOut = VL_RAND_RESET_I(32);
    io_pcIn = VL_RAND_RESET_I(32);
    io_pcOut = VL_RAND_RESET_I(32);
    InstAligner__DOT__case1 = VL_RAND_RESET_I(1);
    InstAligner__DOT__case2 = VL_RAND_RESET_I(1);
    InstAligner__DOT__instReg = VL_RAND_RESET_I(32);
    InstAligner__DOT___GEN_7 = VL_RAND_RESET_I(32);
    InstAligner__DOT___GEN_8 = VL_RAND_RESET_I(32);
    InstAligner__DOT___GEN_9 = VL_RAND_RESET_I(32);
    InstAligner__DOT___GEN_10 = VL_RAND_RESET_I(1);
    InstAligner__DOT___T_7 = VL_RAND_RESET_I(1);
    InstAligner__DOT___GEN_14 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VInstAligner::_configure_coverage(VInstAligner__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VInstAligner::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
