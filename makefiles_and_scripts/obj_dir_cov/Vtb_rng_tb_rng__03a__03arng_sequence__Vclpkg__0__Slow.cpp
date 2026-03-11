// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "../UVM/UVM_sequence.sv", 2, 28, "", "v_line/rng_sequence", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "../UVM/UVM_sequence.sv", 2, 40, "", "v_line/rng_sequence", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "../UVM/UVM_sequence.sv", 2, 6, "", "v_branch/rng_sequence", "if", "2,14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "../UVM/UVM_sequence.sv", 2, 7, "", "v_branch/rng_sequence", "else", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "../UVM/UVM_sequence.sv", 2, 24, "", "v_line/rng_sequence", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "../UVM/UVM_sequence.sv", 2, 29, "", "v_line/rng_sequence", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "../UVM/UVM_sequence.sv", 2, 30, "", "v_line/rng_sequence", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "../UVM/UVM_sequence.sv", 6, 31, "", "v_line/rng_sequence", "block", "6");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "../UVM/UVM_sequence.sv", 9, 25, "", "v_line/rng_sequence", "block", "9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "../UVM/UVM_sequence.sv", 12, 20, "", "v_line/rng_sequence", "block", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "../UVM/UVM_sequence.sv", 14, 14, "", "v_line/rng_sequence", "block", "14,16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "../UVM/UVM_sequence.sv", 29, 13, "", "v_expr/rng_sequence", "(use_seed==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "../UVM/UVM_sequence.sv", 29, 13, "", "v_expr/rng_sequence", "(use_seed==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "../UVM/UVM_sequence.sv", 38, 6, "", "v_branch/rng_sequence", "if", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "../UVM/UVM_sequence.sv", 38, 7, "", "v_branch/rng_sequence", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "../UVM/UVM_sequence.sv", 48, 18, "", "v_line/rng_sequence", "if", "48,50-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "../UVM/UVM_sequence.sv", 48, 19, "", "v_line/rng_sequence", "else", "54,56-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "../UVM/UVM_sequence.sv", 43, 13, "", "v_line/rng_sequence", "elsif", "43-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "../UVM/UVM_sequence.sv", 83, 6, "", "v_branch/rng_sequence", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "../UVM/UVM_sequence.sv", 83, 7, "", "v_branch/rng_sequence", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "../UVM/UVM_sequence.sv", 40, 9, "", "v_line/rng_sequence", "block", "40,62,65,68,71,75,78,83,86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "../UVM/UVM_sequence.sv", 19, 18, "", "v_line/rng_sequence", "block", "19-25,29,33,38,40");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_sequence___configure_coverage(Vtb_rng_tb_rng__03a__03arng_sequence* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
