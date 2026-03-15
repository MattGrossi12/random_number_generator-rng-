// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17909]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 74, 28, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17910]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 74, 40, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17911]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 74, 6, "", "v_branch/uvm_set_before_get_dap__Tz21", "if", "74,84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17912]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 74, 7, "", "v_branch/uvm_set_before_get_dap__Tz21", "else", "74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17913]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 74, 24, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17914]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 84, 13, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "84-86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17915]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 94, 26, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "94-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17916]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 103, 25, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "103-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17917]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 117, 6, "", "v_branch/uvm_set_before_get_dap__Tz21", "if", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17918]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 117, 7, "", "v_branch/uvm_set_before_get_dap__Tz21", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17919]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 114, 7, "", "v_branch/uvm_set_before_get_dap__Tz21", "if", "114,117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17920]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 114, 8, "", "v_branch/uvm_set_before_get_dap__Tz21", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17921]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 114, 11, "", "v_expr/uvm_set_before_get_dap__Tz21", "(m_set==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17922]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 114, 11, "", "v_expr/uvm_set_before_get_dap__Tz21", "(m_set==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17923]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 113, 24, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "113,119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17924]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 129, 7, "", "v_branch/uvm_set_before_get_dap__Tz21", "if", "129-130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17925]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 129, 8, "", "v_branch/uvm_set_before_get_dap__Tz21", "else", "132-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17926]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 129, 11, "", "v_expr/uvm_set_before_get_dap__Tz21", "(m_set==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17927]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 129, 11, "", "v_expr/uvm_set_before_get_dap__Tz21", "(m_set==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17928]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 128, 25, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17929]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 149, 6, "", "v_branch/uvm_set_before_get_dap__Tz21", "if", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17930]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 149, 7, "", "v_branch/uvm_set_before_get_dap__Tz21", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17931]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 147, 26, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "147,149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17932]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 154, 6, "", "v_branch/uvm_set_before_get_dap__Tz21", "if", "154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17933]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 154, 7, "", "v_branch/uvm_set_before_get_dap__Tz21", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17934]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 152, 26, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "152,154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17935]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 159, 6, "", "v_branch/uvm_set_before_get_dap__Tz21", "if", "159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17936]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 159, 7, "", "v_branch/uvm_set_before_get_dap__Tz21", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17937]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 157, 26, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "157,159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17938]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 166, 7, "", "v_branch/uvm_set_before_get_dap__Tz21", "if", "166-167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17939]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 166, 8, "", "v_branch/uvm_set_before_get_dap__Tz21", "else", "169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17940]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 165, 28, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17941]), first, "/home/matheus/tools/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 173, 26, "", "v_line/uvm_set_before_get_dap__Tz21", "block", "173-179");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
