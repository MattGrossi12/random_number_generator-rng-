// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_run_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_run_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_run_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_run_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_run_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_run_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16596]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 219, 17, "", "v_line/uvm_run_phase", "block", "219-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16597]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 223, 29, "", "v_line/uvm_run_phase", "block", "223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16598]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 223, 30, "", "v_line/uvm_run_phase", "block", "223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16599]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 228, 7, "", "v_branch/uvm_run_phase", "if", "228-229,232");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16600]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 228, 8, "", "v_branch/uvm_run_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16601]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 227, 34, "", "v_line/uvm_run_phase", "block", "227,230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16602]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 232, 23, "", "v_line/uvm_run_phase", "block", "232-233");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_run_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_run_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
