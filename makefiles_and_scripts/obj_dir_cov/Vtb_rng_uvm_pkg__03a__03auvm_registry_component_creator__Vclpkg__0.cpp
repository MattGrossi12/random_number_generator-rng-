// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg::__VnoInFunc_create_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> obj_wrpr, std::string contxt, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &create_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg::__VnoInFunc_create_by_type\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 654)->__VnoInFunc_get_factory(vlSymsp, factory);
    VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 655)->__VnoInFunc_create_component_by_type(vlProcess, vlSymsp, obj_wrpr, contxt, name, parent, create_by_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[1201]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg::__VnoInFunc_base_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &base_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg::__VnoInFunc_base_type_name\n"); );
    // Body
    base_type_name__Vfuncrtn = "component"s;
    ++(vlSymsp->__Vcoverage[1202]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[1203]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_registry_component_creator::to_string_middle\n"); );
    // Body
    return (""s);
}
