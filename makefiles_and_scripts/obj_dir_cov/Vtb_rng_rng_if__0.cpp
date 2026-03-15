// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_rng_if___act_sequent__TOP__tb_rng__rif__0(Vtb_rng_rng_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_rng_rng_if___act_sequent__TOP__tb_rng__rif__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__clk_i) ^ (IData)(vlSelfRef.__Vtogcov__clk_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 496, vlSelfRef.__PVT__clk_i, vlSelfRef.__Vtogcov__clk_i);
        vlSelfRef.__Vtogcov__clk_i = vlSelfRef.__PVT__clk_i;
    }
}

void Vtb_rng_rng_if___nba_comb__TOP__tb_rng__rif__0(Vtb_rng_rng_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_rng_rng_if___nba_comb__TOP__tb_rng__rif__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__num_to_send_o) ^ (IData)(vlSelfRef.__Vtogcov__num_to_send_o))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 504, vlSelfRef.__PVT__num_to_send_o, vlSelfRef.__Vtogcov__num_to_send_o);
        vlSelfRef.__Vtogcov__num_to_send_o = vlSelfRef.__PVT__num_to_send_o;
    }
}

std::string VL_TO_STRING(const Vtb_rng_rng_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_rng_rng_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
