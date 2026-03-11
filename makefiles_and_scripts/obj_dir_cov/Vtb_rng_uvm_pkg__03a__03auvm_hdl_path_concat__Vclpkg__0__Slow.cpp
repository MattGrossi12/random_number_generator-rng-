// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20792]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 364, 18, "", "v_line/uvm_hdl_path_concat", "block", "364-365");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20793]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 370, 18, "", "v_line/uvm_hdl_path_concat", "block", "370-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20794]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 378, 18, "", "v_line/uvm_hdl_path_concat", "block", "378,381-384,386");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20795]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 355, 1, "", "v_line/uvm_hdl_path_concat", "block", "355");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
