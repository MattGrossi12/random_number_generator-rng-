// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16453]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 611, 28, "", "v_line/uvm_phase_state_change", "block", "611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16454]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 611, 40, "", "v_line/uvm_phase_state_change", "block", "611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16455]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 611, 6, "", "v_branch/uvm_phase_state_change", "if", "611,618");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16456]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 611, 7, "", "v_branch/uvm_phase_state_change", "else", "611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16457]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 611, 24, "", "v_line/uvm_phase_state_change", "block", "611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16458]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 611, 29, "", "v_line/uvm_phase_state_change", "block", "611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16459]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 611, 30, "", "v_line/uvm_phase_state_change", "block", "611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16460]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 618, 12, "", "v_line/uvm_phase_state_change", "block", "618-619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16461]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 625, 36, "", "v_line/uvm_phase_state_change", "block", "625-626");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16462]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 631, 36, "", "v_line/uvm_phase_state_change", "block", "631-632");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16463]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 637, 22, "", "v_line/uvm_phase_state_change", "block", "637-638");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
