// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16708]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 289, 17, "", "v_line/uvm_post_shutdown_phase", "block", "289-290");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16709]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 293, 29, "", "v_line/uvm_post_shutdown_phase", "block", "293");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16710]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 293, 30, "", "v_line/uvm_post_shutdown_phase", "block", "293");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16711]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 298, 7, "", "v_branch/uvm_post_shutdown_phase", "if", "298-299,302");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16712]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 298, 8, "", "v_branch/uvm_post_shutdown_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16713]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 297, 44, "", "v_line/uvm_post_shutdown_phase", "block", "297,300");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16714]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 302, 23, "", "v_line/uvm_post_shutdown_phase", "block", "302-303");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_post_shutdown_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
