// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_get_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_get_by_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> __Vfunc_get_type__1__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__verbosity;
    __Vtask_uvm_report_warning__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__line;
    __Vtask_uvm_report_warning__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__7__report_enabled_checked;
    __Vtask_uvm_report_warning__7__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    std::string msg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        msg = ""s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__1__Vfuncout);
        type_handle = __Vfunc_get_type__1__Vfuncout;
        if ((VlNull{} == type_handle)) {
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9299]);
        }
        VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 81)->__VnoInFunc_get_by_type(vlSymsp, scope, type_handle, rsrc_base);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rsrc_base, rsrc);
        if (__VlefExpr_0) {
            ++(vlSymsp->__Vcoverage[9303]);
        } else {
            VL_SFORMAT_NX(64,msg,"Resource with specified type handle in scope %@ was not located",0,
                          -1,&(scope));
            this->__Vfunc_uvm_report_enabled__3__id = "RSRCNF"s;
            __Vfunc_uvm_report_enabled__3__severity = 1U;
            __Vfunc_uvm_report_enabled__3__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__5__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__7__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__7__context_name = ""s;
                __Vtask_uvm_report_warning__7__line = 0x00000054U;
                this->__Vtask_uvm_report_warning__7__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh"s;
                __Vtask_uvm_report_warning__7__verbosity = 0U;
                this->__Vtask_uvm_report_warning__7__message 
                    = msg;
                this->__Vtask_uvm_report_warning__7__id = "RSRCNF"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__8__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__7__id, this->__Vtask_uvm_report_warning__7__message, __Vtask_uvm_report_warning__7__verbosity, this->__Vtask_uvm_report_warning__7__filename, __Vtask_uvm_report_warning__7__line, this->__Vtask_uvm_report_warning__7__context_name, (IData)(__Vtask_uvm_report_warning__7__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[9300]);
            } else {
                ++(vlSymsp->__Vcoverage[9301]);
            }
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_type__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9304]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_get_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_get_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__verbosity;
    __Vtask_uvm_report_warning__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__line;
    __Vtask_uvm_report_warning__18__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__18__report_enabled_checked;
    __Vtask_uvm_report_warning__18__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> __VlefCall_0__get_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    std::string msg;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        msg = ""s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __VlefCall_0__get_type);
        VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 108)->__VnoInFunc_get_by_name(vlProcess, vlSymsp, scope, name, __VlefCall_0__get_type, rpterr, rsrc_base);
        if ((VlNull{} == rsrc_base)) {
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9306]);
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(rsrc_base, rsrc);
        if (__VlefExpr_1) {
            ++(vlSymsp->__Vcoverage[9312]);
        } else {
            if (rpterr) {
                VL_SFORMAT_NX(64,msg,"Resource with name %@ in scope %@ has incorrect type",0,
                              -1,&(name),-1,&(scope));
                this->__Vfunc_uvm_report_enabled__14__id = "RSRCTYPE"s;
                __Vfunc_uvm_report_enabled__14__severity = 1U;
                __Vfunc_uvm_report_enabled__14__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), this->__Vfunc_uvm_report_enabled__14__id, __VlefCall_2__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__18__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__18__context_name = ""s;
                    __Vtask_uvm_report_warning__18__line = 0x00000073U;
                    this->__Vtask_uvm_report_warning__18__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh"s;
                    __Vtask_uvm_report_warning__18__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__18__message 
                        = msg;
                    this->__Vtask_uvm_report_warning__18__id = "RSRCTYPE"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__18__id, this->__Vtask_uvm_report_warning__18__message, __Vtask_uvm_report_warning__18__verbosity, this->__Vtask_uvm_report_warning__18__filename, __Vtask_uvm_report_warning__18__line, this->__Vtask_uvm_report_warning__18__context_name, (IData)(__Vtask_uvm_report_warning__18__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[441]);
                    ++(vlSymsp->__Vcoverage[9307]);
                } else {
                    ++(vlSymsp->__Vcoverage[9308]);
                }
                ++(vlSymsp->__Vcoverage[9309]);
            } else {
                ++(vlSymsp->__Vcoverage[9310]);
            }
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9313]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> &set_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> r;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    r = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 136)->__VnoInFunc_set_scope(vlProcess, vlSymsp, r, scope);
    set_default__Vfuncrtn = r;
    ++(vlSymsp->__Vcoverage[9314]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_m_show_msg(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_m_show_msg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__verbosity;
    __Vfunc_uvm_report_enabled__27__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__27__severity;
    __Vfunc_uvm_report_enabled__27__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__31__verbosity;
    __Vtask_uvm_report_info__31__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__31__line;
    __Vtask_uvm_report_info__31__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__31__report_enabled_checked;
    __Vtask_uvm_report_info__31__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__convert2string;
    std::string __VlefCall_0__get_full_name;
    std::string msg;
    msg = "PARAMTYPEDTYPE 'T'"s;
    if ((VlNull{} != accessor)) {
        VL_NULL_CHECK(accessor, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 158)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    } else {
        __VlefCall_0__get_full_name = "<unknown>"s;
    }
    if ((VlNull{} == rsrc)) {
        __VlefCall_1__convert2string = "null (failed lookup)"s;
    } else {
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 159)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    }
    VL_SFORMAT_NX(64,msg,"%@ scope='%@' name='%@' (type PARAMTYPEDTYPE 'T') %@ accessor=%@ = %@",0,
                  -1,&(rtype),-1,&(scope),-1,&(name),
                  -1,&(action),-1,&(__VlefCall_0__get_full_name),
                  -1,&(__VlefCall_1__convert2string));
    this->__Vfunc_uvm_report_enabled__27__id = id;
    __Vfunc_uvm_report_enabled__27__severity = 0U;
    __Vfunc_uvm_report_enabled__27__verbosity = 0x00000064U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__28__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__28__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__29__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__27__verbosity, (IData)(__Vfunc_uvm_report_enabled__27__severity), this->__Vfunc_uvm_report_enabled__27__id, __VlefCall_2__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        __Vtask_uvm_report_info__31__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__31__context_name = ""s;
        __Vtask_uvm_report_info__31__line = 0x000000a1U;
        this->__Vtask_uvm_report_info__31__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh"s;
        __Vtask_uvm_report_info__31__verbosity = 0x00000064U;
        this->__Vtask_uvm_report_info__31__message 
            = msg;
        this->__Vtask_uvm_report_info__31__id = id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__32__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__33__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__31__id, this->__Vtask_uvm_report_info__31__message, __Vtask_uvm_report_info__31__verbosity, this->__Vtask_uvm_report_info__31__filename, __Vtask_uvm_report_info__31__line, this->__Vtask_uvm_report_info__31__context_name, (IData)(__Vtask_uvm_report_info__31__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[9315]);
    } else {
        ++(vlSymsp->__Vcoverage[9316]);
    }
    ++(vlSymsp->__Vcoverage[9317]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    rsrc = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 171)->__VnoInFunc_write(vlProcess, vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 172)->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, scope);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/SET"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
        ++(vlSymsp->__Vcoverage[9318]);
    } else {
        ++(vlSymsp->__Vcoverage[9319]);
    }
    ++(vlSymsp->__Vcoverage[9320]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_anonymous(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_anonymous\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    rsrc = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, ""s);
    VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 185)->__VnoInFunc_write(vlProcess, vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 186)->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, scope);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/SETANON"s, "Resource"s, "set"s, scope, ""s, accessor, rsrc);
        ++(vlSymsp->__Vcoverage[9321]);
    } else {
        ++(vlSymsp->__Vcoverage[9322]);
    }
    ++(vlSymsp->__Vcoverage[9323]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_override(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    rsrc = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 204)->__VnoInFunc_write(vlProcess, vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 205)->__VnoInFunc_set_override(vlSymsp, rsrc, scope);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/SETOVRD"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
        ++(vlSymsp->__Vcoverage[9324]);
    } else {
        ++(vlSymsp->__Vcoverage[9325]);
    }
    ++(vlSymsp->__Vcoverage[9326]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_override_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_override_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    rsrc = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 226)->__VnoInFunc_write(vlProcess, vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 227)->__VnoInFunc_set_type_override(vlSymsp, rsrc, scope);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/SETOVRDTYP"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
        ++(vlSymsp->__Vcoverage[9327]);
    } else {
        ++(vlSymsp->__Vcoverage[9328]);
    }
    ++(vlSymsp->__Vcoverage[9329]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_override_name(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_set_override_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    rsrc = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 246)->__VnoInFunc_write(vlProcess, vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 247)->__VnoInFunc_set_name_override(vlSymsp, rsrc, scope);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
    if (__VlefCall_0__is_tracing) {
        this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/SETOVRDNAM"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
        ++(vlSymsp->__Vcoverage[9330]);
    } else {
        ++(vlSymsp->__Vcoverage[9331]);
    }
    ++(vlSymsp->__Vcoverage[9332]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_read_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ &val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_read_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    {
        read_by_name__Vfuncrtn = 0U;
        this->__VnoInFunc_get_by_name(vlSymsp, scope, name, 1U, rsrc);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
        if (__VlefCall_0__is_tracing) {
            this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/RDBYNAM"s, "Resource"s, "read"s, scope, name, accessor, rsrc);
            ++(vlSymsp->__Vcoverage[9333]);
        } else {
            ++(vlSymsp->__Vcoverage[9334]);
        }
        if ((VlNull{} == rsrc)) {
            read_by_name__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9336]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 287)->__VnoInFunc_read(vlProcess, vlSymsp, accessor, val);
        read_by_name__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9337]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_read_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ &val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_read_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    {
        read_by_type__Vfuncrtn = 0U;
        this->__VnoInFunc_get_by_type(vlSymsp, scope, rsrc);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
        if (__VlefCall_0__is_tracing) {
            this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/RDBYTYP"s, "Resource"s, "read"s, scope, ""s, accessor, rsrc);
            ++(vlSymsp->__Vcoverage[9338]);
        } else {
            ++(vlSymsp->__Vcoverage[9339]);
        }
        if ((VlNull{} == rsrc)) {
            read_by_type__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9341]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 325)->__VnoInFunc_read(vlProcess, vlSymsp, accessor, val);
        read_by_type__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9342]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_write_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlWide<128>/*4095:0*/ val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_write_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    {
        write_by_name__Vfuncrtn = 0U;
        this->__VnoInFunc_get_by_name(vlSymsp, scope, name, 1U, rsrc);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
        if (__VlefCall_0__is_tracing) {
            this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/WR"s, "Resource"s, "written"s, scope, name, accessor, rsrc);
            ++(vlSymsp->__Vcoverage[9343]);
        } else {
            ++(vlSymsp->__Vcoverage[9344]);
        }
        if ((VlNull{} == rsrc)) {
            write_by_name__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9346]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 344)->__VnoInFunc_write(vlProcess, vlSymsp, val, accessor);
        write_by_name__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9347]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_write_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlWide<128>/*4095:0*/ val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_write_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    {
        write_by_type__Vfuncrtn = 0U;
        this->__VnoInFunc_get_by_type(vlSymsp, scope, rsrc);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __VlefCall_0__is_tracing);
        if (__VlefCall_0__is_tracing) {
            this->__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "RSRCDB/WRTYP"s, "Resource"s, "written"s, scope, ""s, accessor, rsrc);
            ++(vlSymsp->__Vcoverage[9348]);
        } else {
            ++(vlSymsp->__Vcoverage[9349]);
        }
        if ((VlNull{} == rsrc)) {
            write_by_type__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9351]);
        }
        VL_NULL_CHECK(rsrc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 363)->__VnoInFunc_write(vlProcess, vlSymsp, val, accessor);
        write_by_type__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9352]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_dump(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg::__VnoInFunc_dump\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 377)->__VnoInFunc_dump(vlSymsp, 0U, VlNull{});
    ++(vlSymsp->__Vcoverage[9353]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[9297]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::~Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::to_string_middle\n"); );
    // Body
    return (""s);
}
