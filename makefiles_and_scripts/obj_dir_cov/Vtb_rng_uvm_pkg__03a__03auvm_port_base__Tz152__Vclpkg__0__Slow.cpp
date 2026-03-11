// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug_connected_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_connected_to__Vstatic__save = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__save = ""s;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18517]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 5, "", "v_branch/uvm_port_base__Tz152", "if", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18518]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18519]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 255, 12, "", "v_line/uvm_port_base__Tz152", "block", "255,260-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18520]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 278, 19, "", "v_line/uvm_port_base__Tz152", "block", "278-279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18521]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 288, 27, "", "v_line/uvm_port_base__Tz152", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18522]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 298, 34, "", "v_line/uvm_port_base__Tz152", "block", "298-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18523]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 313, 44, "", "v_line/uvm_port_base__Tz152", "block", "313-314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18524]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 327, 16, "", "v_line/uvm_port_base__Tz152", "case", "327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18525]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 328, 18, "", "v_line/uvm_port_base__Tz152", "case", "328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18526]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 329, 26, "", "v_line/uvm_port_base__Tz152", "case", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18527]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 325, 27, "", "v_line/uvm_port_base__Tz152", "block", "325-326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18528]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 340, 16, "", "v_line/uvm_port_base__Tz152", "block", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18529]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 351, 16, "", "v_line/uvm_port_base__Tz152", "block", "351-352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18530]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 363, 16, "", "v_line/uvm_port_base__Tz152", "block", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18531]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 371, 16, "", "v_line/uvm_port_base__Tz152", "block", "371-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18532]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 378, 16, "", "v_line/uvm_port_base__Tz152", "block", "378-379");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18533]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 388, 16, "", "v_line/uvm_port_base__Tz152", "block", "388-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18534]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 400, 16, "", "v_line/uvm_port_base__Tz152", "block", "400-401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18535]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 5, "", "v_branch/uvm_port_base__Tz152", "if", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18536]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18537]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 405, 17, "", "v_line/uvm_port_base__Tz152", "block", "405-406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18538]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 411, 16, "", "v_line/uvm_port_base__Tz152", "block", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18539]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 424, 17, "", "v_line/uvm_port_base__Tz152", "block", "424-425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18540]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 5, "", "v_branch/uvm_port_base__Tz152", "if", "475-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18541]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18542]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 5, "", "v_branch/uvm_port_base__Tz152", "if", "483-486");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18543]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18544]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 5, "", "v_branch/uvm_port_base__Tz152", "if", "489-492");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18545]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18546]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 5, "", "v_branch/uvm_port_base__Tz152", "if", "495-501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18547]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18548]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 5, "", "v_branch/uvm_port_base__Tz152", "if", "505-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18549]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18550]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 5, "", "v_branch/uvm_port_base__Tz152", "if", "513-517");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18551]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18552]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 470, 25, "", "v_line/uvm_port_base__Tz152", "block", "470-474,520,522-523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18553]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 5, "", "v_branch/uvm_port_base__Tz152", "if", "546");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18554]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18555]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 5, "", "v_branch/uvm_port_base__Tz152", "if", "547");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18556]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18557]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 5, "", "v_branch/uvm_port_base__Tz152", "if", "549-550");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18558]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18559]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz152", "((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18560]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz152", "((level >= max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18561]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz152", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18562]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz152", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18563]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz152", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18564]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz152", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18565]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_line/uvm_port_base__Tz152", "block", "555-562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18566]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_branch/uvm_port_base__Tz152", "if", "555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18567]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 31, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18568]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 5, "", "v_branch/uvm_port_base__Tz152", "if", "554-555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18569]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18570]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 7, "", "v_branch/uvm_port_base__Tz152", "if", "567-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18571]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 8, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18572]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 9, "", "v_branch/uvm_port_base__Tz152", "if", "575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18573]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 10, "", "v_branch/uvm_port_base__Tz152", "else", "579-580");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18574]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_line/uvm_port_base__Tz152", "block", "584-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18575]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_branch/uvm_port_base__Tz152", "if", "584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18576]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 30, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18577]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 7, "", "v_branch/uvm_port_base__Tz152", "if", "570-574");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18578]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 8, "", "v_branch/uvm_port_base__Tz152", "else", "582-584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18579]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 5, "", "v_branch/uvm_port_base__Tz152", "if", "566,591");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18580]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18581]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 540, 17, "", "v_line/uvm_port_base__Tz152", "block", "540-544,552");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18582]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 5, "", "v_branch/uvm_port_base__Tz152", "if", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18583]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18584]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 5, "", "v_branch/uvm_port_base__Tz152", "if", "614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18585]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18586]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 5, "", "v_branch/uvm_port_base__Tz152", "if", "616-617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18587]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18588]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz152", "((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18589]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz152", "((level > max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18590]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz152", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18591]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz152", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18592]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz152", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18593]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz152", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18594]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_line/uvm_port_base__Tz152", "block", "622-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18595]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_branch/uvm_port_base__Tz152", "if", "622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18596]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 31, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18597]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 5, "", "v_branch/uvm_port_base__Tz152", "if", "621-622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18598]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18599]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 7, "", "v_branch/uvm_port_base__Tz152", "if", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18600]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 8, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18601]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 7, "", "v_branch/uvm_port_base__Tz152", "if", "637-638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18602]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 8, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18603]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 5, "", "v_branch/uvm_port_base__Tz152", "if", "633,639");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18604]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18605]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 607, 17, "", "v_line/uvm_port_base__Tz152", "block", "607-611,619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18606]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_line/uvm_port_base__Tz152", "block", "652-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18607]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_branch/uvm_port_base__Tz152", "if", "652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18608]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 29, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18609]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 649, 17, "", "v_line/uvm_port_base__Tz152", "block", "649-652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18610]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_line/uvm_port_base__Tz152", "block", "666-668");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18611]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_branch/uvm_port_base__Tz152", "if", "666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18612]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 29, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18613]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 663, 17, "", "v_line/uvm_port_base__Tz152", "block", "663-666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18614]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 5, "", "v_branch/uvm_port_base__Tz152", "if", "689-690");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18615]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18616]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 5, "", "v_branch/uvm_port_base__Tz152", "if", "697-698");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18617]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18618]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 10, "", "v_branch/uvm_port_base__Tz152", "if", "732-740");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18619]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 11, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18620]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718, 10, "", "v_line/uvm_port_base__Tz152", "elsif", "718-726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18621]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705, 5, "", "v_line/uvm_port_base__Tz152", "elsif", "705-712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18622]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 676, 23, "", "v_line/uvm_port_base__Tz152", "block", "676-682,692-694,700-701,743");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18623]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 7, "", "v_branch/uvm_port_base__Tz152", "if", "757-758");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18624]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 8, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18625]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755, 5, "", "v_line/uvm_port_base__Tz152", "block", "755-756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18626]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 751, 23, "", "v_line/uvm_port_base__Tz152", "block", "751-753,755");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18627]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 5, "", "v_branch/uvm_port_base__Tz152", "if", "777-778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18628]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18629]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_line/uvm_port_base__Tz152", "block", "784-788");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18630]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_branch/uvm_port_base__Tz152", "if", "784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18631]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 31, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18632]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 5, "", "v_branch/uvm_port_base__Tz152", "if", "780-781");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18633]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 6, "", "v_branch/uvm_port_base__Tz152", "else", "783-784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18634]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 5, "", "v_branch/uvm_port_base__Tz152", "if", "794-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18635]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18636]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 5, "", "v_branch/uvm_port_base__Tz152", "if", "800-803");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18637]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18638]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz152", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18639]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz152", "((size() > max_size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18640]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz152", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18641]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 5, "", "v_branch/uvm_port_base__Tz152", "if", "806-807");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18642]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18643]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 776, 25, "", "v_line/uvm_port_base__Tz152", "block", "776,792");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18644]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 5, "", "v_branch/uvm_port_base__Tz152", "if", "821-824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18645]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18646]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 5, "", "v_branch/uvm_port_base__Tz152", "if", "826-829");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18647]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 6, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18648]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz152", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18649]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz152", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18650]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz152", "((index < 32'sh0)==0 && (index >= size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18651]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 7, "", "v_branch/uvm_port_base__Tz152", "if", "832-833");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18652]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 8, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18653]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_line/uvm_port_base__Tz152", "block", "831,834");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18654]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_branch/uvm_port_base__Tz152", "if", "831");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18655]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 26, "", "v_branch/uvm_port_base__Tz152", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18656]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 819, 32, "", "v_line/uvm_port_base__Tz152", "block", "819-820,831");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
