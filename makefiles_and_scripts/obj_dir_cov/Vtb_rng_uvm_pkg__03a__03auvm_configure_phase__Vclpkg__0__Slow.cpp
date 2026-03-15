// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_configure_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_configure_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_configure_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_configure_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_configure_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_configure_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16654]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 137, 17, "", "v_line/uvm_configure_phase", "block", "137-138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16655]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 141, 29, "", "v_line/uvm_configure_phase", "block", "141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16656]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 141, 30, "", "v_line/uvm_configure_phase", "block", "141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16657]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 146, 7, "", "v_branch/uvm_configure_phase", "if", "146-147,150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16658]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 146, 8, "", "v_branch/uvm_configure_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16659]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 145, 40, "", "v_line/uvm_configure_phase", "block", "145,148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16660]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 150, 23, "", "v_line/uvm_configure_phase", "block", "150-151");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_configure_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_configure_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_configure_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
