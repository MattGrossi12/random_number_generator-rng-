// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tr_database__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_tr_database__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tr_database__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tr_database__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_tr_database__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tr_database__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10555]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 65, 13, "", "v_line/uvm_tr_database", "block", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10556]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 74, 7, "", "v_branch/uvm_tr_database", "if", "74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10557]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 74, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10558]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 74, 11, "", "v_expr/uvm_tr_database", "(m_is_opened==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10559]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 74, 11, "", "v_expr/uvm_tr_database", "(m_is_opened==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10560]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 73, 17, "", "v_line/uvm_tr_database", "block", "73,76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10561]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 83, 10, "", "v_branch/uvm_tr_database", "if", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10562]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 83, 11, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10563]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 82, 7, "", "v_branch/uvm_tr_database", "if", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10564]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 82, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10565]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 81, 17, "", "v_line/uvm_tr_database", "block", "81,86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10566]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 91, 17, "", "v_line/uvm_tr_database", "block", "91-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10567]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 109, 10, "", "v_branch/uvm_tr_database", "if", "109-110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10568]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 109, 11, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10569]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 115, 10, "", "v_branch/uvm_tr_database", "if", "115-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10570]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 115, 11, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10571]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 120, 10, "", "v_branch/uvm_tr_database", "if", "120-121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10572]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 120, 11, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10573]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 102, 7, "", "v_branch/uvm_tr_database", "if", "102-103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10574]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 102, 8, "", "v_branch/uvm_tr_database", "else", "105-107,112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10575]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 102, 11, "", "v_expr/uvm_tr_database", "(open_db()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10576]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 102, 11, "", "v_expr/uvm_tr_database", "(open_db()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10577]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 99, 27, "", "v_line/uvm_tr_database", "block", "99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10578]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 129, 7, "", "v_branch/uvm_tr_database", "if", "129-130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10579]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 129, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10580]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 128, 18, "", "v_line/uvm_tr_database", "block", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10581]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 139, 26, "", "v_line/uvm_tr_database", "block", "139-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10582]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 139, 26, "", "v_branch/uvm_tr_database", "if", "139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10583]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 139, 27, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10584]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 135, 22, "", "v_line/uvm_tr_database", "block", "135,137,139,142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10585]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 158, 6, "", "v_branch/uvm_tr_database", "if", "158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10586]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 158, 7, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10587]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 156, 7, "", "v_branch/uvm_tr_database", "if", "156,158-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10588]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 156, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10589]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 163, 6, "", "v_branch/uvm_tr_database", "if", "163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10590]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 163, 7, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10591]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 161, 7, "", "v_branch/uvm_tr_database", "if", "161,163-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10592]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 161, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10593]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 171, 6, "", "v_branch/uvm_tr_database", "if", "171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10594]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 171, 7, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10595]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 167, 7, "", "v_branch/uvm_tr_database", "if", "167-168,171-172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10596]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 167, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10597]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 178, 6, "", "v_branch/uvm_tr_database", "if", "178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10598]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 178, 7, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10599]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 174, 7, "", "v_branch/uvm_tr_database", "if", "174-175,178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10600]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 174, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10601]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 182, 7, "", "v_branch/uvm_tr_database", "if", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10602]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 182, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10603]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 185, 7, "", "v_branch/uvm_tr_database", "if", "185-186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10604]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 185, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10605]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 193, 6, "", "v_branch/uvm_tr_database", "if", "193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10606]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 193, 7, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10607]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 189, 7, "", "v_branch/uvm_tr_database", "if", "189-190,193-194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10608]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 189, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10609]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 200, 6, "", "v_branch/uvm_tr_database", "if", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10610]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 200, 7, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10611]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 196, 7, "", "v_branch/uvm_tr_database", "if", "196-197,200-201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10612]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 196, 8, "", "v_branch/uvm_tr_database", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10613]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 149, 18, "", "v_line/uvm_tr_database", "block", "149-154,204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10614]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 212, 40, "", "v_line/uvm_tr_database", "block", "212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10615]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 216, 40, "", "v_line/uvm_tr_database", "block", "216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10616]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 220, 50, "", "v_line/uvm_tr_database", "block", "220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10617]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 226, 41, "", "v_line/uvm_tr_database", "block", "226");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tr_database___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_tr_database* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
