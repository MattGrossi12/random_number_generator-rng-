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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "../UVM/UVM_monitor.sv", 5, 28, "", "v_line/rng_monitor", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "../UVM/UVM_monitor.sv", 5, 40, "", "v_line/rng_monitor", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "../UVM/UVM_monitor.sv", 5, 29, "", "v_line/rng_monitor", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "../UVM/UVM_monitor.sv", 5, 30, "", "v_line/rng_monitor", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "../UVM/UVM_monitor.sv", 10, 12, "", "v_line/rng_monitor", "block", "10-12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "../UVM/UVM_monitor.sv", 18, 6, "", "v_branch/rng_monitor", "if", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "../UVM/UVM_monitor.sv", 18, 7, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "../UVM/UVM_monitor.sv", 17, 5, "", "v_branch/rng_monitor", "if", "17-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "../UVM/UVM_monitor.sv", 17, 6, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "../UVM/UVM_monitor.sv", 17, 9, "", "v_expr/rng_monitor", "(get(this\"\"\"vif\"vif)==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "../UVM/UVM_monitor.sv", 17, 9, "", "v_expr/rng_monitor", "(get(this\"\"\"vif\"vif)==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "../UVM/UVM_monitor.sv", 15, 17, "", "v_line/rng_monitor", "block", "15-16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "../UVM/UVM_monitor.sv", 34, 7, "", "v_branch/rng_monitor", "if", "34-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "../UVM/UVM_monitor.sv", 34, 8, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "../UVM/UVM_monitor.sv", 34, 11, "", "v_expr/rng_monitor", "(vif.rst_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "../UVM/UVM_monitor.sv", 34, 11, "", "v_expr/rng_monitor", "(vif.rst_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "../UVM/UVM_monitor.sv", 43, 6, "", "v_branch/rng_monitor", "if", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "../UVM/UVM_monitor.sv", 43, 7, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "../UVM/UVM_monitor.sv", 38, 7, "", "v_branch/rng_monitor", "if", "38-40,43-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "../UVM/UVM_monitor.sv", 38, 8, "", "v_branch/rng_monitor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "../UVM/UVM_monitor.sv", 31, 5, "", "v_line/rng_monitor", "block", "31-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "../UVM/UVM_monitor.sv", 22, 8, "", "v_line/rng_monitor", "block", "22-24,26-27,29");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_monitor___configure_coverage(Vtb_rng_tb_rng__03a__03arng_monitor* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
