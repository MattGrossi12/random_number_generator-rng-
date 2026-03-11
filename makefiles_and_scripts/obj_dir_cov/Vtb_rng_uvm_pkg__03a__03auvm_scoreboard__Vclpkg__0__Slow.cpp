// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_scoreboard__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_scoreboard__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_scoreboard__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_scoreboard__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_scoreboard__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_scoreboard__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18169]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_scoreboard.svh", 39, 28, "", "v_line/uvm_scoreboard", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18170]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_scoreboard.svh", 39, 40, "", "v_line/uvm_scoreboard", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18171]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_scoreboard.svh", 39, 29, "", "v_line/uvm_scoreboard", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18172]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_scoreboard.svh", 39, 30, "", "v_line/uvm_scoreboard", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18173]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_scoreboard.svh", 47, 12, "", "v_line/uvm_scoreboard", "block", "47-48");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_scoreboard___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_scoreboard* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_scoreboard___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
