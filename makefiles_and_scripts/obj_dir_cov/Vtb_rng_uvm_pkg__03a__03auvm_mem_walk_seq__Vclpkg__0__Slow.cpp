// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24663]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 218, 28, "", "v_line/uvm_mem_walk_seq", "block", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24664]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 218, 40, "", "v_line/uvm_mem_walk_seq", "block", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24665]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 218, 6, "", "v_branch/uvm_mem_walk_seq", "if", "218,221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24666]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 218, 7, "", "v_branch/uvm_mem_walk_seq", "else", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24667]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 218, 24, "", "v_line/uvm_mem_walk_seq", "block", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24668]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 218, 29, "", "v_line/uvm_mem_walk_seq", "block", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24669]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 218, 30, "", "v_line/uvm_mem_walk_seq", "block", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24670]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 221, 13, "", "v_line/uvm_mem_walk_seq", "block", "221-222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24671]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 231, 6, "", "v_branch/uvm_mem_walk_seq", "if", "231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24672]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 231, 7, "", "v_branch/uvm_mem_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24673]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 230, 7, "", "v_branch/uvm_mem_walk_seq", "if", "230-232");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24674]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 230, 8, "", "v_branch/uvm_mem_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24675]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 228, 17, "", "v_line/uvm_mem_walk_seq", "block", "228,235,237,239-240,242");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24676]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 253, 7, "", "v_branch/uvm_mem_walk_seq", "if", "253,259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24677]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 253, 8, "", "v_branch/uvm_mem_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24678]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 265, 10, "", "v_branch/uvm_mem_walk_seq", "if", "265,271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24679]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 265, 11, "", "v_branch/uvm_mem_walk_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24680]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 263, 21, "", "v_line/uvm_mem_walk_seq", "block", "263,273-274");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24681]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 281, 24, "", "v_line/uvm_mem_walk_seq", "block", "281-282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24682]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 250, 27, "", "v_line/uvm_mem_walk_seq", "block", "250-251,262-263,277-278,280-281");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24683]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 300, 17, "", "v_line/uvm_mem_walk_seq", "block", "300");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
