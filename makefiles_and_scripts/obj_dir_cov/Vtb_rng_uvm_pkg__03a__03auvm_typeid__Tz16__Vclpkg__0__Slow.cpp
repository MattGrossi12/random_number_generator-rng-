// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14536]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 68, 5, "", "v_branch/uvm_typeid__Tz16", "if", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14537]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 68, 6, "", "v_branch/uvm_typeid__Tz16", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14538]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 67, 34, "", "v_line/uvm_typeid__Tz16", "block", "67,70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14539]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 65, 1, "", "v_line/uvm_typeid__Tz16", "block", "65");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz16___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
