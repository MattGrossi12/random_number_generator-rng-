// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16577]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 153, 26, "", "v_line/uvm_end_of_elaboration_phase", "block", "153-154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16578]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 157, 29, "", "v_line/uvm_end_of_elaboration_phase", "block", "157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16579]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 157, 30, "", "v_line/uvm_end_of_elaboration_phase", "block", "157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16580]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 162, 7, "", "v_branch/uvm_end_of_elaboration_phase", "if", "162-163,167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16581]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 162, 8, "", "v_branch/uvm_end_of_elaboration_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16582]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 161, 49, "", "v_line/uvm_end_of_elaboration_phase", "block", "161,165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16583]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 167, 23, "", "v_line/uvm_end_of_elaboration_phase", "block", "167-168");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_end_of_elaboration_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
