// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi167__Vclpkg.__VnoInFunc_type_name(vlSymsp, type_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[6939]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157, vlSymsp);
        ++(vlSymsp->__Vcoverage[6941]);
    } else {
        ++(vlSymsp->__Vcoverage[6942]);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
    ++(vlSymsp->__Vcoverage[6943]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_create(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_create\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi167__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, create__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[6944]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_set_type_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi167__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
    ++(vlSymsp->__Vcoverage[6945]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_set_inst_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi167__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
    ++(vlSymsp->__Vcoverage[6946]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_set_type_alias(Vtb_rng__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    set_type_alias__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi167__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
    ++(vlSymsp->__Vcoverage[6947]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::__VnoInFunc_create_component(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::__VnoInFunc_create_component\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__0__verbosity;
    __Vfunc_uvm_report_enabled__0__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__0__severity;
    __Vfunc_uvm_report_enabled__0__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__0__id = "UVM/ABST_RGTRY/CREATE_ABSTRACT_CMPNT"s;
    __Vfunc_uvm_report_enabled__0__severity = 2U;
    __Vfunc_uvm_report_enabled__0__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__0__verbosity, (IData)(__Vfunc_uvm_report_enabled__0__severity), this->__Vfunc_uvm_report_enabled__0__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 308)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        __Vtask_uvm_report_error__7__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__7__context_name = ""s;
        __Vtask_uvm_report_error__7__line = 0x00000134U;
        this->__Vtask_uvm_report_error__7__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh"s;
        __Vtask_uvm_report_error__7__verbosity = 0U;
        this->__Vtask_uvm_report_error__7__message 
            = VL_SFORMATF_N_NX("Cannot create an instance of abstract class %@ (with name %@ and parent %@). Check for missing factory overrides for %@.",0,
                               -1,&(__VlefCall_1__get_type_name),
                               -1,&(name),-1,&(__VlefCall_2__get_full_name),
                               -1,&(__VlefCall_3__get_type_name)) ;
        this->__Vtask_uvm_report_error__7__id = "UVM/ABST_RGTRY/CREATE_ABSTRACT_CMPNT"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__7__id, this->__Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, this->__Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, this->__Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[442]);
        ++(vlSymsp->__Vcoverage[6936]);
    } else {
        ++(vlSymsp->__Vcoverage[6937]);
    }
    create_component__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[6938]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::__VnoInFunc_get_type_name\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi167> common;
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi167__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 323)->__VnoInFunc_get_type_name(vlSymsp, get_type_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[6940]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::__VnoInFunc_initialize\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi167> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi167__Vclpkg.__VnoInFunc_get(vlSymsp, common);
    VL_NULL_CHECK(common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 401)->__VnoInFunc_initialize(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[6948]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::init(Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[6949]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::~Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi157::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
