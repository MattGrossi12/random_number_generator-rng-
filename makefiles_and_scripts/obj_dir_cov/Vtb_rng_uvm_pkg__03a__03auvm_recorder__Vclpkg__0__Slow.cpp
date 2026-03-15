// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_ids_by_recorder.atDefault() = 0;
    vlSelf->__PVT__m_id = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10808]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 49, 28, "", "v_line/uvm_recorder", "block", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10809]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 49, 40, "", "v_line/uvm_recorder", "block", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10810]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 49, 29, "", "v_line/uvm_recorder", "block", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10811]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 49, 30, "", "v_line/uvm_recorder", "block", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10812]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 85, 34, "", "v_line/uvm_recorder", "block", "85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10813]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 121, 20, "", "v_line/uvm_recorder", "block", "121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10814]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 133, 38, "", "v_line/uvm_recorder", "block", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10815]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 136, 25, "", "v_line/uvm_recorder", "block", "136-137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10816]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 141, 46, "", "v_line/uvm_recorder", "block", "141-142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10817]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 146, 25, "", "v_line/uvm_recorder", "block", "146-149,213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10818]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 163, 12, "", "v_line/uvm_recorder", "block", "163-166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10819]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 178, 6, "", "v_branch/uvm_recorder", "if", "178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10820]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 178, 7, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10821]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 175, 10, "", "v_branch/uvm_recorder", "if", "175,178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10822]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 175, 11, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10823]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 174, 7, "", "v_branch/uvm_recorder", "if", "174,179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10824]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 174, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10825]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 173, 27, "", "v_line/uvm_recorder", "block", "173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10826]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 198, 7, "", "v_branch/uvm_recorder", "if", "198-199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10827]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 198, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10828]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 201, 7, "", "v_branch/uvm_recorder", "if", "201-202");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10829]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 201, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10830]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 201, 11, "", "v_expr/uvm_recorder", "(is_open()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10831]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 201, 11, "", "v_expr/uvm_recorder", "(is_open()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10832]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 197, 18, "", "v_line/uvm_recorder", "block", "197,204,206-208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10833]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 219, 7, "", "v_branch/uvm_recorder", "if", "219-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10834]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 219, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10835]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 219, 22, "", "v_expr/uvm_recorder", "(is_open()==0 && is_closed()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10836]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 219, 22, "", "v_expr/uvm_recorder", "(is_closed()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10837]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 219, 22, "", "v_expr/uvm_recorder", "(is_open()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10838]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 222, 7, "", "v_branch/uvm_recorder", "if", "222-223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10839]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 222, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10840]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 232, 7, "", "v_branch/uvm_recorder", "if", "232-233");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10841]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 232, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10842]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 235, 7, "", "v_branch/uvm_recorder", "if", "235-236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10843]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 235, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10844]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 238, 7, "", "v_branch/uvm_recorder", "if", "238-239");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10845]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 238, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10846]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 242, 7, "", "v_branch/uvm_recorder", "if", "242-243");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10847]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 242, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10848]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 213, 18, "", "v_line/uvm_recorder", "block", "213-215,217,226,229,231,234,237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10849]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 248, 17, "", "v_line/uvm_recorder", "block", "248-249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10850]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 254, 18, "", "v_line/uvm_recorder", "block", "254-255");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10851]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 260, 17, "", "v_line/uvm_recorder", "block", "260-261");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10852]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 266, 18, "", "v_line/uvm_recorder", "block", "266-267");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10853]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 287, 6, "", "v_branch/uvm_recorder", "if", "287");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10854]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 287, 7, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10855]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 284, 6, "", "v_branch/uvm_recorder", "if", "284,287-288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10856]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 284, 7, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10857]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 294, 6, "", "v_branch/uvm_recorder", "if", "294");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10858]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 294, 7, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10859]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 291, 6, "", "v_branch/uvm_recorder", "if", "291,294-295");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10860]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 291, 7, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10861]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 282, 17, "", "v_line/uvm_recorder", "block", "282-283,298-300,302");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10862]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 322, 7, "", "v_branch/uvm_recorder", "if", "322-323");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10863]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 322, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10864]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 325, 7, "", "v_branch/uvm_recorder", "if", "325-327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10865]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 325, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10866]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 320, 25, "", "v_line/uvm_recorder", "block", "320-321");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10867]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 341, 10, "", "v_branch/uvm_recorder", "if", "341-342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10868]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 341, 11, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10869]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 7, "", "v_branch/uvm_recorder", "if", "334-335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10870]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 8, "", "v_branch/uvm_recorder", "else", "337-338,344-345,347");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10871]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 22, "", "v_expr/uvm_recorder", "(is_open()==0 && is_closed()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10872]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 22, "", "v_expr/uvm_recorder", "(is_closed()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10873]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 22, "", "v_expr/uvm_recorder", "(is_open()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10874]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 341, 10, "", "v_branch/uvm_recorder", "if", "341-342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10875]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 341, 11, "", "v_branch/uvm_recorder", "else", "341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10876]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 7, "", "v_branch/uvm_recorder", "if", "334-335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10877]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 8, "", "v_branch/uvm_recorder", "else", "334,337-338,344-345,347");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10878]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 22, "", "v_expr/uvm_recorder", "($_EXPRSTMT(\n__VExpr_h649c3bc7__0 = is_open();\n, __VExpr_h649c3bc7__0);\n==0 && $_EXPRSTMT(\n__VExpr_h12ae18f3__0 = is_closed();\n, __VExpr_h12ae18f3__0);\n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10879]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 22, "", "v_expr/uvm_recorder", "($_EXPRSTMT(\n__VExpr_h12ae18f3__0 = is_closed();\n, __VExpr_h12ae18f3__0);\n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10880]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 334, 22, "", "v_expr/uvm_recorder", "($_EXPRSTMT(\n__VExpr_h649c3bc7__0 = is_open();\n, __VExpr_h649c3bc7__0);\n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10881]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 333, 17, "", "v_line/uvm_recorder", "block", "333");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10882]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 354, 7, "", "v_branch/uvm_recorder", "if", "354-355");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10883]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 354, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10884]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 357, 7, "", "v_branch/uvm_recorder", "if", "357-358");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10885]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 357, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10886]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 353, 33, "", "v_line/uvm_recorder", "block", "353,360");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10887]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 371, 7, "", "v_branch/uvm_recorder", "if", "371-372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10888]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 371, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10889]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 367, 18, "", "v_line/uvm_recorder", "block", "367,374");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10890]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 383, 9, "", "v_branch/uvm_recorder", "if", "383-384");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10891]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 383, 10, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10892]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 379, 18, "", "v_line/uvm_recorder", "block", "379,386");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10893]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 393, 7, "", "v_branch/uvm_recorder", "if", "393-394");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10894]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 393, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10895]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 391, 18, "", "v_line/uvm_recorder", "block", "391,396");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10896]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 402, 7, "", "v_branch/uvm_recorder", "if", "402-403");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10897]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 402, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10898]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 406, 7, "", "v_branch/uvm_recorder", "if", "406-407");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10899]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 406, 8, "", "v_branch/uvm_recorder", "else", "408-411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10900]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 400, 18, "", "v_line/uvm_recorder", "block", "400");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10901]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 419, 7, "", "v_branch/uvm_recorder", "if", "419-420");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10902]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 419, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10903]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 417, 18, "", "v_line/uvm_recorder", "block", "417,423");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10904]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 430, 7, "", "v_branch/uvm_recorder", "if", "430-431");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10905]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 430, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10906]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 428, 18, "", "v_line/uvm_recorder", "block", "428,434");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10907]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 442, 7, "", "v_branch/uvm_recorder", "if", "442-443");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10908]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 442, 8, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10909]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 439, 18, "", "v_line/uvm_recorder", "block", "439,446");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10910]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 451, 24, "", "v_line/uvm_recorder", "block", "451-452");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10911]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 457, 25, "", "v_line/uvm_recorder", "block", "457-458");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10912]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 465, 36, "", "v_line/uvm_recorder", "block", "465");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10913]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 472, 36, "", "v_line/uvm_recorder", "block", "472");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10914]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 477, 36, "", "v_line/uvm_recorder", "block", "477");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10915]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 482, 41, "", "v_line/uvm_recorder", "block", "482");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10916]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 489, 41, "", "v_line/uvm_recorder", "block", "489");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10917]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 496, 41, "", "v_line/uvm_recorder", "block", "496");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10918]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 514, 8, "", "v_branch/uvm_recorder", "if", "514-515");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10919]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 514, 9, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10920]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 509, 6, "", "v_branch/uvm_recorder", "if", "509-513,516");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10921]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 509, 7, "", "v_branch/uvm_recorder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10922]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 507, 36, "", "v_line/uvm_recorder", "block", "507");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10923]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 522, 41, "", "v_line/uvm_recorder", "block", "522");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10924]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 527, 41, "", "v_line/uvm_recorder", "block", "527");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10925]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 532, 41, "", "v_line/uvm_recorder", "block", "532");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10926]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 557, 24, "", "v_line/uvm_recorder", "block", "557-558");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10927]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 564, 24, "", "v_line/uvm_recorder", "block", "564,567");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10928]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 574, 25, "", "v_line/uvm_recorder", "block", "574");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10929]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 582, 25, "", "v_line/uvm_recorder", "block", "582");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10930]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 593, 24, "", "v_line/uvm_recorder", "block", "593-594");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10931]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 601, 24, "", "v_line/uvm_recorder", "block", "601,607");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10932]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 614, 25, "", "v_line/uvm_recorder", "block", "614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10933]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 621, 25, "", "v_line/uvm_recorder", "block", "621");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10934]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 631, 25, "", "v_line/uvm_recorder", "block", "631");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_recorder___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_recorder* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
