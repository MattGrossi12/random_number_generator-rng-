// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reset_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reset_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reset_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reset_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reset_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reset_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16638]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 72, 17, "", "v_line/uvm_reset_phase", "block", "72-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16639]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 76, 29, "", "v_line/uvm_reset_phase", "block", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16640]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 76, 30, "", "v_line/uvm_reset_phase", "block", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16641]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 81, 7, "", "v_branch/uvm_reset_phase", "if", "81-82,85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16642]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 81, 8, "", "v_branch/uvm_reset_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16643]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 80, 36, "", "v_line/uvm_reset_phase", "block", "80,83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16644]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 85, 23, "", "v_line/uvm_reset_phase", "block", "85-86");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reset_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reset_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reset_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
