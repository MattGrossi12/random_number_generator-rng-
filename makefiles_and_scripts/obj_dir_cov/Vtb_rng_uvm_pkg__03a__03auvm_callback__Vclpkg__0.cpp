// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi17> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi17__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[11184]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_callback"s;
    ++(vlSymsp->__Vcoverage[11189]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi17> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi17__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[11185]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback, vlProcess, vlSymsp, "uvm_callback"s);
        ++(vlSymsp->__Vcoverage[11186]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[11187]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[11188]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_callback"s;
    ++(vlSymsp->__Vcoverage[11190]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_enabled = 1U;
    ++(vlSymsp->__Vcoverage[11183]);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[11191]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_callback_mode(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ on, CData/*0:0*/ &callback_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_callback_mode\n"); );
    // Body
    if (((0U == on) | (1U == on))) {
        ++(vlSymsp->__Vcoverage[11192]);
    } else {
        ++(vlSymsp->__Vcoverage[11193]);
    }
    callback_mode__Vfuncrtn = this->__PVT__m_enabled;
    if ((0U == on)) {
        this->__PVT__m_enabled = 0U;
        ++(vlSymsp->__Vcoverage[11197]);
    } else {
        ++(vlSymsp->__Vcoverage[11198]);
    }
    if ((1U == on)) {
        this->__PVT__m_enabled = 1U;
        ++(vlSymsp->__Vcoverage[11199]);
    } else {
        ++(vlSymsp->__Vcoverage[11200]);
    }
    if ((1U == on)) {
        ++(vlSymsp->__Vcoverage[11194]);
    }
    if ((0U == on)) {
        ++(vlSymsp->__Vcoverage[11195]);
    }
    if (((0U != on) & (1U != on))) {
        ++(vlSymsp->__Vcoverage[11196]);
    }
    ++(vlSymsp->__Vcoverage[11201]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_is_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_is_enabled\n"); );
    // Body
    is_enabled__Vfuncrtn = 0U;
    this->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, is_enabled__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[11202]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_callback::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_callback::~Vtb_rng_uvm_pkg__03a__03auvm_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_enabled:" + VL_TO_STRING(__PVT__m_enabled);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
