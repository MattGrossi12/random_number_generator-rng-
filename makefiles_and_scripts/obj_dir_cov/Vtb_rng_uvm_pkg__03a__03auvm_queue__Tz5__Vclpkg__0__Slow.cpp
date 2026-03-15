// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8377]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 28, "", "v_line/uvm_queue__Tz5", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8378]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 40, "", "v_line/uvm_queue__Tz5", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8379]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 6, "", "v_branch/uvm_queue__Tz5", "if", "44,55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8380]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 7, "", "v_branch/uvm_queue__Tz5", "else", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8381]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 24, "", "v_line/uvm_queue__Tz5", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8382]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 45, 29, "", "v_line/uvm_queue__Tz5", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8383]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 45, 30, "", "v_line/uvm_queue__Tz5", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8384]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 55, 12, "", "v_line/uvm_queue__Tz5", "block", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8385]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 68, 5, "", "v_branch/uvm_queue__Tz5", "if", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8386]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 68, 6, "", "v_branch/uvm_queue__Tz5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8387]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 67, 29, "", "v_line/uvm_queue__Tz5", "block", "67,70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8388]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 79, 21, "", "v_line/uvm_queue__Tz5", "block", "79-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8389]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 5, "", "v_branch/uvm_queue__Tz5", "if", "96-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8390]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 6, "", "v_branch/uvm_queue__Tz5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8391]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz5", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8392]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz5", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8393]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz5", "((index >= size())==0 && (index < 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8394]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 94, 22, "", "v_line/uvm_queue__Tz5", "block", "94-95,101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8395]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 110, 24, "", "v_line/uvm_queue__Tz5", "block", "110-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8396]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 5, "", "v_branch/uvm_queue__Tz5", "if", "121-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8397]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 6, "", "v_branch/uvm_queue__Tz5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8398]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz5", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8399]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz5", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8400]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz5", "((index >= size())==0 && (index < 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8401]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 120, 25, "", "v_line/uvm_queue__Tz5", "block", "120,126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8402]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 5, "", "v_branch/uvm_queue__Tz5", "if", "137-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8403]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 6, "", "v_branch/uvm_queue__Tz5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8404]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz5", "((index < (- 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8405]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz5", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8406]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz5", "((index >= size())==0 && (index < (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8407]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 142, 5, "", "v_branch/uvm_queue__Tz5", "if", "142-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8408]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 142, 6, "", "v_branch/uvm_queue__Tz5", "else", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8409]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 136, 25, "", "v_line/uvm_queue__Tz5", "block", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8410]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 155, 22, "", "v_line/uvm_queue__Tz5", "block", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8411]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 166, 22, "", "v_line/uvm_queue__Tz5", "block", "166-167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8412]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 176, 25, "", "v_line/uvm_queue__Tz5", "block", "176-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8413]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 186, 25, "", "v_line/uvm_queue__Tz5", "block", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8414]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 195, 16, "", "v_line/uvm_queue__Tz5", "block", "195-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8415]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 202, 5, "", "v_branch/uvm_queue__Tz5", "if", "202-203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8416]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 202, 6, "", "v_branch/uvm_queue__Tz5", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8417]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 199, 25, "", "v_line/uvm_queue__Tz5", "block", "199-201,204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8418]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 207, 27, "", "v_line/uvm_queue__Tz5", "block", "207-208");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
