// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_connect_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_connect_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_connect_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_connect_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_connect_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_connect_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16575]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 113, 26, "", "v_line/uvm_connect_phase", "block", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16576]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 117, 29, "", "v_line/uvm_connect_phase", "block", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16577]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 117, 30, "", "v_line/uvm_connect_phase", "block", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16578]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 122, 7, "", "v_branch/uvm_connect_phase", "if", "122-123,126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16579]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 122, 8, "", "v_branch/uvm_connect_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16580]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 121, 38, "", "v_line/uvm_connect_phase", "block", "121,124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16581]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 126, 23, "", "v_line/uvm_connect_phase", "block", "126-127");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_connect_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_connect_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_connect_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
