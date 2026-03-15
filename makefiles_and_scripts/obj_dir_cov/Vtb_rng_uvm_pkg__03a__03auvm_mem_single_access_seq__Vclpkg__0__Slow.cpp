// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24684]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 62, 28, "", "v_line/uvm_mem_single_access_seq", "block", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24685]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 62, 40, "", "v_line/uvm_mem_single_access_seq", "block", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24686]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 62, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "62,65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24687]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 62, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24688]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 62, 24, "", "v_line/uvm_mem_single_access_seq", "block", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24689]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 62, 29, "", "v_line/uvm_mem_single_access_seq", "block", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24690]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 62, 30, "", "v_line/uvm_mem_single_access_seq", "block", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24691]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 65, 13, "", "v_line/uvm_mem_single_access_seq", "block", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24692]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 75, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24693]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 75, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24694]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 74, 7, "", "v_branch/uvm_mem_single_access_seq", "if", "74-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24695]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 74, 8, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 80, 7, "", "v_branch/uvm_mem_single_access_seq", "if", "80,86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 80, 8, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24698]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 91, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24699]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 91, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 89, 7, "", "v_branch/uvm_mem_single_access_seq", "if", "89,91-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24701]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 89, 8, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24702]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 107, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24703]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 107, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24704]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 118, 13, "", "v_branch/uvm_mem_single_access_seq", "if", "118-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24705]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 118, 14, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24706]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 124, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24707]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 124, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24708]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 122, 16, "", "v_branch/uvm_mem_single_access_seq", "if", "122,124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24709]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 122, 17, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24710]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 120, 13, "", "v_branch/uvm_mem_single_access_seq", "if", "120-121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24711]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 120, 14, "", "v_branch/uvm_mem_single_access_seq", "else", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24712]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 132, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24713]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 132, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24714]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 130, 13, "", "v_branch/uvm_mem_single_access_seq", "if", "130,132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24715]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 130, 14, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24716]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 140, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24717]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 140, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24718]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 145, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24719]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 145, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24720]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 143, 16, "", "v_branch/uvm_mem_single_access_seq", "if", "143,145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24721]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 143, 17, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24722]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 138, 13, "", "v_branch/uvm_mem_single_access_seq", "if", "138,140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24723]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 138, 14, "", "v_branch/uvm_mem_single_access_seq", "else", "142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24724]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 153, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24725]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 153, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24726]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 151, 13, "", "v_branch/uvm_mem_single_access_seq", "if", "151,153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24727]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 151, 14, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24728]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 159, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24729]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 159, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24730]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 165, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24731]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 165, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24732]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 163, 19, "", "v_branch/uvm_mem_single_access_seq", "if", "163,165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24733]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 163, 20, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24734]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 171, 6, "", "v_branch/uvm_mem_single_access_seq", "if", "171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24735]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 171, 7, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24736]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 169, 19, "", "v_branch/uvm_mem_single_access_seq", "if", "169,171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24737]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 169, 20, "", "v_branch/uvm_mem_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24738]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 162, 16, "", "v_branch/uvm_mem_single_access_seq", "if", "162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24739]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 162, 17, "", "v_branch/uvm_mem_single_access_seq", "else", "168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24740]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 157, 13, "", "v_branch/uvm_mem_single_access_seq", "if", "157,159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24741]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 157, 14, "", "v_branch/uvm_mem_single_access_seq", "else", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24742]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 116, 10, "", "v_line/uvm_mem_single_access_seq", "block", "116-117,129,134,136-137,149-150,156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24743]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 101, 21, "", "v_line/uvm_mem_single_access_seq", "block", "101-103,107,109,116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24744]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 69, 17, "", "v_line/uvm_mem_single_access_seq", "block", "69-72,95,98,101");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
