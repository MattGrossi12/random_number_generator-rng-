// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__map.atDefault() = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 479, 9, "", "v_branch/uvm_enum_wrapper_", "if", "479-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 479, 10, "", "v_branch/uvm_enum_wrapper_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 482, 9, "", "v_branch/uvm_enum_wrapper_", "if", "482-484");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 482, 10, "", "v_branch/uvm_enum_wrapper_", "else", "486-487");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 478, 25, "", "v_line/uvm_enum_wrapper_", "block", "478");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 500, 16, "", "v_line/uvm_enum_wrapper_", "block", "496-498,500");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 495, 9, "", "v_line/uvm_enum_wrapper_", "block", "500");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 493, 36, "", "v_line/uvm_enum_wrapper_", "block", "493-494");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[863]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 505, 24, "", "v_line/uvm_enum_wrapper_", "block", "505");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper____configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper_* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_enum_wrapper____configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
