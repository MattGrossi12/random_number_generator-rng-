// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi83> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi83__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[18175]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_agent"s;
    ++(vlSymsp->__Vcoverage[18177]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_component_registry__pi83> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi83__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[18176]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_agent"s;
    ++(vlSymsp->__Vcoverage[18178]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__is_active = 1U;
    ++(vlSymsp->__Vcoverage[18174]);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[18179]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_from_name__11__Vfuncout;
    __Vfunc_from_name__11__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_13__read;
    IData/*31:0*/ __VlefExpr_12;
    IData/*31:0*/ __VlefCall_11__read;
    IData/*31:0*/ __VlefExpr_10;
    VlWide<128>/*4095:0*/ __VlefCall_9__read;
    IData/*31:0*/ __VlefExpr_8;
    QData/*63:0*/ __VlefCall_7__read;
    IData/*31:0*/ __VlefExpr_6;
    IData/*31:0*/ __VlefExpr_5;
    CData/*0:0*/ __VlefLogAnd_4;
    IData/*31:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefExpr_2;
    IData/*31:0*/ __VlefCall_1__size;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> unnamedblk1__DOT__unnamedblk2__DOT__rsrc;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz161> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F;
    std::string unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz2> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz162> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz9> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F;
    CData/*0:0*/ __VExpr_h7cb4d423__0;
    __VExpr_h7cb4d423__0 = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    CData/*0:0*/ found;
    found = 0U;
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 75)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "is_active"s, VlNull{}, 0U, rq);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 77)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
        if (!((VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_1__size) 
               && (1U & (~ (IData)(found)))))) break;
        VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 78)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, unnamedblk1__DOT__unnamedblk2__DOT__rsrc);
        __VlefExpr_2 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F);
        found = (1U & __VlefExpr_2);
        if (found) {
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_agent>{this}, this->__PVT__is_active);
            ++(vlSymsp->__Vcoverage[18180]);
        } else {
            ++(vlSymsp->__Vcoverage[18181]);
        }
        if (found) {
            ++(vlSymsp->__Vcoverage[18190]);
        } else {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F = ""s;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F = 0U;
            __VlefExpr_3 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F);
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F 
                = (1U & __VlefExpr_3);
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_agent>{this}, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F);
                ++(vlSymsp->__Vcoverage[18182]);
            } else {
                ++(vlSymsp->__Vcoverage[18183]);
            }
            __VlefLogAnd_4 = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F;
            if (__VlefLogAnd_4) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg.__VnoInFunc_from_name(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F, __Vfunc_from_name__11__Vfuncout);
                __VExpr_h7cb4d423__0 = __Vfunc_from_name__11__Vfuncout;
                __VlefLogAnd_4 = __VExpr_h7cb4d423__0;
            }
            if (__VlefLogAnd_4) {
                this->__PVT__is_active = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F;
                found = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F;
                ++(vlSymsp->__Vcoverage[18184]);
            } else {
                ++(vlSymsp->__Vcoverage[18185]);
            }
            if (((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F) 
                 & (IData)(__VExpr_h7cb4d423__0))) {
                ++(vlSymsp->__Vcoverage[18186]);
            }
            if ((1U & (~ (IData)(__VExpr_h7cb4d423__0)))) {
                ++(vlSymsp->__Vcoverage[18187]);
            }
            if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F)))) {
                ++(vlSymsp->__Vcoverage[18188]);
            }
            ++(vlSymsp->__Vcoverage[18189]);
        }
        if (found) {
            ++(vlSymsp->__Vcoverage[18222]);
        } else {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F = 0U;
            __VlefExpr_5 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F);
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                = (1U & __VlefExpr_5);
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_agent>{this}, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F);
                ++(vlSymsp->__Vcoverage[18193]);
            } else {
                ++(vlSymsp->__Vcoverage[18194]);
            }
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                ++(vlSymsp->__Vcoverage[18216]);
            } else {
                __VlefExpr_6 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                    = (1U & __VlefExpr_6);
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_7__read);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                        = (1U & (IData)(__VlefCall_7__read));
                    ++(vlSymsp->__Vcoverage[18195]);
                } else {
                    ++(vlSymsp->__Vcoverage[18196]);
                }
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    ++(vlSymsp->__Vcoverage[18200]);
                } else {
                    __VlefExpr_8 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & __VlefExpr_8);
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_9__read);
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & __VlefCall_9__read[0U]);
                        ++(vlSymsp->__Vcoverage[18197]);
                    } else {
                        ++(vlSymsp->__Vcoverage[18198]);
                    }
                    ++(vlSymsp->__Vcoverage[18199]);
                }
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    ++(vlSymsp->__Vcoverage[18206]);
                } else {
                    __VlefExpr_10 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & __VlefExpr_10);
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_11__read);
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & __VlefCall_11__read);
                        ++(vlSymsp->__Vcoverage[18203]);
                    } else {
                        ++(vlSymsp->__Vcoverage[18204]);
                    }
                    ++(vlSymsp->__Vcoverage[18205]);
                }
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    ++(vlSymsp->__Vcoverage[18212]);
                } else {
                    __VlefExpr_12 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & __VlefExpr_12);
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_13__read);
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & __VlefCall_13__read);
                        ++(vlSymsp->__Vcoverage[18209]);
                    } else {
                        ++(vlSymsp->__Vcoverage[18210]);
                    }
                    ++(vlSymsp->__Vcoverage[18211]);
                }
                if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    ++(vlSymsp->__Vcoverage[18201]);
                }
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    ++(vlSymsp->__Vcoverage[18202]);
                }
                if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    ++(vlSymsp->__Vcoverage[18207]);
                }
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    ++(vlSymsp->__Vcoverage[18208]);
                }
                if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    ++(vlSymsp->__Vcoverage[18213]);
                }
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    ++(vlSymsp->__Vcoverage[18214]);
                }
                ++(vlSymsp->__Vcoverage[18215]);
            }
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                this->__PVT__is_active = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F;
                found = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F;
                ++(vlSymsp->__Vcoverage[18219]);
            } else {
                ++(vlSymsp->__Vcoverage[18220]);
            }
            if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                ++(vlSymsp->__Vcoverage[18217]);
            }
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                ++(vlSymsp->__Vcoverage[18218]);
            }
            ++(vlSymsp->__Vcoverage[18221]);
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        ++(vlSymsp->__Vcoverage[18225]);
    }
    if ((1U & (~ (IData)(found)))) {
        ++(vlSymsp->__Vcoverage[18191]);
    }
    if (found) {
        ++(vlSymsp->__Vcoverage[18192]);
    }
    if ((1U & (~ (IData)(found)))) {
        ++(vlSymsp->__Vcoverage[18223]);
    }
    if (found) {
        ++(vlSymsp->__Vcoverage[18224]);
    }
    ++(vlSymsp->__Vcoverage[18226]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_is_active(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_is_active__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_is_active\n"); );
    // Body
    get_is_active__Vfuncrtn = this->__PVT__is_active;
    ++(vlSymsp->__Vcoverage[18227]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_agent::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_agent::~Vtb_rng_uvm_pkg__03a__03auvm_agent() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_agent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_agent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "is_active:" + VL_TO_STRING(__PVT__is_active);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
