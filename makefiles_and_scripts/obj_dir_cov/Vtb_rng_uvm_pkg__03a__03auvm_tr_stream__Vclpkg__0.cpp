// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_get_stream_from_handle(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> &get_stream_from_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_get_stream_from_handle\n"); );
    // Body
    {
        if ((0U == id)) {
            get_stream_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10758]);
        }
        if (this->__PVT__m_streams_by_id.exists(id)) {
            ++(vlSymsp->__Vcoverage[10760]);
        } else {
            get_stream_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_stream_from_handle__Vfuncrtn = this->__PVT__m_streams_by_id
            .at(id);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10761]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_m_free_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_m_free_id\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream;
    if ((0U != this->__PVT__m_streams_by_id.exists(id))) {
        stream = this->__PVT__m_streams_by_id.at(id);
        ++(vlSymsp->__Vcoverage[10762]);
    } else {
        ++(vlSymsp->__Vcoverage[10763]);
    }
    if ((VlNull{} != stream)) {
        this->__PVT__m_streams_by_id.erase(id);
        this->__PVT__m_ids_by_stream.erase(stream);
        ++(vlSymsp->__Vcoverage[10764]);
    } else {
        ++(vlSymsp->__Vcoverage[10765]);
    }
    ++(vlSymsp->__Vcoverage[10766]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_cfg_dap = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz18, vlProcess, vlSymsp, "cfg_dap"s);
    ++(vlSymsp->__Vcoverage[10651]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_db(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_db\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__2__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__8__verbosity;
    __Vtask_uvm_report_warning__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__8__line;
    __Vtask_uvm_report_warning__8__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__8__report_enabled_checked;
    __Vtask_uvm_report_warning__8__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 90)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__2__value, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__2__value;
        if (__VlefCall_0__try_get) {
            ++(vlSymsp->__Vcoverage[10657]);
        } else {
            if (this->__PVT__m_warn_null_cfg) {
                this->__Vfunc_uvm_report_enabled__3__id = "UVM/REC_STR/NO_CFG"s;
                __Vfunc_uvm_report_enabled__3__severity = 1U;
                __Vfunc_uvm_report_enabled__3__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__4__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__5__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_warning__8__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__8__context_name = ""s;
                    __Vtask_uvm_report_warning__8__line = 0x0000005eU;
                    this->__Vtask_uvm_report_warning__8__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__8__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__8__message 
                        = VL_SFORMATF_N_NX("attempt to retrieve DB from '%@' before it was set!",0,
                                           -1,&(__VlefCall_2__get_name)) ;
                    this->__Vtask_uvm_report_warning__8__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__9__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__10__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__8__id, this->__Vtask_uvm_report_warning__8__message, __Vtask_uvm_report_warning__8__verbosity, this->__Vtask_uvm_report_warning__8__filename, __Vtask_uvm_report_warning__8__line, this->__Vtask_uvm_report_warning__8__context_name, (IData)(__Vtask_uvm_report_warning__8__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[10652]);
                } else {
                    ++(vlSymsp->__Vcoverage[10653]);
                }
                ++(vlSymsp->__Vcoverage[10654]);
            } else {
                ++(vlSymsp->__Vcoverage[10655]);
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_db__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_db__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 98)
            ->__PVT__db;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10658]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_scope(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_scope\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__12__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
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
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        get_scope__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 105)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__12__value, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__12__value;
        if (__VlefCall_0__try_get) {
            ++(vlSymsp->__Vcoverage[10664]);
        } else {
            if (this->__PVT__m_warn_null_cfg) {
                this->__Vfunc_uvm_report_enabled__13__id = "UVM/REC_STR/NO_CFG"s;
                __Vfunc_uvm_report_enabled__13__severity = 1U;
                __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__14__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_warning__18__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__18__context_name = ""s;
                    __Vtask_uvm_report_warning__18__line = 0x0000006dU;
                    this->__Vtask_uvm_report_warning__18__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__18__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__18__message 
                        = VL_SFORMATF_N_NX("attempt to retrieve scope from '%@' before it was set!",0,
                                           -1,&(__VlefCall_2__get_name)) ;
                    this->__Vtask_uvm_report_warning__18__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__18__id, this->__Vtask_uvm_report_warning__18__message, __Vtask_uvm_report_warning__18__verbosity, this->__Vtask_uvm_report_warning__18__filename, __Vtask_uvm_report_warning__18__line, this->__Vtask_uvm_report_warning__18__context_name, (IData)(__Vtask_uvm_report_warning__18__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[10659]);
                } else {
                    ++(vlSymsp->__Vcoverage[10660]);
                }
                ++(vlSymsp->__Vcoverage[10661]);
            } else {
                ++(vlSymsp->__Vcoverage[10662]);
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_scope__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        get_scope__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 113)
            ->__PVT__scope;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10665]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_stream_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_stream_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_stream_type_name\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__22__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__verbosity;
    __Vtask_uvm_report_warning__28__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__line;
    __Vtask_uvm_report_warning__28__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__28__report_enabled_checked;
    __Vtask_uvm_report_warning__28__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        get_stream_type_name__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 120)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__22__value, __VlefCall_0__try_get);
        m_cfg = __Vtask_try_get__22__value;
        if (__VlefCall_0__try_get) {
            ++(vlSymsp->__Vcoverage[10671]);
        } else {
            if (this->__PVT__m_warn_null_cfg) {
                this->__Vfunc_uvm_report_enabled__23__id = "UVM/REC_STR/NO_CFG"s;
                __Vfunc_uvm_report_enabled__23__severity = 1U;
                __Vfunc_uvm_report_enabled__23__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__24__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__25__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__23__verbosity, (IData)(__Vfunc_uvm_report_enabled__23__severity), this->__Vfunc_uvm_report_enabled__23__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_warning__28__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__28__context_name = ""s;
                    __Vtask_uvm_report_warning__28__line = 0x0000007cU;
                    this->__Vtask_uvm_report_warning__28__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__28__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__28__message 
                        = VL_SFORMATF_N_NX("attempt to retrieve STREAM_TYPE_NAME from '%@' before it was set!",0,
                                           -1,&(__VlefCall_2__get_name)) ;
                    this->__Vtask_uvm_report_warning__28__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__29__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__30__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__28__id, this->__Vtask_uvm_report_warning__28__message, __Vtask_uvm_report_warning__28__verbosity, this->__Vtask_uvm_report_warning__28__filename, __Vtask_uvm_report_warning__28__line, this->__Vtask_uvm_report_warning__28__context_name, (IData)(__Vtask_uvm_report_warning__28__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[10666]);
                } else {
                    ++(vlSymsp->__Vcoverage[10667]);
                }
                ++(vlSymsp->__Vcoverage[10668]);
            } else {
                ++(vlSymsp->__Vcoverage[10669]);
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_stream_type_name__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        get_stream_type_name__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 128)
            ->__PVT__stream_type_name;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10672]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_close(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_close\n"); );
    // Body
    CData/*0:0*/ __VlefCall_2__is_open;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> unnamedblk1__DOT__idx;
    CData/*0:0*/ unnamedblk1__DOT__idx__Vfirst;
    unnamedblk1__DOT__idx__Vfirst = 0;
    CData/*0:0*/ __VExpr_h575c2eaa__0;
    __VExpr_h575c2eaa__0 = 0;
    {
        this->__VnoInFunc_is_open(vlSymsp, __VExpr_h575c2eaa__0);
        if (__VExpr_h575c2eaa__0) {
            ++(vlSymsp->__Vcoverage[10674]);
            ++(vlSymsp->__Vcoverage[10683]);
        } else {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_close(vlSymsp);
        __VlefExpr_0 = (0U != this->__PVT__m_records.first(unnamedblk1__DOT__idx));
        if (__VlefExpr_0) {
            unnamedblk1__DOT__idx__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk1__DOT__idx__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__m_records.next(unnamedblk1__DOT__idx));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk1__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk1__DOT__idx, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 152)->__VnoInFunc_is_open(vlSymsp, __VlefCall_2__is_open);
                if (__VlefCall_2__is_open) {
                    VL_NULL_CHECK(unnamedblk1__DOT__idx, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 153)->__VnoInFunc_close(vlSymsp, 0ULL);
                    ++(vlSymsp->__Vcoverage[10677]);
                    ++(vlSymsp->__Vcoverage[10686]);
                } else {
                    ++(vlSymsp->__Vcoverage[10678]);
                    ++(vlSymsp->__Vcoverage[10687]);
                }
                ++(vlSymsp->__Vcoverage[10679]);
                ++(vlSymsp->__Vcoverage[10688]);
            }
            ++(vlSymsp->__Vcoverage[10680]);
            ++(vlSymsp->__Vcoverage[10689]);
        } else {
            ++(vlSymsp->__Vcoverage[10681]);
            ++(vlSymsp->__Vcoverage[10690]);
        }
        this->__PVT__m_is_opened = 0U;
        this->__PVT__m_is_closed = 1U;
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(__VExpr_h575c2eaa__0)))) {
        ++(vlSymsp->__Vcoverage[10675]);
    }
    if (__VExpr_h575c2eaa__0) {
        ++(vlSymsp->__Vcoverage[10676]);
    }
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_h575c2eaa__0);
    if ((1U & (~ (IData)(__VExpr_h575c2eaa__0)))) {
        ++(vlSymsp->__Vcoverage[10684]);
    }
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_h575c2eaa__0);
    if (__VExpr_h575c2eaa__0) {
        ++(vlSymsp->__Vcoverage[10685]);
    }
    ++(vlSymsp->__Vcoverage[10691]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_free(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_free\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefCall_1__is_open;
    CData/*0:0*/ __VlefLogAnd_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> unnamedblk2__DOT__idx;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vfirst;
    unnamedblk2__DOT__idx__Vfirst = 0;
    CData/*0:0*/ __VExpr_h4b0a72f1__0;
    __VExpr_h4b0a72f1__0 = 0;
    CData/*0:0*/ __VExpr_h575c2eaa__0;
    __VExpr_h575c2eaa__0 = 0;
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    std::string s;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> db;
    {
        s = ""s;
        this->__VnoInFunc_is_open(vlSymsp, __VExpr_h575c2eaa__0);
        __VlefLogAnd_0 = (1U & (~ (IData)(__VExpr_h575c2eaa__0)));
        if (__VlefLogAnd_0) {
            this->__VnoInFunc_is_closed(vlSymsp, __VExpr_h4b0a72f1__0);
            __VlefLogAnd_0 = (1U & (~ (IData)(__VExpr_h4b0a72f1__0)));
        }
        if (__VlefLogAnd_0) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10693]);
        }
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_1__is_open);
        if (__VlefCall_1__is_open) {
            this->__VnoInFunc_close(vlSymsp);
            ++(vlSymsp->__Vcoverage[10697]);
        } else {
            ++(vlSymsp->__Vcoverage[10698]);
        }
        this->__VnoInFunc_do_free(vlSymsp);
        __VlefExpr_2 = (0U != this->__PVT__m_records.first(unnamedblk2__DOT__idx));
        if (__VlefExpr_2) {
            unnamedblk2__DOT__idx__Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk2__DOT__idx__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__m_records.next(unnamedblk2__DOT__idx));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk2__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk2__DOT__idx, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 174)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                ++(vlSymsp->__Vcoverage[10699]);
            }
            ++(vlSymsp->__Vcoverage[10700]);
        } else {
            ++(vlSymsp->__Vcoverage[10701]);
        }
        this->__VnoInFunc_get_db(vlProcess, vlSymsp, db);
        this->__PVT__m_is_closed = 0U;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 181)->__VnoInFunc_get_randstate(vlSymsp, s);
            ++(vlSymsp->__Vcoverage[10702]);
        } else {
            ++(vlSymsp->__Vcoverage[10703]);
        }
        this->__PVT__m_cfg_dap = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz18, vlProcess, vlSymsp, "cfg_dap"s);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 184)->__VnoInFunc_set_randstate(vlSymsp, s);
            ++(vlSymsp->__Vcoverage[10704]);
        } else {
            ++(vlSymsp->__Vcoverage[10705]);
        }
        this->__PVT__m_warn_null_cfg = 1U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.exists(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this})) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_m_free_id(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                                                                                .at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this}));
            ++(vlSymsp->__Vcoverage[10706]);
        } else {
            ++(vlSymsp->__Vcoverage[10707]);
        }
        if ((VlNull{} != db)) {
            VL_NULL_CHECK(db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 191)->__VnoInFunc_m_free_stream(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this});
            ++(vlSymsp->__Vcoverage[10708]);
        } else {
            ++(vlSymsp->__Vcoverage[10709]);
        }
        __Vlabel0: ;
    }
    if ((1U & ((~ (IData)(__VExpr_h575c2eaa__0)) & 
               (~ (IData)(__VExpr_h4b0a72f1__0))))) {
        ++(vlSymsp->__Vcoverage[10694]);
    }
    if (__VExpr_h4b0a72f1__0) {
        ++(vlSymsp->__Vcoverage[10695]);
    }
    if (__VExpr_h575c2eaa__0) {
        ++(vlSymsp->__Vcoverage[10696]);
    }
    ++(vlSymsp->__Vcoverage[10710]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_do_open(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_do_open\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
    __Vfunc_uvm_report_enabled__51__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
    __Vfunc_uvm_report_enabled__51__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__56__verbosity;
    __Vtask_uvm_report_error__56__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__56__line;
    __Vtask_uvm_report_error__56__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__56__report_enabled_checked;
    __Vtask_uvm_report_error__56__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__60__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__61__verbosity;
    __Vfunc_uvm_report_enabled__61__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__61__severity;
    __Vfunc_uvm_report_enabled__61__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__62__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__63__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__66__verbosity;
    __Vtask_uvm_report_error__66__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__66__line;
    __Vtask_uvm_report_error__66__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__66__report_enabled_checked;
    __Vtask_uvm_report_error__66__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
    // Body
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__try_get;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        if ((VlNull{} == db)) {
            this->__Vfunc_uvm_report_enabled__51__id = "UVM/REC_STR/NULL_DB"s;
            __Vfunc_uvm_report_enabled__51__severity = 2U;
            __Vfunc_uvm_report_enabled__51__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__52__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__53__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), this->__Vfunc_uvm_report_enabled__51__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__56__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__56__context_name = ""s;
                __Vtask_uvm_report_error__56__line = 0x000000d9U;
                this->__Vtask_uvm_report_error__56__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                __Vtask_uvm_report_error__56__verbosity = 0U;
                this->__Vtask_uvm_report_error__56__message 
                    = VL_SFORMATF_N_NX("Illegal attempt to set DB for '%@' to '<null>'",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__56__id = "UVM/REC_STR/NULL_DB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__57__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__58__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__56__id, this->__Vtask_uvm_report_error__56__message, __Vtask_uvm_report_error__56__verbosity, this->__Vtask_uvm_report_error__56__filename, __Vtask_uvm_report_error__56__line, this->__Vtask_uvm_report_error__56__context_name, (IData)(__Vtask_uvm_report_error__56__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[10711]);
            } else {
                ++(vlSymsp->__Vcoverage[10712]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10714]);
        }
        VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 221)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__60__value, __VlefCall_2__try_get);
        m_cfg = __Vtask_try_get__60__value;
        if (__VlefCall_2__try_get) {
            this->__Vfunc_uvm_report_enabled__61__id = "UVM/REC_STR/RE_CFG"s;
            __Vfunc_uvm_report_enabled__61__severity = 2U;
            __Vfunc_uvm_report_enabled__61__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__62__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__63__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__63__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__61__verbosity, (IData)(__Vfunc_uvm_report_enabled__61__severity), this->__Vfunc_uvm_report_enabled__61__id, __VlefCall_3__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                __Vtask_uvm_report_error__66__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__66__context_name = ""s;
                __Vtask_uvm_report_error__66__line = 0x000000e0U;
                this->__Vtask_uvm_report_error__66__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                __Vtask_uvm_report_error__66__verbosity = 0U;
                this->__Vtask_uvm_report_error__66__message 
                    = VL_SFORMATF_N_NX("Illegal attempt to re-open '%@'",0,
                                       -1,&(__VlefCall_4__get_full_name)) ;
                this->__Vtask_uvm_report_error__66__id = "UVM/REC_STR/RE_CFG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__67__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__68__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__66__id, this->__Vtask_uvm_report_error__66__message, __Vtask_uvm_report_error__66__verbosity, this->__Vtask_uvm_report_error__66__filename, __Vtask_uvm_report_error__66__line, this->__Vtask_uvm_report_error__66__context_name, (IData)(__Vtask_uvm_report_error__66__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[10715]);
            } else {
                ++(vlSymsp->__Vcoverage[10716]);
            }
            ++(vlSymsp->__Vcoverage[10717]);
        } else {
            m_cfg = VL_NEW(Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg, vlSymsp);
            VL_NULL_CHECK(m_cfg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 229)->__PVT__db 
                = db;
            VL_NULL_CHECK(m_cfg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 230)->__PVT__scope 
                = scope;
            VL_NULL_CHECK(m_cfg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 231)->__PVT__stream_type_name 
                = stream_type_name;
            VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 232)->__VnoInFunc_set(vlSymsp, m_cfg);
            this->__PVT__m_is_opened = 1U;
            this->__VnoInFunc_do_open(vlSymsp, db, scope, stream_type_name);
            ++(vlSymsp->__Vcoverage[10718]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10719]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_open(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
    ++(vlSymsp->__Vcoverage[10720]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_closed(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_closed\n"); );
    // Body
    is_closed__Vfuncrtn = this->__PVT__m_is_closed;
    ++(vlSymsp->__Vcoverage[10721]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_open_recorder(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_open_recorder\n"); );
    // Body
    VlClassRef<Vtb_rng_std__03a__03aprocess> unnamedblk3__DOT__p;
    std::string unnamedblk3__DOT__s;
    CData/*0:0*/ __VExpr_hc09ab773__0;
    __VExpr_hc09ab773__0 = 0;
    QData/*63:0*/ m_time;
    m_time = ((0ULL == open_time) ? VL_TIME_UNITED_Q(1)
               : open_time);
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_hc09ab773__0);
    if (__VExpr_hc09ab773__0) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk3__DOT__p);
        unnamedblk3__DOT__s = ""s;
        if ((VlNull{} != unnamedblk3__DOT__p)) {
            VL_NULL_CHECK(unnamedblk3__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 275)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk3__DOT__s);
            ++(vlSymsp->__Vcoverage[10724]);
        } else {
            ++(vlSymsp->__Vcoverage[10725]);
        }
        this->__VnoInFunc_do_open_recorder(vlProcess, vlSymsp, name, m_time, type_name, open_recorder__Vfuncrtn);
        if ((VlNull{} != open_recorder__Vfuncrtn)) {
            this->__PVT__m_records.at(open_recorder__Vfuncrtn) = 1U;
            VL_NULL_CHECK(open_recorder__Vfuncrtn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 285)->__VnoInFunc_m_do_open(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this}, m_time, type_name);
            ++(vlSymsp->__Vcoverage[10726]);
        } else {
            ++(vlSymsp->__Vcoverage[10727]);
        }
        if ((VlNull{} != unnamedblk3__DOT__p)) {
            VL_NULL_CHECK(unnamedblk3__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 288)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk3__DOT__s);
            ++(vlSymsp->__Vcoverage[10728]);
        } else {
            ++(vlSymsp->__Vcoverage[10729]);
        }
        ++(vlSymsp->__Vcoverage[10731]);
    } else {
        open_recorder__Vfuncrtn = VlNull{};
    }
    if ((0ULL == open_time)) {
        ++(vlSymsp->__Vcoverage[10722]);
    }
    if ((0ULL != open_time)) {
        ++(vlSymsp->__Vcoverage[10723]);
    }
    if ((1U & (~ (IData)(__VExpr_hc09ab773__0)))) {
        ++(vlSymsp->__Vcoverage[10732]);
    }
    if (__VExpr_hc09ab773__0) {
        ++(vlSymsp->__Vcoverage[10733]);
    }
    ++(vlSymsp->__Vcoverage[10734]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_free_recorder(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_free_recorder\n"); );
    // Body
    if (this->__PVT__m_records.exists(recorder)) {
        this->__PVT__m_records.erase(recorder);
        ++(vlSymsp->__Vcoverage[10735]);
    } else {
        ++(vlSymsp->__Vcoverage[10736]);
    }
    ++(vlSymsp->__Vcoverage[10737]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_recorders(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>> &q, CData/*0:0*/ &get_recorders__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_recorders\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__idx;
    CData/*0:0*/ unnamedblk4__DOT__idx__Vfirst;
    unnamedblk4__DOT__idx__Vfirst = 0;
    q.clear();
    __VlefExpr_0 = (0U != this->__PVT__m_records.first(unnamedblk4__DOT__idx));
    if (__VlefExpr_0) {
        unnamedblk4__DOT__idx__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk4__DOT__idx__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_records.next(unnamedblk4__DOT__idx));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk4__DOT__idx__Vfirst = 0U;
            q.push_back(unnamedblk4__DOT__idx);
            ++(vlSymsp->__Vcoverage[10738]);
        }
        ++(vlSymsp->__Vcoverage[10739]);
    } else {
        ++(vlSymsp->__Vcoverage[10740]);
    }
    get_recorders__Vfuncrtn = (1U & q.size());
    ++(vlSymsp->__Vcoverage[10741]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_handle(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_handle\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefLogAnd_0;
    IData/*31:0*/ unnamedblk5__DOT__handle;
    CData/*0:0*/ __VExpr_hf6c4a327__0;
    __VExpr_hf6c4a327__0 = 0;
    CData/*0:0*/ __VExpr_hc09ab773__0;
    __VExpr_hc09ab773__0 = 0;
    get_handle__Vfuncrtn = 0U;
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_hc09ab773__0);
    __VlefLogAnd_0 = (1U & (~ (IData)(__VExpr_hc09ab773__0)));
    if (__VlefLogAnd_0) {
        this->__VnoInFunc_is_closed(vlSymsp, __VExpr_hf6c4a327__0);
        __VlefLogAnd_0 = (1U & (~ (IData)(__VExpr_hf6c4a327__0)));
    }
    if (__VlefLogAnd_0) {
        get_handle__Vfuncrtn = 0U;
    } else {
        this->__VnoInFunc_get_inst_id(vlSymsp, unnamedblk5__DOT__handle);
        __VlefExpr_1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.exists(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this});
        if (__VlefExpr_1) {
            __VlefExpr_1 = (vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                            .at(VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this}) 
                            != unnamedblk5__DOT__handle);
        }
        if (__VlefExpr_1) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_streams_by_id.erase(vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                                                                                .at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this}));
            ++(vlSymsp->__Vcoverage[10742]);
            ++(vlSymsp->__Vcoverage[10749]);
        } else {
            ++(vlSymsp->__Vcoverage[10743]);
            ++(vlSymsp->__Vcoverage[10750]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_streams_by_id.at(unnamedblk5__DOT__handle) 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>{this}) 
            = unnamedblk5__DOT__handle;
        get_handle__Vfuncrtn = unnamedblk5__DOT__handle;
    }
    if ((1U & ((~ (IData)(__VExpr_hc09ab773__0)) & 
               (~ (IData)(__VExpr_hf6c4a327__0))))) {
        ++(vlSymsp->__Vcoverage[10746]);
    }
    if (__VExpr_hf6c4a327__0) {
        ++(vlSymsp->__Vcoverage[10747]);
    }
    if (__VExpr_hc09ab773__0) {
        ++(vlSymsp->__Vcoverage[10748]);
    }
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_hc09ab773__0);
    __VlefLogAnd_2 = (1U & (~ (IData)(__VExpr_hc09ab773__0)));
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_is_closed(vlSymsp, __VExpr_hf6c4a327__0);
        __VlefLogAnd_2 = (1U & (~ (IData)(__VExpr_hf6c4a327__0)));
    }
    if (__VlefLogAnd_2) {
        ++(vlSymsp->__Vcoverage[10753]);
    }
    this->__VnoInFunc_is_closed(vlSymsp, __VExpr_hf6c4a327__0);
    if (__VExpr_hf6c4a327__0) {
        ++(vlSymsp->__Vcoverage[10754]);
    }
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_hc09ab773__0);
    if (__VExpr_hc09ab773__0) {
        ++(vlSymsp->__Vcoverage[10755]);
    }
    ++(vlSymsp->__Vcoverage[10756]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10767]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_close(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_close\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10768]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_free(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_free\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10769]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open_recorder\n"); );
    // Body
    do_open_recorder__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[10770]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_records.atDefault() = 0;
    __PVT__m_warn_null_cfg = 0;
    __PVT__m_is_opened = 0;
    __PVT__m_is_closed = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::~Vtb_rng_uvm_pkg__03a__03auvm_tr_stream() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_stream::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_cfg_dap:" + VL_TO_STRING(__PVT__m_cfg_dap);
    out += ", m_records:" + VL_TO_STRING(__PVT__m_records);
    out += ", m_warn_null_cfg:" + VL_TO_STRING(__PVT__m_warn_null_cfg);
    out += ", m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_is_closed:" + VL_TO_STRING(__PVT__m_is_closed);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
