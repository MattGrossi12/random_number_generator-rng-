// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24614]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 66, 28, "", "v_line/uvm_mem_single_walk_seq", "block", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24615]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 66, 40, "", "v_line/uvm_mem_single_walk_seq", "block", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24616]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 66, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "66,81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24617]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 66, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24618]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 66, 24, "", "v_line/uvm_mem_single_walk_seq", "block", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24619]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 66, 29, "", "v_line/uvm_mem_single_walk_seq", "block", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24620]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 66, 30, "", "v_line/uvm_mem_single_walk_seq", "block", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24621]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 81, 13, "", "v_line/uvm_mem_single_walk_seq", "block", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24622]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 97, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24623]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 97, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24624]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 96, 7, "", "v_branch/uvm_mem_single_walk_seq", "if", "96-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24625]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 96, 8, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24626]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 102, 7, "", "v_branch/uvm_mem_single_walk_seq", "if", "102,108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24627]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 102, 8, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24628]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 121, 10, "", "v_branch/uvm_mem_single_walk_seq", "if", "121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24629]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 121, 11, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24630]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 124, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24631]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 124, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24632]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 136, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24633]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 136, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24634]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 134, 13, "", "v_branch/uvm_mem_single_walk_seq", "if", "134,136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24635]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 134, 14, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24636]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 143, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24637]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 143, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24638]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 149, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24639]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 149, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24640]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 147, 19, "", "v_branch/uvm_mem_single_walk_seq", "if", "147,149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24641]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 147, 20, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24642]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 141, 16, "", "v_branch/uvm_mem_single_walk_seq", "if", "141,143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24643]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 141, 17, "", "v_branch/uvm_mem_single_walk_seq", "else", "145-146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24644]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 157, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24645]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 157, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24646]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 155, 16, "", "v_branch/uvm_mem_single_walk_seq", "if", "155,157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24647]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 155, 17, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24648]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 139, 13, "", "v_branch/uvm_mem_single_walk_seq", "if", "139-140,154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24649]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 139, 14, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24650]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 165, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24651]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 165, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24652]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 171, 6, "", "v_branch/uvm_mem_single_walk_seq", "if", "171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24653]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 171, 7, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24654]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 169, 19, "", "v_branch/uvm_mem_single_walk_seq", "if", "169,171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24655]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 169, 20, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24656]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 163, 16, "", "v_branch/uvm_mem_single_walk_seq", "if", "163,165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24657]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 163, 17, "", "v_branch/uvm_mem_single_walk_seq", "else", "167-168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24658]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 161, 13, "", "v_branch/uvm_mem_single_walk_seq", "if", "161-162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24659]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 161, 14, "", "v_branch/uvm_mem_single_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24660]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 131, 10, "", "v_line/uvm_mem_single_walk_seq", "block", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24661]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 116, 21, "", "v_line/uvm_mem_single_walk_seq", "block", "116-118,124,131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24662]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 92, 17, "", "v_line/uvm_mem_single_walk_seq", "block", "92-94,110,113,116");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
