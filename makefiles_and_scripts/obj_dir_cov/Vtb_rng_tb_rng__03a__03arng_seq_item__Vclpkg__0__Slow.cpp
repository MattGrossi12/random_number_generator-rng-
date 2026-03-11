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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "../UVM/UVM_seq_item.sv", 5, 28, "", "v_line/rng_seq_item", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "../UVM/UVM_seq_item.sv", 5, 40, "", "v_line/rng_seq_item", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "../UVM/UVM_seq_item.sv", 5, 6, "", "v_branch/rng_seq_item", "if", "5,16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "../UVM/UVM_seq_item.sv", 5, 7, "", "v_branch/rng_seq_item", "else", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "../UVM/UVM_seq_item.sv", 5, 24, "", "v_line/rng_seq_item", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "../UVM/UVM_seq_item.sv", 5, 29, "", "v_line/rng_seq_item", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "../UVM/UVM_seq_item.sv", 5, 30, "", "v_line/rng_seq_item", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "../UVM/UVM_seq_item.sv", 16, 12, "", "v_line/rng_seq_item", "block", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "../UVM/UVM_seq_item.sv", 20, 19, "", "v_line/rng_seq_item", "block", "20-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "../UVM/UVM_seq_item.sv", 4, 1, "", "v_line/rng_seq_item", "block", "4");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_seq_item___configure_coverage(Vtb_rng_tb_rng__03a__03arng_seq_item* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
