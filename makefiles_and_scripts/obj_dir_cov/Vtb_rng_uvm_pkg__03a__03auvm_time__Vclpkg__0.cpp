// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg::__VnoInFunc_set_time_resolution(Vtb_rng__Syms* __restrict vlSymsp, double res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_time__Vclpkg::__VnoInFunc_set_time_resolution\n"); );
    // Body
    this->__PVT__m_resolution = res;
    ++(vlSymsp->__Vcoverage[20542]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::init(Vtb_rng__Syms* __restrict vlSymsp, std::string name, double res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_name = name;
    this->__PVT__m_res = ((0.0 == res) ? vlSymsp->TOP__uvm_pkg__03a__03auvm_time__Vclpkg.__PVT__m_resolution
                           : res);
    this->__VnoInFunc_reset(vlSymsp);
    if ((0.0 == res)) {
        ++(vlSymsp->__Vcoverage[20543]);
    }
    if ((1U & (~ (0.0 == res)))) {
        ++(vlSymsp->__Vcoverage[20544]);
    }
    ++(vlSymsp->__Vcoverage[20545]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_name;
    ++(vlSymsp->__Vcoverage[20546]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__m_time = 0ULL;
    ++(vlSymsp->__Vcoverage[20547]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_to_m_res(Vtb_rng__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs, double &to_m_res__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_to_m_res\n"); );
    // Body
    to_m_res__Vfuncrtn = ((t / VL_ITOR_D_Q(64, scaled)) 
                          * (secs / this->__PVT__m_res));
    ++(vlSymsp->__Vcoverage[20548]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_realtime(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ scaled, double secs, double &get_realtime__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_realtime\n"); );
    // Body
    get_realtime__Vfuncrtn = (((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                * VL_ITOR_D_Q(64, scaled)) 
                               * this->__PVT__m_res) 
                              / secs);
    ++(vlSymsp->__Vcoverage[20549]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_incr(Vtb_rng__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_incr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__5__verbosity;
    __Vtask_uvm_report_error__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__5__line;
    __Vtask_uvm_report_error__5__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__5__report_enabled_checked;
    __Vtask_uvm_report_error__5__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    double __VlefCall_2__to_m_res;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((t < 0.0)) {
            this->__Vfunc_uvm_report_enabled__1__id = "UVM/TLM/TIMENEG"s;
            __Vfunc_uvm_report_enabled__1__severity = 2U;
            __Vfunc_uvm_report_enabled__1__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__2__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__3__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__5__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__5__context_name = ""s;
                __Vtask_uvm_report_error__5__line = 0x00000086U;
                this->__Vtask_uvm_report_error__5__filename = "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s;
                __Vtask_uvm_report_error__5__verbosity = 0U;
                this->__Vtask_uvm_report_error__5__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot increment uvm_tlm_time variable "s, this->__PVT__m_name), " by a negative value"s));
                this->__Vtask_uvm_report_error__5__id = "UVM/TLM/TIMENEG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__6__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__7__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__5__id, this->__Vtask_uvm_report_error__5__message, __Vtask_uvm_report_error__5__verbosity, this->__Vtask_uvm_report_error__5__filename, __Vtask_uvm_report_error__5__line, this->__Vtask_uvm_report_error__5__context_name, (IData)(__Vtask_uvm_report_error__5__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[20550]);
            } else {
                ++(vlSymsp->__Vcoverage[20551]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20553]);
        }
        if ((0ULL == scaled)) {
            this->__Vfunc_uvm_report_enabled__9__id = "UVM/TLM/BADSCALE"s;
            __Vfunc_uvm_report_enabled__9__severity = 3U;
            __Vfunc_uvm_report_enabled__9__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), this->__Vfunc_uvm_report_enabled__9__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/TLM/BADSCALE"s, "uvm_tlm_time::incr() called with a scaled time literal that is smaller than the current timescale"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s, 0x0000008bU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[20554]);
            } else {
                ++(vlSymsp->__Vcoverage[20555]);
            }
            ++(vlSymsp->__Vcoverage[20556]);
        } else {
            ++(vlSymsp->__Vcoverage[20557]);
        }
        this->__VnoInFunc_to_m_res(vlSymsp, t, scaled, secs, __VlefCall_2__to_m_res);
        this->__PVT__m_time = VL_RTOIROUND_Q_D((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                                + __VlefCall_2__to_m_res));
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20558]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_decr(Vtb_rng__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_decr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__19__verbosity;
    __Vtask_uvm_report_error__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__19__line;
    __Vtask_uvm_report_error__19__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__19__report_enabled_checked;
    __Vtask_uvm_report_error__19__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__33__verbosity;
    __Vtask_uvm_report_error__33__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__33__line;
    __Vtask_uvm_report_error__33__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__33__report_enabled_checked;
    __Vtask_uvm_report_error__33__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    double __VlefCall_2__to_m_res;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((t < 0.0)) {
            this->__Vfunc_uvm_report_enabled__15__id = "UVM/TLM/TIMENEG"s;
            __Vfunc_uvm_report_enabled__15__severity = 2U;
            __Vfunc_uvm_report_enabled__15__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), this->__Vfunc_uvm_report_enabled__15__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__19__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__19__context_name = ""s;
                __Vtask_uvm_report_error__19__line = 0x000000a1U;
                this->__Vtask_uvm_report_error__19__filename = "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s;
                __Vtask_uvm_report_error__19__verbosity = 0U;
                this->__Vtask_uvm_report_error__19__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot decrement uvm_tlm_time variable "s, this->__PVT__m_name), " by a negative value"s));
                this->__Vtask_uvm_report_error__19__id = "UVM/TLM/TIMENEG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__20__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__21__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__19__id, this->__Vtask_uvm_report_error__19__message, __Vtask_uvm_report_error__19__verbosity, this->__Vtask_uvm_report_error__19__filename, __Vtask_uvm_report_error__19__line, this->__Vtask_uvm_report_error__19__context_name, (IData)(__Vtask_uvm_report_error__19__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[20559]);
            } else {
                ++(vlSymsp->__Vcoverage[20560]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20562]);
        }
        if ((0ULL == scaled)) {
            this->__Vfunc_uvm_report_enabled__23__id = "UVM/TLM/BADSCALE"s;
            __Vfunc_uvm_report_enabled__23__severity = 3U;
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/TLM/BADSCALE"s, "uvm_tlm_time::decr() called with a scaled time literal that is smaller than the current timescale"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s, 0x000000a6U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[20563]);
            } else {
                ++(vlSymsp->__Vcoverage[20564]);
            }
            ++(vlSymsp->__Vcoverage[20565]);
        } else {
            ++(vlSymsp->__Vcoverage[20566]);
        }
        this->__VnoInFunc_to_m_res(vlSymsp, t, scaled, secs, __VlefCall_2__to_m_res);
        this->__PVT__m_time = VL_RTOIROUND_Q_D((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                                - __VlefCall_2__to_m_res));
        if ((VL_ITOR_D_Q(64, this->__PVT__m_time) < 0.0)) {
            this->__Vfunc_uvm_report_enabled__29__id = "UVM/TLM/TOODECR"s;
            __Vfunc_uvm_report_enabled__29__severity = 2U;
            __Vfunc_uvm_report_enabled__29__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__30__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__31__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), this->__Vfunc_uvm_report_enabled__29__id, __VlefCall_3__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                __Vtask_uvm_report_error__33__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__33__context_name = ""s;
                __Vtask_uvm_report_error__33__line = 0x000000acU;
                this->__Vtask_uvm_report_error__33__filename = "/home/matheus/tools/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s;
                __Vtask_uvm_report_error__33__verbosity = 0U;
                this->__Vtask_uvm_report_error__33__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot decrement uvm_tlm_time variable "s, this->__PVT__m_name), " to a negative value"s));
                this->__Vtask_uvm_report_error__33__id = "UVM/TLM/TOODECR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__33__id, this->__Vtask_uvm_report_error__33__message, __Vtask_uvm_report_error__33__verbosity, this->__Vtask_uvm_report_error__33__filename, __Vtask_uvm_report_error__33__line, this->__Vtask_uvm_report_error__33__context_name, (IData)(__Vtask_uvm_report_error__33__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[20567]);
            } else {
                ++(vlSymsp->__Vcoverage[20568]);
            }
            this->__VnoInFunc_reset(vlSymsp);
            ++(vlSymsp->__Vcoverage[20569]);
        } else {
            ++(vlSymsp->__Vcoverage[20570]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20571]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_abstime(Vtb_rng__Syms* __restrict vlSymsp, double secs, double &get_abstime__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_abstime\n"); );
    // Body
    get_abstime__Vfuncrtn = ((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                              * this->__PVT__m_res) 
                             / secs);
    ++(vlSymsp->__Vcoverage[20572]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_set_abstime(Vtb_rng__Syms* __restrict vlSymsp, double t, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::__VnoInFunc_set_abstime\n"); );
    // Body
    this->__PVT__m_time = VL_RTOIROUND_Q_D(((t * secs) 
                                            / this->__PVT__m_res));
    ++(vlSymsp->__Vcoverage[20573]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_time::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_res = 0;
    __PVT__m_time = VL_SCOPED_RAND_RESET_Q(64, 15686929798528229692ULL, 8253044889826645110ull);
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_time::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_time::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_time::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_res:" + VL_TO_STRING(__PVT__m_res);
    out += ", m_time:" + VL_TO_STRING(__PVT__m_time);
    out += ", m_name:" + VL_TO_STRING(__PVT__m_name);
    return (out);
}
