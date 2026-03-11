// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_check_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_check_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_check_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_check_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_check_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_check_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16610]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 262, 26, "", "v_line/uvm_check_phase", "block", "262-263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16611]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 266, 29, "", "v_line/uvm_check_phase", "block", "266");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16612]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 266, 30, "", "v_line/uvm_check_phase", "block", "266");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16613]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 271, 7, "", "v_branch/uvm_check_phase", "if", "271-272,275");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16614]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 271, 8, "", "v_branch/uvm_check_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16615]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 270, 36, "", "v_line/uvm_check_phase", "block", "270,273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16616]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 275, 23, "", "v_line/uvm_check_phase", "block", "275-276");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_check_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_check_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_check_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
