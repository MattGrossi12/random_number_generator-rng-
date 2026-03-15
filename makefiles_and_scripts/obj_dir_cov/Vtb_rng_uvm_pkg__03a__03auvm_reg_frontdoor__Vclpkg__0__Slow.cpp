// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20853]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 397, 28, "", "v_line/uvm_reg_frontdoor", "block", "397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20854]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 397, 40, "", "v_line/uvm_reg_frontdoor", "block", "397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20855]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 397, 29, "", "v_line/uvm_reg_frontdoor", "block", "397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20856]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 397, 30, "", "v_line/uvm_reg_frontdoor", "block", "397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20857]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 414, 13, "", "v_line/uvm_reg_frontdoor", "block", "414-415");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
