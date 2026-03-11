// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_ids_by_stream.atDefault() = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10656]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 69, 13, "", "v_line/uvm_tr_stream", "block", "69-71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10657]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 94, 6, "", "v_branch/uvm_tr_stream", "if", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10658]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 94, 7, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10659]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 91, 10, "", "v_branch/uvm_tr_stream", "if", "91,94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10660]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 91, 11, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10661]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 90, 7, "", "v_branch/uvm_tr_stream", "if", "90,95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10662]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 90, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10663]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 88, 29, "", "v_line/uvm_tr_stream", "block", "88-89,98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10664]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 109, 6, "", "v_branch/uvm_tr_stream", "if", "109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10665]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 109, 7, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10666]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 106, 10, "", "v_branch/uvm_tr_stream", "if", "106,109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10667]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 106, 11, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10668]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 105, 7, "", "v_branch/uvm_tr_stream", "if", "105,110-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10669]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 105, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10670]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 103, 20, "", "v_line/uvm_tr_stream", "block", "103-104,113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10671]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 124, 6, "", "v_branch/uvm_tr_stream", "if", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10672]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 124, 7, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10673]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 121, 10, "", "v_branch/uvm_tr_stream", "if", "121,124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10674]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 121, 11, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10675]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 120, 7, "", "v_branch/uvm_tr_stream", "if", "120,125-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10676]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 120, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10677]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 118, 20, "", "v_line/uvm_tr_stream", "block", "118-119,128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10678]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 146, 7, "", "v_branch/uvm_tr_stream", "if", "146-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10679]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 146, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10680]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 146, 11, "", "v_expr/uvm_tr_stream", "(is_open()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10681]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 146, 11, "", "v_expr/uvm_tr_stream", "(is_open()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10682]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 152, 9, "", "v_branch/uvm_tr_stream", "if", "152-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10683]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 152, 10, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10684]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 151, 26, "", "v_line/uvm_tr_stream", "block", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10685]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 151, 26, "", "v_branch/uvm_tr_stream", "if", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10686]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 151, 27, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10687]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 146, 7, "", "v_branch/uvm_tr_stream", "if", "146-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10688]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 146, 8, "", "v_branch/uvm_tr_stream", "else", "146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10689]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 146, 11, "", "v_expr/uvm_tr_stream", "($_EXPRSTMT(\n__VExpr_h575c2eaa__0 = is_open();\n, __VExpr_h575c2eaa__0);\n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10690]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 146, 11, "", "v_expr/uvm_tr_stream", "($_EXPRSTMT(\n__VExpr_h575c2eaa__0 = is_open();\n, __VExpr_h575c2eaa__0);\n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10691]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 152, 9, "", "v_branch/uvm_tr_stream", "if", "152-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10692]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 152, 10, "", "v_branch/uvm_tr_stream", "else", "152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10693]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 151, 26, "", "v_line/uvm_tr_stream", "block", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10694]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 151, 26, "", "v_branch/uvm_tr_stream", "if", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10695]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 151, 27, "", "v_branch/uvm_tr_stream", "else", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 145, 18, "", "v_line/uvm_tr_stream", "block", "145,149,151,155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 165, 7, "", "v_branch/uvm_tr_stream", "if", "165-166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10698]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 165, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10699]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 165, 22, "", "v_expr/uvm_tr_stream", "(is_open()==0 && is_closed()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 165, 22, "", "v_expr/uvm_tr_stream", "(is_closed()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10701]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 165, 22, "", "v_expr/uvm_tr_stream", "(is_open()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10702]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 168, 7, "", "v_branch/uvm_tr_stream", "if", "168-169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10703]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 168, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10704]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 173, 26, "", "v_line/uvm_tr_stream", "block", "173-174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10705]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 173, 26, "", "v_branch/uvm_tr_stream", "if", "173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10706]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 173, 27, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10707]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 180, 7, "", "v_branch/uvm_tr_stream", "if", "180-181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10708]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 180, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10709]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 183, 7, "", "v_branch/uvm_tr_stream", "if", "183-184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10710]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 183, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10711]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 186, 7, "", "v_branch/uvm_tr_stream", "if", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10712]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 186, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10713]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 190, 7, "", "v_branch/uvm_tr_stream", "if", "190-191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10714]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 190, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10715]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 161, 18, "", "v_line/uvm_tr_stream", "block", "161-164,171,173,177-179,182,185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10716]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 217, 6, "", "v_branch/uvm_tr_stream", "if", "217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10717]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 217, 7, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10718]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 214, 7, "", "v_branch/uvm_tr_stream", "if", "214,217-218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10719]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 214, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10720]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 224, 6, "", "v_branch/uvm_tr_stream", "if", "224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10721]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 224, 7, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10722]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 221, 7, "", "v_branch/uvm_tr_stream", "if", "221,224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10723]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 221, 8, "", "v_branch/uvm_tr_stream", "else", "226,228-233,235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10724]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 208, 18, "", "v_line/uvm_tr_stream", "block", "208,212-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10725]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 242, 17, "", "v_line/uvm_tr_stream", "block", "242-243");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10726]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 248, 17, "", "v_line/uvm_tr_stream", "block", "248-249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10727]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 265, 32, "", "v_expr/uvm_tr_stream", "((open_time == 64'h0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10728]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 265, 32, "", "v_expr/uvm_tr_stream", "((open_time == 64'h0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10729]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 274, 10, "", "v_branch/uvm_tr_stream", "if", "274-275");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10730]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 274, 11, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10731]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 283, 10, "", "v_branch/uvm_tr_stream", "if", "283-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10732]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 283, 11, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10733]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 287, 10, "", "v_branch/uvm_tr_stream", "if", "287-288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10734]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 287, 11, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10735]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 268, 7, "", "v_branch/uvm_tr_stream", "if", "268-269");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10736]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 268, 8, "", "v_branch/uvm_tr_stream", "else", "270-272,277-279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10737]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 268, 11, "", "v_expr/uvm_tr_stream", "(is_open()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10738]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 268, 11, "", "v_expr/uvm_tr_stream", "(is_open()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10739]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 262, 26, "", "v_line/uvm_tr_stream", "block", "262,265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10740]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 295, 7, "", "v_branch/uvm_tr_stream", "if", "295-296");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10741]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 295, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10742]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 294, 18, "", "v_line/uvm_tr_stream", "block", "294");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10743]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 305, 26, "", "v_line/uvm_tr_stream", "block", "305-306");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10744]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 305, 26, "", "v_branch/uvm_tr_stream", "if", "305");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10745]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 305, 27, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10746]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 301, 22, "", "v_line/uvm_tr_stream", "block", "301,303,305,308");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10747]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 328, 10, "", "v_branch/uvm_tr_stream", "if", "328-329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10748]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 328, 11, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10749]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 7, "", "v_branch/uvm_tr_stream", "if", "321-322");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10750]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 8, "", "v_branch/uvm_tr_stream", "else", "324-325,331-332,334");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10751]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 22, "", "v_expr/uvm_tr_stream", "(is_open()==0 && is_closed()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10752]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 22, "", "v_expr/uvm_tr_stream", "(is_closed()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10753]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 22, "", "v_expr/uvm_tr_stream", "(is_open()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10754]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 328, 10, "", "v_branch/uvm_tr_stream", "if", "328-329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10755]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 328, 11, "", "v_branch/uvm_tr_stream", "else", "328");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10756]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 7, "", "v_branch/uvm_tr_stream", "if", "321-322");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10757]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 8, "", "v_branch/uvm_tr_stream", "else", "321,324-325,331-332,334");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10758]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 22, "", "v_expr/uvm_tr_stream", "($_EXPRSTMT(\n__VExpr_hc09ab773__0 = is_open();\n, __VExpr_hc09ab773__0);\n==0 && $_EXPRSTMT(\n__VExpr_hf6c4a327__0 = is_closed();\n, __VExpr_hf6c4a327__0);\n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10759]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 22, "", "v_expr/uvm_tr_stream", "($_EXPRSTMT(\n__VExpr_hf6c4a327__0 = is_closed();\n, __VExpr_hf6c4a327__0);\n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10760]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 321, 22, "", "v_expr/uvm_tr_stream", "($_EXPRSTMT(\n__VExpr_hc09ab773__0 = is_open();\n, __VExpr_hc09ab773__0);\n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10761]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 320, 17, "", "v_line/uvm_tr_stream", "block", "320");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10762]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 340, 7, "", "v_branch/uvm_tr_stream", "if", "340-341");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10763]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 340, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10764]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 343, 7, "", "v_branch/uvm_tr_stream", "if", "343-344");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10765]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 343, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10766]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 339, 34, "", "v_line/uvm_tr_stream", "block", "339,346");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10767]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 354, 7, "", "v_branch/uvm_tr_stream", "if", "354-355");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10768]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 354, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10769]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 357, 7, "", "v_branch/uvm_tr_stream", "if", "357-359");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10770]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 357, 8, "", "v_branch/uvm_tr_stream", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10771]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 352, 25, "", "v_line/uvm_tr_stream", "block", "352-353");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10772]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 368, 36, "", "v_line/uvm_tr_stream", "block", "368");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10773]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 375, 36, "", "v_line/uvm_tr_stream", "block", "375");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10774]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 380, 36, "", "v_line/uvm_tr_stream", "block", "380");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10775]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 385, 44, "", "v_line/uvm_tr_stream", "block", "385,388");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_tr_stream* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
