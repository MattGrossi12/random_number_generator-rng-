// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_object__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_report_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_object__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_object__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_report_object__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_object__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15679]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 93, 5, "", "v_branch/uvm_report_object", "if", "93-94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15680]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 93, 6, "", "v_branch/uvm_report_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15681]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 93, 9, "", "v_expr/uvm_report_object", "(m_rh_set==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15682]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 93, 9, "", "v_expr/uvm_report_object", "(m_rh_set==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15683]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 92, 23, "", "v_line/uvm_report_object", "block", "92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15684]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 103, 12, "", "v_line/uvm_report_object", "block", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15685]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 120, 30, "", "v_line/uvm_report_object", "block", "120-121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15686]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 135, 5, "", "v_branch/uvm_report_object", "if", "135-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15687]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 135, 6, "", "v_branch/uvm_report_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15688]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 133, 16, "", "v_line/uvm_report_object", "block", "133,137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15689]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 154, 7, "", "v_branch/uvm_report_object", "if", "154-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15690]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 154, 8, "", "v_branch/uvm_report_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15691]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 153, 5, "", "v_branch/uvm_report_object", "if", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15692]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 153, 6, "", "v_branch/uvm_report_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15693]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 153, 32, "", "v_expr/uvm_report_object", "((severity == uvm_pkg::UVM_INFO)==1 && (report_enabled_checked == 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15694]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 153, 32, "", "v_expr/uvm_report_object", "((report_enabled_checked == 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15695]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 153, 32, "", "v_expr/uvm_report_object", "((severity == uvm_pkg::UVM_INFO)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 143, 25, "", "v_line/uvm_report_object", "block", "143,152,157-160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 167, 25, "", "v_line/uvm_report_object", "block", "167,175-176");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15698]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 182, 25, "", "v_line/uvm_report_object", "block", "182,190-191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15699]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 197, 25, "", "v_line/uvm_report_object", "block", "197,205-206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 249, 25, "", "v_line/uvm_report_object", "block", "249,257-258");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15701]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 268, 25, "", "v_line/uvm_report_object", "block", "268-271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15702]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 288, 16, "", "v_line/uvm_report_object", "block", "288-290");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15703]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 301, 16, "", "v_line/uvm_report_object", "block", "301-303");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15704]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 314, 17, "", "v_line/uvm_report_object", "block", "314-316");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15705]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 321, 17, "", "v_line/uvm_report_object", "block", "321-323");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15706]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 340, 17, "", "v_line/uvm_report_object", "block", "340,342-343");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15707]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 358, 16, "", "v_line/uvm_report_object", "block", "358-360");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15708]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 366, 17, "", "v_line/uvm_report_object", "block", "366,368-369");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15709]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 374, 17, "", "v_line/uvm_report_object", "block", "374-376");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15710]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 391, 17, "", "v_line/uvm_report_object", "block", "391,393-394");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15711]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 409, 16, "", "v_line/uvm_report_object", "block", "409-411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15712]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 418, 17, "", "v_line/uvm_report_object", "block", "418-420");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15713]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 426, 17, "", "v_line/uvm_report_object", "block", "426-428");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15714]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 433, 17, "", "v_line/uvm_report_object", "block", "433-435");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15715]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 455, 17, "", "v_line/uvm_report_object", "block", "455,457-458");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15716]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 469, 17, "", "v_line/uvm_report_object", "block", "469,471-472");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15717]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 477, 17, "", "v_line/uvm_report_object", "block", "477,480-481");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15718]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 495, 17, "", "v_line/uvm_report_object", "block", "495-497");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15719]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 507, 31, "", "v_line/uvm_report_object", "block", "507-509");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15720]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 519, 17, "", "v_line/uvm_report_object", "block", "519-521");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_object___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_report_object* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
