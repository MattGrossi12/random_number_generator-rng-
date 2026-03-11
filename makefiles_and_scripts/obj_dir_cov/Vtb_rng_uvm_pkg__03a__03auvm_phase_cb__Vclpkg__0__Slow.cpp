// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_phase_cb__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_phase_cb__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase_cb__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_phase_cb__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_phase_cb__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase_cb__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16469]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 661, 12, "", "v_line/uvm_phase_cb", "block", "661-662");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16470]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 667, 25, "", "v_line/uvm_phase_cb", "block", "667");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_phase_cb___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_phase_cb* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase_cb___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
