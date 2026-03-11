// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23370]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 64, 28, "", "v_line/uvm_reg_seq_base", "block", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23371]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 64, 40, "", "v_line/uvm_reg_seq_base", "block", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23372]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 64, 6, "", "v_branch/uvm_reg_seq_base", "if", "64,67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23373]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 64, 7, "", "v_branch/uvm_reg_seq_base", "else", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23374]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 64, 24, "", "v_line/uvm_reg_seq_base", "block", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23375]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 64, 29, "", "v_line/uvm_reg_seq_base", "block", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23376]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 64, 30, "", "v_line/uvm_reg_seq_base", "block", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23377]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 67, 10, "", "v_line/uvm_reg_seq_base", "block", "67-68");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
