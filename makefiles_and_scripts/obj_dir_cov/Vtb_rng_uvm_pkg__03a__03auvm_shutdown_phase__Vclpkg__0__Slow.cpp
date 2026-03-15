// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 267, 17, "", "v_line/uvm_shutdown_phase", "block", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 271, 29, "", "v_line/uvm_shutdown_phase", "block", "271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16698]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 271, 30, "", "v_line/uvm_shutdown_phase", "block", "271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16699]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 276, 7, "", "v_branch/uvm_shutdown_phase", "if", "276-277,280");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 276, 8, "", "v_branch/uvm_shutdown_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16701]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 275, 39, "", "v_line/uvm_shutdown_phase", "block", "275,278");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16702]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 280, 23, "", "v_line/uvm_shutdown_phase", "block", "280-281");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_shutdown_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
