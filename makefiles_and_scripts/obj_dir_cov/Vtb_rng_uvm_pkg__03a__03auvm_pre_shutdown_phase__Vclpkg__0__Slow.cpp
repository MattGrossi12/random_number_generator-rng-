// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16694]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 245, 17, "", "v_line/uvm_pre_shutdown_phase", "block", "245-246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16695]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 249, 29, "", "v_line/uvm_pre_shutdown_phase", "block", "249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 249, 30, "", "v_line/uvm_pre_shutdown_phase", "block", "249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 254, 7, "", "v_branch/uvm_pre_shutdown_phase", "if", "254-255,258");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16698]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 254, 8, "", "v_branch/uvm_pre_shutdown_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16699]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 253, 43, "", "v_line/uvm_pre_shutdown_phase", "block", "253,256");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 258, 23, "", "v_line/uvm_pre_shutdown_phase", "block", "258-259");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_pre_shutdown_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
