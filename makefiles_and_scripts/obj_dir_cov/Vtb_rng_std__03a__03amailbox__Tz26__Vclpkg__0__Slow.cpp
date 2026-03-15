// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_std__03a__03amailbox__Tz26__Vclpkg___ctor_var_reset(Vtb_rng_std__03a__03amailbox__Tz26__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03amailbox__Tz26__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_std__03a__03amailbox__Tz26__Vclpkg___configure_coverage(Vtb_rng_std__03a__03amailbox__Tz26__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03amailbox__Tz26__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25481]), first, "/usr/local/share/verilator/include/verilated_std.sv", 40, 14, "", "v_line/mailbox__Tz26", "block", "40-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25482]), first, "/usr/local/share/verilator/include/verilated_std.sv", 44, 18, "", "v_line/mailbox__Tz26", "block", "44-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25483]), first, "/usr/local/share/verilator/include/verilated_std.sv", 50, 7, "", "v_line/mailbox__Tz26", "block", "50-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25484]), first, "/usr/local/share/verilator/include/verilated_std.sv", 48, 10, "", "v_line/mailbox__Tz26", "block", "48,52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25485]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 7, "", "v_branch/mailbox__Tz26", "if", "57-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25486]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 8, "", "v_branch/mailbox__Tz26", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25487]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 24, "", "v_expr/mailbox__Tz26", "((num() < m_bound)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25488]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 24, "", "v_expr/mailbox__Tz26", "((m_bound == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25489]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 24, "", "v_expr/mailbox__Tz26", "((m_bound == 32'sh0)==0 && (num() < m_bound)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25490]), first, "/usr/local/share/verilator/include/verilated_std.sv", 56, 18, "", "v_line/mailbox__Tz26", "block", "56,61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25491]), first, "/usr/local/share/verilator/include/verilated_std.sv", 66, 7, "", "v_line/mailbox__Tz26", "block", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25492]), first, "/usr/local/share/verilator/include/verilated_std.sv", 64, 10, "", "v_line/mailbox__Tz26", "block", "64,69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25493]), first, "/usr/local/share/verilator/include/verilated_std.sv", 74, 7, "", "v_branch/mailbox__Tz26", "if", "74-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25494]), first, "/usr/local/share/verilator/include/verilated_std.sv", 74, 8, "", "v_branch/mailbox__Tz26", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25495]), first, "/usr/local/share/verilator/include/verilated_std.sv", 73, 18, "", "v_line/mailbox__Tz26", "block", "73,78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25496]), first, "/usr/local/share/verilator/include/verilated_std.sv", 83, 7, "", "v_line/mailbox__Tz26", "block", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25497]), first, "/usr/local/share/verilator/include/verilated_std.sv", 81, 10, "", "v_line/mailbox__Tz26", "block", "81,86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25498]), first, "/usr/local/share/verilator/include/verilated_std.sv", 91, 7, "", "v_branch/mailbox__Tz26", "if", "91-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25499]), first, "/usr/local/share/verilator/include/verilated_std.sv", 91, 8, "", "v_branch/mailbox__Tz26", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25500]), first, "/usr/local/share/verilator/include/verilated_std.sv", 90, 18, "", "v_line/mailbox__Tz26", "block", "90,95");
}

VL_ATTR_COLD void Vtb_rng_std__03a__03amailbox__Tz26___configure_coverage(Vtb_rng_std__03a__03amailbox__Tz26* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_std__03a__03amailbox__Tz26___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
