// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi5> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi5__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10813]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_recorder"s;
    ++(vlSymsp->__Vcoverage[10815]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_m_free_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_m_free_id\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder;
    if ((0U != this->__PVT__m_recorders_by_id.exists(id))) {
        recorder = this->__PVT__m_recorders_by_id.at(id);
        ++(vlSymsp->__Vcoverage[10867]);
    } else {
        ++(vlSymsp->__Vcoverage[10868]);
    }
    if ((VlNull{} != recorder)) {
        this->__PVT__m_recorders_by_id.erase(id);
        this->__PVT__m_ids_by_recorder.erase(recorder);
        ++(vlSymsp->__Vcoverage[10869]);
    } else {
        ++(vlSymsp->__Vcoverage[10870]);
    }
    ++(vlSymsp->__Vcoverage[10871]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_recorder_from_handle(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> &get_recorder_from_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_recorder_from_handle\n"); );
    // Body
    {
        if ((0U == id)) {
            get_recorder_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10888]);
        }
        if (this->__PVT__m_recorders_by_id.exists(id)) {
            ++(vlSymsp->__Vcoverage[10890]);
        } else {
            get_recorder_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_recorder_from_handle__Vfuncrtn = this->__PVT__m_recorders_by_id
            .at(id);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10891]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi5> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi5__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[10814]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_recorder"s;
    ++(vlSymsp->__Vcoverage[10816]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    this->__PVT__policy = policy;
    ++(vlSymsp->__Vcoverage[10820]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = this->__PVT__policy;
    ++(vlSymsp->__Vcoverage[10821]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__policy = 0U;
    this->__PVT__identifier = 1U;
    this->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
    ++(vlSymsp->__Vcoverage[10822]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_policy::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_radix = 0x07000000U;
    ++(vlSymsp->__Vcoverage[10817]);
    this->__PVT__identifier = 1U;
    ++(vlSymsp->__Vcoverage[10818]);
    this->__PVT__policy = 0U;
    ++(vlSymsp->__Vcoverage[10819]);
    /*super.new*/;
    this->__PVT__m_stream_dap = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21, vlProcess, vlSymsp, "stream_dap"s);
    this->__PVT__m_warn_null_stream = 1U;
    ++(vlSymsp->__Vcoverage[10823]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_stream(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> &get_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_stream\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __Vtask_try_get__4__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__10__verbosity;
    __Vtask_uvm_report_warning__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__10__line;
    __Vtask_uvm_report_warning__10__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__10__report_enabled_checked;
    __Vtask_uvm_report_warning__10__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    // Body
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__try_get;
    VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 174)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__4__value, __VlefCall_0__try_get);
    get_stream__Vfuncrtn = __Vtask_try_get__4__value;
    if (__VlefCall_0__try_get) {
        ++(vlSymsp->__Vcoverage[10829]);
    } else {
        if (this->__PVT__m_warn_null_stream) {
            this->__Vfunc_uvm_report_enabled__5__id = "UVM/REC/NO_CFG"s;
            __Vfunc_uvm_report_enabled__5__severity = 1U;
            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), this->__Vfunc_uvm_report_enabled__5__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                __Vtask_uvm_report_warning__10__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__10__context_name = ""s;
                __Vtask_uvm_report_warning__10__line = 0x000000b2U;
                this->__Vtask_uvm_report_warning__10__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_warning__10__verbosity = 0U;
                this->__Vtask_uvm_report_warning__10__message 
                    = VL_SFORMATF_N_NX("attempt to retrieve STREAM from '%@' before it was set!",0,
                                       -1,&(__VlefCall_2__get_name)) ;
                this->__Vtask_uvm_report_warning__10__id = "UVM/REC/NO_CFG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__11__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__12__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__10__id, this->__Vtask_uvm_report_warning__10__message, __Vtask_uvm_report_warning__10__verbosity, this->__Vtask_uvm_report_warning__10__filename, __Vtask_uvm_report_warning__10__line, this->__Vtask_uvm_report_warning__10__context_name, (IData)(__Vtask_uvm_report_warning__10__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[10824]);
            } else {
                ++(vlSymsp->__Vcoverage[10825]);
            }
            ++(vlSymsp->__Vcoverage[10826]);
        } else {
            ++(vlSymsp->__Vcoverage[10827]);
        }
        this->__PVT__m_warn_null_stream = 0U;
        ++(vlSymsp->__Vcoverage[10828]);
    }
    ++(vlSymsp->__Vcoverage[10830]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_close(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_close\n"); );
    // Body
    CData/*0:0*/ __VExpr_h7b5ad43e__0;
    __VExpr_h7b5ad43e__0 = 0;
    {
        if ((0ULL == close_time)) {
            close_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
            ++(vlSymsp->__Vcoverage[10831]);
        } else {
            ++(vlSymsp->__Vcoverage[10832]);
        }
        this->__VnoInFunc_is_open(vlSymsp, __VExpr_h7b5ad43e__0);
        if (__VExpr_h7b5ad43e__0) {
            ++(vlSymsp->__Vcoverage[10834]);
        } else {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_close(vlSymsp, close_time);
        this->__PVT__m_is_opened = 0U;
        this->__PVT__m_is_closed = 1U;
        this->__PVT__m_close_time = close_time;
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(__VExpr_h7b5ad43e__0)))) {
        ++(vlSymsp->__Vcoverage[10835]);
    }
    if (__VExpr_h7b5ad43e__0) {
        ++(vlSymsp->__Vcoverage[10836]);
    }
    ++(vlSymsp->__Vcoverage[10837]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free\n"); );
    // Body
    CData/*0:0*/ __VlefCall_1__is_open;
    CData/*0:0*/ __VlefLogAnd_0;
    CData/*0:0*/ __VExpr_h2712e92d__0;
    __VExpr_h2712e92d__0 = 0;
    CData/*0:0*/ __VExpr_h7b5ad43e__0;
    __VExpr_h7b5ad43e__0 = 0;
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    std::string s;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream;
    {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
        s = ""s;
        this->__VnoInFunc_is_open(vlSymsp, __VExpr_h7b5ad43e__0);
        __VlefLogAnd_0 = (1U & (~ (IData)(__VExpr_h7b5ad43e__0)));
        if (__VlefLogAnd_0) {
            this->__VnoInFunc_is_closed(vlSymsp, __VExpr_h2712e92d__0);
            __VlefLogAnd_0 = (1U & (~ (IData)(__VExpr_h2712e92d__0)));
        }
        if (__VlefLogAnd_0) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10839]);
        }
        this->__VnoInFunc_is_open(vlSymsp, __VlefCall_1__is_open);
        if (__VlefCall_1__is_open) {
            this->__VnoInFunc_close(vlSymsp, close_time);
            ++(vlSymsp->__Vcoverage[10843]);
        } else {
            ++(vlSymsp->__Vcoverage[10844]);
        }
        this->__VnoInFunc_do_free(vlSymsp);
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, stream);
        this->__PVT__m_is_closed = 0U;
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 233)->__VnoInFunc_get_randstate(vlSymsp, s);
            ++(vlSymsp->__Vcoverage[10845]);
        } else {
            ++(vlSymsp->__Vcoverage[10846]);
        }
        this->__PVT__m_stream_dap = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21, vlProcess, vlSymsp, "stream_dap"s);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 236)->__VnoInFunc_set_randstate(vlSymsp, s);
            ++(vlSymsp->__Vcoverage[10847]);
        } else {
            ++(vlSymsp->__Vcoverage[10848]);
        }
        this->__PVT__m_warn_null_stream = 1U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.exists(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this})) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_m_free_id(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                                                                                .at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this}));
            ++(vlSymsp->__Vcoverage[10849]);
        } else {
            ++(vlSymsp->__Vcoverage[10850]);
        }
        if ((VlNull{} != stream)) {
            VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 243)->__VnoInFunc_m_free_recorder(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this});
            ++(vlSymsp->__Vcoverage[10851]);
        } else {
            ++(vlSymsp->__Vcoverage[10852]);
        }
        __Vlabel0: ;
    }
    if ((1U & ((~ (IData)(__VExpr_h7b5ad43e__0)) & 
               (~ (IData)(__VExpr_h2712e92d__0))))) {
        ++(vlSymsp->__Vcoverage[10840]);
    }
    if (__VExpr_h2712e92d__0) {
        ++(vlSymsp->__Vcoverage[10841]);
    }
    if (__VExpr_h7b5ad43e__0) {
        ++(vlSymsp->__Vcoverage[10842]);
    }
    ++(vlSymsp->__Vcoverage[10853]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_open(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
    ++(vlSymsp->__Vcoverage[10854]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_open_time(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &get_open_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_open_time\n"); );
    // Body
    get_open_time__Vfuncrtn = this->__PVT__m_open_time;
    ++(vlSymsp->__Vcoverage[10855]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_closed(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_closed\n"); );
    // Body
    is_closed__Vfuncrtn = this->__PVT__m_is_closed;
    ++(vlSymsp->__Vcoverage[10856]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_close_time(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &get_close_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_close_time\n"); );
    // Body
    get_close_time__Vfuncrtn = this->__PVT__m_close_time;
    ++(vlSymsp->__Vcoverage[10857]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_do_open(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_do_open\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__verbosity;
    __Vfunc_uvm_report_enabled__28__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__28__severity;
    __Vfunc_uvm_report_enabled__28__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__33__verbosity;
    __Vtask_uvm_report_error__33__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__33__line;
    __Vtask_uvm_report_error__33__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__33__report_enabled_checked;
    __Vtask_uvm_report_error__33__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __Vtask_try_get__37__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__verbosity;
    __Vfunc_uvm_report_enabled__38__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__38__severity;
    __Vfunc_uvm_report_enabled__38__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__43__verbosity;
    __Vtask_uvm_report_error__43__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__43__line;
    __Vtask_uvm_report_error__43__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__43__report_enabled_checked;
    __Vtask_uvm_report_error__43__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    // Body
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__try_get;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == stream)) {
            this->__Vfunc_uvm_report_enabled__28__id = "UVM/REC/NULL_STREAM"s;
            __Vfunc_uvm_report_enabled__28__severity = 2U;
            __Vfunc_uvm_report_enabled__28__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__29__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__30__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__28__verbosity, (IData)(__Vfunc_uvm_report_enabled__28__severity), this->__Vfunc_uvm_report_enabled__28__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                __Vtask_uvm_report_error__33__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__33__context_name = ""s;
                __Vtask_uvm_report_error__33__line = 0x0000011fU;
                this->__Vtask_uvm_report_error__33__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_error__33__verbosity = 0U;
                this->__Vtask_uvm_report_error__33__message 
                    = VL_SFORMATF_N_NX("Illegal attempt to set STREAM for '%@' to '<null>'",0,
                                       -1,&(__VlefCall_1__get_name)) ;
                this->__Vtask_uvm_report_error__33__id = "UVM/REC/NULL_STREAM"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__33__id, this->__Vtask_uvm_report_error__33__message, __Vtask_uvm_report_error__33__verbosity, this->__Vtask_uvm_report_error__33__filename, __Vtask_uvm_report_error__33__line, this->__Vtask_uvm_report_error__33__context_name, (IData)(__Vtask_uvm_report_error__33__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[10858]);
            } else {
                ++(vlSymsp->__Vcoverage[10859]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10861]);
        }
        VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 291)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__37__value, __VlefCall_2__try_get);
        if (__VlefCall_2__try_get) {
            this->__Vfunc_uvm_report_enabled__38__id = "UVM/REC/RE_INIT"s;
            __Vfunc_uvm_report_enabled__38__severity = 2U;
            __Vfunc_uvm_report_enabled__38__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__39__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__40__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__38__verbosity, (IData)(__Vfunc_uvm_report_enabled__38__severity), this->__Vfunc_uvm_report_enabled__38__id, __VlefCall_3__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_error__43__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__43__context_name = ""s;
                __Vtask_uvm_report_error__43__line = 0x00000126U;
                this->__Vtask_uvm_report_error__43__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_error__43__verbosity = 0U;
                this->__Vtask_uvm_report_error__43__message 
                    = VL_SFORMATF_N_NX("Illegal attempt to re-initialize '%@'",0,
                                       -1,&(__VlefCall_4__get_name)) ;
                this->__Vtask_uvm_report_error__43__id = "UVM/REC/RE_INIT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__44__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__45__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__43__id, this->__Vtask_uvm_report_error__43__message, __Vtask_uvm_report_error__43__verbosity, this->__Vtask_uvm_report_error__43__filename, __Vtask_uvm_report_error__43__line, this->__Vtask_uvm_report_error__43__context_name, (IData)(__Vtask_uvm_report_error__43__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[10862]);
            } else {
                ++(vlSymsp->__Vcoverage[10863]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10865]);
        }
        VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 298)->__VnoInFunc_set(vlSymsp, stream);
        this->__PVT__m_open_time = open_time;
        this->__PVT__m_is_opened = 1U;
        this->__VnoInFunc_do_open(vlProcess, vlSymsp, stream, open_time, type_name);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10866]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_handle(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_handle\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefLogAnd_0;
    IData/*31:0*/ unnamedblk1__DOT__handle;
    CData/*0:0*/ __VExpr_h12ae18f3__0;
    __VExpr_h12ae18f3__0 = 0;
    CData/*0:0*/ __VExpr_h649c3bc7__0;
    __VExpr_h649c3bc7__0 = 0;
    get_handle__Vfuncrtn = 0U;
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_h649c3bc7__0);
    __VlefLogAnd_0 = (1U & (~ (IData)(__VExpr_h649c3bc7__0)));
    if (__VlefLogAnd_0) {
        this->__VnoInFunc_is_closed(vlSymsp, __VExpr_h12ae18f3__0);
        __VlefLogAnd_0 = (1U & (~ (IData)(__VExpr_h12ae18f3__0)));
    }
    if (__VlefLogAnd_0) {
        get_handle__Vfuncrtn = 0U;
    } else {
        this->__VnoInFunc_get_inst_id(vlSymsp, unnamedblk1__DOT__handle);
        __VlefExpr_1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.exists(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this});
        if (__VlefExpr_1) {
            __VlefExpr_1 = (vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                            .at(VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this}) 
                            != unnamedblk1__DOT__handle);
        }
        if (__VlefExpr_1) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_recorders_by_id.erase(vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                                                                                .at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this}));
            ++(vlSymsp->__Vcoverage[10872]);
            ++(vlSymsp->__Vcoverage[10879]);
        } else {
            ++(vlSymsp->__Vcoverage[10873]);
            ++(vlSymsp->__Vcoverage[10880]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_recorders_by_id.at(unnamedblk1__DOT__handle) 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this}) 
            = unnamedblk1__DOT__handle;
        get_handle__Vfuncrtn = unnamedblk1__DOT__handle;
    }
    if ((1U & ((~ (IData)(__VExpr_h649c3bc7__0)) & 
               (~ (IData)(__VExpr_h12ae18f3__0))))) {
        ++(vlSymsp->__Vcoverage[10876]);
    }
    if (__VExpr_h12ae18f3__0) {
        ++(vlSymsp->__Vcoverage[10877]);
    }
    if (__VExpr_h649c3bc7__0) {
        ++(vlSymsp->__Vcoverage[10878]);
    }
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_h649c3bc7__0);
    __VlefLogAnd_2 = (1U & (~ (IData)(__VExpr_h649c3bc7__0)));
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_is_closed(vlSymsp, __VExpr_h12ae18f3__0);
        __VlefLogAnd_2 = (1U & (~ (IData)(__VExpr_h12ae18f3__0)));
    }
    if (__VlefLogAnd_2) {
        ++(vlSymsp->__Vcoverage[10883]);
    }
    this->__VnoInFunc_is_closed(vlSymsp, __VExpr_h12ae18f3__0);
    if (__VExpr_h12ae18f3__0) {
        ++(vlSymsp->__Vcoverage[10884]);
    }
    this->__VnoInFunc_is_open(vlSymsp, __VExpr_h649c3bc7__0);
    if (__VExpr_h649c3bc7__0) {
        ++(vlSymsp->__Vcoverage[10885]);
    }
    ++(vlSymsp->__Vcoverage[10886]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10893]);
        }
        this->__VnoInFunc_do_record_field(vlSymsp, name, value, size, radix);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10894]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_int(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_int\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10896]);
        }
        this->__VnoInFunc_do_record_field_int(vlSymsp, name, value, size, radix);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10897]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_real(Vtb_rng__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10899]);
        }
        this->__VnoInFunc_do_record_field_real(vlSymsp, name, value);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10900]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__66__Vfuncout;
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10902]);
        }
        if ((VlNull{} == value)) {
            this->__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
            ++(vlSymsp->__Vcoverage[10903]);
        } else {
            this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, value);
            this->__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
            this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__66__Vfuncout);
            ++(vlSymsp->__Vcoverage[10904]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10905]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10907]);
        }
        this->__VnoInFunc_do_record_string(vlSymsp, name, value);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10908]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_time(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_time\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10910]);
        }
        this->__VnoInFunc_do_record_time(vlSymsp, name, value);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10911]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_0__get_stream;
    {
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __VlefCall_0__get_stream);
        if ((VlNull{} == __VlefCall_0__get_stream)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10913]);
        }
        this->__VnoInFunc_do_record_generic(vlSymsp, name, value, type_name);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10914]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_use_record_attribute(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &use_record_attribute__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_use_record_attribute\n"); );
    // Body
    use_record_attribute__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[10915]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_record_attribute_handle(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_record_attribute_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_record_attribute_handle\n"); );
    // Body
    get_record_attribute_handle__Vfuncrtn = 0U;
    this->__VnoInFunc_get_handle(vlSymsp, get_record_attribute_handle__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10916]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_open(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_open\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10917]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_close(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_close\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10918]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_free(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_free\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10919]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10920]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_int(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_int\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10921]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_real(Vtb_rng__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_real\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10922]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object\n"); );
    // Body
    CData/*0:0*/ __VlefCall_1__user_hook_enabled;
    IData/*27:0*/ __VlefCall_0__get_recursion_policy;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> unnamedblk2__DOT__field_op;
    this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_0__get_recursion_policy);
    if (((0x00040000U != __VlefCall_0__get_recursion_policy) 
         && (VlNull{} != value))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, unnamedblk2__DOT__field_op);
        VL_NULL_CHECK(unnamedblk2__DOT__field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 512)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000040U, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this}, VlNull{});
        VL_NULL_CHECK(value, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 513)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, unnamedblk2__DOT__field_op);
        VL_NULL_CHECK(unnamedblk2__DOT__field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 514)->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __VlefCall_1__user_hook_enabled);
        if (__VlefCall_1__user_hook_enabled) {
            VL_NULL_CHECK(value, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 515)->__VnoInFunc_do_record(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder>{this});
            ++(vlSymsp->__Vcoverage[10923]);
        } else {
            ++(vlSymsp->__Vcoverage[10924]);
        }
        VL_NULL_CHECK(unnamedblk2__DOT__field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 516)->__VnoInFunc_m_recycle(vlSymsp);
        ++(vlSymsp->__Vcoverage[10925]);
    } else {
        ++(vlSymsp->__Vcoverage[10926]);
    }
    ++(vlSymsp->__Vcoverage[10927]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_string(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_string\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10928]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_time(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_time\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10929]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_generic(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_generic\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10930]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_open_file(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_open_file\n"); );
    // Body
    open_file__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[10931]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create_stream(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create_stream\n"); );
    // Body
    create_stream__Vfuncrtn = 0xffffffffU;
    ++(vlSymsp->__Vcoverage[10932]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_set_attribute(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_set_attribute\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10933]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_attribute(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_attribute\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10934]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_check_handle_kind(Vtb_rng__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_check_handle_kind\n"); );
    // Body
    check_handle_kind__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[10935]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_begin_tr(Vtb_rng__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_begin_tr\n"); );
    // Body
    begin_tr__Vfuncrtn = 0xffffffffU;
    ++(vlSymsp->__Vcoverage[10936]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_end_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_end_tr\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10937]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_link_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_link_tr\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10938]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free_tr\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10939]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_warn_null_stream = 0;
    __PVT__m_is_opened = 0;
    __PVT__m_is_closed = 0;
    __PVT__m_open_time = VL_SCOPED_RAND_RESET_Q(64, 14110915553244549694ULL, 6023116248236803926ull);
    __PVT__m_close_time = VL_SCOPED_RAND_RESET_Q(64, 14110915553244549694ULL, 5696291924415242857ull);
    __PVT__recording_depth = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_recorder::~Vtb_rng_uvm_pkg__03a__03auvm_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_recorder::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_recorder::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_recorder::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_stream_dap:" + VL_TO_STRING(__PVT__m_stream_dap);
    out += ", m_warn_null_stream:" + VL_TO_STRING(__PVT__m_warn_null_stream);
    out += ", m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_is_closed:" + VL_TO_STRING(__PVT__m_is_closed);
    out += ", m_open_time:" + VL_TO_STRING(__PVT__m_open_time);
    out += ", m_close_time:" + VL_TO_STRING(__PVT__m_close_time);
    out += ", recording_depth:" + VL_TO_STRING(__PVT__recording_depth);
    out += ", default_radix:" + VL_TO_STRING(__PVT__default_radix);
    out += ", identifier:" + VL_TO_STRING(__PVT__identifier);
    out += ", policy:" + VL_TO_STRING(__PVT__policy);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
