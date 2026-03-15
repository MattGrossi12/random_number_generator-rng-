// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17869]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 121, 12, "", "v_line/uvm_top_down_visitor_adapter_", "block", "121-122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17870]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 128, 5, "", "v_branch/uvm_top_down_visitor_adapter_", "if", "128-129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17871]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 128, 6, "", "v_branch/uvm_top_down_visitor_adapter_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17872]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 134, 15, "", "v_line/uvm_top_down_visitor_adapter_", "block", "134-135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17873]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 137, 5, "", "v_branch/uvm_top_down_visitor_adapter_", "if", "137-138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17874]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 137, 6, "", "v_branch/uvm_top_down_visitor_adapter_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17875]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 125, 25, "", "v_line/uvm_top_down_visitor_adapter_", "block", "125-126,131-132,134");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter____configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter____configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
