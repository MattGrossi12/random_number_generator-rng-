// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11178]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1208, 29, "", "v_line/uvm_callback", "block", "1208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11179]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1210, 28, "", "v_line/uvm_callback", "block", "1210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11180]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1210, 40, "", "v_line/uvm_callback", "block", "1210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11181]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1210, 6, "", "v_branch/uvm_callback", "if", "1210,1217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11182]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1210, 7, "", "v_branch/uvm_callback", "else", "1210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11183]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1210, 24, "", "v_line/uvm_callback", "block", "1210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11184]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1210, 29, "", "v_line/uvm_callback", "block", "1210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11185]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1210, 30, "", "v_line/uvm_callback", "block", "1210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11186]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1217, 12, "", "v_line/uvm_callback", "block", "1217-1218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11187]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1228, 5, "", "v_branch/uvm_callback", "if", "1228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11188]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1228, 6, "", "v_branch/uvm_callback", "else", "1232");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11189]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1228, 16, "", "v_expr/uvm_callback", "((on == 32'sh1)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11190]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1228, 16, "", "v_expr/uvm_callback", "((on == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11191]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1228, 16, "", "v_expr/uvm_callback", "((on == 32'sh0)==0 && (on == 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11192]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1237, 5, "", "v_branch/uvm_callback", "if", "1237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11193]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1237, 6, "", "v_branch/uvm_callback", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11194]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1238, 5, "", "v_branch/uvm_callback", "if", "1238");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11195]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1238, 6, "", "v_branch/uvm_callback", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11196]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1227, 16, "", "v_line/uvm_callback", "block", "1227,1236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11197]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 1247, 16, "", "v_line/uvm_callback", "block", "1227,1247-1248");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_callback___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_callback* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
