// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10051]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1142, 37, "", "v_line/uvm_printer_element_proxy", "block", "1142-1143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10052]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1146, 15, "", "v_line/uvm_printer_element_proxy", "block", "1146,1148");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
