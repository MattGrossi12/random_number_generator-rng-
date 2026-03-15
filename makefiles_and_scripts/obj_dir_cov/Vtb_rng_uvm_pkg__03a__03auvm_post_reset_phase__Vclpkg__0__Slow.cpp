// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16640]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 93, 17, "", "v_line/uvm_post_reset_phase", "block", "93-94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16641]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 97, 29, "", "v_line/uvm_post_reset_phase", "block", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16642]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 97, 30, "", "v_line/uvm_post_reset_phase", "block", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16643]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 102, 7, "", "v_branch/uvm_post_reset_phase", "if", "102-103,106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16644]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 102, 8, "", "v_branch/uvm_post_reset_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16645]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 101, 41, "", "v_line/uvm_post_reset_phase", "block", "101,104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16646]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 106, 23, "", "v_line/uvm_post_reset_phase", "block", "106-107");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_post_reset_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
