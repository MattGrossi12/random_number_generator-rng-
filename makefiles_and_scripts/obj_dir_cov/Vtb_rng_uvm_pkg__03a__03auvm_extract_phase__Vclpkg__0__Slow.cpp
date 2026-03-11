// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_extract_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_extract_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_extract_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_extract_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_extract_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_extract_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16603]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 241, 26, "", "v_line/uvm_extract_phase", "block", "241-242");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16604]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 245, 29, "", "v_line/uvm_extract_phase", "block", "245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16605]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 245, 30, "", "v_line/uvm_extract_phase", "block", "245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16606]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 250, 7, "", "v_branch/uvm_extract_phase", "if", "250-251,254");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16607]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 250, 8, "", "v_branch/uvm_extract_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16608]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 249, 38, "", "v_line/uvm_extract_phase", "block", "249,252");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16609]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 254, 23, "", "v_line/uvm_extract_phase", "block", "254-255");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_extract_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_extract_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_extract_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
