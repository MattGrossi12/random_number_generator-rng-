// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event__Tz2__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event__Tz2__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_cb__1__Vfuncout;
    __Vfunc_m_register_cb__1__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc_m_register_cb(vlProcess, vlSymsp, __Vfunc_m_register_cb__1__Vfuncout);
    vlSelfRef.__PVT__m_cb_registered = __Vfunc_m_register_cb__1__Vfuncout;
    ++(vlSymsp->__Vcoverage[13950]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13949]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 265, 35, "", "v_line/uvm_event__Tz2", "block", "265-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13950]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 271, 44, "", "v_line/uvm_event__Tz2", "block", "271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13951]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 28, "", "v_line/uvm_event__Tz2", "block", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13952]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 40, "", "v_line/uvm_event__Tz2", "block", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13953]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 6, "", "v_branch/uvm_event__Tz2", "if", "273,288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13954]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 7, "", "v_branch/uvm_event__Tz2", "else", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13955]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 24, "", "v_line/uvm_event__Tz2", "block", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13956]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 276, 33, "", "v_line/uvm_event__Tz2", "block", "276-277");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13957]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 288, 11, "", "v_line/uvm_event__Tz2", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13958]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 297, 15, "", "v_line/uvm_event__Tz2", "block", "297-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13959]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 308, 15, "", "v_line/uvm_event__Tz2", "block", "308-310");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13960]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 334, 24, "", "v_line/uvm_event__Tz2", "block", "334-335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13961]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 338, 25, "", "v_line/uvm_event__Tz2", "block", "338-339");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13962]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 336, 3, "", "v_branch/uvm_event__Tz2", "if", "336-338,340-343");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13963]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 336, 4, "", "v_branch/uvm_event__Tz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13964]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 326, 24, "", "v_line/uvm_event__Tz2", "block", "326-330,334");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13965]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 353, 21, "", "v_line/uvm_event__Tz2", "block", "353-354");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13966]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 360, 28, "", "v_line/uvm_event__Tz2", "block", "360-361");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13967]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 365, 31, "", "v_line/uvm_event__Tz2", "block", "365-366");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13968]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 407, 18, "", "v_line/uvm_event__Tz2", "block", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13969]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 416, 8, "", "v_branch/uvm_event__Tz2", "if", "416-417");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13970]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 416, 9, "", "v_branch/uvm_event__Tz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13971]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 411, 5, "", "v_branch/uvm_event__Tz2", "if", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13972]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 411, 6, "", "v_branch/uvm_event__Tz2", "else", "414-415");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13973]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 398, 24, "", "v_line/uvm_event__Tz2", "block", "398-400,402,405-407,409");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13974]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 425, 5, "", "v_branch/uvm_event__Tz2", "if", "425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13975]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 425, 6, "", "v_branch/uvm_event__Tz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13976]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 438, 21, "", "v_line/uvm_event__Tz2", "block", "438-439");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13977]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 445, 21, "", "v_line/uvm_event__Tz2", "block", "445-446");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13978]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 421, 24, "", "v_line/uvm_event__Tz2", "block", "421-424,426,428,437-438,443-445");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
