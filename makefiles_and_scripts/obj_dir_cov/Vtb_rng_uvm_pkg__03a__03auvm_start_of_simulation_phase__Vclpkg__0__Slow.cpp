// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16589]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 198, 26, "", "v_line/uvm_start_of_simulation_phase", "block", "198-199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16590]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 202, 29, "", "v_line/uvm_start_of_simulation_phase", "block", "202");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16591]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 202, 30, "", "v_line/uvm_start_of_simulation_phase", "block", "202");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16592]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 207, 7, "", "v_branch/uvm_start_of_simulation_phase", "if", "207-208,211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16593]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 207, 8, "", "v_branch/uvm_start_of_simulation_phase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16594]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 206, 50, "", "v_line/uvm_start_of_simulation_phase", "block", "206,209");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16595]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 211, 23, "", "v_line/uvm_start_of_simulation_phase", "block", "211-212");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_start_of_simulation_phase___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
