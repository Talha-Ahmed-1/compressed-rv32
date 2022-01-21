// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCompressedDecoder.h for the primary calling header

#include "VCompressedDecoder.h" // For This
#include "VCompressedDecoder__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCompressedDecoder) {
    VCompressedDecoder__Syms* __restrict vlSymsp = __VlSymsp = new VCompressedDecoder__Syms(this, name());
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCompressedDecoder::__Vconfigure(VCompressedDecoder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCompressedDecoder::~VCompressedDecoder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VCompressedDecoder::eval() {
    VCompressedDecoder__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VCompressedDecoder::eval\n"); );
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

void VCompressedDecoder::_eval_initial_loop(VCompressedDecoder__Syms* __restrict vlSymsp) {
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

void VCompressedDecoder::_initial__TOP__1(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_initial__TOP__1\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at CompressedDecoder.v:31
    vlTOPp->io_compressed = 1U;
}

VL_INLINE_OPT void VCompressedDecoder::_combo__TOP__2(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_combo__TOP__2\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_instOut = ((0x8c61U == (0xfc63U & vlTOPp->io_instIn))
			   ? (0x1c33U | ((0x1e0000U 
					  & (((IData)(8U) 
					      + (7U 
						 & (vlTOPp->io_instIn 
						    >> 7U))) 
					     << 0x11U)) 
					 | ((0x1e000U 
					     & (((IData)(8U) 
						 + 
						 (7U 
						  & (vlTOPp->io_instIn 
						     >> 2U))) 
						<< 0xdU)) 
					    | (0x3c0U 
					       & (((IData)(8U) 
						   + 
						   (7U 
						    & (vlTOPp->io_instIn 
						       >> 7U))) 
						  << 6U)))))
			   : ((0x8c41U == (0xfc63U 
					   & vlTOPp->io_instIn))
			       ? (0x1833U | ((0x1e0000U 
					      & (((IData)(8U) 
						  + 
						  (7U 
						   & (vlTOPp->io_instIn 
						      >> 7U))) 
						 << 0x11U)) 
					     | ((0x1e000U 
						 & (((IData)(8U) 
						     + 
						     (7U 
						      & (vlTOPp->io_instIn 
							 >> 2U))) 
						    << 0xdU)) 
						| (0x3c0U 
						   & (((IData)(8U) 
						       + 
						       (7U 
							& (vlTOPp->io_instIn 
							   >> 7U))) 
						      << 6U)))))
			       : ((0x8c21U == (0xfc63U 
					       & vlTOPp->io_instIn))
				   ? (0x1033U | ((0x1e0000U 
						  & (((IData)(8U) 
						      + 
						      (7U 
						       & (vlTOPp->io_instIn 
							  >> 7U))) 
						     << 0x11U)) 
						 | ((0x1e000U 
						     & (((IData)(8U) 
							 + 
							 (7U 
							  & (vlTOPp->io_instIn 
							     >> 2U))) 
							<< 0xdU)) 
						    | (0x3c0U 
						       & (((IData)(8U) 
							   + 
							   (7U 
							    & (vlTOPp->io_instIn 
							       >> 7U))) 
							  << 6U)))))
				   : ((0x8c01U == (0xfc63U 
						   & vlTOPp->io_instIn))
				       ? (0x1000033U 
					  | ((0x78000U 
					      & (((IData)(8U) 
						  + 
						  (7U 
						   & (vlTOPp->io_instIn 
						      >> 7U))) 
						 << 0xfU)) 
					     | ((0x7800U 
						 & (((IData)(8U) 
						     + 
						     (7U 
						      & (vlTOPp->io_instIn 
							 >> 2U))) 
						    << 0xbU)) 
						| (0x3c0U 
						   & (((IData)(8U) 
						       + 
						       (7U 
							& (vlTOPp->io_instIn 
							   >> 7U))) 
						      << 6U)))))
				       : ((1U == (0xffffU 
						  & vlTOPp->io_instIn))
					   ? 0x13U : 
					  ((0x9002U 
					    == (0xffffU 
						& vlTOPp->io_instIn))
					    ? 0x13U
					    : ((0U 
						== 
						(0xffffU 
						 & vlTOPp->io_instIn))
					        ? 0U
					        : vlTOPp->io_instIn)))))));
}

void VCompressedDecoder::_eval(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_eval\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void VCompressedDecoder::_eval_initial(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_eval_initial\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VCompressedDecoder::final() {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::final\n"); );
    // Variables
    VCompressedDecoder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCompressedDecoder::_eval_settle(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_eval_settle\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VCompressedDecoder::_change_request(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_change_request\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VCompressedDecoder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instIn = VL_RAND_RESET_I(32);
    io_instOut = VL_RAND_RESET_I(32);
    io_compressed = VL_RAND_RESET_I(1);
}

void VCompressedDecoder::_configure_coverage(VCompressedDecoder__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}