// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16626]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 51, 17, "", "v_line/uvm_pre_reset_phase", "block", "51-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16627]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 55, 29, "", "v_line/uvm_pre_reset_phase", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16628]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 55, 30, "", "v_line/uvm_pre_reset_phase", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16629]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 60, 7, "", "v_branch/uvm_pre_reset_phase", "if", "60-61,64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16630]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 60, 8, "", "v_branch/uvm_pre_reset_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16631]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 59, 40, "", "v_line/uvm_pre_reset_phase", "block", "59,62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16632]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 64, 23, "", "v_line/uvm_pre_reset_phase", "block", "64-65");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
