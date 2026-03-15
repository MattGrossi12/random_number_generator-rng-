// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16647]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 115, 17, "", "v_line/uvm_pre_configure_phase", "block", "115-116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16648]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 119, 29, "", "v_line/uvm_pre_configure_phase", "block", "119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16649]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 119, 30, "", "v_line/uvm_pre_configure_phase", "block", "119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16650]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 124, 7, "", "v_branch/uvm_pre_configure_phase", "if", "124-125,128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16651]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 124, 8, "", "v_branch/uvm_pre_configure_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16652]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 123, 44, "", "v_line/uvm_pre_configure_phase", "block", "123,126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16653]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 128, 23, "", "v_line/uvm_pre_configure_phase", "block", "128-129");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_pre_configure_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
