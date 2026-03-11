// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_vreg_field__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_vreg_field__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__1__Vfuncout;
    __Vfunc_m_register_pair__1__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz200_TBz201__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_vreg_field"s, "uvm_vreg_field_cbs"s, __Vfunc_m_register_pair__1__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_vreg_field_cbs 
        = __Vfunc_m_register_pair__1__Vfuncout;
    ++(vlSymsp->__Vcoverage[21587]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21580]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 55, 28, "", "v_line/uvm_vreg_field", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21581]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 55, 40, "", "v_line/uvm_vreg_field", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21582]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 55, 6, "", "v_branch/uvm_vreg_field", "if", "55,312");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21583]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 55, 7, "", "v_branch/uvm_vreg_field", "else", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21584]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 55, 24, "", "v_line/uvm_vreg_field", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21585]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 55, 29, "", "v_line/uvm_vreg_field", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21586]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 55, 30, "", "v_line/uvm_vreg_field", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21587]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 56, 106, "", "v_line/uvm_vreg_field", "block", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21588]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 185, 17, "", "v_line/uvm_vreg_field", "block", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21589]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 193, 17, "", "v_line/uvm_vreg_field", "block", "193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21590]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 202, 17, "", "v_line/uvm_vreg_field", "block", "202");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21591]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 209, 17, "", "v_line/uvm_vreg_field", "block", "209");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21592]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 312, 26, "", "v_line/uvm_vreg_field", "block", "312-313");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21593]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 321, 6, "", "v_branch/uvm_vreg_field", "if", "321");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21594]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 321, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21595]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 320, 4, "", "v_branch/uvm_vreg_field", "if", "320-322");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21596]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 320, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21597]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 327, 6, "", "v_branch/uvm_vreg_field", "if", "327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21598]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 327, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21599]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 324, 4, "", "v_branch/uvm_vreg_field", "if", "324,327-328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21600]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 324, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21601]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 316, 15, "", "v_line/uvm_vreg_field", "block", "316,319,331-332,334");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21602]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 339, 17, "", "v_line/uvm_vreg_field", "block", "339-340");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21603]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 344, 19, "", "v_line/uvm_vreg_field", "block", "344-345");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21604]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 349, 19, "", "v_line/uvm_vreg_field", "block", "349-350");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21605]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 355, 23, "", "v_line/uvm_vreg_field", "block", "355-356");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21606]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 360, 23, "", "v_line/uvm_vreg_field", "block", "360-361");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21607]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 368, 6, "", "v_branch/uvm_vreg_field", "if", "368");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21608]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 368, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21609]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 366, 4, "", "v_branch/uvm_vreg_field", "if", "366,368-369");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21610]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 366, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21611]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 365, 17, "", "v_line/uvm_vreg_field", "block", "365,372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21612]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 404, 6, "", "v_branch/uvm_vreg_field", "if", "404");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21613]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 404, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21614]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 402, 4, "", "v_branch/uvm_vreg_field", "if", "402,404-406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21615]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 402, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21616]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 409, 4, "", "v_branch/uvm_vreg_field", "if", "409-411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21617]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 409, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21618]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 419, 6, "", "v_branch/uvm_vreg_field", "if", "419");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21619]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 419, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21620]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 418, 4, "", "v_branch/uvm_vreg_field", "if", "418-420");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21621]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 418, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21622]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 425, 4, "", "v_line/uvm_vreg_field", "block", "425-429");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21623]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 438, 4, "", "v_branch/uvm_vreg_field", "if", "438");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21624]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 438, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21625]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 453, 6, "", "v_branch/uvm_vreg_field", "if", "453");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21626]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 453, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21627]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 450, 7, "", "v_branch/uvm_vreg_field", "if", "450,453-456");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21628]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 450, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21629]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 450, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21630]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 450, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_HAS_X)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21631]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 450, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21632]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 446, 4, "", "v_branch/uvm_vreg_field", "if", "446-447,449,459");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21633]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 446, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21634]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 472, 6, "", "v_branch/uvm_vreg_field", "if", "472");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21635]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 472, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21636]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 468, 10, "", "v_branch/uvm_vreg_field", "if", "468,472-475");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21637]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 468, 11, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21638]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 468, 30, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21639]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 468, 30, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_HAS_X)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21640]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 468, 30, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21641]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 466, 7, "", "v_branch/uvm_vreg_field", "if", "466-467");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21642]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 466, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21643]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 465, 4, "", "v_branch/uvm_vreg_field", "if", "465,478");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21644]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 465, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21645]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 485, 7, "", "v_branch/uvm_vreg_field", "if", "485");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21646]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 485, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21647]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 485, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21648]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 485, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_HAS_X)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21649]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 485, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21650]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 483, 4, "", "v_line/uvm_vreg_field", "block", "483-484,487-488");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21651]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 492, 4, "", "v_line/uvm_vreg_field", "block", "492-496");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21652]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 505, 191, "", "v_expr/uvm_vreg_field", "((path == uvm_pkg::UVM_FRONTDOOR)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21653]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 505, 191, "", "v_expr/uvm_vreg_field", "((path == uvm_pkg::UVM_FRONTDOOR)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21654]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 505, 6, "", "v_branch/uvm_vreg_field", "if", "505");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21655]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 505, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21656]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 376, 6, "", "v_line/uvm_vreg_field", "block", "376-377,385-388,390-393,395,397-398,400-401,414,416,422,424-425,432-434,437,441,444,463-464,482-483,491-492,499,505,507-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21657]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 540, 6, "", "v_branch/uvm_vreg_field", "if", "540");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21658]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 540, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21659]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 538, 4, "", "v_branch/uvm_vreg_field", "if", "538,540-542");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21660]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 538, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21661]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 545, 4, "", "v_branch/uvm_vreg_field", "if", "545-547");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21662]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 545, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21663]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 557, 4, "", "v_line/uvm_vreg_field", "block", "557-561");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21664]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 578, 7, "", "v_branch/uvm_vreg_field", "if", "578");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21665]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 578, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21666]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 578, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21667]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 578, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_HAS_X)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21668]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 578, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21669]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 574, 4, "", "v_line/uvm_vreg_field", "block", "574-575,577,580-581");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21670]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 591, 4, "", "v_line/uvm_vreg_field", "block", "591-595");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21671]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 603, 185, "", "v_expr/uvm_vreg_field", "((path == uvm_pkg::UVM_FRONTDOOR)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21672]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 603, 185, "", "v_expr/uvm_vreg_field", "((path == uvm_pkg::UVM_FRONTDOOR)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21673]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 603, 6, "", "v_branch/uvm_vreg_field", "if", "603");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21674]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 603, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21675]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 513, 6, "", "v_line/uvm_vreg_field", "block", "513-515,522-525,527-529,531,533-534,536-537,550,552,554,556-557,564-567,570,573-574,585,588,590-591,598,603,606-608");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21676]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 634, 6, "", "v_branch/uvm_vreg_field", "if", "634");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21677]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 634, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21678]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 632, 4, "", "v_branch/uvm_vreg_field", "if", "632,634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21679]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 632, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21680]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 644, 6, "", "v_branch/uvm_vreg_field", "if", "644");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21681]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 644, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21682]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 643, 4, "", "v_branch/uvm_vreg_field", "if", "643-645");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21683]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 643, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21684]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 666, 6, "", "v_branch/uvm_vreg_field", "if", "666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21685]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 666, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21686]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 663, 7, "", "v_branch/uvm_vreg_field", "if", "663,666-669");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21687]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 663, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21688]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 663, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21689]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 663, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_HAS_X)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21690]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 663, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21691]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 659, 4, "", "v_branch/uvm_vreg_field", "if", "659-660,662,672");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21692]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 659, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21693]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 685, 6, "", "v_branch/uvm_vreg_field", "if", "685");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21694]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 685, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21695]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 681, 10, "", "v_branch/uvm_vreg_field", "if", "681,685-688");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 681, 11, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 681, 30, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21698]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 681, 30, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_HAS_X)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21699]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 681, 30, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 679, 7, "", "v_branch/uvm_vreg_field", "if", "679-680");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21701]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 679, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21702]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 678, 4, "", "v_branch/uvm_vreg_field", "if", "678,691");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21703]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 678, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21704]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 698, 7, "", "v_branch/uvm_vreg_field", "if", "698");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21705]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 698, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21706]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 698, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21707]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 698, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_HAS_X)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21708]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 698, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21709]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 696, 4, "", "v_line/uvm_vreg_field", "block", "696-697,700-701");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21710]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 707, 6, "", "v_branch/uvm_vreg_field", "if", "707");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21711]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 707, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21712]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 612, 6, "", "v_line/uvm_vreg_field", "block", "612-613,619-622,624-629,631,639,641,647,649-651,654,657,676-677,695-696,704,707,709-710");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21713]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 735, 6, "", "v_branch/uvm_vreg_field", "if", "735");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21714]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 735, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21715]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 733, 4, "", "v_branch/uvm_vreg_field", "if", "733,735-737");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21716]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 733, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21717]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 761, 7, "", "v_branch/uvm_vreg_field", "if", "761");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21718]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 761, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21719]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 761, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21720]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 761, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_HAS_X)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21721]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 761, 27, "", "v_expr/uvm_vreg_field", "((st != uvm_pkg::UVM_IS_OK)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21722]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 756, 4, "", "v_line/uvm_vreg_field", "block", "756-757,759,763-764");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21723]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 775, 6, "", "v_branch/uvm_vreg_field", "if", "775");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21724]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 775, 7, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21725]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 714, 6, "", "v_line/uvm_vreg_field", "block", "714-716,721-724,726-730,732,740,742,744,746-749,752,755-756,768,771,773,775,777-778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21726]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 782, 15, "", "v_line/uvm_vreg_field", "block", "782-784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21727]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 796, 7, "", "v_branch/uvm_vreg_field", "if", "796-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21728]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 796, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21729]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 796, 23, "", "v_expr/uvm_vreg_field", "((fname != \"\")==1 && (lineno != 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21730]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 796, 23, "", "v_expr/uvm_vreg_field", "((lineno != 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21731]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 796, 23, "", "v_expr/uvm_vreg_field", "((fname != \"\")==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21732]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 795, 4, "", "v_branch/uvm_vreg_field", "if", "795,798");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21733]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 795, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21734]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 801, 7, "", "v_branch/uvm_vreg_field", "if", "801-802");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21735]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 801, 8, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21736]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 801, 23, "", "v_expr/uvm_vreg_field", "((fname != \"\")==1 && (lineno != 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21737]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 801, 23, "", "v_expr/uvm_vreg_field", "((lineno != 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21738]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 801, 23, "", "v_expr/uvm_vreg_field", "((fname != \"\")==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21739]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 800, 4, "", "v_branch/uvm_vreg_field", "if", "800,803");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21740]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 800, 5, "", "v_branch/uvm_vreg_field", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21741]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 787, 17, "", "v_line/uvm_vreg_field", "block", "787-794");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21742]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 810, 21, "", "v_line/uvm_vreg_field", "block", "810-811");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21743]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 814, 15, "", "v_line/uvm_vreg_field", "block", "814");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21744]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 817, 14, "", "v_line/uvm_vreg_field", "block", "817,819");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21745]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 822, 15, "", "v_line/uvm_vreg_field", "block", "822");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21746]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 825, 15, "", "v_line/uvm_vreg_field", "block", "825");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_vreg_field* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
