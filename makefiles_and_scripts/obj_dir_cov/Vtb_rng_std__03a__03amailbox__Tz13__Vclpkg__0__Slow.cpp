// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_std__03a__03amailbox__Tz13__Vclpkg___ctor_var_reset(Vtb_rng_std__03a__03amailbox__Tz13__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03amailbox__Tz13__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_std__03a__03amailbox__Tz13__Vclpkg___configure_coverage(Vtb_rng_std__03a__03amailbox__Tz13__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03amailbox__Tz13__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25461]), first, "/usr/local/share/verilator/include/verilated_std.sv", 40, 14, "", "v_line/mailbox__Tz13", "block", "40-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25462]), first, "/usr/local/share/verilator/include/verilated_std.sv", 44, 18, "", "v_line/mailbox__Tz13", "block", "44-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25463]), first, "/usr/local/share/verilator/include/verilated_std.sv", 50, 7, "", "v_line/mailbox__Tz13", "block", "50-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25464]), first, "/usr/local/share/verilator/include/verilated_std.sv", 48, 10, "", "v_line/mailbox__Tz13", "block", "48,52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25465]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 7, "", "v_branch/mailbox__Tz13", "if", "57-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25466]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 8, "", "v_branch/mailbox__Tz13", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25467]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 24, "", "v_expr/mailbox__Tz13", "((num() < m_bound)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25468]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 24, "", "v_expr/mailbox__Tz13", "((m_bound == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25469]), first, "/usr/local/share/verilator/include/verilated_std.sv", 57, 24, "", "v_expr/mailbox__Tz13", "((m_bound == 32'sh0)==0 && (num() < m_bound)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25470]), first, "/usr/local/share/verilator/include/verilated_std.sv", 56, 18, "", "v_line/mailbox__Tz13", "block", "56,61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25471]), first, "/usr/local/share/verilator/include/verilated_std.sv", 66, 7, "", "v_line/mailbox__Tz13", "block", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25472]), first, "/usr/local/share/verilator/include/verilated_std.sv", 64, 10, "", "v_line/mailbox__Tz13", "block", "64,69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25473]), first, "/usr/local/share/verilator/include/verilated_std.sv", 74, 7, "", "v_branch/mailbox__Tz13", "if", "74-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25474]), first, "/usr/local/share/verilator/include/verilated_std.sv", 74, 8, "", "v_branch/mailbox__Tz13", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25475]), first, "/usr/local/share/verilator/include/verilated_std.sv", 73, 18, "", "v_line/mailbox__Tz13", "block", "73,78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25476]), first, "/usr/local/share/verilator/include/verilated_std.sv", 83, 7, "", "v_line/mailbox__Tz13", "block", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25477]), first, "/usr/local/share/verilator/include/verilated_std.sv", 81, 10, "", "v_line/mailbox__Tz13", "block", "81,86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25478]), first, "/usr/local/share/verilator/include/verilated_std.sv", 91, 7, "", "v_branch/mailbox__Tz13", "if", "91-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25479]), first, "/usr/local/share/verilator/include/verilated_std.sv", 91, 8, "", "v_branch/mailbox__Tz13", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25480]), first, "/usr/local/share/verilator/include/verilated_std.sv", 90, 18, "", "v_line/mailbox__Tz13", "block", "90,95");
}

VL_ATTR_COLD void Vtb_rng_std__03a__03amailbox__Tz13___configure_coverage(Vtb_rng_std__03a__03amailbox__Tz13* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03amailbox__Tz13___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
