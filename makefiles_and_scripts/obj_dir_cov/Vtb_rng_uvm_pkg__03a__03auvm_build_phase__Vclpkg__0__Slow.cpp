// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_build_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_build_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_build_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_build_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_build_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_build_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16568]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 69, 26, "", "v_line/uvm_build_phase", "block", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16569]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 73, 29, "", "v_line/uvm_build_phase", "block", "73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16570]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 73, 30, "", "v_line/uvm_build_phase", "block", "73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16571]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 79, 7, "", "v_branch/uvm_build_phase", "if", "79-80,83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16572]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 79, 8, "", "v_branch/uvm_build_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16573]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 78, 36, "", "v_line/uvm_build_phase", "block", "78,81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16574]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 83, 23, "", "v_line/uvm_build_phase", "block", "83-84");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_build_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_build_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_build_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
