// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23368]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 47, 14, "", "v_line/uvm_reg_transaction_order_policy", "block", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23369]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 58, 32, "", "v_line/uvm_reg_transaction_order_policy", "block", "58");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
