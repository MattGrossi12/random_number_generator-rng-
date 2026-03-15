// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1440]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 28, "", "v_line/uvm_pool__Tz2_TBz22", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1441]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 40, "", "v_line/uvm_pool__Tz2_TBz22", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1442]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 6, "", "v_branch/uvm_pool__Tz2_TBz22", "if", "45,53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1443]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 7, "", "v_branch/uvm_pool__Tz2_TBz22", "else", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1444]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 24, "", "v_line/uvm_pool__Tz2_TBz22", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1445]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 46, 29, "", "v_line/uvm_pool__Tz2_TBz22", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1446]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 46, 30, "", "v_line/uvm_pool__Tz2_TBz22", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1447]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 53, 12, "", "v_line/uvm_pool__Tz2_TBz22", "block", "53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1448]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 66, 5, "", "v_branch/uvm_pool__Tz2_TBz22", "if", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1449]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 66, 6, "", "v_branch/uvm_pool__Tz2_TBz22", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1450]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 65, 29, "", "v_line/uvm_pool__Tz2_TBz22", "block", "65,68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1451]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 77, 21, "", "v_line/uvm_pool__Tz2_TBz22", "block", "77-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1452]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 93, 5, "", "v_branch/uvm_pool__Tz2_TBz22", "if", "93-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1453]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 93, 6, "", "v_branch/uvm_pool__Tz2_TBz22", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1454]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 93, 9, "", "v_expr/uvm_pool__Tz2_TBz22", "(pool.exists(key)==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1455]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 93, 9, "", "v_expr/uvm_pool__Tz2_TBz22", "(pool.exists(key)==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1456]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 92, 22, "", "v_line/uvm_pool__Tz2_TBz22", "block", "92,97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1457]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 107, 25, "", "v_line/uvm_pool__Tz2_TBz22", "block", "107-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1458]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 117, 24, "", "v_line/uvm_pool__Tz2_TBz22", "block", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1459]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 128, 5, "", "v_branch/uvm_pool__Tz2_TBz22", "if", "128-131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1460]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 128, 6, "", "v_branch/uvm_pool__Tz2_TBz22", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1461]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 127, 25, "", "v_line/uvm_pool__Tz2_TBz22", "block", "127,133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1462]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 143, 24, "", "v_line/uvm_pool__Tz2_TBz22", "block", "143-144");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1463]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 158, 24, "", "v_line/uvm_pool__Tz2_TBz22", "block", "158-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1464]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 173, 24, "", "v_line/uvm_pool__Tz2_TBz22", "block", "173-174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1465]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 189, 24, "", "v_line/uvm_pool__Tz2_TBz22", "block", "189-190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1466]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 205, 24, "", "v_line/uvm_pool__Tz2_TBz22", "block", "205-206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1467]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 213, 5, "", "v_branch/uvm_pool__Tz2_TBz22", "if", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1468]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 213, 6, "", "v_branch/uvm_pool__Tz2_TBz22", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1469]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 209, 25, "", "v_line/uvm_pool__Tz2_TBz22", "block", "209-212,215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1470]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 231, 14, "", "v_line/uvm_pool__Tz2_TBz22", "block", "225-229,231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1471]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 225, 7, "", "v_line/uvm_pool__Tz2_TBz22", "block", "231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1472]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 224, 5, "", "v_branch/uvm_pool__Tz2_TBz22", "if", "224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1473]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 224, 6, "", "v_branch/uvm_pool__Tz2_TBz22", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1474]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 218, 25, "", "v_line/uvm_pool__Tz2_TBz22", "block", "218-223,232");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
