// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67_TBz192__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_report_object"s, "uvm_report_catcher"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_report_catcher 
        = __Vfunc_m_register_pair__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[15243]);
    vlSelfRef.__PVT__DO_NOT_CATCH = 1U;
    ++(vlSymsp->__Vcoverage[15244]);
    vlSelfRef.__PVT__DO_NOT_MODIFY = 2U;
    ++(vlSymsp->__Vcoverage[15245]);
    vlSelfRef.__PVT__print_catcher__Vstatic__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192, vlSymsp, VlNull{});
    vlSelfRef.__PVT__process_all_report_catchers__Vstatic__in_catcher = 0U;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_set_action_called = 0;
    vlSelf->__PVT__m_demoted_fatal = 0;
    vlSelf->__PVT__m_demoted_error = 0;
    vlSelf->__PVT__m_demoted_warning = 0;
    vlSelf->__PVT__m_caught_fatal = 0;
    vlSelf->__PVT__m_caught_error = 0;
    vlSelf->__PVT__m_caught_warning = 0;
    vlSelf->__PVT__m_debug_flags = 0;
    vlSelf->__PVT__do_report = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_catcher__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15243]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 61, 109, "", "v_line/uvm_report_catcher", "block", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15244]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 79, 40, "", "v_line/uvm_report_catcher", "block", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15245]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 80, 40, "", "v_line/uvm_report_catcher", "block", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15246]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 92, 12, "", "v_line/uvm_report_catcher", "block", "92-94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15247]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 105, 30, "", "v_line/uvm_report_catcher", "block", "105-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15248]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 117, 25, "", "v_line/uvm_report_catcher", "block", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15249]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 133, 5, "", "v_branch/uvm_report_catcher", "if", "133-135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15250]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 133, 6, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15251]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 129, 19, "", "v_line/uvm_report_catcher", "block", "129-130,132,138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15252]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 149, 16, "", "v_line/uvm_report_catcher", "block", "149-150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15253]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 161, 19, "", "v_line/uvm_report_catcher", "block", "161-162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15254]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 173, 19, "", "v_line/uvm_report_catcher", "block", "173-174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15255]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 185, 23, "", "v_line/uvm_report_catcher", "block", "185-186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15256]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 194, 19, "", "v_line/uvm_report_catcher", "block", "194-195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15257]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 203, 16, "", "v_line/uvm_report_catcher", "block", "203-204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15258]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 211, 49, "", "v_line/uvm_report_catcher", "block", "211-212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15259]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 224, 27, "", "v_line/uvm_report_catcher", "block", "224-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15260]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 234, 27, "", "v_line/uvm_report_catcher", "block", "234-235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15261]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 244, 27, "", "v_line/uvm_report_catcher", "block", "244-245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15262]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 254, 27, "", "v_line/uvm_report_catcher", "block", "254-255");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15263]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 264, 27, "", "v_line/uvm_report_catcher", "block", "264-266");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15264]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 275, 27, "", "v_line/uvm_report_catcher", "block", "275-276");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15265]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 288, 27, "", "v_line/uvm_report_catcher", "block", "288,293");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15266]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 304, 27, "", "v_line/uvm_report_catcher", "block", "304,307");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15267]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 318, 27, "", "v_line/uvm_report_catcher", "block", "318,321");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15268]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 361, 5, "", "v_branch/uvm_report_catcher", "if", "361-362");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15269]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 361, 6, "", "v_branch/uvm_report_catcher", "else", "364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15270]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 360, 4, "", "v_line/uvm_report_catcher", "block", "360,366-367");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15271]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 371, 6, "", "v_branch/uvm_report_catcher", "if", "371");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15272]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 371, 7, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15273]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 350, 24, "", "v_line/uvm_report_catcher", "block", "350-355,357,359,369,371");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15274]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 383, 24, "", "v_line/uvm_report_catcher", "block", "383-384");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15275]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 397, 34, "", "v_line/uvm_report_catcher", "block", "397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15276]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 407, 28, "", "v_line/uvm_report_catcher", "block", "407,415-416");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15277]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 425, 28, "", "v_line/uvm_report_catcher", "block", "425,433-434");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15278]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 443, 28, "", "v_line/uvm_report_catcher", "block", "443,451-452");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15279]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 461, 28, "", "v_line/uvm_report_catcher", "block", "461,469-470");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15280]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 489, 8, "", "v_branch/uvm_report_catcher", "if", "489-490");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15281]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 489, 9, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15282]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 488, 6, "", "v_branch/uvm_report_catcher", "if", "488");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15283]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 488, 7, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15284]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 478, 28, "", "v_line/uvm_report_catcher", "block", "478,487,493-496");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15285]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 514, 8, "", "v_branch/uvm_report_catcher", "if", "514-515");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15286]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 514, 9, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15287]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 503, 6, "", "v_branch/uvm_report_catcher", "if", "503-505,507-511,516");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15288]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 503, 7, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15289]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 499, 28, "", "v_line/uvm_report_catcher", "block", "499-501");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15290]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 535, 8, "", "v_branch/uvm_report_catcher", "if", "535-536");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15291]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 535, 9, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15292]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 532, 6, "", "v_branch/uvm_report_catcher", "if", "532-533,537");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15293]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 532, 7, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15294]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 528, 27, "", "v_line/uvm_report_catcher", "block", "528-530");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15295]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 554, 5, "", "v_branch/uvm_report_catcher", "if", "554-555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15296]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 554, 6, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15297]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 568, 9, "", "v_branch/uvm_report_catcher", "if", "568-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15298]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 568, 10, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15299]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 571, 9, "", "v_branch/uvm_report_catcher", "if", "571-572");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15300]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 571, 10, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15301]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 565, 7, "", "v_branch/uvm_report_catcher", "if", "565-567,570");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15302]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 565, 8, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15303]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 564, 5, "", "v_branch/uvm_report_catcher", "if", "564");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15304]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 564, 6, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15305]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 578, 7, "", "v_branch/uvm_report_catcher", "if", "578-580");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15306]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 578, 8, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15307]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 590, 7, "", "v_branch/uvm_report_catcher", "if", "590,593,595-596");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15308]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 590, 8, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15309]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 601, 20, "", "v_line/uvm_report_catcher", "case", "601");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15310]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 602, 20, "", "v_line/uvm_report_catcher", "case", "602");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15311]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 603, 22, "", "v_line/uvm_report_catcher", "case", "603");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15312]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 599, 7, "", "v_branch/uvm_report_catcher", "if", "599-600,605");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15313]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 599, 8, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15314]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 575, 5, "", "v_line/uvm_report_catcher", "block", "575-576,583-585,607");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15315]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 613, 9, "", "v_branch/uvm_report_catcher", "if", "613-614");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15316]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 613, 10, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15317]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 612, 16, "", "v_line/uvm_report_catcher", "case", "612");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15318]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 616, 9, "", "v_branch/uvm_report_catcher", "if", "616-617");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15319]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 616, 10, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15320]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 615, 16, "", "v_line/uvm_report_catcher", "case", "615");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15321]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 619, 9, "", "v_branch/uvm_report_catcher", "if", "619-620");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15322]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 619, 10, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15323]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 618, 18, "", "v_line/uvm_report_catcher", "case", "618");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15324]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 546, 23, "", "v_line/uvm_report_catcher", "block", "546-552,557-558,560-561,563,575,611,623-624,626");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15325]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 640, 5, "", "v_branch/uvm_report_catcher", "if", "430-431,640-642");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15326]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 640, 6, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15327]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 644, 5, "", "v_branch/uvm_report_catcher", "if", "644-645");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15328]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 644, 6, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15329]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 648, 5, "", "v_branch/uvm_report_catcher", "if", "648-649");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15330]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 648, 6, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15331]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 634, 22, "", "v_line/uvm_report_catcher", "block", "634,636,638,652");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15332]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 675, 6, "", "v_branch/uvm_report_catcher", "if", "675");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15333]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 675, 7, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15334]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 666, 5, "", "v_branch/uvm_report_catcher", "if", "666-673,675");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15335]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 666, 6, "", "v_branch/uvm_report_catcher", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15336]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 663, 24, "", "v_line/uvm_report_catcher", "block", "663-665");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_report_catcher___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_report_catcher* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_catcher___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
