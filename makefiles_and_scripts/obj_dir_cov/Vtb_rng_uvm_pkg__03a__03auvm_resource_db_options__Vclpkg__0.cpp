// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_on_tracing(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_on_tracing\n"); );
    // Body
    if (this->__PVT__ready) {
        ++(vlSymsp->__Vcoverage[8023]);
    } else {
        this->__VnoInFunc_init(vlSymsp);
        ++(vlSymsp->__Vcoverage[8022]);
    }
    this->__PVT__tracing = 1U;
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        ++(vlSymsp->__Vcoverage[8024]);
    }
    if (this->__PVT__ready) {
        ++(vlSymsp->__Vcoverage[8025]);
    }
    ++(vlSymsp->__Vcoverage[8026]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_off_tracing(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_off_tracing\n"); );
    // Body
    if (this->__PVT__ready) {
        ++(vlSymsp->__Vcoverage[8028]);
    } else {
        this->__VnoInFunc_init(vlSymsp);
        ++(vlSymsp->__Vcoverage[8027]);
    }
    this->__PVT__tracing = 0U;
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        ++(vlSymsp->__Vcoverage[8029]);
    }
    if (this->__PVT__ready) {
        ++(vlSymsp->__Vcoverage[8030]);
    }
    ++(vlSymsp->__Vcoverage[8031]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_is_tracing(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_is_tracing\n"); );
    // Body
    is_tracing__Vfuncrtn = 0U;
    if (this->__PVT__ready) {
        ++(vlSymsp->__Vcoverage[8033]);
    } else {
        this->__VnoInFunc_init(vlSymsp);
        ++(vlSymsp->__Vcoverage[8032]);
    }
    is_tracing__Vfuncrtn = this->__PVT__tracing;
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        ++(vlSymsp->__Vcoverage[8034]);
    }
    if (this->__PVT__ready) {
        ++(vlSymsp->__Vcoverage[8035]);
    }
    ++(vlSymsp->__Vcoverage[8036]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__4__Vfuncout;
    __Vtask_get_arg_matches__4__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__get_arg_matches;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> trace_args;
    trace_args.clear();
    trace_args.atDefault().clear();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 101)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_RESOURCE_DB_TRACE"s, trace_args, __Vtask_get_arg_matches__4__Vfuncout);
    __VlefCall_0__get_arg_matches = __Vtask_get_arg_matches__4__Vfuncout;
    if ((0U != __VlefCall_0__get_arg_matches)) {
        this->__PVT__tracing = 1U;
        ++(vlSymsp->__Vcoverage[8037]);
    } else {
        ++(vlSymsp->__Vcoverage[8038]);
    }
    this->__PVT__ready = 1U;
    ++(vlSymsp->__Vcoverage[8039]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[8040]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_db_options::to_string_middle\n"); );
    // Body
    return (""s);
}
