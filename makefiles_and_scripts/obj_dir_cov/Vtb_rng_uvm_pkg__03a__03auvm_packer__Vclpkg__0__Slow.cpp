// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__bitstream.atDefault() = 0;
    vlSelf->__PVT__fabitstream.atDefault() = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10321]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 51, 28, "", "v_line/uvm_packer", "block", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10322]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 51, 40, "", "v_line/uvm_packer", "block", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10323]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 51, 6, "", "v_branch/uvm_packer", "if", "51,1188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10324]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 51, 7, "", "v_branch/uvm_packer", "else", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10325]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 51, 24, "", "v_line/uvm_packer", "block", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10326]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 51, 29, "", "v_line/uvm_packer", "block", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10327]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 51, 30, "", "v_line/uvm_packer", "block", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10328]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 120, 24, "", "v_line/uvm_packer", "block", "120-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10329]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 127, 30, "", "v_line/uvm_packer", "block", "127-130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10330]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 411, 25, "", "v_line/uvm_packer", "block", "411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10331]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 412, 25, "", "v_line/uvm_packer", "block", "412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10332]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 455, 15, "", "v_line/uvm_packer", "block", "455-458");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10333]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 466, 3, "", "v_branch/uvm_packer", "if", "466-470");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10334]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 466, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10335]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 465, 14, "", "v_line/uvm_packer", "block", "465,472");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10336]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 479, 14, "", "v_line/uvm_packer", "block", "479-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10337]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 504, 15, "", "v_line/uvm_packer", "block", "504,509-515");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10338]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 525, 3, "", "v_line/uvm_packer", "block", "525-526");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10339]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 521, 15, "", "v_line/uvm_packer", "block", "521-525");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10340]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 568, 7, "", "v_branch/uvm_packer", "if", "568");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10341]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 568, 8, "", "v_branch/uvm_packer", "else", "568");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10342]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 568, 21, "", "v_expr/uvm_packer", "(((m_pack_iter % 32'h8) == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10343]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 568, 21, "", "v_expr/uvm_packer", "((i != (sz - 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10344]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 568, 21, "", "v_expr/uvm_packer", "((i != (sz - 32'sh1))==0 && ((m_pack_iter % 32'h8) == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10345]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 568, 20, "", "v_line/uvm_packer", "block", "568");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10346]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 568, 15, "", "v_line/uvm_packer", "block", "568");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10347]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 569, 7, "", "v_branch/uvm_packer", "if", "569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10348]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 569, 8, "", "v_branch/uvm_packer", "else", "569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10349]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 569, 21, "", "v_expr/uvm_packer", "(((m_pack_iter % 32'h20) == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10350]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 569, 21, "", "v_expr/uvm_packer", "((i != (sz - 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10351]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 569, 21, "", "v_expr/uvm_packer", "((i != (sz - 32'sh1))==0 && ((m_pack_iter % 32'h20) == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10352]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 569, 20, "", "v_line/uvm_packer", "block", "569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10353]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 569, 15, "", "v_line/uvm_packer", "block", "569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10354]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 570, 7, "", "v_branch/uvm_packer", "if", "570");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10355]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 570, 8, "", "v_branch/uvm_packer", "else", "570");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10356]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 570, 21, "", "v_expr/uvm_packer", "(((m_pack_iter % 32'h40) == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10357]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 570, 21, "", "v_expr/uvm_packer", "((i != (sz - 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10358]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 570, 21, "", "v_expr/uvm_packer", "((i != (sz - 32'sh1))==0 && ((m_pack_iter % 32'h40) == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10359]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 570, 20, "", "v_line/uvm_packer", "block", "570");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10360]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 570, 15, "", "v_line/uvm_packer", "block", "570");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10361]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 595, 5, "", "v_line/uvm_packer", "block", "595-596");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10362]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 583, 15, "", "v_line/uvm_packer", "block", "583,585,587,595,598-599");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10363]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 631, 19, "", "v_line/uvm_packer", "block", "631");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10364]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 631, 15, "", "v_line/uvm_packer", "block", "631");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10365]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 632, 19, "", "v_line/uvm_packer", "block", "632");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10366]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 632, 15, "", "v_line/uvm_packer", "block", "632");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10367]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 633, 19, "", "v_line/uvm_packer", "block", "633");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10368]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 633, 15, "", "v_line/uvm_packer", "block", "633");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10369]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 676, 3, "", "v_branch/uvm_packer", "if", "676-679");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10370]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 676, 4, "", "v_branch/uvm_packer", "else", "681-683");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10371]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 690, 3, "", "v_branch/uvm_packer", "if", "690-691");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10372]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 690, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10373]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 674, 15, "", "v_line/uvm_packer", "block", "674-675,686-689,693-694");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10374]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 718, 5, "", "v_branch/uvm_packer", "if", "718-720");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10375]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 718, 6, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10376]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 717, 31, "", "v_line/uvm_packer", "block", "717");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10377]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 717, 31, "", "v_branch/uvm_packer", "if", "717");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10378]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 717, 32, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10379]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 715, 15, "", "v_line/uvm_packer", "block", "715-717,725-728,730");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10380]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 736, 3, "", "v_branch/uvm_packer", "if", "736-737");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10381]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 736, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10382]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 734, 15, "", "v_line/uvm_packer", "block", "734-735");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10383]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 743, 15, "", "v_line/uvm_packer", "block", "743-744");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10384]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 751, 15, "", "v_line/uvm_packer", "block", "751-752");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10385]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 761, 3, "", "v_line/uvm_packer", "block", "761,767");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10386]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 760, 15, "", "v_line/uvm_packer", "block", "760-761,768");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10387]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 776, 3, "", "v_line/uvm_packer", "block", "776,782");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10388]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 775, 15, "", "v_line/uvm_packer", "block", "775-776,783");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10389]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 790, 4, "", "v_branch/uvm_packer", "if", "790-791");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10390]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 790, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10391]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 797, 6, "", "v_branch/uvm_packer", "if", "797");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10392]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 797, 7, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10393]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 793, 4, "", "v_branch/uvm_packer", "if", "793,797-798");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10394]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 793, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10395]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 801, 4, "", "v_line/uvm_packer", "block", "801,807");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10396]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 789, 15, "", "v_line/uvm_packer", "block", "789,801,808");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10397]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 817, 4, "", "v_branch/uvm_packer", "if", "817-818");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10398]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 817, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10399]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 824, 6, "", "v_branch/uvm_packer", "if", "824");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10400]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 824, 7, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10401]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 830, 7, "", "v_line/uvm_packer", "block", "830,836,838");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10402]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 820, 4, "", "v_branch/uvm_packer", "if", "820,824-825");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10403]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 820, 5, "", "v_branch/uvm_packer", "else", "827-828,830,841");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10404]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 814, 15, "", "v_line/uvm_packer", "block", "814-815");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10405]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 851, 4, "", "v_branch/uvm_packer", "if", "851-852");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10406]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 851, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10407]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 858, 6, "", "v_branch/uvm_packer", "if", "858");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10408]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 858, 7, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10409]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 864, 7, "", "v_line/uvm_packer", "block", "864,870,872");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10410]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 854, 4, "", "v_branch/uvm_packer", "if", "854,858-859");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10411]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 854, 5, "", "v_branch/uvm_packer", "else", "861-862,864,875");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10412]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 848, 15, "", "v_line/uvm_packer", "block", "848-849");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10413]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 897, 18, "", "v_line/uvm_packer", "block", "897-899");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10414]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 883, 15, "", "v_line/uvm_packer", "block", "883-884,897,902-903");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10415]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 913, 14, "", "v_line/uvm_packer", "block", "913-914");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10416]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 918, 14, "", "v_line/uvm_packer", "block", "918-919");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10417]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 929, 6, "", "v_branch/uvm_packer", "if", "929");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10418]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 929, 7, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10419]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 928, 5, "", "v_branch/uvm_packer", "if", "928-930");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10420]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 928, 6, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10421]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 937, 6, "", "v_branch/uvm_packer", "if", "937");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10422]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 937, 7, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10423]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 936, 5, "", "v_branch/uvm_packer", "if", "936-938");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10424]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 936, 6, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10425]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 945, 5, "", "v_branch/uvm_packer", "if", "945-946");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10426]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 945, 6, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10427]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 927, 3, "", "v_branch/uvm_packer", "if", "927,932-933");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10428]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 927, 4, "", "v_branch/uvm_packer", "else", "935,940-944,948-949");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10429]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 924, 15, "", "v_line/uvm_packer", "block", "924-925");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10430]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 988, 7, "", "v_branch/uvm_packer", "if", "988-989");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10431]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 988, 8, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10432]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 985, 5, "", "v_branch/uvm_packer", "if", "985-987");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10433]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 985, 6, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10434]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 979, 3, "", "v_branch/uvm_packer", "if", "979-981");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10435]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 979, 4, "", "v_branch/uvm_packer", "else", "983-984");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10436]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 976, 15, "", "v_line/uvm_packer", "block", "976-978,993-994");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10437]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1001, 3, "", "v_branch/uvm_packer", "if", "1001-1002");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10438]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1001, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10439]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1003, 3, "", "v_branch/uvm_packer", "if", "1003-1004");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10440]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1003, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10441]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 998, 29, "", "v_line/uvm_packer", "block", "998-1000,1006");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10442]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1014, 3, "", "v_branch/uvm_packer", "if", "1014-1015");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10443]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1014, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10444]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1013, 15, "", "v_line/uvm_packer", "block", "1013");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10445]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1024, 3, "", "v_branch/uvm_packer", "if", "1024-1025");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10446]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1024, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10447]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1023, 15, "", "v_line/uvm_packer", "block", "1023");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10448]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1037, 5, "", "v_line/uvm_packer", "block", "1037,1043");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10449]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1035, 3, "", "v_branch/uvm_packer", "if", "1035-1037");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10450]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1035, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10451]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1033, 26, "", "v_line/uvm_packer", "block", "1033-1034");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10452]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1055, 5, "", "v_line/uvm_packer", "block", "1055,1061");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10453]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1053, 3, "", "v_branch/uvm_packer", "if", "1053-1055");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10454]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1053, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10455]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1051, 25, "", "v_line/uvm_packer", "block", "1051-1052");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10456]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1069, 4, "", "v_branch/uvm_packer", "if", "1069-1070");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10457]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1069, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10458]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1076, 6, "", "v_branch/uvm_packer", "if", "1076");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10459]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1076, 7, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10460]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1072, 4, "", "v_branch/uvm_packer", "if", "1072,1076-1077");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10461]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1072, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10462]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1082, 7, "", "v_line/uvm_packer", "block", "1082,1088");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10463]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1080, 4, "", "v_branch/uvm_packer", "if", "1080-1082");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10464]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1080, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10465]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1068, 15, "", "v_line/uvm_packer", "block", "1068");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10466]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1097, 4, "", "v_branch/uvm_packer", "if", "1097-1098");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10467]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1097, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10468]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1104, 6, "", "v_branch/uvm_packer", "if", "1104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10469]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1104, 7, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10470]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1111, 10, "", "v_line/uvm_packer", "block", "1111,1117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10471]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1108, 7, "", "v_branch/uvm_packer", "if", "1108-1109,1111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10472]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1108, 8, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10473]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1100, 4, "", "v_branch/uvm_packer", "if", "1100,1104-1105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10474]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1100, 5, "", "v_branch/uvm_packer", "else", "1107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10475]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1095, 15, "", "v_line/uvm_packer", "block", "1095-1096");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10476]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1129, 4, "", "v_branch/uvm_packer", "if", "1129-1130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10477]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1129, 5, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10478]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1136, 6, "", "v_branch/uvm_packer", "if", "1136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10479]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1136, 7, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10480]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1143, 10, "", "v_line/uvm_packer", "block", "1143,1149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10481]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1140, 7, "", "v_branch/uvm_packer", "if", "1140-1141,1143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10482]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1140, 8, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10483]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1132, 4, "", "v_branch/uvm_packer", "if", "1132,1136-1137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10484]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1132, 5, "", "v_branch/uvm_packer", "else", "1139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10485]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1127, 15, "", "v_line/uvm_packer", "block", "1127-1128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10486]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1165, 33, "", "v_expr/uvm_packer", "(enough_bits(32'sh8\"string\")==1 && (m_bits[m_unpack_iter[14:0]+:8] != 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10487]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1165, 33, "", "v_expr/uvm_packer", "((m_bits[m_unpack_iter[14:0]+:8] != 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10488]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1165, 33, "", "v_expr/uvm_packer", "(enough_bits(32'sh8\"string\")==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10489]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1165, 3, "", "v_line/uvm_packer", "block", "1165-1167,1169,1178-1180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10490]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1182, 3, "", "v_branch/uvm_packer", "if", "1182-1183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10491]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1182, 4, "", "v_branch/uvm_packer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10492]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1161, 17, "", "v_line/uvm_packer", "block", "1161-1163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10493]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_packer.svh", 1188, 22, "", "v_line/uvm_packer", "block", "1188-1190");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_packer___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_packer* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_packer___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
