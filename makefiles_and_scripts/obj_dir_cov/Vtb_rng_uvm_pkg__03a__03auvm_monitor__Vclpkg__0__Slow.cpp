// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_monitor__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_monitor__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_monitor__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_monitor__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_monitor__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_monitor__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18164]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_monitor.svh", 37, 28, "", "v_line/uvm_monitor", "block", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18165]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_monitor.svh", 37, 40, "", "v_line/uvm_monitor", "block", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18166]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_monitor.svh", 37, 29, "", "v_line/uvm_monitor", "block", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18167]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_monitor.svh", 37, 30, "", "v_line/uvm_monitor", "block", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18168]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_monitor.svh", 46, 12, "", "v_line/uvm_monitor", "block", "46-47");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_monitor___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_monitor* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_monitor___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
