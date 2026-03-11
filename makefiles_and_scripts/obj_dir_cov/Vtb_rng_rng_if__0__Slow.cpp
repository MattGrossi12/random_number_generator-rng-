// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_rng_if___eval_static__TOP__tb_rng__rif(Vtb_rng_rng_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_rng_rng_if___eval_static__TOP__tb_rng__rif\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__5_Vtrigm___PVT__clk_toggle_tu = 1U;
        }(), vlSelfRef.__PVT__clk_toggle_tu) = 3ULL;
    ++(vlSymsp->__Vcoverage[515]);
}

VL_ATTR_COLD void Vtb_rng_rng_if___stl_sequent__TOP__tb_rng__rif__0(Vtb_rng_rng_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_rng_rng_if___stl_sequent__TOP__tb_rng__rif__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__rst_i) ^ (IData)(vlSelfRef.__Vtogcov__rst_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 503, vlSelfRef.__PVT__rst_i, vlSelfRef.__Vtogcov__rst_i);
        vlSelfRef.__Vtogcov__rst_i = vlSelfRef.__PVT__rst_i;
    }
    if (((IData)(vlSelfRef.__PVT__req_num_i) ^ (IData)(vlSelfRef.__Vtogcov__req_num_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 505, vlSelfRef.__PVT__req_num_i, vlSelfRef.__Vtogcov__req_num_i);
        vlSelfRef.__Vtogcov__req_num_i = vlSelfRef.__PVT__req_num_i;
    }
    if (((IData)(vlSelfRef.__PVT__wr_i) ^ (IData)(vlSelfRef.__Vtogcov__wr_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 507, vlSelfRef.__PVT__wr_i, vlSelfRef.__Vtogcov__wr_i);
        vlSelfRef.__Vtogcov__wr_i = vlSelfRef.__PVT__wr_i;
    }
    if (((IData)(vlSelfRef.__PVT__num_to_send_o) ^ (IData)(vlSelfRef.__Vtogcov__num_to_send_o))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 509, vlSelfRef.__PVT__num_to_send_o, vlSelfRef.__Vtogcov__num_to_send_o);
        vlSelfRef.__Vtogcov__num_to_send_o = vlSelfRef.__PVT__num_to_send_o;
    }
    if (((IData)(vlSelfRef.__PVT__clk_i) ^ (IData)(vlSelfRef.__Vtogcov__clk_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 501, vlSelfRef.__PVT__clk_i, vlSelfRef.__Vtogcov__clk_i);
        vlSelfRef.__Vtogcov__clk_i = vlSelfRef.__PVT__clk_i;
    }
}

VL_ATTR_COLD void Vtb_rng_rng_if___ctor_var_reset(Vtb_rng_rng_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_rng_rng_if___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__req_num_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1149570170298113665ull);
    vlSelf->__PVT__wr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17674650526832231937ull);
    vlSelf->__PVT__num_to_send_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12472001482479341974ull);
    vlSelf->__Vtogcov__clk_i = 0;
    vlSelf->__Vtogcov__rst_i = 0;
    vlSelf->__Vtogcov__req_num_i = 0;
    vlSelf->__Vtogcov__wr_i = 0;
    vlSelf->__Vtogcov__num_to_send_o = 0;
}

VL_ATTR_COLD void Vtb_rng_rng_if___configure_coverage(Vtb_rng_rng_if* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtb_rng_rng_if___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[501]), first, "../UVM/../UVM/testbench.sv", 8, 58, "", "v_toggle/rng_if", "clk_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[503]), first, "../UVM/../UVM/testbench.sv", 10, 9, "", "v_toggle/rng_if", "rst_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[505]), first, "../UVM/../UVM/testbench.sv", 13, 9, "", "v_toggle/rng_if", "req_num_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[507]), first, "../UVM/../UVM/testbench.sv", 14, 9, "", "v_toggle/rng_if", "wr_i");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[509]), first, "../UVM/../UVM/testbench.sv", 17, 21, "", "v_toggle/rng_if", "num_to_send_o");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "../UVM/../UVM/testbench.sv", 20, 24, "", "v_line/rng_if", "block", "20");
}
