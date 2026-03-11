// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9468]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 28, "", "v_line/uvm_queue__Tz48", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9469]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 40, "", "v_line/uvm_queue__Tz48", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9470]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 6, "", "v_branch/uvm_queue__Tz48", "if", "44,55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9471]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 7, "", "v_branch/uvm_queue__Tz48", "else", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9472]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 24, "", "v_line/uvm_queue__Tz48", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9473]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 45, 29, "", "v_line/uvm_queue__Tz48", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9474]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 45, 30, "", "v_line/uvm_queue__Tz48", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9475]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 55, 12, "", "v_line/uvm_queue__Tz48", "block", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9476]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 68, 5, "", "v_branch/uvm_queue__Tz48", "if", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9477]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 68, 6, "", "v_branch/uvm_queue__Tz48", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9478]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 67, 29, "", "v_line/uvm_queue__Tz48", "block", "67,70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9479]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 79, 21, "", "v_line/uvm_queue__Tz48", "block", "79-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9480]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 5, "", "v_branch/uvm_queue__Tz48", "if", "96-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9481]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 6, "", "v_branch/uvm_queue__Tz48", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9482]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz48", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9483]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz48", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9484]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz48", "((index >= size())==0 && (index < 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9485]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 94, 22, "", "v_line/uvm_queue__Tz48", "block", "94-95,101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9486]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 110, 24, "", "v_line/uvm_queue__Tz48", "block", "110-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9487]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 5, "", "v_branch/uvm_queue__Tz48", "if", "121-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9488]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 6, "", "v_branch/uvm_queue__Tz48", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9489]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz48", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9490]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz48", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9491]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz48", "((index >= size())==0 && (index < 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9492]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 120, 25, "", "v_line/uvm_queue__Tz48", "block", "120,126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9493]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 5, "", "v_branch/uvm_queue__Tz48", "if", "137-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9494]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 6, "", "v_branch/uvm_queue__Tz48", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9495]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz48", "((index < (- 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9496]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz48", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9497]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz48", "((index >= size())==0 && (index < (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9498]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 142, 5, "", "v_branch/uvm_queue__Tz48", "if", "142-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9499]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 142, 6, "", "v_branch/uvm_queue__Tz48", "else", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9500]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 136, 25, "", "v_line/uvm_queue__Tz48", "block", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9501]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 155, 22, "", "v_line/uvm_queue__Tz48", "block", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9502]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 166, 22, "", "v_line/uvm_queue__Tz48", "block", "166-167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9503]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 176, 25, "", "v_line/uvm_queue__Tz48", "block", "176-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9504]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 186, 25, "", "v_line/uvm_queue__Tz48", "block", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9505]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 195, 16, "", "v_line/uvm_queue__Tz48", "block", "195-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9506]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 202, 5, "", "v_branch/uvm_queue__Tz48", "if", "202-203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9507]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 202, 6, "", "v_branch/uvm_queue__Tz48", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9508]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 199, 25, "", "v_line/uvm_queue__Tz48", "block", "199-201,204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9509]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 207, 27, "", "v_line/uvm_queue__Tz48", "block", "207-208");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
