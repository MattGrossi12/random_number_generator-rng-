// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "../UVM/UVM_scoreboard.sv", 5, 28, "", "v_line/rng_scoreboard", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "../UVM/UVM_scoreboard.sv", 5, 40, "", "v_line/rng_scoreboard", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "../UVM/UVM_scoreboard.sv", 5, 29, "", "v_line/rng_scoreboard", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "../UVM/UVM_scoreboard.sv", 5, 30, "", "v_line/rng_scoreboard", "block", "5");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "../UVM/UVM_scoreboard.sv", 30, 12, "", "v_line/rng_scoreboard", "block", "30-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "../UVM/UVM_scoreboard.sv", 35, 17, "", "v_line/rng_scoreboard", "block", "35-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "../UVM/UVM_scoreboard.sv", 60, 6, "", "v_branch/rng_scoreboard", "if", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "../UVM/UVM_scoreboard.sv", 60, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "../UVM/UVM_scoreboard.sv", 55, 7, "", "v_branch/rng_scoreboard", "if", "55-57,60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "../UVM/UVM_scoreboard.sv", 55, 8, "", "v_branch/rng_scoreboard", "else", "62-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "../UVM/UVM_scoreboard.sv", 51, 5, "", "v_branch/rng_scoreboard", "if", "51-53,66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "../UVM/UVM_scoreboard.sv", 51, 6, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "../UVM/UVM_scoreboard.sv", 51, 25, "", "v_expr/rng_scoreboard", "((val != last_val)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "../UVM/UVM_scoreboard.sv", 51, 25, "", "v_expr/rng_scoreboard", "(last_val_valid==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "../UVM/UVM_scoreboard.sv", 51, 25, "", "v_expr/rng_scoreboard", "(last_val_valid==1 && (val != last_val)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "../UVM/UVM_scoreboard.sv", 46, 25, "", "v_line/rng_scoreboard", "block", "46-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "../UVM/UVM_scoreboard.sv", 81, 19, "", "v_expr/rng_scoreboard", "((32'h0 != seen.next(k))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "../UVM/UVM_scoreboard.sv", 81, 19, "", "v_expr/rng_scoreboard", "(k__Vfirst==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "../UVM/UVM_scoreboard.sv", 81, 19, "", "v_expr/rng_scoreboard", "(k__Vfirst==0 && (32'h0 != seen.next(k))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "../UVM/UVM_scoreboard.sv", 81, 19, "", "v_line/rng_scoreboard", "block", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "../UVM/UVM_scoreboard.sv", 81, 19, "", "v_branch/rng_scoreboard", "if", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "../UVM/UVM_scoreboard.sv", 81, 20, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "../UVM/UVM_scoreboard.sv", 91, 7, "", "v_branch/rng_scoreboard", "if", "91-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "../UVM/UVM_scoreboard.sv", 91, 8, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "../UVM/UVM_scoreboard.sv", 87, 19, "", "v_line/rng_scoreboard", "block", "87-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "../UVM/UVM_scoreboard.sv", 98, 7, "", "v_branch/rng_scoreboard", "if", "98-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "../UVM/UVM_scoreboard.sv", 98, 8, "", "v_branch/rng_scoreboard", "else", "101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "../UVM/UVM_scoreboard.sv", 105, 7, "", "v_branch/rng_scoreboard", "if", "105-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "../UVM/UVM_scoreboard.sv", 105, 8, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "../UVM/UVM_scoreboard.sv", 97, 5, "", "v_line/rng_scoreboard", "block", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "../UVM/UVM_scoreboard.sv", 115, 6, "", "v_branch/rng_scoreboard", "if", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "../UVM/UVM_scoreboard.sv", 115, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "../UVM/UVM_scoreboard.sv", 119, 6, "", "v_branch/rng_scoreboard", "if", "119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "../UVM/UVM_scoreboard.sv", 119, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "../UVM/UVM_scoreboard.sv", 123, 6, "", "v_branch/rng_scoreboard", "if", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "../UVM/UVM_scoreboard.sv", 123, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "../UVM/UVM_scoreboard.sv", 128, 6, "", "v_branch/rng_scoreboard", "if", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "../UVM/UVM_scoreboard.sv", 128, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "../UVM/UVM_scoreboard.sv", 125, 5, "", "v_branch/rng_scoreboard", "if", "125,128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "../UVM/UVM_scoreboard.sv", 125, 6, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "../UVM/UVM_scoreboard.sv", 135, 6, "", "v_branch/rng_scoreboard", "if", "135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "../UVM/UVM_scoreboard.sv", 135, 7, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "../UVM/UVM_scoreboard.sv", 131, 3, "", "v_branch/rng_scoreboard", "if", "131,135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "../UVM/UVM_scoreboard.sv", 131, 4, "", "v_branch/rng_scoreboard", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "../UVM/UVM_scoreboard.sv", 71, 17, "", "v_line/rng_scoreboard", "block", "71-76,78,80-81,84,86-87,96-97,110,115,119,123");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_scoreboard___configure_coverage(Vtb_rng_tb_rng__03a__03arng_scoreboard* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
