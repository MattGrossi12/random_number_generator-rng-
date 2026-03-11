// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20301]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 28, 12, "", "v_line/uvm_sequencer_analysis_fifo__pi171", "block", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20302]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 34, 5, "", "v_branch/uvm_sequencer_analysis_fifo__pi171", "if", "34-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20303]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 34, 6, "", "v_branch/uvm_sequencer_analysis_fifo__pi171", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20304]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 33, 17, "", "v_line/uvm_sequencer_analysis_fifo__pi171", "block", "33,36");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
