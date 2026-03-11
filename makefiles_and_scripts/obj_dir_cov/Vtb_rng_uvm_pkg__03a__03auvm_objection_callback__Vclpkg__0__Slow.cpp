// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_objection_callback__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_objection_callback__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_objection_callback__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_objection_callback__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_objection_callback__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_objection_callback__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17694]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1199, 12, "", "v_line/uvm_objection_callback", "block", "1199-1200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17695]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1208, 25, "", "v_line/uvm_objection_callback", "block", "1208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1217, 25, "", "v_line/uvm_objection_callback", "block", "1217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1226, 16, "", "v_line/uvm_objection_callback", "block", "1226");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_objection_callback___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_objection_callback* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection_callback___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
