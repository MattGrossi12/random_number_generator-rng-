// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20787]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm2_generic_payload.svh", 1015, 12, "", "v_line/uvm_tlm_extension_base", "block", "1015-1016");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20788]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm2_generic_payload.svh", 1025, 48, "", "v_line/uvm_tlm_extension_base", "block", "1025");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20789]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm2_generic_payload.svh", 1033, 32, "", "v_line/uvm_tlm_extension_base", "block", "1033");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20790]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm2_generic_payload.svh", 1035, 25, "", "v_line/uvm_tlm_extension_base", "block", "1035-1036");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20791]), first, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm2_generic_payload.svh", 1042, 31, "", "v_line/uvm_tlm_extension_base", "block", "1042-1043");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tlm_extension_base___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
