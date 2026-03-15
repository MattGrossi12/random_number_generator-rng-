// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1475]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 28, "", "v_line/uvm_pool__Tz23_TBz23", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1476]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 40, "", "v_line/uvm_pool__Tz23_TBz23", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1477]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 6, "", "v_branch/uvm_pool__Tz23_TBz23", "if", "45,53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1478]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 7, "", "v_branch/uvm_pool__Tz23_TBz23", "else", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1479]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 45, 24, "", "v_line/uvm_pool__Tz23_TBz23", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1480]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 46, 29, "", "v_line/uvm_pool__Tz23_TBz23", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1481]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 46, 30, "", "v_line/uvm_pool__Tz23_TBz23", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1482]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 53, 12, "", "v_line/uvm_pool__Tz23_TBz23", "block", "53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1483]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 66, 5, "", "v_branch/uvm_pool__Tz23_TBz23", "if", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1484]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 66, 6, "", "v_branch/uvm_pool__Tz23_TBz23", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1485]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 65, 29, "", "v_line/uvm_pool__Tz23_TBz23", "block", "65,68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1486]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 77, 21, "", "v_line/uvm_pool__Tz23_TBz23", "block", "77-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1487]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 93, 5, "", "v_branch/uvm_pool__Tz23_TBz23", "if", "93-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1488]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 93, 6, "", "v_branch/uvm_pool__Tz23_TBz23", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1489]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 93, 9, "", "v_expr/uvm_pool__Tz23_TBz23", "(pool.exists(key)==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1490]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 93, 9, "", "v_expr/uvm_pool__Tz23_TBz23", "(pool.exists(key)==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1491]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 92, 22, "", "v_line/uvm_pool__Tz23_TBz23", "block", "92,97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1492]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 107, 25, "", "v_line/uvm_pool__Tz23_TBz23", "block", "107-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1493]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 117, 24, "", "v_line/uvm_pool__Tz23_TBz23", "block", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1494]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 128, 5, "", "v_branch/uvm_pool__Tz23_TBz23", "if", "128-131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1495]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 128, 6, "", "v_branch/uvm_pool__Tz23_TBz23", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1496]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 127, 25, "", "v_line/uvm_pool__Tz23_TBz23", "block", "127,133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1497]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 143, 24, "", "v_line/uvm_pool__Tz23_TBz23", "block", "143-144");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1498]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 158, 24, "", "v_line/uvm_pool__Tz23_TBz23", "block", "158-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1499]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 173, 24, "", "v_line/uvm_pool__Tz23_TBz23", "block", "173-174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1500]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 189, 24, "", "v_line/uvm_pool__Tz23_TBz23", "block", "189-190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1501]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 205, 24, "", "v_line/uvm_pool__Tz23_TBz23", "block", "205-206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1502]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 213, 5, "", "v_branch/uvm_pool__Tz23_TBz23", "if", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1503]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 213, 6, "", "v_branch/uvm_pool__Tz23_TBz23", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1504]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 209, 25, "", "v_line/uvm_pool__Tz23_TBz23", "block", "209-212,215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1505]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 231, 14, "", "v_line/uvm_pool__Tz23_TBz23", "block", "225-229,231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1506]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 225, 7, "", "v_line/uvm_pool__Tz23_TBz23", "block", "231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1507]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 224, 5, "", "v_branch/uvm_pool__Tz23_TBz23", "if", "224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1508]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 224, 6, "", "v_branch/uvm_pool__Tz23_TBz23", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1509]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 218, 25, "", "v_line/uvm_pool__Tz23_TBz23", "block", "218-223,232");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
