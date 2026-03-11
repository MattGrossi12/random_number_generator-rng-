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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "../UVM/UVM_sequence.sv", 10, 28, "", "v_line/rng_sequence", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "../UVM/UVM_sequence.sv", 10, 40, "", "v_line/rng_sequence", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "../UVM/UVM_sequence.sv", 10, 6, "", "v_branch/rng_sequence", "if", "10,16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "../UVM/UVM_sequence.sv", 10, 7, "", "v_branch/rng_sequence", "else", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "../UVM/UVM_sequence.sv", 10, 24, "", "v_line/rng_sequence", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "../UVM/UVM_sequence.sv", 10, 29, "", "v_line/rng_sequence", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "../UVM/UVM_sequence.sv", 10, 30, "", "v_line/rng_sequence", "block", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "../UVM/UVM_sequence.sv", 12, 29, "", "v_line/rng_sequence", "block", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "../UVM/UVM_sequence.sv", 13, 23, "", "v_line/rng_sequence", "block", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "../UVM/UVM_sequence.sv", 14, 27, "", "v_line/rng_sequence", "block", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "../UVM/UVM_sequence.sv", 16, 12, "", "v_line/rng_sequence", "block", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "../UVM/UVM_sequence.sv", 28, 9, "", "v_expr/rng_sequence", "(use_seed==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "../UVM/UVM_sequence.sv", 28, 9, "", "v_expr/rng_sequence", "(use_seed==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "../UVM/UVM_sequence.sv", 33, 6, "", "v_branch/rng_sequence", "if", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "../UVM/UVM_sequence.sv", 33, 7, "", "v_branch/rng_sequence", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "../UVM/UVM_sequence.sv", 41, 12, "", "v_line/rng_sequence", "if", "41-44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "../UVM/UVM_sequence.sv", 41, 13, "", "v_line/rng_sequence", "else", "46-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "../UVM/UVM_sequence.sv", 36, 7, "", "v_line/rng_sequence", "elsif", "36-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "../UVM/UVM_sequence.sv", 65, 6, "", "v_branch/rng_sequence", "if", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "../UVM/UVM_sequence.sv", 65, 7, "", "v_branch/rng_sequence", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "../UVM/UVM_sequence.sv", 35, 5, "", "v_line/rng_sequence", "block", "35,52-53,55-56,60-61,65,67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "../UVM/UVM_sequence.sv", 20, 16, "", "v_line/rng_sequence", "block", "20-26,28-29,33,35");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_sequence___configure_coverage(Vtb_rng_tb_rng__03a__03arng_sequence* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
