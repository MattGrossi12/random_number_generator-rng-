// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug_connected_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_connected_to__Vstatic__save = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__save = ""s;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19321]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 5, "", "v_branch/uvm_port_base__Tz297", "if", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19322]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19323]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 255, 12, "", "v_line/uvm_port_base__Tz297", "block", "255,260-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19324]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 278, 19, "", "v_line/uvm_port_base__Tz297", "block", "278-279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19325]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 288, 27, "", "v_line/uvm_port_base__Tz297", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19326]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 298, 34, "", "v_line/uvm_port_base__Tz297", "block", "298-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19327]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 313, 44, "", "v_line/uvm_port_base__Tz297", "block", "313-314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19328]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 327, 16, "", "v_line/uvm_port_base__Tz297", "case", "327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19329]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 328, 18, "", "v_line/uvm_port_base__Tz297", "case", "328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19330]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 329, 26, "", "v_line/uvm_port_base__Tz297", "case", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19331]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 325, 27, "", "v_line/uvm_port_base__Tz297", "block", "325-326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19332]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 340, 16, "", "v_line/uvm_port_base__Tz297", "block", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19333]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 351, 16, "", "v_line/uvm_port_base__Tz297", "block", "351-352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19334]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 363, 16, "", "v_line/uvm_port_base__Tz297", "block", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19335]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 371, 16, "", "v_line/uvm_port_base__Tz297", "block", "371-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19336]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 378, 16, "", "v_line/uvm_port_base__Tz297", "block", "378-379");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19337]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 388, 16, "", "v_line/uvm_port_base__Tz297", "block", "388-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19338]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 400, 16, "", "v_line/uvm_port_base__Tz297", "block", "400-401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19339]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 5, "", "v_branch/uvm_port_base__Tz297", "if", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19340]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19341]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 405, 17, "", "v_line/uvm_port_base__Tz297", "block", "405-406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19342]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 411, 16, "", "v_line/uvm_port_base__Tz297", "block", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19343]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 424, 17, "", "v_line/uvm_port_base__Tz297", "block", "424-425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19344]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 5, "", "v_branch/uvm_port_base__Tz297", "if", "475-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19345]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19346]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 5, "", "v_branch/uvm_port_base__Tz297", "if", "483-486");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19347]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19348]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 5, "", "v_branch/uvm_port_base__Tz297", "if", "489-492");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19349]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19350]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 5, "", "v_branch/uvm_port_base__Tz297", "if", "495-501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19351]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19352]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 5, "", "v_branch/uvm_port_base__Tz297", "if", "505-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19353]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19354]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 5, "", "v_branch/uvm_port_base__Tz297", "if", "513-517");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19355]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19356]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 470, 25, "", "v_line/uvm_port_base__Tz297", "block", "470-474,520,522-523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19357]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 5, "", "v_branch/uvm_port_base__Tz297", "if", "546");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19358]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19359]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 5, "", "v_branch/uvm_port_base__Tz297", "if", "547");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19360]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19361]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 5, "", "v_branch/uvm_port_base__Tz297", "if", "549-550");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19362]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19363]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz297", "((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19364]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz297", "((level >= max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19365]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz297", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19366]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz297", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19367]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz297", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19368]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz297", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19369]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_line/uvm_port_base__Tz297", "block", "555-562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19370]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_branch/uvm_port_base__Tz297", "if", "555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19371]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 31, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19372]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 5, "", "v_branch/uvm_port_base__Tz297", "if", "554-555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19373]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19374]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 7, "", "v_branch/uvm_port_base__Tz297", "if", "567-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19375]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 8, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19376]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 9, "", "v_branch/uvm_port_base__Tz297", "if", "575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19377]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 10, "", "v_branch/uvm_port_base__Tz297", "else", "579-580");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19378]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_line/uvm_port_base__Tz297", "block", "584-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19379]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_branch/uvm_port_base__Tz297", "if", "584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19380]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 30, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19381]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 7, "", "v_branch/uvm_port_base__Tz297", "if", "570-574");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19382]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 8, "", "v_branch/uvm_port_base__Tz297", "else", "582-584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19383]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 5, "", "v_branch/uvm_port_base__Tz297", "if", "566,591");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19384]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19385]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 540, 17, "", "v_line/uvm_port_base__Tz297", "block", "540-544,552");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19386]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 5, "", "v_branch/uvm_port_base__Tz297", "if", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19387]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19388]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 5, "", "v_branch/uvm_port_base__Tz297", "if", "614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19389]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19390]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 5, "", "v_branch/uvm_port_base__Tz297", "if", "616-617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19391]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19392]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz297", "((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19393]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz297", "((level > max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19394]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz297", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19395]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz297", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19396]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz297", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19397]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz297", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19398]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_line/uvm_port_base__Tz297", "block", "622-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19399]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_branch/uvm_port_base__Tz297", "if", "622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19400]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 31, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19401]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 5, "", "v_branch/uvm_port_base__Tz297", "if", "621-622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19402]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19403]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 7, "", "v_branch/uvm_port_base__Tz297", "if", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19404]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 8, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19405]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 7, "", "v_branch/uvm_port_base__Tz297", "if", "637-638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19406]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 8, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19407]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 5, "", "v_branch/uvm_port_base__Tz297", "if", "633,639");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19408]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19409]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 607, 17, "", "v_line/uvm_port_base__Tz297", "block", "607-611,619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19410]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_line/uvm_port_base__Tz297", "block", "652-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19411]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_branch/uvm_port_base__Tz297", "if", "652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19412]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 29, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19413]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 649, 17, "", "v_line/uvm_port_base__Tz297", "block", "649-652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19414]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_line/uvm_port_base__Tz297", "block", "666-668");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19415]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_branch/uvm_port_base__Tz297", "if", "666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19416]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 29, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19417]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 663, 17, "", "v_line/uvm_port_base__Tz297", "block", "663-666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19418]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 5, "", "v_branch/uvm_port_base__Tz297", "if", "689-690");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19419]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19420]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 5, "", "v_branch/uvm_port_base__Tz297", "if", "697-698");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19421]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19422]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 10, "", "v_branch/uvm_port_base__Tz297", "if", "732-740");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19423]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 11, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19424]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718, 10, "", "v_line/uvm_port_base__Tz297", "elsif", "718-726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19425]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705, 5, "", "v_line/uvm_port_base__Tz297", "elsif", "705-712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19426]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 676, 23, "", "v_line/uvm_port_base__Tz297", "block", "676-682,692-694,700-701,743");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19427]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 7, "", "v_branch/uvm_port_base__Tz297", "if", "757-758");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19428]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 8, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19429]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755, 5, "", "v_line/uvm_port_base__Tz297", "block", "755-756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19430]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 751, 23, "", "v_line/uvm_port_base__Tz297", "block", "751-753,755");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19431]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 5, "", "v_branch/uvm_port_base__Tz297", "if", "777-778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19432]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19433]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_line/uvm_port_base__Tz297", "block", "784-788");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19434]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_branch/uvm_port_base__Tz297", "if", "784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19435]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 31, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19436]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 5, "", "v_branch/uvm_port_base__Tz297", "if", "780-781");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19437]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 6, "", "v_branch/uvm_port_base__Tz297", "else", "783-784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19438]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 5, "", "v_branch/uvm_port_base__Tz297", "if", "794-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19439]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19440]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 5, "", "v_branch/uvm_port_base__Tz297", "if", "800-803");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19441]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19442]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz297", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19443]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz297", "((size() > max_size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19444]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz297", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19445]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 5, "", "v_branch/uvm_port_base__Tz297", "if", "806-807");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19446]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19447]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 776, 25, "", "v_line/uvm_port_base__Tz297", "block", "776,792");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19448]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 5, "", "v_branch/uvm_port_base__Tz297", "if", "821-824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19449]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19450]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 5, "", "v_branch/uvm_port_base__Tz297", "if", "826-829");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19451]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 6, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19452]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz297", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19453]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz297", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19454]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz297", "((index < 32'sh0)==0 && (index >= size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19455]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 7, "", "v_branch/uvm_port_base__Tz297", "if", "832-833");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19456]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 8, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19457]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_line/uvm_port_base__Tz297", "block", "831,834");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19458]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_branch/uvm_port_base__Tz297", "if", "831");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19459]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 26, "", "v_branch/uvm_port_base__Tz297", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19460]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 819, 32, "", "v_line/uvm_port_base__Tz297", "block", "819-820,831");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
