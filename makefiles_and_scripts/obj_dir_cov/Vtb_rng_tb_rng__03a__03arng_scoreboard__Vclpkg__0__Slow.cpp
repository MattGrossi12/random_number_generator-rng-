// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "../UVM/UVM_scoreboard.sv", 2, 28, "", "v_line/rng_scoreboard", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "../UVM/UVM_scoreboard.sv", 2, 40, "", "v_line/rng_scoreboard", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "../UVM/UVM_scoreboard.sv", 2, 29, "", "v_line/rng_scoreboard", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "../UVM/UVM_scoreboard.sv", 2, 30, "", "v_line/rng_scoreboard", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "../UVM/UVM_scoreboard.sv", 34, 14, "", "v_line/rng_scoreboard", "block", "34,36,39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "../UVM/UVM_scoreboard.sv", 42, 19, "", "v_line/rng_scoreboard", "block", "42,44,47,50,53,56,59,62,65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "../UVM/UVM_scoreboard.sv", 88, 6, "", "v_branch/rng_scoreboard", "if", "88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "../UVM/UVM_scoreboard.sv", 88, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "../UVM/UVM_scoreboard.sv", 83, 13, "", "v_branch/rng_scoreboard", "if", "83-85,88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "../UVM/UVM_scoreboard.sv", 83, 14, "", "v_branch/rng_scoreboard", "else", "90,92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "../UVM/UVM_scoreboard.sv", 74, 9, "", "v_branch/rng_scoreboard", "if", "74,76,79,96,99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "../UVM/UVM_scoreboard.sv", 74, 10, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "../UVM/UVM_scoreboard.sv", 74, 29, "", "v_expr/rng_scoreboard", "((val != last_val)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "../UVM/UVM_scoreboard.sv", 74, 29, "", "v_expr/rng_scoreboard", "(last_val_valid==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "../UVM/UVM_scoreboard.sv", 74, 29, "", "v_expr/rng_scoreboard", "(last_val_valid==1 && (val != last_val)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "../UVM/UVM_scoreboard.sv", 68, 27, "", "v_line/rng_scoreboard", "block", "68,70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "../UVM/UVM_scoreboard.sv", 117, 23, "", "v_expr/rng_scoreboard", "((32'h0 != seen.next(k))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "../UVM/UVM_scoreboard.sv", 117, 23, "", "v_expr/rng_scoreboard", "(k__Vfirst==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "../UVM/UVM_scoreboard.sv", 117, 23, "", "v_expr/rng_scoreboard", "(k__Vfirst==0 && (32'h0 != seen.next(k))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "../UVM/UVM_scoreboard.sv", 117, 23, "", "v_line/rng_scoreboard", "block", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "../UVM/UVM_scoreboard.sv", 117, 23, "", "v_branch/rng_scoreboard", "if", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "../UVM/UVM_scoreboard.sv", 117, 24, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "../UVM/UVM_scoreboard.sv", 137, 13, "", "v_branch/rng_scoreboard", "if", "137-138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "../UVM/UVM_scoreboard.sv", 137, 14, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "../UVM/UVM_scoreboard.sv", 127, 23, "", "v_line/rng_scoreboard", "block", "127-128,131,134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "../UVM/UVM_scoreboard.sv", 147, 13, "", "v_branch/rng_scoreboard", "if", "147-148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "../UVM/UVM_scoreboard.sv", 147, 14, "", "v_branch/rng_scoreboard", "else", "150,152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "../UVM/UVM_scoreboard.sv", 156, 13, "", "v_branch/rng_scoreboard", "if", "156-157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "../UVM/UVM_scoreboard.sv", 156, 14, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "../UVM/UVM_scoreboard.sv", 145, 9, "", "v_line/rng_scoreboard", "block", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "../UVM/UVM_scoreboard.sv", 169, 6, "", "v_branch/rng_scoreboard", "if", "169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "../UVM/UVM_scoreboard.sv", 169, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "../UVM/UVM_scoreboard.sv", 174, 6, "", "v_branch/rng_scoreboard", "if", "174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "../UVM/UVM_scoreboard.sv", 174, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "../UVM/UVM_scoreboard.sv", 179, 6, "", "v_branch/rng_scoreboard", "if", "179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "../UVM/UVM_scoreboard.sv", 179, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "../UVM/UVM_scoreboard.sv", 186, 6, "", "v_branch/rng_scoreboard", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "../UVM/UVM_scoreboard.sv", 186, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "../UVM/UVM_scoreboard.sv", 183, 9, "", "v_branch/rng_scoreboard", "if", "183,186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "../UVM/UVM_scoreboard.sv", 183, 10, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "../UVM/UVM_scoreboard.sv", 195, 6, "", "v_branch/rng_scoreboard", "if", "195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "../UVM/UVM_scoreboard.sv", 195, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "../UVM/UVM_scoreboard.sv", 191, 9, "", "v_branch/rng_scoreboard", "if", "191,195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "../UVM/UVM_scoreboard.sv", 191, 10, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "../UVM/UVM_scoreboard.sv", 103, 19, "", "v_line/rng_scoreboard", "block", "103-108,111,114,117,122,125,127,143,145,162,169,174,179");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_scoreboard___configure_coverage(Vtb_rng_tb_rng__03a__03arng_scoreboard* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
