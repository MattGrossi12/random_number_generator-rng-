// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16673]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 179, 17, "", "v_line/uvm_pre_main_phase", "block", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16674]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 183, 29, "", "v_line/uvm_pre_main_phase", "block", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16675]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 183, 30, "", "v_line/uvm_pre_main_phase", "block", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16676]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 188, 7, "", "v_branch/uvm_pre_main_phase", "if", "188-189,192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16677]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 188, 8, "", "v_branch/uvm_pre_main_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16678]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 187, 39, "", "v_line/uvm_pre_main_phase", "block", "187,190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16679]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 192, 23, "", "v_line/uvm_pre_main_phase", "block", "192-193");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_pre_main_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
