// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152> port) {
    Vtb_rng_uvm_pkg__03a__03auvm_port_component_base::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    if ((VlNull{} == port)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Bad usage"s, "Null handle to port"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[19047]);
    } else {
        ++(vlSymsp->__Vcoverage[19048]);
    }
    this->__PVT__m_port = port;
    ++(vlSymsp->__Vcoverage[19049]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_get_type_name\n"); );
    // Body
    {
        get_type_name__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__m_port)) {
            get_type_name__Vfuncrtn = "uvm_port_component"s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19051]);
        }
        VL_NULL_CHECK(this->__PVT__m_port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 130)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19052]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_resolve_bindings\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 134)->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[19053]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_get_port(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152> &get_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_get_port\n"); );
    // Body
    get_port__Vfuncrtn = this->__PVT__m_port;
    ++(vlSymsp->__Vcoverage[19054]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_get_connected_to(Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_get_connected_to\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_component_base> __VlefCall_2__get_comp;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk1__DOT__name;
    CData/*0:0*/ unnamedblk1__DOT__name__Vfirst;
    unnamedblk1__DOT__name__Vfirst = 0;
    VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz152>> list1;
    list1.clear();
    VL_NULL_CHECK(this->__PVT__m_port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 153)->__VnoInFunc_get_connected_to(vlSymsp, list1);
    list.clear();
    __VlefExpr_0 = (0U != list1.first(unnamedblk1__DOT__name));
    if (__VlefExpr_0) {
        unnamedblk1__DOT__name__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk1__DOT__name__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != list1.next(unnamedblk1__DOT__name));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk1__DOT__name__Vfirst = 0U;
            VL_NULL_CHECK(list1.at(unnamedblk1__DOT__name), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 156)->__VnoInFunc_get_comp(vlSymsp, __VlefCall_2__get_comp);
            list.at(unnamedblk1__DOT__name) = __VlefCall_2__get_comp;
            ++(vlSymsp->__Vcoverage[19055]);
        }
        ++(vlSymsp->__Vcoverage[19056]);
    } else {
        ++(vlSymsp->__Vcoverage[19057]);
    }
    ++(vlSymsp->__Vcoverage[19058]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_is_port(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 161)->__VnoInFunc_is_port(vlSymsp, is_port__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19059]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_is_export(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 165)->__VnoInFunc_is_export(vlSymsp, is_export__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19060]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_is_imp(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 169)->__VnoInFunc_is_imp(vlSymsp, is_imp__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19061]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::~Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz173::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_port:" + VL_TO_STRING(__PVT__m_port);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_port_component_base::to_string_middle();
    return (out);
}
