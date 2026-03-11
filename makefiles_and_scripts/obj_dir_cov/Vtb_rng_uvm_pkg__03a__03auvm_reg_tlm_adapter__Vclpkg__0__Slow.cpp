// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20830]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 177, 28, "", "v_line/uvm_reg_tlm_adapter", "block", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20831]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 177, 40, "", "v_line/uvm_reg_tlm_adapter", "block", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20832]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 177, 6, "", "v_branch/uvm_reg_tlm_adapter", "if", "177,179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20833]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 177, 7, "", "v_branch/uvm_reg_tlm_adapter", "else", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20834]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 177, 24, "", "v_line/uvm_reg_tlm_adapter", "block", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20835]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 177, 29, "", "v_line/uvm_reg_tlm_adapter", "block", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20836]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 177, 30, "", "v_line/uvm_reg_tlm_adapter", "block", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20837]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 179, 12, "", "v_line/uvm_reg_tlm_adapter", "block", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20838]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 194, 6, "", "v_branch/uvm_reg_tlm_adapter", "if", "194-195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20839]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 194, 7, "", "v_branch/uvm_reg_tlm_adapter", "else", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20840]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 211, 34, "", "v_expr/uvm_reg_tlm_adapter", "((i > nbytes)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20841]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 211, 34, "", "v_expr/uvm_reg_tlm_adapter", "((i > nbytes)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20842]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 209, 6, "", "v_line/uvm_reg_tlm_adapter", "block", "209-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20843]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 188, 38, "", "v_line/uvm_reg_tlm_adapter", "block", "188,190-192,199,201-202,204,206-207,209,214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20844]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 228, 6, "", "v_branch/uvm_reg_tlm_adapter", "if", "228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20845]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 228, 7, "", "v_branch/uvm_reg_tlm_adapter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20846]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 227, 5, "", "v_branch/uvm_reg_tlm_adapter", "if", "227-228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20847]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 227, 6, "", "v_branch/uvm_reg_tlm_adapter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20848]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 231, 6, "", "v_branch/uvm_reg_tlm_adapter", "if", "231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20849]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 231, 7, "", "v_branch/uvm_reg_tlm_adapter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20850]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 230, 5, "", "v_branch/uvm_reg_tlm_adapter", "if", "230-232");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20851]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 230, 6, "", "v_branch/uvm_reg_tlm_adapter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20852]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 235, 5, "", "v_branch/uvm_reg_tlm_adapter", "if", "235-236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20853]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 235, 6, "", "v_branch/uvm_reg_tlm_adapter", "else", "238");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20854]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 243, 31, "", "v_line/uvm_reg_tlm_adapter", "block", "243-244");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20855]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 247, 24, "", "v_line/uvm_reg_tlm_adapter", "block", "247-248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20856]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 221, 25, "", "v_line/uvm_reg_tlm_adapter", "block", "221,224-225,240,242-243,246-247,250");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
