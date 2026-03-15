// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16682]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 223, 17, "", "v_line/uvm_post_main_phase", "block", "223-224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16683]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 227, 29, "", "v_line/uvm_post_main_phase", "block", "227");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16684]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 227, 30, "", "v_line/uvm_post_main_phase", "block", "227");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16685]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 232, 7, "", "v_branch/uvm_post_main_phase", "if", "232-233,236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16686]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 232, 8, "", "v_branch/uvm_post_main_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16687]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 231, 40, "", "v_line/uvm_post_main_phase", "block", "231,234");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16688]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_runtime_phases.svh", 236, 23, "", "v_line/uvm_post_main_phase", "block", "236-237");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_post_main_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
