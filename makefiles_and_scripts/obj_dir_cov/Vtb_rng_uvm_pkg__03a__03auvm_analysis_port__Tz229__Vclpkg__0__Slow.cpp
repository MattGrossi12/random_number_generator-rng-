// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 61, 12, "", "v_line/uvm_analysis_port__Tz229", "block", "61-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19701]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 66, 27, "", "v_line/uvm_analysis_port__Tz229", "block", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19702]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 76, 7, "", "v_branch/uvm_analysis_port__Tz229", "if", "76-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19703]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 76, 8, "", "v_branch/uvm_analysis_port__Tz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19704]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 74, 5, "", "v_line/uvm_analysis_port__Tz229", "block", "74-75,78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19705]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 72, 17, "", "v_line/uvm_analysis_port__Tz229", "block", "72-74");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz229___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
