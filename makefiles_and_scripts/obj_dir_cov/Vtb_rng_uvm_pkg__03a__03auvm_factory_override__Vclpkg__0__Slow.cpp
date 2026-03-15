// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_factory_override__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_factory_override__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_factory_override__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_factory_override__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_factory_override__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_factory_override__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1193]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1004, 12, "", "v_line/uvm_factory_override", "block", "1004,1011-1017");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1194]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1022, 7, "", "v_branch/uvm_factory_override", "if", "1022");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1195]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1022, 8, "", "v_branch/uvm_factory_override", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1196]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1022, 23, "", "v_expr/uvm_factory_override", "(((nm.getc(i)) == 8'h3f)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1197]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1022, 23, "", "v_expr/uvm_factory_override", "(((nm.getc(i)) == 8'h2a)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1198]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1022, 23, "", "v_expr/uvm_factory_override", "(((nm.getc(i)) == 8'h2a)==0 && ((nm.getc(i)) == 8'h3f)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1199]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1021, 17, "", "v_line/uvm_factory_override", "block", "1021");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1200]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1020, 16, "", "v_line/uvm_factory_override", "block", "1020-1021,1023");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_factory_override___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_factory_override* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_override___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
