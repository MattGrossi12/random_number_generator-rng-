// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18857]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 135, 12, "", "v_line/uvm_analysis_export__Tz26", "block", "135-137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18858]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 140, 27, "", "v_line/uvm_analysis_export__Tz26", "block", "140-141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18859]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 151, 7, "", "v_branch/uvm_analysis_export__Tz26", "if", "151-152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18860]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 151, 8, "", "v_branch/uvm_analysis_export__Tz26", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18861]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 149, 5, "", "v_line/uvm_analysis_export__Tz26", "block", "149-150,153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18862]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 147, 17, "", "v_line/uvm_analysis_export__Tz26", "block", "147-149");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
