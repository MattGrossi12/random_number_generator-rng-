// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22373]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 274, 13, "", "v_line/uvm_reg_indirect_ftdr_seq", "block", "274,277-280");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22374]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 297, 7, "", "v_branch/uvm_reg_indirect_ftdr_seq", "if", "297-298");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22375]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 297, 8, "", "v_branch/uvm_reg_indirect_ftdr_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22376]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 303, 7, "", "v_branch/uvm_reg_indirect_ftdr_seq", "if", "303-304");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22377]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 303, 8, "", "v_branch/uvm_reg_indirect_ftdr_seq", "else", "305-307");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22378]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 283, 17, "", "v_line/uvm_reg_indirect_ftdr_seq", "block", "283,285,287-290,292-293,295,300-301,310-311,313");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
