// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> t_rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 142)->__VnoInFunc_get_resource_pool(vlSymsp, t_rp);
    get__Vfuncrtn = t_rp;
    ++(vlSymsp->__Vcoverage[7849]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk6__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ prec;
    IData/*31:0*/ c_prec;
    {
        prec = 0U;
        c_prec = 0U;
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 519)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7916]);
        }
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 523)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, rsrc);
        prec = (this->__PVT__ri_tab.exists(rsrc) ? this->__PVT__ri_tab
                .at(rsrc).__PVT__precedence : 0U);
        unnamedblk6__DOT__i = 0U;
        unnamedblk6__DOT__i = 1U;
        while (true) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 527)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk6__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 528)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk6__DOT__i, r);
            c_prec = (this->__PVT__ri_tab.exists(r)
                       ? this->__PVT__ri_tab.at(r).__PVT__precedence
                       : 0U);
            if ((c_prec > prec)) {
                rsrc = r;
                prec = c_prec;
                ++(vlSymsp->__Vcoverage[7917]);
            } else {
                ++(vlSymsp->__Vcoverage[7918]);
            }
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
            ++(vlSymsp->__Vcoverage[7919]);
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7920]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence\n"); );
    // Body
    IData/*31:0*/ __VlefCall_4__size;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> __VlefCall_1__new;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk7__DOT__i;
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    CData/*0:0*/ unnamedblk8__DOT__i__Vfirst;
    unnamedblk8__DOT__i__Vfirst = 0;
    IData/*31:0*/ unnamedblk8__DOT__unnamedblk9__DOT__j;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5>> all;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ prec;
    all.clear();
    prec = 0U;
    unnamedblk7__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 554)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk7__DOT__i, __VlefCall_0__size))) break;
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 555)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk7__DOT__i, r);
        prec = (this->__PVT__ri_tab.exists(r) ? this->__PVT__ri_tab
                .at(r).__PVT__precedence : 0U);
        if (all.exists(prec)) {
            ++(vlSymsp->__Vcoverage[7922]);
        } else {
            __VlefCall_1__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
            all.at(prec) = __VlefCall_1__new;
            ++(vlSymsp->__Vcoverage[7921]);
        }
        VL_NULL_CHECK(all.at(prec), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 559)->__VnoInFunc_push_front(vlSymsp, r);
        unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
        ++(vlSymsp->__Vcoverage[7923]);
    }
    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 561)->__VnoInFunc_delete(vlProcess, vlSymsp, 0xffffffffU);
    __VlefExpr_2 = (0U != all.first(unnamedblk8__DOT__i));
    if (__VlefExpr_2) {
        unnamedblk8__DOT__i__Vfirst = 1U;
        while (true) {
            __VlefExpr_3 = unnamedblk8__DOT__i__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_3)))) {
                __VlefExpr_3 = (0U != all.next(unnamedblk8__DOT__i));
            }
            if (!(__VlefExpr_3)) break;
            unnamedblk8__DOT__i__Vfirst = 0U;
            unnamedblk8__DOT__unnamedblk9__DOT__j = 0U;
            unnamedblk8__DOT__unnamedblk9__DOT__j = 0U;
            while (true) {
                VL_NULL_CHECK(all.at(unnamedblk8__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 563)->__VnoInFunc_size(vlSymsp, __VlefCall_4__size);
                if (!(VL_LTS_III(32, unnamedblk8__DOT__unnamedblk9__DOT__j, __VlefCall_4__size))) break;
                VL_NULL_CHECK(all.at(unnamedblk8__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 564)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__j, r);
                VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 565)->__VnoInFunc_push_front(vlSymsp, r);
                unnamedblk8__DOT__unnamedblk9__DOT__j 
                    = ((IData)(1U) + unnamedblk8__DOT__unnamedblk9__DOT__j);
                ++(vlSymsp->__Vcoverage[7924]);
            }
            ++(vlSymsp->__Vcoverage[7925]);
        }
        ++(vlSymsp->__Vcoverage[7926]);
    } else {
        ++(vlSymsp->__Vcoverage[7927]);
    }
    ++(vlSymsp->__Vcoverage[7928]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_set_default_precedence(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ precedence) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_set_default_precedence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 872)->__VnoInFunc_set_resource_pool_default_precedence(vlSymsp, precedence);
    ++(vlSymsp->__Vcoverage[7978]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_default_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_default_precedence\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    get_default_precedence__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 878)->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, get_default_precedence__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[7979]);
}

std::string VL_TO_STRING(const Vtb_rng_rsrc_info_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{scope:" + VL_TO_STRING(obj.__PVT__scope);
    out += ", precedence:" + VL_TO_STRING(obj.__PVT__precedence);
    out += "}";
    return (out);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[7848]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_check__0__Vfuncout;
    __Vfunc_check__0__Vfuncout = 0;
    // Body
    spell_check__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, this->__PVT__rtab, s, __Vfunc_check__0__Vfuncout);
    spell_check__Vfuncrtn = __Vfunc_check__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[7850]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_scope(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_scope\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__1__verbosity;
    __Vtask_uvm_report_warning__1__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__1__line;
    __Vtask_uvm_report_warning__1__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__1__report_enabled_checked;
    __Vtask_uvm_report_warning__1__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_3__get_default_precedence;
    std::string __VlefCall_2__uvm_glob_to_re;
    std::string __VlefCall_1__uvm_glob_to_re;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    std::string name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    {
        name = ""s;
        i = 0U;
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__1__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__1__context_name = ""s;
            __Vtask_uvm_report_warning__1__line = 0U;
            this->__Vtask_uvm_report_warning__1__filename = ""s;
            __Vtask_uvm_report_warning__1__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__1__message = "attempting to set scope of a null resource"s;
            this->__Vtask_uvm_report_warning__1__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__2__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__3__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__1__id, this->__Vtask_uvm_report_warning__1__message, __Vtask_uvm_report_warning__1__verbosity, this->__Vtask_uvm_report_warning__1__filename, __Vtask_uvm_report_warning__1__line, this->__Vtask_uvm_report_warning__1__context_name, (IData)(__Vtask_uvm_report_warning__1__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7852]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 210)->__VnoInFunc_get_name(vlSymsp, name);
        if (((""s != name) && this->__PVT__rtab.exists(name))) {
            rq = this->__PVT__rtab.at(name);
            i = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 214)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                if (!((i < __VlefCall_0__size))) break;
                VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 215)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                if ((r == rsrc)) {
                    this->__Vfunc_uvm_glob_to_re__8__glob 
                        = scope;
                    __VlefCall_1__uvm_glob_to_re = this->__Vfunc_uvm_glob_to_re__8__glob;
                    ++(vlSymsp->__Vcoverage[283]);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.at(rsrc).__PVT__scope 
                        = __VlefCall_1__uvm_glob_to_re;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[7854]);
                }
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[7855]);
            }
            ++(vlSymsp->__Vcoverage[7856]);
        } else {
            ++(vlSymsp->__Vcoverage[7857]);
        }
        if ((VlNull{} == rq)) {
            rq = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, name);
            ++(vlSymsp->__Vcoverage[7858]);
        } else {
            ++(vlSymsp->__Vcoverage[7859]);
        }
        VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 228)->__VnoInFunc_push_back(vlSymsp, rsrc);
        this->__PVT__rtab.at(name) = rq;
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 233)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if (this->__PVT__ttab.exists(type_handle)) {
            rq = this->__PVT__ttab.at(type_handle);
            ++(vlSymsp->__Vcoverage[7860]);
        } else {
            rq = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
            ++(vlSymsp->__Vcoverage[7861]);
        }
        VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 241)->__VnoInFunc_push_back(vlSymsp, rsrc);
        this->__PVT__ttab.at(type_handle) = rq;
        this->__Vfunc_uvm_glob_to_re__14__glob = scope;
        __VlefCall_2__uvm_glob_to_re = this->__Vfunc_uvm_glob_to_re__14__glob;
        ++(vlSymsp->__Vcoverage[283]);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.at(rsrc).__PVT__scope 
            = __VlefCall_2__uvm_glob_to_re;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, __VlefCall_3__get_default_precedence);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.at(rsrc).__PVT__precedence 
            = __VlefCall_3__get_default_precedence;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7862]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string s;
    s = scope;
    this->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, s);
    this->__VnoInFunc_set_priority(vlSymsp, rsrc, 0U);
    ++(vlSymsp->__Vcoverage[7863]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_name_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_name_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string s;
    s = scope;
    this->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, s);
    this->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, rsrc, 0U);
    ++(vlSymsp->__Vcoverage[7864]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_type_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string s;
    s = scope;
    this->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, s);
    this->__VnoInFunc_set_priority_type(vlSymsp, rsrc, 0U);
    ++(vlSymsp->__Vcoverage[7865]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_scope(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string &scope, CData/*0:0*/ &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_scope\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    std::string name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    {
        get_scope__Vfuncrtn = 0U;
        scope = ""s;
        name = ""s;
        i = 0U;
        if ((VlNull{} == rsrc)) {
            get_scope__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7867]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 320)->__VnoInFunc_get_name(vlSymsp, name);
        if (((""s != name) && this->__PVT__rtab.exists(name))) {
            rq = this->__PVT__rtab.at(name);
            i = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 324)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                if (!((i < __VlefCall_0__size))) break;
                VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 325)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                if ((r == rsrc)) {
                    scope = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                        .at(rsrc).__PVT__scope;
                    get_scope__Vfuncrtn = 1U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[7869]);
                }
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[7870]);
            }
            ++(vlSymsp->__Vcoverage[7871]);
        } else {
            ++(vlSymsp->__Vcoverage[7872]);
        }
        scope = ""s;
        get_scope__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7873]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_delete(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_delete\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> __VlefCall_0__get;
    IData/*31:0*/ unnamedblk1__DOT__q_size;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    std::string name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle;
    name = ""s;
    if ((VlNull{} != rsrc)) {
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 352)->__VnoInFunc_get_name(vlSymsp, name);
        if ((""s != name)) {
            if (this->__PVT__rtab.exists(name)) {
                this->__PVT__rtab.erase(name);
                ++(vlSymsp->__Vcoverage[7874]);
            } else {
                ++(vlSymsp->__Vcoverage[7875]);
            }
            ++(vlSymsp->__Vcoverage[7876]);
        } else {
            ++(vlSymsp->__Vcoverage[7877]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 358)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if (this->__PVT__ttab.exists(type_handle)) {
            VL_NULL_CHECK(this->__PVT__ttab.at(type_handle), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 360)->__VnoInFunc_size(vlSymsp, unnamedblk1__DOT__q_size);
            if ((1U == unnamedblk1__DOT__q_size)) {
                this->__PVT__ttab.erase(type_handle);
                ++(vlSymsp->__Vcoverage[7881]);
            } else {
                unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
                unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
                {
                    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, unnamedblk1__DOT__q_size)) {
                        VL_NULL_CHECK(this->__PVT__ttab
                                      .at(type_handle), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 367)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__i, __VlefCall_0__get);
                        if ((__VlefCall_0__get == rsrc)) {
                            VL_NULL_CHECK(this->__PVT__ttab
                                          .at(type_handle), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 368)->__VnoInFunc_delete(vlProcess, vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__i);
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[7879]);
                        }
                        unnamedblk1__DOT__unnamedblk2__DOT__i 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
                        ++(vlSymsp->__Vcoverage[7880]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[7882]);
            }
            ++(vlSymsp->__Vcoverage[7883]);
        } else {
            ++(vlSymsp->__Vcoverage[7884]);
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(rsrc)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.erase(rsrc);
            ++(vlSymsp->__Vcoverage[7885]);
        } else {
            ++(vlSymsp->__Vcoverage[7886]);
        }
        ++(vlSymsp->__Vcoverage[7887]);
    } else {
        ++(vlSymsp->__Vcoverage[7888]);
    }
    ++(vlSymsp->__Vcoverage[7889]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record\n"); );
    // Body
    CData/*0:0*/ __VExpr_h77b709fa__0;
    __VExpr_h77b709fa__0 = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03aget_t> impt;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VExpr_h77b709fa__0);
        if (__VExpr_h77b709fa__0) {
            ++(vlSymsp->__Vcoverage[7891]);
        } else {
            goto __Vlabel0;
        }
        impt = VL_NEW(Vtb_rng_uvm_pkg__03a__03aget_t, vlSymsp);
        VL_NULL_CHECK(impt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 396)->__PVT__name 
            = name;
        VL_NULL_CHECK(impt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 397)->__PVT__scope 
            = scope;
        VL_NULL_CHECK(impt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 398)->__PVT__rsrc 
            = rsrc;
        VL_NULL_CHECK(impt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 399)->__PVT__t 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__get_record.push_back(impt);
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(__VExpr_h77b709fa__0)))) {
        ++(vlSymsp->__Vcoverage[7892]);
    }
    if (__VExpr_h77b709fa__0) {
        ++(vlSymsp->__Vcoverage[7893]);
    }
    ++(vlSymsp->__Vcoverage[7894]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump_get_records(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump_get_records\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__verbosity;
    __Vfunc_uvm_report_enabled__32__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__32__severity;
    __Vfunc_uvm_report_enabled__32__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__37__verbosity;
    __Vtask_uvm_report_info__37__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__37__line;
    __Vtask_uvm_report_info__37__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__37__report_enabled_checked;
    __Vtask_uvm_report_info__37__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03aget_t> record;
    CData/*0:0*/ success;
    VlQueue<std::string> qs;
    success = 0U;
    qs.clear();
    qs.atDefault().clear();
    qs.push_back("--- resource get records ---\n"s);
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__get_record.size())) {
        record = this->__PVT__get_record.at(unnamedblk3__DOT__i);
        success = (VlNull{} != VL_NULL_CHECK(record, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 417)
                   ->__PVT__rsrc);
        __Vtemp_1 = VL_NULL_CHECK(record, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 419)
            ->__PVT__name;
        __Vtemp_2 = VL_NULL_CHECK(record, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 419)
            ->__PVT__scope;
        qs.push_back(VL_SFORMATF_N_NX("get: name=%@  scope=%@  %s @ %0t\n",0,
                                      -1,&(__Vtemp_1),
                                      -1,&(__Vtemp_2),
                                      56,((IData)(success)
                                           ? 0x0073756363657373ULL
                                           : 0x000000006661696cULL),
                                      64,VL_NULL_CHECK(record, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 421)
                                      ->__PVT__t,-12) );
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        ++(vlSymsp->__Vcoverage[7897]);
    }
    this->__Vfunc_uvm_report_enabled__32__id = "UVM/RESOURCE/GETRECORD"s;
    __Vfunc_uvm_report_enabled__32__severity = 0U;
    __Vfunc_uvm_report_enabled__32__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__33__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__34__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__32__verbosity, (IData)(__Vfunc_uvm_report_enabled__32__severity), this->__Vfunc_uvm_report_enabled__32__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__36__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__36__Vfuncout 
            = VL_CVT_PACK_STR_ND(qs);
        ++(vlSymsp->__Vcoverage[434]);
        __VlefCall_1__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__36__Vfuncout;
        __Vtask_uvm_report_info__37__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__37__context_name = ""s;
        __Vtask_uvm_report_info__37__line = 0x000001a7U;
        this->__Vtask_uvm_report_info__37__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__37__verbosity = 0U;
        this->__Vtask_uvm_report_info__37__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_1__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__37__id = "UVM/RESOURCE/GETRECORD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__38__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__39__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__37__id, this->__Vtask_uvm_report_info__37__message, __Vtask_uvm_report_info__37__verbosity, this->__Vtask_uvm_report_info__37__filename, __Vtask_uvm_report_info__37__line, this->__Vtask_uvm_report_info__37__context_name, (IData)(__Vtask_uvm_report_info__37__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[7898]);
    } else {
        ++(vlSymsp->__Vcoverage[7899]);
    }
    if (success) {
        ++(vlSymsp->__Vcoverage[7895]);
    }
    if ((1U & (~ (IData)(success)))) {
        ++(vlSymsp->__Vcoverage[7896]);
    }
    ++(vlSymsp->__Vcoverage[7900]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name\n"); );
    // Locals
    CData/*0:0*/ __Vtask_spell_check__45__Vfuncout;
    __Vtask_spell_check__45__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_uvm_is_match__49__Vfuncout;
    __Vfunc_uvm_is_match__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__49____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__49____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__51__Vfuncout;
    __Vfunc_uvm_re_match__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__51____Vincrement1;
    __Vfunc_uvm_re_match__51____Vincrement1 = 0;
    // Body
    CData/*0:0*/ __VlefLogOr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> __VlefCall_1__get_type_handle;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_std__03a__03aprocess> unnamedblk4__DOT__p;
    std::string unnamedblk4__DOT__s;
    IData/*31:0*/ unnamedblk5__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    std::string rsrcs;
    {
        rsrcs = ""s;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk4__DOT__p);
        unnamedblk4__DOT__s = ""s;
        if ((VlNull{} != unnamedblk4__DOT__p)) {
            VL_NULL_CHECK(unnamedblk4__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 470)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk4__DOT__s);
            ++(vlSymsp->__Vcoverage[7901]);
        } else {
            ++(vlSymsp->__Vcoverage[7902]);
        }
        q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
        if ((VlNull{} != unnamedblk4__DOT__p)) {
            VL_NULL_CHECK(unnamedblk4__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 472)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk4__DOT__s);
            ++(vlSymsp->__Vcoverage[7903]);
        } else {
            ++(vlSymsp->__Vcoverage[7904]);
        }
        if ((""s == name)) {
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7906]);
        }
        if (this->__PVT__rtab.exists(name)) {
            ++(vlSymsp->__Vcoverage[7910]);
        } else {
            if (rpterr) {
                this->__VnoInFunc_spell_check(vlProcess, vlSymsp, name, __Vtask_spell_check__45__Vfuncout);
                ++(vlSymsp->__Vcoverage[7907]);
            } else {
                ++(vlSymsp->__Vcoverage[7908]);
            }
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        rq = this->__PVT__rtab.at(name);
        unnamedblk5__DOT__i = 0U;
        unnamedblk5__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 489)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk5__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 490)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk5__DOT__i, r);
            rsrcs = (vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(r)
                      ? vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                     .at(r).__PVT__scope : ""s);
            __VlefLogOr_2 = (VlNull{} == type_handle);
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 493)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __VlefCall_1__get_type_handle);
                __VlefLogOr_2 = (__VlefCall_1__get_type_handle 
                                 == type_handle);
            }
            if (__VlefLogOr_2) {
                this->__Vfunc_uvm_is_match__49__str 
                    = scope;
                this->__Vfunc_uvm_is_match__49__expr 
                    = rsrcs;
                this->__Vfunc_uvm_glob_to_re__50__glob 
                    = this->__Vfunc_uvm_is_match__49__expr;
                this->__Vfunc_uvm_glob_to_re__50__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__50__glob;
                ++(vlSymsp->__Vcoverage[283]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__50__Vfuncout;
                this->__Vfunc_uvm_re_match__51__str 
                    = this->__Vfunc_uvm_is_match__49__str;
                this->__Vfunc_uvm_re_match__51__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__51____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__51__re))) {
                        __Vfunc_uvm_re_match__51__Vfuncout = 0U;
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[255]);
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,0U))) {
                        this->__Vfunc_uvm_re_match__51__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__51__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__51__re) 
                                           - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[256]);
                    } else {
                        ++(vlSymsp->__Vcoverage[257]);
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__51__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__51__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__51__Vfuncout = 1U;
                            goto __Vlabel1;
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
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__51__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__51__re))) {
                                __Vfunc_uvm_re_match__51__Vfuncout = 0U;
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[268]);
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[274]);
                        } else {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  == VL_GETC_N(this->__Vfunc_uvm_re_match__51__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
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
                                __Vfunc_uvm_re_match__51____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__51____Vincrement1;
                                ++(vlSymsp->__Vcoverage[270]);
                            }
                            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                ++(vlSymsp->__Vcoverage[271]);
                            }
                            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__51__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                ++(vlSymsp->__Vcoverage[272]);
                            }
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__51__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                ++(vlSymsp->__Vcoverage[273]);
                            }
                        }
                        ++(vlSymsp->__Vcoverage[275]);
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__51__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        ++(vlSymsp->__Vcoverage[279]);
                    }
                    __Vfunc_uvm_re_match__51__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__51__re))
                            ? 0U : 1U);
                    __Vlabel1: ;
                }
                if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                      != VL_LEN_IN(this->__Vfunc_uvm_re_match__51__str)) 
                     & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[258]);
                }
                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[259]);
                }
                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__51__str))) {
                    ++(vlSymsp->__Vcoverage[260]);
                }
                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                      != VL_GETC_N(this->__Vfunc_uvm_re_match__51__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[263]);
                }
                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[264]);
                }
                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                     == VL_GETC_N(this->__Vfunc_uvm_re_match__51__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                    ++(vlSymsp->__Vcoverage[265]);
                }
                if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__51__re)) 
                     & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[276]);
                }
                if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[277]);
                }
                if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__51__re))) {
                    ++(vlSymsp->__Vcoverage[278]);
                }
                ++(vlSymsp->__Vcoverage[282]);
                __Vfunc_uvm_is_match__49____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__51__Vfuncout;
                __Vfunc_uvm_is_match__49__Vfuncout 
                    = (0U == __Vfunc_uvm_is_match__49____VlefCall_0__uvm_re_match);
                ++(vlSymsp->__Vcoverage[462]);
                __VlefLogOr_2 = __Vfunc_uvm_is_match__49__Vfuncout;
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 495)->__VnoInFunc_push_back(vlSymsp, r);
                ++(vlSymsp->__Vcoverage[7911]);
            } else {
                ++(vlSymsp->__Vcoverage[7912]);
            }
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
            ++(vlSymsp->__Vcoverage[7913]);
        }
        lookup_name__Vfuncrtn = q;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7914]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__56__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        this->__VnoInFunc_lookup_name(vlProcess, vlSymsp, scope, name, type_handle, rpterr, q);
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 591)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            this->__VnoInFunc_push_get_record(vlSymsp, name, scope, VlNull{});
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7930]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, q, __Vfunc_get_highest_precedence__56__Vfuncout);
        rsrc = __Vfunc_get_highest_precedence__56__Vfuncout;
        this->__VnoInFunc_push_get_record(vlSymsp, name, scope, rsrc);
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7931]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_type\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__61____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__61____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__63__Vfuncout;
    __Vfunc_uvm_re_match__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__63____Vincrement1;
    __Vfunc_uvm_re_match__63____Vincrement1 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_1__uvm_is_match;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk10__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    {
        q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
        if (((VlNull{} == type_handle) | (! this->__PVT__ttab.exists(type_handle)))) {
            lookup_type__Vfuncrtn = q;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7933]);
        }
        rq = this->__PVT__ttab.at(type_handle);
        unnamedblk10__DOT__i = 0U;
        unnamedblk10__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 623)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk10__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 624)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__i, r);
            __VlefCall_1__uvm_is_match = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(r);
            if (__VlefCall_1__uvm_is_match) {
                this->__Vfunc_uvm_is_match__61__str 
                    = scope;
                this->__Vfunc_uvm_is_match__61__expr 
                    = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                                         .at(r).__PVT__scope);
                this->__Vfunc_uvm_glob_to_re__62__glob 
                    = this->__Vfunc_uvm_is_match__61__expr;
                this->__Vfunc_uvm_glob_to_re__62__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__62__glob;
                ++(vlSymsp->__Vcoverage[283]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__62__Vfuncout;
                this->__Vfunc_uvm_re_match__63__str 
                    = this->__Vfunc_uvm_is_match__61__str;
                this->__Vfunc_uvm_re_match__63__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__63____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__63__re))) {
                        __Vfunc_uvm_re_match__63__Vfuncout = 0U;
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[255]);
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,0U))) {
                        this->__Vfunc_uvm_re_match__63__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__63__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__63__re) 
                                           - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[256]);
                    } else {
                        ++(vlSymsp->__Vcoverage[257]);
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__63__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__63__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__63__Vfuncout = 1U;
                            goto __Vlabel1;
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
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__63__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__63__re))) {
                                __Vfunc_uvm_re_match__63__Vfuncout = 0U;
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[268]);
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[274]);
                        } else {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  == VL_GETC_N(this->__Vfunc_uvm_re_match__63__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
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
                                __Vfunc_uvm_re_match__63____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__63____Vincrement1;
                                ++(vlSymsp->__Vcoverage[270]);
                            }
                            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                ++(vlSymsp->__Vcoverage[271]);
                            }
                            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__63__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                ++(vlSymsp->__Vcoverage[272]);
                            }
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__63__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                ++(vlSymsp->__Vcoverage[273]);
                            }
                        }
                        ++(vlSymsp->__Vcoverage[275]);
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__63__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        ++(vlSymsp->__Vcoverage[279]);
                    }
                    __Vfunc_uvm_re_match__63__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__63__re))
                            ? 0U : 1U);
                    __Vlabel1: ;
                }
                if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                      != VL_LEN_IN(this->__Vfunc_uvm_re_match__63__str)) 
                     & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[258]);
                }
                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[259]);
                }
                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__63__str))) {
                    ++(vlSymsp->__Vcoverage[260]);
                }
                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                      != VL_GETC_N(this->__Vfunc_uvm_re_match__63__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[263]);
                }
                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[264]);
                }
                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                     == VL_GETC_N(this->__Vfunc_uvm_re_match__63__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                    ++(vlSymsp->__Vcoverage[265]);
                }
                if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__63__re)) 
                     & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[276]);
                }
                if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[277]);
                }
                if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__63__re))) {
                    ++(vlSymsp->__Vcoverage[278]);
                }
                ++(vlSymsp->__Vcoverage[282]);
                __Vfunc_uvm_is_match__61____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__63__Vfuncout;
                __VlefCall_1__uvm_is_match = (0U == __Vfunc_uvm_is_match__61____VlefCall_0__uvm_re_match);
                ++(vlSymsp->__Vcoverage[462]);
            }
            if (__VlefCall_1__uvm_is_match) {
                VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 626)->__VnoInFunc_push_back(vlSymsp, r);
                ++(vlSymsp->__Vcoverage[7934]);
            } else {
                ++(vlSymsp->__Vcoverage[7935]);
            }
            unnamedblk10__DOT__i = ((IData)(1U) + unnamedblk10__DOT__i);
            ++(vlSymsp->__Vcoverage[7936]);
        }
        lookup_type__Vfuncrtn = q;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7937]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        this->__VnoInFunc_lookup_type(vlSymsp, scope, type_handle, q);
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 647)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            this->__VnoInFunc_push_get_record(vlSymsp, "<type>"s, scope, VlNull{});
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7939]);
        }
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 652)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, rsrc);
        this->__VnoInFunc_push_get_record(vlSymsp, "<type>"s, scope, rsrc);
        get_by_type__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7940]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_regex_names__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex_names\n"); );
    // Body
    this->__VnoInFunc_lookup_name(vlProcess, vlSymsp, scope, name, type_handle, 0U, lookup_regex_names__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[7941]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex(Vtb_rng__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_regex__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__72____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__72____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__74__Vfuncout;
    __Vfunc_uvm_re_match__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__74____Vincrement1;
    __Vfunc_uvm_re_match__74____Vincrement1 = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__77____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__77____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__79__Vfuncout;
    __Vfunc_uvm_re_match__79__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__79____Vincrement1;
    __Vfunc_uvm_re_match__79____Vincrement1 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_4__uvm_is_match;
    IData/*31:0*/ __VlefCall_3__size;
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk11__DOT__name;
    CData/*0:0*/ unnamedblk11__DOT__name__Vfirst;
    unnamedblk11__DOT__name__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> result_q;
    IData/*31:0*/ i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    i = 0U;
    result_q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
    __VlefExpr_0 = (0U != this->__PVT__rtab.first(unnamedblk11__DOT__name));
    if (__VlefExpr_0) {
        unnamedblk11__DOT__name__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk11__DOT__name__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__rtab.next(unnamedblk11__DOT__name));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk11__DOT__name__Vfirst = 0U;
            {
                this->__Vfunc_uvm_is_match__72__str 
                    = unnamedblk11__DOT__name;
                this->__Vfunc_uvm_is_match__72__expr 
                    = re;
                this->__Vfunc_uvm_glob_to_re__73__glob 
                    = this->__Vfunc_uvm_is_match__72__expr;
                this->__Vfunc_uvm_glob_to_re__73__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__73__glob;
                ++(vlSymsp->__Vcoverage[283]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__73__Vfuncout;
                this->__Vfunc_uvm_re_match__74__str 
                    = this->__Vfunc_uvm_is_match__72__str;
                this->__Vfunc_uvm_re_match__74__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__74____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__74__re))) {
                        __Vfunc_uvm_re_match__74__Vfuncout = 0U;
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[255]);
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,0U))) {
                        this->__Vfunc_uvm_re_match__74__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__74__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__74__re) 
                                           - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[256]);
                    } else {
                        ++(vlSymsp->__Vcoverage[257]);
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__74__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__74__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__74__Vfuncout = 1U;
                            goto __Vlabel1;
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
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__74__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__74__re))) {
                                __Vfunc_uvm_re_match__74__Vfuncout = 0U;
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[268]);
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[274]);
                        } else {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  == VL_GETC_N(this->__Vfunc_uvm_re_match__74__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
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
                                __Vfunc_uvm_re_match__74____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__74____Vincrement1;
                                ++(vlSymsp->__Vcoverage[270]);
                            }
                            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                ++(vlSymsp->__Vcoverage[271]);
                            }
                            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__74__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                ++(vlSymsp->__Vcoverage[272]);
                            }
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__74__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                ++(vlSymsp->__Vcoverage[273]);
                            }
                        }
                        ++(vlSymsp->__Vcoverage[275]);
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__74__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        ++(vlSymsp->__Vcoverage[279]);
                    }
                    __Vfunc_uvm_re_match__74__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__74__re))
                            ? 0U : 1U);
                    __Vlabel1: ;
                }
                if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                      != VL_LEN_IN(this->__Vfunc_uvm_re_match__74__str)) 
                     & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[258]);
                }
                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[259]);
                }
                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__74__str))) {
                    ++(vlSymsp->__Vcoverage[260]);
                }
                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                      != VL_GETC_N(this->__Vfunc_uvm_re_match__74__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[263]);
                }
                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[264]);
                }
                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                     == VL_GETC_N(this->__Vfunc_uvm_re_match__74__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                    ++(vlSymsp->__Vcoverage[265]);
                }
                if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__74__re)) 
                     & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[276]);
                }
                if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[277]);
                }
                if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__74__re))) {
                    ++(vlSymsp->__Vcoverage[278]);
                }
                ++(vlSymsp->__Vcoverage[282]);
                __Vfunc_uvm_is_match__72____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__74__Vfuncout;
                __VlefCall_2__uvm_is_match = (0U == __Vfunc_uvm_is_match__72____VlefCall_0__uvm_re_match);
                ++(vlSymsp->__Vcoverage[462]);
                if (__VlefCall_2__uvm_is_match) {
                    ++(vlSymsp->__Vcoverage[7943]);
                } else {
                    goto __Vlabel0;
                }
                rq = this->__PVT__rtab.at(unnamedblk11__DOT__name);
                i = 0U;
                while (true) {
                    VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 692)->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
                    if (!((i < __VlefCall_3__size))) break;
                    VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 693)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                    __VlefCall_4__uvm_is_match = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(r);
                    if (__VlefCall_4__uvm_is_match) {
                        this->__Vfunc_uvm_is_match__77__str 
                            = scope;
                        this->__Vfunc_uvm_is_match__77__expr 
                            = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                                                 .at(r)
                                                 .__PVT__scope);
                        this->__Vfunc_uvm_glob_to_re__78__glob 
                            = this->__Vfunc_uvm_is_match__77__expr;
                        this->__Vfunc_uvm_glob_to_re__78__Vfuncout 
                            = this->__Vfunc_uvm_glob_to_re__78__glob;
                        ++(vlSymsp->__Vcoverage[283]);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                            = this->__Vfunc_uvm_glob_to_re__78__Vfuncout;
                        this->__Vfunc_uvm_re_match__79__str 
                            = this->__Vfunc_uvm_is_match__77__str;
                        this->__Vfunc_uvm_re_match__79__re 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                        __Vfunc_uvm_re_match__79____Vincrement1 = 0U;
                        {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                            if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__79__re))) {
                                __Vfunc_uvm_re_match__79__Vfuncout = 0U;
                                goto __Vlabel2;
                            } else {
                                ++(vlSymsp->__Vcoverage[255]);
                            }
                            if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,0U))) {
                                this->__Vfunc_uvm_re_match__79__re 
                                    = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__79__re,1U,
                                                  (VL_LEN_IN(this->__Vfunc_uvm_re_match__79__re) 
                                                   - (IData)(1U)));
                                ++(vlSymsp->__Vcoverage[256]);
                            } else {
                                ++(vlSymsp->__Vcoverage[257]);
                            }
                            while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                     != VL_LEN_IN(this->__Vfunc_uvm_re_match__79__str)) 
                                    & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      != VL_GETC_N(this->__Vfunc_uvm_re_match__79__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    __Vfunc_uvm_re_match__79__Vfuncout = 1U;
                                    goto __Vlabel2;
                                } else {
                                    ++(vlSymsp->__Vcoverage[262]);
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                ++(vlSymsp->__Vcoverage[266]);
                            }
                            while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    != VL_LEN_IN(this->__Vfunc_uvm_re_match__79__str))) {
                                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__79__re))) {
                                        __Vfunc_uvm_re_match__79__Vfuncout = 0U;
                                        goto __Vlabel2;
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
                                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                          == VL_GETC_N(this->__Vfunc_uvm_re_match__79__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                         | (0x3fU == 
                                            VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
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
                                        __Vfunc_uvm_re_match__79____Vincrement1 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                            = ((IData)(1U) 
                                               + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                            = __Vfunc_uvm_re_match__79____Vincrement1;
                                        ++(vlSymsp->__Vcoverage[270]);
                                    }
                                    if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                        ++(vlSymsp->__Vcoverage[271]);
                                    }
                                    if ((VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__79__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                        ++(vlSymsp->__Vcoverage[272]);
                                    }
                                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                          != VL_GETC_N(this->__Vfunc_uvm_re_match__79__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                         & (0x3fU != 
                                            VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                        ++(vlSymsp->__Vcoverage[273]);
                                    }
                                }
                                ++(vlSymsp->__Vcoverage[275]);
                            }
                            while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                               VL_LEN_IN(this->__Vfunc_uvm_re_match__79__re)) 
                                    & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                ++(vlSymsp->__Vcoverage[279]);
                            }
                            __Vfunc_uvm_re_match__79__Vfuncout 
                                = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    == VL_LEN_IN(this->__Vfunc_uvm_re_match__79__re))
                                    ? 0U : 1U);
                            __Vlabel2: ;
                        }
                        if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                              != VL_LEN_IN(this->__Vfunc_uvm_re_match__79__str)) 
                             & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            ++(vlSymsp->__Vcoverage[258]);
                        }
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            ++(vlSymsp->__Vcoverage[259]);
                        }
                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__79__str))) {
                            ++(vlSymsp->__Vcoverage[260]);
                        }
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__79__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            ++(vlSymsp->__Vcoverage[263]);
                        }
                        if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            ++(vlSymsp->__Vcoverage[264]);
                        }
                        if ((VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                             == VL_GETC_N(this->__Vfunc_uvm_re_match__79__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                            ++(vlSymsp->__Vcoverage[265]);
                        }
                        if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                        VL_LEN_IN(this->__Vfunc_uvm_re_match__79__re)) 
                             & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            ++(vlSymsp->__Vcoverage[276]);
                        }
                        if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            ++(vlSymsp->__Vcoverage[277]);
                        }
                        if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                        VL_LEN_IN(this->__Vfunc_uvm_re_match__79__re))) {
                            ++(vlSymsp->__Vcoverage[278]);
                        }
                        ++(vlSymsp->__Vcoverage[282]);
                        __Vfunc_uvm_is_match__77____VlefCall_0__uvm_re_match 
                            = __Vfunc_uvm_re_match__79__Vfuncout;
                        __VlefCall_4__uvm_is_match 
                            = (0U == __Vfunc_uvm_is_match__77____VlefCall_0__uvm_re_match);
                        ++(vlSymsp->__Vcoverage[462]);
                    }
                    if (__VlefCall_4__uvm_is_match) {
                        VL_NULL_CHECK(result_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 695)->__VnoInFunc_push_back(vlSymsp, r);
                        ++(vlSymsp->__Vcoverage[7944]);
                    } else {
                        ++(vlSymsp->__Vcoverage[7945]);
                    }
                    i = ((IData)(1U) + i);
                    ++(vlSymsp->__Vcoverage[7946]);
                }
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[7947]);
        }
        ++(vlSymsp->__Vcoverage[7948]);
    } else {
        ++(vlSymsp->__Vcoverage[7949]);
    }
    lookup_regex__Vfuncrtn = result_q;
    ++(vlSymsp->__Vcoverage[7950]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__84____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__84____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__86__Vfuncout;
    __Vfunc_uvm_re_match__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__86____Vincrement1;
    __Vfunc_uvm_re_match__86____Vincrement1 = 0;
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    IData/*31:0*/ __VlefCall_1__size;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk12__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    std::string name;
    q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
    name = ""s;
    __VlefExpr_0 = (0U != this->__PVT__rtab.last(name));
    if (__VlefExpr_0) {
        while (true) {
            rq = this->__PVT__rtab.at(name);
            unnamedblk12__DOT__i = 0U;
            unnamedblk12__DOT__i = 0U;
            while (true) {
                VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 729)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                if (!(VL_LTS_III(32, unnamedblk12__DOT__i, __VlefCall_1__size))) break;
                VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 730)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk12__DOT__i, r);
                __VlefCall_2__uvm_is_match = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(r);
                if (__VlefCall_2__uvm_is_match) {
                    this->__Vfunc_uvm_is_match__84__str 
                        = scope;
                    this->__Vfunc_uvm_is_match__84__expr 
                        = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                                             .at(r)
                                             .__PVT__scope);
                    this->__Vfunc_uvm_glob_to_re__85__glob 
                        = this->__Vfunc_uvm_is_match__84__expr;
                    this->__Vfunc_uvm_glob_to_re__85__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__85__glob;
                    ++(vlSymsp->__Vcoverage[283]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__85__Vfuncout;
                    this->__Vfunc_uvm_re_match__86__str 
                        = this->__Vfunc_uvm_is_match__84__str;
                    this->__Vfunc_uvm_re_match__86__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__86____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__86__re))) {
                            __Vfunc_uvm_re_match__86__Vfuncout = 0U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[255]);
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,0U))) {
                            this->__Vfunc_uvm_re_match__86__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__86__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__86__re) 
                                               - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[256]);
                        } else {
                            ++(vlSymsp->__Vcoverage[257]);
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__86__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__86__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__86__Vfuncout = 1U;
                                goto __Vlabel0;
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
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__86__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__86__re))) {
                                    __Vfunc_uvm_re_match__86__Vfuncout = 0U;
                                    goto __Vlabel0;
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
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      == VL_GETC_N(this->__Vfunc_uvm_re_match__86__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
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
                                    __Vfunc_uvm_re_match__86____Vincrement1 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = __Vfunc_uvm_re_match__86____Vincrement1;
                                    ++(vlSymsp->__Vcoverage[270]);
                                }
                                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                    ++(vlSymsp->__Vcoverage[271]);
                                }
                                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__86__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                    ++(vlSymsp->__Vcoverage[272]);
                                }
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      != VL_GETC_N(this->__Vfunc_uvm_re_match__86__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    ++(vlSymsp->__Vcoverage[273]);
                                }
                            }
                            ++(vlSymsp->__Vcoverage[275]);
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__86__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            ++(vlSymsp->__Vcoverage[279]);
                        }
                        __Vfunc_uvm_re_match__86__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__86__re))
                                ? 0U : 1U);
                        __Vlabel0: ;
                    }
                    if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                          != VL_LEN_IN(this->__Vfunc_uvm_re_match__86__str)) 
                         & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[258]);
                    }
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[259]);
                    }
                    if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__86__str))) {
                        ++(vlSymsp->__Vcoverage[260]);
                    }
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__86__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[263]);
                    }
                    if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[264]);
                    }
                    if ((VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                         == VL_GETC_N(this->__Vfunc_uvm_re_match__86__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                        ++(vlSymsp->__Vcoverage[265]);
                    }
                    if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__86__re)) 
                         & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[276]);
                    }
                    if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[277]);
                    }
                    if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__86__re))) {
                        ++(vlSymsp->__Vcoverage[278]);
                    }
                    ++(vlSymsp->__Vcoverage[282]);
                    __Vfunc_uvm_is_match__84____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__86__Vfuncout;
                    __VlefCall_2__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__84____VlefCall_0__uvm_re_match);
                    ++(vlSymsp->__Vcoverage[462]);
                }
                if (__VlefCall_2__uvm_is_match) {
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 732)->__VnoInFunc_push_back(vlSymsp, r);
                    ++(vlSymsp->__Vcoverage[7951]);
                } else {
                    ++(vlSymsp->__Vcoverage[7952]);
                }
                unnamedblk12__DOT__i = ((IData)(1U) 
                                        + unnamedblk12__DOT__i);
                ++(vlSymsp->__Vcoverage[7953]);
            }
            ++(vlSymsp->__Vcoverage[7954]);
            __VlefExpr_3 = (0U != this->__PVT__rtab.prev(name));
            if (!(__VlefExpr_3)) break;
            ++(vlSymsp->__Vcoverage[7955]);
        }
        ++(vlSymsp->__Vcoverage[7956]);
    } else {
        ++(vlSymsp->__Vcoverage[7957]);
    }
    lookup_scope__Vfuncrtn = q;
    ++(vlSymsp->__Vcoverage[7958]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q, IData/*31:0*/ &pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__91__verbosity;
    __Vtask_uvm_report_error__91__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__91__line;
    __Vtask_uvm_report_error__91__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__91__report_enabled_checked;
    __Vtask_uvm_report_error__91__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    std::string msg;
    std::string name;
    {
        i = 0U;
        msg = ""s;
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 769)->__VnoInFunc_get_name(vlSymsp, name);
        i = 0U;
        {
            while (true) {
                VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 771)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                if (!((i < __VlefCall_0__size))) break;
                VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 772)->__VnoInFunc_get(vlProcess, vlSymsp, i, r);
                if ((r == rsrc)) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[7960]);
                }
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[7961]);
            }
            __Vlabel1: ;
        }
        if ((r != rsrc)) {
            VL_SFORMAT_NX(64,msg,"Handle for resource named %@ is not in the name name; cannot change its priority",0,
                          -1,&(name));
            __Vtask_uvm_report_error__91__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__91__context_name = ""s;
            __Vtask_uvm_report_error__91__line = 0U;
            this->__Vtask_uvm_report_error__91__filename = ""s;
            __Vtask_uvm_report_error__91__verbosity = 0U;
            this->__Vtask_uvm_report_error__91__message 
                = msg;
            this->__Vtask_uvm_report_error__91__id = "NORSRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__91__id, this->__Vtask_uvm_report_error__91__message, __Vtask_uvm_report_error__91__verbosity, this->__Vtask_uvm_report_error__91__filename, __Vtask_uvm_report_error__91__line, this->__Vtask_uvm_report_error__91__context_name, (IData)(__Vtask_uvm_report_error__91__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7963]);
        }
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 782)->__VnoInFunc_delete(vlProcess, vlSymsp, i);
        if ((0U == pri)) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 785)->__VnoInFunc_push_front(vlSymsp, rsrc);
            ++(vlSymsp->__Vcoverage[7964]);
        } else if ((1U == pri)) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 786)->__VnoInFunc_push_back(vlSymsp, rsrc);
            ++(vlSymsp->__Vcoverage[7965]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7966]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__98__verbosity;
    __Vtask_uvm_report_warning__98__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__98__line;
    __Vtask_uvm_report_warning__98__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__98__report_enabled_checked;
    __Vtask_uvm_report_warning__98__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__104__verbosity;
    __Vtask_uvm_report_error__104__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__104__line;
    __Vtask_uvm_report_error__104__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__104__report_enabled_checked;
    __Vtask_uvm_report_error__104__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_0__get_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle;
    std::string msg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    {
        msg = ""s;
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__98__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__98__context_name = ""s;
            __Vtask_uvm_report_warning__98__line = 0U;
            this->__Vtask_uvm_report_warning__98__filename = ""s;
            __Vtask_uvm_report_warning__98__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__98__message = "attempting to change the serach priority of a null resource"s;
            this->__Vtask_uvm_report_warning__98__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__99__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__100__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__98__id, this->__Vtask_uvm_report_warning__98__message, __Vtask_uvm_report_warning__98__verbosity, this->__Vtask_uvm_report_warning__98__filename, __Vtask_uvm_report_warning__98__line, this->__Vtask_uvm_report_warning__98__context_name, (IData)(__Vtask_uvm_report_warning__98__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7968]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 811)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, type_handle);
        if (this->__PVT__ttab.exists(type_handle)) {
            ++(vlSymsp->__Vcoverage[7970]);
        } else {
            VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 813)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_SFORMAT_NX(64,msg,"Type handle for resrouce named %@ not found in type map; cannot change its search priority",0,
                          -1,&(__VlefCall_0__get_name));
            __Vtask_uvm_report_error__104__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__104__context_name = ""s;
            __Vtask_uvm_report_error__104__line = 0U;
            this->__Vtask_uvm_report_error__104__filename = ""s;
            __Vtask_uvm_report_error__104__verbosity = 0U;
            this->__Vtask_uvm_report_error__104__message 
                = msg;
            this->__Vtask_uvm_report_error__104__id = "RNFTYPE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__105__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__106__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__104__id, this->__Vtask_uvm_report_error__104__message, __Vtask_uvm_report_error__104__verbosity, this->__Vtask_uvm_report_error__104__filename, __Vtask_uvm_report_error__104__line, this->__Vtask_uvm_report_error__104__context_name, (IData)(__Vtask_uvm_report_error__104__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            goto __Vlabel0;
        }
        q = this->__PVT__ttab.at(type_handle);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, q, pri);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7971]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__109__verbosity;
    __Vtask_uvm_report_warning__109__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__109__line;
    __Vtask_uvm_report_warning__109__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__109__report_enabled_checked;
    __Vtask_uvm_report_warning__109__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__114__verbosity;
    __Vtask_uvm_report_error__114__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__114__line;
    __Vtask_uvm_report_error__114__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__114__report_enabled_checked;
    __Vtask_uvm_report_error__114__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    // Body
    std::string name;
    std::string msg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    {
        name = ""s;
        msg = ""s;
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__109__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__109__context_name = ""s;
            __Vtask_uvm_report_warning__109__line = 0U;
            this->__Vtask_uvm_report_warning__109__filename = ""s;
            __Vtask_uvm_report_warning__109__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__109__message = "attempting to change the serach priority of a null resource"s;
            this->__Vtask_uvm_report_warning__109__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__110__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__111__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__109__id, this->__Vtask_uvm_report_warning__109__message, __Vtask_uvm_report_warning__109__verbosity, this->__Vtask_uvm_report_warning__109__filename, __Vtask_uvm_report_warning__109__line, this->__Vtask_uvm_report_warning__109__context_name, (IData)(__Vtask_uvm_report_warning__109__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7973]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 842)->__VnoInFunc_get_name(vlSymsp, name);
        if (this->__PVT__rtab.exists(name)) {
            ++(vlSymsp->__Vcoverage[7975]);
        } else {
            VL_SFORMAT_NX(64,msg,"Resrouce named %@ not found in name map; cannot change its search priority",0,
                          -1,&(name));
            __Vtask_uvm_report_error__114__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__114__context_name = ""s;
            __Vtask_uvm_report_error__114__line = 0U;
            this->__Vtask_uvm_report_error__114__filename = ""s;
            __Vtask_uvm_report_error__114__verbosity = 0U;
            this->__Vtask_uvm_report_error__114__message 
                = msg;
            this->__Vtask_uvm_report_error__114__id = "RNFNAME"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__115__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__116__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__114__id, this->__Vtask_uvm_report_error__114__message, __Vtask_uvm_report_error__114__verbosity, this->__Vtask_uvm_report_error__114__filename, __Vtask_uvm_report_error__114__line, this->__Vtask_uvm_report_error__114__context_name, (IData)(__Vtask_uvm_report_error__114__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            goto __Vlabel0;
        }
        q = this->__PVT__rtab.at(name);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, q, pri);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7976]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_set_priority_type(vlSymsp, rsrc, pri);
    this->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, rsrc, pri);
    ++(vlSymsp->__Vcoverage[7977]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_precedence\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__121__verbosity;
    __Vtask_uvm_report_warning__121__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__121__line;
    __Vtask_uvm_report_warning__121__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__121__report_enabled_checked;
    __Vtask_uvm_report_warning__121__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__122__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__123__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__128__verbosity;
    __Vtask_uvm_report_warning__128__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__128__line;
    __Vtask_uvm_report_warning__128__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__128__report_enabled_checked;
    __Vtask_uvm_report_warning__128__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    std::string name;
    IData/*31:0*/ i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        name = ""s;
        i = 0U;
        if ((VlNull{} == r)) {
            __Vtask_uvm_report_warning__121__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__121__context_name = ""s;
            __Vtask_uvm_report_warning__121__line = 0U;
            this->__Vtask_uvm_report_warning__121__filename = ""s;
            __Vtask_uvm_report_warning__121__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__121__message = "attempting to set precedence of a null resource"s;
            this->__Vtask_uvm_report_warning__121__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__122__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__122__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__123__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__123__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__121__id, this->__Vtask_uvm_report_warning__121__message, __Vtask_uvm_report_warning__121__verbosity, this->__Vtask_uvm_report_warning__121__filename, __Vtask_uvm_report_warning__121__line, this->__Vtask_uvm_report_warning__121__context_name, (IData)(__Vtask_uvm_report_warning__121__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7981]);
        }
        VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 896)->__VnoInFunc_get_name(vlSymsp, name);
        if (this->__PVT__rtab.exists(name)) {
            q = this->__PVT__rtab.at(name);
            i = 0U;
            {
                while (true) {
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 900)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                    if (!((i < __VlefCall_0__size))) break;
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 901)->__VnoInFunc_get(vlProcess, vlSymsp, i, rsrc);
                    if ((rsrc == r)) {
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[7983]);
                    }
                    i = ((IData)(1U) + i);
                    ++(vlSymsp->__Vcoverage[7984]);
                }
                __Vlabel1: ;
            }
            ++(vlSymsp->__Vcoverage[7985]);
        } else {
            ++(vlSymsp->__Vcoverage[7986]);
        }
        if ((r != rsrc)) {
            __Vtask_uvm_report_warning__128__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__128__context_name = ""s;
            __Vtask_uvm_report_warning__128__line = 0U;
            this->__Vtask_uvm_report_warning__128__filename = ""s;
            __Vtask_uvm_report_warning__128__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__128__message 
                = VL_SFORMATF_N_NX("resource named %@ is not placed within the pool",0,
                                   -1,&(name)) ;
            this->__Vtask_uvm_report_warning__128__id = "NORSRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__129__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__129__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__130__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__128__id, this->__Vtask_uvm_report_warning__128__message, __Vtask_uvm_report_warning__128__verbosity, this->__Vtask_uvm_report_warning__128__filename, __Vtask_uvm_report_warning__128__line, this->__Vtask_uvm_report_warning__128__context_name, (IData)(__Vtask_uvm_report_warning__128__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7988]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.at(r).__PVT__precedence 
            = p;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7989]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_precedence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ &get_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_precedence\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__132__verbosity;
    __Vtask_uvm_report_warning__132__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__132__line;
    __Vtask_uvm_report_warning__132__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__132__report_enabled_checked;
    __Vtask_uvm_report_warning__132__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__140__verbosity;
    __Vtask_uvm_report_warning__140__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__140__line;
    __Vtask_uvm_report_warning__140__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__140__report_enabled_checked;
    __Vtask_uvm_report_warning__140__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__141__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__142__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> q;
    std::string name;
    IData/*31:0*/ i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        get_precedence__Vfuncrtn = 0U;
        name = ""s;
        i = 0U;
        if ((VlNull{} == r)) {
            __Vtask_uvm_report_warning__132__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__132__context_name = ""s;
            __Vtask_uvm_report_warning__132__line = 0U;
            this->__Vtask_uvm_report_warning__132__filename = ""s;
            __Vtask_uvm_report_warning__132__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__132__message = "attempting to get precedence of a null resource"s;
            this->__Vtask_uvm_report_warning__132__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__133__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__133__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__134__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__132__id, this->__Vtask_uvm_report_warning__132__message, __Vtask_uvm_report_warning__132__verbosity, this->__Vtask_uvm_report_warning__132__filename, __Vtask_uvm_report_warning__132__line, this->__Vtask_uvm_report_warning__132__context_name, (IData)(__Vtask_uvm_report_warning__132__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, get_precedence__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7991]);
        }
        VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 928)->__VnoInFunc_get_name(vlSymsp, name);
        if (this->__PVT__rtab.exists(name)) {
            q = this->__PVT__rtab.at(name);
            i = 0U;
            {
                while (true) {
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 932)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                    if (!((i < __VlefCall_0__size))) break;
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 933)->__VnoInFunc_get(vlProcess, vlSymsp, i, rsrc);
                    if ((rsrc == r)) {
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[7993]);
                    }
                    i = ((IData)(1U) + i);
                    ++(vlSymsp->__Vcoverage[7994]);
                }
                __Vlabel1: ;
            }
            ++(vlSymsp->__Vcoverage[7995]);
        } else {
            ++(vlSymsp->__Vcoverage[7996]);
        }
        if ((r != rsrc)) {
            __Vtask_uvm_report_warning__140__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__140__context_name = ""s;
            __Vtask_uvm_report_warning__140__line = 0U;
            this->__Vtask_uvm_report_warning__140__filename = ""s;
            __Vtask_uvm_report_warning__140__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__140__message 
                = VL_SFORMATF_N_NX("resource named %@ is not placed within the pool",0,
                                   -1,&(name)) ;
            this->__Vtask_uvm_report_warning__140__id = "NORSRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__141__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__141__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__142__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__142__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__140__id, this->__Vtask_uvm_report_warning__140__message, __Vtask_uvm_report_warning__140__verbosity, this->__Vtask_uvm_report_warning__140__filename, __Vtask_uvm_report_warning__140__line, this->__Vtask_uvm_report_warning__140__context_name, (IData)(__Vtask_uvm_report_warning__140__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, get_precedence__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7998]);
        }
        get_precedence__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
            .at(r).__PVT__precedence;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7999]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_m_print_resources(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_m_print_resources\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vfunc_uvm_object_value_str__147__v;
    IData/*31:0*/ __Vfunc_uvm_object_value_str__147____VlefCall_0__get_inst_id;
    __Vfunc_uvm_object_value_str__147____VlefCall_0__get_inst_id = 0;
    IData/*31:0*/ __Vtask_get_inst_id__148__Vfuncout;
    __Vtask_get_inst_id__148__Vfuncout = 0;
    CData/*0:0*/ __Vtask_get_scope__153__Vfuncout;
    __Vtask_get_scope__153__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefExpr_9;
    CData/*0:0*/ __VlefExpr_8;
    IData/*31:0*/ __VlefCall_7__get_precedence;
    std::string __VlefCall_6__m_value_as_string;
    std::string __VlefCall_5__m_value_type_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__size;
    std::string __VlefCall_2__uvm_object_value_str;
    IData/*31:0*/ __VlefCall_1__size;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk13__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> unnamedblk13__DOT__unnamedblk14__DOT__r;
    std::string unnamedblk13__DOT__unnamedblk14__DOT__scope;
    std::string unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i;
    CData/*0:0*/ unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst;
    unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst = 0;
    VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 993)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 995)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
    __Vfunc_uvm_object_value_str__147__v = rq;
    {
        if ((VlNull{} == __Vfunc_uvm_object_value_str__147__v)) {
            __VlefCall_2__uvm_object_value_str = "<null>"s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[331]);
        }
        VL_NULL_CHECK(__Vfunc_uvm_object_value_str__147__v, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 198)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__148__Vfuncout);
        __Vfunc_uvm_object_value_str__147____VlefCall_0__get_inst_id 
            = __Vtask_get_inst_id__148__Vfuncout;
        __VlefCall_2__uvm_object_value_str = VL_SFORMATF_N_NX("%0d",0,
                                                              32,
                                                              __Vfunc_uvm_object_value_str__147____VlefCall_0__get_inst_id) ;
        __VlefCall_2__uvm_object_value_str = VL_CONCATN_NNN("@"s, __VlefCall_2__uvm_object_value_str);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[332]);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 993)->__VnoInFunc_push_element(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), "uvm_queue#(uvm_resource_base)"s, VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                __VlefCall_1__size) , 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__uvm_object_value_str));
    unnamedblk13__DOT__i = 0U;
    unnamedblk13__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 998)->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
        if (!(VL_LTS_III(32, unnamedblk13__DOT__i, __VlefCall_3__size))) break;
        unnamedblk13__DOT__unnamedblk14__DOT__scope = ""s;
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1001)->__VnoInFunc_push_element(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk13__DOT__i) , "uvm_resource"s, "-"s, "-"s);
        VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1006)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk13__DOT__i, unnamedblk13__DOT__unnamedblk14__DOT__r);
        this->__VnoInFunc_get_scope(vlSymsp, unnamedblk13__DOT__unnamedblk14__DOT__r, this->__Vtask_get_scope__153__scope, __Vtask_get_scope__153__Vfuncout);
        unnamedblk13__DOT__unnamedblk14__DOT__scope 
            = this->__Vtask_get_scope__153__scope;
        VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1009)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1009)->__VnoInFunc_print_string(vlProcess, vlSymsp, "name"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_name), 0x2eU);
        VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1012)->__VnoInFunc_m_value_type_name(vlSymsp, __VlefCall_5__m_value_type_name);
        VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1014)->__VnoInFunc_m_value_as_string(vlSymsp, __VlefCall_6__m_value_as_string);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1011)->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, "value"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__m_value_type_name), ""s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__m_value_as_string));
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1016)->__VnoInFunc_print_string(vlProcess, vlSymsp, "scope"s, unnamedblk13__DOT__unnamedblk14__DOT__scope, 0x2eU);
        this->__VnoInFunc_get_precedence(vlSymsp, unnamedblk13__DOT__unnamedblk14__DOT__r, __VlefCall_7__get_precedence);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1018)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "precedence"s, (QData)((IData)(__VlefCall_7__get_precedence)), 0x00000020U, 0x03000000U, 0x2eU, ""s);
        if (((IData)(audit) && (0U != VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1020)
                                ->__PVT__access.size()))) {
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1021)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "accesses"s, VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1022)
                                                                                ->__PVT__access.size(), "queue"s, 0x2eU);
            __VlefExpr_8 = (0U != VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1024)
                            ->__PVT__access.first(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i));
            if (__VlefExpr_8) {
                unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst = 1U;
                while (true) {
                    __VlefExpr_9 = unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_9)))) {
                        __VlefExpr_9 = (0U != VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1024)
                                        ->__PVT__access.next(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i));
                    }
                    if (!(__VlefExpr_9)) break;
                    unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst = 0U;
                    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1025)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)) , VL_SFORMATF_N_NX("reads: %0# @ %0t  writes: %0# @ %0t",0,
                                                                                32,
                                                                                VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1027)
                                                                                ->__PVT__access
                                                                                .at(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)
                                                                                .__PVT__read_count,
                                                                                64,
                                                                                VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1028)
                                                                                ->__PVT__access
                                                                                .at(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)
                                                                                .__PVT__read_time,
                                                                                -12,
                                                                                32,
                                                                                VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1029)
                                                                                ->__PVT__access
                                                                                .at(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)
                                                                                .__PVT__write_count,
                                                                                64,
                                                                                VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1030)
                                                                                ->__PVT__access
                                                                                .at(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)
                                                                                .__PVT__write_time,
                                                                                -12) , 0x2eU);
                    ++(vlSymsp->__Vcoverage[8000]);
                }
                ++(vlSymsp->__Vcoverage[8001]);
            } else {
                ++(vlSymsp->__Vcoverage[8002]);
            }
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1033)->__VnoInFunc_print_array_footer(vlSymsp, VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1033)
                                                                                ->__PVT__access.size());
            ++(vlSymsp->__Vcoverage[8003]);
        } else {
            ++(vlSymsp->__Vcoverage[8004]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1036)->__VnoInFunc_pop_element(vlSymsp);
        unnamedblk13__DOT__i = ((IData)(1U) + unnamedblk13__DOT__i);
        ++(vlSymsp->__Vcoverage[8005]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1039)->__VnoInFunc_pop_element(vlSymsp);
    ++(vlSymsp->__Vcoverage[8006]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_print_resources(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_print_resources\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__171__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__172__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__175__verbosity;
    __Vtask_uvm_report_info__175__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__175__line;
    __Vtask_uvm_report_info__175__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__175__report_enabled_checked;
    __Vtask_uvm_report_info__175__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__176__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__177__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__emit;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1061)->__VnoInFunc_flush(vlProcess, vlSymsp);
    if ((VlNull{} == rq)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1063)->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, ""s, "uvm_queue#(uvm_resource_base)"s, ""s, "<null>"s);
        ++(vlSymsp->__Vcoverage[8007]);
    } else {
        this->__VnoInFunc_m_print_resources(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, rq, audit);
        ++(vlSymsp->__Vcoverage[8008]);
    }
    this->__Vfunc_uvm_report_enabled__170__id = "UVM/RESOURCE_POOL/PRINT_QUEUE"s;
    __Vfunc_uvm_report_enabled__170__severity = 0U;
    __Vfunc_uvm_report_enabled__170__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__171__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__171__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__172__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__172__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), this->__Vfunc_uvm_report_enabled__170__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1071)->__VnoInFunc_emit(vlProcess, vlSymsp, __VlefCall_1__emit);
        __Vtask_uvm_report_info__175__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__175__context_name = ""s;
        __Vtask_uvm_report_info__175__line = 0x0000042fU;
        this->__Vtask_uvm_report_info__175__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__175__verbosity = 0U;
        this->__Vtask_uvm_report_info__175__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_1__emit);
        this->__Vtask_uvm_report_info__175__id = "UVM/RESOURCE_POOL/PRINT_QUEUE"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__176__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__176__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__177__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__177__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__175__id, this->__Vtask_uvm_report_info__175__message, __Vtask_uvm_report_info__175__verbosity, this->__Vtask_uvm_report_info__175__filename, __Vtask_uvm_report_info__175__line, this->__Vtask_uvm_report_info__175__context_name, (IData)(__Vtask_uvm_report_info__175__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[8009]);
    } else {
        ++(vlSymsp->__Vcoverage[8010]);
    }
    ++(vlSymsp->__Vcoverage[8011]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ audit, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__185__verbosity;
    __Vfunc_uvm_report_enabled__185__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__185__severity;
    __Vfunc_uvm_report_enabled__185__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__186__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__187__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__190__verbosity;
    __Vtask_uvm_report_info__190__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__190__line;
    __Vtask_uvm_report_info__190__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__190__report_enabled_checked;
    __Vtask_uvm_report_info__190__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__191__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__192__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_3__emit;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk16__DOT__name;
    CData/*0:0*/ unnamedblk16__DOT__name__Vfirst;
    unnamedblk16__DOT__name__Vfirst = 0;
    if ((VlNull{} == vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__dump__Vstatic__m_printer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__dump__Vstatic__m_printer 
            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, ""s);
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__dump__Vstatic__m_printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1089)->__VnoInFunc_set_type_name_enabled(vlSymsp, 1U);
        ++(vlSymsp->__Vcoverage[8012]);
    } else {
        ++(vlSymsp->__Vcoverage[8013]);
    }
    if ((VlNull{} == printer)) {
        printer = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__dump__Vstatic__m_printer;
        ++(vlSymsp->__Vcoverage[8014]);
    } else {
        ++(vlSymsp->__Vcoverage[8015]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1096)->__VnoInFunc_flush(vlProcess, vlSymsp);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1097)->__VnoInFunc_push_element(vlProcess, vlSymsp, "uvm_resource_pool"s, ""s, VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                this->__PVT__rtab.size()) , ""s);
    __VlefExpr_0 = (0U != this->__PVT__rtab.first(unnamedblk16__DOT__name));
    if (__VlefExpr_0) {
        unnamedblk16__DOT__name__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk16__DOT__name__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__rtab.next(unnamedblk16__DOT__name));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk16__DOT__name__Vfirst = 0U;
            this->__VnoInFunc_m_print_resources(vlSymsp, printer, this->__PVT__rtab
                                                .at(unnamedblk16__DOT__name), audit);
            ++(vlSymsp->__Vcoverage[8016]);
        }
        ++(vlSymsp->__Vcoverage[8017]);
    } else {
        ++(vlSymsp->__Vcoverage[8018]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1106)->__VnoInFunc_pop_element(vlSymsp);
    this->__Vfunc_uvm_report_enabled__185__id = "UVM/RESOURCE/DUMP"s;
    __Vfunc_uvm_report_enabled__185__severity = 0U;
    __Vfunc_uvm_report_enabled__185__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__186__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__186__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__187__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__187__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__185__verbosity, (IData)(__Vfunc_uvm_report_enabled__185__severity), this->__Vfunc_uvm_report_enabled__185__id, __VlefCall_2__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1108)->__VnoInFunc_emit(vlProcess, vlSymsp, __VlefCall_3__emit);
        __Vtask_uvm_report_info__190__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__190__context_name = ""s;
        __Vtask_uvm_report_info__190__line = 0x00000454U;
        this->__Vtask_uvm_report_info__190__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__190__verbosity = 0U;
        this->__Vtask_uvm_report_info__190__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_3__emit);
        this->__Vtask_uvm_report_info__190__id = "UVM/RESOURCE/DUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__191__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__191__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__192__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__192__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__190__id, this->__Vtask_uvm_report_info__190__message, __Vtask_uvm_report_info__190__verbosity, this->__Vtask_uvm_report_info__190__filename, __Vtask_uvm_report_info__190__line, this->__Vtask_uvm_report_info__190__context_name, (IData)(__Vtask_uvm_report_info__190__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[8019]);
    } else {
        ++(vlSymsp->__Vcoverage[8020]);
    }
    ++(vlSymsp->__Vcoverage[8021]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rtab:" + VL_TO_STRING(__PVT__rtab);
    out += ", ttab:" + VL_TO_STRING(__PVT__ttab);
    out += ", get_record:" + VL_TO_STRING(__PVT__get_record);
    return (out);
}
