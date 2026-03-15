// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_visitor___Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_visitor___Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_visitor___Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_visitor___Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_visitor___Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_visitor___Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17865]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 33, 12, "", "v_line/uvm_visitor_", "block", "33-34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17866]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 42, 25, "", "v_line/uvm_visitor_", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17867]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 49, 25, "", "v_line/uvm_visitor_", "block", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17868]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 53, 30, "", "v_line/uvm_visitor_", "block", "53");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_visitor____configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_visitor_* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_visitor____configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
