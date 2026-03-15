// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19062]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 123, 5, "", "v_branch/uvm_port_component__Tz251", "if", "123-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19063]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 123, 6, "", "v_branch/uvm_port_component__Tz251", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19064]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 121, 12, "", "v_line/uvm_port_component__Tz251", "block", "121-122,125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19065]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 129, 5, "", "v_branch/uvm_port_component__Tz251", "if", "129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19066]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 129, 6, "", "v_branch/uvm_port_component__Tz251", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19067]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 128, 27, "", "v_line/uvm_port_component__Tz251", "block", "128,130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19068]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 133, 25, "", "v_line/uvm_port_component__Tz251", "block", "133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19069]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 141, 17, "", "v_line/uvm_port_component__Tz251", "block", "141-142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19070]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 155, 19, "", "v_line/uvm_port_component__Tz251", "block", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19071]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 155, 19, "", "v_branch/uvm_port_component__Tz251", "if", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19072]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 155, 20, "", "v_branch/uvm_port_component__Tz251", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19073]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 151, 25, "", "v_line/uvm_port_component__Tz251", "block", "151-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19074]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 160, 16, "", "v_line/uvm_port_component__Tz251", "block", "160-161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19075]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 164, 16, "", "v_line/uvm_port_component__Tz251", "block", "164-165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19076]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 168, 16, "", "v_line/uvm_port_component__Tz251", "block", "168-169");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz251___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
