// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug_connected_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_connected_to__Vstatic__save = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__save = ""s;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18907]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 5, "", "v_branch/uvm_port_base__Tz172", "if", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18908]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18909]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 255, 12, "", "v_line/uvm_port_base__Tz172", "block", "255,260-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18910]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 278, 19, "", "v_line/uvm_port_base__Tz172", "block", "278-279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18911]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 288, 27, "", "v_line/uvm_port_base__Tz172", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18912]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 298, 34, "", "v_line/uvm_port_base__Tz172", "block", "298-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18913]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 313, 44, "", "v_line/uvm_port_base__Tz172", "block", "313-314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18914]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 327, 16, "", "v_line/uvm_port_base__Tz172", "case", "327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18915]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 328, 18, "", "v_line/uvm_port_base__Tz172", "case", "328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18916]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 329, 26, "", "v_line/uvm_port_base__Tz172", "case", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18917]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 325, 27, "", "v_line/uvm_port_base__Tz172", "block", "325-326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18918]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 340, 16, "", "v_line/uvm_port_base__Tz172", "block", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18919]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 351, 16, "", "v_line/uvm_port_base__Tz172", "block", "351-352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18920]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 363, 16, "", "v_line/uvm_port_base__Tz172", "block", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18921]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 371, 16, "", "v_line/uvm_port_base__Tz172", "block", "371-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18922]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 378, 16, "", "v_line/uvm_port_base__Tz172", "block", "378-379");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18923]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 388, 16, "", "v_line/uvm_port_base__Tz172", "block", "388-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18924]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 400, 16, "", "v_line/uvm_port_base__Tz172", "block", "400-401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18925]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 5, "", "v_branch/uvm_port_base__Tz172", "if", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18926]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18927]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 405, 17, "", "v_line/uvm_port_base__Tz172", "block", "405-406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18928]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 411, 16, "", "v_line/uvm_port_base__Tz172", "block", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18929]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 424, 17, "", "v_line/uvm_port_base__Tz172", "block", "424-425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18930]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 5, "", "v_branch/uvm_port_base__Tz172", "if", "475-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18931]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18932]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 5, "", "v_branch/uvm_port_base__Tz172", "if", "483-486");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18933]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18934]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 5, "", "v_branch/uvm_port_base__Tz172", "if", "489-492");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18935]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18936]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 5, "", "v_branch/uvm_port_base__Tz172", "if", "495-501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18937]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18938]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 5, "", "v_branch/uvm_port_base__Tz172", "if", "505-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18939]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18940]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 5, "", "v_branch/uvm_port_base__Tz172", "if", "513-517");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18941]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18942]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 470, 25, "", "v_line/uvm_port_base__Tz172", "block", "470-474,520,522-523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18943]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 5, "", "v_branch/uvm_port_base__Tz172", "if", "546");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18944]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18945]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 5, "", "v_branch/uvm_port_base__Tz172", "if", "547");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18946]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18947]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 5, "", "v_branch/uvm_port_base__Tz172", "if", "549-550");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18948]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18949]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz172", "((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18950]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz172", "((level >= max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18951]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz172", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18952]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz172", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18953]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz172", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18954]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz172", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18955]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_line/uvm_port_base__Tz172", "block", "555-562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18956]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_branch/uvm_port_base__Tz172", "if", "555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18957]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 31, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18958]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 5, "", "v_branch/uvm_port_base__Tz172", "if", "554-555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18959]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18960]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 7, "", "v_branch/uvm_port_base__Tz172", "if", "567-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18961]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 8, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18962]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 9, "", "v_branch/uvm_port_base__Tz172", "if", "575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18963]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 10, "", "v_branch/uvm_port_base__Tz172", "else", "579-580");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18964]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_line/uvm_port_base__Tz172", "block", "584-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18965]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_branch/uvm_port_base__Tz172", "if", "584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18966]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 30, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18967]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 7, "", "v_branch/uvm_port_base__Tz172", "if", "570-574");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18968]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 8, "", "v_branch/uvm_port_base__Tz172", "else", "582-584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18969]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 5, "", "v_branch/uvm_port_base__Tz172", "if", "566,591");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18970]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18971]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 540, 17, "", "v_line/uvm_port_base__Tz172", "block", "540-544,552");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18972]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 5, "", "v_branch/uvm_port_base__Tz172", "if", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18973]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18974]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 5, "", "v_branch/uvm_port_base__Tz172", "if", "614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18975]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18976]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 5, "", "v_branch/uvm_port_base__Tz172", "if", "616-617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18977]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18978]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz172", "((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18979]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz172", "((level > max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18980]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz172", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18981]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz172", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18982]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz172", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18983]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz172", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18984]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_line/uvm_port_base__Tz172", "block", "622-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18985]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_branch/uvm_port_base__Tz172", "if", "622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18986]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 31, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18987]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 5, "", "v_branch/uvm_port_base__Tz172", "if", "621-622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18988]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18989]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 7, "", "v_branch/uvm_port_base__Tz172", "if", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18990]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 8, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18991]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 7, "", "v_branch/uvm_port_base__Tz172", "if", "637-638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18992]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 8, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18993]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 5, "", "v_branch/uvm_port_base__Tz172", "if", "633,639");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18994]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18995]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 607, 17, "", "v_line/uvm_port_base__Tz172", "block", "607-611,619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18996]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_line/uvm_port_base__Tz172", "block", "652-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18997]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_branch/uvm_port_base__Tz172", "if", "652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18998]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 29, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18999]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 649, 17, "", "v_line/uvm_port_base__Tz172", "block", "649-652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19000]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_line/uvm_port_base__Tz172", "block", "666-668");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19001]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_branch/uvm_port_base__Tz172", "if", "666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19002]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 29, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19003]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 663, 17, "", "v_line/uvm_port_base__Tz172", "block", "663-666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19004]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 5, "", "v_branch/uvm_port_base__Tz172", "if", "689-690");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19005]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19006]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 5, "", "v_branch/uvm_port_base__Tz172", "if", "697-698");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19007]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19008]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 10, "", "v_branch/uvm_port_base__Tz172", "if", "732-740");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19009]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 11, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19010]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718, 10, "", "v_line/uvm_port_base__Tz172", "elsif", "718-726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19011]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705, 5, "", "v_line/uvm_port_base__Tz172", "elsif", "705-712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19012]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 676, 23, "", "v_line/uvm_port_base__Tz172", "block", "676-682,692-694,700-701,743");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19013]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 7, "", "v_branch/uvm_port_base__Tz172", "if", "757-758");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19014]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 8, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19015]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755, 5, "", "v_line/uvm_port_base__Tz172", "block", "755-756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19016]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 751, 23, "", "v_line/uvm_port_base__Tz172", "block", "751-753,755");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19017]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 5, "", "v_branch/uvm_port_base__Tz172", "if", "777-778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19018]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19019]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_line/uvm_port_base__Tz172", "block", "784-788");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19020]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_branch/uvm_port_base__Tz172", "if", "784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19021]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 31, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19022]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 5, "", "v_branch/uvm_port_base__Tz172", "if", "780-781");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19023]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 6, "", "v_branch/uvm_port_base__Tz172", "else", "783-784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19024]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 5, "", "v_branch/uvm_port_base__Tz172", "if", "794-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19025]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19026]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 5, "", "v_branch/uvm_port_base__Tz172", "if", "800-803");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19027]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19028]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz172", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19029]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz172", "((size() > max_size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19030]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz172", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19031]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 5, "", "v_branch/uvm_port_base__Tz172", "if", "806-807");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19032]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19033]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 776, 25, "", "v_line/uvm_port_base__Tz172", "block", "776,792");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19034]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 5, "", "v_branch/uvm_port_base__Tz172", "if", "821-824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19035]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19036]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 5, "", "v_branch/uvm_port_base__Tz172", "if", "826-829");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19037]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 6, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19038]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz172", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19039]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz172", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19040]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz172", "((index < 32'sh0)==0 && (index >= size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19041]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 7, "", "v_branch/uvm_port_base__Tz172", "if", "832-833");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19042]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 8, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19043]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_line/uvm_port_base__Tz172", "block", "831,834");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19044]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_branch/uvm_port_base__Tz172", "if", "831");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19045]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 26, "", "v_branch/uvm_port_base__Tz172", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19046]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 819, 32, "", "v_line/uvm_port_base__Tz172", "block", "819-820,831");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
