// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9193]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 28, "", "v_line/uvm_queue__Tz2", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9194]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 40, "", "v_line/uvm_queue__Tz2", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9195]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 6, "", "v_branch/uvm_queue__Tz2", "if", "44,55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9196]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 7, "", "v_branch/uvm_queue__Tz2", "else", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9197]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 44, 24, "", "v_line/uvm_queue__Tz2", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9198]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 45, 29, "", "v_line/uvm_queue__Tz2", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9199]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 45, 30, "", "v_line/uvm_queue__Tz2", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9200]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 55, 12, "", "v_line/uvm_queue__Tz2", "block", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9201]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 68, 5, "", "v_branch/uvm_queue__Tz2", "if", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9202]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 68, 6, "", "v_branch/uvm_queue__Tz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9203]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 67, 29, "", "v_line/uvm_queue__Tz2", "block", "67,70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9204]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 79, 21, "", "v_line/uvm_queue__Tz2", "block", "79-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9205]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 5, "", "v_branch/uvm_queue__Tz2", "if", "96-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9206]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 6, "", "v_branch/uvm_queue__Tz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9207]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz2", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9208]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz2", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9209]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 96, 25, "", "v_expr/uvm_queue__Tz2", "((index >= size())==0 && (index < 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9210]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 94, 22, "", "v_line/uvm_queue__Tz2", "block", "94-95,101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9211]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 110, 24, "", "v_line/uvm_queue__Tz2", "block", "110-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9212]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 5, "", "v_branch/uvm_queue__Tz2", "if", "121-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9213]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 6, "", "v_branch/uvm_queue__Tz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9214]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz2", "((index < 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9215]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz2", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9216]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 121, 25, "", "v_expr/uvm_queue__Tz2", "((index >= size())==0 && (index < 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9217]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 120, 25, "", "v_line/uvm_queue__Tz2", "block", "120,126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9218]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 5, "", "v_branch/uvm_queue__Tz2", "if", "137-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9219]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 6, "", "v_branch/uvm_queue__Tz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9220]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz2", "((index < (- 32'sh1))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9221]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz2", "((index >= size())==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9222]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 137, 25, "", "v_expr/uvm_queue__Tz2", "((index >= size())==0 && (index < (- 32'sh1))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9223]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 142, 5, "", "v_branch/uvm_queue__Tz2", "if", "142-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9224]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 142, 6, "", "v_branch/uvm_queue__Tz2", "else", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9225]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 136, 25, "", "v_line/uvm_queue__Tz2", "block", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9226]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 155, 22, "", "v_line/uvm_queue__Tz2", "block", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9227]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 166, 22, "", "v_line/uvm_queue__Tz2", "block", "166-167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9228]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 176, 25, "", "v_line/uvm_queue__Tz2", "block", "176-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9229]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 186, 25, "", "v_line/uvm_queue__Tz2", "block", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9230]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 195, 16, "", "v_line/uvm_queue__Tz2", "block", "195-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9231]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 202, 5, "", "v_branch/uvm_queue__Tz2", "if", "202-203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9232]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 202, 6, "", "v_branch/uvm_queue__Tz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9233]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 199, 25, "", "v_line/uvm_queue__Tz2", "block", "199-201,204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9234]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 207, 27, "", "v_line/uvm_queue__Tz2", "block", "207-208");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
