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

VL_INLINE_OPT void VCompressedDecoder::_combo__TOP__1(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_combo__TOP__1\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_instOut = ((0x4000U == (0xe003U & vlTOPp->io_instIn))
			   ? (0x103U | ((0x80000U & 
					 (vlTOPp->io_instIn 
					  << 0xeU)) 
					| ((0x70000U 
					    & (vlTOPp->io_instIn 
					       << 6U)) 
					   | ((0x8000U 
					       & (vlTOPp->io_instIn 
						  << 9U)) 
					      | ((0x1e00U 
						  & (((IData)(8U) 
						      + 
						      (7U 
						       & (vlTOPp->io_instIn 
							  >> 7U))) 
						     << 9U)) 
						 | (0x3cU 
						    & (((IData)(8U) 
							+ 
							(7U 
							 & (vlTOPp->io_instIn 
							    >> 2U))) 
						       << 2U)))))))
			   : ((0xc000U == (0xe003U 
					   & vlTOPp->io_instIn))
			       ? (0x823U | ((0x800000U 
					     & (vlTOPp->io_instIn 
						<< 0x12U)) 
					    | ((0x400000U 
						& (vlTOPp->io_instIn 
						   << 0xaU)) 
					       | ((0x1e0000U 
						   & (((IData)(8U) 
						       + 
						       (7U 
							& (vlTOPp->io_instIn 
							   >> 2U))) 
						      << 0x11U)) 
						  | ((0xf000U 
						      & (((IData)(8U) 
							  + 
							  (7U 
							   & (vlTOPp->io_instIn 
							      >> 7U))) 
							 << 0xcU)) 
						     | ((0x300U 
							 & (vlTOPp->io_instIn 
							    >> 2U)) 
							| (0x80U 
							   & (vlTOPp->io_instIn 
							      << 1U))))))))
			       : ((0x8c61U == (0xfc63U 
					       & vlTOPp->io_instIn))
				   ? (0x7033U | ((0xf00000U 
						  & (((IData)(8U) 
						      + 
						      (7U 
						       & (vlTOPp->io_instIn 
							  >> 7U))) 
						     << 0x14U)) 
						 | ((0x78000U 
						     & (((IData)(8U) 
							 + 
							 (7U 
							  & (vlTOPp->io_instIn 
							     >> 2U))) 
							<< 0xfU)) 
						    | (0x780U 
						       & (((IData)(8U) 
							   + 
							   (7U 
							    & (vlTOPp->io_instIn 
							       >> 7U))) 
							  << 7U)))))
				   : ((0x8c41U == (0xfc63U 
						   & vlTOPp->io_instIn))
				       ? (0x6033U | 
					  ((0xf00000U 
					    & (((IData)(8U) 
						+ (7U 
						   & (vlTOPp->io_instIn 
						      >> 7U))) 
					       << 0x14U)) 
					   | ((0x78000U 
					       & (((IData)(8U) 
						   + 
						   (7U 
						    & (vlTOPp->io_instIn 
						       >> 2U))) 
						  << 0xfU)) 
					      | (0x780U 
						 & (((IData)(8U) 
						     + 
						     (7U 
						      & (vlTOPp->io_instIn 
							 >> 7U))) 
						    << 7U)))))
				       : ((0x8c21U 
					   == (0xfc63U 
					       & vlTOPp->io_instIn))
					   ? (0x4033U 
					      | ((0xf00000U 
						  & (((IData)(8U) 
						      + 
						      (7U 
						       & (vlTOPp->io_instIn 
							  >> 7U))) 
						     << 0x14U)) 
						 | ((0x78000U 
						     & (((IData)(8U) 
							 + 
							 (7U 
							  & (vlTOPp->io_instIn 
							     >> 2U))) 
							<< 0xfU)) 
						    | (0x780U 
						       & (((IData)(8U) 
							   + 
							   (7U 
							    & (vlTOPp->io_instIn 
							       >> 7U))) 
							  << 7U)))))
					   : ((0x8c01U 
					       == (0xfc63U 
						   & vlTOPp->io_instIn))
					       ? (0x40000033U 
						  | ((0xf00000U 
						      & (((IData)(8U) 
							  + 
							  (7U 
							   & (vlTOPp->io_instIn 
							      >> 7U))) 
							 << 0x14U)) 
						     | ((0x78000U 
							 & (((IData)(8U) 
							     + 
							     (7U 
							      & (vlTOPp->io_instIn 
								 >> 2U))) 
							    << 0xfU)) 
							| (0x780U 
							   & (((IData)(8U) 
							       + 
							       (7U 
								& (vlTOPp->io_instIn 
								   >> 7U))) 
							      << 7U)))))
					       : ((1U 
						   == 
						   (0xffffU 
						    & vlTOPp->io_instIn))
						   ? 0x13U
						   : 
						  ((0x9002U 
						    == 
						    (0xffffU 
						     & vlTOPp->io_instIn))
						    ? 0x100073U
						    : 
						   ((0U 
						     == 
						     (0xffffU 
						      & vlTOPp->io_instIn))
						     ? 0U
						     : vlTOPp->io_instIn)))))))));
}

void VCompressedDecoder::_settle__TOP__2(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_settle__TOP__2\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_instOut = ((0x4000U == (0xe003U & vlTOPp->io_instIn))
			   ? (0x103U | ((0x80000U & 
					 (vlTOPp->io_instIn 
					  << 0xeU)) 
					| ((0x70000U 
					    & (vlTOPp->io_instIn 
					       << 6U)) 
					   | ((0x8000U 
					       & (vlTOPp->io_instIn 
						  << 9U)) 
					      | ((0x1e00U 
						  & (((IData)(8U) 
						      + 
						      (7U 
						       & (vlTOPp->io_instIn 
							  >> 7U))) 
						     << 9U)) 
						 | (0x3cU 
						    & (((IData)(8U) 
							+ 
							(7U 
							 & (vlTOPp->io_instIn 
							    >> 2U))) 
						       << 2U)))))))
			   : ((0xc000U == (0xe003U 
					   & vlTOPp->io_instIn))
			       ? (0x823U | ((0x800000U 
					     & (vlTOPp->io_instIn 
						<< 0x12U)) 
					    | ((0x400000U 
						& (vlTOPp->io_instIn 
						   << 0xaU)) 
					       | ((0x1e0000U 
						   & (((IData)(8U) 
						       + 
						       (7U 
							& (vlTOPp->io_instIn 
							   >> 2U))) 
						      << 0x11U)) 
						  | ((0xf000U 
						      & (((IData)(8U) 
							  + 
							  (7U 
							   & (vlTOPp->io_instIn 
							      >> 7U))) 
							 << 0xcU)) 
						     | ((0x300U 
							 & (vlTOPp->io_instIn 
							    >> 2U)) 
							| (0x80U 
							   & (vlTOPp->io_instIn 
							      << 1U))))))))
			       : ((0x8c61U == (0xfc63U 
					       & vlTOPp->io_instIn))
				   ? (0x7033U | ((0xf00000U 
						  & (((IData)(8U) 
						      + 
						      (7U 
						       & (vlTOPp->io_instIn 
							  >> 7U))) 
						     << 0x14U)) 
						 | ((0x78000U 
						     & (((IData)(8U) 
							 + 
							 (7U 
							  & (vlTOPp->io_instIn 
							     >> 2U))) 
							<< 0xfU)) 
						    | (0x780U 
						       & (((IData)(8U) 
							   + 
							   (7U 
							    & (vlTOPp->io_instIn 
							       >> 7U))) 
							  << 7U)))))
				   : ((0x8c41U == (0xfc63U 
						   & vlTOPp->io_instIn))
				       ? (0x6033U | 
					  ((0xf00000U 
					    & (((IData)(8U) 
						+ (7U 
						   & (vlTOPp->io_instIn 
						      >> 7U))) 
					       << 0x14U)) 
					   | ((0x78000U 
					       & (((IData)(8U) 
						   + 
						   (7U 
						    & (vlTOPp->io_instIn 
						       >> 2U))) 
						  << 0xfU)) 
					      | (0x780U 
						 & (((IData)(8U) 
						     + 
						     (7U 
						      & (vlTOPp->io_instIn 
							 >> 7U))) 
						    << 7U)))))
				       : ((0x8c21U 
					   == (0xfc63U 
					       & vlTOPp->io_instIn))
					   ? (0x4033U 
					      | ((0xf00000U 
						  & (((IData)(8U) 
						      + 
						      (7U 
						       & (vlTOPp->io_instIn 
							  >> 7U))) 
						     << 0x14U)) 
						 | ((0x78000U 
						     & (((IData)(8U) 
							 + 
							 (7U 
							  & (vlTOPp->io_instIn 
							     >> 2U))) 
							<< 0xfU)) 
						    | (0x780U 
						       & (((IData)(8U) 
							   + 
							   (7U 
							    & (vlTOPp->io_instIn 
							       >> 7U))) 
							  << 7U)))))
					   : ((0x8c01U 
					       == (0xfc63U 
						   & vlTOPp->io_instIn))
					       ? (0x40000033U 
						  | ((0xf00000U 
						      & (((IData)(8U) 
							  + 
							  (7U 
							   & (vlTOPp->io_instIn 
							      >> 7U))) 
							 << 0x14U)) 
						     | ((0x78000U 
							 & (((IData)(8U) 
							     + 
							     (7U 
							      & (vlTOPp->io_instIn 
								 >> 2U))) 
							    << 0xfU)) 
							| (0x780U 
							   & (((IData)(8U) 
							       + 
							       (7U 
								& (vlTOPp->io_instIn 
								   >> 7U))) 
							      << 7U)))))
					       : ((1U 
						   == 
						   (0xffffU 
						    & vlTOPp->io_instIn))
						   ? 0x13U
						   : 
						  ((0x9002U 
						    == 
						    (0xffffU 
						     & vlTOPp->io_instIn))
						    ? 0x100073U
						    : 
						   ((0U 
						     == 
						     (0xffffU 
						      & vlTOPp->io_instIn))
						     ? 0U
						     : vlTOPp->io_instIn)))))))));
    vlTOPp->io_compressed = (vlTOPp->io_instIn != vlTOPp->io_instOut);
}

VL_INLINE_OPT void VCompressedDecoder::_combo__TOP__3(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_combo__TOP__3\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_compressed = (vlTOPp->io_instIn != vlTOPp->io_instOut);
}

void VCompressedDecoder::_eval(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_eval\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void VCompressedDecoder::_eval_initial(VCompressedDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_eval_initial\n"); );
    VCompressedDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    vlTOPp->_settle__TOP__2(vlSymsp);
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
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VCompressedDecoder::_configure_coverage(VCompressedDecoder__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCompressedDecoder::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
