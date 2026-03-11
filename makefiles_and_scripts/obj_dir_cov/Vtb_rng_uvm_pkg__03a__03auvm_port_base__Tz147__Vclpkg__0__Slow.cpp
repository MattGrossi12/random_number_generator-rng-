// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug_connected_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_connected_to__Vstatic__save = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__save = ""s;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18358]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 5, "", "v_branch/uvm_port_base__Tz147", "if", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18359]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18360]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 255, 12, "", "v_line/uvm_port_base__Tz147", "block", "255,260-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18361]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 278, 19, "", "v_line/uvm_port_base__Tz147", "block", "278-279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18362]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 288, 27, "", "v_line/uvm_port_base__Tz147", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18363]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 298, 34, "", "v_line/uvm_port_base__Tz147", "block", "298-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18364]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 313, 44, "", "v_line/uvm_port_base__Tz147", "block", "313-314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18365]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 327, 16, "", "v_line/uvm_port_base__Tz147", "case", "327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18366]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 328, 18, "", "v_line/uvm_port_base__Tz147", "case", "328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18367]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 329, 26, "", "v_line/uvm_port_base__Tz147", "case", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18368]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 325, 27, "", "v_line/uvm_port_base__Tz147", "block", "325-326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18369]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 340, 16, "", "v_line/uvm_port_base__Tz147", "block", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18370]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 351, 16, "", "v_line/uvm_port_base__Tz147", "block", "351-352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18371]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 363, 16, "", "v_line/uvm_port_base__Tz147", "block", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18372]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 371, 16, "", "v_line/uvm_port_base__Tz147", "block", "371-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18373]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 378, 16, "", "v_line/uvm_port_base__Tz147", "block", "378-379");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18374]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 388, 16, "", "v_line/uvm_port_base__Tz147", "block", "388-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18375]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 400, 16, "", "v_line/uvm_port_base__Tz147", "block", "400-401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18376]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 5, "", "v_branch/uvm_port_base__Tz147", "if", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18377]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18378]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 405, 17, "", "v_line/uvm_port_base__Tz147", "block", "405-406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18379]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 411, 16, "", "v_line/uvm_port_base__Tz147", "block", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18380]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 424, 17, "", "v_line/uvm_port_base__Tz147", "block", "424-425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18381]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 5, "", "v_branch/uvm_port_base__Tz147", "if", "475-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18382]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18383]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 5, "", "v_branch/uvm_port_base__Tz147", "if", "483-486");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18384]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18385]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 5, "", "v_branch/uvm_port_base__Tz147", "if", "489-492");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18386]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18387]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 5, "", "v_branch/uvm_port_base__Tz147", "if", "495-501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18388]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18389]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 5, "", "v_branch/uvm_port_base__Tz147", "if", "505-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18390]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18391]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 5, "", "v_branch/uvm_port_base__Tz147", "if", "513-517");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18392]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18393]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 470, 25, "", "v_line/uvm_port_base__Tz147", "block", "470-474,520,522-523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18394]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 5, "", "v_branch/uvm_port_base__Tz147", "if", "546");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18395]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18396]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 5, "", "v_branch/uvm_port_base__Tz147", "if", "547");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18397]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18398]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 5, "", "v_branch/uvm_port_base__Tz147", "if", "549-550");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18399]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18400]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz147", "((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18401]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz147", "((level >= max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18402]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz147", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18403]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz147", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18404]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz147", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18405]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz147", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18406]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_line/uvm_port_base__Tz147", "block", "555-562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18407]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_branch/uvm_port_base__Tz147", "if", "555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18408]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 31, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18409]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 5, "", "v_branch/uvm_port_base__Tz147", "if", "554-555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18410]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18411]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 7, "", "v_branch/uvm_port_base__Tz147", "if", "567-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18412]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 8, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18413]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 9, "", "v_branch/uvm_port_base__Tz147", "if", "575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18414]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 10, "", "v_branch/uvm_port_base__Tz147", "else", "579-580");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18415]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_line/uvm_port_base__Tz147", "block", "584-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18416]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_branch/uvm_port_base__Tz147", "if", "584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18417]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 30, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18418]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 7, "", "v_branch/uvm_port_base__Tz147", "if", "570-574");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18419]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 8, "", "v_branch/uvm_port_base__Tz147", "else", "582-584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18420]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 5, "", "v_branch/uvm_port_base__Tz147", "if", "566,591");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18421]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18422]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 540, 17, "", "v_line/uvm_port_base__Tz147", "block", "540-544,552");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18423]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 5, "", "v_branch/uvm_port_base__Tz147", "if", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18424]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18425]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 5, "", "v_branch/uvm_port_base__Tz147", "if", "614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18426]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18427]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 5, "", "v_branch/uvm_port_base__Tz147", "if", "616-617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18428]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18429]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz147", "((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18430]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz147", "((level > max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18431]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz147", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18432]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz147", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18433]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz147", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18434]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz147", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18435]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_line/uvm_port_base__Tz147", "block", "622-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18436]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_branch/uvm_port_base__Tz147", "if", "622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18437]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 31, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18438]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 5, "", "v_branch/uvm_port_base__Tz147", "if", "621-622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18439]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18440]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 7, "", "v_branch/uvm_port_base__Tz147", "if", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18441]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 8, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18442]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 7, "", "v_branch/uvm_port_base__Tz147", "if", "637-638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18443]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 8, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18444]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 5, "", "v_branch/uvm_port_base__Tz147", "if", "633,639");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18445]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18446]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 607, 17, "", "v_line/uvm_port_base__Tz147", "block", "607-611,619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18447]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_line/uvm_port_base__Tz147", "block", "652-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18448]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_branch/uvm_port_base__Tz147", "if", "652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18449]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 29, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18450]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 649, 17, "", "v_line/uvm_port_base__Tz147", "block", "649-652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18451]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_line/uvm_port_base__Tz147", "block", "666-668");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18452]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_branch/uvm_port_base__Tz147", "if", "666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18453]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 29, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18454]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 663, 17, "", "v_line/uvm_port_base__Tz147", "block", "663-666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18455]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 5, "", "v_branch/uvm_port_base__Tz147", "if", "689-690");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18456]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18457]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 5, "", "v_branch/uvm_port_base__Tz147", "if", "697-698");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18458]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18459]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 10, "", "v_branch/uvm_port_base__Tz147", "if", "732-740");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18460]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 11, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18461]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718, 10, "", "v_line/uvm_port_base__Tz147", "elsif", "718-726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18462]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705, 5, "", "v_line/uvm_port_base__Tz147", "elsif", "705-712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18463]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 676, 23, "", "v_line/uvm_port_base__Tz147", "block", "676-682,692-694,700-701,743");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18464]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 7, "", "v_branch/uvm_port_base__Tz147", "if", "757-758");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18465]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 8, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18466]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755, 5, "", "v_line/uvm_port_base__Tz147", "block", "755-756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18467]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 751, 23, "", "v_line/uvm_port_base__Tz147", "block", "751-753,755");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18468]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 5, "", "v_branch/uvm_port_base__Tz147", "if", "777-778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18469]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18470]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_line/uvm_port_base__Tz147", "block", "784-788");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18471]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_branch/uvm_port_base__Tz147", "if", "784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18472]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 31, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18473]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 5, "", "v_branch/uvm_port_base__Tz147", "if", "780-781");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18474]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 6, "", "v_branch/uvm_port_base__Tz147", "else", "783-784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18475]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 5, "", "v_branch/uvm_port_base__Tz147", "if", "794-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18476]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18477]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 5, "", "v_branch/uvm_port_base__Tz147", "if", "800-803");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18478]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18479]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz147", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18480]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz147", "((size() > max_size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18481]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz147", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18482]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 5, "", "v_branch/uvm_port_base__Tz147", "if", "806-807");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18483]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18484]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 776, 25, "", "v_line/uvm_port_base__Tz147", "block", "776,792");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18485]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 5, "", "v_branch/uvm_port_base__Tz147", "if", "821-824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18486]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18487]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 5, "", "v_branch/uvm_port_base__Tz147", "if", "826-829");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18488]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 6, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18489]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz147", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18490]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz147", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18491]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz147", "((index < 32'sh0)==0 && (index >= size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18492]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 7, "", "v_branch/uvm_port_base__Tz147", "if", "832-833");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18493]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 8, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18494]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_line/uvm_port_base__Tz147", "block", "831,834");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18495]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_branch/uvm_port_base__Tz147", "if", "831");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18496]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 26, "", "v_branch/uvm_port_base__Tz147", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18497]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 819, 32, "", "v_line/uvm_port_base__Tz147", "block", "819-820,831");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
