// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24845]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 324, 28, "", "v_line/uvm_reg_mem_access_seq", "block", "324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24846]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 324, 40, "", "v_line/uvm_reg_mem_access_seq", "block", "324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24847]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 324, 6, "", "v_branch/uvm_reg_mem_access_seq", "if", "324,327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24848]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 324, 7, "", "v_branch/uvm_reg_mem_access_seq", "else", "324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24849]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 324, 24, "", "v_line/uvm_reg_mem_access_seq", "block", "324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24850]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 324, 29, "", "v_line/uvm_reg_mem_access_seq", "block", "324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24851]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 324, 30, "", "v_line/uvm_reg_mem_access_seq", "block", "324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24852]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 327, 13, "", "v_line/uvm_reg_mem_access_seq", "block", "327-328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24853]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 334, 6, "", "v_branch/uvm_reg_mem_access_seq", "if", "334");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24854]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 334, 7, "", "v_branch/uvm_reg_mem_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24855]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 333, 7, "", "v_branch/uvm_reg_mem_access_seq", "if", "333-335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24856]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 333, 8, "", "v_branch/uvm_reg_mem_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24857]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 343, 9, "", "v_branch/uvm_reg_mem_access_seq", "if", "343-349");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24858]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 343, 10, "", "v_branch/uvm_reg_mem_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24859]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 351, 9, "", "v_branch/uvm_reg_mem_access_seq", "if", "351-357");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24860]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 351, 10, "", "v_branch/uvm_reg_mem_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24861]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 341, 7, "", "v_branch/uvm_reg_mem_access_seq", "if", "341-342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24862]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 341, 8, "", "v_branch/uvm_reg_mem_access_seq", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24863]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 331, 17, "", "v_line/uvm_reg_mem_access_seq", "block", "331,338-339");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24864]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 366, 17, "", "v_line/uvm_reg_mem_access_seq", "block", "366");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
