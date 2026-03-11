// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1209]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 663, 30, "", "v_line/uvm_registry_object_creator", "block", "663,669-672");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1210]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 675, 26, "", "v_line/uvm_registry_object_creator", "block", "675");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1211]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 661, 9, "", "v_line/uvm_registry_object_creator", "block", "661");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_registry_object_creator___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
