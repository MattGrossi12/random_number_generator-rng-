// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi96__Vclpkg.__VnoInFunc_type_name(vlSymsp, type_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[4066]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177, vlSymsp);
        ++(vlSymsp->__Vcoverage[4068]);
    } else {
        ++(vlSymsp->__Vcoverage[4069]);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
    ++(vlSymsp->__Vcoverage[4070]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_create(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz161> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_create\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi96__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, create__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[4071]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_set_type_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi96__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
    ++(vlSymsp->__Vcoverage[4072]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_set_inst_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi96__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
    ++(vlSymsp->__Vcoverage[4073]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_set_type_alias(Vtb_rng__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    set_type_alias__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi96__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
    ++(vlSymsp->__Vcoverage[4074]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::__VnoInFunc_create_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::__VnoInFunc_create_object\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz161> obj;
    if ((""s == name)) {
        obj = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz161, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[4063]);
    } else {
        obj = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz161, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[4064]);
    }
    create_object__Vfuncrtn = obj;
    ++(vlSymsp->__Vcoverage[4065]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::__VnoInFunc_get_type_name\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi96> common;
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi96__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 200)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[4067]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::__VnoInFunc_initialize\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi96> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi96__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 281)->__VnoInFunc_initialize(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[4075]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::init(Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[4076]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::~Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz177::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
