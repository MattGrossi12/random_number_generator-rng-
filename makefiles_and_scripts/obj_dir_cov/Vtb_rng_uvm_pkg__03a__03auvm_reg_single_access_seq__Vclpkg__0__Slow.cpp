// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24770]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 71, 28, "", "v_line/uvm_reg_single_access_seq", "block", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24771]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 71, 40, "", "v_line/uvm_reg_single_access_seq", "block", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24772]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 71, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "71,74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24773]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 71, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24774]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 71, 24, "", "v_line/uvm_reg_single_access_seq", "block", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24775]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 71, 29, "", "v_line/uvm_reg_single_access_seq", "block", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24776]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 71, 30, "", "v_line/uvm_reg_single_access_seq", "block", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24777]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 74, 13, "", "v_line/uvm_reg_single_access_seq", "block", "74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24778]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 82, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24779]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 82, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24780]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 81, 7, "", "v_branch/uvm_reg_single_access_seq", "if", "81-83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24781]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 81, 8, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24782]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 87, 7, "", "v_branch/uvm_reg_single_access_seq", "if", "87,91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24783]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 87, 8, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24784]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 96, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24785]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 96, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24786]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 94, 7, "", "v_branch/uvm_reg_single_access_seq", "if", "94,96-97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24787]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 94, 8, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24788]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 112, 16, "", "v_branch/uvm_reg_single_access_seq", "if", "112-113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24789]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 112, 17, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24790]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 118, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24791]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 118, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24792]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 115, 16, "", "v_branch/uvm_reg_single_access_seq", "if", "115,118-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24793]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 115, 17, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24794]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 111, 24, "", "v_line/uvm_reg_single_access_seq", "block", "111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24795]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 124, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24796]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 124, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24797]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 122, 8, "", "v_branch/uvm_reg_single_access_seq", "if", "122,124-125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24798]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 122, 9, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24799]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 108, 24, "", "v_line/uvm_reg_single_access_seq", "block", "108-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24800]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 141, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24801]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 141, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24802]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 150, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24803]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 150, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24804]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 147, 10, "", "v_branch/uvm_reg_single_access_seq", "if", "147,150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24805]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 147, 11, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24806]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 158, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24807]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 158, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24808]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 155, 10, "", "v_branch/uvm_reg_single_access_seq", "if", "155,158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24809]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 155, 11, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24810]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 165, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24811]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 165, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24812]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 162, 10, "", "v_branch/uvm_reg_single_access_seq", "if", "162,165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24813]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 162, 11, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24814]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 173, 6, "", "v_branch/uvm_reg_single_access_seq", "if", "173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24815]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 173, 7, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24816]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 169, 10, "", "v_branch/uvm_reg_single_access_seq", "if", "169,173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24817]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 169, 11, "", "v_branch/uvm_reg_single_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24818]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 135, 21, "", "v_line/uvm_reg_single_access_seq", "block", "135-137,141,143,145,152,154,161,168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24819]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 78, 17, "", "v_line/uvm_reg_single_access_seq", "block", "78-79,101,104-105,107-108,135");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
