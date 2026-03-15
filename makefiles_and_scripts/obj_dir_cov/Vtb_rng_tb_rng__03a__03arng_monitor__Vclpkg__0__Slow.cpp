// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "../UVM/UVM_monitor.sv", 2, 28, "", "v_line/rng_monitor", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "../UVM/UVM_monitor.sv", 2, 40, "", "v_line/rng_monitor", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "../UVM/UVM_monitor.sv", 2, 29, "", "v_line/rng_monitor", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "../UVM/UVM_monitor.sv", 2, 30, "", "v_line/rng_monitor", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "../UVM/UVM_monitor.sv", 12, 14, "", "v_line/rng_monitor", "block", "12,14,18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "../UVM/UVM_monitor.sv", 28, 6, "", "v_branch/rng_monitor", "if", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "../UVM/UVM_monitor.sv", 28, 7, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "../UVM/UVM_monitor.sv", 27, 9, "", "v_branch/rng_monitor", "if", "27-28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "../UVM/UVM_monitor.sv", 27, 10, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../UVM/UVM_monitor.sv", 27, 13, "", "v_expr/rng_monitor", "(get(this\"\"\"vif\"vif)==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "../UVM/UVM_monitor.sv", 27, 13, "", "v_expr/rng_monitor", "(get(this\"\"\"vif\"vif)==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "../UVM/UVM_monitor.sv", 21, 19, "", "v_line/rng_monitor", "block", "21,23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "../UVM/UVM_monitor.sv", 52, 13, "", "v_branch/rng_monitor", "if", "52-53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "../UVM/UVM_monitor.sv", 52, 14, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "../UVM/UVM_monitor.sv", 52, 17, "", "v_expr/rng_monitor", "(vif.rst_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "../UVM/UVM_monitor.sv", 52, 17, "", "v_expr/rng_monitor", "(vif.rst_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "../UVM/UVM_monitor.sv", 71, 6, "", "v_branch/rng_monitor", "if", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "../UVM/UVM_monitor.sv", 71, 7, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "../UVM/UVM_monitor.sv", 58, 13, "", "v_branch/rng_monitor", "if", "58,61,65,71,74,77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "../UVM/UVM_monitor.sv", 58, 14, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "../UVM/UVM_monitor.sv", 45, 9, "", "v_line/rng_monitor", "block", "45,48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "../UVM/UVM_monitor.sv", 32, 10, "", "v_line/rng_monitor", "block", "32-34,37,40,43");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_monitor___configure_coverage(Vtb_rng_tb_rng__03a__03arng_monitor* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
