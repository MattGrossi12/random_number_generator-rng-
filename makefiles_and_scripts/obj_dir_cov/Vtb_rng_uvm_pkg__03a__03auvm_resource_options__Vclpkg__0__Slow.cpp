// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__auditing = 1U;
    ++(vlSymsp->__Vcoverage[7799]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_options__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7799]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 161, 31, "", "v_line/uvm_resource_options", "block", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7800]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 169, 24, "", "v_line/uvm_resource_options", "block", "169-170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7801]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 179, 24, "", "v_line/uvm_resource_options", "block", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7802]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 187, 23, "", "v_line/uvm_resource_options", "block", "187-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7803]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 159, 1, "", "v_line/uvm_resource_options", "block", "159");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_options___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource_options* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_options___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
