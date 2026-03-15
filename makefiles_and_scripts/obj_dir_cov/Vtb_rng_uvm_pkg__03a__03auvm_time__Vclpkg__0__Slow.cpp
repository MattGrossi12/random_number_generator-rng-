// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_time__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_time__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_resolution = 9.99999999999999980e-13;
    ++(vlSymsp->__Vcoverage[20541]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20541]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 39, 37, "", "v_line/uvm_time", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20542]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 54, 25, "", "v_line/uvm_time", "block", "54,56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20543]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 70, 20, "", "v_expr/uvm_time", "((res == $itor($signed(32'sh0)))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20544]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 70, 20, "", "v_expr/uvm_time", "((res == $itor($signed(32'sh0)))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20545]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 68, 13, "", "v_line/uvm_time", "block", "68-71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20546]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 79, 20, "", "v_line/uvm_time", "block", "79-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20547]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 87, 18, "", "v_line/uvm_time", "block", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20548]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 94, 24, "", "v_line/uvm_time", "block", "94,96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20549]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 113, 18, "", "v_line/uvm_time", "block", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20550]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 134, 6, "", "v_branch/uvm_time", "if", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20551]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 134, 7, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20552]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 133, 7, "", "v_branch/uvm_time", "if", "133-135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20553]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 133, 8, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20554]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 139, 6, "", "v_branch/uvm_time", "if", "139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20555]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 139, 7, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20556]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 137, 7, "", "v_branch/uvm_time", "if", "137,139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20557]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 137, 8, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20558]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 132, 18, "", "v_line/uvm_time", "block", "132,142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20559]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 161, 6, "", "v_branch/uvm_time", "if", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20560]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 161, 7, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20561]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 160, 7, "", "v_branch/uvm_time", "if", "160-162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20562]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 160, 8, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20563]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 166, 6, "", "v_branch/uvm_time", "if", "166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20564]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 166, 7, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20565]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 164, 7, "", "v_branch/uvm_time", "if", "164,166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20566]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 164, 8, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20567]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 172, 6, "", "v_branch/uvm_time", "if", "172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20568]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 172, 7, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20569]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 171, 7, "", "v_branch/uvm_time", "if", "171-173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20570]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 171, 8, "", "v_branch/uvm_time", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20571]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 159, 18, "", "v_line/uvm_time", "block", "159,169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20572]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 189, 18, "", "v_line/uvm_time", "block", "189-190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20573]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh", 205, 18, "", "v_line/uvm_time", "block", "205-206");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_time___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_time* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
