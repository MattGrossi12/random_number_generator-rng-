// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__ready = 0;
    vlSelf->__PVT__tracing = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9538]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 364, 6, "", "v_branch/uvm_config_db_options", "if", "364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9539]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 364, 7, "", "v_branch/uvm_config_db_options", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9540]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 364, 10, "", "v_expr/uvm_config_db_options", "(ready==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9541]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 364, 10, "", "v_expr/uvm_config_db_options", "(ready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9542]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 363, 24, "", "v_line/uvm_config_db_options", "block", "363,365");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9543]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 376, 6, "", "v_branch/uvm_config_db_options", "if", "376");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9544]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 376, 7, "", "v_branch/uvm_config_db_options", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9545]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 376, 10, "", "v_expr/uvm_config_db_options", "(ready==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9546]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 376, 10, "", "v_expr/uvm_config_db_options", "(ready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9547]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 375, 24, "", "v_line/uvm_config_db_options", "block", "375,377");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9548]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 388, 5, "", "v_branch/uvm_config_db_options", "if", "388");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9549]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 388, 6, "", "v_branch/uvm_config_db_options", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9550]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 388, 9, "", "v_expr/uvm_config_db_options", "(ready==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9551]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 388, 9, "", "v_expr/uvm_config_db_options", "(ready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9552]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 387, 23, "", "v_line/uvm_config_db_options", "block", "387,389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9553]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 399, 6, "", "v_branch/uvm_config_db_options", "if", "399-400");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9554]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 399, 7, "", "v_branch/uvm_config_db_options", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9555]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 393, 30, "", "v_line/uvm_config_db_options", "block", "393-395,397,403");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9556]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 347, 1, "", "v_line/uvm_config_db_options", "block", "347");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_config_db_options___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_config_db_options* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_config_db_options___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
