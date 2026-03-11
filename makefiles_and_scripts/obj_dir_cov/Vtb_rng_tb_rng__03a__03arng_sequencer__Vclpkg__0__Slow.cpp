// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_sequencer__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_sequencer__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_sequencer__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_sequencer__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_sequencer__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_sequencer__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "../UVM/UVM_sequencer.sv", 5, 28, "", "v_line/rng_sequencer", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "../UVM/UVM_sequencer.sv", 5, 40, "", "v_line/rng_sequencer", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "../UVM/UVM_sequencer.sv", 5, 29, "", "v_line/rng_sequencer", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "../UVM/UVM_sequencer.sv", 5, 30, "", "v_line/rng_sequencer", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "../UVM/UVM_sequencer.sv", 6, 12, "", "v_line/rng_sequencer", "block", "6-7");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_sequencer___configure_coverage(Vtb_rng_tb_rng__03a__03arng_sequencer* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequencer___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
