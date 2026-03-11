// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_env__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_env__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_env__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_env__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_env__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_env__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "../UVM/UVM_env.sv", 2, 28, "", "v_line/rng_env", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "../UVM/UVM_env.sv", 2, 40, "", "v_line/rng_env", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "../UVM/UVM_env.sv", 2, 29, "", "v_line/rng_env", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "../UVM/UVM_env.sv", 2, 30, "", "v_line/rng_env", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "../UVM/UVM_env.sv", 12, 14, "", "v_line/rng_env", "block", "12,14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "../UVM/UVM_env.sv", 17, 19, "", "v_line/rng_env", "block", "17,19,22,25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "../UVM/UVM_env.sv", 28, 19, "", "v_line/rng_env", "block", "28,30,34");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_env___configure_coverage(Vtb_rng_tb_rng__03a__03arng_env* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
