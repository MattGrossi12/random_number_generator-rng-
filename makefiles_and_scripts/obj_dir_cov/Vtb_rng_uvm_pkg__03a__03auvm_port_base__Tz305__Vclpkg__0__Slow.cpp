// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug_connected_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_connected_to__Vstatic__save = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__save = ""s;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19552]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 5, "", "v_branch/uvm_port_base__Tz305", "if", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19553]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19554]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 255, 12, "", "v_line/uvm_port_base__Tz305", "block", "255,260-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19555]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 278, 19, "", "v_line/uvm_port_base__Tz305", "block", "278-279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19556]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 288, 27, "", "v_line/uvm_port_base__Tz305", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19557]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 298, 34, "", "v_line/uvm_port_base__Tz305", "block", "298-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19558]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 313, 44, "", "v_line/uvm_port_base__Tz305", "block", "313-314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19559]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 327, 16, "", "v_line/uvm_port_base__Tz305", "case", "327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19560]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 328, 18, "", "v_line/uvm_port_base__Tz305", "case", "328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19561]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 329, 26, "", "v_line/uvm_port_base__Tz305", "case", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19562]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 325, 27, "", "v_line/uvm_port_base__Tz305", "block", "325-326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19563]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 340, 16, "", "v_line/uvm_port_base__Tz305", "block", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19564]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 351, 16, "", "v_line/uvm_port_base__Tz305", "block", "351-352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19565]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 363, 16, "", "v_line/uvm_port_base__Tz305", "block", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19566]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 371, 16, "", "v_line/uvm_port_base__Tz305", "block", "371-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19567]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 378, 16, "", "v_line/uvm_port_base__Tz305", "block", "378-379");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19568]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 388, 16, "", "v_line/uvm_port_base__Tz305", "block", "388-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19569]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 400, 16, "", "v_line/uvm_port_base__Tz305", "block", "400-401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19570]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 5, "", "v_branch/uvm_port_base__Tz305", "if", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19571]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19572]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 405, 17, "", "v_line/uvm_port_base__Tz305", "block", "405-406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19573]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 411, 16, "", "v_line/uvm_port_base__Tz305", "block", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19574]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 424, 17, "", "v_line/uvm_port_base__Tz305", "block", "424-425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19575]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 5, "", "v_branch/uvm_port_base__Tz305", "if", "475-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19576]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19577]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 5, "", "v_branch/uvm_port_base__Tz305", "if", "483-486");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19578]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19579]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 5, "", "v_branch/uvm_port_base__Tz305", "if", "489-492");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19580]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19581]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 5, "", "v_branch/uvm_port_base__Tz305", "if", "495-501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19582]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19583]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 5, "", "v_branch/uvm_port_base__Tz305", "if", "505-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19584]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19585]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 5, "", "v_branch/uvm_port_base__Tz305", "if", "513-517");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19586]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19587]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 470, 25, "", "v_line/uvm_port_base__Tz305", "block", "470-474,520,522-523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19588]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 5, "", "v_branch/uvm_port_base__Tz305", "if", "546");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19589]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19590]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 5, "", "v_branch/uvm_port_base__Tz305", "if", "547");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19591]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19592]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 5, "", "v_branch/uvm_port_base__Tz305", "if", "549-550");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19593]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19594]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz305", "((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19595]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz305", "((level >= max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19596]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz305", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19597]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz305", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19598]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz305", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19599]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz305", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19600]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_line/uvm_port_base__Tz305", "block", "555-562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19601]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_branch/uvm_port_base__Tz305", "if", "555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19602]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 31, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19603]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 5, "", "v_branch/uvm_port_base__Tz305", "if", "554-555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19604]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19605]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 7, "", "v_branch/uvm_port_base__Tz305", "if", "567-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19606]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 8, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19607]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 9, "", "v_branch/uvm_port_base__Tz305", "if", "575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19608]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 10, "", "v_branch/uvm_port_base__Tz305", "else", "579-580");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19609]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_line/uvm_port_base__Tz305", "block", "584-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19610]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_branch/uvm_port_base__Tz305", "if", "584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19611]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 30, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19612]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 7, "", "v_branch/uvm_port_base__Tz305", "if", "570-574");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19613]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 8, "", "v_branch/uvm_port_base__Tz305", "else", "582-584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19614]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 5, "", "v_branch/uvm_port_base__Tz305", "if", "566,591");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19615]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19616]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 540, 17, "", "v_line/uvm_port_base__Tz305", "block", "540-544,552");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19617]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 5, "", "v_branch/uvm_port_base__Tz305", "if", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19618]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19619]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 5, "", "v_branch/uvm_port_base__Tz305", "if", "614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19620]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19621]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 5, "", "v_branch/uvm_port_base__Tz305", "if", "616-617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19622]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19623]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz305", "((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19624]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz305", "((level > max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19625]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz305", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19626]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz305", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19627]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz305", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19628]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz305", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19629]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_line/uvm_port_base__Tz305", "block", "622-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19630]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_branch/uvm_port_base__Tz305", "if", "622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19631]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 31, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19632]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 5, "", "v_branch/uvm_port_base__Tz305", "if", "621-622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19633]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19634]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 7, "", "v_branch/uvm_port_base__Tz305", "if", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19635]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 8, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19636]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 7, "", "v_branch/uvm_port_base__Tz305", "if", "637-638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19637]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 8, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19638]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 5, "", "v_branch/uvm_port_base__Tz305", "if", "633,639");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19639]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19640]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 607, 17, "", "v_line/uvm_port_base__Tz305", "block", "607-611,619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19641]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_line/uvm_port_base__Tz305", "block", "652-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19642]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_branch/uvm_port_base__Tz305", "if", "652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19643]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 29, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19644]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 649, 17, "", "v_line/uvm_port_base__Tz305", "block", "649-652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19645]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_line/uvm_port_base__Tz305", "block", "666-668");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19646]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_branch/uvm_port_base__Tz305", "if", "666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19647]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 29, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19648]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 663, 17, "", "v_line/uvm_port_base__Tz305", "block", "663-666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19649]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 5, "", "v_branch/uvm_port_base__Tz305", "if", "689-690");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19650]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19651]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 5, "", "v_branch/uvm_port_base__Tz305", "if", "697-698");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19652]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19653]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 10, "", "v_branch/uvm_port_base__Tz305", "if", "732-740");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19654]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 11, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19655]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718, 10, "", "v_line/uvm_port_base__Tz305", "elsif", "718-726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19656]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705, 5, "", "v_line/uvm_port_base__Tz305", "elsif", "705-712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19657]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 676, 23, "", "v_line/uvm_port_base__Tz305", "block", "676-682,692-694,700-701,743");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19658]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 7, "", "v_branch/uvm_port_base__Tz305", "if", "757-758");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19659]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 8, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19660]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755, 5, "", "v_line/uvm_port_base__Tz305", "block", "755-756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19661]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 751, 23, "", "v_line/uvm_port_base__Tz305", "block", "751-753,755");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19662]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 5, "", "v_branch/uvm_port_base__Tz305", "if", "777-778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19663]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19664]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_line/uvm_port_base__Tz305", "block", "784-788");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19665]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_branch/uvm_port_base__Tz305", "if", "784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19666]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 31, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19667]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 5, "", "v_branch/uvm_port_base__Tz305", "if", "780-781");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19668]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 6, "", "v_branch/uvm_port_base__Tz305", "else", "783-784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19669]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 5, "", "v_branch/uvm_port_base__Tz305", "if", "794-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19670]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19671]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 5, "", "v_branch/uvm_port_base__Tz305", "if", "800-803");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19672]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19673]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz305", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19674]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz305", "((size() > max_size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19675]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz305", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19676]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 5, "", "v_branch/uvm_port_base__Tz305", "if", "806-807");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19677]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19678]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 776, 25, "", "v_line/uvm_port_base__Tz305", "block", "776,792");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19679]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 5, "", "v_branch/uvm_port_base__Tz305", "if", "821-824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19680]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19681]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 5, "", "v_branch/uvm_port_base__Tz305", "if", "826-829");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19682]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 6, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19683]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz305", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19684]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz305", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19685]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz305", "((index < 32'sh0)==0 && (index >= size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19686]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 7, "", "v_branch/uvm_port_base__Tz305", "if", "832-833");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19687]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 8, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19688]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_line/uvm_port_base__Tz305", "block", "831,834");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19689]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_branch/uvm_port_base__Tz305", "if", "831");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19690]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 26, "", "v_branch/uvm_port_base__Tz305", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19691]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 819, 32, "", "v_line/uvm_port_base__Tz305", "block", "819-820,831");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
