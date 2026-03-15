// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event___Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event___Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_cb__1__Vfuncout;
    __Vfunc_m_register_cb__1__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc_m_register_cb(vlProcess, vlSymsp, __Vfunc_m_register_cb__1__Vfuncout);
    vlSelfRef.__PVT__m_cb_registered = __Vfunc_m_register_cb__1__Vfuncout;
    ++(vlSymsp->__Vcoverage[12204]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event___Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12203]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 265, 35, "", "v_line/uvm_event_", "block", "265-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12204]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 271, 44, "", "v_line/uvm_event_", "block", "271");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12205]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 28, "", "v_line/uvm_event_", "block", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12206]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 40, "", "v_line/uvm_event_", "block", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12207]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 6, "", "v_branch/uvm_event_", "if", "273,288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12208]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 7, "", "v_branch/uvm_event_", "else", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12209]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 273, 24, "", "v_line/uvm_event_", "block", "273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12210]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 276, 33, "", "v_line/uvm_event_", "block", "276-277");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12211]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 288, 11, "", "v_line/uvm_event_", "block", "288-289");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12212]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 297, 15, "", "v_line/uvm_event_", "block", "297-299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12213]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 308, 15, "", "v_line/uvm_event_", "block", "308-310");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12214]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 334, 24, "", "v_line/uvm_event_", "block", "334-335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12215]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 338, 25, "", "v_line/uvm_event_", "block", "338-339");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12216]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 336, 3, "", "v_branch/uvm_event_", "if", "336-338,340-343");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12217]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 336, 4, "", "v_branch/uvm_event_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12218]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 326, 24, "", "v_line/uvm_event_", "block", "326-330,334");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12219]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 326, 24, "", "v_line/uvm_event_", "block", "326");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12220]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 353, 21, "", "v_line/uvm_event_", "block", "353-354");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12221]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 360, 28, "", "v_line/uvm_event_", "block", "360-361");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12222]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 365, 31, "", "v_line/uvm_event_", "block", "365-366");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12223]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 407, 18, "", "v_line/uvm_event_", "block", "407-408");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12224]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 416, 8, "", "v_branch/uvm_event_", "if", "416-417");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12225]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 416, 9, "", "v_branch/uvm_event_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12226]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 411, 5, "", "v_branch/uvm_event_", "if", "411-412");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12227]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 411, 6, "", "v_branch/uvm_event_", "else", "414-415");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12228]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 398, 24, "", "v_line/uvm_event_", "block", "398-400,402,405-407,409");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12229]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 425, 5, "", "v_branch/uvm_event_", "if", "425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12230]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 425, 6, "", "v_branch/uvm_event_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12231]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 438, 21, "", "v_line/uvm_event_", "block", "438-439");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12232]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 445, 21, "", "v_line/uvm_event_", "block", "445-446");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12233]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 421, 24, "", "v_line/uvm_event_", "block", "421-424,426,428,437-438,443-445");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event____configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_event_* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_event____configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
