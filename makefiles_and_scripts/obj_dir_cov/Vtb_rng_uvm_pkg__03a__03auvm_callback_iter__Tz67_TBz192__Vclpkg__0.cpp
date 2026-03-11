// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::init(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_obj = obj;
    ++(vlSymsp->__Vcoverage[11438]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_first(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_first\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_first__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67_TBz192__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_first__0__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_first__0__Vfuncout;
    first__Vfuncrtn = this->__PVT__m_cb;
    ++(vlSymsp->__Vcoverage[11439]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_last(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> &last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_last\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_last__1__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67_TBz192__Vclpkg.__VnoInFunc_get_last(vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_last__1__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_last__1__Vfuncout;
    last__Vfuncrtn = this->__PVT__m_cb;
    ++(vlSymsp->__Vcoverage[11440]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_next(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_next\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67_TBz192__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_next__2__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_next__2__Vfuncout;
    next__Vfuncrtn = this->__PVT__m_cb;
    ++(vlSymsp->__Vcoverage[11441]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_prev(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> &prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_prev\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_prev__3__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67_TBz192__Vclpkg.__VnoInFunc_get_prev(vlSymsp, this->__PVT__m_i, this->__PVT__m_obj, __Vfunc_get_prev__3__Vfuncout);
    this->__PVT__m_cb = __Vfunc_get_prev__3__Vfuncout;
    prev__Vfuncrtn = this->__PVT__m_cb;
    ++(vlSymsp->__Vcoverage[11442]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_get_cb(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_catcher> &get_cb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::__VnoInFunc_get_cb\n"); );
    // Body
    get_cb__Vfuncrtn = this->__PVT__m_cb;
    ++(vlSymsp->__Vcoverage[11443]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_i = 0;
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz192::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_i:" + VL_TO_STRING(__PVT__m_i);
    out += ", m_obj:" + VL_TO_STRING(__PVT__m_obj);
    out += ", m_cb:" + VL_TO_STRING(__PVT__m_cb);
    return (out);
}
