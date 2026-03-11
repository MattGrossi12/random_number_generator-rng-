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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "../UVM/../UVM/testbench.sv", 63, 28, "", "v_line/rng_test", "block", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "../UVM/../UVM/testbench.sv", 63, 40, "", "v_line/rng_test", "block", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "../UVM/../UVM/testbench.sv", 63, 29, "", "v_line/rng_test", "block", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "../UVM/../UVM/testbench.sv", 63, 30, "", "v_line/rng_test", "block", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "../UVM/../UVM/testbench.sv", 68, 14, "", "v_line/rng_test", "block", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "../UVM/../UVM/testbench.sv", 76, 6, "", "v_branch/rng_test", "if", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "../UVM/../UVM/testbench.sv", 76, 7, "", "v_branch/rng_test", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "../UVM/../UVM/testbench.sv", 75, 7, "", "v_branch/rng_test", "if", "75-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "../UVM/../UVM/testbench.sv", 75, 8, "", "v_branch/rng_test", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "../UVM/../UVM/testbench.sv", 75, 11, "", "v_expr/rng_test", "(get(this\"\"\"vif\"vif)==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "../UVM/../UVM/testbench.sv", 75, 11, "", "v_expr/rng_test", "(get(this\"\"\"vif\"vif)==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "../UVM/../UVM/testbench.sv", 72, 19, "", "v_line/rng_test", "block", "72-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "../UVM/../UVM/testbench.sv", 86, 6, "", "v_branch/rng_test", "if", "86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "../UVM/../UVM/testbench.sv", 86, 7, "", "v_branch/rng_test", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "../UVM/../UVM/testbench.sv", 89, 6, "", "v_branch/rng_test", "if", "89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "../UVM/../UVM/testbench.sv", 89, 7, "", "v_branch/rng_test", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "../UVM/../UVM/testbench.sv", 80, 20, "", "v_line/rng_test", "block", "80,82-84,86-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "../UVM/../UVM/testbench.sv", 92, 10, "", "v_line/rng_test", "block", "92-93,95-96,99,101,103-104,107-108");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_test___configure_coverage(Vtb_rng_tb_rng__03a__03arng_test* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
