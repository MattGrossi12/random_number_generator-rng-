// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi132__Vclpkg.__VnoInFunc_type_name(vlSymsp, type_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[2308]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209, vlSymsp);
        ++(vlSymsp->__Vcoverage[2310]);
    } else {
        ++(vlSymsp->__Vcoverage[2311]);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
    ++(vlSymsp->__Vcoverage[2312]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_create(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_driver_> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_create\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi132__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, create__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[2314]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_set_type_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi132__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
    ++(vlSymsp->__Vcoverage[2315]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_set_inst_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi132__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
    ++(vlSymsp->__Vcoverage[2316]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_set_type_alias(Vtb_rng__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    set_type_alias__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi132__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
    ++(vlSymsp->__Vcoverage[2317]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::__VnoInFunc_create_component(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::__VnoInFunc_create_component\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_driver_> obj;
    obj = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_driver_, vlProcess, vlSymsp, name, parent);
    create_component__Vfuncrtn = obj;
    ++(vlSymsp->__Vcoverage[2307]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::__VnoInFunc_get_type_name\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi132> common;
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi132__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 80)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[2309]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::__VnoInFunc_initialize\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi132> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi132__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 94)->__VnoInFunc_initialize(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[2313]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::init(Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[2318]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::~Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz209::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
