// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_component"s;
    ++(vlSymsp->__Vcoverage[16746]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override(Vtb_rng__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1990)->__VnoInFunc_get_factory(vlSymsp, factory);
    VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1991)->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, original_type_name, override_type_name, (IData)(replace));
    ++(vlSymsp->__Vcoverage[16855]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override_by_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2002)->__VnoInFunc_get_factory(vlSymsp, factory);
    VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2003)->__VnoInFunc_set_type_override_by_type(vlSymsp, original_type, override_type, replace);
    ++(vlSymsp->__Vcoverage[16856]);
}

std::string VL_TO_STRING(const Vtb_rng_m_verbosity_setting__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{comp:" + VL_TO_STRING(obj.__PVT__comp);
    out += ", phase:" + VL_TO_STRING(obj.__PVT__phase);
    out += ", offset:" + VL_TO_STRING(obj.__PVT__offset);
    out += ", verbosity:" + VL_TO_STRING(obj.__PVT__verbosity);
    out += ", id:" + VL_TO_STRING(obj.__PVT__id);
    out += "}";
    return (out);
}

std::string VL_TO_STRING(const Vtb_rng_uvm_cmdline_parsed_arg_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{arg:" + VL_TO_STRING(obj.__PVT__arg);
    out += ", args:" + VL_TO_STRING(obj.__PVT__args);
    out += ", used:" + VL_TO_STRING(obj.__PVT__used);
    out += "}";
    return (out);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[16741]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[16742]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[16743]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_abort(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_abort\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[16744]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_component"s;
    ++(vlSymsp->__Vcoverage[16747]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::new\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_get__29__value;
    VL_ZERO_W(4096, __Vfunc_get__29__value);
    CData/*0:0*/ __Vtask_get__30__Vfuncout;
    __Vtask_get__30__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__30__value;
    __Vtask_get__30__value = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__print_enabled = 1U;
    ++(vlSymsp->__Vcoverage[16745]);
    this->__PVT__recording_detail = 0U;
    ++(vlSymsp->__Vcoverage[16748]);
    this->__PVT__m_unsupported_resource_base = VlNull{};
    ++(vlSymsp->__Vcoverage[16749]);
    IData/*31:0*/ __VlefCall_15__get_report_verbosity_level;
    std::string __VlefCall_14__get_full_name;
    CData/*0:0*/ __VlefCall_13__m_add_child;
    std::string __VlefCall_12__get_full_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_9;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> __VlefCall_8__get_child;
    IData/*31:0*/ __VlefCall_7__has_child;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__get_state;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_build_phase> __VlefCall_0__get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk179__DOT__bld;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> unnamedblk179__DOT__common;
    CData/*0:0*/ __VExpr_ha824e8c1__0;
    __VExpr_ha824e8c1__0 = 0;
    std::string error_str;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        error_str = ""s;
        /*super.new*/;
        if (((VlNull{} == parent) & ("__top__"s == name))) {
            this->__VnoInFunc_set_name(vlProcess, vlSymsp, ""s);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16751]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1609)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, unnamedblk179__DOT__common);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
        VL_NULL_CHECK(unnamedblk179__DOT__common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1616)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_0__get, 1U, unnamedblk179__DOT__bld);
        if ((VlNull{} == unnamedblk179__DOT__bld)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "COMP/INTERNAL"s, "attempt to find build phase object failed"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[16752]);
        } else {
            ++(vlSymsp->__Vcoverage[16753]);
        }
        VL_NULL_CHECK(unnamedblk179__DOT__bld, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1620)->__VnoInFunc_get_state(vlSymsp, __VlefCall_1__get_state);
        if ((0x00000100U == __VlefCall_1__get_state)) {
            if ((VlNull{} == parent)) {
                VL_NULL_CHECK(top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1623)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            } else {
                VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1623)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ILLCRT"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("It is illegal to create a component ('"s, name), "' under '"s), __VlefCall_2__get_full_name), "') after the build phase has ended."s)), 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[16754]);
        } else {
            ++(vlSymsp->__Vcoverage[16755]);
        }
        if ((""s == name)) {
            name = VL_SFORMATF_N_NX("%0d",0,32,vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count) ;
            name = VL_CONCATN_NNN("COMP_"s, name);
            ++(vlSymsp->__Vcoverage[16756]);
        } else {
            ++(vlSymsp->__Vcoverage[16757]);
        }
        if ((parent == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this})) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "THISPARENT"s, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "THISPARENT"s, "cannot set the parent of a component to itself"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000663U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16758]);
            } else {
                ++(vlSymsp->__Vcoverage[16759]);
            }
            ++(vlSymsp->__Vcoverage[16760]);
        } else {
            ++(vlSymsp->__Vcoverage[16761]);
        }
        if ((VlNull{} == parent)) {
            parent = top;
            ++(vlSymsp->__Vcoverage[16762]);
        } else {
            ++(vlSymsp->__Vcoverage[16763]);
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __VlefCall_4__uvm_report_enabled);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                if ((parent == top)) {
                    __VlefCall_6__get_full_name = "uvm_top"s;
                } else {
                    VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1643)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NEWCOMP"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Creating "s, __VlefCall_6__get_full_name), "."s), name)), 0x000000c9U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000066bU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16764]);
            } else {
                ++(vlSymsp->__Vcoverage[16765]);
            }
            ++(vlSymsp->__Vcoverage[16766]);
        } else {
            ++(vlSymsp->__Vcoverage[16767]);
        }
        VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1645)->__VnoInFunc_has_child(vlSymsp, name, __VlefCall_7__has_child);
        __VlefLogAnd_9 = (0U != __VlefCall_7__has_child);
        if (__VlefLogAnd_9) {
            VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1645)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_8__get_child);
            __VlefLogAnd_9 = (VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this} 
                              != __VlefCall_8__get_child);
        }
        if (__VlefLogAnd_9) {
            if ((parent == top)) {
                error_str = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(
                                                                         VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Name '"s, name), "' is not unique to other top-level "s), "instances. If parent is a module, build a unique name by combining the "s), "the module name and component name: $sformatf(\"%m.%s\",\""s), name), "\")."s);
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "CLDEXT"s, __VlefCall_10__uvm_report_enabled);
                        if ((0U != __VlefCall_10__uvm_report_enabled)) {
                            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, error_str, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000672U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[16768]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16769]);
                        }
                        ++(vlSymsp->__Vcoverage[16772]);
                    } else {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "CLDEXT"s, __VlefCall_11__uvm_report_enabled);
                        if ((0U != __VlefCall_11__uvm_report_enabled)) {
                            VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1656)
                                           ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, VL_SFORMATF_N_NX("Cannot set '%@' as a child of '%@', which already has a child by that name.",0,
                                                                                -1,
                                                                                &(name),
                                                                                -1,
                                                                                &(__VlefCall_12__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000678U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[16770]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16771]);
                        }
                        ++(vlSymsp->__Vcoverage[16773]);
                    }
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16775]);
                }
                this->__PVT__m_parent = parent;
                this->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1664)
                                           ->__VnoInFunc_m_add_child(vlProcess, vlSymsp, 
                                                                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_13__m_add_child);
                if (__VlefCall_13__m_add_child) {
                    ++(vlSymsp->__Vcoverage[16777]);
                } else {
                    this->__PVT__m_parent = VlNull{};
                    ++(vlSymsp->__Vcoverage[16776]);
                }
                this->__PVT__event_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz7, vlProcess, vlSymsp, "event_pool"s);
                this->__PVT__m_domain = VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1669)
                    ->__PVT__m_domain;
                this->__VnoInFunc_reseed(vlProcess, vlSymsp);
                __Vfunc_get__29__value[0U] = this->__PVT__recording_detail;
                __Vilp1 = 1U;
                while ((__Vilp1 <= 0x0000007fU)) {
                    __Vfunc_get__29__value[__Vilp1] = 0U;
                    __Vilp1 = ((IData)(1U) + __Vilp1);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this}, ""s, "recording_detail"s, __Vfunc_get__29__value, __VExpr_ha824e8c1__0);
                this->__PVT__recording_detail = __Vfunc_get__29__value[0U];
                if (__VExpr_ha824e8c1__0) {
                    ++(vlSymsp->__Vcoverage[16779]);
                } else {
                    __Vtask_get__30__value = this->__PVT__recording_detail;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db___Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this}, ""s, "recording_detail"s, __Vtask_get__30__value, __Vtask_get__30__Vfuncout);
                    this->__PVT__recording_detail = __Vtask_get__30__value;
                    ++(vlSymsp->__Vcoverage[16778]);
                }
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_report_object::__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1678)
                                           ->__VnoInFunc_set_name(vlProcess, vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(__VlefCall_14__get_full_name));
                VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1679)
                                           ->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, ""s, __VlefCall_15__get_report_verbosity_level);
                this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, __VlefCall_15__get_report_verbosity_level);
                this->__VnoInFunc_m_set_cl_msg_args(vlProcess, vlSymsp);
                __Vlabel0: ;
            }
            if ((1U & (~ (IData)(__VExpr_ha824e8c1__0)))) {
                ++(vlSymsp->__Vcoverage[16780]);
            }
            if (__VExpr_ha824e8c1__0) {
                ++(vlSymsp->__Vcoverage[16781]);
            }
            ++(vlSymsp->__Vcoverage[16782]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child\n"); );
            // Body
            std::string __VlefCall_10__get_name;
            std::string __VlefCall_9__get_name;
            std::string __VlefCall_8__get_name;
            IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
            std::string __VlefCall_6__get_type_name;
            std::string __VlefCall_5__get_name;
            std::string __VlefCall_4__get_name;
            IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
            CData/*0:0*/ __VlefExpr_2;
            std::string __VlefCall_1__get_name;
            std::string __VlefCall_0__get_name;
            {
                m_add_child__Vfuncrtn = 0U;
                VL_NULL_CHECK(child, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1691)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                __VlefExpr_2 = this->__PVT__m_children.exists(__VlefCall_0__get_name);
                if (__VlefExpr_2) {
                    VL_NULL_CHECK(child, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1692)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    __VlefExpr_2 = (this->__PVT__m_children
                                    .at(__VlefCall_1__get_name) 
                                    != child);
                }
                if (__VlefExpr_2) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "BDCLD"s, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        VL_NULL_CHECK(child, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1695)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                        VL_NULL_CHECK(child, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1695)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        VL_NULL_CHECK(this->__PVT__m_children
                                      .at(__VlefCall_5__get_name), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1695)
                                           ->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCLD"s, VL_SFORMATF_N_NX("A child with the name '%0@' (type=%0@) already exists.",0,
                                                                                -1,
                                                                                &(__VlefCall_4__get_name),
                                                                                -1,
                                                                                &(__VlefCall_6__get_type_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000069fU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[16783]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16784]);
                    }
                    m_add_child__Vfuncrtn = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16786]);
                }
                if (this->__PVT__m_children_by_handle.exists(child)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "BDCHLD"s, __VlefCall_7__uvm_report_enabled);
                    if ((0U != __VlefCall_7__uvm_report_enabled)) {
                        VL_NULL_CHECK(child, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1704)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                        VL_NULL_CHECK(this->__PVT__m_children_by_handle
                                      .at(child), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1704)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCHLD"s, VL_SFORMATF_N_NX("A child with the name '%0@' already exists in parent under name ' %0@'",0,
                                                                                -1,
                                                                                &(__VlefCall_8__get_name),
                                                                                -1,
                                                                                &(__VlefCall_9__get_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x000006a8U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[16787]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16788]);
                    }
                    m_add_child__Vfuncrtn = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16790]);
                }
                VL_NULL_CHECK(child, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1708)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                this->__PVT__m_children.at(__VlefCall_10__get_name) 
                    = child;
                this->__PVT__m_children_by_handle.at(child) 
                    = child;
                m_add_child__Vfuncrtn = 1U;
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[16791]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> &children) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk180__DOT__i;
            CData/*0:0*/ unnamedblk180__DOT__i__Vfirst;
            unnamedblk180__DOT__i__Vfirst = 0;
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk180__DOT__i));
            if (__VlefExpr_0) {
                unnamedblk180__DOT__i__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk180__DOT__i__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk180__DOT__i));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk180__DOT__i__Vfirst = 0U;
                    children.push_back(this->__PVT__m_children
                                       .at(unnamedblk180__DOT__i));
                    ++(vlSymsp->__Vcoverage[16792]);
                }
                ++(vlSymsp->__Vcoverage[16793]);
            } else {
                ++(vlSymsp->__Vcoverage[16794]);
            }
            ++(vlSymsp->__Vcoverage[16795]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child(Vtb_rng__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child\n"); );
            // Body
            get_first_child__Vfuncrtn = 0U;
            get_first_child__Vfuncrtn = this->__PVT__m_children.first(name);
            ++(vlSymsp->__Vcoverage[16796]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child(Vtb_rng__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child\n"); );
            // Body
            get_next_child__Vfuncrtn = 0U;
            get_next_child__Vfuncrtn = this->__PVT__m_children.next(name);
            ++(vlSymsp->__Vcoverage[16797]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child\n"); );
            // Body
            std::string __VlefCall_1__get_full_name;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            {
                if (this->__PVT__m_children.exists(name)) {
                    get_child__Vfuncrtn = this->__PVT__m_children
                        .at(name);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16799]);
                }
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "NOCHILD"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOCHILD"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component with name '"s, name), "' is not a child of component '"s), __VlefCall_1__get_full_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x000006daU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[16800]);
                } else {
                    ++(vlSymsp->__Vcoverage[16801]);
                }
                get_child__Vfuncrtn = VlNull{};
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[16802]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child(Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child\n"); );
            // Body
            has_child__Vfuncrtn = this->__PVT__m_children.exists(name);
            ++(vlSymsp->__Vcoverage[16803]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_num_children(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_num_children\n"); );
            // Body
            get_num_children__Vfuncrtn = this->__PVT__m_children.size();
            ++(vlSymsp->__Vcoverage[16804]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name\n"); );
            // Body
            get_full_name__Vfuncrtn = ""s;
            if ((""s == this->__PVT__m_name)) {
                this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            } else {
                get_full_name__Vfuncrtn = this->__PVT__m_name;
            }
            ++(vlSymsp->__Vcoverage[16807]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent\n"); );
            // Body
            get_parent__Vfuncrtn = this->__PVT__m_parent;
            ++(vlSymsp->__Vcoverage[16808]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            {
                if ((""s != this->__PVT__m_name)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "INVSTNM"s, __VlefCall_0__uvm_report_enabled);
                    if ((0U != __VlefCall_0__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "INVSTNM"s, VL_SFORMATF_N_NX("It is illegal to change the name of a component. The component name will not be changed to \"%@\"",0,
                                                                                -1,
                                                                                &(name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000709U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[16809]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16810]);
                    }
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16812]);
                }
                Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(vlProcess, vlSymsp, name);
                this->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[16813]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_4;
            CData/*0:0*/ __VlefExpr_3;
            std::string __VlefCall_2__get_name;
            std::string __VlefCall_1__get_full_name;
            IData/*31:0*/ __VlefExpr_0;
            std::string unnamedblk181__DOT__c;
            CData/*0:0*/ unnamedblk181__DOT__c__Vfirst;
            unnamedblk181__DOT__c__Vfirst = 0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> unnamedblk181__DOT__unnamedblk182__DOT__tmp;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
            __VlefExpr_0 = VL_CAST_DYNAMIC(this->__PVT__m_parent, top);
            if ((__VlefExpr_0 || (VlNull{} == this->__PVT__m_parent))) {
                this->__VnoInFunc_get_name(vlSymsp, this->__PVT__m_name);
                ++(vlSymsp->__Vcoverage[16814]);
            } else {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1818)
                                           ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                this->__PVT__m_name = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), __VlefCall_2__get_name);
                ++(vlSymsp->__Vcoverage[16815]);
            }
            __VlefExpr_3 = (0U != this->__PVT__m_children.first(unnamedblk181__DOT__c));
            if (__VlefExpr_3) {
                unnamedblk181__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk181__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__m_children.next(unnamedblk181__DOT__c));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk181__DOT__c__Vfirst = 0U;
                    unnamedblk181__DOT__unnamedblk182__DOT__tmp 
                        = this->__PVT__m_children.at(unnamedblk181__DOT__c);
                    VL_NULL_CHECK(unnamedblk181__DOT__unnamedblk182__DOT__tmp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1823)
                                           ->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
                    ++(vlSymsp->__Vcoverage[16816]);
                }
                ++(vlSymsp->__Vcoverage[16817]);
            } else {
                ++(vlSymsp->__Vcoverage[16818]);
            }
            ++(vlSymsp->__Vcoverage[16819]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_lookup(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_lookup\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
            IData/*31:0*/ __VlefCall_0__has_child;
            std::string leaf;
            std::string remainder;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            {
                leaf = ""s;
                remainder = ""s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
                VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1839)
                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
                comp = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this};
                this->__VnoInFunc_m_extract_name(vlSymsp, name, this->__Vtask_m_extract_name__62__leaf, this->__Vtask_m_extract_name__62__remainder);
                leaf = this->__Vtask_m_extract_name__62__leaf;
                remainder = this->__Vtask_m_extract_name__62__remainder;
                if ((""s == leaf)) {
                    comp = top;
                    this->__VnoInFunc_m_extract_name(vlSymsp, remainder, this->__Vtask_m_extract_name__63__leaf, this->__Vtask_m_extract_name__63__remainder);
                    leaf = this->__Vtask_m_extract_name__63__leaf;
                    remainder = this->__Vtask_m_extract_name__63__remainder;
                    ++(vlSymsp->__Vcoverage[16820]);
                } else {
                    ++(vlSymsp->__Vcoverage[16821]);
                }
                VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1850)
                                           ->__VnoInFunc_has_child(vlSymsp, leaf, __VlefCall_0__has_child);
                if ((0U != __VlefCall_0__has_child)) {
                    ++(vlSymsp->__Vcoverage[16825]);
                } else {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "Lookup Error"s, __VlefCall_1__uvm_report_enabled);
                    if ((0U != __VlefCall_1__uvm_report_enabled)) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Lookup Error"s, VL_SFORMATF_N_NX("Cannot find child %0@",0,
                                                                                -1,
                                                                                &(leaf)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000073cU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[16822]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16823]);
                    }
                    lookup__Vfuncrtn = VlNull{};
                    goto __Vlabel0;
                }
                if ((""s != remainder)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1857)
                                  ->__PVT__m_children
                                  .at(leaf), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1857)
                                           ->__VnoInFunc_lookup(vlSymsp, remainder, lookup__Vfuncrtn);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16827]);
                }
                lookup__Vfuncrtn = VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1859)
                    ->__PVT__m_children.at(leaf);
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[16828]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth\n"); );
            // Body
            IData/*31:0*/ unnamedblk183__DOT__i;
            unnamedblk183__DOT__i = 0;
            {
                get_depth__Vfuncrtn = 0U;
                if ((""s == this->__PVT__m_name)) {
                    get_depth__Vfuncrtn = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16830]);
                }
                get_depth__Vfuncrtn = 1U;
                unnamedblk183__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk183__DOT__i, 
                                  VL_LEN_IN(this->__PVT__m_name))) {
                    if ((0x2eU == VL_GETC_N(this->__PVT__m_name,unnamedblk183__DOT__i))) {
                        get_depth__Vfuncrtn = ((IData)(1U) 
                                               + get_depth__Vfuncrtn);
                        ++(vlSymsp->__Vcoverage[16831]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16832]);
                    }
                    unnamedblk183__DOT__i = ((IData)(1U) 
                                             + unnamedblk183__DOT__i);
                    ++(vlSymsp->__Vcoverage[16833]);
                }
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[16834]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_extract_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_extract_name\n"); );
            // Body
            IData/*31:0*/ i;
            IData/*31:0*/ len;
            {
                leaf = ""s;
                remainder = ""s;
                i = 0U;
                len = 0U;
                len = VL_LEN_IN(name);
                i = 0U;
                {
                    while (VL_LTS_III(32, i, VL_LEN_IN(name))) {
                        if ((0x2eU == VL_GETC_N(name,i))) {
                            goto __Vlabel1;
                        } else {
                            ++(vlSymsp->__Vcoverage[16836]);
                        }
                        i = ((IData)(1U) + i);
                        ++(vlSymsp->__Vcoverage[16837]);
                    }
                    __Vlabel1: ;
                }
                if ((i == len)) {
                    leaf = name;
                    remainder = ""s;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16839]);
                }
                leaf = VL_SUBSTR_N(name,0U,(i - (IData)(1U)));
                remainder = VL_SUBSTR_N(name,((IData)(1U) 
                                              + i),
                                        (len - (IData)(1U)));
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[16840]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_flush(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_flush\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16841]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_flush(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_flush\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk184__DOT__s;
            CData/*0:0*/ unnamedblk184__DOT__s__Vfirst;
            unnamedblk184__DOT__s__Vfirst = 0;
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk184__DOT__s));
            if (__VlefExpr_0) {
                unnamedblk184__DOT__s__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk184__DOT__s__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk184__DOT__s));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk184__DOT__s__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk184__DOT__s), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1916)
                                           ->__VnoInFunc_do_flush(vlSymsp);
                    ++(vlSymsp->__Vcoverage[16842]);
                }
                ++(vlSymsp->__Vcoverage[16843]);
            } else {
                ++(vlSymsp->__Vcoverage[16844]);
            }
            this->__VnoInFunc_flush(vlSymsp);
            ++(vlSymsp->__Vcoverage[16845]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_create\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "ILLCRT"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCRT"s, "create cannot be called on a uvm_component. Use create_component instead."s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000078eU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16846]);
            } else {
                ++(vlSymsp->__Vcoverage[16847]);
            }
            create__Vfuncrtn = VlNull{};
            ++(vlSymsp->__Vcoverage[16848]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone\n"); );
            // Body
            std::string __VlefCall_1__get_full_name;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "ILLCLN"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCLN"s, VL_SFORMATF_N_NX("Attempting to clone '%@'.  Clone cannot be called on a uvm_component.  The clone target variable will be set to null.",0,
                                                                                -1,
                                                                                &(__VlefCall_1__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000797U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16849]);
            } else {
                ++(vlSymsp->__Vcoverage[16850]);
            }
            clone__Vfuncrtn = VlNull{};
            ++(vlSymsp->__Vcoverage[16851]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_override_info(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_override_info\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
            VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1954)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1955)
                                           ->__VnoInFunc_debug_create_by_name(vlSymsp, requested_type_name, 
                                                                              VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name);
            ++(vlSymsp->__Vcoverage[16852]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_component(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_component\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
            VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1965)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1966)
                                           ->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, requested_type_name, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this}, create_component__Vfuncrtn);
            ++(vlSymsp->__Vcoverage[16853]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_object(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_object\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
            VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1977)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 1978)
                                           ->__VnoInFunc_create_object_by_name(vlSymsp, requested_type_name, 
                                                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, create_object__Vfuncrtn);
            ++(vlSymsp->__Vcoverage[16854]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override(Vtb_rng__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string __VlefCall_0__get_full_name;
            std::string full_inst_path;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
            full_inst_path = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
            VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2015)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            if ((""s == relative_inst_path)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, full_inst_path);
                ++(vlSymsp->__Vcoverage[16857]);
            } else {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), relative_inst_path);
                ++(vlSymsp->__Vcoverage[16858]);
            }
            VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2022)
                                           ->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, original_type_name, override_type_name, full_inst_path);
            ++(vlSymsp->__Vcoverage[16859]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override_by_type\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string __VlefCall_0__get_full_name;
            std::string full_inst_path;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
            full_inst_path = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
            VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2037)
                                           ->__VnoInFunc_get_factory(vlSymsp, factory);
            if ((""s == relative_inst_path)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, full_inst_path);
                ++(vlSymsp->__Vcoverage[16860]);
            } else {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), relative_inst_path);
                ++(vlSymsp->__Vcoverage[16861]);
            }
            VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2044)
                                           ->__VnoInFunc_set_inst_override_by_type(vlSymsp, original_type, override_type, full_inst_path);
            ++(vlSymsp->__Vcoverage[16862]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_verbosity_hier(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_verbosity_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk185__DOT__c;
            CData/*0:0*/ unnamedblk185__DOT__c__Vfirst;
            unnamedblk185__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, id, verbosity);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk185__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk185__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk185__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk185__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk185__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk185__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2062)
                                           ->__VnoInFunc_set_report_id_verbosity_hier(vlSymsp, id, verbosity);
                    ++(vlSymsp->__Vcoverage[16863]);
                }
                ++(vlSymsp->__Vcoverage[16864]);
            } else {
                ++(vlSymsp->__Vcoverage[16865]);
            }
            ++(vlSymsp->__Vcoverage[16866]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_verbosity_hier(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_verbosity_hier\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk186__DOT__c;
            CData/*0:0*/ unnamedblk186__DOT__c__Vfirst;
            unnamedblk186__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_id_verbosity(vlSymsp, severity, id, verbosity);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk186__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk186__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk186__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk186__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk186__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk186__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2074)
                                           ->__VnoInFunc_set_report_severity_id_verbosity_hier(vlSymsp, severity, id, verbosity);
                    ++(vlSymsp->__Vcoverage[16867]);
                }
                ++(vlSymsp->__Vcoverage[16868]);
            } else {
                ++(vlSymsp->__Vcoverage[16869]);
            }
            ++(vlSymsp->__Vcoverage[16870]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_action_hier(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_action_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk187__DOT__c;
            CData/*0:0*/ unnamedblk187__DOT__c__Vfirst;
            unnamedblk187__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, severity, action);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk187__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk187__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk187__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk187__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk187__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk187__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2085)
                                           ->__VnoInFunc_set_report_severity_action_hier(vlSymsp, severity, action);
                    ++(vlSymsp->__Vcoverage[16871]);
                }
                ++(vlSymsp->__Vcoverage[16872]);
            } else {
                ++(vlSymsp->__Vcoverage[16873]);
            }
            ++(vlSymsp->__Vcoverage[16874]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_action_hier(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_action_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk188__DOT__c;
            CData/*0:0*/ unnamedblk188__DOT__c__Vfirst;
            unnamedblk188__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, id, action);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk188__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk188__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk188__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk188__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk188__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk188__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2095)
                                           ->__VnoInFunc_set_report_id_action_hier(vlSymsp, id, action);
                    ++(vlSymsp->__Vcoverage[16875]);
                }
                ++(vlSymsp->__Vcoverage[16876]);
            } else {
                ++(vlSymsp->__Vcoverage[16877]);
            }
            ++(vlSymsp->__Vcoverage[16878]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_action_hier(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_action_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk189__DOT__c;
            CData/*0:0*/ unnamedblk189__DOT__c__Vfirst;
            unnamedblk189__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, severity, id, action);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk189__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk189__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk189__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk189__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk189__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk189__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2107)
                                           ->__VnoInFunc_set_report_severity_id_action_hier(vlSymsp, severity, id, action);
                    ++(vlSymsp->__Vcoverage[16879]);
                }
                ++(vlSymsp->__Vcoverage[16880]);
            } else {
                ++(vlSymsp->__Vcoverage[16881]);
            }
            ++(vlSymsp->__Vcoverage[16882]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_file_hier(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_file_hier\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk190__DOT__c;
            CData/*0:0*/ unnamedblk190__DOT__c__Vfirst;
            unnamedblk190__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_file(vlSymsp, severity, file);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk190__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk190__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk190__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk190__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk190__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk190__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2118)
                                           ->__VnoInFunc_set_report_severity_file_hier(vlSymsp, severity, file);
                    ++(vlSymsp->__Vcoverage[16883]);
                }
                ++(vlSymsp->__Vcoverage[16884]);
            } else {
                ++(vlSymsp->__Vcoverage[16885]);
            }
            ++(vlSymsp->__Vcoverage[16886]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_default_file_hier(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_default_file_hier\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk191__DOT__c;
            CData/*0:0*/ unnamedblk191__DOT__c__Vfirst;
            unnamedblk191__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_default_file(vlSymsp, file);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk191__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk191__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk191__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk191__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk191__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk191__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2128)
                                           ->__VnoInFunc_set_report_default_file_hier(vlSymsp, file);
                    ++(vlSymsp->__Vcoverage[16887]);
                }
                ++(vlSymsp->__Vcoverage[16888]);
            } else {
                ++(vlSymsp->__Vcoverage[16889]);
            }
            ++(vlSymsp->__Vcoverage[16890]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_file_hier(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_file_hier\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk192__DOT__c;
            CData/*0:0*/ unnamedblk192__DOT__c__Vfirst;
            unnamedblk192__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_id_file(vlSymsp, id, file);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk192__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk192__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk192__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk192__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk192__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk192__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2138)
                                           ->__VnoInFunc_set_report_id_file_hier(vlSymsp, id, file);
                    ++(vlSymsp->__Vcoverage[16891]);
                }
                ++(vlSymsp->__Vcoverage[16892]);
            } else {
                ++(vlSymsp->__Vcoverage[16893]);
            }
            ++(vlSymsp->__Vcoverage[16894]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_file_hier(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_file_hier\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk193__DOT__c;
            CData/*0:0*/ unnamedblk193__DOT__c__Vfirst;
            unnamedblk193__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_id_file(vlSymsp, severity, id, file);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk193__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk193__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk193__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk193__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk193__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk193__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2150)
                                           ->__VnoInFunc_set_report_severity_id_file_hier(vlSymsp, severity, id, file);
                    ++(vlSymsp->__Vcoverage[16895]);
                }
                ++(vlSymsp->__Vcoverage[16896]);
            } else {
                ++(vlSymsp->__Vcoverage[16897]);
            }
            ++(vlSymsp->__Vcoverage[16898]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk194__DOT__c;
            CData/*0:0*/ unnamedblk194__DOT__c__Vfirst;
            unnamedblk194__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, verbosity);
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk194__DOT__c));
            if (__VlefExpr_0) {
                unnamedblk194__DOT__c__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk194__DOT__c__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk194__DOT__c));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk194__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk194__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2160)
                                           ->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, verbosity);
                    ++(vlSymsp->__Vcoverage[16899]);
                }
                ++(vlSymsp->__Vcoverage[16900]);
            } else {
                ++(vlSymsp->__Vcoverage[16901]);
            }
            ++(vlSymsp->__Vcoverage[16902]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase\n"); );
            // Body
            CData/*0:0*/ __VlefCall_0__use_automatic_config;
            this->__PVT__m_build_done = 1U;
            this->__VnoInFunc_use_automatic_config(vlSymsp, __VlefCall_0__use_automatic_config);
            if (__VlefCall_0__use_automatic_config) {
                this->__VnoInFunc_apply_config_settings(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__print_config_matches);
                ++(vlSymsp->__Vcoverage[16903]);
            } else {
                ++(vlSymsp->__Vcoverage[16904]);
            }
            ++(vlSymsp->__Vcoverage[16905]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16906]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16907]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16908]);
        }

        VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase\n"); );
            // Body
            VL_KEEP_THIS;
            ++(vlSymsp->__Vcoverage[16909]);
            co_return;
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16910]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16911]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16912]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16913]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16914]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16915]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16916]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16917]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16918]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16919]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16920]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16921]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16922]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16923]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16924]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16925]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16926]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16927]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16928]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_define_domain(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> domain) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_define_domain\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_run_phase> __VlefCall_1__get;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_0__find;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> unnamedblk195__DOT__common;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> schedule;
            VL_NULL_CHECK(domain, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2337)
                                           ->__VnoInFunc_find_by_name(vlSymsp, "uvm_sched"s, 1U, schedule);
            if ((VlNull{} == schedule)) {
                schedule = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, "uvm_sched"s, 3U, VlNull{});
                vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_add_uvm_phases(vlProcess, vlSymsp, schedule);
                VL_NULL_CHECK(domain, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2342)
                                           ->__VnoInFunc_add(vlProcess, vlSymsp, schedule, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
                vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, unnamedblk195__DOT__common);
                VL_NULL_CHECK(unnamedblk195__DOT__common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2344)
                                           ->__VnoInFunc_find(vlProcess, vlSymsp, domain, 0U, __VlefCall_0__find);
                if ((VlNull{} == __VlefCall_0__find)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
                    VL_NULL_CHECK(unnamedblk195__DOT__common, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2345)
                                           ->__VnoInFunc_add(vlProcess, vlSymsp, domain, __VlefCall_1__get, VlNull{}, VlNull{}, VlNull{}, VlNull{});
                    ++(vlSymsp->__Vcoverage[16929]);
                } else {
                    ++(vlSymsp->__Vcoverage[16930]);
                }
                ++(vlSymsp->__Vcoverage[16931]);
            } else {
                ++(vlSymsp->__Vcoverage[16932]);
            }
            ++(vlSymsp->__Vcoverage[16933]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_domain(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_domain\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk196__DOT__c;
            CData/*0:0*/ unnamedblk196__DOT__c__Vfirst;
            unnamedblk196__DOT__c__Vfirst = 0;
            this->__PVT__m_domain = domain;
            this->__VnoInFunc_define_domain(vlSymsp, domain);
            if ((0U != hier)) {
                __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk196__DOT__c));
                if (__VlefExpr_0) {
                    unnamedblk196__DOT__c__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_1 = unnamedblk196__DOT__c__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_1)))) {
                            __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk196__DOT__c));
                        }
                        if (!(__VlefExpr_1)) break;
                        unnamedblk196__DOT__c__Vfirst = 0U;
                        VL_NULL_CHECK(this->__PVT__m_children
                                      .at(unnamedblk196__DOT__c), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2365)
                                           ->__VnoInFunc_set_domain(vlSymsp, domain, 1U);
                        ++(vlSymsp->__Vcoverage[16934]);
                    }
                    ++(vlSymsp->__Vcoverage[16935]);
                } else {
                    ++(vlSymsp->__Vcoverage[16936]);
                }
                ++(vlSymsp->__Vcoverage[16937]);
            } else {
                ++(vlSymsp->__Vcoverage[16938]);
            }
            ++(vlSymsp->__Vcoverage[16939]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain\n"); );
            // Body
            get_domain__Vfuncrtn = this->__PVT__m_domain;
            ++(vlSymsp->__Vcoverage[16940]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_suspend(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_suspend\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "COMP/SPND/UNIMP"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "COMP/SPND/UNIMP"s, "suspend() not implemented"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000095bU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16941]);
            } else {
                ++(vlSymsp->__Vcoverage[16942]);
            }
            ++(vlSymsp->__Vcoverage[16943]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_resume(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_resume\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "COMP/RSUM/UNIMP"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "COMP/RSUM/UNIMP"s, "resume() not implemented"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000963U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16944]);
            } else {
                ++(vlSymsp->__Vcoverage[16945]);
            }
            ++(vlSymsp->__Vcoverage[16946]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_resolve_bindings\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[16947]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk197__DOT__s;
            CData/*0:0*/ unnamedblk197__DOT__s__Vfirst;
            unnamedblk197__DOT__s__Vfirst = 0;
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk197__DOT__s));
            if (__VlefExpr_0) {
                unnamedblk197__DOT__s__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk197__DOT__s__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk197__DOT__s));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk197__DOT__s__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk197__DOT__s), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2420)
                                           ->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
                    ++(vlSymsp->__Vcoverage[16948]);
                }
                ++(vlSymsp->__Vcoverage[16949]);
            } else {
                ++(vlSymsp->__Vcoverage[16950]);
            }
            this->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
            ++(vlSymsp->__Vcoverage[16951]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_accept_tr(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_accept_tr\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> e;
            {
                if ((VlNull{} == tr)) {
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16953]);
                }
                VL_NULL_CHECK(tr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2442)
                                           ->__VnoInFunc_accept_tr(vlSymsp, accept_time);
                this->__VnoInFunc_do_accept_tr(vlSymsp, tr);
                VL_NULL_CHECK(this->__PVT__event_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2444)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "accept_tr"s, e);
                if ((VlNull{} != e)) {
                    VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2446)
                                           ->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
                    ++(vlSymsp->__Vcoverage[16954]);
                } else {
                    ++(vlSymsp->__Vcoverage[16955]);
                }
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[16956]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr\n"); );
            // Body
            begin_tr__Vfuncrtn = 0U;
            this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, tr, parent_handle, stream_name, label, desc, begin_time, begin_tr__Vfuncrtn);
            ++(vlSymsp->__Vcoverage[16957]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_database(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> &get_tr_database__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_database\n"); );
            // Body
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk198__DOT__cs;
            if ((VlNull{} == this->__PVT__tr_database)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk198__DOT__cs);
                VL_NULL_CHECK(unnamedblk198__DOT__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2499)
                                           ->__VnoInFunc_get_default_tr_database(vlProcess, vlSymsp, this->__PVT__tr_database);
                ++(vlSymsp->__Vcoverage[16958]);
            } else {
                ++(vlSymsp->__Vcoverage[16959]);
            }
            get_tr_database__Vfuncrtn = this->__PVT__tr_database;
            ++(vlSymsp->__Vcoverage[16960]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_tr_database(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> db) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_tr_database\n"); );
            // Body
            this->__PVT__tr_database = db;
            ++(vlSymsp->__Vcoverage[16961]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_stream(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string stream_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_stream\n"); );
            // Body
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_2__open_stream;
            std::string __VlefCall_1__get_full_name;
            CData/*0:0*/ __VlefExpr_0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> db;
            this->__VnoInFunc_get_tr_database(vlProcess, vlSymsp, db);
            __VlefExpr_0 = (! this->__PVT__m_streams.exists(name));
            if ((1U & (~ (IData)(__VlefExpr_0)))) {
                __VlefExpr_0 = (! this->__PVT__m_streams
                                .at(name).exists(stream_type_name));
            }
            if (__VlefExpr_0) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2517)
                                           ->__VnoInFunc_open_stream(vlProcess, vlSymsp, name, 
                                                                     VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), stream_type_name, __VlefCall_2__open_stream);
                this->__PVT__m_streams.at(name).at(stream_type_name) 
                    = __VlefCall_2__open_stream;
                ++(vlSymsp->__Vcoverage[16962]);
            } else {
                ++(vlSymsp->__Vcoverage[16963]);
            }
            get_tr_stream__Vfuncrtn = this->__PVT__m_streams
                .at(name).at(stream_type_name);
            ++(vlSymsp->__Vcoverage[16964]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_free_tr_stream(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_free_tr_stream\n"); );
            // Body
            CData/*0:0*/ __VlefCall_12__is_open;
            std::string __VlefCall_11__get_name;
            CData/*0:0*/ __VlefExpr_10;
            std::string __VlefCall_9__get_name;
            std::string __VlefCall_8__get_type_name;
            std::string __VlefCall_7__get_name;
            CData/*0:0*/ __VlefExpr_6;
            std::string __VlefCall_5__get_stream_type_name;
            std::string __VlefCall_4__get_name;
            CData/*0:0*/ __VlefExpr_3;
            std::string __VlefCall_2__get_stream_type_name;
            std::string __VlefCall_1__get_name;
            std::string __VlefCall_0__get_name;
            {
                if ((VlNull{} == stream)) {
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16966]);
                }
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2529)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                __VlefExpr_3 = (! this->__PVT__m_streams.exists(__VlefCall_0__get_name));
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2530)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2530)
                                           ->__VnoInFunc_get_stream_type_name(vlSymsp, __VlefCall_2__get_stream_type_name);
                    __VlefExpr_3 = (! this->__PVT__m_streams
                                    .at(__VlefCall_1__get_name).exists(__VlefCall_2__get_stream_type_name));
                }
                if (__VlefExpr_3) {
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16968]);
                }
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2534)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2534)
                                           ->__VnoInFunc_get_stream_type_name(vlSymsp, __VlefCall_5__get_stream_type_name);
                __VlefExpr_6 = (this->__PVT__m_streams
                                .at(__VlefCall_4__get_name)
                                .at(__VlefCall_5__get_stream_type_name) 
                                != stream);
                if (__VlefExpr_6) {
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16970]);
                }
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2538)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2538)
                                           ->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                this->__PVT__m_streams.at(__VlefCall_7__get_name).erase(__VlefCall_8__get_type_name);
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2539)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                __VlefExpr_10 = (0U == this->__PVT__m_streams
                                 .at(__VlefCall_9__get_name).size());
                if (__VlefExpr_10) {
                    VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2540)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                    this->__PVT__m_streams.erase(__VlefCall_11__get_name);
                    ++(vlSymsp->__Vcoverage[16971]);
                } else {
                    ++(vlSymsp->__Vcoverage[16972]);
                }
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2543)
                                           ->__VnoInFunc_is_open(vlSymsp, __VlefCall_12__is_open);
                if ((1U & (~ (IData)(__VlefCall_12__is_open)))) {
                    VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2543)
                                           ->__VnoInFunc_is_closed(vlSymsp, __VlefCall_12__is_open);
                }
                if (__VlefCall_12__is_open) {
                    VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2544)
                                           ->__VnoInFunc_free(vlSymsp);
                    ++(vlSymsp->__Vcoverage[16973]);
                } else {
                    ++(vlSymsp->__Vcoverage[16974]);
                }
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[16975]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr\n"); );
            // Locals
            VlWide<6>/*191:0*/ __Vtemp_4;
            // Body
            IData/*31:0*/ __VlefCond_6;
            IData/*31:0*/ __VlefCall_5__get_handle;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_related_link> __VlefCall_4__get_link;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_parent_child_link> __VlefCall_3__get_link;
            std::string __VlefCall_2__get_name;
            IData/*31:0*/ __VlefCall_1__get_handle;
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> unnamedblk199__DOT__seq;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> unnamedblk199__DOT__unnamedblk200__DOT__parent_seq;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> e;
            std::string name;
            std::string kind;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> db;
            IData/*31:0*/ handle;
            IData/*31:0*/ link_handle;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> parent_recorder;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> link_recorder;
            {
                m_begin_tr__Vfuncrtn = 0U;
                name = ""s;
                kind = ""s;
                handle = 0U;
                link_handle = 0U;
                if ((VlNull{} == tr)) {
                    m_begin_tr__Vfuncrtn = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[16977]);
                }
                this->__VnoInFunc_get_tr_database(vlProcess, vlSymsp, db);
                if ((0U != parent_handle)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, parent_handle, parent_recorder);
                    ++(vlSymsp->__Vcoverage[16978]);
                } else {
                    ++(vlSymsp->__Vcoverage[16979]);
                }
                if ((VlNull{} == parent_recorder)) {
                    __VlefExpr_0 = VL_CAST_DYNAMIC(tr, unnamedblk199__DOT__seq);
                    if (__VlefExpr_0) {
                        VL_NULL_CHECK(unnamedblk199__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2576)
                                           ->__VnoInFunc_get_parent_sequence(vlSymsp, unnamedblk199__DOT__unnamedblk200__DOT__parent_seq);
                        if ((VlNull{} != unnamedblk199__DOT__unnamedblk200__DOT__parent_seq)) {
                            parent_recorder = VL_NULL_CHECK(unnamedblk199__DOT__unnamedblk200__DOT__parent_seq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2578)
                                ->__PVT__m_tr_recorder;
                            ++(vlSymsp->__Vcoverage[16980]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16981]);
                        }
                        ++(vlSymsp->__Vcoverage[16982]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16983]);
                    }
                    ++(vlSymsp->__Vcoverage[16984]);
                } else {
                    ++(vlSymsp->__Vcoverage[16985]);
                }
                if ((VlNull{} != parent_recorder)) {
                    VL_NULL_CHECK(parent_recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2584)
                                           ->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
                    VL_NULL_CHECK(tr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2584)
                                           ->__VnoInFunc_begin_child_tr(vlProcess, vlSymsp, begin_time, __VlefCall_1__get_handle, link_handle);
                    ++(vlSymsp->__Vcoverage[16986]);
                } else {
                    VL_NULL_CHECK(tr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2587)
                                           ->__VnoInFunc_begin_tr(vlProcess, vlSymsp, begin_time, link_handle);
                    ++(vlSymsp->__Vcoverage[16987]);
                }
                if ((0U != link_handle)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, link_handle, link_recorder);
                    ++(vlSymsp->__Vcoverage[16988]);
                } else {
                    ++(vlSymsp->__Vcoverage[16989]);
                }
                VL_NULL_CHECK(tr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2594)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                if ((""s != __VlefCall_2__get_name)) {
                    VL_NULL_CHECK(tr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2595)
                                           ->__VnoInFunc_get_name(vlSymsp, name);
                    ++(vlSymsp->__Vcoverage[16990]);
                } else {
                    VL_NULL_CHECK(tr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2597)
                                           ->__VnoInFunc_get_type_name(vlSymsp, name);
                    ++(vlSymsp->__Vcoverage[16991]);
                }
                if ((0U != this->__PVT__recording_detail)) {
                    if ((""s == stream_name)) {
                        stream_name = "main"s;
                        ++(vlSymsp->__Vcoverage[16992]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16993]);
                    }
                    this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, "TVM"s, stream);
                    if ((VlNull{} != stream)) {
                        __Vtemp_4[0U] = 0x4c696e6bU;
                        if ((VlNull{} == parent_recorder)) {
                            __Vtemp_4[1U] = 0x6e742c20U;
                            __Vtemp_4[2U] = 0x50617265U;
                            __Vtemp_4[3U] = 0x5f4e6f5fU;
                            __Vtemp_4[4U] = 0x6567696eU;
                            __Vtemp_4[5U] = 0x00000042U;
                        } else {
                            __Vtemp_4[1U] = 0x6e642c20U;
                            __Vtemp_4[2U] = 0x696e5f45U;
                            __Vtemp_4[3U] = 0x00426567U;
                            __Vtemp_4[4U] = 0U;
                            __Vtemp_4[5U] = 0U;
                        }
                        kind = VL_CVT_PACK_STR_NW(6, __Vtemp_4);
                        VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2608)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, name, begin_time, kind, recorder);
                        if ((VlNull{} != recorder)) {
                            if ((""s != label)) {
                                VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2612)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                                ++(vlSymsp->__Vcoverage[16994]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16995]);
                            }
                            if ((""s != desc)) {
                                VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2614)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                                ++(vlSymsp->__Vcoverage[16996]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16997]);
                            }
                            if ((VlNull{} != parent_recorder)) {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_parent_child_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, parent_recorder, recorder, "pc_link"s, __VlefCall_3__get_link);
                                VL_NULL_CHECK(this->__PVT__tr_database, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2617)
                                           ->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_3__get_link);
                                ++(vlSymsp->__Vcoverage[16998]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16999]);
                            }
                            if ((VlNull{} != link_recorder)) {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_related_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, recorder, link_recorder, "ce_link"s, __VlefCall_4__get_link);
                                VL_NULL_CHECK(this->__PVT__tr_database, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2622)
                                           ->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_4__get_link);
                                ++(vlSymsp->__Vcoverage[17000]);
                            } else {
                                ++(vlSymsp->__Vcoverage[17001]);
                            }
                            this->__PVT__m_tr_h.at(tr) 
                                = recorder;
                            ++(vlSymsp->__Vcoverage[17002]);
                        } else {
                            ++(vlSymsp->__Vcoverage[17003]);
                        }
                        ++(vlSymsp->__Vcoverage[17004]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17005]);
                    }
                    if ((VlNull{} == recorder)) {
                        __VlefCond_6 = 0U;
                    } else {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2629)
                                           ->__VnoInFunc_get_handle(vlSymsp, __VlefCall_5__get_handle);
                        __VlefCond_6 = __VlefCall_5__get_handle;
                    }
                    handle = __VlefCond_6;
                    this->__VnoInFunc_do_begin_tr(vlSymsp, tr, stream_name, handle);
                    ++(vlSymsp->__Vcoverage[17006]);
                } else {
                    ++(vlSymsp->__Vcoverage[17007]);
                }
                VL_NULL_CHECK(this->__PVT__event_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2634)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "begin_tr"s, e);
                if ((VlNull{} != e)) {
                    VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2636)
                                           ->__VnoInFunc_trigger(vlProcess, vlSymsp, tr);
                    ++(vlSymsp->__Vcoverage[17008]);
                } else {
                    ++(vlSymsp->__Vcoverage[17009]);
                }
                m_begin_tr__Vfuncrtn = handle;
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17010]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0__get_handle;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> e;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder;
            {
                if ((VlNull{} == tr)) {
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17012]);
                }
                VL_NULL_CHECK(tr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2655)
                                           ->__VnoInFunc_end_tr(vlProcess, vlSymsp, end_time, (IData)(free_handle));
                if ((0U != this->__PVT__recording_detail)) {
                    if (this->__PVT__m_tr_h.exists(tr)) {
                        recorder = this->__PVT__m_tr_h
                            .at(tr);
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2663)
                                           ->__VnoInFunc_get_handle(vlSymsp, __VlefCall_0__get_handle);
                        this->__VnoInFunc_do_end_tr(vlSymsp, tr, __VlefCall_0__get_handle);
                        this->__PVT__m_tr_h.erase(tr);
                        VL_NULL_CHECK(tr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2667)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2669)
                                           ->__VnoInFunc_close(vlSymsp, end_time);
                        if (free_handle) {
                            VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2672)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                            ++(vlSymsp->__Vcoverage[17013]);
                        } else {
                            ++(vlSymsp->__Vcoverage[17014]);
                        }
                        ++(vlSymsp->__Vcoverage[17015]);
                    } else {
                        this->__VnoInFunc_do_end_tr(vlSymsp, tr, 0U);
                        ++(vlSymsp->__Vcoverage[17016]);
                    }
                    ++(vlSymsp->__Vcoverage[17017]);
                } else {
                    ++(vlSymsp->__Vcoverage[17018]);
                }
                VL_NULL_CHECK(this->__PVT__event_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2681)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "end_tr"s, e);
                if ((VlNull{} != e)) {
                    VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2683)
                                           ->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
                    ++(vlSymsp->__Vcoverage[17019]);
                } else {
                    ++(vlSymsp->__Vcoverage[17020]);
                }
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17021]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_error_tr(Vtb_rng__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_error_tr\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder;
            std::string etype;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream;
            IData/*31:0*/ handle;
            record_error_tr__Vfuncrtn = 0U;
            handle = 0U;
            if (keep_active) {
                etype = "Error, Link"s;
                ++(vlSymsp->__Vcoverage[17022]);
            } else {
                etype = "Error"s;
                ++(vlSymsp->__Vcoverage[17023]);
            }
            if ((0ULL == error_time)) {
                error_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
                ++(vlSymsp->__Vcoverage[17024]);
            } else {
                ++(vlSymsp->__Vcoverage[17025]);
            }
            if ((""s == stream_name)) {
                stream_name = "main"s;
                ++(vlSymsp->__Vcoverage[17026]);
            } else {
                ++(vlSymsp->__Vcoverage[17027]);
            }
            this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, "TVM"s, stream);
            handle = 0U;
            if ((VlNull{} != stream)) {
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2715)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, label, error_time, etype, recorder);
                if ((VlNull{} != recorder)) {
                    if ((""s != label)) {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2721)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                        ++(vlSymsp->__Vcoverage[17028]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17029]);
                    }
                    if ((""s != desc)) {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2723)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                        ++(vlSymsp->__Vcoverage[17030]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17031]);
                    }
                    if ((VlNull{} != info)) {
                        VL_NULL_CHECK(info, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2725)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                        ++(vlSymsp->__Vcoverage[17032]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17033]);
                    }
                    VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2727)
                                           ->__VnoInFunc_close(vlSymsp, error_time);
                    if (keep_active) {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2733)
                                           ->__VnoInFunc_get_handle(vlSymsp, handle);
                        ++(vlSymsp->__Vcoverage[17035]);
                    } else {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2730)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                        ++(vlSymsp->__Vcoverage[17034]);
                    }
                    ++(vlSymsp->__Vcoverage[17036]);
                } else {
                    ++(vlSymsp->__Vcoverage[17037]);
                }
                ++(vlSymsp->__Vcoverage[17038]);
            } else {
                ++(vlSymsp->__Vcoverage[17039]);
            }
            record_error_tr__Vfuncrtn = handle;
            ++(vlSymsp->__Vcoverage[17040]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_event_tr(Vtb_rng__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_event_tr\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder;
            std::string etype;
            IData/*31:0*/ handle;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream;
            record_event_tr__Vfuncrtn = 0U;
            handle = 0U;
            if (keep_active) {
                etype = "Event, Link"s;
                ++(vlSymsp->__Vcoverage[17041]);
            } else {
                etype = "Event"s;
                ++(vlSymsp->__Vcoverage[17042]);
            }
            if ((0ULL == event_time)) {
                event_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
                ++(vlSymsp->__Vcoverage[17043]);
            } else {
                ++(vlSymsp->__Vcoverage[17044]);
            }
            if ((""s == stream_name)) {
                stream_name = "main"s;
                ++(vlSymsp->__Vcoverage[17045]);
            } else {
                ++(vlSymsp->__Vcoverage[17046]);
            }
            this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, "TVM"s, stream);
            handle = 0U;
            if ((VlNull{} != stream)) {
                VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2768)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, label, event_time, etype, recorder);
                if ((VlNull{} != recorder)) {
                    if ((""s != label)) {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2774)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                        ++(vlSymsp->__Vcoverage[17047]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17048]);
                    }
                    if ((""s != desc)) {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2776)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                        ++(vlSymsp->__Vcoverage[17049]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17050]);
                    }
                    if ((VlNull{} != info)) {
                        VL_NULL_CHECK(info, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2778)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                        ++(vlSymsp->__Vcoverage[17051]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17052]);
                    }
                    VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2780)
                                           ->__VnoInFunc_close(vlSymsp, event_time);
                    if (keep_active) {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2786)
                                           ->__VnoInFunc_get_handle(vlSymsp, handle);
                        ++(vlSymsp->__Vcoverage[17054]);
                    } else {
                        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2783)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                        ++(vlSymsp->__Vcoverage[17053]);
                    }
                    ++(vlSymsp->__Vcoverage[17055]);
                } else {
                    ++(vlSymsp->__Vcoverage[17056]);
                }
                ++(vlSymsp->__Vcoverage[17057]);
            } else {
                ++(vlSymsp->__Vcoverage[17058]);
            }
            record_event_tr__Vfuncrtn = handle;
            ++(vlSymsp->__Vcoverage[17059]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_accept_tr(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_transaction> tr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_accept_tr\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[17060]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[17061]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr\n"); );
            // Body
            ++(vlSymsp->__Vcoverage[17062]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_massage_scope(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_massage_scope\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string __VlefCall_2__get_full_name;
            std::string __VlefCall_1__get_full_name;
            std::string __VlefCall_0__get_full_name;
            {
                massage_scope__Vfuncrtn = ""s;
                if ((""s == scope)) {
                    massage_scope__Vfuncrtn = "^$"s;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17064]);
                }
                if (("*"s == scope)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                    massage_scope__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_0__get_full_name, ".*"s);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17066]);
                }
                if (("uvm_test_top"s == scope)) {
                    massage_scope__Vfuncrtn = "uvm_test_top"s;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17068]);
                }
                if ((0x2eU == VL_GETC_N(scope,0U))) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                    massage_scope__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_1__get_full_name, scope);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17070]);
                }
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                massage_scope__Vfuncrtn = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(__VlefCall_2__get_full_name, "."s), scope);
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17071]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_use_automatic_config(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_use_automatic_config\n"); );
            // Body
            use_automatic_config__Vfuncrtn = 1U;
            ++(vlSymsp->__Vcoverage[17072]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ verbose) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings\n"); );
            // Body
            std::string __VlefCall_2__get_name;
            IData/*31:0*/ __VlefCall_1__size;
            std::string __VlefCall_0__get_full_name;
            IData/*31:0*/ unnamedblk201__DOT__i;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2890)
                                           ->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                      VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rq);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
            unnamedblk201__DOT__i = 0U;
            VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2895)
                                           ->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            unnamedblk201__DOT__i = (__VlefCall_1__size 
                                     - (IData)(1U));
            while (VL_LTES_III(32, 0U, unnamedblk201__DOT__i)) {
                VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2896)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk201__DOT__i, r);
                if (verbose) {
                    VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2899)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("applying configuration to field %@",0,
                                                                                -1,
                                                                                &(__VlefCall_2__get_name)) , 0U, ""s, 0U, ""s, 0U);
                    ++(vlSymsp->__Vcoverage[17073]);
                } else {
                    ++(vlSymsp->__Vcoverage[17074]);
                }
                this->__VnoInFunc_set_local(vlProcess, vlSymsp, r);
                unnamedblk201__DOT__i = (unnamedblk201__DOT__i 
                                         - (IData)(1U));
                ++(vlSymsp->__Vcoverage[17075]);
            }
            ++(vlSymsp->__Vcoverage[17076]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            CData/*0:0*/ __VlefExpr_3;
            CData/*0:0*/ __VlefExpr_2;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> __VlefCall_1__lookup_scope;
            std::string __VlefCall_0__get_full_name;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> unnamedblk202__DOT__c;
            std::string unnamedblk202__DOT__unnamedblk203__DOT__name;
            CData/*0:0*/ unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst;
            unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst = 0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGPRT"s, "visible resources:"s, 0U, ""s, 0U, ""s, 0U);
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2916)
                                           ->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                      VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), __VlefCall_1__lookup_scope);
            VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2916)
                                           ->__VnoInFunc_print_resources(vlSymsp, __VlefCall_1__lookup_scope, audit);
            if (recurse) {
                __VlefExpr_2 = (0U != this->__PVT__m_children.first(unnamedblk202__DOT__unnamedblk203__DOT__name));
                if (__VlefExpr_2) {
                    unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_3 = unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_3)))) {
                            __VlefExpr_3 = (0U != this->__PVT__m_children.next(unnamedblk202__DOT__unnamedblk203__DOT__name));
                        }
                        if (!(__VlefExpr_3)) break;
                        unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst = 0U;
                        unnamedblk202__DOT__c = this->__PVT__m_children
                            .at(unnamedblk202__DOT__unnamedblk203__DOT__name);
                        VL_NULL_CHECK(unnamedblk202__DOT__c, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2922)
                                           ->__VnoInFunc_print_config(vlSymsp, recurse, (IData)(audit));
                        ++(vlSymsp->__Vcoverage[17077]);
                    }
                    ++(vlSymsp->__Vcoverage[17078]);
                } else {
                    ++(vlSymsp->__Vcoverage[17079]);
                }
                ++(vlSymsp->__Vcoverage[17080]);
            } else {
                ++(vlSymsp->__Vcoverage[17081]);
            }
            ++(vlSymsp->__Vcoverage[17082]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_with_audit(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ recurse) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_with_audit\n"); );
            // Body
            this->__VnoInFunc_print_config(vlSymsp, recurse, 1U);
            ++(vlSymsp->__Vcoverage[17083]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print\n"); );
            // Body
            Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
            if ((0U != this->__PVT__recording_detail)) {
                if ((0x00000064U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2962)
                                           ->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_LOW"s, 0x2eU);
                    ++(vlSymsp->__Vcoverage[17084]);
                } else if ((0x000000c8U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2964)
                                           ->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_MEDIUM"s, 0x2eU);
                    ++(vlSymsp->__Vcoverage[17085]);
                } else if ((0x0000012cU == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2966)
                                           ->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_HIGH"s, 0x2eU);
                    ++(vlSymsp->__Vcoverage[17086]);
                } else if ((0x00000190U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2968)
                                           ->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_FULL"s, 0x2eU);
                    ++(vlSymsp->__Vcoverage[17087]);
                } else {
                    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 2970)
                                           ->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "recording_detail"s, (QData)((IData)(this->__PVT__recording_detail)), 0x00000020U, 0x02000000U, 0x2eU, "integral"s);
                    ++(vlSymsp->__Vcoverage[17088]);
                }
                ++(vlSymsp->__Vcoverage[17089]);
            } else {
                ++(vlSymsp->__Vcoverage[17090]);
            }
            ++(vlSymsp->__Vcoverage[17091]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_local(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_local\n"); );
            // Locals
            IData/*31:0*/ __Vtask_read__232__Vfuncout;
            __Vtask_read__232__Vfuncout = 0;
            // Body
            IData/*31:0*/ __VlefExpr_7;
            IData/*31:0*/ __VlefExpr_6;
            VlWide<128>/*4095:0*/ __VlefCall_5__read;
            IData/*31:0*/ __VlefExpr_4;
            QData/*63:0*/ __VlefCall_3__read;
            IData/*31:0*/ __VlefExpr_2;
            CData/*0:0*/ __VlefLogAnd_1;
            std::string __VlefCall_0__get_name;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz9> unnamedblk204__DOT_____05Ftmp_rsrc___05F;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> unnamedblk205__DOT_____05Ftmp_rsrc___05F;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_> unnamedblk206__DOT_____05Ftmp_rsrc___05F;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> unnamedblk207__DOT_____05Ftmp_rsrc___05F;
            CData/*0:0*/ success;
            success = 0U;
            __VlefLogAnd_1 = (VlNull{} != rsrc);
            if (__VlefLogAnd_1) {
                VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3005)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                __VlefLogAnd_1 = ("recording_detail"s 
                                  == __VlefCall_0__get_name);
            }
            if (__VlefLogAnd_1) {
                __VlefExpr_2 = VL_CAST_DYNAMIC(rsrc, unnamedblk204__DOT_____05Ftmp_rsrc___05F);
                success = (1U & __VlefExpr_2);
                if (success) {
                    VL_NULL_CHECK(unnamedblk204__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3009)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_3__read);
                    this->__PVT__recording_detail = (IData)(__VlefCall_3__read);
                    ++(vlSymsp->__Vcoverage[17092]);
                } else {
                    ++(vlSymsp->__Vcoverage[17093]);
                }
                if (success) {
                    ++(vlSymsp->__Vcoverage[17097]);
                } else {
                    __VlefExpr_4 = VL_CAST_DYNAMIC(rsrc, unnamedblk205__DOT_____05Ftmp_rsrc___05F);
                    success = (1U & __VlefExpr_4);
                    if (success) {
                        VL_NULL_CHECK(unnamedblk205__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3009)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this}, __VlefCall_5__read);
                        this->__PVT__recording_detail 
                            = __VlefCall_5__read[0U];
                        ++(vlSymsp->__Vcoverage[17094]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17095]);
                    }
                    ++(vlSymsp->__Vcoverage[17096]);
                }
                if (success) {
                    ++(vlSymsp->__Vcoverage[17103]);
                } else {
                    __VlefExpr_6 = VL_CAST_DYNAMIC(rsrc, unnamedblk206__DOT_____05Ftmp_rsrc___05F);
                    success = (1U & __VlefExpr_6);
                    if (success) {
                        VL_NULL_CHECK(unnamedblk206__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3009)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this}, __Vtask_read__232__Vfuncout);
                        this->__PVT__recording_detail 
                            = __Vtask_read__232__Vfuncout;
                        ++(vlSymsp->__Vcoverage[17100]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17101]);
                    }
                    ++(vlSymsp->__Vcoverage[17102]);
                }
                if (success) {
                    ++(vlSymsp->__Vcoverage[17109]);
                } else {
                    __VlefExpr_7 = VL_CAST_DYNAMIC(rsrc, unnamedblk207__DOT_____05Ftmp_rsrc___05F);
                    success = (1U & __VlefExpr_7);
                    if (success) {
                        VL_NULL_CHECK(unnamedblk207__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3009)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this}, this->__PVT__recording_detail);
                        ++(vlSymsp->__Vcoverage[17106]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17107]);
                    }
                    ++(vlSymsp->__Vcoverage[17108]);
                }
                if ((1U & (~ (IData)(success)))) {
                    ++(vlSymsp->__Vcoverage[17098]);
                }
                if (success) {
                    ++(vlSymsp->__Vcoverage[17099]);
                }
                if ((1U & (~ (IData)(success)))) {
                    ++(vlSymsp->__Vcoverage[17104]);
                }
                if (success) {
                    ++(vlSymsp->__Vcoverage[17105]);
                }
                if ((1U & (~ (IData)(success)))) {
                    ++(vlSymsp->__Vcoverage[17110]);
                }
                if (success) {
                    ++(vlSymsp->__Vcoverage[17111]);
                }
                ++(vlSymsp->__Vcoverage[17112]);
            } else {
                ++(vlSymsp->__Vcoverage[17113]);
            }
            if (success) {
                ++(vlSymsp->__Vcoverage[17115]);
            } else {
                Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local(vlProcess, vlSymsp, rsrc);
                ++(vlSymsp->__Vcoverage[17114]);
            }
            if ((1U & (~ (IData)(success)))) {
                ++(vlSymsp->__Vcoverage[17116]);
            }
            if (success) {
                ++(vlSymsp->__Vcoverage[17117]);
            }
            ++(vlSymsp->__Vcoverage[17118]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_unsupported_set_local(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_unsupported_set_local\n"); );
            // Body
            this->__PVT__m_unsupported_resource_base 
                = rsrc;
            ++(vlSymsp->__Vcoverage[17119]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            std::string s_;
            VlClassRef<Vtb_rng_std__03a__03aprocess> p_;
            s_ = ""s;
            vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p_);
            if ((VlNull{} != p_)) {
                VL_NULL_CHECK(p_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3041)
                                           ->__VnoInFunc_get_randstate(vlSymsp, s_);
                ++(vlSymsp->__Vcoverage[17122]);
            } else {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM"s, "run_test() invoked from a non process context"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000be3U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[17120]);
                } else {
                    ++(vlSymsp->__Vcoverage[17121]);
                }
                ++(vlSymsp->__Vcoverage[17123]);
            }
            this->__VnoInFunc_m_set_cl_verb(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_action(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_sev(vlProcess, vlSymsp);
            if ((VlNull{} != p_)) {
                VL_NULL_CHECK(p_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3050)
                                           ->__VnoInFunc_set_randstate(vlSymsp, s_);
                ++(vlSymsp->__Vcoverage[17124]);
            } else {
                ++(vlSymsp->__Vcoverage[17125]);
            }
            ++(vlSymsp->__Vcoverage[17126]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__246__Vfuncout;
            __Vtask_get_arg_values__246__Vfuncout = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__247__sep;
            __Vtask_uvm_split_string__247__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__247__s;
            __Vtask_uvm_split_string__247__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__247__e;
            __Vtask_uvm_split_string__247__e = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__248__verb_enum;
            __Vtask_m_convert_verb__248__verb_enum = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__250__sep;
            __Vtask_uvm_split_string__250__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__250__s;
            __Vtask_uvm_split_string__250__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__250__e;
            __Vtask_uvm_split_string__250__e = 0;
            CData/*0:0*/ __Vtask_m_convert_verb__251__Vfuncout;
            __Vtask_m_convert_verb__251__Vfuncout = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__251__verb_enum;
            __Vtask_m_convert_verb__251__verb_enum = 0;
            IData/*31:0*/ __Vfunc_uvm_is_match__253____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__253____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__255__Vfuncout;
            __Vfunc_uvm_re_match__255__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__255____Vincrement1;
            __Vfunc_uvm_re_match__255____Vincrement1 = 0;
            std::string __Vtemp_1;
            // Body
            CData/*0:0*/ __VlefCall_3__uvm_is_match;
            std::string __VlefCall_2__get_full_name;
            CData/*0:0*/ __VlefLogAnd_1;
            CData/*0:0*/ __VlefCall_0__m_convert_verb;
            VlQueue<std::string> unnamedblk208__DOT__t;
            Vtb_rng_m_verbosity_setting__struct__0 unnamedblk208__DOT__setting;
            IData/*31:0*/ unnamedblk208__DOT__unnamedblk209__DOT__i;
            unnamedblk208__DOT__unnamedblk209__DOT__i = 0;
            IData/*31:0*/ unnamedblk210__DOT__i;
            unnamedblk210__DOT__i = 0;
            Vtb_rng_m_verbosity_setting__struct__0 unnamedblk210__DOT__unnamedblk211__DOT__setting;
            VlQueue<std::string> args;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> clp;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            args.clear();
            args.atDefault().clear();
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
            VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3069)
                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first) {
                unnamedblk208__DOT__t.clear();
                unnamedblk208__DOT__t.atDefault().clear();
                unnamedblk208__DOT__setting.__PVT__comp.clear();
                unnamedblk208__DOT__setting.__PVT__phase.clear();
                unnamedblk208__DOT__setting.__PVT__offset = 0;
                unnamedblk208__DOT__setting.__PVT__verbosity = 0;
                unnamedblk208__DOT__setting.__PVT__id.clear();
                VL_NULL_CHECK(clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3074)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values, __Vtask_get_arg_values__246__Vfuncout);
                unnamedblk208__DOT__unnamedblk209__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk208__DOT__unnamedblk209__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())) {
                    args.clear();
                    __Vtask_uvm_split_string__247__sep = 0x2cU;
                    this->__Vtask_uvm_split_string__247__str 
                        = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk208__DOT__unnamedblk209__DOT__i));
                    __Vtask_uvm_split_string__247__s = 0U;
                    __Vtask_uvm_split_string__247__e = 0U;
                    args.clear();
                    while (VL_LTS_III(32, __Vtask_uvm_split_string__247__e, 
                                      VL_LEN_IN(this->__Vtask_uvm_split_string__247__str))) {
                        __Vtask_uvm_split_string__247__s 
                            = __Vtask_uvm_split_string__247__e;
                        {
                            while (VL_LTS_III(32, __Vtask_uvm_split_string__247__e, 
                                              VL_LEN_IN(this->__Vtask_uvm_split_string__247__str))) {
                                if ((VL_GETC_N(this->__Vtask_uvm_split_string__247__str,__Vtask_uvm_split_string__247__e) 
                                     == (IData)(__Vtask_uvm_split_string__247__sep))) {
                                    goto __Vlabel0;
                                } else {
                                    ++(vlSymsp->__Vcoverage[482]);
                                }
                                __Vtask_uvm_split_string__247__e 
                                    = ((IData)(1U) 
                                       + __Vtask_uvm_split_string__247__e);
                                ++(vlSymsp->__Vcoverage[483]);
                            }
                            __Vlabel0: ;
                        }
                        if ((__Vtask_uvm_split_string__247__s 
                             != __Vtask_uvm_split_string__247__e)) {
                            args.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__247__str,__Vtask_uvm_split_string__247__s,
                                                       (__Vtask_uvm_split_string__247__e 
                                                        - (IData)(1U))));
                            ++(vlSymsp->__Vcoverage[484]);
                        } else {
                            ++(vlSymsp->__Vcoverage[485]);
                        }
                        __Vtask_uvm_split_string__247__e 
                            = ((IData)(1U) + __Vtask_uvm_split_string__247__e);
                        ++(vlSymsp->__Vcoverage[486]);
                    }
                    ++(vlSymsp->__Vcoverage[487]);
                    __VlefLogAnd_1 = ((4U == args.size()) 
                                      | (5U == args.size()));
                    if (__VlefLogAnd_1) {
                        VL_NULL_CHECK(clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3078)
                                           ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(args.at(2U)), __Vtask_m_convert_verb__248__verb_enum, __VlefCall_0__m_convert_verb);
                        unnamedblk208__DOT__setting
                                           .__PVT__verbosity 
                            = __Vtask_m_convert_verb__248__verb_enum;
                        __VlefLogAnd_1 = __VlefCall_0__m_convert_verb;
                    }
                    if (__VlefLogAnd_1) {
                        unnamedblk208__DOT__t.push_back(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk208__DOT__unnamedblk209__DOT__i));
                        ++(vlSymsp->__Vcoverage[17127]);
                    } else {
                        __Vtemp_1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk208__DOT__unnamedblk209__DOT__i);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/CMDLINE"s, VL_SFORMATF_N_NX("argument %@ not recognized and therefore dropped",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, ""s, 0U, ""s, 0U);
                        ++(vlSymsp->__Vcoverage[17128]);
                    }
                    unnamedblk208__DOT__unnamedblk209__DOT__i 
                        = ((IData)(1U) + unnamedblk208__DOT__unnamedblk209__DOT__i);
                    ++(vlSymsp->__Vcoverage[17129]);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values 
                    = unnamedblk208__DOT__t;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first = 0U;
                ++(vlSymsp->__Vcoverage[17130]);
            } else {
                ++(vlSymsp->__Vcoverage[17131]);
            }
            unnamedblk210__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk210__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())) {
                unnamedblk210__DOT__unnamedblk211__DOT__setting.__PVT__comp.clear();
                unnamedblk210__DOT__unnamedblk211__DOT__setting.__PVT__phase.clear();
                unnamedblk210__DOT__unnamedblk211__DOT__setting.__PVT__offset = 0;
                unnamedblk210__DOT__unnamedblk211__DOT__setting.__PVT__verbosity = 0;
                unnamedblk210__DOT__unnamedblk211__DOT__setting.__PVT__id.clear();
                args.clear();
                __Vtask_uvm_split_string__250__sep = 0x2cU;
                this->__Vtask_uvm_split_string__250__str 
                    = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk210__DOT__i));
                __Vtask_uvm_split_string__250__s = 0U;
                __Vtask_uvm_split_string__250__e = 0U;
                args.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__250__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__250__str))) {
                    __Vtask_uvm_split_string__250__s 
                        = __Vtask_uvm_split_string__250__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__250__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__250__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__250__str,__Vtask_uvm_split_string__250__e) 
                                 == (IData)(__Vtask_uvm_split_string__250__sep))) {
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[482]);
                            }
                            __Vtask_uvm_split_string__250__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__250__e);
                            ++(vlSymsp->__Vcoverage[483]);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__250__s 
                         != __Vtask_uvm_split_string__250__e)) {
                        args.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__250__str,__Vtask_uvm_split_string__250__s,
                                                   (__Vtask_uvm_split_string__250__e 
                                                    - (IData)(1U))));
                        ++(vlSymsp->__Vcoverage[484]);
                    } else {
                        ++(vlSymsp->__Vcoverage[485]);
                    }
                    __Vtask_uvm_split_string__250__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__250__e);
                    ++(vlSymsp->__Vcoverage[486]);
                }
                ++(vlSymsp->__Vcoverage[487]);
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__comp 
                    = args.at(0U);
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__id 
                    = args.at(1U);
                VL_NULL_CHECK(clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3096)
                                           ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(args.at(2U)), __Vtask_m_convert_verb__251__verb_enum, __Vtask_m_convert_verb__251__Vfuncout);
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__verbosity 
                    = __Vtask_m_convert_verb__251__verb_enum;
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__phase 
                    = args.at(3U);
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__offset = 0ULL;
                if ((5U == args.size())) {
                    unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__offset 
                        = VL_EXTENDS_QI(64,32, VL_ATOI_N(args.at(4U), 10));
                    ++(vlSymsp->__Vcoverage[17132]);
                } else {
                    ++(vlSymsp->__Vcoverage[17133]);
                }
                if ((("time"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                      .__PVT__phase) & (VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this} 
                                        == top))) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.push_back(unnamedblk210__DOT__unnamedblk211__DOT__setting);
                    ++(vlSymsp->__Vcoverage[17134]);
                } else {
                    ++(vlSymsp->__Vcoverage[17135]);
                }
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                this->__Vfunc_uvm_is_match__253__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
                this->__Vfunc_uvm_is_match__253__expr 
                    = VL_CVT_PACK_STR_NN(unnamedblk210__DOT__unnamedblk211__DOT__setting
                                         .__PVT__comp);
                this->__Vfunc_uvm_glob_to_re__254__glob 
                    = this->__Vfunc_uvm_is_match__253__expr;
                this->__Vfunc_uvm_glob_to_re__254__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__254__glob;
                ++(vlSymsp->__Vcoverage[283]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__254__Vfuncout;
                this->__Vfunc_uvm_re_match__255__str 
                    = this->__Vfunc_uvm_is_match__253__str;
                this->__Vfunc_uvm_re_match__255__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__255____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__255__re))) {
                        __Vfunc_uvm_re_match__255__Vfuncout = 0U;
                        goto __Vlabel2;
                    } else {
                        ++(vlSymsp->__Vcoverage[255]);
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,0U))) {
                        this->__Vfunc_uvm_re_match__255__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__255__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__255__re) 
                                           - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[256]);
                    } else {
                        ++(vlSymsp->__Vcoverage[257]);
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__255__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__255__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__255__Vfuncout = 1U;
                            goto __Vlabel2;
                        } else {
                            ++(vlSymsp->__Vcoverage[262]);
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        ++(vlSymsp->__Vcoverage[266]);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__255__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__255__re))) {
                                __Vfunc_uvm_re_match__255__Vfuncout = 0U;
                                goto __Vlabel2;
                            } else {
                                ++(vlSymsp->__Vcoverage[268]);
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[274]);
                        } else {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  == VL_GETC_N(this->__Vfunc_uvm_re_match__255__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                ++(vlSymsp->__Vcoverage[269]);
                            } else {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match__255____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__255____Vincrement1;
                                ++(vlSymsp->__Vcoverage[270]);
                            }
                            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                ++(vlSymsp->__Vcoverage[271]);
                            }
                            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__255__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                ++(vlSymsp->__Vcoverage[272]);
                            }
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__255__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                ++(vlSymsp->__Vcoverage[273]);
                            }
                        }
                        ++(vlSymsp->__Vcoverage[275]);
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__255__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        ++(vlSymsp->__Vcoverage[279]);
                    }
                    __Vfunc_uvm_re_match__255__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__255__re))
                            ? 0U : 1U);
                    __Vlabel2: ;
                }
                if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                      != VL_LEN_IN(this->__Vfunc_uvm_re_match__255__str)) 
                     & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[258]);
                }
                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[259]);
                }
                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__255__str))) {
                    ++(vlSymsp->__Vcoverage[260]);
                }
                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                      != VL_GETC_N(this->__Vfunc_uvm_re_match__255__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[263]);
                }
                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[264]);
                }
                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                     == VL_GETC_N(this->__Vfunc_uvm_re_match__255__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                    ++(vlSymsp->__Vcoverage[265]);
                }
                if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__255__re)) 
                     & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[276]);
                }
                if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[277]);
                }
                if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__255__re))) {
                    ++(vlSymsp->__Vcoverage[278]);
                }
                ++(vlSymsp->__Vcoverage[282]);
                __Vfunc_uvm_is_match__253____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__255__Vfuncout;
                __VlefCall_3__uvm_is_match = (0U == __Vfunc_uvm_is_match__253____VlefCall_0__uvm_re_match);
                ++(vlSymsp->__Vcoverage[462]);
                if (__VlefCall_3__uvm_is_match) {
                    if (((((""s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                            .__PVT__phase) | ("build"s 
                                              == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                              .__PVT__phase)) 
                          | ("time"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                             .__PVT__phase)) & (0ULL 
                                                == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                .__PVT__offset))) {
                        if (("_ALL_"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                             .__PVT__id)) {
                            this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                                         .__PVT__verbosity);
                            ++(vlSymsp->__Vcoverage[17136]);
                        } else {
                            this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                                      VL_CVT_PACK_STR_NN(unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                                                .__PVT__id), unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                                      .__PVT__verbosity);
                            ++(vlSymsp->__Vcoverage[17137]);
                        }
                        ++(vlSymsp->__Vcoverage[17140]);
                    } else {
                        if (("time"s != unnamedblk210__DOT__unnamedblk211__DOT__setting
                             .__PVT__phase)) {
                            this->__PVT__m_verbosity_settings.push_back(unnamedblk210__DOT__unnamedblk211__DOT__setting);
                            ++(vlSymsp->__Vcoverage[17138]);
                        } else {
                            ++(vlSymsp->__Vcoverage[17139]);
                        }
                        ++(vlSymsp->__Vcoverage[17141]);
                    }
                    if ((("time"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                          .__PVT__phase) & (0ULL == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                            .__PVT__offset))) {
                        ++(vlSymsp->__Vcoverage[17142]);
                    }
                    if ((("build"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                          .__PVT__phase) & (0ULL == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                            .__PVT__offset))) {
                        ++(vlSymsp->__Vcoverage[17143]);
                    }
                    if (((""s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                          .__PVT__phase) & (0ULL == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                            .__PVT__offset))) {
                        ++(vlSymsp->__Vcoverage[17144]);
                    }
                    if ((0ULL != unnamedblk210__DOT__unnamedblk211__DOT__setting
                         .__PVT__offset)) {
                        ++(vlSymsp->__Vcoverage[17145]);
                    }
                    if ((1U & (((~ (""s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                    .__PVT__phase)) 
                                & (~ ("build"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                      .__PVT__phase))) 
                               & (~ ("time"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                     .__PVT__phase))))) {
                        ++(vlSymsp->__Vcoverage[17146]);
                    }
                    ++(vlSymsp->__Vcoverage[17147]);
                } else {
                    ++(vlSymsp->__Vcoverage[17148]);
                }
                unnamedblk210__DOT__i = ((IData)(1U) 
                                         + unnamedblk210__DOT__i);
                ++(vlSymsp->__Vcoverage[17149]);
            }
            if ((VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>{this} 
                 == top)) {
                this->__VnoInFunc_m_set_cl_verb____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, top);
                ++(vlSymsp->__Vcoverage[17157]);
            } else {
                ++(vlSymsp->__Vcoverage[17158]);
            }
            ++(vlSymsp->__Vcoverage[17159]);
        }

        VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb____Vfork_1__0\n"); );
            // Locals
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask___VforkTask_0__258__top;
            IData/*31:0*/ __Vtask___VforkTask_0__258__unnamedblk213__DOT__i;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__i = 0;
            VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps;
            IData/*31:0*/ __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j = 0;
            IData/*31:0*/ __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j = 0;
            QData/*63:0*/ __Vtask___VforkTask_0__258__last_time;
            __Vtask___VforkTask_0__258__last_time = 0;
            // Body
            VL_KEEP_THIS;
            __Vtask___VforkTask_0__258__top = top;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__i = 0U;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j = 0U;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j = 0U;
            co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 
                                                    3123);
            __Vtask___VforkTask_0__258__last_time = 0ULL;
            if (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.sort(
                                                                                [&](
                                                                                IData/*31:0*/ item__DOT__index, 
                                                                                Vtb_rng_m_verbosity_setting__struct__0 item) -> 
                                                                                QData/*63:0*/ {
                        return (item.__PVT__offset);
                    }
                );
                ++(vlSymsp->__Vcoverage[17150]);
            } else {
                ++(vlSymsp->__Vcoverage[17151]);
            }
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask___VforkTask_0__258__unnamedblk213__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
                __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.clear();
                VL_NULL_CHECK(__Vtask___VforkTask_0__258__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3129)
                                           ->__VnoInFunc_find_all(vlProcess, vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                                                .__PVT__comp), __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps, VlNull{});
                co_await vlSymsp->TOP.__VdlySched.delay(
                                                        (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                         .__PVT__offset 
                                                         - __Vtask___VforkTask_0__258__last_time), 
                                                        vlProcess, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 
                                                        3130);
                __Vtask___VforkTask_0__258__last_time 
                    = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                    .__PVT__offset;
                if (("_ALL_"s == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                     .__PVT__id)) {
                    __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j = 0U;
                    while (VL_LTS_III(32, __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j, __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.size())) {
                        VL_NULL_CHECK(__Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3134)
                                           ->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                                                .__PVT__verbosity);
                        __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j 
                            = ((IData)(1U) + __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j);
                        ++(vlSymsp->__Vcoverage[17152]);
                    }
                    ++(vlSymsp->__Vcoverage[17154]);
                } else {
                    __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j = 0U;
                    while (VL_LTS_III(32, __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j, __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.size())) {
                        VL_NULL_CHECK(__Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3139)
                                           ->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                                                .__PVT__id), vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                                                .__PVT__verbosity);
                        __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j 
                            = ((IData)(1U) + __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j);
                        ++(vlSymsp->__Vcoverage[17153]);
                    }
                    ++(vlSymsp->__Vcoverage[17155]);
                }
                __Vtask___VforkTask_0__258__unnamedblk213__DOT__i 
                    = ((IData)(1U) + __Vtask___VforkTask_0__258__unnamedblk213__DOT__i);
                ++(vlSymsp->__Vcoverage[17156]);
            }
            vlProcess->state(VlProcess::FINISHED);
            co_return;
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__263__Vfuncout;
            __Vtask_get_arg_values__263__Vfuncout = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__264__sep;
            __Vtask_uvm_split_string__264__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__264__s;
            __Vtask_uvm_split_string__264__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__264__e;
            __Vtask_uvm_split_string__264__e = 0;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__267__sev;
            __Vfunc_uvm_string_to_severity__267__sev = 0;
            IData/*31:0*/ __Vfunc_uvm_string_to_action__270__action;
            __Vfunc_uvm_string_to_action__270__action = 0;
            IData/*31:0*/ __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i;
            __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i = 0;
            VlQueue<std::string> __Vfunc_uvm_string_to_action__270__actions;
            CData/*7:0*/ __Vtask_uvm_split_string__271__sep;
            __Vtask_uvm_split_string__271__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__271__s;
            __Vtask_uvm_split_string__271__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__271__e;
            __Vtask_uvm_split_string__271__e = 0;
            IData/*31:0*/ __Vfunc_uvm_is_match__275____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__275____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__277__Vfuncout;
            __Vfunc_uvm_re_match__277__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__277____Vincrement1;
            __Vfunc_uvm_re_match__277____Vincrement1 = 0;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__278__sev;
            __Vtask_uvm_string_to_severity__278__sev = 0;
            IData/*31:0*/ __Vtask_uvm_string_to_action__279__action;
            __Vtask_uvm_string_to_action__279__action = 0;
            IData/*31:0*/ __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i;
            __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i = 0;
            VlQueue<std::string> __Vtask_uvm_string_to_action__279__actions;
            CData/*7:0*/ __Vtask_uvm_split_string__280__sep;
            __Vtask_uvm_split_string__280__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__280__s;
            __Vtask_uvm_split_string__280__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__280__e;
            __Vtask_uvm_split_string__280__e = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            std::string __Vtemp_3;
            std::string __Vtemp_4;
            std::string __Vtemp_5;
            // Body
            CData/*0:0*/ __VlefCall_6__uvm_is_match;
            std::string __VlefCall_5__get_full_name;
            IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
            IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
            CData/*0:0*/ __VlefLogAnd_2;
            CData/*0:0*/ __VlefCall_1__uvm_string_to_severity;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            VlQueue<std::string> unnamedblk217__DOT__values;
            IData/*31:0*/ unnamedblk217__DOT__unnamedblk218__DOT__idx;
            unnamedblk217__DOT__unnamedblk218__DOT__idx = 0;
            Vtb_rng_uvm_cmdline_parsed_arg_t__struct__0 unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t;
            VlQueue<std::string> unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args;
            IData/*31:0*/ unnamedblk220__DOT__i;
            unnamedblk220__DOT__i = 0;
            VlQueue<std::string> unnamedblk220__DOT__unnamedblk221__DOT__args;
            CData/*0:0*/ __VExpr_haf090ce8__0;
            __VExpr_haf090ce8__0 = 0;
            CData/*1:0*/ sev;
            IData/*31:0*/ action;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> uvm_cmdline_proc;
            sev = 0U;
            action = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, uvm_cmdline_proc);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized) {
                ++(vlSymsp->__Vcoverage[17176]);
            } else {
                unnamedblk217__DOT__values.clear();
                unnamedblk217__DOT__values.atDefault().clear();
                VL_NULL_CHECK(uvm_cmdline_proc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3162)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_action="s, unnamedblk217__DOT__values, __Vtask_get_arg_values__263__Vfuncout);
                unnamedblk217__DOT__unnamedblk218__DOT__idx = 0U;
                while (VL_LTS_III(32, unnamedblk217__DOT__unnamedblk218__DOT__idx, unnamedblk217__DOT__values.size())) {
                    {
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t.__PVT__arg.clear();
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t.__PVT__args.clear();
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t.__PVT__args.atDefault().clear();
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t.__PVT__used = 0;
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.clear();
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.atDefault().clear();
                        __Vtask_uvm_split_string__264__sep = 0x2cU;
                        this->__Vtask_uvm_split_string__264__str 
                            = VL_CVT_PACK_STR_NN(unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx));
                        __Vtask_uvm_split_string__264__s = 0U;
                        __Vtask_uvm_split_string__264__e = 0U;
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.clear();
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__264__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__264__str))) {
                            __Vtask_uvm_split_string__264__s 
                                = __Vtask_uvm_split_string__264__e;
                            {
                                while (VL_LTS_III(32, __Vtask_uvm_split_string__264__e, 
                                                  VL_LEN_IN(this->__Vtask_uvm_split_string__264__str))) {
                                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__264__str,__Vtask_uvm_split_string__264__e) 
                                         == (IData)(__Vtask_uvm_split_string__264__sep))) {
                                        goto __Vlabel1;
                                    } else {
                                        ++(vlSymsp->__Vcoverage[482]);
                                    }
                                    __Vtask_uvm_split_string__264__e 
                                        = ((IData)(1U) 
                                           + __Vtask_uvm_split_string__264__e);
                                    ++(vlSymsp->__Vcoverage[483]);
                                }
                                __Vlabel1: ;
                            }
                            if ((__Vtask_uvm_split_string__264__s 
                                 != __Vtask_uvm_split_string__264__e)) {
                                unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__264__str,__Vtask_uvm_split_string__264__s,
                                                                                (__Vtask_uvm_split_string__264__e 
                                                                                - (IData)(1U))));
                                ++(vlSymsp->__Vcoverage[484]);
                            } else {
                                ++(vlSymsp->__Vcoverage[485]);
                            }
                            __Vtask_uvm_split_string__264__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__264__e);
                            ++(vlSymsp->__Vcoverage[486]);
                        }
                        ++(vlSymsp->__Vcoverage[487]);
                        if ((4U != unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.size())) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_0__uvm_report_enabled);
                            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                __Vtemp_1 = unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("+uvm_set_action requires 4 arguments, but %0d given for command +uvm_set_action=%@, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",0,
                                                                                32,
                                                                                unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.size(),
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000c61U, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[17160]);
                            } else {
                                ++(vlSymsp->__Vcoverage[17161]);
                            }
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[17163]);
                        }
                        __VlefLogAnd_2 = ("_ALL_"s 
                                          != unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(2U));
                        if (__VlefLogAnd_2) {
                            this->__Vfunc_uvm_string_to_severity__267__sev_str 
                                = VL_CVT_PACK_STR_NN(unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(2U));
                            {
                                __Vfunc_uvm_string_to_severity__267__sev = 0U;
                                if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__267__sev_str)) {
                                    __Vfunc_uvm_string_to_severity__267__sev = 0U;
                                    ++(vlSymsp->__Vcoverage[445]);
                                } else if (("UVM_WARNING"s 
                                            == this->__Vfunc_uvm_string_to_severity__267__sev_str)) {
                                    __Vfunc_uvm_string_to_severity__267__sev = 1U;
                                    ++(vlSymsp->__Vcoverage[446]);
                                } else if (("UVM_ERROR"s 
                                            == this->__Vfunc_uvm_string_to_severity__267__sev_str)) {
                                    __Vfunc_uvm_string_to_severity__267__sev = 2U;
                                    ++(vlSymsp->__Vcoverage[447]);
                                } else if (("UVM_FATAL"s 
                                            == this->__Vfunc_uvm_string_to_severity__267__sev_str)) {
                                    __Vfunc_uvm_string_to_severity__267__sev = 3U;
                                    ++(vlSymsp->__Vcoverage[448]);
                                } else {
                                    __VlefCall_1__uvm_string_to_severity = 0U;
                                    goto __Vlabel2;
                                }
                                __VlefCall_1__uvm_string_to_severity = 1U;
                                __Vlabel2: ;
                            }
                            ++(vlSymsp->__Vcoverage[450]);
                            sev = __Vfunc_uvm_string_to_severity__267__sev;
                            __VlefLogAnd_2 = (1U & 
                                              (~ (IData)(__VlefCall_1__uvm_string_to_severity)));
                        }
                        if (__VlefLogAnd_2) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_3__uvm_report_enabled);
                            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                                __Vtemp_2 = unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(2U);
                                __Vtemp_3 = unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%@\" given to command +uvm_set_action=%@, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__Vtemp_3)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000c65U, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[17164]);
                            } else {
                                ++(vlSymsp->__Vcoverage[17165]);
                            }
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[17167]);
                        }
                        this->__Vfunc_uvm_string_to_action__270__action_str 
                            = VL_CVT_PACK_STR_NN(unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(3U));
                        __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i = 0U;
                        __VExpr_haf090ce8__0 = 0U;
                        __Vfunc_uvm_string_to_action__270__action = 0U;
                        __Vfunc_uvm_string_to_action__270__actions.clear();
                        __Vfunc_uvm_string_to_action__270__actions.atDefault().clear();
                        __Vtask_uvm_split_string__271__sep = 0x7cU;
                        this->__Vtask_uvm_split_string__271__str 
                            = this->__Vfunc_uvm_string_to_action__270__action_str;
                        __Vtask_uvm_split_string__271__s = 0U;
                        __Vtask_uvm_split_string__271__e = 0U;
                        __Vfunc_uvm_string_to_action__270__actions.clear();
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__271__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__271__str))) {
                            __Vtask_uvm_split_string__271__s 
                                = __Vtask_uvm_split_string__271__e;
                            {
                                while (VL_LTS_III(32, __Vtask_uvm_split_string__271__e, 
                                                  VL_LEN_IN(this->__Vtask_uvm_split_string__271__str))) {
                                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__271__str,__Vtask_uvm_split_string__271__e) 
                                         == (IData)(__Vtask_uvm_split_string__271__sep))) {
                                        goto __Vlabel3;
                                    } else {
                                        ++(vlSymsp->__Vcoverage[482]);
                                    }
                                    __Vtask_uvm_split_string__271__e 
                                        = ((IData)(1U) 
                                           + __Vtask_uvm_split_string__271__e);
                                    ++(vlSymsp->__Vcoverage[483]);
                                }
                                __Vlabel3: ;
                            }
                            if ((__Vtask_uvm_split_string__271__s 
                                 != __Vtask_uvm_split_string__271__e)) {
                                __Vfunc_uvm_string_to_action__270__actions.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__271__str,__Vtask_uvm_split_string__271__s,
                                                                                (__Vtask_uvm_split_string__271__e 
                                                                                - (IData)(1U))));
                                ++(vlSymsp->__Vcoverage[484]);
                            } else {
                                ++(vlSymsp->__Vcoverage[485]);
                            }
                            __Vtask_uvm_split_string__271__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__271__e);
                            ++(vlSymsp->__Vcoverage[486]);
                        }
                        ++(vlSymsp->__Vcoverage[487]);
                        __VExpr_haf090ce8__0 = 1U;
                        __Vfunc_uvm_string_to_action__270__action = 0U;
                        __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i = 0U;
                        while (VL_LTS_III(32, __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i, __Vfunc_uvm_string_to_action__270__actions.size())) {
                            if ((((((((("UVM_NO_ACTION"s 
                                        == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i)) 
                                       | ("UVM_DISPLAY"s 
                                          == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                      | ("UVM_LOG"s 
                                         == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                     | ("UVM_COUNT"s 
                                        == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                    | ("UVM_EXIT"s 
                                       == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                   | ("UVM_CALL_HOOK"s 
                                      == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                  | ("UVM_STOP"s == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                 | ("UVM_RM_RECORD"s 
                                    == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i)))) {
                                if (("UVM_NO_ACTION"s 
                                     == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) {
                                    ++(vlSymsp->__Vcoverage[451]);
                                } else if (("UVM_DISPLAY"s 
                                            == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) {
                                    __Vfunc_uvm_string_to_action__270__action 
                                        = (1U | __Vfunc_uvm_string_to_action__270__action);
                                    ++(vlSymsp->__Vcoverage[452]);
                                } else if (("UVM_LOG"s 
                                            == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) {
                                    __Vfunc_uvm_string_to_action__270__action 
                                        = (2U | __Vfunc_uvm_string_to_action__270__action);
                                    ++(vlSymsp->__Vcoverage[453]);
                                } else if (("UVM_COUNT"s 
                                            == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) {
                                    __Vfunc_uvm_string_to_action__270__action 
                                        = (4U | __Vfunc_uvm_string_to_action__270__action);
                                    ++(vlSymsp->__Vcoverage[454]);
                                } else if (("UVM_EXIT"s 
                                            == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) {
                                    __Vfunc_uvm_string_to_action__270__action 
                                        = (8U | __Vfunc_uvm_string_to_action__270__action);
                                    ++(vlSymsp->__Vcoverage[455]);
                                } else if (("UVM_CALL_HOOK"s 
                                            == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) {
                                    __Vfunc_uvm_string_to_action__270__action 
                                        = (0x00000010U 
                                           | __Vfunc_uvm_string_to_action__270__action);
                                    ++(vlSymsp->__Vcoverage[456]);
                                } else if (("UVM_STOP"s 
                                            == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) {
                                    __Vfunc_uvm_string_to_action__270__action 
                                        = (0x00000020U 
                                           | __Vfunc_uvm_string_to_action__270__action);
                                    ++(vlSymsp->__Vcoverage[457]);
                                } else {
                                    __Vfunc_uvm_string_to_action__270__action 
                                        = (0x00000040U 
                                           | __Vfunc_uvm_string_to_action__270__action);
                                    ++(vlSymsp->__Vcoverage[458]);
                                }
                            } else {
                                __VExpr_haf090ce8__0 = 0U;
                                ++(vlSymsp->__Vcoverage[459]);
                            }
                            __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i 
                                = ((IData)(1U) + __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i);
                            ++(vlSymsp->__Vcoverage[460]);
                        }
                        ++(vlSymsp->__Vcoverage[461]);
                        action = __Vfunc_uvm_string_to_action__270__action;
                        if (__VExpr_haf090ce8__0) {
                            ++(vlSymsp->__Vcoverage[17171]);
                        } else {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_4__uvm_report_enabled);
                            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                                __Vtemp_4 = unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(3U);
                                __Vtemp_5 = unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad action argument \"%@\" given to command +uvm_set_action=%@, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000c69U, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[17168]);
                            } else {
                                ++(vlSymsp->__Vcoverage[17169]);
                            }
                            goto __Vlabel0;
                        }
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t
                                           .__PVT__args 
                            = unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args;
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t
                                           .__PVT__arg 
                            = unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.push_back(unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t);
                        __Vlabel0: ;
                    }
                    unnamedblk217__DOT__unnamedblk218__DOT__idx 
                        = ((IData)(1U) + unnamedblk217__DOT__unnamedblk218__DOT__idx);
                    ++(vlSymsp->__Vcoverage[17174]);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized = 1U;
                if ((1U & (~ (IData)(__VExpr_haf090ce8__0)))) {
                    ++(vlSymsp->__Vcoverage[17172]);
                }
                if (__VExpr_haf090ce8__0) {
                    ++(vlSymsp->__Vcoverage[17173]);
                }
                ++(vlSymsp->__Vcoverage[17175]);
            }
            unnamedblk220__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk220__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size())) {
                {
                    unnamedblk220__DOT__unnamedblk221__DOT__args 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk220__DOT__i)
                        .__PVT__args;
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    this->__Vfunc_uvm_is_match__275__str 
                        = VL_CVT_PACK_STR_NN(__VlefCall_5__get_full_name);
                    this->__Vfunc_uvm_is_match__275__expr 
                        = VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(0U));
                    this->__Vfunc_uvm_glob_to_re__276__glob 
                        = this->__Vfunc_uvm_is_match__275__expr;
                    this->__Vfunc_uvm_glob_to_re__276__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__276__glob;
                    ++(vlSymsp->__Vcoverage[283]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__276__Vfuncout;
                    this->__Vfunc_uvm_re_match__277__str 
                        = this->__Vfunc_uvm_is_match__275__str;
                    this->__Vfunc_uvm_re_match__277__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__277____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__277__re))) {
                            __Vfunc_uvm_re_match__277__Vfuncout = 0U;
                            goto __Vlabel5;
                        } else {
                            ++(vlSymsp->__Vcoverage[255]);
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,0U))) {
                            this->__Vfunc_uvm_re_match__277__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__277__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__277__re) 
                                               - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[256]);
                        } else {
                            ++(vlSymsp->__Vcoverage[257]);
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__277__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__277__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__277__Vfuncout = 1U;
                                goto __Vlabel5;
                            } else {
                                ++(vlSymsp->__Vcoverage[262]);
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[266]);
                        }
                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__277__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__277__re))) {
                                    __Vfunc_uvm_re_match__277__Vfuncout = 0U;
                                    goto __Vlabel5;
                                } else {
                                    ++(vlSymsp->__Vcoverage[268]);
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                ++(vlSymsp->__Vcoverage[274]);
                            } else {
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      == VL_GETC_N(this->__Vfunc_uvm_re_match__277__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                    ++(vlSymsp->__Vcoverage[269]);
                                } else {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                    __Vfunc_uvm_re_match__277____Vincrement1 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = __Vfunc_uvm_re_match__277____Vincrement1;
                                    ++(vlSymsp->__Vcoverage[270]);
                                }
                                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                    ++(vlSymsp->__Vcoverage[271]);
                                }
                                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__277__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                    ++(vlSymsp->__Vcoverage[272]);
                                }
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      != VL_GETC_N(this->__Vfunc_uvm_re_match__277__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    ++(vlSymsp->__Vcoverage[273]);
                                }
                            }
                            ++(vlSymsp->__Vcoverage[275]);
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__277__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            ++(vlSymsp->__Vcoverage[279]);
                        }
                        __Vfunc_uvm_re_match__277__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__277__re))
                                ? 0U : 1U);
                        __Vlabel5: ;
                    }
                    if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                          != VL_LEN_IN(this->__Vfunc_uvm_re_match__277__str)) 
                         & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[258]);
                    }
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[259]);
                    }
                    if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__277__str))) {
                        ++(vlSymsp->__Vcoverage[260]);
                    }
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__277__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[263]);
                    }
                    if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[264]);
                    }
                    if ((VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                         == VL_GETC_N(this->__Vfunc_uvm_re_match__277__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                        ++(vlSymsp->__Vcoverage[265]);
                    }
                    if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__277__re)) 
                         & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[276]);
                    }
                    if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[277]);
                    }
                    if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__277__re))) {
                        ++(vlSymsp->__Vcoverage[278]);
                    }
                    ++(vlSymsp->__Vcoverage[282]);
                    __Vfunc_uvm_is_match__275____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__277__Vfuncout;
                    __VlefCall_6__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__275____VlefCall_0__uvm_re_match);
                    ++(vlSymsp->__Vcoverage[462]);
                    if (__VlefCall_6__uvm_is_match) {
                        ++(vlSymsp->__Vcoverage[17180]);
                    } else {
                        goto __Vlabel4;
                    }
                    this->__Vtask_uvm_string_to_severity__278__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(2U));
                    __Vtask_uvm_string_to_severity__278__sev = 0U;
                    if (("UVM_INFO"s == this->__Vtask_uvm_string_to_severity__278__sev_str)) {
                        __Vtask_uvm_string_to_severity__278__sev = 0U;
                        ++(vlSymsp->__Vcoverage[445]);
                    } else if (("UVM_WARNING"s == this->__Vtask_uvm_string_to_severity__278__sev_str)) {
                        __Vtask_uvm_string_to_severity__278__sev = 1U;
                        ++(vlSymsp->__Vcoverage[446]);
                    } else if (("UVM_ERROR"s == this->__Vtask_uvm_string_to_severity__278__sev_str)) {
                        __Vtask_uvm_string_to_severity__278__sev = 2U;
                        ++(vlSymsp->__Vcoverage[447]);
                    } else if (("UVM_FATAL"s == this->__Vtask_uvm_string_to_severity__278__sev_str)) {
                        __Vtask_uvm_string_to_severity__278__sev = 3U;
                        ++(vlSymsp->__Vcoverage[448]);
                    }
                    ++(vlSymsp->__Vcoverage[450]);
                    sev = __Vtask_uvm_string_to_severity__278__sev;
                    this->__Vtask_uvm_string_to_action__279__action_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(3U));
                    __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i = 0U;
                    __Vtask_uvm_string_to_action__279__action = 0U;
                    __Vtask_uvm_string_to_action__279__actions.clear();
                    __Vtask_uvm_string_to_action__279__actions.atDefault().clear();
                    __Vtask_uvm_split_string__280__sep = 0x7cU;
                    this->__Vtask_uvm_split_string__280__str 
                        = this->__Vtask_uvm_string_to_action__279__action_str;
                    __Vtask_uvm_split_string__280__s = 0U;
                    __Vtask_uvm_split_string__280__e = 0U;
                    __Vtask_uvm_string_to_action__279__actions.clear();
                    while (VL_LTS_III(32, __Vtask_uvm_split_string__280__e, 
                                      VL_LEN_IN(this->__Vtask_uvm_split_string__280__str))) {
                        __Vtask_uvm_split_string__280__s 
                            = __Vtask_uvm_split_string__280__e;
                        {
                            while (VL_LTS_III(32, __Vtask_uvm_split_string__280__e, 
                                              VL_LEN_IN(this->__Vtask_uvm_split_string__280__str))) {
                                if ((VL_GETC_N(this->__Vtask_uvm_split_string__280__str,__Vtask_uvm_split_string__280__e) 
                                     == (IData)(__Vtask_uvm_split_string__280__sep))) {
                                    goto __Vlabel6;
                                } else {
                                    ++(vlSymsp->__Vcoverage[482]);
                                }
                                __Vtask_uvm_split_string__280__e 
                                    = ((IData)(1U) 
                                       + __Vtask_uvm_split_string__280__e);
                                ++(vlSymsp->__Vcoverage[483]);
                            }
                            __Vlabel6: ;
                        }
                        if ((__Vtask_uvm_split_string__280__s 
                             != __Vtask_uvm_split_string__280__e)) {
                            __Vtask_uvm_string_to_action__279__actions.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__280__str,__Vtask_uvm_split_string__280__s,
                                                                                (__Vtask_uvm_split_string__280__e 
                                                                                - (IData)(1U))));
                            ++(vlSymsp->__Vcoverage[484]);
                        } else {
                            ++(vlSymsp->__Vcoverage[485]);
                        }
                        __Vtask_uvm_split_string__280__e 
                            = ((IData)(1U) + __Vtask_uvm_split_string__280__e);
                        ++(vlSymsp->__Vcoverage[486]);
                    }
                    ++(vlSymsp->__Vcoverage[487]);
                    __Vtask_uvm_string_to_action__279__action = 0U;
                    __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i, __Vtask_uvm_string_to_action__279__actions.size())) {
                        if ((((((((("UVM_NO_ACTION"s 
                                    == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i)) 
                                   | ("UVM_DISPLAY"s 
                                      == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                                  | ("UVM_LOG"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                                 | ("UVM_COUNT"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                                | ("UVM_EXIT"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                               | ("UVM_CALL_HOOK"s 
                                  == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                              | ("UVM_STOP"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                             | ("UVM_RM_RECORD"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i)))) {
                            if (("UVM_NO_ACTION"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) {
                                ++(vlSymsp->__Vcoverage[451]);
                            } else if (("UVM_DISPLAY"s 
                                        == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) {
                                __Vtask_uvm_string_to_action__279__action 
                                    = (1U | __Vtask_uvm_string_to_action__279__action);
                                ++(vlSymsp->__Vcoverage[452]);
                            } else if (("UVM_LOG"s 
                                        == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) {
                                __Vtask_uvm_string_to_action__279__action 
                                    = (2U | __Vtask_uvm_string_to_action__279__action);
                                ++(vlSymsp->__Vcoverage[453]);
                            } else if (("UVM_COUNT"s 
                                        == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) {
                                __Vtask_uvm_string_to_action__279__action 
                                    = (4U | __Vtask_uvm_string_to_action__279__action);
                                ++(vlSymsp->__Vcoverage[454]);
                            } else if (("UVM_EXIT"s 
                                        == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) {
                                __Vtask_uvm_string_to_action__279__action 
                                    = (8U | __Vtask_uvm_string_to_action__279__action);
                                ++(vlSymsp->__Vcoverage[455]);
                            } else if (("UVM_CALL_HOOK"s 
                                        == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) {
                                __Vtask_uvm_string_to_action__279__action 
                                    = (0x00000010U 
                                       | __Vtask_uvm_string_to_action__279__action);
                                ++(vlSymsp->__Vcoverage[456]);
                            } else if (("UVM_STOP"s 
                                        == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) {
                                __Vtask_uvm_string_to_action__279__action 
                                    = (0x00000020U 
                                       | __Vtask_uvm_string_to_action__279__action);
                                ++(vlSymsp->__Vcoverage[457]);
                            } else {
                                __Vtask_uvm_string_to_action__279__action 
                                    = (0x00000040U 
                                       | __Vtask_uvm_string_to_action__279__action);
                                ++(vlSymsp->__Vcoverage[458]);
                            }
                        } else {
                            ++(vlSymsp->__Vcoverage[459]);
                        }
                        __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i);
                        ++(vlSymsp->__Vcoverage[460]);
                    }
                    ++(vlSymsp->__Vcoverage[461]);
                    action = __Vtask_uvm_string_to_action__279__action;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.atWriteAppend(unnamedblk220__DOT__i)
                                           .__PVT__used 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk220__DOT__i)
                           .__PVT__used);
                    if (("_ALL_"s == unnamedblk220__DOT__unnamedblk221__DOT__args.at(1U))) {
                        if (("_ALL_"s == unnamedblk220__DOT__unnamedblk221__DOT__args.at(2U))) {
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 0U, action);
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 1U, action);
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 2U, action);
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 3U, action);
                            ++(vlSymsp->__Vcoverage[17181]);
                        } else {
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, sev, action);
                            ++(vlSymsp->__Vcoverage[17182]);
                        }
                        ++(vlSymsp->__Vcoverage[17185]);
                    } else {
                        if (("_ALL_"s == unnamedblk220__DOT__unnamedblk221__DOT__args.at(2U))) {
                            this->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, 
                                                                   VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(1U)), action);
                            ++(vlSymsp->__Vcoverage[17183]);
                        } else {
                            this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, sev, 
                                                                            VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(1U)), action);
                            ++(vlSymsp->__Vcoverage[17184]);
                        }
                        ++(vlSymsp->__Vcoverage[17186]);
                    }
                    __Vlabel4: ;
                }
                unnamedblk220__DOT__i = ((IData)(1U) 
                                         + unnamedblk220__DOT__i);
                ++(vlSymsp->__Vcoverage[17187]);
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized)))) {
                ++(vlSymsp->__Vcoverage[17177]);
            }
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized) {
                ++(vlSymsp->__Vcoverage[17178]);
            }
            ++(vlSymsp->__Vcoverage[17188]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__289__Vfuncout;
            __Vtask_get_arg_values__289__Vfuncout = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__290__sep;
            __Vtask_uvm_split_string__290__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__290__s;
            __Vtask_uvm_split_string__290__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__290__e;
            __Vtask_uvm_split_string__290__e = 0;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__293__sev;
            __Vfunc_uvm_string_to_severity__293__sev = 0;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__296__sev;
            __Vfunc_uvm_string_to_severity__296__sev = 0;
            IData/*31:0*/ __Vfunc_uvm_is_match__300____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__300____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__302__Vfuncout;
            __Vfunc_uvm_re_match__302__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__302____Vincrement1;
            __Vfunc_uvm_re_match__302____Vincrement1 = 0;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__303__sev;
            __Vtask_uvm_string_to_severity__303__sev = 0;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__304__sev;
            __Vtask_uvm_string_to_severity__304__sev = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            std::string __Vtemp_3;
            std::string __Vtemp_4;
            std::string __Vtemp_5;
            // Body
            CData/*0:0*/ __VlefCall_7__uvm_is_match;
            std::string __VlefCall_6__get_full_name;
            IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
            CData/*0:0*/ __VlefCall_4__uvm_string_to_severity;
            IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
            CData/*0:0*/ __VlefLogAnd_2;
            CData/*0:0*/ __VlefCall_1__uvm_string_to_severity;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            VlQueue<std::string> unnamedblk222__DOT__values;
            IData/*31:0*/ unnamedblk222__DOT__unnamedblk223__DOT__idx;
            unnamedblk222__DOT__unnamedblk223__DOT__idx = 0;
            Vtb_rng_uvm_cmdline_parsed_arg_t__struct__0 unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t;
            VlQueue<std::string> unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args;
            IData/*31:0*/ unnamedblk225__DOT__i;
            unnamedblk225__DOT__i = 0;
            VlQueue<std::string> unnamedblk225__DOT__unnamedblk226__DOT__args;
            CData/*1:0*/ orig_sev;
            CData/*1:0*/ sev;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> uvm_cmdline_proc;
            orig_sev = 0U;
            sev = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, uvm_cmdline_proc);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized) {
                ++(vlSymsp->__Vcoverage[17203]);
            } else {
                unnamedblk222__DOT__values.clear();
                unnamedblk222__DOT__values.atDefault().clear();
                VL_NULL_CHECK(uvm_cmdline_proc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3234)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_severity="s, unnamedblk222__DOT__values, __Vtask_get_arg_values__289__Vfuncout);
                unnamedblk222__DOT__unnamedblk223__DOT__idx = 0U;
                while (VL_LTS_III(32, unnamedblk222__DOT__unnamedblk223__DOT__idx, unnamedblk222__DOT__values.size())) {
                    {
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t.__PVT__arg.clear();
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t.__PVT__args.clear();
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t.__PVT__args.atDefault().clear();
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t.__PVT__used = 0;
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.clear();
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.atDefault().clear();
                        __Vtask_uvm_split_string__290__sep = 0x2cU;
                        this->__Vtask_uvm_split_string__290__str 
                            = VL_CVT_PACK_STR_NN(unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx));
                        __Vtask_uvm_split_string__290__s = 0U;
                        __Vtask_uvm_split_string__290__e = 0U;
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.clear();
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__290__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__290__str))) {
                            __Vtask_uvm_split_string__290__s 
                                = __Vtask_uvm_split_string__290__e;
                            {
                                while (VL_LTS_III(32, __Vtask_uvm_split_string__290__e, 
                                                  VL_LEN_IN(this->__Vtask_uvm_split_string__290__str))) {
                                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__290__str,__Vtask_uvm_split_string__290__e) 
                                         == (IData)(__Vtask_uvm_split_string__290__sep))) {
                                        goto __Vlabel1;
                                    } else {
                                        ++(vlSymsp->__Vcoverage[482]);
                                    }
                                    __Vtask_uvm_split_string__290__e 
                                        = ((IData)(1U) 
                                           + __Vtask_uvm_split_string__290__e);
                                    ++(vlSymsp->__Vcoverage[483]);
                                }
                                __Vlabel1: ;
                            }
                            if ((__Vtask_uvm_split_string__290__s 
                                 != __Vtask_uvm_split_string__290__e)) {
                                unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__290__str,__Vtask_uvm_split_string__290__s,
                                                                                (__Vtask_uvm_split_string__290__e 
                                                                                - (IData)(1U))));
                                ++(vlSymsp->__Vcoverage[484]);
                            } else {
                                ++(vlSymsp->__Vcoverage[485]);
                            }
                            __Vtask_uvm_split_string__290__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__290__e);
                            ++(vlSymsp->__Vcoverage[486]);
                        }
                        ++(vlSymsp->__Vcoverage[487]);
                        if ((4U != unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.size())) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_0__uvm_report_enabled);
                            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                __Vtemp_1 = unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("+uvm_set_severity requires 4 arguments, but %0d given for command +uvm_set_severity=%@, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",0,
                                                                                32,
                                                                                unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.size(),
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000ca8U, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[17189]);
                            } else {
                                ++(vlSymsp->__Vcoverage[17190]);
                            }
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[17192]);
                        }
                        __VlefLogAnd_2 = ("_ALL_"s 
                                          != unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(2U));
                        if (__VlefLogAnd_2) {
                            this->__Vfunc_uvm_string_to_severity__293__sev_str 
                                = VL_CVT_PACK_STR_NN(unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(2U));
                            {
                                __Vfunc_uvm_string_to_severity__293__sev = 0U;
                                if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__293__sev_str)) {
                                    __Vfunc_uvm_string_to_severity__293__sev = 0U;
                                    ++(vlSymsp->__Vcoverage[445]);
                                } else if (("UVM_WARNING"s 
                                            == this->__Vfunc_uvm_string_to_severity__293__sev_str)) {
                                    __Vfunc_uvm_string_to_severity__293__sev = 1U;
                                    ++(vlSymsp->__Vcoverage[446]);
                                } else if (("UVM_ERROR"s 
                                            == this->__Vfunc_uvm_string_to_severity__293__sev_str)) {
                                    __Vfunc_uvm_string_to_severity__293__sev = 2U;
                                    ++(vlSymsp->__Vcoverage[447]);
                                } else if (("UVM_FATAL"s 
                                            == this->__Vfunc_uvm_string_to_severity__293__sev_str)) {
                                    __Vfunc_uvm_string_to_severity__293__sev = 3U;
                                    ++(vlSymsp->__Vcoverage[448]);
                                } else {
                                    __VlefCall_1__uvm_string_to_severity = 0U;
                                    goto __Vlabel2;
                                }
                                __VlefCall_1__uvm_string_to_severity = 1U;
                                __Vlabel2: ;
                            }
                            ++(vlSymsp->__Vcoverage[450]);
                            orig_sev = __Vfunc_uvm_string_to_severity__293__sev;
                            __VlefLogAnd_2 = (1U & 
                                              (~ (IData)(__VlefCall_1__uvm_string_to_severity)));
                        }
                        if (__VlefLogAnd_2) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_3__uvm_report_enabled);
                            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                                __Vtemp_2 = unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(2U);
                                __Vtemp_3 = unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%@\" given to command +uvm_set_severity=%@, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__Vtemp_3)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000cacU, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[17193]);
                            } else {
                                ++(vlSymsp->__Vcoverage[17194]);
                            }
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[17196]);
                        }
                        this->__Vfunc_uvm_string_to_severity__296__sev_str 
                            = VL_CVT_PACK_STR_NN(unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(3U));
                        {
                            __Vfunc_uvm_string_to_severity__296__sev = 0U;
                            if (("UVM_INFO"s == this->__Vfunc_uvm_string_to_severity__296__sev_str)) {
                                __Vfunc_uvm_string_to_severity__296__sev = 0U;
                                ++(vlSymsp->__Vcoverage[445]);
                            } else if (("UVM_WARNING"s 
                                        == this->__Vfunc_uvm_string_to_severity__296__sev_str)) {
                                __Vfunc_uvm_string_to_severity__296__sev = 1U;
                                ++(vlSymsp->__Vcoverage[446]);
                            } else if (("UVM_ERROR"s 
                                        == this->__Vfunc_uvm_string_to_severity__296__sev_str)) {
                                __Vfunc_uvm_string_to_severity__296__sev = 2U;
                                ++(vlSymsp->__Vcoverage[447]);
                            } else if (("UVM_FATAL"s 
                                        == this->__Vfunc_uvm_string_to_severity__296__sev_str)) {
                                __Vfunc_uvm_string_to_severity__296__sev = 3U;
                                ++(vlSymsp->__Vcoverage[448]);
                            } else {
                                __VlefCall_4__uvm_string_to_severity = 0U;
                                goto __Vlabel3;
                            }
                            __VlefCall_4__uvm_string_to_severity = 1U;
                            __Vlabel3: ;
                        }
                        ++(vlSymsp->__Vcoverage[450]);
                        sev = __Vfunc_uvm_string_to_severity__296__sev;
                        if (__VlefCall_4__uvm_string_to_severity) {
                            ++(vlSymsp->__Vcoverage[17200]);
                        } else {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_5__uvm_report_enabled);
                            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                                __Vtemp_4 = unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(3U);
                                __Vtemp_5 = unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%@\" given to command +uvm_set_severity=%@, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000cb0U, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[17197]);
                            } else {
                                ++(vlSymsp->__Vcoverage[17198]);
                            }
                            goto __Vlabel0;
                        }
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t
                                           .__PVT__args 
                            = unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args;
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t
                                           .__PVT__arg 
                            = unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.push_back(unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t);
                        __Vlabel0: ;
                    }
                    unnamedblk222__DOT__unnamedblk223__DOT__idx 
                        = ((IData)(1U) + unnamedblk222__DOT__unnamedblk223__DOT__idx);
                    ++(vlSymsp->__Vcoverage[17201]);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized = 1U;
                ++(vlSymsp->__Vcoverage[17202]);
            }
            unnamedblk225__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk225__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size())) {
                {
                    unnamedblk225__DOT__unnamedblk226__DOT__args 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk225__DOT__i)
                        .__PVT__args;
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                    this->__Vfunc_uvm_is_match__300__str 
                        = VL_CVT_PACK_STR_NN(__VlefCall_6__get_full_name);
                    this->__Vfunc_uvm_is_match__300__expr 
                        = VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(0U));
                    this->__Vfunc_uvm_glob_to_re__301__glob 
                        = this->__Vfunc_uvm_is_match__300__expr;
                    this->__Vfunc_uvm_glob_to_re__301__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__301__glob;
                    ++(vlSymsp->__Vcoverage[283]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__301__Vfuncout;
                    this->__Vfunc_uvm_re_match__302__str 
                        = this->__Vfunc_uvm_is_match__300__str;
                    this->__Vfunc_uvm_re_match__302__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__302____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__302__re))) {
                            __Vfunc_uvm_re_match__302__Vfuncout = 0U;
                            goto __Vlabel5;
                        } else {
                            ++(vlSymsp->__Vcoverage[255]);
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,0U))) {
                            this->__Vfunc_uvm_re_match__302__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__302__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__302__re) 
                                               - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[256]);
                        } else {
                            ++(vlSymsp->__Vcoverage[257]);
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__302__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__302__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__302__Vfuncout = 1U;
                                goto __Vlabel5;
                            } else {
                                ++(vlSymsp->__Vcoverage[262]);
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[266]);
                        }
                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__302__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__302__re))) {
                                    __Vfunc_uvm_re_match__302__Vfuncout = 0U;
                                    goto __Vlabel5;
                                } else {
                                    ++(vlSymsp->__Vcoverage[268]);
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                ++(vlSymsp->__Vcoverage[274]);
                            } else {
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      == VL_GETC_N(this->__Vfunc_uvm_re_match__302__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                    ++(vlSymsp->__Vcoverage[269]);
                                } else {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                    __Vfunc_uvm_re_match__302____Vincrement1 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = __Vfunc_uvm_re_match__302____Vincrement1;
                                    ++(vlSymsp->__Vcoverage[270]);
                                }
                                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                    ++(vlSymsp->__Vcoverage[271]);
                                }
                                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__302__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                    ++(vlSymsp->__Vcoverage[272]);
                                }
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      != VL_GETC_N(this->__Vfunc_uvm_re_match__302__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    ++(vlSymsp->__Vcoverage[273]);
                                }
                            }
                            ++(vlSymsp->__Vcoverage[275]);
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__302__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            ++(vlSymsp->__Vcoverage[279]);
                        }
                        __Vfunc_uvm_re_match__302__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__302__re))
                                ? 0U : 1U);
                        __Vlabel5: ;
                    }
                    if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                          != VL_LEN_IN(this->__Vfunc_uvm_re_match__302__str)) 
                         & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[258]);
                    }
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[259]);
                    }
                    if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__302__str))) {
                        ++(vlSymsp->__Vcoverage[260]);
                    }
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__302__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[263]);
                    }
                    if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[264]);
                    }
                    if ((VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                         == VL_GETC_N(this->__Vfunc_uvm_re_match__302__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                        ++(vlSymsp->__Vcoverage[265]);
                    }
                    if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__302__re)) 
                         & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[276]);
                    }
                    if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[277]);
                    }
                    if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__302__re))) {
                        ++(vlSymsp->__Vcoverage[278]);
                    }
                    ++(vlSymsp->__Vcoverage[282]);
                    __Vfunc_uvm_is_match__300____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__302__Vfuncout;
                    __VlefCall_7__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__300____VlefCall_0__uvm_re_match);
                    ++(vlSymsp->__Vcoverage[462]);
                    if (__VlefCall_7__uvm_is_match) {
                        ++(vlSymsp->__Vcoverage[17207]);
                    } else {
                        goto __Vlabel4;
                    }
                    this->__Vtask_uvm_string_to_severity__303__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(2U));
                    __Vtask_uvm_string_to_severity__303__sev = 0U;
                    if (("UVM_INFO"s == this->__Vtask_uvm_string_to_severity__303__sev_str)) {
                        __Vtask_uvm_string_to_severity__303__sev = 0U;
                        ++(vlSymsp->__Vcoverage[445]);
                    } else if (("UVM_WARNING"s == this->__Vtask_uvm_string_to_severity__303__sev_str)) {
                        __Vtask_uvm_string_to_severity__303__sev = 1U;
                        ++(vlSymsp->__Vcoverage[446]);
                    } else if (("UVM_ERROR"s == this->__Vtask_uvm_string_to_severity__303__sev_str)) {
                        __Vtask_uvm_string_to_severity__303__sev = 2U;
                        ++(vlSymsp->__Vcoverage[447]);
                    } else if (("UVM_FATAL"s == this->__Vtask_uvm_string_to_severity__303__sev_str)) {
                        __Vtask_uvm_string_to_severity__303__sev = 3U;
                        ++(vlSymsp->__Vcoverage[448]);
                    }
                    ++(vlSymsp->__Vcoverage[450]);
                    orig_sev = __Vtask_uvm_string_to_severity__303__sev;
                    this->__Vtask_uvm_string_to_severity__304__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(3U));
                    __Vtask_uvm_string_to_severity__304__sev = 0U;
                    if (("UVM_INFO"s == this->__Vtask_uvm_string_to_severity__304__sev_str)) {
                        __Vtask_uvm_string_to_severity__304__sev = 0U;
                        ++(vlSymsp->__Vcoverage[445]);
                    } else if (("UVM_WARNING"s == this->__Vtask_uvm_string_to_severity__304__sev_str)) {
                        __Vtask_uvm_string_to_severity__304__sev = 1U;
                        ++(vlSymsp->__Vcoverage[446]);
                    } else if (("UVM_ERROR"s == this->__Vtask_uvm_string_to_severity__304__sev_str)) {
                        __Vtask_uvm_string_to_severity__304__sev = 2U;
                        ++(vlSymsp->__Vcoverage[447]);
                    } else if (("UVM_FATAL"s == this->__Vtask_uvm_string_to_severity__304__sev_str)) {
                        __Vtask_uvm_string_to_severity__304__sev = 3U;
                        ++(vlSymsp->__Vcoverage[448]);
                    }
                    ++(vlSymsp->__Vcoverage[450]);
                    sev = __Vtask_uvm_string_to_severity__304__sev;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.atWriteAppend(unnamedblk225__DOT__i)
                                           .__PVT__used 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk225__DOT__i)
                           .__PVT__used);
                    if ((("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)) 
                         & ("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(2U)))) {
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 0U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 1U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 2U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 3U, (IData)(sev));
                        ++(vlSymsp->__Vcoverage[17211]);
                    } else if (("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U))) {
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, orig_sev, (IData)(sev));
                        ++(vlSymsp->__Vcoverage[17210]);
                    } else if (("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(2U))) {
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 0U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 1U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 2U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 3U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                        ++(vlSymsp->__Vcoverage[17208]);
                    } else {
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, orig_sev, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                        ++(vlSymsp->__Vcoverage[17209]);
                    }
                    __Vlabel4: ;
                }
                unnamedblk225__DOT__i = ((IData)(1U) 
                                         + unnamedblk225__DOT__i);
                ++(vlSymsp->__Vcoverage[17215]);
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized)))) {
                ++(vlSymsp->__Vcoverage[17204]);
            }
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized) {
                ++(vlSymsp->__Vcoverage[17205]);
            }
            if ((("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)) 
                 & ("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(2U)))) {
                ++(vlSymsp->__Vcoverage[17212]);
            }
            if ((1U & (~ ("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(2U))))) {
                ++(vlSymsp->__Vcoverage[17213]);
            }
            if ((1U & (~ ("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U))))) {
                ++(vlSymsp->__Vcoverage[17214]);
            }
            ++(vlSymsp->__Vcoverage[17216]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings\n"); );
            // Body
            std::string __VlefCall_0__get_name;
            VlClassRef<Vtb_rng_std__03a__03aprocess> unnamedblk227__DOT__p;
            std::string unnamedblk227__DOT__p_rand;
            IData/*31:0*/ i;
            i = 0U;
            while (VL_LTS_III(32, i, this->__PVT__m_verbosity_settings.size())) {
                {
                    VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3295)
                                           ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                    if ((__VlefCall_0__get_name == this->__PVT__m_verbosity_settings.at(i)
                         .__PVT__phase)) {
                        if ((0ULL == this->__PVT__m_verbosity_settings.at(i)
                             .__PVT__offset)) {
                            if (("_ALL_"s == this->__PVT__m_verbosity_settings.at(i)
                                 .__PVT__id)) {
                                this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, this->__PVT__m_verbosity_settings.at(i)
                                                                             .__PVT__verbosity);
                                ++(vlSymsp->__Vcoverage[17217]);
                            } else {
                                this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                                          VL_CVT_PACK_STR_NN(this->__PVT__m_verbosity_settings.at(i)
                                                                                .__PVT__id), this->__PVT__m_verbosity_settings.at(i)
                                                                          .__PVT__verbosity);
                                ++(vlSymsp->__Vcoverage[17218]);
                            }
                            ++(vlSymsp->__Vcoverage[17221]);
                        } else {
                            vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk227__DOT__p);
                            VL_NULL_CHECK(unnamedblk227__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3304)
                                           ->__VnoInFunc_get_randstate(vlSymsp, unnamedblk227__DOT__p_rand);
                            this->__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, i);
                            VL_NULL_CHECK(unnamedblk227__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3313)
                                           ->__VnoInFunc_set_randstate(vlSymsp, unnamedblk227__DOT__p_rand);
                            ++(vlSymsp->__Vcoverage[17222]);
                        }
                        this->__PVT__m_verbosity_settings.erase(i);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[17224]);
                    }
                    i = ((IData)(1U) + i);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[17225]);
            }
            ++(vlSymsp->__Vcoverage[17226]);
        }

        VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ i) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0\n"); );
            // Locals
            IData/*31:0*/ __Vtask___VforkTask_1__320__i;
            __Vtask___VforkTask_1__320__i = 0;
            Vtb_rng_m_verbosity_setting__struct__0 __Vtask___VforkTask_1__320__setting;
            __Vtask___VforkTask_1__320__setting.__PVT__offset = 0;
            __Vtask___VforkTask_1__320__setting.__PVT__verbosity = 0;
            // Body
            VL_KEEP_THIS;
            __Vtask___VforkTask_1__320__i = i;
            co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 
                                                    3305);
            __Vtask___VforkTask_1__320__setting = this->__PVT__m_verbosity_settings.at(__Vtask___VforkTask_1__320__i);
            co_await vlSymsp->TOP.__VdlySched.delay(__Vtask___VforkTask_1__320__setting
                                                    .__PVT__offset, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 
                                                    3307);
            if (("_ALL_"s == __Vtask___VforkTask_1__320__setting
                 .__PVT__id)) {
                this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, __Vtask___VforkTask_1__320__setting
                                                             .__PVT__verbosity);
                ++(vlSymsp->__Vcoverage[17219]);
            } else {
                this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(__Vtask___VforkTask_1__320__setting
                                                                             .__PVT__id), __Vtask___VforkTask_1__320__setting
                                                          .__PVT__verbosity);
                ++(vlSymsp->__Vcoverage[17220]);
            }
            vlProcess->state(VlProcess::FINISHED);
            co_return;
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            std::string unnamedblk229__DOT__i;
            CData/*0:0*/ unnamedblk229__DOT__i__Vfirst;
            unnamedblk229__DOT__i__Vfirst = 0;
            __VlefExpr_0 = (0U != this->__PVT__m_children.first(unnamedblk229__DOT__i));
            if (__VlefExpr_0) {
                unnamedblk229__DOT__i__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk229__DOT__i__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_children.next(unnamedblk229__DOT__i));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk229__DOT__i__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk229__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_component.svh", 3329)
                                           ->__VnoInFunc_m_do_pre_abort(vlSymsp);
                    ++(vlSymsp->__Vcoverage[17227]);
                }
                ++(vlSymsp->__Vcoverage[17228]);
            } else {
                ++(vlSymsp->__Vcoverage[17229]);
            }
            this->__VnoInFunc_pre_abort(vlSymsp);
            ++(vlSymsp->__Vcoverage[17230]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0____VBasicRand;
            Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
            randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
            this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
            randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                   & __VlefCall_0____VBasicRand);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vsetup_constraints\n"); );
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc___VBasicRand\n"); );
            // Body
            __VBasicRand__Vfuncrtn = 1U;
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_component::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::_ctor_var_reset\n"); );
            // Body
            (void)vlSymsp;  // Prevent unused variable warning
            __PVT__m_build_done = 0;
            __PVT__m_phasing_active = 0;
            __PVT__m_verbosity_settings.atDefault().__PVT__offset = VL_SCOPED_RAND_RESET_Q(64, 11392884900788368740ULL, 1112267310700633147ull);
            __PVT__m_verbosity_settings.atDefault().__PVT__verbosity = 0;
        }

        Vtb_rng_uvm_pkg__03a__03auvm_component::~Vtb_rng_uvm_pkg__03a__03auvm_component() {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::~\n"); );
        }

        std::string Vtb_rng_uvm_pkg__03a__03auvm_component::to_string() const {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::to_string\n"); );
            // Body
            return ("'{"s + to_string_middle() + "}");
        }

        std::string Vtb_rng_uvm_pkg__03a__03auvm_component::to_string_middle() const {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component::to_string_middle\n"); );
            // Body
            std::string out;
            out += "print_enabled:" + VL_TO_STRING(__PVT__print_enabled);
            out += ", tr_database:" + VL_TO_STRING(__PVT__tr_database);
            out += ", m_domain:" + VL_TO_STRING(__PVT__m_domain);
            out += ", m_phase_imps:" + VL_TO_STRING(__PVT__m_phase_imps);
            out += ", m_current_phase:" + VL_TO_STRING(__PVT__m_current_phase);
            out += ", m_phase_process:" + VL_TO_STRING(__PVT__m_phase_process);
            out += ", m_build_done:" + VL_TO_STRING(__PVT__m_build_done);
            out += ", m_phasing_active:" + VL_TO_STRING(__PVT__m_phasing_active);
            out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
            out += ", m_children:" + VL_TO_STRING(__PVT__m_children);
            out += ", m_children_by_handle:" + VL_TO_STRING(__PVT__m_children_by_handle);
            out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
            out += ", m_tr_h:" + VL_TO_STRING(__PVT__m_tr_h);
            out += ", m_name:" + VL_TO_STRING(__PVT__m_name);
            out += ", event_pool:" + VL_TO_STRING(__PVT__event_pool);
            out += ", recording_detail:" + VL_TO_STRING(__PVT__recording_detail);
            out += ", m_verbosity_settings:" + VL_TO_STRING(__PVT__m_verbosity_settings);
            out += ", m_unsupported_resource_base:" + VL_TO_STRING(__PVT__m_unsupported_resource_base);
            out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_report_object::to_string_middle();
            return (out);
        }
