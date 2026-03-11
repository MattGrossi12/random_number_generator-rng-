// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26> imp) {
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__PVT__m_if_mask = 0x00000066U;
    ++(vlSymsp->__Vcoverage[19305]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_get_peek_imp"s;
    ++(vlSymsp->__Vcoverage[19306]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_get(vlSymsp, __Vtask_get__1__t);
    t = __Vtask_get__1__t;
    ++(vlSymsp->__Vcoverage[19307]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__2__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__2__t);
    t = __Vtask_peek__2__t;
    ++(vlSymsp->__Vcoverage[19308]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_try_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_try_get\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_get__3__t;
    // Body
    try_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__3__t, try_get__Vfuncrtn);
    t = __Vtask_try_get__3__t;
    ++(vlSymsp->__Vcoverage[19309]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_can_get(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_can_get\n"); );
    // Body
    can_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_can_get(vlSymsp, can_get__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19310]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_try_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_try_peek\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_peek__5__t;
    // Body
    try_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__5__t, try_peek__Vfuncrtn);
    t = __Vtask_try_peek__5__t;
    ++(vlSymsp->__Vcoverage[19311]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_can_peek(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::__VnoInFunc_can_peek\n"); );
    // Body
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_can_peek(vlSymsp, can_peek__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19312]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::~Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::to_string_middle();
    return (out);
}
