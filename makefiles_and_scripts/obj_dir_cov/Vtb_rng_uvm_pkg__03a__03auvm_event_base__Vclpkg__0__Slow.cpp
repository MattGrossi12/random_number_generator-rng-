// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11090]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 39, 28, "", "v_line/uvm_event_base", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11091]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 39, 40, "", "v_line/uvm_event_base", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11092]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 39, 29, "", "v_line/uvm_event_base", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11093]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 39, 30, "", "v_line/uvm_event_base", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11094]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 44, 36, "", "v_line/uvm_event_base", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11095]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 51, 11, "", "v_line/uvm_event_base", "block", "51-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11096]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 74, 4, "", "v_branch/uvm_event_base", "if", "74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11097]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 74, 5, "", "v_branch/uvm_event_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11098]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 73, 3, "", "v_branch/uvm_event_base", "if", "73,76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11099]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 73, 4, "", "v_branch/uvm_event_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11100]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 72, 15, "", "v_line/uvm_event_base", "block", "72,78-79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11101]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 96, 4, "", "v_branch/uvm_event_base", "if", "96-97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11102]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 96, 5, "", "v_branch/uvm_event_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11103]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 95, 3, "", "v_branch/uvm_event_base", "if", "95,98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11104]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 95, 4, "", "v_branch/uvm_event_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11105]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 95, 7, "", "v_expr/uvm_event_base", "(on==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11106]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 95, 7, "", "v_expr/uvm_event_base", "(on==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11107]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 94, 15, "", "v_line/uvm_event_base", "block", "94,100-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11108]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 116, 15, "", "v_line/uvm_event_base", "block", "116-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11109]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 131, 3, "", "v_branch/uvm_event_base", "if", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11110]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 131, 4, "", "v_branch/uvm_event_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11111]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 130, 15, "", "v_line/uvm_event_base", "block", "130,133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11112]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 144, 24, "", "v_line/uvm_event_base", "block", "144-145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11113]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 160, 23, "", "v_line/uvm_event_base", "block", "160-161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11114]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 171, 23, "", "v_line/uvm_event_base", "block", "171-172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11115]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 186, 3, "", "v_branch/uvm_event_base", "if", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11116]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 186, 4, "", "v_branch/uvm_event_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11117]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 184, 24, "", "v_line/uvm_event_base", "block", "184,188-191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11118]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 209, 3, "", "v_branch/uvm_event_base", "if", "209-210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11119]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 209, 4, "", "v_branch/uvm_event_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11120]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 208, 24, "", "v_line/uvm_event_base", "block", "208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11121]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 219, 23, "", "v_line/uvm_event_base", "block", "219-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11122]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 224, 24, "", "v_line/uvm_event_base", "block", "224-227");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11123]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 234, 3, "", "v_branch/uvm_event_base", "if", "234");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11124]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 234, 4, "", "v_branch/uvm_event_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11125]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 231, 24, "", "v_line/uvm_event_base", "block", "231-233,236-239");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_event_base___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_event_base* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
