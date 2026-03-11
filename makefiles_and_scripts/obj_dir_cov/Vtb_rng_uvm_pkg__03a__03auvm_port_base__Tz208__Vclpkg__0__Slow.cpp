// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug_connected_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_connected_to__Vstatic__save = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__save = ""s;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18670]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 5, "", "v_branch/uvm_port_base__Tz208", "if", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18671]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18672]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 255, 12, "", "v_line/uvm_port_base__Tz208", "block", "255,260-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18673]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 278, 19, "", "v_line/uvm_port_base__Tz208", "block", "278-279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18674]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 288, 27, "", "v_line/uvm_port_base__Tz208", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18675]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 298, 34, "", "v_line/uvm_port_base__Tz208", "block", "298-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18676]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 313, 44, "", "v_line/uvm_port_base__Tz208", "block", "313-314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18677]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 327, 16, "", "v_line/uvm_port_base__Tz208", "case", "327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18678]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 328, 18, "", "v_line/uvm_port_base__Tz208", "case", "328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18679]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 329, 26, "", "v_line/uvm_port_base__Tz208", "case", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18680]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 325, 27, "", "v_line/uvm_port_base__Tz208", "block", "325-326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18681]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 340, 16, "", "v_line/uvm_port_base__Tz208", "block", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18682]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 351, 16, "", "v_line/uvm_port_base__Tz208", "block", "351-352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18683]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 363, 16, "", "v_line/uvm_port_base__Tz208", "block", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18684]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 371, 16, "", "v_line/uvm_port_base__Tz208", "block", "371-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18685]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 378, 16, "", "v_line/uvm_port_base__Tz208", "block", "378-379");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18686]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 388, 16, "", "v_line/uvm_port_base__Tz208", "block", "388-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18687]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 400, 16, "", "v_line/uvm_port_base__Tz208", "block", "400-401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18688]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 5, "", "v_branch/uvm_port_base__Tz208", "if", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18689]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18690]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 405, 17, "", "v_line/uvm_port_base__Tz208", "block", "405-406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18691]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 411, 16, "", "v_line/uvm_port_base__Tz208", "block", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18692]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 424, 17, "", "v_line/uvm_port_base__Tz208", "block", "424-425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18693]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 5, "", "v_branch/uvm_port_base__Tz208", "if", "475-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18694]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18695]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 5, "", "v_branch/uvm_port_base__Tz208", "if", "483-486");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 5, "", "v_branch/uvm_port_base__Tz208", "if", "489-492");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18698]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18699]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 5, "", "v_branch/uvm_port_base__Tz208", "if", "495-501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18701]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 5, "", "v_branch/uvm_port_base__Tz208", "if", "505-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18702]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18703]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 5, "", "v_branch/uvm_port_base__Tz208", "if", "513-517");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18704]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18705]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 470, 25, "", "v_line/uvm_port_base__Tz208", "block", "470-474,520,522-523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18706]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 5, "", "v_branch/uvm_port_base__Tz208", "if", "546");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18707]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18708]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 5, "", "v_branch/uvm_port_base__Tz208", "if", "547");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18709]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18710]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 5, "", "v_branch/uvm_port_base__Tz208", "if", "549-550");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18711]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18712]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz208", "((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18713]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz208", "((level >= max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18714]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz208", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18715]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz208", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18716]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz208", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18717]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz208", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18718]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_line/uvm_port_base__Tz208", "block", "555-562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18719]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_branch/uvm_port_base__Tz208", "if", "555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18720]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 31, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18721]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 5, "", "v_branch/uvm_port_base__Tz208", "if", "554-555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18722]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18723]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 7, "", "v_branch/uvm_port_base__Tz208", "if", "567-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18724]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 8, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18725]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 9, "", "v_branch/uvm_port_base__Tz208", "if", "575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18726]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 10, "", "v_branch/uvm_port_base__Tz208", "else", "579-580");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18727]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_line/uvm_port_base__Tz208", "block", "584-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18728]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_branch/uvm_port_base__Tz208", "if", "584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18729]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 30, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18730]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 7, "", "v_branch/uvm_port_base__Tz208", "if", "570-574");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18731]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 8, "", "v_branch/uvm_port_base__Tz208", "else", "582-584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18732]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 5, "", "v_branch/uvm_port_base__Tz208", "if", "566,591");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18733]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18734]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 540, 17, "", "v_line/uvm_port_base__Tz208", "block", "540-544,552");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18735]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 5, "", "v_branch/uvm_port_base__Tz208", "if", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18736]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18737]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 5, "", "v_branch/uvm_port_base__Tz208", "if", "614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18738]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18739]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 5, "", "v_branch/uvm_port_base__Tz208", "if", "616-617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18740]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18741]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz208", "((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18742]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz208", "((level > max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18743]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz208", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18744]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz208", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18745]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz208", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18746]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz208", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18747]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_line/uvm_port_base__Tz208", "block", "622-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18748]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_branch/uvm_port_base__Tz208", "if", "622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18749]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 31, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18750]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 5, "", "v_branch/uvm_port_base__Tz208", "if", "621-622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18751]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18752]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 7, "", "v_branch/uvm_port_base__Tz208", "if", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18753]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 8, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18754]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 7, "", "v_branch/uvm_port_base__Tz208", "if", "637-638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18755]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 8, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18756]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 5, "", "v_branch/uvm_port_base__Tz208", "if", "633,639");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18757]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18758]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 607, 17, "", "v_line/uvm_port_base__Tz208", "block", "607-611,619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18759]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_line/uvm_port_base__Tz208", "block", "652-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18760]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_branch/uvm_port_base__Tz208", "if", "652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18761]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 29, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18762]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 649, 17, "", "v_line/uvm_port_base__Tz208", "block", "649-652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18763]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_line/uvm_port_base__Tz208", "block", "666-668");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18764]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_branch/uvm_port_base__Tz208", "if", "666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18765]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 29, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18766]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 663, 17, "", "v_line/uvm_port_base__Tz208", "block", "663-666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18767]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 5, "", "v_branch/uvm_port_base__Tz208", "if", "689-690");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18768]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18769]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 5, "", "v_branch/uvm_port_base__Tz208", "if", "697-698");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18770]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18771]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 10, "", "v_branch/uvm_port_base__Tz208", "if", "732-740");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18772]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 11, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18773]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718, 10, "", "v_line/uvm_port_base__Tz208", "elsif", "718-726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18774]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705, 5, "", "v_line/uvm_port_base__Tz208", "elsif", "705-712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18775]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 676, 23, "", "v_line/uvm_port_base__Tz208", "block", "676-682,692-694,700-701,743");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18776]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 7, "", "v_branch/uvm_port_base__Tz208", "if", "757-758");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18777]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 8, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18778]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755, 5, "", "v_line/uvm_port_base__Tz208", "block", "755-756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18779]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 751, 23, "", "v_line/uvm_port_base__Tz208", "block", "751-753,755");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18780]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 5, "", "v_branch/uvm_port_base__Tz208", "if", "777-778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18781]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18782]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_line/uvm_port_base__Tz208", "block", "784-788");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18783]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_branch/uvm_port_base__Tz208", "if", "784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18784]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 31, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18785]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 5, "", "v_branch/uvm_port_base__Tz208", "if", "780-781");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18786]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 6, "", "v_branch/uvm_port_base__Tz208", "else", "783-784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18787]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 5, "", "v_branch/uvm_port_base__Tz208", "if", "794-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18788]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18789]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 5, "", "v_branch/uvm_port_base__Tz208", "if", "800-803");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18790]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18791]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz208", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18792]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz208", "((size() > max_size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18793]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz208", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18794]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 5, "", "v_branch/uvm_port_base__Tz208", "if", "806-807");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18795]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18796]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 776, 25, "", "v_line/uvm_port_base__Tz208", "block", "776,792");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18797]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 5, "", "v_branch/uvm_port_base__Tz208", "if", "821-824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18798]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18799]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 5, "", "v_branch/uvm_port_base__Tz208", "if", "826-829");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18800]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 6, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18801]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz208", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18802]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz208", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18803]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz208", "((index < 32'sh0)==0 && (index >= size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18804]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 7, "", "v_branch/uvm_port_base__Tz208", "if", "832-833");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18805]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 8, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18806]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_line/uvm_port_base__Tz208", "block", "831,834");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18807]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_branch/uvm_port_base__Tz208", "if", "831");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18808]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 26, "", "v_branch/uvm_port_base__Tz208", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18809]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 819, 32, "", "v_line/uvm_port_base__Tz208", "block", "819-820,831");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
