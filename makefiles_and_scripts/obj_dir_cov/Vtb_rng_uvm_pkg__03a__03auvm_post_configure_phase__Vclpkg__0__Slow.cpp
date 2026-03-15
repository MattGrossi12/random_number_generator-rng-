// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16661]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 158, 17, "", "v_line/uvm_post_configure_phase", "block", "158-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16662]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 162, 29, "", "v_line/uvm_post_configure_phase", "block", "162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16663]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 162, 30, "", "v_line/uvm_post_configure_phase", "block", "162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16664]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 167, 7, "", "v_branch/uvm_post_configure_phase", "if", "167-168,171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16665]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 167, 8, "", "v_branch/uvm_post_configure_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16666]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 166, 45, "", "v_line/uvm_post_configure_phase", "block", "166,169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16667]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 171, 23, "", "v_line/uvm_post_configure_phase", "block", "171-172");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_post_configure_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
