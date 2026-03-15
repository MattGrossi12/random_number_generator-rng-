// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[17869]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_accept(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> s, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_accept\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> c;
    c.clear();
    if (invoke_begin_end) {
        VL_NULL_CHECK(v, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 129)->__VnoInFunc_begin_v(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[17870]);
    } else {
        ++(vlSymsp->__Vcoverage[17871]);
    }
    VL_NULL_CHECK(v, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 131)->__VnoInFunc_visit(vlProcess, vlSymsp, s);
    VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 132)->__VnoInFunc_get_immediate_children(vlSymsp, s, c);
    unnamedblk1__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__idx, c.size())) {
        this->__VnoInFunc_accept(vlProcess, vlSymsp, c.at(unnamedblk1__DOT__idx), v, p, 0U);
        unnamedblk1__DOT__idx = ((IData)(1U) + unnamedblk1__DOT__idx);
        ++(vlSymsp->__Vcoverage[17872]);
    }
    if (invoke_begin_end) {
        VL_NULL_CHECK(v, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 138)->__VnoInFunc_end_v(vlSymsp);
        ++(vlSymsp->__Vcoverage[17873]);
    } else {
        ++(vlSymsp->__Vcoverage[17874]);
    }
    ++(vlSymsp->__Vcoverage[17875]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::~Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::to_string_middle();
    return (out);
}
