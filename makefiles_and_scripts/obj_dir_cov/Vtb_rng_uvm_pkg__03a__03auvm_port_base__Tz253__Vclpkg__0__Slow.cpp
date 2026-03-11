// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__debug_connected_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_connected_to__Vstatic__save = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__indent = ""s;
    vlSelfRef.__PVT__debug_provided_to__Vstatic__save = ""s;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19082]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 5, "", "v_branch/uvm_port_base__Tz253", "if", "267-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19083]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 267, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19084]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 255, 12, "", "v_line/uvm_port_base__Tz253", "block", "255,260-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19085]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 278, 19, "", "v_line/uvm_port_base__Tz253", "block", "278-279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19086]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 288, 27, "", "v_line/uvm_port_base__Tz253", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19087]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 298, 34, "", "v_line/uvm_port_base__Tz253", "block", "298-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19088]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 313, 44, "", "v_line/uvm_port_base__Tz253", "block", "313-314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19089]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 327, 16, "", "v_line/uvm_port_base__Tz253", "case", "327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19090]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 328, 18, "", "v_line/uvm_port_base__Tz253", "case", "328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19091]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 329, 26, "", "v_line/uvm_port_base__Tz253", "case", "329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19092]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 325, 27, "", "v_line/uvm_port_base__Tz253", "block", "325-326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19093]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 340, 16, "", "v_line/uvm_port_base__Tz253", "block", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19094]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 351, 16, "", "v_line/uvm_port_base__Tz253", "block", "351-352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19095]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 363, 16, "", "v_line/uvm_port_base__Tz253", "block", "363-364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19096]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 371, 16, "", "v_line/uvm_port_base__Tz253", "block", "371-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19097]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 378, 16, "", "v_line/uvm_port_base__Tz253", "block", "378-379");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19098]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 388, 16, "", "v_line/uvm_port_base__Tz253", "block", "388-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19099]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 400, 16, "", "v_line/uvm_port_base__Tz253", "block", "400-401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19100]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 5, "", "v_branch/uvm_port_base__Tz253", "if", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19101]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 407, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19102]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 405, 17, "", "v_line/uvm_port_base__Tz253", "block", "405-406");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19103]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 411, 16, "", "v_line/uvm_port_base__Tz253", "block", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19104]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 424, 17, "", "v_line/uvm_port_base__Tz253", "block", "424-425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19105]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 5, "", "v_branch/uvm_port_base__Tz253", "if", "475-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19106]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19107]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 5, "", "v_branch/uvm_port_base__Tz253", "if", "483-486");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19108]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 483, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19109]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 5, "", "v_branch/uvm_port_base__Tz253", "if", "489-492");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19110]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 489, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19111]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 5, "", "v_branch/uvm_port_base__Tz253", "if", "495-501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19112]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19113]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 5, "", "v_branch/uvm_port_base__Tz253", "if", "505-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19114]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 505, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19115]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 5, "", "v_branch/uvm_port_base__Tz253", "if", "513-517");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19116]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19117]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 470, 25, "", "v_line/uvm_port_base__Tz253", "block", "470-474,520,522-523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19118]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 5, "", "v_branch/uvm_port_base__Tz253", "if", "546");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19119]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 546, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19120]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 5, "", "v_branch/uvm_port_base__Tz253", "if", "547");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19121]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 547, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19122]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 5, "", "v_branch/uvm_port_base__Tz253", "if", "549-550");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19123]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19124]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz253", "((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19125]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz253", "((level >= max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19126]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 549, 25, "", "v_expr/uvm_port_base__Tz253", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19127]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz253", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19128]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz253", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19129]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 560, 27, "", "v_expr/uvm_port_base__Tz253", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19130]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_line/uvm_port_base__Tz253", "block", "555-562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19131]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 30, "", "v_branch/uvm_port_base__Tz253", "if", "555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19132]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 555, 31, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19133]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 5, "", "v_branch/uvm_port_base__Tz253", "if", "554-555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19134]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 554, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19135]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 7, "", "v_branch/uvm_port_base__Tz253", "if", "567-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19136]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 567, 8, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19137]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 9, "", "v_branch/uvm_port_base__Tz253", "if", "575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19138]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575, 10, "", "v_branch/uvm_port_base__Tz253", "else", "579-580");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19139]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_line/uvm_port_base__Tz253", "block", "584-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19140]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 29, "", "v_branch/uvm_port_base__Tz253", "if", "584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19141]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 584, 30, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19142]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 7, "", "v_branch/uvm_port_base__Tz253", "if", "570-574");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19143]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 570, 8, "", "v_branch/uvm_port_base__Tz253", "else", "582-584");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19144]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 5, "", "v_branch/uvm_port_base__Tz253", "if", "566,591");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19145]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 566, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19146]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 540, 17, "", "v_line/uvm_port_base__Tz253", "block", "540-544,552");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19147]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 5, "", "v_branch/uvm_port_base__Tz253", "if", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19148]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 613, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19149]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 5, "", "v_branch/uvm_port_base__Tz253", "if", "614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19150]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 614, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19151]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 5, "", "v_branch/uvm_port_base__Tz253", "if", "616-617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19152]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19153]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz253", "((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19154]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz253", "((level > max_level)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19155]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 616, 25, "", "v_expr/uvm_port_base__Tz253", "((max_level != (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19156]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz253", "((num > 32'sh1)==1 && (curr_num != num)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19157]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz253", "((curr_num != num)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19158]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 627, 27, "", "v_expr/uvm_port_base__Tz253", "((num > 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19159]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_line/uvm_port_base__Tz253", "block", "622-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19160]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 30, "", "v_branch/uvm_port_base__Tz253", "if", "622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19161]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 622, 31, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19162]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 5, "", "v_branch/uvm_port_base__Tz253", "if", "621-622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19163]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 621, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19164]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 7, "", "v_branch/uvm_port_base__Tz253", "if", "634-636");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19165]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 634, 8, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19166]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 7, "", "v_branch/uvm_port_base__Tz253", "if", "637-638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19167]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 637, 8, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19168]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 5, "", "v_branch/uvm_port_base__Tz253", "if", "633,639");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19169]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 633, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19170]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 607, 17, "", "v_line/uvm_port_base__Tz253", "block", "607-611,619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19171]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_line/uvm_port_base__Tz253", "block", "652-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19172]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 28, "", "v_branch/uvm_port_base__Tz253", "if", "652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19173]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 652, 29, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19174]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 649, 17, "", "v_line/uvm_port_base__Tz253", "block", "649-652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19175]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_line/uvm_port_base__Tz253", "block", "666-668");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19176]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 28, "", "v_branch/uvm_port_base__Tz253", "if", "666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19177]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 666, 29, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19178]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 663, 17, "", "v_line/uvm_port_base__Tz253", "block", "663-666");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19179]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 5, "", "v_branch/uvm_port_base__Tz253", "if", "689-690");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19180]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 689, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19181]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 5, "", "v_branch/uvm_port_base__Tz253", "if", "697-698");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19182]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 697, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19183]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 10, "", "v_branch/uvm_port_base__Tz253", "if", "732-740");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19184]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732, 11, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19185]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718, 10, "", "v_line/uvm_port_base__Tz253", "elsif", "718-726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19186]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705, 5, "", "v_line/uvm_port_base__Tz253", "elsif", "705-712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19187]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 676, 23, "", "v_line/uvm_port_base__Tz253", "block", "676-682,692-694,700-701,743");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19188]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 7, "", "v_branch/uvm_port_base__Tz253", "if", "757-758");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19189]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757, 8, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19190]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755, 5, "", "v_line/uvm_port_base__Tz253", "block", "755-756");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19191]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 751, 23, "", "v_line/uvm_port_base__Tz253", "block", "751-753,755");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19192]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 5, "", "v_branch/uvm_port_base__Tz253", "if", "777-778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19193]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 777, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19194]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_line/uvm_port_base__Tz253", "block", "784-788");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19195]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 30, "", "v_branch/uvm_port_base__Tz253", "if", "784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19196]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 784, 31, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19197]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 5, "", "v_branch/uvm_port_base__Tz253", "if", "780-781");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19198]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 780, 6, "", "v_branch/uvm_port_base__Tz253", "else", "783-784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19199]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 5, "", "v_branch/uvm_port_base__Tz253", "if", "794-797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19200]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 794, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19201]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 5, "", "v_branch/uvm_port_base__Tz253", "if", "800-803");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19202]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19203]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz253", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19204]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz253", "((size() > max_size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19205]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 800, 49, "", "v_expr/uvm_port_base__Tz253", "((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19206]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 5, "", "v_branch/uvm_port_base__Tz253", "if", "806-807");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19207]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 806, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19208]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 776, 25, "", "v_line/uvm_port_base__Tz253", "block", "776,792");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19209]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 5, "", "v_branch/uvm_port_base__Tz253", "if", "821-824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19210]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 821, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19211]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 5, "", "v_branch/uvm_port_base__Tz253", "if", "826-829");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19212]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 6, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19213]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz253", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19214]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz253", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19215]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 826, 19, "", "v_expr/uvm_port_base__Tz253", "((index < 32'sh0)==0 && (index >= size())==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19216]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 7, "", "v_branch/uvm_port_base__Tz253", "if", "832-833");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19217]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 832, 8, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19218]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_line/uvm_port_base__Tz253", "block", "831,834");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19219]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 25, "", "v_branch/uvm_port_base__Tz253", "if", "831");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19220]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 831, 26, "", "v_branch/uvm_port_base__Tz253", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19221]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 819, 32, "", "v_line/uvm_port_base__Tz253", "block", "819-820,831");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
