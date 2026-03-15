// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15__Vclpkg::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15, vlSymsp);
        ++(vlSymsp->__Vcoverage[14540]);
    } else {
        ++(vlSymsp->__Vcoverage[14541]);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
    ++(vlSymsp->__Vcoverage[14542]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::init(Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_typeid_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[14543]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::~Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz15::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
