// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_env__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_env__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_env__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_env__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_env__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_env__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18223]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_env.svh", 36, 28, "", "v_line/uvm_env", "block", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18224]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_env.svh", 36, 40, "", "v_line/uvm_env", "block", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18225]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_env.svh", 36, 29, "", "v_line/uvm_env", "block", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18226]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_env.svh", 36, 30, "", "v_line/uvm_env", "block", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18227]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_env.svh", 45, 12, "", "v_line/uvm_env", "block", "45-46");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_env___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_env* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_env___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
