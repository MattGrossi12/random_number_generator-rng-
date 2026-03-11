// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[4833]);
    type_name__Vfuncrtn = "uvm_reg_file"s;
    if ((0U == this->__PVT__m___05Ftype_aliases.size())) {
        ++(vlSymsp->__Vcoverage[4835]);
    }
    ++(vlSymsp->__Vcoverage[4836]);
    ++(vlSymsp->__Vcoverage[4837]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142, vlSymsp);
        ++(vlSymsp->__Vcoverage[4839]);
    } else {
        ++(vlSymsp->__Vcoverage[4840]);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
    ++(vlSymsp->__Vcoverage[4841]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_create(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_create\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_5__get_type_name;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__type_name;
    std::string __VlefCall_2__base_type_name;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi120> __VlefCall_0__get;
    std::string unnamedblk1__DOT__msg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj;
    if (((""s == contxt) & (VlNull{} != parent))) {
        VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 561)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, contxt);
        ++(vlSymsp->__Vcoverage[4842]);
    } else {
        ++(vlSymsp->__Vcoverage[4843]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg.__VnoInFunc_create_by_type(vlProcess, vlSymsp, __VlefCall_0__get, contxt, name, parent, obj);
    __VlefExpr_1 = VL_CAST_DYNAMIC(obj, create__Vfuncrtn);
    if (__VlefExpr_1) {
        ++(vlSymsp->__Vcoverage[4845]);
    } else {
        unnamedblk1__DOT__msg = ""s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg.__VnoInFunc_base_type_name(vlSymsp, __VlefCall_2__base_type_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_type_name(vlSymsp, __VlefCall_3__type_name);
        if ((VlNull{} == obj)) {
            __VlefCall_4__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 566)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
        }
        if ((VlNull{} == parent)) {
            __VlefCall_5__get_type_name = "null"s;
        } else {
            VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 568)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
        }
        unnamedblk1__DOT__msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Factory did not return a "s, __VlefCall_2__base_type_name), " of type '"s), __VlefCall_3__type_name), "'. A component of type '"s), __VlefCall_4__get_type_name), "' was returned instead. Name="s), name), " Parent="s), __VlefCall_5__get_type_name), " contxt="s), contxt);
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "FCTTYP"s, unnamedblk1__DOT__msg, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[4844]);
    }
    ++(vlSymsp->__Vcoverage[4846]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_set_type_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi120> __VlefCall_0__get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, factory);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 577)->__VnoInFunc_set_type_override_by_type(vlSymsp, __VlefCall_0__get, override_type, replace);
    ++(vlSymsp->__Vcoverage[4847]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_set_inst_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi120> __VlefCall_1__get;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, factory);
    if ((VlNull{} != parent)) {
        if ((""s == inst_path)) {
            VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 588)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_path);
            ++(vlSymsp->__Vcoverage[4848]);
        } else {
            VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 590)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), inst_path);
            ++(vlSymsp->__Vcoverage[4849]);
        }
        ++(vlSymsp->__Vcoverage[4850]);
    } else {
        ++(vlSymsp->__Vcoverage[4851]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 592)->__VnoInFunc_set_inst_override_by_type(vlSymsp, __VlefCall_1__get, override_type, inst_path);
    ++(vlSymsp->__Vcoverage[4852]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_set_type_alias(Vtb_rng__Syms* __restrict vlSymsp, std::string alias_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_1__is_type_registered;
    IData/*31:0*/ __VlefCall_0__get_core_state;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> unnamedblk2__DOT__factory;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi120> unnamedblk2__DOT__rgtry;
    this->__PVT__m___05Ftype_aliases.push_back(alias_name);
    this->__PVT__m___05Ftype_aliases.sort();
    __VlefCall_0__get_core_state = vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state;
    ++(vlSymsp->__Vcoverage[464]);
    if ((0U != __VlefCall_0__get_core_state)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__factory);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk2__DOT__rgtry);
        VL_NULL_CHECK(unnamedblk2__DOT__factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 601)->__VnoInFunc_is_type_registered(vlSymsp, unnamedblk2__DOT__rgtry, __VlefCall_1__is_type_registered);
        if (__VlefCall_1__is_type_registered) {
            VL_NULL_CHECK(unnamedblk2__DOT__factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 602)->__VnoInFunc_set_type_alias(vlProcess, vlSymsp, alias_name, unnamedblk2__DOT__rgtry);
            ++(vlSymsp->__Vcoverage[4853]);
        } else {
            ++(vlSymsp->__Vcoverage[4854]);
        }
        ++(vlSymsp->__Vcoverage[4855]);
    } else {
        ++(vlSymsp->__Vcoverage[4856]);
    }
    ++(vlSymsp->__Vcoverage[4857]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc____05Fdeferred_init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &___05Fdeferred_init__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg::__VnoInFunc____05Fdeferred_init\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_core_state;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi120> rgtry;
    ___05Fdeferred_init__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_get(vlSymsp, rgtry);
    __VlefCall_0__get_core_state = vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state;
    ++(vlSymsp->__Vcoverage[464]);
    if ((0U == __VlefCall_0__get_core_state)) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_deferred_init.push_back(rgtry);
        ++(vlSymsp->__Vcoverage[4858]);
    } else {
        VL_NULL_CHECK(rgtry, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 616)->__VnoInFunc_initialize(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[4859]);
    }
    ___05Fdeferred_init__Vfuncrtn = 1U;
    ++(vlSymsp->__Vcoverage[4860]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg.__VnoInFunc_type_name(vlSymsp, get_type_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[4838]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::__VnoInFunc_initialize\n"); );
    // Body
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi120> rgtry;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, factory);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_get(vlSymsp, rgtry);
    VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 625)->__VnoInFunc_register(vlProcess, vlSymsp, rgtry);
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg.__PVT__m___05Ftype_aliases.size())) {
        VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 629)->__VnoInFunc_set_type_alias(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi142__Vclpkg.__PVT__m___05Ftype_aliases.at(unnamedblk3__DOT__i)), rgtry);
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        ++(vlSymsp->__Vcoverage[4862]);
    }
    ++(vlSymsp->__Vcoverage[4863]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[4864]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi142::to_string_middle\n"); );
    // Body
    return (""s);
}
