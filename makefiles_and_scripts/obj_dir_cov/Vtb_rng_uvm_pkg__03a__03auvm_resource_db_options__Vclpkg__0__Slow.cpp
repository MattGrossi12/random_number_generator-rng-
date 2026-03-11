// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__ready = 0;
    vlSelf->__PVT__tracing = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8027]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 66, 6, "", "v_branch/uvm_resource_db_options", "if", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8028]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 66, 7, "", "v_branch/uvm_resource_db_options", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8029]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 66, 10, "", "v_expr/uvm_resource_db_options", "(ready==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8030]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 66, 10, "", "v_expr/uvm_resource_db_options", "(ready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8031]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 65, 24, "", "v_line/uvm_resource_db_options", "block", "65,67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8032]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 78, 6, "", "v_branch/uvm_resource_db_options", "if", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8033]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 78, 7, "", "v_branch/uvm_resource_db_options", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8034]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 78, 10, "", "v_expr/uvm_resource_db_options", "(ready==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8035]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 78, 10, "", "v_expr/uvm_resource_db_options", "(ready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8036]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 77, 24, "", "v_line/uvm_resource_db_options", "block", "77,79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8037]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 90, 5, "", "v_branch/uvm_resource_db_options", "if", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8038]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 90, 6, "", "v_branch/uvm_resource_db_options", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8039]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 90, 9, "", "v_expr/uvm_resource_db_options", "(ready==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8040]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 90, 9, "", "v_expr/uvm_resource_db_options", "(ready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8041]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 89, 23, "", "v_line/uvm_resource_db_options", "block", "89,91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8042]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 101, 6, "", "v_branch/uvm_resource_db_options", "if", "101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8043]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 101, 7, "", "v_branch/uvm_resource_db_options", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8044]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 95, 30, "", "v_line/uvm_resource_db_options", "block", "95-97,99,105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8045]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 49, 1, "", "v_line/uvm_resource_db_options", "block", "49");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
