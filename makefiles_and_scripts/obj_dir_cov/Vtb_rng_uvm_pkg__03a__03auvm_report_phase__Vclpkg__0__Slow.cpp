// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_report_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_report_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16617]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 283, 26, "", "v_line/uvm_report_phase", "block", "283-284");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16618]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 287, 29, "", "v_line/uvm_report_phase", "block", "287");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16619]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 287, 30, "", "v_line/uvm_report_phase", "block", "287");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16620]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 292, 7, "", "v_branch/uvm_report_phase", "if", "292-293,296");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16621]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 292, 8, "", "v_branch/uvm_report_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16622]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 291, 37, "", "v_line/uvm_report_phase", "block", "291,294");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16623]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 296, 23, "", "v_line/uvm_report_phase", "block", "296-297");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_report_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
