// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_test__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_test__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_test__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_test__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_test__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_test__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "../UVM/../UVM/testbench.sv", 38, 28, "", "v_line/rng_test", "block", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "../UVM/../UVM/testbench.sv", 38, 40, "", "v_line/rng_test", "block", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "../UVM/../UVM/testbench.sv", 38, 29, "", "v_line/rng_test", "block", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "../UVM/../UVM/testbench.sv", 38, 30, "", "v_line/rng_test", "block", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "../UVM/../UVM/testbench.sv", 48, 18, "", "v_line/rng_test", "block", "48,51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "../UVM/../UVM/testbench.sv", 66, 6, "", "v_branch/rng_test", "if", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "../UVM/../UVM/testbench.sv", 66, 7, "", "v_branch/rng_test", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "../UVM/../UVM/testbench.sv", 65, 13, "", "v_branch/rng_test", "if", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "../UVM/../UVM/testbench.sv", 65, 14, "", "v_branch/rng_test", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "../UVM/../UVM/testbench.sv", 65, 17, "", "v_expr/rng_test", "(get(this\"\"\"vif\"vif)==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "../UVM/../UVM/testbench.sv", 65, 17, "", "v_expr/rng_test", "(get(this\"\"\"vif\"vif)==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "../UVM/../UVM/testbench.sv", 54, 23, "", "v_line/rng_test", "block", "54,57,61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "../UVM/../UVM/testbench.sv", 85, 6, "", "v_branch/rng_test", "if", "85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "../UVM/../UVM/testbench.sv", 85, 7, "", "v_branch/rng_test", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "../UVM/../UVM/testbench.sv", 97, 6, "", "v_branch/rng_test", "if", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "../UVM/../UVM/testbench.sv", 97, 7, "", "v_branch/rng_test", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "../UVM/../UVM/testbench.sv", 70, 24, "", "v_line/rng_test", "block", "70,73,77,81,85,89,93,97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "../UVM/../UVM/testbench.sv", 100, 14, "", "v_line/rng_test", "block", "100-101,105,109,113,117,121,125,129,133");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_test___configure_coverage(Vtb_rng_tb_rng__03a__03arng_test* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
