// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_tracing = 1U;
    ++(vlSymsp->__Vcoverage[11161]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11161]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 95, 28, "", "v_line/uvm_callbacks_base", "block", "95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11162]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 101, 5, "", "v_branch/uvm_callbacks_base", "if", "101-103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11163]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 101, 6, "", "v_branch/uvm_callbacks_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11164]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 100, 29, "", "v_line/uvm_callbacks_base", "block", "100,105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11165]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 113, 24, "", "v_line/uvm_callbacks_base", "block", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11166]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 117, 24, "", "v_line/uvm_callbacks_base", "block", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11167]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 121, 24, "", "v_line/uvm_callbacks_base", "block", "121-122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11168]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 125, 45, "", "v_line/uvm_callbacks_base", "block", "125-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11169]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 129, 25, "", "v_line/uvm_callbacks_base", "block", "129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11170]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 132, 24, "", "v_line/uvm_callbacks_base", "block", "132-133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11171]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 142, 5, "", "v_branch/uvm_callbacks_base", "if", "142-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11172]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 142, 6, "", "v_branch/uvm_callbacks_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11173]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 147, 7, "", "v_branch/uvm_callbacks_base", "if", "147-148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11174]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 147, 8, "", "v_branch/uvm_callbacks_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11175]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 146, 25, "", "v_line/uvm_callbacks_base", "block", "146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11176]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 153, 9, "", "v_branch/uvm_callbacks_base", "if", "153-154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11177]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 153, 10, "", "v_branch/uvm_callbacks_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11178]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 151, 31, "", "v_line/uvm_callbacks_base", "block", "151-152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11179]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 150, 5, "", "v_branch/uvm_callbacks_base", "if", "150-151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11180]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 150, 6, "", "v_branch/uvm_callbacks_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11181]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 139, 16, "", "v_line/uvm_callbacks_base", "block", "139-140,146,158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11182]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 91, 1, "", "v_line/uvm_callbacks_base", "block", "91");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
