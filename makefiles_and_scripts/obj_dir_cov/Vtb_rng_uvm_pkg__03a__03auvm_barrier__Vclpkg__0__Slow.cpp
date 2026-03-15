// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11121]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 43, 28, "", "v_line/uvm_barrier", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11122]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 43, 40, "", "v_line/uvm_barrier", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11123]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 43, 6, "", "v_branch/uvm_barrier", "if", "43,50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11124]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 43, 7, "", "v_branch/uvm_barrier", "else", "43,50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11125]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 43, 24, "", "v_line/uvm_barrier", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11126]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 43, 29, "", "v_line/uvm_barrier", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11127]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 43, 30, "", "v_line/uvm_barrier", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11128]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 50, 12, "", "v_line/uvm_barrier", "block", "50-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11129]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 69, 5, "", "v_branch/uvm_barrier", "if", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11130]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 69, 6, "", "v_branch/uvm_barrier", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11131]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 75, 7, "", "v_branch/uvm_barrier", "if", "75-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11132]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 75, 8, "", "v_branch/uvm_barrier", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11133]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 75, 11, "", "v_expr/uvm_barrier", "(auto_reset==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11134]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 75, 11, "", "v_expr/uvm_barrier", "(auto_reset==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11135]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 74, 5, "", "v_branch/uvm_barrier", "if", "74,77-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11136]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 74, 6, "", "v_branch/uvm_barrier", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11137]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 67, 16, "", "v_line/uvm_barrier", "block", "67,72,81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11138]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 100, 7, "", "v_branch/uvm_barrier", "if", "100-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11139]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 100, 8, "", "v_branch/uvm_barrier", "else", "103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11140]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 99, 5, "", "v_branch/uvm_barrier", "if", "99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11141]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 99, 6, "", "v_branch/uvm_barrier", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11142]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 97, 25, "", "v_line/uvm_barrier", "block", "97-98,105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11143]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 121, 25, "", "v_line/uvm_barrier", "block", "121-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11144]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 143, 5, "", "v_branch/uvm_barrier", "if", "143-144");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11145]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 143, 6, "", "v_branch/uvm_barrier", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11146]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 141, 25, "", "v_line/uvm_barrier", "block", "141-142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11147]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 153, 24, "", "v_line/uvm_barrier", "block", "153-154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11148]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 163, 24, "", "v_line/uvm_barrier", "block", "163-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11149]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 174, 25, "", "v_line/uvm_barrier", "block", "174-176");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11150]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 179, 14, "", "v_line/uvm_barrier", "block", "179-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11151]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 185, 25, "", "v_line/uvm_barrier", "block", "185-189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11152]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 195, 5, "", "v_branch/uvm_barrier", "if", "195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11153]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 195, 6, "", "v_branch/uvm_barrier", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11154]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 192, 25, "", "v_line/uvm_barrier", "block", "192-194,197-201");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_barrier___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_barrier* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
