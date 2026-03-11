// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1206]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 647, 33, "", "v_line/uvm_registry_component_creator", "block", "647,653-655");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1207]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 658, 26, "", "v_line/uvm_registry_component_creator", "block", "658");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1208]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 645, 9, "", "v_line/uvm_registry_component_creator", "block", "645");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
