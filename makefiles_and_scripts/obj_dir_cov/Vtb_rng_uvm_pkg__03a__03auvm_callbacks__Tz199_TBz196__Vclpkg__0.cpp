// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz199> __Vtask_m_initialize__0__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz48> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz196> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz199> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199> __Vfunc_get__5__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    if ((VlNull{} == this->__PVT__m_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__0__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz48__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__1__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz196__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        this->__PVT__m_cb_typeid = __Vfunc_get__2__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz199__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        this->__PVT__m_typeid = __Vfunc_get__3__Vfuncout;
        this->__PVT__m_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196, vlProcess, vlSymsp);
        if (VL_UNLIKELY(((unnamedblk1__DOT__cb_base_type 
                          == this->__PVT__m_cb_typeid)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_callback.svh:528: Assertion failed in %Nuvm_pkg.uvm_callbacks__Tz199_TBz196.get.unnamedblk1: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 528, "");
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_t_inst 
                = this->__PVT__m_base_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map.at(this->__PVT__m_typeid) 
                = this->__PVT__m_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__type_map.at(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst) 
                = this->__PVT__m_typeid;
            ++(vlSymsp->__Vcoverage[11873]);
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
            this->__PVT__m_base_inst = __Vfunc_get__5__Vfuncout;
            VL_NULL_CHECK(this->__PVT__m_base_inst, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 536)->__PVT__m_this_type.push_back(this->__PVT__m_inst);
            ++(vlSymsp->__Vcoverage[11874]);
        }
        if ((VlNull{} == this->__PVT__m_inst)) {
            this->__Vfunc_uvm_report_enabled__6__id = "CB/INTERNAL"s;
            __Vfunc_uvm_report_enabled__6__severity = 3U;
            __Vfunc_uvm_report_enabled__6__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), this->__Vfunc_uvm_report_enabled__6__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "CB/INTERNAL"s, "get(): m_inst is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh"s, 0x0000021cU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[11875]);
            } else {
                ++(vlSymsp->__Vcoverage[11876]);
            }
            ++(vlSymsp->__Vcoverage[11877]);
        } else {
            ++(vlSymsp->__Vcoverage[11878]);
        }
        ++(vlSymsp->__Vcoverage[11879]);
    } else {
        ++(vlSymsp->__Vcoverage[11880]);
    }
    get__Vfuncrtn = this->__PVT__m_inst;
    ++(vlSymsp->__Vcoverage[11881]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> inst;
    m_register_pair__Vfuncrtn = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, inst);
    this->__PVT__m_typename = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_typename 
        = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = tname;
    this->__PVT__m_cb_typename = cbname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 562)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
    ++(vlSymsp->__Vcoverage[11882]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_add(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__15__verbosity;
    __Vtask_uvm_report_error__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__15__line;
    __Vtask_uvm_report_error__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__15__report_enabled_checked;
    __Vtask_uvm_report_error__15__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__24__verbosity;
    __Vtask_uvm_report_warning__24__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__24__line;
    __Vtask_uvm_report_warning__24__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__24__report_enabled_checked;
    __Vtask_uvm_report_warning__24__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__30__verbosity;
    __Vtask_uvm_report_warning__30__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__30__line;
    __Vtask_uvm_report_warning__30__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__30__report_enabled_checked;
    __Vtask_uvm_report_warning__30__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__45__verbosity;
    __Vtask_uvm_report_warning__45__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__45__line;
    __Vtask_uvm_report_warning__45__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__45__report_enabled_checked;
    __Vtask_uvm_report_warning__45__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_m_cb_find_name__51__Vfuncout;
    __Vtask_m_cb_find_name__51__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_name;
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_name;
    IData/*31:0*/ __VlefCall_8__m_cb_find;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> __VlefCall_7__get;
    IData/*31:0*/ __VlefCall_6__size;
    IData/*31:0*/ __VlefCall_5__size;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__m_cb_find;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__check_registration;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk5__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
    std::string nm;
    std::string tnm;
    {
        nm = ""s;
        tnm = ""s;
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__12__Vfuncout);
        if ((VlNull{} == cb)) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
                ++(vlSymsp->__Vcoverage[11887]);
            } else {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 608)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
                ++(vlSymsp->__Vcoverage[11888]);
            }
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199__Vclpkg.__PVT__m_typename)) {
                tnm = vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199__Vclpkg.__PVT__m_typename;
                ++(vlSymsp->__Vcoverage[11891]);
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 613)->__VnoInFunc_get_type_name(vlSymsp, tnm);
                ++(vlSymsp->__Vcoverage[11889]);
            } else {
                tnm = "uvm_object"s;
                ++(vlSymsp->__Vcoverage[11890]);
            }
            __Vtask_uvm_report_error__15__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__15__context_name = ""s;
            __Vtask_uvm_report_error__15__line = 0U;
            this->__Vtask_uvm_report_error__15__filename = ""s;
            __Vtask_uvm_report_error__15__verbosity = 0U;
            this->__Vtask_uvm_report_error__15__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Null callback object cannot be registered with object "s, nm), " ("s), tnm), ")"s));
            this->__Vtask_uvm_report_error__15__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__15__id, this->__Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, this->__Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, this->__Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11893]);
        }
        VL_NULL_CHECK(this->__PVT__m_base_inst, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 623)->__VnoInFunc_check_registration(vlSymsp, obj, cb, __VlefCall_0__check_registration);
        if (__VlefCall_0__check_registration) {
            ++(vlSymsp->__Vcoverage[11900]);
        } else {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
                ++(vlSymsp->__Vcoverage[11894]);
            } else {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 628)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
                ++(vlSymsp->__Vcoverage[11895]);
            }
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199__Vclpkg.__PVT__m_typename)) {
                tnm = vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199__Vclpkg.__PVT__m_typename;
                ++(vlSymsp->__Vcoverage[11898]);
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 633)->__VnoInFunc_get_type_name(vlSymsp, tnm);
                ++(vlSymsp->__Vcoverage[11896]);
            } else {
                tnm = "uvm_object"s;
                ++(vlSymsp->__Vcoverage[11897]);
            }
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 638)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 639)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            __Vtask_uvm_report_warning__24__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__24__context_name = ""s;
            __Vtask_uvm_report_warning__24__line = 0U;
            this->__Vtask_uvm_report_warning__24__filename = ""s;
            __Vtask_uvm_report_warning__24__verbosity = 0U;
            this->__Vtask_uvm_report_warning__24__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback "s, __VlefCall_1__get_name), " cannot be registered with object "s), nm), " because callback type "s), __VlefCall_2__get_type_name), " is not registered with object type "s), tnm));
            this->__Vtask_uvm_report_warning__24__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__24__id, this->__Vtask_uvm_report_warning__24__message, __Vtask_uvm_report_warning__24__verbosity, this->__Vtask_uvm_report_warning__24__filename, __Vtask_uvm_report_warning__24__line, this->__Vtask_uvm_report_warning__24__context_name, (IData)(__Vtask_uvm_report_warning__24__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[436]);
            ++(vlSymsp->__Vcoverage[11899]);
        }
        if ((VlNull{} == obj)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_tw_cb_q, cb, __VlefCall_3__m_cb_find);
            if ((0xffffffffU != __VlefCall_3__m_cb_find)) {
                if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199__Vclpkg.__PVT__m_typename)) {
                    tnm = vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199__Vclpkg.__PVT__m_typename;
                    ++(vlSymsp->__Vcoverage[11901]);
                } else {
                    tnm = "uvm_object"s;
                    ++(vlSymsp->__Vcoverage[11902]);
                }
                VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 652)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__30__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__30__context_name = ""s;
                __Vtask_uvm_report_warning__30__line = 0U;
                this->__Vtask_uvm_report_warning__30__filename = ""s;
                __Vtask_uvm_report_warning__30__verbosity = 0U;
                this->__Vtask_uvm_report_warning__30__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Callback object "s, __VlefCall_4__get_name), " is already registered with type "s), tnm));
                this->__Vtask_uvm_report_warning__30__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__30__id, this->__Vtask_uvm_report_warning__30__message, __Vtask_uvm_report_warning__30__verbosity, this->__Vtask_uvm_report_warning__30__filename, __Vtask_uvm_report_warning__30__line, this->__Vtask_uvm_report_warning__30__context_name, (IData)(__Vtask_uvm_report_warning__30__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[11903]);
            } else {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_t_inst, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 658)->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
                ++(vlSymsp->__Vcoverage[11904]);
            }
            ++(vlSymsp->__Vcoverage[11917]);
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 667)->__VnoInFunc_get(vlSymsp, obj, q);
            if ((VlNull{} == q)) {
                q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 671)->__VnoInFunc_add(vlSymsp, obj, q);
                ++(vlSymsp->__Vcoverage[11905]);
            } else {
                ++(vlSymsp->__Vcoverage[11906]);
            }
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 674)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if ((0U == __VlefCall_5__size)) {
                ++(vlSymsp->__Vcoverage[11909]);
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                while (true) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 687)->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
                    if (!(VL_LTS_III(32, unnamedblk2__DOT__unnamedblk5__DOT__i, __VlefCall_6__size))) break;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 688)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk5__DOT__i, __VlefCall_7__get);
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 688)->__VnoInFunc_push_back(vlSymsp, __VlefCall_7__get);
                    unnamedblk2__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk5__DOT__i);
                    ++(vlSymsp->__Vcoverage[11910]);
                }
                ++(vlSymsp->__Vcoverage[11911]);
            } else {
                ++(vlSymsp->__Vcoverage[11912]);
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __VlefCall_8__m_cb_find);
            if ((0xffffffffU != __VlefCall_8__m_cb_find)) {
                VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 693)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 694)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                __Vtask_uvm_report_warning__45__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__45__context_name = ""s;
                __Vtask_uvm_report_warning__45__line = 0U;
                this->__Vtask_uvm_report_warning__45__filename = ""s;
                __Vtask_uvm_report_warning__45__verbosity = 0U;
                this->__Vtask_uvm_report_warning__45__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback object "s, __VlefCall_9__get_name), " is already registered"s), " with object "s), __VlefCall_10__get_full_name));
                this->__Vtask_uvm_report_warning__45__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__46__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__47__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__45__id, this->__Vtask_uvm_report_warning__45__message, __Vtask_uvm_report_warning__45__verbosity, this->__Vtask_uvm_report_warning__45__filename, __Vtask_uvm_report_warning__45__line, this->__Vtask_uvm_report_warning__45__context_name, (IData)(__Vtask_uvm_report_warning__45__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[11915]);
            } else {
                VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 697)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 697)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, __VlefCall_12__get_full_name)), __Vtask_m_cb_find_name__51__Vfuncout);
                if ((0U == ordering)) {
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 699)->__VnoInFunc_push_back(vlSymsp, cb);
                    ++(vlSymsp->__Vcoverage[11913]);
                } else {
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 701)->__VnoInFunc_push_front(vlSymsp, cb);
                    ++(vlSymsp->__Vcoverage[11914]);
                }
                ++(vlSymsp->__Vcoverage[11916]);
            }
            ++(vlSymsp->__Vcoverage[11918]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11919]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_add_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_add_by_name\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__54__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__57__verbosity;
    __Vtask_uvm_report_error__57__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__57__line;
    __Vtask_uvm_report_error__57__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__57__report_enabled_checked;
    __Vtask_uvm_report_error__57__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__63__verbosity;
    __Vtask_uvm_report_warning__63__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__63__line;
    __Vtask_uvm_report_warning__63__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__63__report_enabled_checked;
    __Vtask_uvm_report_warning__63__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        cq.clear();
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__54__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 725)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        if ((VlNull{} == cb)) {
            __Vtask_uvm_report_error__57__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__57__context_name = ""s;
            __Vtask_uvm_report_error__57__line = 0U;
            this->__Vtask_uvm_report_error__57__filename = ""s;
            __Vtask_uvm_report_error__57__verbosity = 0U;
            this->__Vtask_uvm_report_error__57__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Null callback object cannot be registered with object(s) "s, name));
            this->__Vtask_uvm_report_error__57__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__59__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__59__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__57__id, this->__Vtask_uvm_report_error__57__message, __Vtask_uvm_report_error__57__verbosity, this->__Vtask_uvm_report_error__57__filename, __Vtask_uvm_report_error__57__line, this->__Vtask_uvm_report_error__57__context_name, (IData)(__Vtask_uvm_report_error__57__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11921]);
        }
        VL_NULL_CHECK(top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 734)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
        if ((0U == cq.size())) {
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 737)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            __Vtask_uvm_report_warning__63__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__63__context_name = ""s;
            __Vtask_uvm_report_warning__63__line = 0U;
            this->__Vtask_uvm_report_warning__63__filename = ""s;
            __Vtask_uvm_report_warning__63__verbosity = 0U;
            this->__Vtask_uvm_report_warning__63__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("add_by_name failed to find any components matching the name "s, name), ", callback "s), __VlefCall_0__get_name), " will not be registered."s));
            this->__Vtask_uvm_report_warning__63__id = "CBNOMTC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__64__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__65__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__63__id, this->__Vtask_uvm_report_warning__63__message, __Vtask_uvm_report_warning__63__verbosity, this->__Vtask_uvm_report_warning__63__filename, __Vtask_uvm_report_warning__63__line, this->__Vtask_uvm_report_warning__63__context_name, (IData)(__Vtask_uvm_report_warning__63__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[436]);
            ++(vlSymsp->__Vcoverage[11922]);
        } else {
            ++(vlSymsp->__Vcoverage[11923]);
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cq.size())) {
            ++(vlSymsp->__Vcoverage[11925]);
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
            ++(vlSymsp->__Vcoverage[11926]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11927]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_delete(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_delete\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__74__verbosity;
    __Vtask_uvm_report_warning__74__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__74__line;
    __Vtask_uvm_report_warning__74__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__74__report_enabled_checked;
    __Vtask_uvm_report_warning__74__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__75__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__76__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_0__get_name;
    std::string unnamedblk7__DOT__nm;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> b_obj;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
    CData/*0:0*/ found;
    IData/*31:0*/ pos;
    b_obj = obj;
    found = 0U;
    pos = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__67__Vfuncout);
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_t_inst, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 771)->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, found);
        ++(vlSymsp->__Vcoverage[11930]);
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 776)->__VnoInFunc_get(vlSymsp, b_obj, q);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, pos);
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 779)->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
            found = 1U;
            ++(vlSymsp->__Vcoverage[11928]);
        } else {
            ++(vlSymsp->__Vcoverage[11929]);
        }
        ++(vlSymsp->__Vcoverage[11931]);
    }
    if (found) {
        ++(vlSymsp->__Vcoverage[11935]);
    } else {
        unnamedblk7__DOT__nm = ""s;
        if ((VlNull{} == obj)) {
            unnamedblk7__DOT__nm = "(*)"s;
            ++(vlSymsp->__Vcoverage[11932]);
        } else {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 785)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk7__DOT__nm);
            ++(vlSymsp->__Vcoverage[11933]);
        }
        VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 786)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vtask_uvm_report_warning__74__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__74__context_name = ""s;
        __Vtask_uvm_report_warning__74__line = 0U;
        this->__Vtask_uvm_report_warning__74__filename = ""s;
        __Vtask_uvm_report_warning__74__verbosity = 0U;
        this->__Vtask_uvm_report_warning__74__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("Callback "s, __VlefCall_0__get_name), " cannot be removed from object "s), unnamedblk7__DOT__nm), " because it is not currently registered to that object."s));
        this->__Vtask_uvm_report_warning__74__id = "CBUNREG"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__75__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__75__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__76__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__76__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__74__id, this->__Vtask_uvm_report_warning__74__message, __Vtask_uvm_report_warning__74__verbosity, this->__Vtask_uvm_report_warning__74__filename, __Vtask_uvm_report_warning__74__line, this->__Vtask_uvm_report_warning__74__context_name, (IData)(__Vtask_uvm_report_warning__74__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[436]);
        ++(vlSymsp->__Vcoverage[11934]);
    }
    if ((1U & (~ (IData)(found)))) {
        ++(vlSymsp->__Vcoverage[11936]);
    }
    if (found) {
        ++(vlSymsp->__Vcoverage[11937]);
    }
    ++(vlSymsp->__Vcoverage[11938]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_delete_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> root) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_delete_by_name\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__78__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__83__verbosity;
    __Vtask_uvm_report_warning__83__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__83__line;
    __Vtask_uvm_report_warning__83__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__83__report_enabled_checked;
    __Vtask_uvm_report_warning__83__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    cq.clear();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__78__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 809)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    VL_NULL_CHECK(top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 813)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
    if ((0U == cq.size())) {
        VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 816)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vtask_uvm_report_warning__83__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__83__context_name = ""s;
        __Vtask_uvm_report_warning__83__line = 0U;
        this->__Vtask_uvm_report_warning__83__filename = ""s;
        __Vtask_uvm_report_warning__83__verbosity = 0U;
        this->__Vtask_uvm_report_warning__83__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("delete_by_name failed to find any components matching the name "s, name), ", callback "s), __VlefCall_0__get_name), " will not be unregistered."s));
        this->__Vtask_uvm_report_warning__83__id = "CBNOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__84__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__85__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__83__id, this->__Vtask_uvm_report_warning__83__message, __Vtask_uvm_report_warning__83__verbosity, this->__Vtask_uvm_report_warning__83__filename, __Vtask_uvm_report_warning__83__line, this->__Vtask_uvm_report_warning__83__context_name, (IData)(__Vtask_uvm_report_warning__83__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[436]);
        ++(vlSymsp->__Vcoverage[11939]);
    } else {
        ++(vlSymsp->__Vcoverage[11940]);
    }
    unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk8__DOT__i, cq.size())) {
        ++(vlSymsp->__Vcoverage[11942]);
        unnamedblk8__DOT__i = ((IData)(1U) + unnamedblk8__DOT__i);
        ++(vlSymsp->__Vcoverage[11943]);
    }
    ++(vlSymsp->__Vcoverage[11944]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_m_get_q(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> &q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_m_get_q\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> __VlefCall_1__m_get_tw_cb_q;
    IData/*31:0*/ __VlefCall_0__exists;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 834)->__VnoInFunc_exists(vlSymsp, obj, __VlefCall_0__exists);
    if ((0U != __VlefCall_0__exists)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 838)->__VnoInFunc_get(vlSymsp, obj, q);
        if ((VlNull{} == q)) {
            q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 841)->__VnoInFunc_add(vlSymsp, obj, q);
            ++(vlSymsp->__Vcoverage[11945]);
        } else {
            ++(vlSymsp->__Vcoverage[11946]);
        }
        ++(vlSymsp->__Vcoverage[11948]);
    } else {
        if ((VlNull{} == obj)) {
            __VlefCall_1__m_get_tw_cb_q = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_tw_cb_q;
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_t_inst, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 835)->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __VlefCall_1__m_get_tw_cb_q);
        }
        q = __VlefCall_1__m_get_tw_cb_q;
        ++(vlSymsp->__Vcoverage[11947]);
    }
    ++(vlSymsp->__Vcoverage[11949]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_first(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> &get_first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_first\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__92__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__96__Vfuncout;
    __Vtask_callback_mode__96__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__92__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 865)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 866)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 866)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__96__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__96__Vfuncout;
            }
            if (__VlefExpr_2) {
                get_first__Vfuncrtn = cb;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[11951]);
            }
            itr = ((IData)(1U) + itr);
            ++(vlSymsp->__Vcoverage[11952]);
        }
        get_first__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11953]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_last(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> &get_last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_last\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__97__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__101__Vfuncout;
    __Vtask_callback_mode__101__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__97__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 889)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        itr = (__VlefCall_0__size - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 890)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 890)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__101__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__101__Vfuncout;
            }
            if (__VlefExpr_2) {
                get_last__Vfuncrtn = cb;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[11955]);
            }
            itr = (itr - (IData)(1U));
            ++(vlSymsp->__Vcoverage[11956]);
        }
        get_last__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11957]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_next(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> &get_next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_next\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__102__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__106__Vfuncout;
    __Vtask_callback_mode__106__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__102__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = ((IData)(1U) + itr);
        while (true) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 916)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 917)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 917)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__106__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__106__Vfuncout;
            }
            if (__VlefExpr_2) {
                get_next__Vfuncrtn = cb;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[11959]);
            }
            itr = ((IData)(1U) + itr);
            ++(vlSymsp->__Vcoverage[11960]);
        }
        get_next__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11961]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_prev(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> &get_prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_prev\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__107__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__110__Vfuncout;
    __Vtask_callback_mode__110__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> __VlefCall_0__get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__107__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = (itr - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 944)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_0__get);
            __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__get, cb);
            if (__VlefExpr_1) {
                VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 944)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__110__Vfuncout);
                __VlefExpr_1 = __Vtask_callback_mode__110__Vfuncout;
            }
            if (__VlefExpr_1) {
                get_prev__Vfuncrtn = cb;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[11963]);
            }
            itr = (itr - (IData)(1U));
            ++(vlSymsp->__Vcoverage[11964]);
        }
        get_prev__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11965]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_all(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs>> &all_callbacks, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_get_all\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__111__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__118__Vfuncout;
    __Vtask_get_inst_id__118__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefExpr_7;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> __VlefCall_6__get;
    IData/*31:0*/ __VlefCall_5__size;
    IData/*31:0*/ __VlefExpr_4;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> __VlefCall_3__get;
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__exists;
    IData/*31:0*/ unnamedblk9__DOT__qi;
    IData/*31:0*/ unnamedblk10__DOT__qi;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> cb;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs>> callbacks_to_append;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs>> unique_callbacks_to_append;
    callbacks_to_append.clear();
    unique_callbacks_to_append.clear();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__111__Vfuncout);
    __VlefLogOr_1 = (VlNull{} == obj);
    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 974)->__VnoInFunc_exists(vlSymsp, obj, __VlefCall_0__exists);
        __VlefLogOr_1 = (1U & (~ (0U != __VlefCall_0__exists)));
    }
    if (__VlefLogOr_1) {
        unnamedblk9__DOT__qi = 0U;
        unnamedblk9__DOT__qi = 0U;
        while (true) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 976)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk9__DOT__qi, __VlefCall_2__size))) break;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 977)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__qi, __VlefCall_3__get);
            __VlefExpr_4 = VL_CAST_DYNAMIC(__VlefCall_3__get, cb);
            if (__VlefExpr_4) {
                callbacks_to_append.push_back(cb);
                ++(vlSymsp->__Vcoverage[11966]);
            } else {
                ++(vlSymsp->__Vcoverage[11967]);
            }
            unnamedblk9__DOT__qi = ((IData)(1U) + unnamedblk9__DOT__qi);
            ++(vlSymsp->__Vcoverage[11968]);
        }
        ++(vlSymsp->__Vcoverage[11972]);
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 983)->__VnoInFunc_get(vlSymsp, obj, q);
        unnamedblk10__DOT__qi = 0U;
        unnamedblk10__DOT__qi = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 984)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if (!(VL_LTS_III(32, unnamedblk10__DOT__qi, __VlefCall_5__size))) break;
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 985)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__qi, __VlefCall_6__get);
            __VlefExpr_7 = VL_CAST_DYNAMIC(__VlefCall_6__get, cb);
            if (__VlefExpr_7) {
                callbacks_to_append.push_back(cb);
                ++(vlSymsp->__Vcoverage[11969]);
            } else {
                ++(vlSymsp->__Vcoverage[11970]);
            }
            unnamedblk10__DOT__qi = ((IData)(1U) + unnamedblk10__DOT__qi);
            ++(vlSymsp->__Vcoverage[11971]);
        }
        ++(vlSymsp->__Vcoverage[11973]);
    }
    unique_callbacks_to_append = callbacks_to_append.unique(
                                                            [&](
                                                                IData/*31:0*/ cb___DOT__index, 
                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> cb_) -> 
                                                            IData/*31:0*/ {
            return (([&]() {
                        VL_NULL_CHECK(cb_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 990)
                     ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__118__Vfuncout);
                    }(), __Vtask_get_inst_id__118__Vfuncout));
        }
    );
    all_callbacks = VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs>>::consCC(unique_callbacks_to_append, 
                                                                                all_callbacks);
    ++(vlSymsp->__Vcoverage[11974]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_display(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg::__VnoInFunc_display\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196> __Vtask_get__119__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__119__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz199__Vclpkg.__VnoInFunc_display(vlSymsp, obj);
    ++(vlSymsp->__Vcoverage[11975]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc_m_is_registered(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc_m_is_registered\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__m_is_for_me;
    m_is_registered__Vfuncrtn = 0U;
    this->__VnoInFunc_m_is_for_me(vlSymsp, cb, __VlefCall_0__m_is_for_me);
    if (__VlefCall_0__m_is_for_me) {
        this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __VlefCall_0__m_is_for_me);
    }
    if (__VlefCall_0__m_is_for_me) {
        m_is_registered__Vfuncrtn = this->__PVT__m_registered;
    } else {
        ++(vlSymsp->__Vcoverage[11884]);
    }
    ++(vlSymsp->__Vcoverage[11885]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc_m_is_for_me(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc_m_is_for_me\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> this_cb;
    __VlefExpr_0 = VL_CAST_DYNAMIC(cb, this_cb);
    m_is_for_me__Vfuncrtn = (1U & __VlefExpr_0);
    ++(vlSymsp->__Vcoverage[11886]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz199::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[11976]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::~Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_registered:" + VL_TO_STRING(__PVT__m_registered);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz199::to_string_middle();
    return (out);
}
