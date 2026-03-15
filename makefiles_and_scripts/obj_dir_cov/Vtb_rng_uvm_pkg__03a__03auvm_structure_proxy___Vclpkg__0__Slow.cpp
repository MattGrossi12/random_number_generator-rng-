// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18000]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 69, 12, "", "v_line/uvm_structure_proxy_", "block", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18001]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 78, 30, "", "v_line/uvm_structure_proxy_", "block", "78");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy____configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy_* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy____configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
