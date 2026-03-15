// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9151]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 28, "", "v_line/uvm_queue__Tz212", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9152]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 40, "", "v_line/uvm_queue__Tz212", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9153]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 6, "", "v_branch/uvm_queue__Tz212", "if", "44,55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9154]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 7, "", "v_branch/uvm_queue__Tz212", "else", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9155]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 24, "", "v_line/uvm_queue__Tz212", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9156]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 45, 29, "", "v_line/uvm_queue__Tz212", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9157]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 45, 30, "", "v_line/uvm_queue__Tz212", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9158]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 55, 12, "", "v_line/uvm_queue__Tz212", "block", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9159]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 68, 5, "", "v_branch/uvm_queue__Tz212", "if", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9160]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 68, 6, "", "v_branch/uvm_queue__Tz212", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9161]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 67, 29, "", "v_line/uvm_queue__Tz212", "block", "67,70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9162]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 79, 21, "", "v_line/uvm_queue__Tz212", "block", "79-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9163]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 5, "", "v_branch/uvm_queue__Tz212", "if", "96-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9164]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 6, "", "v_branch/uvm_queue__Tz212", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9165]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz212", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9166]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz212", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9167]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz212", "((index >= size())==0 && (index < 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9168]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 94, 22, "", "v_line/uvm_queue__Tz212", "block", "94-95,101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9169]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 110, 24, "", "v_line/uvm_queue__Tz212", "block", "110-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9170]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 5, "", "v_branch/uvm_queue__Tz212", "if", "121-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9171]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 6, "", "v_branch/uvm_queue__Tz212", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9172]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz212", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9173]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz212", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9174]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz212", "((index >= size())==0 && (index < 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9175]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 120, 25, "", "v_line/uvm_queue__Tz212", "block", "120,126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9176]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 5, "", "v_branch/uvm_queue__Tz212", "if", "137-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9177]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 6, "", "v_branch/uvm_queue__Tz212", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9178]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz212", "((index < (- 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9179]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz212", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9180]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz212", "((index >= size())==0 && (index < (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9181]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 142, 5, "", "v_branch/uvm_queue__Tz212", "if", "142-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9182]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 142, 6, "", "v_branch/uvm_queue__Tz212", "else", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9183]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 136, 25, "", "v_line/uvm_queue__Tz212", "block", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9184]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 155, 22, "", "v_line/uvm_queue__Tz212", "block", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9185]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 166, 22, "", "v_line/uvm_queue__Tz212", "block", "166-167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9186]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 176, 25, "", "v_line/uvm_queue__Tz212", "block", "176-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9187]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 186, 25, "", "v_line/uvm_queue__Tz212", "block", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9188]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 195, 16, "", "v_line/uvm_queue__Tz212", "block", "195-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9189]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 202, 5, "", "v_branch/uvm_queue__Tz212", "if", "202-203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9190]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 202, 6, "", "v_branch/uvm_queue__Tz212", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9191]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 199, 25, "", "v_line/uvm_queue__Tz212", "block", "199-201,204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9192]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 207, 27, "", "v_line/uvm_queue__Tz212", "block", "207-208");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
