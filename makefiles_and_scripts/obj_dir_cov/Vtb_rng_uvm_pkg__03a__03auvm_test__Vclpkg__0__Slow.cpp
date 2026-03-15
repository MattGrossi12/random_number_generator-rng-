// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_test__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_test__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_test__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_test__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_test__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_test__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18228]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_test.svh", 65, 28, "", "v_line/uvm_test", "block", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18229]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_test.svh", 65, 40, "", "v_line/uvm_test", "block", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18230]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_test.svh", 65, 29, "", "v_line/uvm_test", "block", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18231]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_test.svh", 65, 30, "", "v_line/uvm_test", "block", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18232]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_test.svh", 74, 12, "", "v_line/uvm_test", "block", "74-75");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_test___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_test* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_test___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
