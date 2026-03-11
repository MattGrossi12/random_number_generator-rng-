// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "../UVM/UVM_agent.sv", 5, 28, "", "v_line/rng_agent", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "../UVM/UVM_agent.sv", 5, 40, "", "v_line/rng_agent", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "../UVM/UVM_agent.sv", 5, 29, "", "v_line/rng_agent", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "../UVM/UVM_agent.sv", 5, 30, "", "v_line/rng_agent", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "../UVM/UVM_agent.sv", 11, 12, "", "v_line/rng_agent", "block", "11-12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "../UVM/UVM_agent.sv", 15, 17, "", "v_line/rng_agent", "block", "15-16,18-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "../UVM/UVM_agent.sv", 23, 17, "", "v_line/rng_agent", "block", "23-25");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_agent___configure_coverage(Vtb_rng_tb_rng__03a__03arng_agent* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
