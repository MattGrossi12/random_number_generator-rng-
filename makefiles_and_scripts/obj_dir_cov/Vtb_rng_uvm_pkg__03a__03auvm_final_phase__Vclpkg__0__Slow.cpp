// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_final_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_final_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_final_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_final_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_final_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_final_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16619]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 322, 26, "", "v_line/uvm_final_phase", "block", "322-323");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16620]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 326, 29, "", "v_line/uvm_final_phase", "block", "326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16621]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 326, 30, "", "v_line/uvm_final_phase", "block", "326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16622]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 331, 7, "", "v_branch/uvm_final_phase", "if", "331-332,335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16623]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 331, 8, "", "v_branch/uvm_final_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16624]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 330, 36, "", "v_line/uvm_final_phase", "block", "330,333");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16625]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 335, 23, "", "v_line/uvm_final_phase", "block", "335-336");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_final_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_final_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_final_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
