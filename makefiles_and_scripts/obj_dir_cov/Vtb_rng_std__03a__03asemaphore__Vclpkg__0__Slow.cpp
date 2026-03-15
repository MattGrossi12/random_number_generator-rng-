// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_std__03a__03asemaphore__Vclpkg___ctor_var_reset(Vtb_rng_std__03a__03asemaphore__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03asemaphore__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_std__03a__03asemaphore__Vclpkg___configure_coverage(Vtb_rng_std__03a__03asemaphore__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03asemaphore__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25439]), first, "/usr/local/share/verilator/include/verilated_std.sv", 103, 14, "", "v_line/semaphore", "block", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25440]), first, "/usr/local/share/verilator/include/verilated_std.sv", 107, 19, "", "v_line/semaphore", "block", "107-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25441]), first, "/usr/local/share/verilator/include/verilated_std.sv", 113, 7, "", "v_line/semaphore", "block", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25442]), first, "/usr/local/share/verilator/include/verilated_std.sv", 111, 10, "", "v_line/semaphore", "block", "111,116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25443]), first, "/usr/local/share/verilator/include/verilated_std.sv", 121, 7, "", "v_branch/semaphore", "if", "121-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25444]), first, "/usr/local/share/verilator/include/verilated_std.sv", 121, 8, "", "v_branch/semaphore", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25445]), first, "/usr/local/share/verilator/include/verilated_std.sv", 120, 18, "", "v_line/semaphore", "block", "120,125");
}

VL_ATTR_COLD void Vtb_rng_std__03a__03asemaphore___configure_coverage(Vtb_rng_std__03a__03asemaphore* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03asemaphore___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
