// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "../UVM/UVM_seq_item.sv", 2, 28, "", "v_line/rng_seq_item", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "../UVM/UVM_seq_item.sv", 2, 40, "", "v_line/rng_seq_item", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "../UVM/UVM_seq_item.sv", 2, 6, "", "v_branch/rng_seq_item", "if", "2,16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "../UVM/UVM_seq_item.sv", 2, 7, "", "v_branch/rng_seq_item", "else", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../UVM/UVM_seq_item.sv", 2, 24, "", "v_line/rng_seq_item", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "../UVM/UVM_seq_item.sv", 2, 29, "", "v_line/rng_seq_item", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "../UVM/UVM_seq_item.sv", 2, 30, "", "v_line/rng_seq_item", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "../UVM/UVM_seq_item.sv", 16, 14, "", "v_line/rng_seq_item", "block", "16,18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "../UVM/UVM_seq_item.sv", 21, 21, "", "v_line/rng_seq_item", "block", "21,24-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "../UVM/UVM_seq_item.sv", 1, 1, "", "v_line/rng_seq_item", "block", "1");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_seq_item___configure_coverage(Vtb_rng_tb_rng__03a__03arng_seq_item* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
