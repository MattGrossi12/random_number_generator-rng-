// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1188]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 956, 31, "", "v_line/uvm_object_wrapper", "block", "956-957");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1189]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 968, 34, "", "v_line/uvm_object_wrapper", "block", "968,970");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1190]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 981, 32, "", "v_line/uvm_object_wrapper", "block", "981");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1191]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 983, 25, "", "v_line/uvm_object_wrapper", "block", "983");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1192]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 947, 9, "", "v_line/uvm_object_wrapper", "block", "947");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
