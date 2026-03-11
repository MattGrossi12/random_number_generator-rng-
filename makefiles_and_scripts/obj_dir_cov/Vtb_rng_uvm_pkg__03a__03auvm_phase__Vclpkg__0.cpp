// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_set_default_max_ready_to_end_iterations(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_set_default_max_ready_to_end_iterations\n"); );
    // Body
    this->__PVT__m_default_max_ready_to_end_iters = max;
    ++(vlSymsp->__Vcoverage[16000]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_get_default_max_ready_to_end_iterations(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_max_ready_to_end_iterations__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_get_default_max_ready_to_end_iterations\n"); );
    // Body
    get_default_max_ready_to_end_iterations__Vfuncrtn 
        = this->__PVT__m_default_max_ready_to_end_iters;
    ++(vlSymsp->__Vcoverage[16001]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_jump_all(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_jump_all\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__verbosity;
    __Vtask_uvm_report_warning__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__line;
    __Vtask_uvm_report_warning__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__6__report_enabled_checked;
    __Vtask_uvm_report_warning__6__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__2__id = "NOTIMPL"s;
    __Vfunc_uvm_report_enabled__2__severity = 1U;
    __Vfunc_uvm_report_enabled__2__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__4__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__6__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__6__context_name = ""s;
        __Vtask_uvm_report_warning__6__line = 0x00000848U;
        this->__Vtask_uvm_report_warning__6__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_warning__6__verbosity = 0U;
        this->__Vtask_uvm_report_warning__6__message = "uvm_phase::jump_all is not implemented and has been replaced by uvm_domain::jump_all"s;
        this->__Vtask_uvm_report_warning__6__id = "NOTIMPL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__6__id, this->__Vtask_uvm_report_warning__6__message, __Vtask_uvm_report_warning__6__verbosity, this->__Vtask_uvm_report_warning__6__filename, __Vtask_uvm_report_warning__6__line, this->__Vtask_uvm_report_warning__6__context_name, (IData)(__Vtask_uvm_report_warning__6__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[16414]);
    } else {
        ++(vlSymsp->__Vcoverage[16415]);
    }
    ++(vlSymsp->__Vcoverage[16416]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __Vfunc_get_common_domain__12__Vfuncout;
    IData/*31:0*/ __Vtask_try_put__13__Vfuncout;
    __Vtask_try_put__13__Vfuncout = 0;
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk156__DOT__ph;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__phase;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2246)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __Vfunc_get_common_domain__12__Vfuncout);
    unnamedblk156__DOT__ph = __Vfunc_get_common_domain__12__Vfuncout;
    VL_NULL_CHECK(this->__PVT__m_phase_hopper, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2251)->__VnoInFunc_try_put(vlSymsp, unnamedblk156__DOT__ph, __Vtask_try_put__13__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 5U;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__m_phase_hopper, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2257)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk157__DOT__phase);
        this->__VnoInFunc_m_run_phases____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), unnamedblk157__DOT__phase);
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                2263);
        ++(vlSymsp->__Vcoverage[16446]);
    }
    ++(vlSymsp->__Vcoverage[16447]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_3__15__phase;
    // Body
    __Vtask___VforkTask_3__15__phase = unnamedblk157__DOT__phase;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                            2258);
    co_await VL_NULL_CHECK(__Vtask___VforkTask_3__15__phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2260)->__VnoInFunc_execute_phase(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_func(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_func\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15799]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_task(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_task\n"); );
    // Body
    VL_KEEP_THIS;
    ++(vlSymsp->__Vcoverage[15800]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_traverse\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15803]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15804]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_begin_node(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_begin_node__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_begin_node\n"); );
    // Body
    {
        if ((VlNull{} != this->__PVT__m_imp)) {
            get_begin_node__Vfuncrtn = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15806]);
        }
        get_begin_node__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15807]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_end_node(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_end_node__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_end_node\n"); );
    // Body
    get_end_node__Vfuncrtn = this->__PVT__m_end_node;
    ++(vlSymsp->__Vcoverage[15808]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_ready_to_end_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_ready_to_end_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_ready_to_end_count\n"); );
    // Body
    get_ready_to_end_count__Vfuncrtn = this->__PVT__m_ready_to_end_count;
    ++(vlSymsp->__Vcoverage[15809]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_convert2string\n"); );
    // Body
    std::string __VlefCall_3__m_aa2string;
    std::string __VlefCall_2__m_aa2string;
    std::string __VlefCall_1__get_schedule_name;
    std::string __VlefCall_0__get_name;
    std::string s;
    convert2string__Vfuncrtn = ""s;
    s = ""s;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    if ((VlNull{} == this->__PVT__m_parent)) {
        __VlefCall_1__get_schedule_name = "null"s;
    } else {
        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_1__get_schedule_name);
    }
    this->__VnoInFunc_m_aa2string(vlSymsp, this->__PVT__m_predecessors, __VlefCall_2__m_aa2string);
    this->__VnoInFunc_m_aa2string(vlSymsp, this->__PVT__m_successors, __VlefCall_3__m_aa2string);
    s = VL_SFORMATF_N_NX("phase: %@ parent=%@  pred=%@  succ=%@",0,
                         -1,&(__VlefCall_0__get_name),
                         -1,&(__VlefCall_1__get_schedule_name),
                         -1,&(__VlefCall_2__m_aa2string),
                         -1,&(__VlefCall_3__m_aa2string)) ;
    convert2string__Vfuncrtn = s;
    ++(vlSymsp->__Vcoverage[15811]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_aa2string(Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> aa, std::string &m_aa2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_aa2string\n"); );
    // Body
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph;
    CData/*0:0*/ unnamedblk1__DOT__ph__Vfirst;
    unnamedblk1__DOT__ph__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__unnamedblk2__DOT__n;
    std::string s;
    IData/*31:0*/ i;
    i = 0U;
    s = "'{ "s;
    __VlefExpr_0 = (0U != aa.first(unnamedblk1__DOT__ph));
    if (__VlefExpr_0) {
        unnamedblk1__DOT__ph__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk1__DOT__ph__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != aa.next(unnamedblk1__DOT__ph));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk1__DOT__ph__Vfirst = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__n = unnamedblk1__DOT__ph;
            if ((VlNull{} == unnamedblk1__DOT__unnamedblk2__DOT__n)) {
                __VlefCall_2__get_name = "null"s;
            } else {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__n, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 547)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            }
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, __VlefCall_2__get_name), 
                               VL_CVT_PACK_STR_NI((
                                                   (i 
                                                    == 
                                                    (aa.size() 
                                                     - (IData)(1U)))
                                                    ? 0U
                                                    : 0x2c20U)));
            i = ((IData)(1U) + i);
            ++(vlSymsp->__Vcoverage[15812]);
        }
        ++(vlSymsp->__Vcoverage[15813]);
    } else {
        ++(vlSymsp->__Vcoverage[15814]);
    }
    s = VL_CONCATN_NNN(s, " }"s);
    m_aa2string__Vfuncrtn = s;
    ++(vlSymsp->__Vcoverage[15815]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_domain(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_domain\n"); );
    // Body
    is_domain__Vfuncrtn = (4U == this->__PVT__m_phase_type);
    ++(vlSymsp->__Vcoverage[15816]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_get_transitive_children(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> &phases) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_get_transitive_children\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk3__DOT__succ;
    CData/*0:0*/ unnamedblk3__DOT__succ__Vfirst;
    unnamedblk3__DOT__succ__Vfirst = 0;
    __VlefExpr_0 = (0U != this->__PVT__m_successors.first(unnamedblk3__DOT__succ));
    if (__VlefExpr_0) {
        unnamedblk3__DOT__succ__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk3__DOT__succ__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_successors.next(unnamedblk3__DOT__succ));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk3__DOT__succ__Vfirst = 0U;
            phases.push_back(unnamedblk3__DOT__succ);
            VL_NULL_CHECK(unnamedblk3__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 563)->__VnoInFunc_m_get_transitive_children(vlSymsp, phases);
            ++(vlSymsp->__Vcoverage[15817]);
        }
        ++(vlSymsp->__Vcoverage[15818]);
    } else {
        ++(vlSymsp->__Vcoverage[15819]);
    }
    ++(vlSymsp->__Vcoverage[15820]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection\n"); );
    // Body
    std::string __VlefCall_3__get_name;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefCall_0__get_phase_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> imp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_task_phase> tp;
    {
        this->__VnoInFunc_get_imp(vlSymsp, imp);
        this->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
        __VlefLogOr_2 = ((1U != __VlefCall_0__get_phase_type) 
                         || (VlNull{} == imp));
        if ((1U & (~ (IData)(__VlefLogOr_2)))) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(imp, tp);
            __VlefLogOr_2 = (! __VlefExpr_1);
        }
        if (__VlefLogOr_2) {
            get_objection__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15822]);
        }
        if ((VlNull{} == this->__PVT__phase_done)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(__VlefCall_3__get_name, "_objection"s)), VlNull{}, ""s, this->__PVT__phase_done);
            ++(vlSymsp->__Vcoverage[15823]);
        } else {
            ++(vlSymsp->__Vcoverage[15824]);
        }
        get_objection__Vfuncrtn = this->__PVT__phase_done;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15825]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ phase_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::new\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_value__13__Vfuncout;
    __Vtask_get_arg_value__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_arg_value__14__Vfuncout;
    __Vtask_get_arg_value__14__Vfuncout = 0;
    // Body
    _ctor_var_reset(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__VnoInFunc_get_default_max_ready_to_end_iterations(vlSymsp, this->__PVT__max_ready_to_end_iters);
    ++(vlSymsp->__Vcoverage[15802]);
    IData/*31:0*/ __VlefCall_1__get_arg_value;
    IData/*31:0*/ __VlefCall_0__get_arg_value;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> unnamedblk77__DOT__clp;
    std::string unnamedblk77__DOT__val;
    /*super.new*/;
    this->__PVT__m_phase_type = phase_type;
    if ((("common"s == name) & (4U == phase_type))) {
        this->__PVT__m_state = 1U;
        ++(vlSymsp->__Vcoverage[15826]);
    } else {
        ++(vlSymsp->__Vcoverage[15827]);
    }
    this->__PVT__m_run_count = 0U;
    this->__PVT__m_parent = parent;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, unnamedblk77__DOT__clp);
    unnamedblk77__DOT__val = ""s;
    VL_NULL_CHECK(unnamedblk77__DOT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 717)->__VnoInFunc_get_arg_value(vlSymsp, "+UVM_PHASE_TRACE"s, unnamedblk77__DOT__val, __Vtask_get_arg_value__13__Vfuncout);
    __VlefCall_0__get_arg_value = __Vtask_get_arg_value__13__Vfuncout;
    if ((0U != __VlefCall_0__get_arg_value)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace = 1U;
        ++(vlSymsp->__Vcoverage[15831]);
    } else {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace = 0U;
        ++(vlSymsp->__Vcoverage[15832]);
    }
    VL_NULL_CHECK(unnamedblk77__DOT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 721)->__VnoInFunc_get_arg_value(vlSymsp, "+UVM_USE_OVM_RUN_SEMANTIC"s, unnamedblk77__DOT__val, __Vtask_get_arg_value__14__Vfuncout);
    __VlefCall_1__get_arg_value = __Vtask_get_arg_value__14__Vfuncout;
    if ((0U != __VlefCall_1__get_arg_value)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic = 1U;
        ++(vlSymsp->__Vcoverage[15833]);
    } else {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic = 0U;
        ++(vlSymsp->__Vcoverage[15834]);
    }
    if (((VlNull{} == parent) & ((3U == phase_type) 
                                 | (4U == phase_type)))) {
        this->__PVT__m_end_node = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, 
                                         VL_CVT_PACK_STR_NN(
                                                            VL_CONCATN_NNN(name, "_end"s)), 2U, 
                                         VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
        this->__PVT__m_successors.at(this->__PVT__m_end_node) = 1U;
        VL_NULL_CHECK(this->__PVT__m_end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 733)->__PVT__m_predecessors.at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
        ++(vlSymsp->__Vcoverage[15835]);
    } else {
        ++(vlSymsp->__Vcoverage[15836]);
    }
    if ((("common"s == name) & (4U == phase_type))) {
        ++(vlSymsp->__Vcoverage[15828]);
    }
    if ((4U != phase_type)) {
        ++(vlSymsp->__Vcoverage[15829]);
    }
    if ((1U & (~ ("common"s == name)))) {
        ++(vlSymsp->__Vcoverage[15830]);
    }
    ++(vlSymsp->__Vcoverage[15837]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_add(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> with_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> after_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> before_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> start_with_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> end_with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_add\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__verbosity;
    __Vfunc_uvm_report_enabled__24__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__24__severity;
    __Vfunc_uvm_report_enabled__24__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__verbosity;
    __Vfunc_uvm_report_enabled__42__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__42__severity;
    __Vfunc_uvm_report_enabled__42__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__43__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__44__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
    __Vfunc_uvm_report_enabled__51__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
    __Vfunc_uvm_report_enabled__51__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66__verbosity;
    __Vfunc_uvm_report_enabled__66__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__66__severity;
    __Vfunc_uvm_report_enabled__66__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__71__verbosity;
    __Vfunc_uvm_report_enabled__71__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__71__severity;
    __Vfunc_uvm_report_enabled__71__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__76__verbosity;
    __Vfunc_uvm_report_enabled__76__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__76__severity;
    __Vfunc_uvm_report_enabled__76__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
    __Vfunc_uvm_report_enabled__82__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
    __Vfunc_uvm_report_enabled__82__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__90__verbosity;
    __Vfunc_uvm_report_enabled__90__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__90__severity;
    __Vfunc_uvm_report_enabled__90__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__109__verbosity;
    __Vfunc_uvm_report_enabled__109__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__109__severity;
    __Vfunc_uvm_report_enabled__109__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__125__verbosity;
    __Vtask_uvm_report_info__125__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__125__line;
    __Vtask_uvm_report_info__125__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__125__report_enabled_checked;
    __Vtask_uvm_report_info__125__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__126__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__127__Vfuncout;
    // Body
    std::string __VlefCall_68__get_name;
    CData/*0:0*/ __VlefExpr_67;
    CData/*0:0*/ __VlefExpr_66;
    CData/*0:0*/ __VlefExpr_65;
    CData/*0:0*/ __VlefExpr_64;
    CData/*0:0*/ __VlefExpr_63;
    CData/*0:0*/ __VlefExpr_62;
    CData/*0:0*/ __VlefExpr_61;
    CData/*0:0*/ __VlefExpr_60;
    CData/*0:0*/ __VlefExpr_59;
    CData/*0:0*/ __VlefExpr_58;
    CData/*0:0*/ __VlefExpr_57;
    CData/*0:0*/ __VlefExpr_56;
    CData/*0:0*/ __VlefExpr_55;
    CData/*0:0*/ __VlefExpr_54;
    CData/*0:0*/ __VlefExpr_53;
    CData/*0:0*/ __VlefExpr_52;
    std::string __VlefCall_51__get_name;
    std::string __VlefCall_50__get_name;
    std::string __VlefCond_49;
    IData/*31:0*/ __VlefCall_48__get_inst_id;
    std::string __VlefCall_47__get_name;
    std::string __VlefCall_46__get_name;
    std::string __VlefCall_45__get_name;
    std::string __VlefCall_44__get_name;
    std::string __VlefCall_43__get_name;
    std::string __VlefCall_42__get_name;
    IData/*31:0*/ __VlefCall_41__get_inst_id;
    std::string __VlefCall_40__get_full_name;
    std::string __VlefCall_39__get_name;
    IData/*31:0*/ __VlefCall_38__uvm_report_enabled;
    std::string __VlefCall_37__get_name;
    IData/*31:0*/ __VlefCall_36__get_phase_type;
    std::string __VlefCall_35__get_name;
    std::string __VlefCall_34__get_name;
    IData/*31:0*/ __VlefCall_33__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_32__is_before;
    std::string __VlefCall_31__get_name;
    std::string __VlefCall_30__get_name;
    IData/*31:0*/ __VlefCall_29__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_28__is_before;
    std::string __VlefCall_27__get_name;
    std::string __VlefCall_26__get_name;
    IData/*31:0*/ __VlefCall_25__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_24__is_before;
    IData/*31:0*/ __VlefCall_23__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_21__uvm_report_enabled;
    std::string __VlefCall_20__get_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_18;
    IData/*31:0*/ __VlefCall_17__get_phase_type;
    std::string __VlefCall_16__get_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_14;
    IData/*31:0*/ __VlefCall_13__get_phase_type;
    std::string __VlefCall_12__get_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_10;
    IData/*31:0*/ __VlefCall_9__get_phase_type;
    std::string __VlefCall_8__get_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_6;
    IData/*31:0*/ __VlefCall_5__get_phase_type;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_2;
    IData/*31:0*/ __VlefCall_1__get_phase_type;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string unnamedblk78__DOT__nm;
    std::string unnamedblk79__DOT__nm;
    std::string unnamedblk80__DOT__nm;
    std::string unnamedblk81__DOT__nm;
    std::string unnamedblk82__DOT__nm;
    IData/*31:0*/ unnamedblk84__DOT__typ;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk85__DOT__pred;
    CData/*0:0*/ unnamedblk85__DOT__pred__Vfirst;
    unnamedblk85__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk86__DOT__succ;
    CData/*0:0*/ unnamedblk86__DOT__succ__Vfirst;
    unnamedblk86__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk87__DOT__pred;
    CData/*0:0*/ unnamedblk87__DOT__pred__Vfirst;
    unnamedblk87__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk88__DOT__succ;
    CData/*0:0*/ unnamedblk88__DOT__succ__Vfirst;
    unnamedblk88__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk89__DOT__succ;
    CData/*0:0*/ unnamedblk89__DOT__succ__Vfirst;
    unnamedblk89__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk90__DOT__pred;
    CData/*0:0*/ unnamedblk90__DOT__pred__Vfirst;
    unnamedblk90__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk91__DOT__pred;
    CData/*0:0*/ unnamedblk91__DOT__pred__Vfirst;
    unnamedblk91__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk92__DOT__succ;
    CData/*0:0*/ unnamedblk92__DOT__succ__Vfirst;
    unnamedblk92__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk93__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk93__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> new_node;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> begin_node;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> end_node;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> tmp_node;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change> state_chg;
    if ((VlNull{} == phase)) {
        this->__Vfunc_uvm_report_enabled__16__id = "PH/NULL"s;
        __Vfunc_uvm_report_enabled__16__severity = 3U;
        __Vfunc_uvm_report_enabled__16__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__17__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__18__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), this->__Vfunc_uvm_report_enabled__16__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH/NULL"s, "add: phase argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000002f2U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[15838]);
        } else {
            ++(vlSymsp->__Vcoverage[15839]);
        }
        ++(vlSymsp->__Vcoverage[15840]);
    } else {
        ++(vlSymsp->__Vcoverage[15841]);
    }
    __VlefLogAnd_2 = (VlNull{} != with_phase);
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 756)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_1__get_phase_type);
        __VlefLogAnd_2 = (0U == __VlefCall_1__get_phase_type);
    }
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 757)->__VnoInFunc_get_name(vlSymsp, unnamedblk78__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, with_phase);
        if ((VlNull{} == with_phase)) {
            this->__Vfunc_uvm_report_enabled__24__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__24__severity = 3U;
            __Vfunc_uvm_report_enabled__24__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__24__verbosity, (IData)(__Vfunc_uvm_report_enabled__24__severity), this->__Vfunc_uvm_report_enabled__24__id, __VlefCall_3__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find with_phase '"s, unnamedblk78__DOT__nm), "' within node '"s), __VlefCall_4__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000002f9U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15842]);
            } else {
                ++(vlSymsp->__Vcoverage[15843]);
            }
            ++(vlSymsp->__Vcoverage[15844]);
        } else {
            ++(vlSymsp->__Vcoverage[15845]);
        }
        ++(vlSymsp->__Vcoverage[15846]);
    } else {
        ++(vlSymsp->__Vcoverage[15847]);
    }
    __VlefLogAnd_6 = (VlNull{} != before_phase);
    if (__VlefLogAnd_6) {
        VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 764)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_5__get_phase_type);
        __VlefLogAnd_6 = (0U == __VlefCall_5__get_phase_type);
    }
    if (__VlefLogAnd_6) {
        VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 765)->__VnoInFunc_get_name(vlSymsp, unnamedblk79__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, before_phase, 1U, before_phase);
        if ((VlNull{} == before_phase)) {
            this->__Vfunc_uvm_report_enabled__33__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__33__severity = 3U;
            __Vfunc_uvm_report_enabled__33__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__34__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__35__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), this->__Vfunc_uvm_report_enabled__33__id, __VlefCall_7__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find before_phase '"s, unnamedblk79__DOT__nm), "' within node '"s), __VlefCall_8__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000301U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15848]);
            } else {
                ++(vlSymsp->__Vcoverage[15849]);
            }
            ++(vlSymsp->__Vcoverage[15850]);
        } else {
            ++(vlSymsp->__Vcoverage[15851]);
        }
        ++(vlSymsp->__Vcoverage[15852]);
    } else {
        ++(vlSymsp->__Vcoverage[15853]);
    }
    __VlefLogAnd_10 = (VlNull{} != after_phase);
    if (__VlefLogAnd_10) {
        VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 772)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_9__get_phase_type);
        __VlefLogAnd_10 = (0U == __VlefCall_9__get_phase_type);
    }
    if (__VlefLogAnd_10) {
        VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 773)->__VnoInFunc_get_name(vlSymsp, unnamedblk80__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, after_phase, 1U, after_phase);
        if ((VlNull{} == after_phase)) {
            this->__Vfunc_uvm_report_enabled__42__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__42__severity = 3U;
            __Vfunc_uvm_report_enabled__42__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__43__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__44__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__44__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__42__verbosity, (IData)(__Vfunc_uvm_report_enabled__42__severity), this->__Vfunc_uvm_report_enabled__42__id, __VlefCall_11__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_11__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_12__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find after_phase '"s, unnamedblk80__DOT__nm), "' within node '"s), __VlefCall_12__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000309U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15854]);
            } else {
                ++(vlSymsp->__Vcoverage[15855]);
            }
            ++(vlSymsp->__Vcoverage[15856]);
        } else {
            ++(vlSymsp->__Vcoverage[15857]);
        }
        ++(vlSymsp->__Vcoverage[15858]);
    } else {
        ++(vlSymsp->__Vcoverage[15859]);
    }
    __VlefLogAnd_14 = (VlNull{} != start_with_phase);
    if (__VlefLogAnd_14) {
        VL_NULL_CHECK(start_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 780)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_13__get_phase_type);
        __VlefLogAnd_14 = (0U == __VlefCall_13__get_phase_type);
    }
    if (__VlefLogAnd_14) {
        VL_NULL_CHECK(start_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 781)->__VnoInFunc_get_name(vlSymsp, unnamedblk81__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, start_with_phase, 1U, start_with_phase);
        if ((VlNull{} == start_with_phase)) {
            this->__Vfunc_uvm_report_enabled__51__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__51__severity = 3U;
            __Vfunc_uvm_report_enabled__51__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__52__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__53__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), this->__Vfunc_uvm_report_enabled__51__id, __VlefCall_15__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_15__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find start_with_phase '"s, unnamedblk81__DOT__nm), "' within node '"s), __VlefCall_16__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000311U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15860]);
            } else {
                ++(vlSymsp->__Vcoverage[15861]);
            }
            ++(vlSymsp->__Vcoverage[15862]);
        } else {
            ++(vlSymsp->__Vcoverage[15863]);
        }
        ++(vlSymsp->__Vcoverage[15864]);
    } else {
        ++(vlSymsp->__Vcoverage[15865]);
    }
    __VlefLogAnd_18 = (VlNull{} != end_with_phase);
    if (__VlefLogAnd_18) {
        VL_NULL_CHECK(end_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 788)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_17__get_phase_type);
        __VlefLogAnd_18 = (0U == __VlefCall_17__get_phase_type);
    }
    if (__VlefLogAnd_18) {
        VL_NULL_CHECK(end_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 789)->__VnoInFunc_get_name(vlSymsp, unnamedblk82__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, end_with_phase, 1U, end_with_phase);
        if ((VlNull{} == end_with_phase)) {
            this->__Vfunc_uvm_report_enabled__60__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__60__severity = 3U;
            __Vfunc_uvm_report_enabled__60__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__61__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__62__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), this->__Vfunc_uvm_report_enabled__60__id, __VlefCall_19__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_19__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_20__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find end_with_phase '"s, unnamedblk82__DOT__nm), "' within node '"s), __VlefCall_20__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000319U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15866]);
            } else {
                ++(vlSymsp->__Vcoverage[15867]);
            }
            ++(vlSymsp->__Vcoverage[15868]);
        } else {
            ++(vlSymsp->__Vcoverage[15869]);
        }
        ++(vlSymsp->__Vcoverage[15870]);
    } else {
        ++(vlSymsp->__Vcoverage[15871]);
    }
    if ((1U < (((VlNull{} != with_phase) + (VlNull{} 
                                            != after_phase)) 
               + (VlNull{} != start_with_phase)))) {
        this->__Vfunc_uvm_report_enabled__66__id = "PH_BAD_ADD"s;
        __Vfunc_uvm_report_enabled__66__severity = 3U;
        __Vfunc_uvm_report_enabled__66__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__67__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__68__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__66__verbosity, (IData)(__Vfunc_uvm_report_enabled__66__severity), this->__Vfunc_uvm_report_enabled__66__id, __VlefCall_21__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_21__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "only one of with_phase/after_phase/start_with_phase may be specified as they all specify predecessor"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000031eU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[15872]);
        } else {
            ++(vlSymsp->__Vcoverage[15873]);
        }
        ++(vlSymsp->__Vcoverage[15874]);
    } else {
        ++(vlSymsp->__Vcoverage[15875]);
    }
    if ((1U < (((VlNull{} != with_phase) + (VlNull{} 
                                            != before_phase)) 
               + (VlNull{} != end_with_phase)))) {
        this->__Vfunc_uvm_report_enabled__71__id = "PH_BAD_ADD"s;
        __Vfunc_uvm_report_enabled__71__severity = 3U;
        __Vfunc_uvm_report_enabled__71__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__72__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__73__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__71__verbosity, (IData)(__Vfunc_uvm_report_enabled__71__severity), this->__Vfunc_uvm_report_enabled__71__id, __VlefCall_22__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_22__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "only one of with_phase/before_phase/end_with_phase may be specified as they all specify successor"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000322U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[15876]);
        } else {
            ++(vlSymsp->__Vcoverage[15877]);
        }
        ++(vlSymsp->__Vcoverage[15878]);
    } else {
        ++(vlSymsp->__Vcoverage[15879]);
    }
    if ((((((before_phase == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}) 
            | (after_phase == this->__PVT__m_end_node)) 
           | (with_phase == this->__PVT__m_end_node)) 
          | (start_with_phase == this->__PVT__m_end_node)) 
         | (end_with_phase == this->__PVT__m_end_node))) {
        this->__Vfunc_uvm_report_enabled__76__id = "PH_BAD_ADD"s;
        __Vfunc_uvm_report_enabled__76__severity = 3U;
        __Vfunc_uvm_report_enabled__76__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__77__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__78__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__76__verbosity, (IData)(__Vfunc_uvm_report_enabled__76__severity), this->__Vfunc_uvm_report_enabled__76__id, __VlefCall_23__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_23__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "cannot add before begin node, after end node, or with end nodes"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000032aU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[15880]);
        } else {
            ++(vlSymsp->__Vcoverage[15881]);
        }
        ++(vlSymsp->__Vcoverage[15882]);
    } else {
        ++(vlSymsp->__Vcoverage[15883]);
    }
    if (((VlNull{} != before_phase) & (VlNull{} != after_phase))) {
        VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 813)->__VnoInFunc_is_before(vlProcess, vlSymsp, before_phase, __VlefCall_24__is_before);
        if (__VlefCall_24__is_before) {
            ++(vlSymsp->__Vcoverage[15887]);
        } else {
            this->__Vfunc_uvm_report_enabled__82__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__82__severity = 3U;
            __Vfunc_uvm_report_enabled__82__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__83__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__84__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), this->__Vfunc_uvm_report_enabled__82__id, __VlefCall_25__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_25__uvm_report_enabled)) {
                VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 815)->__VnoInFunc_get_name(vlSymsp, __VlefCall_26__get_name);
                VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 815)->__VnoInFunc_get_name(vlSymsp, __VlefCall_27__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, __VlefCall_26__get_name), "' is not before phase '"s), __VlefCall_27__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000032fU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15884]);
            } else {
                ++(vlSymsp->__Vcoverage[15885]);
            }
            ++(vlSymsp->__Vcoverage[15886]);
        }
        ++(vlSymsp->__Vcoverage[15888]);
    } else {
        ++(vlSymsp->__Vcoverage[15889]);
    }
    if (((VlNull{} != before_phase) & (VlNull{} != start_with_phase))) {
        VL_NULL_CHECK(start_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 820)->__VnoInFunc_is_before(vlProcess, vlSymsp, before_phase, __VlefCall_28__is_before);
        if (__VlefCall_28__is_before) {
            ++(vlSymsp->__Vcoverage[15893]);
        } else {
            this->__Vfunc_uvm_report_enabled__90__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__90__severity = 3U;
            __Vfunc_uvm_report_enabled__90__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__91__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__90__verbosity, (IData)(__Vfunc_uvm_report_enabled__90__severity), this->__Vfunc_uvm_report_enabled__90__id, __VlefCall_29__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_29__uvm_report_enabled)) {
                VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 822)->__VnoInFunc_get_name(vlSymsp, __VlefCall_30__get_name);
                VL_NULL_CHECK(start_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 822)->__VnoInFunc_get_name(vlSymsp, __VlefCall_31__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, __VlefCall_30__get_name), "' is not before phase '"s), __VlefCall_31__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000336U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15890]);
            } else {
                ++(vlSymsp->__Vcoverage[15891]);
            }
            ++(vlSymsp->__Vcoverage[15892]);
        }
        ++(vlSymsp->__Vcoverage[15894]);
    } else {
        ++(vlSymsp->__Vcoverage[15895]);
    }
    if (((VlNull{} != end_with_phase) & (VlNull{} != after_phase))) {
        VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 827)->__VnoInFunc_is_before(vlProcess, vlSymsp, end_with_phase, __VlefCall_32__is_before);
        if (__VlefCall_32__is_before) {
            ++(vlSymsp->__Vcoverage[15899]);
        } else {
            this->__Vfunc_uvm_report_enabled__98__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__98__severity = 3U;
            __Vfunc_uvm_report_enabled__98__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__99__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__100__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), this->__Vfunc_uvm_report_enabled__98__id, __VlefCall_33__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_33__uvm_report_enabled)) {
                VL_NULL_CHECK(end_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 829)->__VnoInFunc_get_name(vlSymsp, __VlefCall_34__get_name);
                VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 829)->__VnoInFunc_get_name(vlSymsp, __VlefCall_35__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, __VlefCall_34__get_name), "' is not before phase '"s), __VlefCall_35__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000033dU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15896]);
            } else {
                ++(vlSymsp->__Vcoverage[15897]);
            }
            ++(vlSymsp->__Vcoverage[15898]);
        }
        ++(vlSymsp->__Vcoverage[15900]);
    } else {
        ++(vlSymsp->__Vcoverage[15901]);
    }
    VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 834)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_36__get_phase_type);
    if ((0U == __VlefCall_36__get_phase_type)) {
        VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 836)->__VnoInFunc_get_name(vlSymsp, __VlefCall_37__get_name);
        new_node = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, 
                          VL_CVT_PACK_STR_NN(__VlefCall_37__get_name), 1U, 
                          VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(new_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 837)->__PVT__m_imp 
            = phase;
        begin_node = new_node;
        end_node = new_node;
        ++(vlSymsp->__Vcoverage[15902]);
    } else {
        begin_node = phase;
        end_node = VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 845)
            ->__PVT__m_end_node;
        VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 846)->__PVT__m_parent 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
        ++(vlSymsp->__Vcoverage[15903]);
    }
    if ((((((VlNull{} == with_phase) & (VlNull{} == after_phase)) 
           & (VlNull{} == before_phase)) & (VlNull{} 
                                            == start_with_phase)) 
         & (VlNull{} == end_with_phase))) {
        before_phase = this->__PVT__m_end_node;
        ++(vlSymsp->__Vcoverage[15904]);
    } else {
        ++(vlSymsp->__Vcoverage[15905]);
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 865)->__VnoInFunc_get_phase_type(vlSymsp, unnamedblk84__DOT__typ);
        this->__Vfunc_uvm_report_enabled__109__id = "PH/TRC/ADD_PH"s;
        __Vfunc_uvm_report_enabled__109__severity = 0U;
        __Vfunc_uvm_report_enabled__109__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__110__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__111__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__109__verbosity, (IData)(__Vfunc_uvm_report_enabled__109__severity), this->__Vfunc_uvm_report_enabled__109__id, __VlefCall_38__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_38__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_39__get_name);
            VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_40__get_full_name);
            VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_41__get_inst_id);
            if ((VlNull{} == with_phase)) {
                __VlefCall_42__get_name = "null"s;
            } else {
                VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_42__get_name);
            }
            if ((VlNull{} == start_with_phase)) {
                __VlefCall_43__get_name = "null"s;
            } else {
                VL_NULL_CHECK(start_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_43__get_name);
            }
            if ((VlNull{} == end_with_phase)) {
                __VlefCall_44__get_name = "null"s;
            } else {
                VL_NULL_CHECK(end_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_44__get_name);
            }
            if ((VlNull{} == after_phase)) {
                __VlefCall_45__get_name = "null"s;
            } else {
                VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_45__get_name);
            }
            if ((VlNull{} == before_phase)) {
                __VlefCall_46__get_name = "null"s;
            } else {
                VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_46__get_name);
            }
            if ((VlNull{} == new_node)) {
                __VlefCond_49 = "null"s;
            } else {
                VL_NULL_CHECK(new_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_47__get_name);
                VL_NULL_CHECK(new_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_48__get_inst_id);
                __VlefCond_49 = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_47__get_name, " inst_id="s), VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                __VlefCall_48__get_inst_id) );
            }
            if ((VlNull{} == begin_node)) {
                __VlefCall_50__get_name = "null"s;
            } else {
                VL_NULL_CHECK(begin_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_50__get_name);
            }
            if ((VlNull{} == end_node)) {
                __VlefCall_51__get_name = "null"s;
            } else {
                VL_NULL_CHECK(end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)->__VnoInFunc_get_name(vlSymsp, __VlefCall_51__get_name);
            }
            __Vtask_uvm_report_info__125__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__125__context_name = ""s;
            __Vtask_uvm_report_info__125__line = 0x0000036eU;
            this->__Vtask_uvm_report_info__125__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__125__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__125__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_39__get_name, " ("s), Vtb_rng___024unit::__Venumtab_enum_name35
                                                                                [
                                                                                (7U 
                                                                                & this->__PVT__m_phase_type)]), ") ADD_PHASE: phase="s), __VlefCall_40__get_full_name), " ("s), Vtb_rng___024unit::__Venumtab_enum_name35
                                                                                [
                                                                                (7U 
                                                                                & unnamedblk84__DOT__typ)]), ", inst_id="s), VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                __VlefCall_41__get_inst_id) ), ")"s), " with_phase="s), __VlefCall_42__get_name), " start_with_phase="s), __VlefCall_43__get_name), " end_with_phase="s), __VlefCall_44__get_name), " after_phase="s), __VlefCall_45__get_name), " before_phase="s), __VlefCall_46__get_name), " new_node="s), __VlefCond_49), " begin_node="s), __VlefCall_50__get_name), " end_node="s), __VlefCall_51__get_name));
            this->__Vtask_uvm_report_info__125__id = "PH/TRC/ADD_PH"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__126__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__127__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__127__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__125__id, this->__Vtask_uvm_report_info__125__message, __Vtask_uvm_report_info__125__verbosity, this->__Vtask_uvm_report_info__125__filename, __Vtask_uvm_report_info__125__line, this->__Vtask_uvm_report_info__125__context_name, (IData)(__Vtask_uvm_report_info__125__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[15906]);
        } else {
            ++(vlSymsp->__Vcoverage[15907]);
        }
        ++(vlSymsp->__Vcoverage[15908]);
    } else {
        ++(vlSymsp->__Vcoverage[15909]);
    }
    if ((VlNull{} != with_phase)) {
        VL_NULL_CHECK(begin_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 886)->__PVT__m_predecessors 
            = VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 886)
            ->__PVT__m_predecessors;
        __VlefExpr_52 = (0U != VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 887)
                         ->__PVT__m_predecessors.first(unnamedblk85__DOT__pred));
        if (__VlefExpr_52) {
            unnamedblk85__DOT__pred__Vfirst = 1U;
            while (true) {
                __VlefExpr_53 = unnamedblk85__DOT__pred__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_53)))) {
                    __VlefExpr_53 = (0U != VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 887)
                                     ->__PVT__m_predecessors.next(unnamedblk85__DOT__pred));
                }
                if (!(__VlefExpr_53)) break;
                unnamedblk85__DOT__pred__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk85__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 887)->__PVT__m_successors.at(begin_node) = 1U;
                ++(vlSymsp->__Vcoverage[15910]);
            }
            ++(vlSymsp->__Vcoverage[15911]);
        } else {
            ++(vlSymsp->__Vcoverage[15912]);
        }
        VL_NULL_CHECK(end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 889)->__PVT__m_successors 
            = VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 889)
            ->__PVT__m_successors;
        __VlefExpr_54 = (0U != VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 890)
                         ->__PVT__m_successors.first(unnamedblk86__DOT__succ));
        if (__VlefExpr_54) {
            unnamedblk86__DOT__succ__Vfirst = 1U;
            while (true) {
                __VlefExpr_55 = unnamedblk86__DOT__succ__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_55)))) {
                    __VlefExpr_55 = (0U != VL_NULL_CHECK(with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 890)
                                     ->__PVT__m_successors.next(unnamedblk86__DOT__succ));
                }
                if (!(__VlefExpr_55)) break;
                unnamedblk86__DOT__succ__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk86__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 890)->__PVT__m_predecessors.at(end_node) = 1U;
                ++(vlSymsp->__Vcoverage[15913]);
            }
            ++(vlSymsp->__Vcoverage[15914]);
        } else {
            ++(vlSymsp->__Vcoverage[15915]);
        }
        ++(vlSymsp->__Vcoverage[15916]);
    } else {
        ++(vlSymsp->__Vcoverage[15917]);
    }
    if ((VlNull{} != start_with_phase)) {
        VL_NULL_CHECK(begin_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 895)->__PVT__m_predecessors 
            = VL_NULL_CHECK(start_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 895)
            ->__PVT__m_predecessors;
        __VlefExpr_56 = (0U != VL_NULL_CHECK(start_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 896)
                         ->__PVT__m_predecessors.first(unnamedblk87__DOT__pred));
        if (__VlefExpr_56) {
            unnamedblk87__DOT__pred__Vfirst = 1U;
            while (true) {
                __VlefExpr_57 = unnamedblk87__DOT__pred__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_57)))) {
                    __VlefExpr_57 = (0U != VL_NULL_CHECK(start_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 896)
                                     ->__PVT__m_predecessors.next(unnamedblk87__DOT__pred));
                }
                if (!(__VlefExpr_57)) break;
                unnamedblk87__DOT__pred__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk87__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 897)->__PVT__m_successors.at(begin_node) = 1U;
                ++(vlSymsp->__Vcoverage[15918]);
            }
            ++(vlSymsp->__Vcoverage[15919]);
        } else {
            ++(vlSymsp->__Vcoverage[15920]);
        }
        if (((VlNull{} == before_phase) & (VlNull{} 
                                           == end_with_phase))) {
            VL_NULL_CHECK(end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 901)->__PVT__m_successors 
                = VL_NULL_CHECK(this->__PVT__m_end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 901)
                ->__PVT__m_successors;
            __VlefExpr_58 = (0U != VL_NULL_CHECK(this->__PVT__m_end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 902)
                             ->__PVT__m_successors.first(unnamedblk88__DOT__succ));
            if (__VlefExpr_58) {
                unnamedblk88__DOT__succ__Vfirst = 1U;
                while (true) {
                    __VlefExpr_59 = unnamedblk88__DOT__succ__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_59)))) {
                        __VlefExpr_59 = (0U != VL_NULL_CHECK(this->__PVT__m_end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 902)
                                         ->__PVT__m_successors.next(unnamedblk88__DOT__succ));
                    }
                    if (!(__VlefExpr_59)) break;
                    unnamedblk88__DOT__succ__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk88__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 903)->__PVT__m_predecessors.at(end_node) = 1U;
                    ++(vlSymsp->__Vcoverage[15921]);
                }
                ++(vlSymsp->__Vcoverage[15922]);
            } else {
                ++(vlSymsp->__Vcoverage[15923]);
            }
            ++(vlSymsp->__Vcoverage[15924]);
        } else {
            ++(vlSymsp->__Vcoverage[15925]);
        }
        ++(vlSymsp->__Vcoverage[15926]);
    } else {
        ++(vlSymsp->__Vcoverage[15927]);
    }
    if ((VlNull{} != end_with_phase)) {
        VL_NULL_CHECK(end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 910)->__PVT__m_successors 
            = VL_NULL_CHECK(end_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 910)
            ->__PVT__m_successors;
        __VlefExpr_60 = (0U != VL_NULL_CHECK(end_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 911)
                         ->__PVT__m_successors.first(unnamedblk89__DOT__succ));
        if (__VlefExpr_60) {
            unnamedblk89__DOT__succ__Vfirst = 1U;
            while (true) {
                __VlefExpr_61 = unnamedblk89__DOT__succ__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_61)))) {
                    __VlefExpr_61 = (0U != VL_NULL_CHECK(end_with_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 911)
                                     ->__PVT__m_successors.next(unnamedblk89__DOT__succ));
                }
                if (!(__VlefExpr_61)) break;
                unnamedblk89__DOT__succ__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk89__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 912)->__PVT__m_predecessors.at(end_node) = 1U;
                ++(vlSymsp->__Vcoverage[15928]);
            }
            ++(vlSymsp->__Vcoverage[15929]);
        } else {
            ++(vlSymsp->__Vcoverage[15930]);
        }
        if (((VlNull{} == after_phase) & (VlNull{} 
                                          == start_with_phase))) {
            VL_NULL_CHECK(begin_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 916)->__PVT__m_predecessors 
                = this->__PVT__m_predecessors;
            __VlefExpr_62 = (0U != this->__PVT__m_predecessors.first(unnamedblk90__DOT__pred));
            if (__VlefExpr_62) {
                unnamedblk90__DOT__pred__Vfirst = 1U;
                while (true) {
                    __VlefExpr_63 = unnamedblk90__DOT__pred__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_63)))) {
                        __VlefExpr_63 = (0U != this->__PVT__m_predecessors.next(unnamedblk90__DOT__pred));
                    }
                    if (!(__VlefExpr_63)) break;
                    unnamedblk90__DOT__pred__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk90__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 918)->__PVT__m_successors.at(begin_node) = 1U;
                    ++(vlSymsp->__Vcoverage[15931]);
                }
                ++(vlSymsp->__Vcoverage[15932]);
            } else {
                ++(vlSymsp->__Vcoverage[15933]);
            }
            ++(vlSymsp->__Vcoverage[15934]);
        } else {
            ++(vlSymsp->__Vcoverage[15935]);
        }
        ++(vlSymsp->__Vcoverage[15936]);
    } else {
        ++(vlSymsp->__Vcoverage[15937]);
    }
    if ((VlNull{} != before_phase)) {
        if (((VlNull{} == after_phase) & (VlNull{} 
                                          == start_with_phase))) {
            __VlefExpr_64 = (0U != VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 928)
                             ->__PVT__m_predecessors.first(unnamedblk91__DOT__pred));
            if (__VlefExpr_64) {
                unnamedblk91__DOT__pred__Vfirst = 1U;
                while (true) {
                    __VlefExpr_65 = unnamedblk91__DOT__pred__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_65)))) {
                        __VlefExpr_65 = (0U != VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 928)
                                         ->__PVT__m_predecessors.next(unnamedblk91__DOT__pred));
                    }
                    if (!(__VlefExpr_65)) break;
                    unnamedblk91__DOT__pred__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk91__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 929)->__PVT__m_successors.erase(before_phase);
                    VL_NULL_CHECK(unnamedblk91__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 930)->__PVT__m_successors.at(begin_node) = 1U;
                    ++(vlSymsp->__Vcoverage[15938]);
                }
                ++(vlSymsp->__Vcoverage[15939]);
            } else {
                ++(vlSymsp->__Vcoverage[15940]);
            }
            VL_NULL_CHECK(begin_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 932)->__PVT__m_predecessors 
                = VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 932)
                ->__PVT__m_predecessors;
            VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 933)->__PVT__m_predecessors.clear();
            ++(vlSymsp->__Vcoverage[15943]);
        } else if (VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 937)
                   ->__PVT__m_predecessors.exists(after_phase)) {
            VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 938)->__PVT__m_predecessors.erase(after_phase);
            ++(vlSymsp->__Vcoverage[15941]);
        } else {
            ++(vlSymsp->__Vcoverage[15942]);
        }
        VL_NULL_CHECK(before_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 942)->__PVT__m_predecessors.at(end_node) = 1U;
        VL_NULL_CHECK(end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 943)->__PVT__m_successors.clear();
        VL_NULL_CHECK(end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 944)->__PVT__m_successors.at(before_phase) = 1U;
        ++(vlSymsp->__Vcoverage[15944]);
    } else {
        ++(vlSymsp->__Vcoverage[15945]);
    }
    if ((VlNull{} != after_phase)) {
        if (((VlNull{} == before_phase) & (VlNull{} 
                                           == end_with_phase))) {
            __VlefExpr_66 = (0U != VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 954)
                             ->__PVT__m_successors.first(unnamedblk92__DOT__succ));
            if (__VlefExpr_66) {
                unnamedblk92__DOT__succ__Vfirst = 1U;
                while (true) {
                    __VlefExpr_67 = unnamedblk92__DOT__succ__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_67)))) {
                        __VlefExpr_67 = (0U != VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 954)
                                         ->__PVT__m_successors.next(unnamedblk92__DOT__succ));
                    }
                    if (!(__VlefExpr_67)) break;
                    unnamedblk92__DOT__succ__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk92__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 955)->__PVT__m_predecessors.erase(after_phase);
                    VL_NULL_CHECK(unnamedblk92__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 956)->__PVT__m_predecessors.at(end_node) = 1U;
                    ++(vlSymsp->__Vcoverage[15946]);
                }
                ++(vlSymsp->__Vcoverage[15947]);
            } else {
                ++(vlSymsp->__Vcoverage[15948]);
            }
            VL_NULL_CHECK(end_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 958)->__PVT__m_successors 
                = VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 958)
                ->__PVT__m_successors;
            VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 959)->__PVT__m_successors.clear();
            ++(vlSymsp->__Vcoverage[15951]);
        } else if (VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 963)
                   ->__PVT__m_successors.exists(before_phase)) {
            VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 964)->__PVT__m_successors.erase(before_phase);
            ++(vlSymsp->__Vcoverage[15949]);
        } else {
            ++(vlSymsp->__Vcoverage[15950]);
        }
        VL_NULL_CHECK(after_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 968)->__PVT__m_successors.at(begin_node) = 1U;
        VL_NULL_CHECK(begin_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 969)->__PVT__m_predecessors.clear();
        VL_NULL_CHECK(begin_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 970)->__PVT__m_predecessors.at(after_phase) = 1U;
        ++(vlSymsp->__Vcoverage[15952]);
    } else {
        ++(vlSymsp->__Vcoverage[15953]);
    }
    if ((VlNull{} == new_node)) {
        tmp_node = phase;
        ++(vlSymsp->__Vcoverage[15954]);
    } else {
        tmp_node = new_node;
        ++(vlSymsp->__Vcoverage[15955]);
    }
    VL_NULL_CHECK(tmp_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 981)->__VnoInFunc_get_name(vlSymsp, __VlefCall_68__get_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi14__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_68__get_name), VlNull{}, ""s, state_chg);
    VL_NULL_CHECK(state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 982)->__PVT__m_phase 
        = tmp_node;
    VL_NULL_CHECK(state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 983)->__PVT__m_jump_to = VlNull{};
    VL_NULL_CHECK(state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 984)->__PVT__m_prev_state 
        = VL_NULL_CHECK(tmp_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 984)
        ->__PVT__m_state;
    VL_NULL_CHECK(tmp_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 985)->__PVT__m_state = 1U;
    unnamedblk93__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
    VL_NULL_CHECK(unnamedblk93__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 986)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk93__DOT__cb);
    while ((VlNull{} != unnamedblk93__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk93__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 986)->__VnoInFunc_phase_state_change(vlSymsp, tmp_node, state_chg);
        VL_NULL_CHECK(unnamedblk93__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 986)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk93__DOT__cb);
        ++(vlSymsp->__Vcoverage[15956]);
    }
    ++(vlSymsp->__Vcoverage[15957]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
    ++(vlSymsp->__Vcoverage[15958]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_imp(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_imp\n"); );
    // Body
    get_imp__Vfuncrtn = this->__PVT__m_imp;
    ++(vlSymsp->__Vcoverage[15959]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ hier, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__get_phase_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> sched;
    {
        sched = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
        if (hier) {
            while (true) {
                __VlefLogAnd_1 = (VlNull{} != VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1013)
                                  ->__PVT__m_parent);
                if (__VlefLogAnd_1) {
                    VL_NULL_CHECK(VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1013)
                                  ->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1013)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
                    __VlefLogAnd_1 = (3U == __VlefCall_0__get_phase_type);
                }
                if (!(__VlefLogAnd_1)) break;
                sched = VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1014)
                    ->__PVT__m_parent;
                ++(vlSymsp->__Vcoverage[15960]);
            }
            ++(vlSymsp->__Vcoverage[15961]);
        } else {
            ++(vlSymsp->__Vcoverage[15962]);
        }
        if ((3U == VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1015)
             ->__PVT__m_phase_type)) {
            get_schedule__Vfuncrtn = sched;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15964]);
        }
        if ((1U == VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1017)
             ->__PVT__m_phase_type)) {
            if (((VlNull{} != this->__PVT__m_parent) 
                 && (4U != VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1018)
                     ->__PVT__m_phase_type))) {
                get_schedule__Vfuncrtn = this->__PVT__m_parent;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[15966]);
            }
            ++(vlSymsp->__Vcoverage[15967]);
        } else {
            ++(vlSymsp->__Vcoverage[15968]);
        }
        get_schedule__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15969]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__136__verbosity;
    __Vfunc_uvm_report_enabled__136__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__136__severity;
    __Vfunc_uvm_report_enabled__136__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__137__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__138__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase;
    {
        phase = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
        while (((VlNull{} != phase) && (4U != VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1030)
                                        ->__PVT__m_phase_type))) {
            phase = VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1031)
                ->__PVT__m_parent;
            ++(vlSymsp->__Vcoverage[15970]);
        }
        if ((VlNull{} == phase)) {
            get_domain__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15972]);
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(phase, get_domain__Vfuncrtn);
        if (__VlefExpr_0) {
            ++(vlSymsp->__Vcoverage[15976]);
        } else {
            this->__Vfunc_uvm_report_enabled__136__id = "PH/INTERNAL"s;
            __Vfunc_uvm_report_enabled__136__severity = 3U;
            __Vfunc_uvm_report_enabled__136__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__137__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__137__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__138__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__138__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__136__verbosity, (IData)(__Vfunc_uvm_report_enabled__136__severity), this->__Vfunc_uvm_report_enabled__136__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH/INTERNAL"s, "get_domain: m_phase_type is DOMAIN but $cast to uvm_domain fails"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000040bU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[15973]);
            } else {
                ++(vlSymsp->__Vcoverage[15974]);
            }
            ++(vlSymsp->__Vcoverage[15975]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15977]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_domain_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain_name\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> domain;
    {
        get_domain_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_domain(vlProcess, vlSymsp, domain);
        if ((VlNull{} == domain)) {
            get_domain_name__Vfuncrtn = "unknown"s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15979]);
        }
        VL_NULL_CHECK(domain, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1047)->__VnoInFunc_get_name(vlSymsp, get_domain_name__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15980]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule_name(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ hier, std::string &get_schedule_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule_name\n"); );
    // Body
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__get_phase_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> sched;
    std::string s;
    {
        get_schedule_name__Vfuncrtn = ""s;
        s = ""s;
        this->__VnoInFunc_get_schedule(vlSymsp, hier, sched);
        if ((VlNull{} == sched)) {
            get_schedule_name__Vfuncrtn = ""s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15982]);
        }
        VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1060)->__VnoInFunc_get_name(vlSymsp, s);
        while (true) {
            __VlefLogAnd_1 = ((VlNull{} != VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1061)
                               ->__PVT__m_parent) && 
                              (VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1061)
                               ->__PVT__m_parent != sched));
            if (__VlefLogAnd_1) {
                VL_NULL_CHECK(VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1062)
                              ->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1062)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
                __VlefLogAnd_1 = (3U == __VlefCall_0__get_phase_type);
            }
            if (!(__VlefLogAnd_1)) break;
            sched = VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1063)
                ->__PVT__m_parent;
            VL_NULL_CHECK(sched, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1064)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_2__get_name, 
                                              VL_CVT_PACK_STR_NI(
                                                                 (VL_LTS_III(32, 0U, 
                                                                             VL_LEN_IN(s))
                                                                   ? 0x2eU
                                                                   : 0U))), s);
            ++(vlSymsp->__Vcoverage[15985]);
        }
        get_schedule_name__Vfuncrtn = s;
        __Vlabel0: ;
    }
    if (VL_LTS_III(32, 0U, VL_LEN_IN(s))) {
        ++(vlSymsp->__Vcoverage[15983]);
    }
    if (VL_GTES_III(32, 0U, VL_LEN_IN(s))) {
        ++(vlSymsp->__Vcoverage[15984]);
    }
    ++(vlSymsp->__Vcoverage[15986]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_full_name\n"); );
    // Body
    std::string __VlefCall_0__get_name;
    std::string sch;
    {
        get_full_name__Vfuncrtn = ""s;
        sch = ""s;
        if ((0U == this->__PVT__m_phase_type)) {
            this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15988]);
        }
        this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, get_full_name__Vfuncrtn);
        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, sch);
        if ((""s != sch)) {
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(get_full_name__Vfuncrtn, "."s), sch);
            ++(vlSymsp->__Vcoverage[15989]);
        } else {
            ++(vlSymsp->__Vcoverage[15990]);
        }
        if (((4U != this->__PVT__m_phase_type) & (3U 
                                                  != this->__PVT__m_phase_type))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(get_full_name__Vfuncrtn, "."s), __VlefCall_0__get_name);
            ++(vlSymsp->__Vcoverage[15991]);
        } else {
            ++(vlSymsp->__Vcoverage[15992]);
        }
        __Vlabel0: ;
    }
    if (((4U != this->__PVT__m_phase_type) & (3U != this->__PVT__m_phase_type))) {
        ++(vlSymsp->__Vcoverage[15993]);
    }
    if ((3U == this->__PVT__m_phase_type)) {
        ++(vlSymsp->__Vcoverage[15994]);
    }
    if ((4U == this->__PVT__m_phase_type)) {
        ++(vlSymsp->__Vcoverage[15995]);
    }
    ++(vlSymsp->__Vcoverage[15996]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_phase_type(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_phase_type\n"); );
    // Body
    get_phase_type__Vfuncrtn = this->__PVT__m_phase_type;
    ++(vlSymsp->__Vcoverage[15997]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_max_ready_to_end_iterations(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_max_ready_to_end_iterations\n"); );
    // Body
    this->__PVT__max_ready_to_end_iters = max;
    ++(vlSymsp->__Vcoverage[15998]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_max_ready_to_end_iterations(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_ready_to_end_iterations__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_max_ready_to_end_iterations\n"); );
    // Body
    get_max_ready_to_end_iterations__Vfuncrtn = this->__PVT__max_ready_to_end_iters;
    ++(vlSymsp->__Vcoverage[15999]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_state(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_state\n"); );
    // Body
    get_state__Vfuncrtn = this->__PVT__m_state;
    ++(vlSymsp->__Vcoverage[16002]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_run_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_run_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_run_count\n"); );
    // Body
    get_run_count__Vfuncrtn = this->__PVT__m_run_count;
    ++(vlSymsp->__Vcoverage[16003]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_successors(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_successors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__verbosity;
    __Vfunc_uvm_report_enabled__151__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__151__severity;
    __Vfunc_uvm_report_enabled__151__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__152__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__153__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__157__verbosity;
    __Vtask_uvm_report_info__157__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__157__line;
    __Vtask_uvm_report_info__157__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__157__report_enabled_checked;
    __Vtask_uvm_report_info__157__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__158__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__159__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__get_inst_id;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk94__DOT__succ;
    CData/*0:0*/ unnamedblk94__DOT__succ__Vfirst;
    unnamedblk94__DOT__succ__Vfirst = 0;
    if ((4U == this->__PVT__m_phase_type)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level = 0U;
        ++(vlSymsp->__Vcoverage[16004]);
    } else {
        ++(vlSymsp->__Vcoverage[16005]);
    }
    this->__Vfunc_uvm_report_enabled__151__id = "UVM/PHASE/SUCC"s;
    __Vfunc_uvm_report_enabled__151__severity = 0U;
    __Vfunc_uvm_report_enabled__151__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__152__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__152__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__153__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__153__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__151__verbosity, (IData)(__Vfunc_uvm_report_enabled__151__severity), this->__Vfunc_uvm_report_enabled__151__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_2__get_inst_id);
        __Vtask_uvm_report_info__157__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__157__context_name = ""s;
        __Vtask_uvm_report_info__157__line = 0x0000047eU;
        this->__Vtask_uvm_report_info__157__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_info__157__verbosity = 0U;
        __Vtemp_1 = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__spaces,0U,
                                VL_MULS_III(32, (IData)(2U), vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level));
        __Vtemp_2 = Vtb_rng___024unit::__Venumtab_enum_name35
            [(7U & this->__PVT__m_phase_type)];
        this->__Vtask_uvm_report_info__157__message 
            = VL_SFORMATF_N_NX("%@%@ (%@) id=%0d",0,
                               -1,&(__Vtemp_1),-1,&(__VlefCall_1__get_name),
                               -1,&(__Vtemp_2),32,__VlefCall_2__get_inst_id) ;
        this->__Vtask_uvm_report_info__157__id = "UVM/PHASE/SUCC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__158__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__158__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__159__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__159__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__157__id, this->__Vtask_uvm_report_info__157__message, __Vtask_uvm_report_info__157__verbosity, this->__Vtask_uvm_report_info__157__filename, __Vtask_uvm_report_info__157__line, this->__Vtask_uvm_report_info__157__context_name, (IData)(__Vtask_uvm_report_info__157__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[16006]);
    } else {
        ++(vlSymsp->__Vcoverage[16007]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level);
    __VlefExpr_3 = (0U != this->__PVT__m_successors.first(unnamedblk94__DOT__succ));
    if (__VlefExpr_3) {
        unnamedblk94__DOT__succ__Vfirst = 1U;
        while (true) {
            __VlefExpr_4 = unnamedblk94__DOT__succ__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_4)))) {
                __VlefExpr_4 = (0U != this->__PVT__m_successors.next(unnamedblk94__DOT__succ));
            }
            if (!(__VlefExpr_4)) break;
            unnamedblk94__DOT__succ__Vfirst = 0U;
            VL_NULL_CHECK(unnamedblk94__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1153)->__VnoInFunc_m_print_successors(vlSymsp);
            ++(vlSymsp->__Vcoverage[16008]);
        }
        ++(vlSymsp->__Vcoverage[16009]);
    } else {
        ++(vlSymsp->__Vcoverage[16010]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
        = (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
           - (IData)(1U));
    ++(vlSymsp->__Vcoverage[16011]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_6__get_domain;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_5__get_domain;
    CData/*0:0*/ __VlefLogOr_4;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_3__get_schedule;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_2__get_schedule;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk95__DOT__pred;
    CData/*0:0*/ unnamedblk95__DOT__pred__Vfirst;
    unnamedblk95__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk95__DOT__unnamedblk96__DOT__orig;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((VlNull{} == phase)) {
            m_find_predecessor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16013]);
        }
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}))) {
            m_find_predecessor__Vfuncrtn = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16015]);
        }
        __VlefExpr_0 = (0U != this->__PVT__m_predecessors.first(unnamedblk95__DOT__pred));
        if (__VlefExpr_0) {
            unnamedblk95__DOT__pred__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk95__DOT__pred__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__m_predecessors.next(unnamedblk95__DOT__pred));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk95__DOT__pred__Vfirst = 0U;
                unnamedblk95__DOT__unnamedblk96__DOT__orig 
                    = ((VlNull{} == orig_phase) ? VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}
                        : orig_phase);
                __VlefLogOr_4 = (1U & (~ (IData)(stay_in_scope)));
                if ((1U & (~ (IData)(__VlefLogOr_4)))) {
                    VL_NULL_CHECK(unnamedblk95__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1174)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_2__get_schedule);
                    VL_NULL_CHECK(unnamedblk95__DOT__unnamedblk96__DOT__orig, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1174)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_3__get_schedule);
                    __VlefLogOr_4 = (__VlefCall_2__get_schedule 
                                     == __VlefCall_3__get_schedule);
                }
                if ((1U & (~ (IData)(__VlefLogOr_4)))) {
                    VL_NULL_CHECK(unnamedblk95__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1175)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_5__get_domain);
                    VL_NULL_CHECK(unnamedblk95__DOT__unnamedblk96__DOT__orig, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1175)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_6__get_domain);
                    __VlefLogOr_4 = (__VlefCall_5__get_domain 
                                     == __VlefCall_6__get_domain);
                }
                if (__VlefLogOr_4) {
                    VL_NULL_CHECK(unnamedblk95__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1176)->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, stay_in_scope, unnamedblk95__DOT__unnamedblk96__DOT__orig, found);
                    if ((VlNull{} != found)) {
                        m_find_predecessor__Vfuncrtn 
                            = found;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[16017]);
                    }
                    ++(vlSymsp->__Vcoverage[16018]);
                } else {
                    ++(vlSymsp->__Vcoverage[16019]);
                }
                ++(vlSymsp->__Vcoverage[16020]);
            }
            ++(vlSymsp->__Vcoverage[16021]);
        } else {
            ++(vlSymsp->__Vcoverage[16022]);
        }
        m_find_predecessor__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[16023]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &m_find_predecessor_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_7__get_domain;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_6__get_domain;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_4__get_schedule;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_3__get_schedule;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk97__DOT__pred;
    CData/*0:0*/ unnamedblk97__DOT__pred__Vfirst;
    unnamedblk97__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk97__DOT__unnamedblk98__DOT__orig;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> found;
    {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == name)) {
            m_find_predecessor_by_name__Vfuncrtn = 
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16025]);
        }
        __VlefExpr_1 = (0U != this->__PVT__m_predecessors.first(unnamedblk97__DOT__pred));
        if (__VlefExpr_1) {
            unnamedblk97__DOT__pred__Vfirst = 1U;
            while (true) {
                __VlefExpr_2 = unnamedblk97__DOT__pred__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_2)))) {
                    __VlefExpr_2 = (0U != this->__PVT__m_predecessors.next(unnamedblk97__DOT__pred));
                }
                if (!(__VlefExpr_2)) break;
                unnamedblk97__DOT__pred__Vfirst = 0U;
                unnamedblk97__DOT__unnamedblk98__DOT__orig 
                    = ((VlNull{} == orig_phase) ? VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}
                        : orig_phase);
                __VlefLogOr_5 = (1U & (~ (IData)(stay_in_scope)));
                if ((1U & (~ (IData)(__VlefLogOr_5)))) {
                    VL_NULL_CHECK(unnamedblk97__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1197)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_3__get_schedule);
                    VL_NULL_CHECK(unnamedblk97__DOT__unnamedblk98__DOT__orig, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1197)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_4__get_schedule);
                    __VlefLogOr_5 = (__VlefCall_3__get_schedule 
                                     == __VlefCall_4__get_schedule);
                }
                if ((1U & (~ (IData)(__VlefLogOr_5)))) {
                    VL_NULL_CHECK(unnamedblk97__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1198)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_6__get_domain);
                    VL_NULL_CHECK(unnamedblk97__DOT__unnamedblk98__DOT__orig, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1198)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_7__get_domain);
                    __VlefLogOr_5 = (__VlefCall_6__get_domain 
                                     == __VlefCall_7__get_domain);
                }
                if (__VlefLogOr_5) {
                    VL_NULL_CHECK(unnamedblk97__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1199)->__VnoInFunc_m_find_predecessor_by_name(vlSymsp, name, (IData)(stay_in_scope), unnamedblk97__DOT__unnamedblk98__DOT__orig, found);
                    if ((VlNull{} != found)) {
                        m_find_predecessor_by_name__Vfuncrtn 
                            = found;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[16027]);
                    }
                    ++(vlSymsp->__Vcoverage[16028]);
                } else {
                    ++(vlSymsp->__Vcoverage[16029]);
                }
                ++(vlSymsp->__Vcoverage[16030]);
            }
            ++(vlSymsp->__Vcoverage[16031]);
        } else {
            ++(vlSymsp->__Vcoverage[16032]);
        }
        m_find_predecessor_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[16033]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_6__get_domain;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_5__get_domain;
    CData/*0:0*/ __VlefLogOr_4;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_3__get_schedule;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_2__get_schedule;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk99__DOT__succ;
    CData/*0:0*/ unnamedblk99__DOT__succ__Vfirst;
    unnamedblk99__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk99__DOT__unnamedblk100__DOT__orig;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((VlNull{} == phase)) {
            m_find_successor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16035]);
        }
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}))) {
            m_find_successor__Vfuncrtn = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16037]);
        }
        __VlefExpr_0 = (0U != this->__PVT__m_successors.first(unnamedblk99__DOT__succ));
        if (__VlefExpr_0) {
            unnamedblk99__DOT__succ__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk99__DOT__succ__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__m_successors.next(unnamedblk99__DOT__succ));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk99__DOT__succ__Vfirst = 0U;
                unnamedblk99__DOT__unnamedblk100__DOT__orig 
                    = ((VlNull{} == orig_phase) ? VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}
                        : orig_phase);
                __VlefLogOr_4 = (1U & (~ (IData)(stay_in_scope)));
                if ((1U & (~ (IData)(__VlefLogOr_4)))) {
                    VL_NULL_CHECK(unnamedblk99__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1224)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_2__get_schedule);
                    VL_NULL_CHECK(unnamedblk99__DOT__unnamedblk100__DOT__orig, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1224)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_3__get_schedule);
                    __VlefLogOr_4 = (__VlefCall_2__get_schedule 
                                     == __VlefCall_3__get_schedule);
                }
                if ((1U & (~ (IData)(__VlefLogOr_4)))) {
                    VL_NULL_CHECK(unnamedblk99__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1225)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_5__get_domain);
                    VL_NULL_CHECK(unnamedblk99__DOT__unnamedblk100__DOT__orig, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1225)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_6__get_domain);
                    __VlefLogOr_4 = (__VlefCall_5__get_domain 
                                     == __VlefCall_6__get_domain);
                }
                if (__VlefLogOr_4) {
                    VL_NULL_CHECK(unnamedblk99__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1226)->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, stay_in_scope, unnamedblk99__DOT__unnamedblk100__DOT__orig, found);
                    if ((VlNull{} != found)) {
                        m_find_successor__Vfuncrtn 
                            = found;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[16039]);
                    }
                    ++(vlSymsp->__Vcoverage[16040]);
                } else {
                    ++(vlSymsp->__Vcoverage[16041]);
                }
                ++(vlSymsp->__Vcoverage[16042]);
            }
            ++(vlSymsp->__Vcoverage[16043]);
        } else {
            ++(vlSymsp->__Vcoverage[16044]);
        }
        m_find_successor__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[16045]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &m_find_successor_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_7__get_domain;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_6__get_domain;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_4__get_schedule;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_3__get_schedule;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk101__DOT__succ;
    CData/*0:0*/ unnamedblk101__DOT__succ__Vfirst;
    unnamedblk101__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk101__DOT__unnamedblk102__DOT__orig;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> found;
    {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == name)) {
            m_find_successor_by_name__Vfuncrtn = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16047]);
        }
        __VlefExpr_1 = (0U != this->__PVT__m_successors.first(unnamedblk101__DOT__succ));
        if (__VlefExpr_1) {
            unnamedblk101__DOT__succ__Vfirst = 1U;
            while (true) {
                __VlefExpr_2 = unnamedblk101__DOT__succ__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_2)))) {
                    __VlefExpr_2 = (0U != this->__PVT__m_successors.next(unnamedblk101__DOT__succ));
                }
                if (!(__VlefExpr_2)) break;
                unnamedblk101__DOT__succ__Vfirst = 0U;
                unnamedblk101__DOT__unnamedblk102__DOT__orig 
                    = ((VlNull{} == orig_phase) ? VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}
                        : orig_phase);
                __VlefLogOr_5 = (1U & (~ (IData)(stay_in_scope)));
                if ((1U & (~ (IData)(__VlefLogOr_5)))) {
                    VL_NULL_CHECK(unnamedblk101__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1248)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_3__get_schedule);
                    VL_NULL_CHECK(unnamedblk101__DOT__unnamedblk102__DOT__orig, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1248)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_4__get_schedule);
                    __VlefLogOr_5 = (__VlefCall_3__get_schedule 
                                     == __VlefCall_4__get_schedule);
                }
                if ((1U & (~ (IData)(__VlefLogOr_5)))) {
                    VL_NULL_CHECK(unnamedblk101__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1249)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_6__get_domain);
                    VL_NULL_CHECK(unnamedblk101__DOT__unnamedblk102__DOT__orig, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1249)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_7__get_domain);
                    __VlefLogOr_5 = (__VlefCall_6__get_domain 
                                     == __VlefCall_7__get_domain);
                }
                if (__VlefLogOr_5) {
                    VL_NULL_CHECK(unnamedblk101__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1250)->__VnoInFunc_m_find_successor_by_name(vlSymsp, name, (IData)(stay_in_scope), unnamedblk101__DOT__unnamedblk102__DOT__orig, found);
                    if ((VlNull{} != found)) {
                        m_find_successor_by_name__Vfuncrtn 
                            = found;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[16049]);
                    }
                    ++(vlSymsp->__Vcoverage[16050]);
                } else {
                    ++(vlSymsp->__Vcoverage[16051]);
                }
                ++(vlSymsp->__Vcoverage[16052]);
            }
            ++(vlSymsp->__Vcoverage[16053]);
        } else {
            ++(vlSymsp->__Vcoverage[16054]);
        }
        m_find_successor_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[16055]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find\n"); );
    // Body
    {
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}))) {
            find__Vfuncrtn = phase;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16057]);
        }
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, stay_in_scope, 
                                             VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, find__Vfuncrtn);
        if ((VlNull{} == find__Vfuncrtn)) {
            this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, stay_in_scope, 
                                               VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, find__Vfuncrtn);
            ++(vlSymsp->__Vcoverage[16058]);
        } else {
            ++(vlSymsp->__Vcoverage[16059]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[16060]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &find_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find_by_name\n"); );
    // Body
    std::string __VlefCall_0__get_name;
    {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == name)) {
            find_by_name__Vfuncrtn = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16062]);
        }
        this->__VnoInFunc_m_find_predecessor_by_name(vlSymsp, name, (IData)(stay_in_scope), 
                                                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, find_by_name__Vfuncrtn);
        if ((VlNull{} == find_by_name__Vfuncrtn)) {
            this->__VnoInFunc_m_find_successor_by_name(vlSymsp, name, (IData)(stay_in_scope), 
                                                       VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, find_by_name__Vfuncrtn);
            ++(vlSymsp->__Vcoverage[16063]);
        } else {
            ++(vlSymsp->__Vcoverage[16064]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[16065]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is\n"); );
    // Body
    is__Vfuncrtn = ((this->__PVT__m_imp == phase) | 
                    (VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this} 
                     == phase));
    ++(vlSymsp->__Vcoverage[16066]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_before(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_before__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_before\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_1__m_find_successor;
    CData/*0:0*/ __VlefCall_0__is;
    is_before__Vfuncrtn = 0U;
    this->__VnoInFunc_is(vlSymsp, phase, __VlefCall_0__is);
    __VlefLogAnd_2 = (1U & (~ (IData)(__VlefCall_0__is)));
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, 0U, 
                                           VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, __VlefCall_1__m_find_successor);
        __VlefLogAnd_2 = (VlNull{} != __VlefCall_1__m_find_successor);
    }
    is_before__Vfuncrtn = __VlefLogAnd_2;
    ++(vlSymsp->__Vcoverage[16067]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_after(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_after__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_after\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefLogAnd_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __VlefCall_1__m_find_predecessor;
    CData/*0:0*/ __VlefCall_0__is;
    is_after__Vfuncrtn = 0U;
    this->__VnoInFunc_is(vlSymsp, phase, __VlefCall_0__is);
    __VlefLogAnd_2 = (1U & (~ (IData)(__VlefCall_0__is)));
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, 0U, 
                                             VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, __VlefCall_1__m_find_predecessor);
        __VlefLogAnd_2 = (VlNull{} != __VlefCall_1__m_find_predecessor);
    }
    is_after__Vfuncrtn = __VlefLogAnd_2;
    ++(vlSymsp->__Vcoverage[16068]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase\n"); );
    // Locals
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h25f8256f__0;
    __Vtrigprevexpr_h25f8256f__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h2067c70e__0;
    __Vtrigprevexpr_h2067c70e__0 = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__202__verbosity;
    __Vfunc_uvm_report_enabled__202__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__202__severity;
    __Vfunc_uvm_report_enabled__202__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__203__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__204__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__208__verbosity;
    __Vtask_uvm_report_info__208__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__208__line;
    __Vtask_uvm_report_info__208__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__208__report_enabled_checked;
    __Vtask_uvm_report_info__208__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__209__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__210__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__385__verbosity;
    __Vfunc_uvm_report_enabled__385__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__385__severity;
    __Vfunc_uvm_report_enabled__385__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__386__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__387__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__393__verbosity;
    __Vtask_uvm_report_info__393__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__393__line;
    __Vtask_uvm_report_info__393__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__393__report_enabled_checked;
    __Vtask_uvm_report_info__393__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__394__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__395__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__397__verbosity;
    __Vfunc_uvm_report_enabled__397__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__397__severity;
    __Vfunc_uvm_report_enabled__397__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__398__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__399__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__404__verbosity;
    __Vtask_uvm_report_info__404__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__404__line;
    __Vtask_uvm_report_info__404__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__404__report_enabled_checked;
    __Vtask_uvm_report_info__404__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__405__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__406__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__408__verbosity;
    __Vfunc_uvm_report_enabled__408__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__408__severity;
    __Vfunc_uvm_report_enabled__408__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__409__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__410__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__414__verbosity;
    __Vtask_uvm_report_info__414__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__414__line;
    __Vtask_uvm_report_info__414__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__414__report_enabled_checked;
    __Vtask_uvm_report_info__414__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__415__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__416__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__419__verbosity;
    __Vfunc_uvm_report_enabled__419__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__419__severity;
    __Vfunc_uvm_report_enabled__419__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__420__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__421__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__425__verbosity;
    __Vtask_uvm_report_info__425__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__425__line;
    __Vtask_uvm_report_info__425__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__425__report_enabled_checked;
    __Vtask_uvm_report_info__425__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__426__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__427__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__443__verbosity;
    __Vfunc_uvm_report_enabled__443__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__443__severity;
    __Vfunc_uvm_report_enabled__443__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__444__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__445__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__449__verbosity;
    __Vtask_uvm_report_info__449__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__449__line;
    __Vtask_uvm_report_info__449__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__449__report_enabled_checked;
    __Vtask_uvm_report_info__449__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__450__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__451__Vfuncout;
    IData/*31:0*/ __Vtask_try_put__459__Vfuncout;
    __Vtask_try_put__459__Vfuncout = 0;
    IData/*31:0*/ __Vtask_try_put__464__Vfuncout;
    __Vtask_try_put__464__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__465__verbosity;
    __Vfunc_uvm_report_enabled__465__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__465__severity;
    __Vfunc_uvm_report_enabled__465__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__466__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__467__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__472__verbosity;
    __Vtask_uvm_report_info__472__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__472__line;
    __Vtask_uvm_report_info__472__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__472__report_enabled_checked;
    __Vtask_uvm_report_info__472__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__473__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__474__Vfuncout;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_38__get_full_name;
    IData/*31:0*/ __VlefCall_37__get_inst_id;
    std::string __VlefCall_36__get_full_name;
    IData/*31:0*/ __VlefCall_35__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_34;
    CData/*0:0*/ __VlefExpr_33;
    IData/*31:0*/ __VlefCall_32__get_inst_id;
    std::string __VlefCall_31__get_full_name;
    IData/*31:0*/ __VlefCall_30__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_29__get_inst_id;
    std::string __VlefCall_28__get_full_name;
    IData/*31:0*/ __VlefCall_27__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_26__get_inst_id;
    std::string __VlefCall_25__get_full_name;
    IData/*31:0*/ __VlefCall_24__uvm_report_enabled;
    std::string __VlefCall_23__get_domain_name;
    std::string __VlefCall_22__get_schedule_name;
    std::string __VlefCall_21__get_name;
    IData/*31:0*/ __VlefCall_20__uvm_report_enabled;
    std::string __VlefCall_19__get_name;
    std::string __VlefCall_18__get_domain_name;
    std::string __VlefCall_17__get_schedule_name;
    std::string __VlefCall_16__get_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_14__get_max_ready_to_end_iterations;
    CData/*0:0*/ __VlefLogAnd_13;
    IData/*31:0*/ __VlefCall_12__get_max_ready_to_end_iterations;
    IData/*31:0*/ __VlefCall_11__get_inst_id;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_8;
    IData/*31:0*/ __VlefCall_7__get_inst_id;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change> __VlefCall_4__create;
    std::string __VlefCall_3__get_name;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __VlefCall_0__get_root;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk103__DOT__pred;
    CData/*0:0*/ unnamedblk103__DOT__pred__Vfirst;
    unnamedblk103__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk104__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk104__DOT__cb;
    IData/*31:0*/ unnamedblk105__DOT__i;
    unnamedblk105__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk106__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk106__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk107__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk107__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk108__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk108__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk110__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk110__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk109__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk109__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk117__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk117__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk118__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk118__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> unnamedblk119__DOT__objection;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk120__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk120__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> unnamedblk121__DOT__objection;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk122__DOT__succ;
    CData/*0:0*/ unnamedblk122__DOT__succ__Vfirst;
    unnamedblk122__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk122__DOT__unnamedblk123__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> unnamedblk122__DOT__unnamedblk123__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __VDynScope_execute_phase_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    __VDynScope_execute_phase_0 = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_7, vlSymsp);
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1326)->__VnoInFunc_get_root(vlProcess, vlSymsp, __VlefCall_0__get_root);
        VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1326)->__PVT__top 
            = __VlefCall_0__get_root;
        __VlefExpr_1 = (0U != this->__PVT__m_predecessors.first(unnamedblk103__DOT__pred));
        if (__VlefExpr_1) {
            unnamedblk103__DOT__pred__Vfirst = 1U;
            while (true) {
                __VlefExpr_2 = unnamedblk103__DOT__pred__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_2)))) {
                    __VlefExpr_2 = (0U != this->__PVT__m_predecessors.next(unnamedblk103__DOT__pred));
                }
                if (!(__VlefExpr_2)) break;
                unnamedblk103__DOT__pred__Vfirst = 0U;
                if ((0x00000100U != VL_NULL_CHECK(unnamedblk103__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1333)
                     ->__PVT__m_state)) {
                    CData/*0:0*/ __VdynTrigger_h26878eae__0;
                    __VdynTrigger_h26878eae__0 = 0;
                    __VdynTrigger_h26878eae__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_h26878eae__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     vlProcess, 
                                                                     "@([true] (32'h100 == uvm_pkg::uvm_phase.unnamedblk103.pred.m_state))", 
                                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                     1333);
                        __Vtrigprevexpr_h2067c70e__0 
                            = (0x00000100U == VL_NULL_CHECK(unnamedblk103__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1333)
                               ->__PVT__m_state);
                        __VdynTrigger_h26878eae__0 
                            = __Vtrigprevexpr_h2067c70e__0;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h26878eae__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 vlProcess, 
                                                                 "@([true] (32'h100 == uvm_pkg::uvm_phase.unnamedblk103.pred.m_state))", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                 1333);
                }
                ++(vlSymsp->__Vcoverage[16069]);
            }
            ++(vlSymsp->__Vcoverage[16070]);
        } else {
            ++(vlSymsp->__Vcoverage[16071]);
        }
        if ((0x00000100U == this->__PVT__m_state)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16073]);
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi14__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_name), VlNull{}, ""s, __VlefCall_4__create);
        VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1340)->__PVT__state_chg 
            = __VlefCall_4__create;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1341)
                      ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1341)->__PVT__m_phase 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this};
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1342)
                      ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1342)->__PVT__m_jump_to = VlNull{};
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1350)
                      ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1350)->__PVT__m_prev_state 
            = this->__PVT__m_state;
        this->__PVT__m_state = 4U;
        unnamedblk104__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                          VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(unnamedblk104__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1352)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk104__DOT__cb);
        while ((VlNull{} != unnamedblk104__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk104__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1352)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1352)
                                                                                ->__PVT__state_chg);
            VL_NULL_CHECK(unnamedblk104__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1352)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk104__DOT__cb);
            ++(vlSymsp->__Vcoverage[16074]);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                1353);
        if ((0U != this->__PVT__m_sync.size())) {
            unnamedblk105__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk105__DOT__i, this->__PVT__m_sync.size())) {
                if (VL_GTS_III(32, 4U, VL_NULL_CHECK(this->__PVT__m_sync.at(unnamedblk105__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1358)
                               ->__PVT__m_state)) {
                    CData/*0:0*/ __VdynTrigger_h1ff6f013__0;
                    __VdynTrigger_h1ff6f013__0 = 0;
                    __VdynTrigger_h1ff6f013__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_h1ff6f013__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     vlProcess, 
                                                                     "@([true] (32'h4 <= uvm_pkg::uvm_phase.m_sync.at(uvm_pkg::uvm_phase.unnamedblk105.i).m_state))", 
                                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                     1358);
                        __Vtrigprevexpr_h25f8256f__0 
                            = VL_LTES_III(32, 4U, VL_NULL_CHECK(this->__PVT__m_sync.at(unnamedblk105__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1358)
                                          ->__PVT__m_state);
                        __VdynTrigger_h1ff6f013__0 
                            = __Vtrigprevexpr_h25f8256f__0;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1ff6f013__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 vlProcess, 
                                                                 "@([true] (32'h4 <= uvm_pkg::uvm_phase.m_sync.at(uvm_pkg::uvm_phase.unnamedblk105.i).m_state))", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                 1358);
                }
                unnamedblk105__DOT__i = ((IData)(1U) 
                                         + unnamedblk105__DOT__i);
                ++(vlSymsp->__Vcoverage[16075]);
            }
            ++(vlSymsp->__Vcoverage[16076]);
        } else {
            ++(vlSymsp->__Vcoverage[16077]);
        }
        this->__PVT__m_run_count = ((IData)(1U) + this->__PVT__m_run_count);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__202__id = "PH/TRC/STRT"s;
            __Vfunc_uvm_report_enabled__202__severity = 0U;
            __Vfunc_uvm_report_enabled__202__verbosity = 0x00000064U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__203__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__203__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__204__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__204__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__202__verbosity, (IData)(__Vfunc_uvm_report_enabled__202__severity), this->__Vfunc_uvm_report_enabled__202__id, __VlefCall_5__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_7__get_inst_id);
                __Vtask_uvm_report_info__208__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__208__context_name = ""s;
                __Vtask_uvm_report_info__208__line = 0x00000556U;
                this->__Vtask_uvm_report_info__208__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__208__verbosity = 0x00000064U;
                this->__Vtask_uvm_report_info__208__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(__VlefCall_6__get_full_name),
                                                                         32,
                                                                         __VlefCall_7__get_inst_id) , "Starting phase"s));
                this->__Vtask_uvm_report_info__208__id = "PH/TRC/STRT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__209__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__209__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__210__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__210__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__208__id, this->__Vtask_uvm_report_info__208__message, __Vtask_uvm_report_info__208__verbosity, this->__Vtask_uvm_report_info__208__filename, __Vtask_uvm_report_info__208__line, this->__Vtask_uvm_report_info__208__context_name, (IData)(__Vtask_uvm_report_info__208__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16078]);
            } else {
                ++(vlSymsp->__Vcoverage[16079]);
            }
            ++(vlSymsp->__Vcoverage[16080]);
        } else {
            ++(vlSymsp->__Vcoverage[16081]);
        }
        if ((1U != this->__PVT__m_phase_type)) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1372)
                          ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1372)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 8U;
            unnamedblk106__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk106__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1374)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk106__DOT__cb);
            while ((VlNull{} != unnamedblk106__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk106__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1374)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1374)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk106__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1374)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk106__DOT__cb);
                ++(vlSymsp->__Vcoverage[16082]);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1376);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1378)
                          ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1378)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000010U;
            unnamedblk107__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk107__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1380)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk107__DOT__cb);
            while ((VlNull{} != unnamedblk107__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk107__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1380)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1380)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk107__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1380)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk107__DOT__cb);
                ++(vlSymsp->__Vcoverage[16083]);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1382);
            ++(vlSymsp->__Vcoverage[16158]);
        } else {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1391)
                          ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1391)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 8U;
            unnamedblk108__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk108__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1393)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk108__DOT__cb);
            while ((VlNull{} != unnamedblk108__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk108__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1393)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1393)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk108__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1393)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk108__DOT__cb);
                ++(vlSymsp->__Vcoverage[16084]);
            }
            VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1395)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1395)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, 8U);
            this->__PVT__m_ready_to_end_count = 0U;
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1397);
            __VlefExpr_8 = VL_CAST_DYNAMIC(this->__PVT__m_imp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1401)
                                           ->__PVT__task_phase);
            if (__VlefExpr_8) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1417)
                              ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1417)->__PVT__m_prev_state 
                    = this->__PVT__m_state;
                this->__PVT__m_state = 0x00000010U;
                unnamedblk110__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                                  VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
                VL_NULL_CHECK(unnamedblk110__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1419)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk110__DOT__cb);
                while ((VlNull{} != unnamedblk110__DOT__cb)) {
                    VL_NULL_CHECK(unnamedblk110__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1419)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1419)
                                                                                ->__PVT__state_chg);
                    VL_NULL_CHECK(unnamedblk110__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1419)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk110__DOT__cb);
                    ++(vlSymsp->__Vcoverage[16086]);
                }
                this->__VnoInFunc_execute_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_phase_0);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
                this->__VnoInFunc_execute_phase____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
                CData/*0:0*/ __VdynTrigger_h07a1b885__1;
                __VdynTrigger_h07a1b885__1 = 0;
                __VdynTrigger_h07a1b885__1 = 0U;
                __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
                while ((1U & (~ (IData)(__VdynTrigger_h07a1b885__1)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                                 430);
                    __VdynTrigger_h07a1b885__1 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                                  != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h07a1b885__1);
                    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                             430);
                ++(vlSymsp->__Vcoverage[480]);
                {
                    VlForkSync __Vfork_4__sync;
                    __Vfork_4__sync.init(1U, vlProcess);
                    this->__VnoInFunc_execute_phase____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VlefCall_9__uvm_report_enabled, __VlefCall_10__get_full_name, __VlefCall_11__get_inst_id, __VDynScope_execute_phase_0, __Vfork_4__sync);
                    co_await __Vfork_4__sync.join(vlProcess, 
                                                  "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                  1439);
                }
                __VlefLogAnd_13 = (0x00000010U == this->__PVT__m_state);
                if (__VlefLogAnd_13) {
                    this->__VnoInFunc_get_max_ready_to_end_iterations(vlSymsp, __VlefCall_12__get_max_ready_to_end_iterations);
                    __VlefLogAnd_13 = (this->__PVT__m_ready_to_end_count 
                                       < __VlefCall_12__get_max_ready_to_end_iterations);
                }
                if (__VlefLogAnd_13) {
                    ++(vlSymsp->__Vcoverage[16108]);
                }
                this->__VnoInFunc_get_max_ready_to_end_iterations(vlSymsp, __VlefCall_14__get_max_ready_to_end_iterations);
                if ((this->__PVT__m_ready_to_end_count 
                     >= __VlefCall_14__get_max_ready_to_end_iterations)) {
                    ++(vlSymsp->__Vcoverage[16109]);
                }
                if ((0x00000010U != this->__PVT__m_state)) {
                    ++(vlSymsp->__Vcoverage[16110]);
                }
                ++(vlSymsp->__Vcoverage[16157]);
            } else {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1406)
                              ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1406)->__PVT__m_prev_state 
                    = this->__PVT__m_state;
                this->__PVT__m_state = 0x00000010U;
                unnamedblk109__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                                  VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
                VL_NULL_CHECK(unnamedblk109__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1408)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk109__DOT__cb);
                while ((VlNull{} != unnamedblk109__DOT__cb)) {
                    VL_NULL_CHECK(unnamedblk109__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1408)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1408)
                                                                                ->__PVT__state_chg);
                    VL_NULL_CHECK(unnamedblk109__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1408)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk109__DOT__cb);
                    ++(vlSymsp->__Vcoverage[16085]);
                }
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                        1410);
                VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1411)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1411)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, 0x00000010U);
                ++(vlSymsp->__Vcoverage[16156]);
            }
            ++(vlSymsp->__Vcoverage[16159]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.erase(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
        if ((1U == this->__PVT__m_phase_type)) {
            if (this->__PVT__m_premature_end) {
                if ((VlNull{} != this->__PVT__m_jump_phase)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1577)
                                  ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1577)->__PVT__m_jump_to 
                        = this->__PVT__m_jump_phase;
                    this->__Vfunc_uvm_report_enabled__385__id = "PH_JUMP"s;
                    __Vfunc_uvm_report_enabled__385__severity = 0U;
                    __Vfunc_uvm_report_enabled__385__verbosity = 0x000000c8U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__386__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__386__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__387__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__387__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__385__verbosity, (IData)(__Vfunc_uvm_report_enabled__385__severity), this->__Vfunc_uvm_report_enabled__385__id, __VlefCall_15__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_15__uvm_report_enabled)) {
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_17__get_schedule_name);
                        this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __VlefCall_18__get_domain_name);
                        VL_NULL_CHECK(this->__PVT__m_jump_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1582)->__VnoInFunc_get_name(vlSymsp, __VlefCall_19__get_name);
                        __Vtask_uvm_report_info__393__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__393__context_name = ""s;
                        __Vtask_uvm_report_info__393__line = 0x0000062eU;
                        this->__Vtask_uvm_report_info__393__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_info__393__verbosity = 0x000000c8U;
                        this->__Vtask_uvm_report_info__393__message 
                            = VL_SFORMATF_N_NX("phase %@ (schedule %@, domain %@) is jumping to phase %@",0,
                                               -1,&(__VlefCall_16__get_name),
                                               -1,&(__VlefCall_17__get_schedule_name),
                                               -1,&(__VlefCall_18__get_domain_name),
                                               -1,&(__VlefCall_19__get_name)) ;
                        this->__Vtask_uvm_report_info__393__id = "PH_JUMP"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__394__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__394__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__395__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__395__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__393__id, this->__Vtask_uvm_report_info__393__message, __Vtask_uvm_report_info__393__verbosity, this->__Vtask_uvm_report_info__393__filename, __Vtask_uvm_report_info__393__line, this->__Vtask_uvm_report_info__393__context_name, (IData)(__Vtask_uvm_report_info__393__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[440]);
                        ++(vlSymsp->__Vcoverage[16160]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16161]);
                    }
                    ++(vlSymsp->__Vcoverage[16164]);
                } else {
                    this->__Vfunc_uvm_report_enabled__397__id = "PH_JUMP"s;
                    __Vfunc_uvm_report_enabled__397__severity = 0U;
                    __Vfunc_uvm_report_enabled__397__verbosity = 0x000000c8U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__398__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__398__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__399__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__399__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__397__verbosity, (IData)(__Vfunc_uvm_report_enabled__397__severity), this->__Vfunc_uvm_report_enabled__397__id, __VlefCall_20__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_20__uvm_report_enabled)) {
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_21__get_name);
                        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_22__get_schedule_name);
                        this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __VlefCall_23__get_domain_name);
                        __Vtask_uvm_report_info__404__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__404__context_name = ""s;
                        __Vtask_uvm_report_info__404__line = 0x00000634U;
                        this->__Vtask_uvm_report_info__404__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_info__404__verbosity = 0x000000c8U;
                        this->__Vtask_uvm_report_info__404__message 
                            = VL_SFORMATF_N_NX("phase %@ (schedule %@, domain %@) is ending prematurely",0,
                                               -1,&(__VlefCall_21__get_name),
                                               -1,&(__VlefCall_22__get_schedule_name),
                                               -1,&(__VlefCall_23__get_domain_name)) ;
                        this->__Vtask_uvm_report_info__404__id = "PH_JUMP"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__405__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__405__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__406__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__406__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__404__id, this->__Vtask_uvm_report_info__404__message, __Vtask_uvm_report_info__404__verbosity, this->__Vtask_uvm_report_info__404__filename, __Vtask_uvm_report_info__404__line, this->__Vtask_uvm_report_info__404__context_name, (IData)(__Vtask_uvm_report_info__404__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[440]);
                        ++(vlSymsp->__Vcoverage[16162]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16163]);
                    }
                    ++(vlSymsp->__Vcoverage[16165]);
                }
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                        1592);
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                    this->__Vfunc_uvm_report_enabled__408__id = "PH_END"s;
                    __Vfunc_uvm_report_enabled__408__severity = 0U;
                    __Vfunc_uvm_report_enabled__408__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__409__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__409__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__410__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__410__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__408__verbosity, (IData)(__Vfunc_uvm_report_enabled__408__severity), this->__Vfunc_uvm_report_enabled__408__id, __VlefCall_24__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_24__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                        this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_26__get_inst_id);
                        __Vtask_uvm_report_info__414__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__414__context_name = ""s;
                        __Vtask_uvm_report_info__414__line = 0x0000063aU;
                        this->__Vtask_uvm_report_info__414__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_info__414__verbosity = 0x0000012cU;
                        this->__Vtask_uvm_report_info__414__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(__VlefCall_25__get_full_name),
                                                                                32,
                                                                                __VlefCall_26__get_inst_id) , "ENDING PHASE PREMATURELY"s));
                        this->__Vtask_uvm_report_info__414__id = "PH_END"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__415__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__415__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__416__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__416__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__414__id, this->__Vtask_uvm_report_info__414__message, __Vtask_uvm_report_info__414__verbosity, this->__Vtask_uvm_report_info__414__filename, __Vtask_uvm_report_info__414__line, this->__Vtask_uvm_report_info__414__context_name, (IData)(__Vtask_uvm_report_info__414__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[440]);
                        ++(vlSymsp->__Vcoverage[16166]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16167]);
                    }
                    ++(vlSymsp->__Vcoverage[16168]);
                } else {
                    ++(vlSymsp->__Vcoverage[16169]);
                }
                ++(vlSymsp->__Vcoverage[16172]);
            } else {
                if ((VlNull{} == VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1599)
                     ->__PVT__task_phase)) {
                    co_await this->__VnoInFunc_m_wait_for_pred(vlProcess, vlSymsp);
                    ++(vlSymsp->__Vcoverage[16170]);
                } else {
                    ++(vlSymsp->__Vcoverage[16171]);
                }
                ++(vlSymsp->__Vcoverage[16173]);
            }
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                this->__Vfunc_uvm_report_enabled__419__id = "PH_END"s;
                __Vfunc_uvm_report_enabled__419__severity = 0U;
                __Vfunc_uvm_report_enabled__419__verbosity = 0x0000012cU;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__420__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__420__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__421__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__421__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__419__verbosity, (IData)(__Vfunc_uvm_report_enabled__419__severity), this->__Vfunc_uvm_report_enabled__419__id, __VlefCall_27__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_27__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_29__get_inst_id);
                    __Vtask_uvm_report_info__425__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__425__context_name = ""s;
                    __Vtask_uvm_report_info__425__line = 0x00000648U;
                    this->__Vtask_uvm_report_info__425__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__425__verbosity = 0x0000012cU;
                    this->__Vtask_uvm_report_info__425__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__VlefCall_28__get_full_name),
                                                                             32,
                                                                             __VlefCall_29__get_inst_id) , "ENDING PHASE"s));
                    this->__Vtask_uvm_report_info__425__id = "PH_END"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__426__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__426__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__427__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__427__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__425__id, this->__Vtask_uvm_report_info__425__message, __Vtask_uvm_report_info__425__verbosity, this->__Vtask_uvm_report_info__425__filename, __Vtask_uvm_report_info__425__line, this->__Vtask_uvm_report_info__425__context_name, (IData)(__Vtask_uvm_report_info__425__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    ++(vlSymsp->__Vcoverage[16174]);
                } else {
                    ++(vlSymsp->__Vcoverage[16175]);
                }
                ++(vlSymsp->__Vcoverage[16176]);
            } else {
                ++(vlSymsp->__Vcoverage[16177]);
            }
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1609)
                          ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1609)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000040U;
            unnamedblk117__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk117__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1611)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk117__DOT__cb);
            while ((VlNull{} != unnamedblk117__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk117__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1611)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1611)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk117__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1611)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk117__DOT__cb);
                ++(vlSymsp->__Vcoverage[16178]);
            }
            if ((VlNull{} != this->__PVT__m_imp)) {
                VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1613)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1613)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, 0x00000040U);
                ++(vlSymsp->__Vcoverage[16179]);
            } else {
                ++(vlSymsp->__Vcoverage[16180]);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1614);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1621)
                          ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1621)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            if (this->__PVT__m_premature_end) {
                this->__PVT__m_state = 0x00000200U;
                ++(vlSymsp->__Vcoverage[16181]);
            } else {
                this->__PVT__m_state = 0x00000080U;
                ++(vlSymsp->__Vcoverage[16182]);
            }
            unnamedblk118__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk118__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1624)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk118__DOT__cb);
            while ((VlNull{} != unnamedblk118__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk118__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1624)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1624)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk118__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1624)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk118__DOT__cb);
                ++(vlSymsp->__Vcoverage[16183]);
            }
            if ((VlNull{} != this->__PVT__m_phase_proc)) {
                VL_NULL_CHECK(this->__PVT__m_phase_proc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1626)->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_phase_proc = VlNull{};
                ++(vlSymsp->__Vcoverage[16184]);
            } else {
                ++(vlSymsp->__Vcoverage[16185]);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1629);
            this->__VnoInFunc_get_objection(vlProcess, vlSymsp, unnamedblk119__DOT__objection);
            if ((VlNull{} != unnamedblk119__DOT__objection)) {
                VL_NULL_CHECK(unnamedblk119__DOT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1633)->__VnoInFunc_clear(vlProcess, vlSymsp, VlNull{});
                ++(vlSymsp->__Vcoverage[16186]);
            } else {
                ++(vlSymsp->__Vcoverage[16187]);
            }
            ++(vlSymsp->__Vcoverage[16188]);
        } else {
            ++(vlSymsp->__Vcoverage[16189]);
        }
        this->__PVT__m_premature_end = 0U;
        if (((IData)(this->__PVT__m_jump_fwd) | (IData)(this->__PVT__m_jump_bkwd))) {
            if (this->__PVT__m_jump_fwd) {
                this->__VnoInFunc_clear_successors(vlProcess, vlSymsp, 0x00000100U, this->__PVT__m_jump_phase);
                ++(vlSymsp->__Vcoverage[16190]);
            } else {
                ++(vlSymsp->__Vcoverage[16191]);
            }
            VL_NULL_CHECK(this->__PVT__m_jump_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1645)->__VnoInFunc_clear_successors(vlProcess, vlSymsp, 1U, VlNull{});
            ++(vlSymsp->__Vcoverage[16197]);
        } else {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                this->__Vfunc_uvm_report_enabled__443__id = "PH/TRC/DONE"s;
                __Vfunc_uvm_report_enabled__443__severity = 0U;
                __Vfunc_uvm_report_enabled__443__verbosity = 0x00000064U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__444__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__444__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__445__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__445__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__443__verbosity, (IData)(__Vfunc_uvm_report_enabled__443__severity), this->__Vfunc_uvm_report_enabled__443__id, __VlefCall_30__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_30__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_31__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_32__get_inst_id);
                    __Vtask_uvm_report_info__449__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__449__context_name = ""s;
                    __Vtask_uvm_report_info__449__line = 0x00000672U;
                    this->__Vtask_uvm_report_info__449__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__449__verbosity = 0x00000064U;
                    this->__Vtask_uvm_report_info__449__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__VlefCall_31__get_full_name),
                                                                             32,
                                                                             __VlefCall_32__get_inst_id) , "Completed phase"s));
                    this->__Vtask_uvm_report_info__449__id = "PH/TRC/DONE"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__450__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__450__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__451__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__451__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__449__id, this->__Vtask_uvm_report_info__449__message, __Vtask_uvm_report_info__449__verbosity, this->__Vtask_uvm_report_info__449__filename, __Vtask_uvm_report_info__449__line, this->__Vtask_uvm_report_info__449__context_name, (IData)(__Vtask_uvm_report_info__449__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    ++(vlSymsp->__Vcoverage[16192]);
                } else {
                    ++(vlSymsp->__Vcoverage[16193]);
                }
                ++(vlSymsp->__Vcoverage[16194]);
            } else {
                ++(vlSymsp->__Vcoverage[16195]);
            }
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1651)
                          ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1651)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000100U;
            unnamedblk120__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk120__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1653)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk120__DOT__cb);
            while ((VlNull{} != unnamedblk120__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk120__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1653)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1653)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk120__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1653)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk120__DOT__cb);
                ++(vlSymsp->__Vcoverage[16196]);
            }
            this->__PVT__m_phase_proc = VlNull{};
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1655);
            ++(vlSymsp->__Vcoverage[16198]);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                1657);
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, unnamedblk121__DOT__objection);
        if ((VlNull{} != unnamedblk121__DOT__objection)) {
            VL_NULL_CHECK(unnamedblk121__DOT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1662)->__VnoInFunc_clear(vlProcess, vlSymsp, VlNull{});
            ++(vlSymsp->__Vcoverage[16202]);
        } else {
            ++(vlSymsp->__Vcoverage[16203]);
        }
        if (((IData)(this->__PVT__m_jump_fwd) | (IData)(this->__PVT__m_jump_bkwd))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_hopper, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1669)->__VnoInFunc_try_put(vlSymsp, this->__PVT__m_jump_phase, __Vtask_try_put__459__Vfuncout);
            this->__PVT__m_jump_phase = VlNull{};
            this->__PVT__m_jump_fwd = 0U;
            this->__PVT__m_jump_bkwd = 0U;
            ++(vlSymsp->__Vcoverage[16216]);
        } else if ((0U == this->__PVT__m_successors.size())) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1676)
                          ->__PVT__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1676)->__PVT__m_phase_all_done = 1U;
            ++(vlSymsp->__Vcoverage[16214]);
        } else {
            __VlefExpr_33 = (0U != this->__PVT__m_successors.first(unnamedblk122__DOT__succ));
            if (__VlefExpr_33) {
                unnamedblk122__DOT__succ__Vfirst = 1U;
                while (true) {
                    __VlefExpr_34 = unnamedblk122__DOT__succ__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_34)))) {
                        __VlefExpr_34 = (0U != this->__PVT__m_successors.next(unnamedblk122__DOT__succ));
                    }
                    if (!(__VlefExpr_34)) break;
                    unnamedblk122__DOT__succ__Vfirst = 0U;
                    if (VL_GTS_III(32, 2U, VL_NULL_CHECK(unnamedblk122__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1681)
                                   ->__PVT__m_state)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1682)
                                      ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1682)->__PVT__m_prev_state 
                            = VL_NULL_CHECK(unnamedblk122__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1682)
                            ->__PVT__m_state;
                        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1683)
                                      ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1683)->__PVT__m_phase 
                            = unnamedblk122__DOT__succ;
                        VL_NULL_CHECK(unnamedblk122__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1684)->__PVT__m_state = 2U;
                        unnamedblk122__DOT__unnamedblk123__DOT__iter 
                            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
                        VL_NULL_CHECK(unnamedblk122__DOT__unnamedblk123__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1685)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk122__DOT__unnamedblk123__DOT__cb);
                        while ((VlNull{} != unnamedblk122__DOT__unnamedblk123__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk122__DOT__unnamedblk123__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1685)->__VnoInFunc_phase_state_change(vlSymsp, unnamedblk122__DOT__succ, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1685)
                                                                                ->__PVT__state_chg);
                            VL_NULL_CHECK(unnamedblk122__DOT__unnamedblk123__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1685)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk122__DOT__unnamedblk123__DOT__cb);
                            ++(vlSymsp->__Vcoverage[16204]);
                        }
                        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                                vlProcess, 
                                                                "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                1686);
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_hopper, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1687)->__VnoInFunc_try_put(vlSymsp, unnamedblk122__DOT__succ, __Vtask_try_put__464__Vfuncout);
                        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                            this->__Vfunc_uvm_report_enabled__465__id = "PH/TRC/SCHEDULED"s;
                            __Vfunc_uvm_report_enabled__465__severity = 0U;
                            __Vfunc_uvm_report_enabled__465__verbosity = 0x00000064U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__466__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__466__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__467__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__467__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__465__verbosity, (IData)(__Vfunc_uvm_report_enabled__465__severity), this->__Vfunc_uvm_report_enabled__465__id, __VlefCall_35__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[437]);
                            if ((0U != __VlefCall_35__uvm_report_enabled)) {
                                VL_NULL_CHECK(unnamedblk122__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1689)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_36__get_full_name);
                                VL_NULL_CHECK(unnamedblk122__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1689)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_37__get_inst_id);
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_38__get_full_name);
                                __Vtask_uvm_report_info__472__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_info__472__context_name = ""s;
                                __Vtask_uvm_report_info__472__line = 0x00000699U;
                                this->__Vtask_uvm_report_info__472__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                                __Vtask_uvm_report_info__472__verbosity = 0x00000064U;
                                this->__Vtask_uvm_report_info__472__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(__VlefCall_36__get_full_name),
                                                                                32,
                                                                                __VlefCall_37__get_inst_id) , 
                                                                        VL_CONCATN_NNN("Scheduled from phase "s, __VlefCall_38__get_full_name)));
                                this->__Vtask_uvm_report_info__472__id = "PH/TRC/SCHEDULED"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__473__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                    = __Vfunc_get__473__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__474__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                    = __Vtask_get_root__474__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__472__id, this->__Vtask_uvm_report_info__472__message, __Vtask_uvm_report_info__472__verbosity, this->__Vtask_uvm_report_info__472__filename, __Vtask_uvm_report_info__472__line, this->__Vtask_uvm_report_info__472__context_name, (IData)(__Vtask_uvm_report_info__472__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[440]);
                                ++(vlSymsp->__Vcoverage[16205]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16206]);
                            }
                            ++(vlSymsp->__Vcoverage[16207]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16208]);
                        }
                        ++(vlSymsp->__Vcoverage[16209]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16210]);
                    }
                    ++(vlSymsp->__Vcoverage[16211]);
                }
                ++(vlSymsp->__Vcoverage[16212]);
            } else {
                ++(vlSymsp->__Vcoverage[16213]);
            }
            ++(vlSymsp->__Vcoverage[16215]);
        }
        __Vlabel0: ;
    }
    if (this->__PVT__m_jump_bkwd) {
        ++(vlSymsp->__Vcoverage[16199]);
    }
    if (this->__PVT__m_jump_fwd) {
        ++(vlSymsp->__Vcoverage[16200]);
    }
    if ((1U & ((~ (IData)(this->__PVT__m_jump_fwd)) 
               & (~ (IData)(this->__PVT__m_jump_bkwd))))) {
        ++(vlSymsp->__Vcoverage[16201]);
    }
    if (this->__PVT__m_jump_bkwd) {
        ++(vlSymsp->__Vcoverage[16217]);
    }
    if (this->__PVT__m_jump_fwd) {
        ++(vlSymsp->__Vcoverage[16218]);
    }
    if ((1U & ((~ (IData)(this->__PVT__m_jump_fwd)) 
               & (~ (IData)(this->__PVT__m_jump_bkwd))))) {
        ++(vlSymsp->__Vcoverage[16219]);
    }
    ++(vlSymsp->__Vcoverage[16220]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VlefCall_9__uvm_report_enabled, std::string &__VlefCall_10__get_full_name, IData/*31:0*/ &__VlefCall_11__get_inst_id, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> &__VDynScope_execute_phase_0, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_5__sync;
        __Vfork_5__sync.init(1U, vlProcess);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VlefCall_9__uvm_report_enabled, __VlefCall_10__get_full_name, __VlefCall_11__get_inst_id, __Vfork_5__sync);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_phase_0, __Vfork_5__sync);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_phase_0, __Vfork_5__sync);
        co_await __Vfork_5__sync.join(vlProcess, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                      1442);
    }
    vlProcess->disableFork();
    __Vfork_4__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                         1440);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __Vtask___VforkTask_2__298____VDynScope_execute_phase_0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_32__get_inst_id;
    __Vtask___VforkTask_2__298____VlefCall_32__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_30__uvm_report_enabled;
    __Vtask___VforkTask_2__298____VlefCall_30__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_29__uvm_report_enabled;
    __Vtask___VforkTask_2__298____VlefCall_29__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_26__get_inst_id;
    __Vtask___VforkTask_2__298____VlefCall_26__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_24__uvm_report_enabled;
    __Vtask___VforkTask_2__298____VlefCall_24__uvm_report_enabled = 0;
    CData/*0:0*/ __Vtask___VforkTask_2__298____VlefLogAnd_23;
    __Vtask___VforkTask_2__298____VlefLogAnd_23 = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_22__get_objection_total;
    __Vtask___VforkTask_2__298____VlefCall_22__get_objection_total = 0;
    CData/*0:0*/ __Vtask___VforkTask_2__298____VlefExpr_21;
    __Vtask___VforkTask_2__298____VlefExpr_21 = 0;
    CData/*0:0*/ __Vtask___VforkTask_2__298____VlefExpr_20;
    __Vtask___VforkTask_2__298____VlefExpr_20 = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_19__get_inst_id;
    __Vtask___VforkTask_2__298____VlefCall_19__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_17__uvm_report_enabled;
    __Vtask___VforkTask_2__298____VlefCall_17__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_16__uvm_report_enabled;
    __Vtask___VforkTask_2__298____VlefCall_16__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_13__get_inst_id;
    __Vtask___VforkTask_2__298____VlefCall_13__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_11__uvm_report_enabled;
    __Vtask___VforkTask_2__298____VlefCall_11__uvm_report_enabled = 0;
    CData/*0:0*/ __Vtask___VforkTask_2__298____VlefLogAnd_10;
    __Vtask___VforkTask_2__298____VlefLogAnd_10 = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_9__get_objection_total;
    __Vtask___VforkTask_2__298____VlefCall_9__get_objection_total = 0;
    CData/*0:0*/ __Vtask___VforkTask_2__298____VlefExpr_8;
    __Vtask___VforkTask_2__298____VlefExpr_8 = 0;
    CData/*0:0*/ __Vtask___VforkTask_2__298____VlefExpr_7;
    __Vtask___VforkTask_2__298____VlefExpr_7 = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_6__get_inst_id;
    __Vtask___VforkTask_2__298____VlefCall_6__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_4__uvm_report_enabled;
    __Vtask___VforkTask_2__298____VlefCall_4__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_3__get_inst_id;
    __Vtask___VforkTask_2__298____VlefCall_3__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__298____VlefCall_1__uvm_report_enabled;
    __Vtask___VforkTask_2__298____VlefCall_1__uvm_report_enabled = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_2__298__unnamedblk113__DOT__p;
    CData/*0:0*/ __Vtask___VforkTask_2__298__unnamedblk113__DOT__p__Vfirst;
    __Vtask___VforkTask_2__298__unnamedblk113__DOT__p__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> __Vtask___VforkTask_2__298__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_2__298__unnamedblk115__DOT__p;
    CData/*0:0*/ __Vtask___VforkTask_2__298__unnamedblk115__DOT__p__Vfirst;
    __Vtask___VforkTask_2__298__unnamedblk115__DOT__p__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> __Vtask___VforkTask_2__298__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__300__Vfuncout;
    __Vfunc_uvm_report_enabled__300__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__300__verbosity;
    __Vfunc_uvm_report_enabled__300__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__300__severity;
    __Vfunc_uvm_report_enabled__300__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__301__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__302__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__303__Vfuncout;
    __Vtask_uvm_report_enabled__303__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__305__Vfuncout;
    __Vfunc_get_inst_id__305__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__306__verbosity;
    __Vtask_uvm_report_info__306__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__306__line;
    __Vtask_uvm_report_info__306__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__306__report_enabled_checked;
    __Vtask_uvm_report_info__306__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__307__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__308__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__310__Vfuncout;
    __Vfunc_uvm_report_enabled__310__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__310__verbosity;
    __Vfunc_uvm_report_enabled__310__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__310__severity;
    __Vfunc_uvm_report_enabled__310__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__311__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__312__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__313__Vfuncout;
    __Vtask_uvm_report_enabled__313__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__315__Vfuncout;
    __Vfunc_get_inst_id__315__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__316__verbosity;
    __Vtask_uvm_report_info__316__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__316__line;
    __Vtask_uvm_report_info__316__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__316__report_enabled_checked;
    __Vtask_uvm_report_info__316__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__317__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__318__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> __Vtask_get_objection__320__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_total__321__Vfuncout;
    __Vtask_get_objection_total__321__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__322__Vfuncout;
    __Vfunc_uvm_report_enabled__322__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__322__verbosity;
    __Vfunc_uvm_report_enabled__322__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__322__severity;
    __Vfunc_uvm_report_enabled__322__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__323__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__324__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__325__Vfuncout;
    __Vtask_uvm_report_enabled__325__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__327__Vfuncout;
    __Vfunc_get_inst_id__327__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__330__verbosity;
    __Vtask_uvm_report_info__330__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__330__line;
    __Vtask_uvm_report_info__330__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__330__report_enabled_checked;
    __Vtask_uvm_report_info__330__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__331__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__332__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__334__Vfuncout;
    __Vfunc_uvm_report_enabled__334__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__334__verbosity;
    __Vfunc_uvm_report_enabled__334__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__334__severity;
    __Vfunc_uvm_report_enabled__334__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__335__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__336__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__337__Vfuncout;
    __Vtask_uvm_report_enabled__337__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__339__Vfuncout;
    __Vfunc_uvm_report_enabled__339__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__339__verbosity;
    __Vfunc_uvm_report_enabled__339__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__339__severity;
    __Vfunc_uvm_report_enabled__339__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__340__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__341__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__342__Vfuncout;
    __Vtask_uvm_report_enabled__342__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__344__Vfuncout;
    __Vfunc_get_inst_id__344__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__345__verbosity;
    __Vtask_uvm_report_info__345__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__345__line;
    __Vtask_uvm_report_info__345__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__345__report_enabled_checked;
    __Vtask_uvm_report_info__345__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__346__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__347__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> __Vtask_get_objection__349__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_total__350__Vfuncout;
    __Vtask_get_objection_total__350__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__351__Vfuncout;
    __Vfunc_uvm_report_enabled__351__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__351__verbosity;
    __Vfunc_uvm_report_enabled__351__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__351__severity;
    __Vfunc_uvm_report_enabled__351__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__352__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__353__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__354__Vfuncout;
    __Vtask_uvm_report_enabled__354__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__356__Vfuncout;
    __Vfunc_get_inst_id__356__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__359__verbosity;
    __Vtask_uvm_report_info__359__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__359__line;
    __Vtask_uvm_report_info__359__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__359__report_enabled_checked;
    __Vtask_uvm_report_info__359__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__360__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__361__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__363__Vfuncout;
    __Vfunc_uvm_report_enabled__363__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__363__verbosity;
    __Vfunc_uvm_report_enabled__363__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__363__severity;
    __Vfunc_uvm_report_enabled__363__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__364__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__365__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__366__Vfuncout;
    __Vtask_uvm_report_enabled__366__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__368__Vfuncout;
    __Vfunc_uvm_report_enabled__368__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__368__verbosity;
    __Vfunc_uvm_report_enabled__368__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__368__severity;
    __Vfunc_uvm_report_enabled__368__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__369__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__370__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__371__Vfuncout;
    __Vtask_uvm_report_enabled__371__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__373__Vfuncout;
    __Vfunc_get_inst_id__373__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__374__verbosity;
    __Vtask_uvm_report_info__374__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__374__line;
    __Vtask_uvm_report_info__374__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__374__report_enabled_checked;
    __Vtask_uvm_report_info__374__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__375__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__376__Vfuncout;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __Vtrigprevexpr_he44c8962__0;
    __Vtrigprevexpr_he44c8962__0 = 0;
    __Vtask___VforkTask_2__298____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    __Vtask___VforkTask_2__298__unnamedblk113__DOT__p__Vfirst = 0U;
    __Vtask___VforkTask_2__298__unnamedblk115__DOT__p__Vfirst = 0U;
    this->__VnoInFunc_get_name(vlSymsp, this->__Vfunc_get_name__299__Vfuncout);
    this->__Vtask___VforkTask_2__298____VlefCall_0__get_name 
        = this->__Vfunc_get_name__299__Vfuncout;
    if (("run"s == this->__Vtask___VforkTask_2__298____VlefCall_0__get_name)) {
        if ((0ULL == VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__298____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1494)
                                   ->__PVT__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1494)
             ->__PVT__phase_timeout)) {
            if ((0ULL == VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__298____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1495)
                                       ->__PVT__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1495)
                 ->__PVT__phase_timeout)) {
                CData/*0:0*/ __VdynTrigger_he2335bea__0;
                __VdynTrigger_he2335bea__0 = 0;
                __VdynTrigger_he2335bea__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_he2335bea__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (64'h0 != uvm_pkg::uvm_phase.__Vtask___VforkTask_2__298____VDynScope_execute_phase_0.top.phase_timeout))", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                 1495);
                    __Vtrigprevexpr_he44c8962__0 = 
                        (0ULL != VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__298____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1495)
                                               ->__PVT__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1495)
                         ->__PVT__phase_timeout);
                    __VdynTrigger_he2335bea__0 = __Vtrigprevexpr_he44c8962__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he2335bea__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (64'h0 != uvm_pkg::uvm_phase.__Vtask___VforkTask_2__298____VDynScope_execute_phase_0.top.phase_timeout))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             1495);
            }
            ++(vlSymsp->__Vcoverage[16112]);
        } else {
            ++(vlSymsp->__Vcoverage[16113]);
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__300__id = "PH/TRC/TO_WAIT"s;
            __Vfunc_uvm_report_enabled__300__severity = 0U;
            __Vfunc_uvm_report_enabled__300__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__301__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__301__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__302__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__302__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__300__verbosity, (IData)(__Vfunc_uvm_report_enabled__300__severity), this->__Vfunc_uvm_report_enabled__300__id, __Vtask_uvm_report_enabled__303__Vfuncout);
            __Vfunc_uvm_report_enabled__300__Vfuncout 
                = __Vtask_uvm_report_enabled__303__Vfuncout;
            ++(vlSymsp->__Vcoverage[437]);
            __Vtask___VforkTask_2__298____VlefCall_1__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__300__Vfuncout;
            if ((0U != __Vtask___VforkTask_2__298____VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__304__Vfuncout);
                this->__Vtask___VforkTask_2__298____VlefCall_2__get_full_name 
                    = this->__Vfunc_get_full_name__304__Vfuncout;
                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__305__Vfuncout);
                __Vtask___VforkTask_2__298____VlefCall_3__get_inst_id 
                    = __Vfunc_get_inst_id__305__Vfuncout;
                __Vtask_uvm_report_info__306__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__306__context_name = ""s;
                __Vtask_uvm_report_info__306__line = 0x000005d9U;
                this->__Vtask_uvm_report_info__306__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__306__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__306__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(this->__Vtask___VforkTask_2__298____VlefCall_2__get_full_name),
                                                                         32,
                                                                         __Vtask___VforkTask_2__298____VlefCall_3__get_inst_id) , VL_SFORMATF_N_NX("STARTING PHASE TIMEOUT WATCHDOG (timeout == %t)",0,
                                                                                64,
                                                                                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__298____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1497)
                                                                                ->__PVT__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1497)
                                                                                ->__PVT__phase_timeout,
                                                                                -12) ));
                this->__Vtask_uvm_report_info__306__id = "PH/TRC/TO_WAIT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__307__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__307__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__308__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__308__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__306__id, this->__Vtask_uvm_report_info__306__message, __Vtask_uvm_report_info__306__verbosity, this->__Vtask_uvm_report_info__306__filename, __Vtask_uvm_report_info__306__line, this->__Vtask_uvm_report_info__306__context_name, (IData)(__Vtask_uvm_report_info__306__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16114]);
            } else {
                ++(vlSymsp->__Vcoverage[16115]);
            }
            ++(vlSymsp->__Vcoverage[16116]);
        } else {
            ++(vlSymsp->__Vcoverage[16117]);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__298____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1498)
                                                              ->__PVT__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1498)
                                                ->__PVT__phase_timeout, 
                                                vlProcess, 
                                                "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                1498);
        if ((9.20000000000000000e+15 == VL_ITOR_D_Q(64, VL_TIME_UNITED_Q(1)))) {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                this->__Vfunc_uvm_report_enabled__310__id = "PH/TRC/TIMEOUT"s;
                __Vfunc_uvm_report_enabled__310__severity = 0U;
                __Vfunc_uvm_report_enabled__310__verbosity = 0x00000064U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__311__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__311__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__312__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__312__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__310__verbosity, (IData)(__Vfunc_uvm_report_enabled__310__severity), this->__Vfunc_uvm_report_enabled__310__id, __Vtask_uvm_report_enabled__313__Vfuncout);
                __Vfunc_uvm_report_enabled__310__Vfuncout 
                    = __Vtask_uvm_report_enabled__313__Vfuncout;
                ++(vlSymsp->__Vcoverage[437]);
                __Vtask___VforkTask_2__298____VlefCall_4__uvm_report_enabled 
                    = __Vfunc_uvm_report_enabled__310__Vfuncout;
                if ((0U != __Vtask___VforkTask_2__298____VlefCall_4__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__314__Vfuncout);
                    this->__Vtask___VforkTask_2__298____VlefCall_5__get_full_name 
                        = this->__Vfunc_get_full_name__314__Vfuncout;
                    this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__315__Vfuncout);
                    __Vtask___VforkTask_2__298____VlefCall_6__get_inst_id 
                        = __Vfunc_get_inst_id__315__Vfuncout;
                    __Vtask_uvm_report_info__316__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__316__context_name = ""s;
                    __Vtask_uvm_report_info__316__line = 0x000005ddU;
                    this->__Vtask_uvm_report_info__316__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__316__verbosity = 0x00000064U;
                    this->__Vtask_uvm_report_info__316__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(this->__Vtask___VforkTask_2__298____VlefCall_5__get_full_name),
                                                                             32,
                                                                             __Vtask___VforkTask_2__298____VlefCall_6__get_inst_id) , "PHASE TIMEOUT WATCHDOG EXPIRED"s));
                    this->__Vtask_uvm_report_info__316__id = "PH/TRC/TIMEOUT"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__317__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__317__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__318__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__318__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__316__id, this->__Vtask_uvm_report_info__316__message, __Vtask_uvm_report_info__316__verbosity, this->__Vtask_uvm_report_info__316__filename, __Vtask_uvm_report_info__316__line, this->__Vtask_uvm_report_info__316__context_name, (IData)(__Vtask_uvm_report_info__316__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    ++(vlSymsp->__Vcoverage[16118]);
                } else {
                    ++(vlSymsp->__Vcoverage[16119]);
                }
                ++(vlSymsp->__Vcoverage[16120]);
            } else {
                ++(vlSymsp->__Vcoverage[16121]);
            }
            __Vtask___VforkTask_2__298____VlefExpr_7 
                = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.first(__Vtask___VforkTask_2__298__unnamedblk113__DOT__p));
            if (__Vtask___VforkTask_2__298____VlefExpr_7) {
                __Vtask___VforkTask_2__298__unnamedblk113__DOT__p__Vfirst = 1U;
                while (true) {
                    __Vtask___VforkTask_2__298____VlefExpr_8 
                        = __Vtask___VforkTask_2__298__unnamedblk113__DOT__p__Vfirst;
                    if ((1U & (~ (IData)(__Vtask___VforkTask_2__298____VlefExpr_8)))) {
                        __Vtask___VforkTask_2__298____VlefExpr_8 
                            = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.next(__Vtask___VforkTask_2__298__unnamedblk113__DOT__p));
                    }
                    if (!(__Vtask___VforkTask_2__298____VlefExpr_8)) break;
                    __Vtask___VforkTask_2__298__unnamedblk113__DOT__p__Vfirst = 0U;
                    VL_NULL_CHECK(__Vtask___VforkTask_2__298__unnamedblk113__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1504)->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vtask_get_objection__320__Vfuncout);
                    __Vtask___VforkTask_2__298__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done 
                        = __Vtask_get_objection__320__Vfuncout;
                    __Vtask___VforkTask_2__298____VlefLogAnd_10 
                        = (VlNull{} != __Vtask___VforkTask_2__298__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done);
                    if (__Vtask___VforkTask_2__298____VlefLogAnd_10) {
                        VL_NULL_CHECK(__Vtask___VforkTask_2__298__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1505)->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __Vtask_get_objection_total__321__Vfuncout);
                        __Vtask___VforkTask_2__298____VlefCall_9__get_objection_total 
                            = __Vtask_get_objection_total__321__Vfuncout;
                        __Vtask___VforkTask_2__298____VlefLogAnd_10 
                            = VL_LTS_III(32, 0U, __Vtask___VforkTask_2__298____VlefCall_9__get_objection_total);
                    }
                    if (__Vtask___VforkTask_2__298____VlefLogAnd_10) {
                        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                            this->__Vfunc_uvm_report_enabled__322__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                            __Vfunc_uvm_report_enabled__322__severity = 0U;
                            __Vfunc_uvm_report_enabled__322__verbosity = 0x00000064U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__323__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__323__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__324__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__324__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__322__verbosity, (IData)(__Vfunc_uvm_report_enabled__322__severity), this->__Vfunc_uvm_report_enabled__322__id, __Vtask_uvm_report_enabled__325__Vfuncout);
                            __Vfunc_uvm_report_enabled__322__Vfuncout 
                                = __Vtask_uvm_report_enabled__325__Vfuncout;
                            ++(vlSymsp->__Vcoverage[437]);
                            __Vtask___VforkTask_2__298____VlefCall_11__uvm_report_enabled 
                                = __Vfunc_uvm_report_enabled__322__Vfuncout;
                            if ((0U != __Vtask___VforkTask_2__298____VlefCall_11__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__326__Vfuncout);
                                this->__Vtask___VforkTask_2__298____VlefCall_12__get_full_name 
                                    = this->__Vfunc_get_full_name__326__Vfuncout;
                                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__327__Vfuncout);
                                __Vtask___VforkTask_2__298____VlefCall_13__get_inst_id 
                                    = __Vfunc_get_inst_id__327__Vfuncout;
                                VL_NULL_CHECK(__Vtask___VforkTask_2__298__unnamedblk113__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1510)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__328__Vfuncout);
                                this->__Vtask___VforkTask_2__298____VlefCall_14__get_full_name 
                                    = this->__Vtask_get_full_name__328__Vfuncout;
                                VL_NULL_CHECK(__Vtask___VforkTask_2__298__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1510)->__VnoInFunc_convert2string(vlProcess, vlSymsp, this->__Vtask_convert2string__329__Vfuncout);
                                this->__Vtask___VforkTask_2__298____VlefCall_15__convert2string 
                                    = this->__Vtask_convert2string__329__Vfuncout;
                                __Vtask_uvm_report_info__330__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_info__330__context_name = ""s;
                                __Vtask_uvm_report_info__330__line = 0x000005e6U;
                                this->__Vtask_uvm_report_info__330__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                                __Vtask_uvm_report_info__330__verbosity = 0x00000064U;
                                this->__Vtask_uvm_report_info__330__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_2__298____VlefCall_12__get_full_name),
                                                                                32,
                                                                                __Vtask___VforkTask_2__298____VlefCall_13__get_inst_id) , VL_SFORMATF_N_NX("Phase '%@' has outstanding objections:\n%@",0,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_2__298____VlefCall_14__get_full_name),
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_2__298____VlefCall_15__convert2string)) ));
                                this->__Vtask_uvm_report_info__330__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__331__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                    = __Vfunc_get__331__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__332__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                    = __Vtask_get_root__332__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__330__id, this->__Vtask_uvm_report_info__330__message, __Vtask_uvm_report_info__330__verbosity, this->__Vtask_uvm_report_info__330__filename, __Vtask_uvm_report_info__330__line, this->__Vtask_uvm_report_info__330__context_name, (IData)(__Vtask_uvm_report_info__330__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[440]);
                                ++(vlSymsp->__Vcoverage[16122]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16123]);
                            }
                            ++(vlSymsp->__Vcoverage[16124]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16125]);
                        }
                        ++(vlSymsp->__Vcoverage[16126]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16127]);
                    }
                    ++(vlSymsp->__Vcoverage[16128]);
                }
                ++(vlSymsp->__Vcoverage[16129]);
            } else {
                ++(vlSymsp->__Vcoverage[16130]);
            }
            this->__Vfunc_uvm_report_enabled__334__id = "PH_TIMEOUT"s;
            __Vfunc_uvm_report_enabled__334__severity = 3U;
            __Vfunc_uvm_report_enabled__334__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__335__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__335__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__336__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__336__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__334__verbosity, (IData)(__Vfunc_uvm_report_enabled__334__severity), this->__Vfunc_uvm_report_enabled__334__id, __Vtask_uvm_report_enabled__337__Vfuncout);
            __Vfunc_uvm_report_enabled__334__Vfuncout 
                = __Vtask_uvm_report_enabled__337__Vfuncout;
            ++(vlSymsp->__Vcoverage[437]);
            __Vtask___VforkTask_2__298____VlefCall_16__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__334__Vfuncout;
            if ((0U != __Vtask___VforkTask_2__298____VlefCall_16__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_TIMEOUT"s, VL_SFORMATF_N_NX("Default timeout of %0^ hit, indicating a probable testbench issue",0,
                                                                                64,
                                                                                9.20000000000000000e+15,
                                                                                -12) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000005ecU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16131]);
            } else {
                ++(vlSymsp->__Vcoverage[16132]);
            }
            ++(vlSymsp->__Vcoverage[16148]);
        } else {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                this->__Vfunc_uvm_report_enabled__339__id = "PH/TRC/TIMEOUT"s;
                __Vfunc_uvm_report_enabled__339__severity = 0U;
                __Vfunc_uvm_report_enabled__339__verbosity = 0x00000064U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__340__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__340__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__341__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__341__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__339__verbosity, (IData)(__Vfunc_uvm_report_enabled__339__severity), this->__Vfunc_uvm_report_enabled__339__id, __Vtask_uvm_report_enabled__342__Vfuncout);
                __Vfunc_uvm_report_enabled__339__Vfuncout 
                    = __Vtask_uvm_report_enabled__342__Vfuncout;
                ++(vlSymsp->__Vcoverage[437]);
                __Vtask___VforkTask_2__298____VlefCall_17__uvm_report_enabled 
                    = __Vfunc_uvm_report_enabled__339__Vfuncout;
                if ((0U != __Vtask___VforkTask_2__298____VlefCall_17__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__343__Vfuncout);
                    this->__Vtask___VforkTask_2__298____VlefCall_18__get_full_name 
                        = this->__Vfunc_get_full_name__343__Vfuncout;
                    this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__344__Vfuncout);
                    __Vtask___VforkTask_2__298____VlefCall_19__get_inst_id 
                        = __Vfunc_get_inst_id__344__Vfuncout;
                    __Vtask_uvm_report_info__345__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__345__context_name = ""s;
                    __Vtask_uvm_report_info__345__line = 0x000005f0U;
                    this->__Vtask_uvm_report_info__345__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__345__verbosity = 0x00000064U;
                    this->__Vtask_uvm_report_info__345__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(this->__Vtask___VforkTask_2__298____VlefCall_18__get_full_name),
                                                                             32,
                                                                             __Vtask___VforkTask_2__298____VlefCall_19__get_inst_id) , "PHASE TIMEOUT WATCHDOG EXPIRED"s));
                    this->__Vtask_uvm_report_info__345__id = "PH/TRC/TIMEOUT"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__346__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__346__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__347__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__347__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__345__id, this->__Vtask_uvm_report_info__345__message, __Vtask_uvm_report_info__345__verbosity, this->__Vtask_uvm_report_info__345__filename, __Vtask_uvm_report_info__345__line, this->__Vtask_uvm_report_info__345__context_name, (IData)(__Vtask_uvm_report_info__345__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    ++(vlSymsp->__Vcoverage[16133]);
                } else {
                    ++(vlSymsp->__Vcoverage[16134]);
                }
                ++(vlSymsp->__Vcoverage[16135]);
            } else {
                ++(vlSymsp->__Vcoverage[16136]);
            }
            __Vtask___VforkTask_2__298____VlefExpr_20 
                = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.first(__Vtask___VforkTask_2__298__unnamedblk115__DOT__p));
            if (__Vtask___VforkTask_2__298____VlefExpr_20) {
                __Vtask___VforkTask_2__298__unnamedblk115__DOT__p__Vfirst = 1U;
                while (true) {
                    __Vtask___VforkTask_2__298____VlefExpr_21 
                        = __Vtask___VforkTask_2__298__unnamedblk115__DOT__p__Vfirst;
                    if ((1U & (~ (IData)(__Vtask___VforkTask_2__298____VlefExpr_21)))) {
                        __Vtask___VforkTask_2__298____VlefExpr_21 
                            = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.next(__Vtask___VforkTask_2__298__unnamedblk115__DOT__p));
                    }
                    if (!(__Vtask___VforkTask_2__298____VlefExpr_21)) break;
                    __Vtask___VforkTask_2__298__unnamedblk115__DOT__p__Vfirst = 0U;
                    VL_NULL_CHECK(__Vtask___VforkTask_2__298__unnamedblk115__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1523)->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vtask_get_objection__349__Vfuncout);
                    __Vtask___VforkTask_2__298__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done 
                        = __Vtask_get_objection__349__Vfuncout;
                    __Vtask___VforkTask_2__298____VlefLogAnd_23 
                        = (VlNull{} != __Vtask___VforkTask_2__298__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done);
                    if (__Vtask___VforkTask_2__298____VlefLogAnd_23) {
                        VL_NULL_CHECK(__Vtask___VforkTask_2__298__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1524)->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __Vtask_get_objection_total__350__Vfuncout);
                        __Vtask___VforkTask_2__298____VlefCall_22__get_objection_total 
                            = __Vtask_get_objection_total__350__Vfuncout;
                        __Vtask___VforkTask_2__298____VlefLogAnd_23 
                            = VL_LTS_III(32, 0U, __Vtask___VforkTask_2__298____VlefCall_22__get_objection_total);
                    }
                    if (__Vtask___VforkTask_2__298____VlefLogAnd_23) {
                        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                            this->__Vfunc_uvm_report_enabled__351__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                            __Vfunc_uvm_report_enabled__351__severity = 0U;
                            __Vfunc_uvm_report_enabled__351__verbosity = 0x00000064U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__352__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__352__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__353__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__353__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__351__verbosity, (IData)(__Vfunc_uvm_report_enabled__351__severity), this->__Vfunc_uvm_report_enabled__351__id, __Vtask_uvm_report_enabled__354__Vfuncout);
                            __Vfunc_uvm_report_enabled__351__Vfuncout 
                                = __Vtask_uvm_report_enabled__354__Vfuncout;
                            ++(vlSymsp->__Vcoverage[437]);
                            __Vtask___VforkTask_2__298____VlefCall_24__uvm_report_enabled 
                                = __Vfunc_uvm_report_enabled__351__Vfuncout;
                            if ((0U != __Vtask___VforkTask_2__298____VlefCall_24__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__355__Vfuncout);
                                this->__Vtask___VforkTask_2__298____VlefCall_25__get_full_name 
                                    = this->__Vfunc_get_full_name__355__Vfuncout;
                                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__356__Vfuncout);
                                __Vtask___VforkTask_2__298____VlefCall_26__get_inst_id 
                                    = __Vfunc_get_inst_id__356__Vfuncout;
                                VL_NULL_CHECK(__Vtask___VforkTask_2__298__unnamedblk115__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1529)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__357__Vfuncout);
                                this->__Vtask___VforkTask_2__298____VlefCall_27__get_full_name 
                                    = this->__Vtask_get_full_name__357__Vfuncout;
                                VL_NULL_CHECK(__Vtask___VforkTask_2__298__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1529)->__VnoInFunc_convert2string(vlProcess, vlSymsp, this->__Vtask_convert2string__358__Vfuncout);
                                this->__Vtask___VforkTask_2__298____VlefCall_28__convert2string 
                                    = this->__Vtask_convert2string__358__Vfuncout;
                                __Vtask_uvm_report_info__359__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_info__359__context_name = ""s;
                                __Vtask_uvm_report_info__359__line = 0x000005f9U;
                                this->__Vtask_uvm_report_info__359__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                                __Vtask_uvm_report_info__359__verbosity = 0x00000064U;
                                this->__Vtask_uvm_report_info__359__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_2__298____VlefCall_25__get_full_name),
                                                                                32,
                                                                                __Vtask___VforkTask_2__298____VlefCall_26__get_inst_id) , VL_SFORMATF_N_NX("Phase '%@' has outstanding objections:\n%@",0,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_2__298____VlefCall_27__get_full_name),
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_2__298____VlefCall_28__convert2string)) ));
                                this->__Vtask_uvm_report_info__359__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__360__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                    = __Vfunc_get__360__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__361__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                    = __Vtask_get_root__361__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__359__id, this->__Vtask_uvm_report_info__359__message, __Vtask_uvm_report_info__359__verbosity, this->__Vtask_uvm_report_info__359__filename, __Vtask_uvm_report_info__359__line, this->__Vtask_uvm_report_info__359__context_name, (IData)(__Vtask_uvm_report_info__359__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[440]);
                                ++(vlSymsp->__Vcoverage[16137]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16138]);
                            }
                            ++(vlSymsp->__Vcoverage[16139]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16140]);
                        }
                        ++(vlSymsp->__Vcoverage[16141]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16142]);
                    }
                    ++(vlSymsp->__Vcoverage[16143]);
                }
                ++(vlSymsp->__Vcoverage[16144]);
            } else {
                ++(vlSymsp->__Vcoverage[16145]);
            }
            this->__Vfunc_uvm_report_enabled__363__id = "PH_TIMEOUT"s;
            __Vfunc_uvm_report_enabled__363__severity = 3U;
            __Vfunc_uvm_report_enabled__363__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__364__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__364__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__365__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__365__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__363__verbosity, (IData)(__Vfunc_uvm_report_enabled__363__severity), this->__Vfunc_uvm_report_enabled__363__id, __Vtask_uvm_report_enabled__366__Vfuncout);
            __Vfunc_uvm_report_enabled__363__Vfuncout 
                = __Vtask_uvm_report_enabled__366__Vfuncout;
            ++(vlSymsp->__Vcoverage[437]);
            __Vtask___VforkTask_2__298____VlefCall_29__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__363__Vfuncout;
            if ((0U != __Vtask___VforkTask_2__298____VlefCall_29__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_TIMEOUT"s, VL_SFORMATF_N_NX("Explicit timeout of %0t hit, indicating a probable testbench issue",0,
                                                                                64,
                                                                                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__298____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1535)
                                                                                ->__PVT__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1535)
                                                                                ->__PVT__phase_timeout,
                                                                                -12) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000005ffU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16146]);
            } else {
                ++(vlSymsp->__Vcoverage[16147]);
            }
            ++(vlSymsp->__Vcoverage[16149]);
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__368__id = "PH/TRC/EXE/3"s;
            __Vfunc_uvm_report_enabled__368__severity = 0U;
            __Vfunc_uvm_report_enabled__368__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__369__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__369__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__370__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__370__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__368__verbosity, (IData)(__Vfunc_uvm_report_enabled__368__severity), this->__Vfunc_uvm_report_enabled__368__id, __Vtask_uvm_report_enabled__371__Vfuncout);
            __Vfunc_uvm_report_enabled__368__Vfuncout 
                = __Vtask_uvm_report_enabled__371__Vfuncout;
            ++(vlSymsp->__Vcoverage[437]);
            __Vtask___VforkTask_2__298____VlefCall_30__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__368__Vfuncout;
            if ((0U != __Vtask___VforkTask_2__298____VlefCall_30__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__372__Vfuncout);
                this->__Vtask___VforkTask_2__298____VlefCall_31__get_full_name 
                    = this->__Vfunc_get_full_name__372__Vfuncout;
                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__373__Vfuncout);
                __Vtask___VforkTask_2__298____VlefCall_32__get_inst_id 
                    = __Vfunc_get_inst_id__373__Vfuncout;
                __Vtask_uvm_report_info__374__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__374__context_name = ""s;
                __Vtask_uvm_report_info__374__line = 0x00000602U;
                this->__Vtask_uvm_report_info__374__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__374__verbosity = 0x000001f4U;
                this->__Vtask_uvm_report_info__374__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(this->__Vtask___VforkTask_2__298____VlefCall_31__get_full_name),
                                                                         32,
                                                                         __Vtask___VforkTask_2__298____VlefCall_32__get_inst_id) , "PHASE EXIT TIMEOUT"s));
                this->__Vtask_uvm_report_info__374__id = "PH/TRC/EXE/3"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__375__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__375__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__376__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__376__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__374__id, this->__Vtask_uvm_report_info__374__message, __Vtask_uvm_report_info__374__verbosity, this->__Vtask_uvm_report_info__374__filename, __Vtask_uvm_report_info__374__line, this->__Vtask_uvm_report_info__374__context_name, (IData)(__Vtask_uvm_report_info__374__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16150]);
            } else {
                ++(vlSymsp->__Vcoverage[16151]);
            }
            ++(vlSymsp->__Vcoverage[16152]);
        } else {
            ++(vlSymsp->__Vcoverage[16153]);
        }
        ++(vlSymsp->__Vcoverage[16154]);
    } else {
        co_await VlForever{};
        ++(vlSymsp->__Vcoverage[16155]);
    }
    __Vfork_5__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                         1492);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __Vtask___VforkTask_1__243____VDynScope_execute_phase_0;
    CData/*0:0*/ __Vtask___VforkTask_1__243____VlefLogAnd_16;
    __Vtask___VforkTask_1__243____VlefLogAnd_16 = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_15__get_max_ready_to_end_iterations;
    __Vtask___VforkTask_1__243____VlefCall_15__get_max_ready_to_end_iterations = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_14__get_inst_id;
    __Vtask___VforkTask_1__243____VlefCall_14__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_12__uvm_report_enabled;
    __Vtask___VforkTask_1__243____VlefCall_12__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_11__get_inst_id;
    __Vtask___VforkTask_1__243____VlefCall_11__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_9__uvm_report_enabled;
    __Vtask___VforkTask_1__243____VlefCall_9__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_8__get_inst_id;
    __Vtask___VforkTask_1__243____VlefCall_8__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_6__uvm_report_enabled;
    __Vtask___VforkTask_1__243____VlefCall_6__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_5__get_inst_id;
    __Vtask___VforkTask_1__243____VlefCall_5__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_3__uvm_report_enabled;
    __Vtask___VforkTask_1__243____VlefCall_3__uvm_report_enabled = 0;
    CData/*0:0*/ __Vtask___VforkTask_1__243____VlefLogAnd_2;
    __Vtask___VforkTask_1__243____VlefLogAnd_2 = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__243____VlefCall_0__get_objection_total;
    __Vtask___VforkTask_1__243____VlefCall_0__get_objection_total = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> __Vtask___VforkTask_1__243__unnamedblk112__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> __Vtask___VforkTask_1__243__unnamedblk112__DOT__cb;
    CData/*0:0*/ __Vtask___VforkTask_1__243__do_ready_to_end;
    __Vtask___VforkTask_1__243__do_ready_to_end = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> __Vtask___VforkTask_1__243__phase_done;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__244__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_total__245__Vfuncout;
    __Vtask_get_objection_total__245__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__248__Vfuncout;
    __Vfunc_uvm_report_enabled__248__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__248__verbosity;
    __Vfunc_uvm_report_enabled__248__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__248__severity;
    __Vfunc_uvm_report_enabled__248__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__249__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__250__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__251__Vfuncout;
    __Vtask_uvm_report_enabled__251__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__253__Vfuncout;
    __Vfunc_get_inst_id__253__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__254__verbosity;
    __Vtask_uvm_report_info__254__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__254__line;
    __Vtask_uvm_report_info__254__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__254__report_enabled_checked;
    __Vtask_uvm_report_info__254__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__255__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__256__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__258__Vfuncout;
    __Vfunc_uvm_report_enabled__258__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__258__verbosity;
    __Vfunc_uvm_report_enabled__258__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__258__severity;
    __Vfunc_uvm_report_enabled__258__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__259__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__260__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__261__Vfuncout;
    __Vtask_uvm_report_enabled__261__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__263__Vfuncout;
    __Vfunc_get_inst_id__263__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__264__verbosity;
    __Vtask_uvm_report_info__264__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__264__line;
    __Vtask_uvm_report_info__264__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__264__report_enabled_checked;
    __Vtask_uvm_report_info__264__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__265__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__266__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__270__Vfuncout;
    __Vfunc_uvm_report_enabled__270__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__270__verbosity;
    __Vfunc_uvm_report_enabled__270__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__270__severity;
    __Vfunc_uvm_report_enabled__270__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__271__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__272__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__273__Vfuncout;
    __Vtask_uvm_report_enabled__273__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__275__Vfuncout;
    __Vfunc_get_inst_id__275__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__276__verbosity;
    __Vtask_uvm_report_info__276__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__276__line;
    __Vtask_uvm_report_info__276__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__276__report_enabled_checked;
    __Vtask_uvm_report_info__276__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__277__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__278__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__280__Vfuncout;
    __Vfunc_uvm_report_enabled__280__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__280__verbosity;
    __Vfunc_uvm_report_enabled__280__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__280__severity;
    __Vfunc_uvm_report_enabled__280__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__281__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__282__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__283__Vfuncout;
    __Vtask_uvm_report_enabled__283__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__285__Vfuncout;
    __Vfunc_get_inst_id__285__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__286__verbosity;
    __Vtask_uvm_report_info__286__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__286__line;
    __Vtask_uvm_report_info__286__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__286__report_enabled_checked;
    __Vtask_uvm_report_info__286__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__287__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__288__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__291__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__293__Vfuncout;
    IData/*31:0*/ __Vfunc_get_max_ready_to_end_iterations__297__Vfuncout;
    __Vfunc_get_max_ready_to_end_iterations__297__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 = 0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 = 0;
    __Vtask___VforkTask_1__243____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    __Vtask___VforkTask_1__243__do_ready_to_end = 0U;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__244__Vfuncout);
    __Vtask___VforkTask_1__243__phase_done = __Vfunc_get_objection__244__Vfuncout;
    VL_NULL_CHECK(__Vtask___VforkTask_1__243__phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1455)->__VnoInFunc_get_objection_total(vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_1__243____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1455)
                                                                                ->__PVT__top, __Vtask_get_objection_total__245__Vfuncout);
    __Vtask___VforkTask_1__243____VlefCall_0__get_objection_total 
        = __Vtask_get_objection_total__245__Vfuncout;
    __Vtask___VforkTask_1__243____VlefLogAnd_2 = (0U 
                                                  != __Vtask___VforkTask_1__243____VlefCall_0__get_objection_total);
    if ((1U & (~ (IData)(__Vtask___VforkTask_1__243____VlefLogAnd_2)))) {
        __Vtask___VforkTask_1__243____VlefLogAnd_2 
            = vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic;
        if (__Vtask___VforkTask_1__243____VlefLogAnd_2) {
            VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1456)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__246__Vfuncout);
            this->__Vtask___VforkTask_1__243____VlefCall_1__get_name 
                = this->__Vtask_get_name__246__Vfuncout;
            __Vtask___VforkTask_1__243____VlefLogAnd_2 
                = ("run"s == this->__Vtask___VforkTask_1__243____VlefCall_1__get_name);
        }
    }
    if (__Vtask___VforkTask_1__243____VlefLogAnd_2) {
        if (VL_NULL_CHECK(__Vtask___VforkTask_1__243__phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1457)
            ->__PVT__m_top_all_dropped) {
            ++(vlSymsp->__Vcoverage[16090]);
        } else {
            co_await VL_NULL_CHECK(__Vtask___VforkTask_1__243__phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1458)->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, VL_NULL_CHECK(__Vtask___VforkTask_1__243____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1458)
                                                                                ->__PVT__top);
            ++(vlSymsp->__Vcoverage[16089]);
        }
        this->__Vfunc_uvm_report_enabled__248__id = "PH/TRC/EXE/ALLDROP"s;
        __Vfunc_uvm_report_enabled__248__severity = 0U;
        __Vfunc_uvm_report_enabled__248__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__249__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__249__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__250__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__250__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__248__verbosity, (IData)(__Vfunc_uvm_report_enabled__248__severity), this->__Vfunc_uvm_report_enabled__248__id, __Vtask_uvm_report_enabled__251__Vfuncout);
        __Vfunc_uvm_report_enabled__248__Vfuncout = __Vtask_uvm_report_enabled__251__Vfuncout;
        ++(vlSymsp->__Vcoverage[437]);
        __Vtask___VforkTask_1__243____VlefCall_3__uvm_report_enabled 
            = __Vfunc_uvm_report_enabled__248__Vfuncout;
        if ((0U != __Vtask___VforkTask_1__243____VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__252__Vfuncout);
            this->__Vtask___VforkTask_1__243____VlefCall_4__get_full_name 
                = this->__Vfunc_get_full_name__252__Vfuncout;
            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__253__Vfuncout);
            __Vtask___VforkTask_1__243____VlefCall_5__get_inst_id 
                = __Vfunc_get_inst_id__253__Vfuncout;
            __Vtask_uvm_report_info__254__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__254__context_name = ""s;
            __Vtask_uvm_report_info__254__line = 0x000005b3U;
            this->__Vtask_uvm_report_info__254__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__254__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__254__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                     -1,
                                                                     &(this->__Vtask___VforkTask_1__243____VlefCall_4__get_full_name),
                                                                     32,
                                                                     __Vtask___VforkTask_1__243____VlefCall_5__get_inst_id) , "PHASE EXIT ALL_DROPPED"s));
            this->__Vtask_uvm_report_info__254__id = "PH/TRC/EXE/ALLDROP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__255__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__255__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__256__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__256__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__254__id, this->__Vtask_uvm_report_info__254__message, __Vtask_uvm_report_info__254__verbosity, this->__Vtask_uvm_report_info__254__filename, __Vtask_uvm_report_info__254__line, this->__Vtask_uvm_report_info__254__context_name, (IData)(__Vtask_uvm_report_info__254__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[16091]);
        } else {
            ++(vlSymsp->__Vcoverage[16092]);
        }
        ++(vlSymsp->__Vcoverage[16097]);
    } else {
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__258__id = "PH/TRC/SKIP"s;
            __Vfunc_uvm_report_enabled__258__severity = 0U;
            __Vfunc_uvm_report_enabled__258__verbosity = 0x00000064U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__259__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__259__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__260__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__260__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__258__verbosity, (IData)(__Vfunc_uvm_report_enabled__258__severity), this->__Vfunc_uvm_report_enabled__258__id, __Vtask_uvm_report_enabled__261__Vfuncout);
            __Vfunc_uvm_report_enabled__258__Vfuncout 
                = __Vtask_uvm_report_enabled__261__Vfuncout;
            ++(vlSymsp->__Vcoverage[437]);
            __Vtask___VforkTask_1__243____VlefCall_6__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__258__Vfuncout;
            if ((0U != __Vtask___VforkTask_1__243____VlefCall_6__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__262__Vfuncout);
                this->__Vtask___VforkTask_1__243____VlefCall_7__get_full_name 
                    = this->__Vfunc_get_full_name__262__Vfuncout;
                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__263__Vfuncout);
                __Vtask___VforkTask_1__243____VlefCall_8__get_inst_id 
                    = __Vfunc_get_inst_id__263__Vfuncout;
                __Vtask_uvm_report_info__264__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__264__context_name = ""s;
                __Vtask_uvm_report_info__264__line = 0x000005b6U;
                this->__Vtask_uvm_report_info__264__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__264__verbosity = 0x00000064U;
                this->__Vtask_uvm_report_info__264__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(this->__Vtask___VforkTask_1__243____VlefCall_7__get_full_name),
                                                                         32,
                                                                         __Vtask___VforkTask_1__243____VlefCall_8__get_inst_id) , "No objections raised, skipping phase"s));
                this->__Vtask_uvm_report_info__264__id = "PH/TRC/SKIP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__265__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__265__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__266__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__266__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__264__id, this->__Vtask_uvm_report_info__264__message, __Vtask_uvm_report_info__264__verbosity, this->__Vtask_uvm_report_info__264__filename, __Vtask_uvm_report_info__264__line, this->__Vtask_uvm_report_info__264__context_name, (IData)(__Vtask_uvm_report_info__264__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16093]);
            } else {
                ++(vlSymsp->__Vcoverage[16094]);
            }
            ++(vlSymsp->__Vcoverage[16095]);
        } else {
            ++(vlSymsp->__Vcoverage[16096]);
        }
        ++(vlSymsp->__Vcoverage[16098]);
    }
    co_await this->__VnoInFunc_wait_for_self_and_siblings_to_drop(vlProcess, vlSymsp);
    __Vtask___VforkTask_1__243__do_ready_to_end = 1U;
    while (__Vtask___VforkTask_1__243__do_ready_to_end) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        CData/*0:0*/ __VdynTrigger_h07a1b885__2;
        __VdynTrigger_h07a1b885__2 = 0;
        __VdynTrigger_h07a1b885__2 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        while ((1U & (~ (IData)(__VdynTrigger_h07a1b885__2)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                         430);
            __VdynTrigger_h07a1b885__2 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                          != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1);
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h07a1b885__2);
            __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 
                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     430);
        ++(vlSymsp->__Vcoverage[480]);
        this->__Vfunc_uvm_report_enabled__270__id = "PH_READY_TO_END"s;
        __Vfunc_uvm_report_enabled__270__severity = 0U;
        __Vfunc_uvm_report_enabled__270__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__271__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__271__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__272__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__272__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__270__verbosity, (IData)(__Vfunc_uvm_report_enabled__270__severity), this->__Vfunc_uvm_report_enabled__270__id, __Vtask_uvm_report_enabled__273__Vfuncout);
        __Vfunc_uvm_report_enabled__270__Vfuncout = __Vtask_uvm_report_enabled__273__Vfuncout;
        ++(vlSymsp->__Vcoverage[437]);
        __Vtask___VforkTask_1__243____VlefCall_9__uvm_report_enabled 
            = __Vfunc_uvm_report_enabled__270__Vfuncout;
        if ((0U != __Vtask___VforkTask_1__243____VlefCall_9__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__274__Vfuncout);
            this->__Vtask___VforkTask_1__243____VlefCall_10__get_full_name 
                = this->__Vfunc_get_full_name__274__Vfuncout;
            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__275__Vfuncout);
            __Vtask___VforkTask_1__243____VlefCall_11__get_inst_id 
                = __Vfunc_get_inst_id__275__Vfuncout;
            __Vtask_uvm_report_info__276__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__276__context_name = ""s;
            __Vtask_uvm_report_info__276__line = 0x000005c2U;
            this->__Vtask_uvm_report_info__276__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__276__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__276__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                     -1,
                                                                     &(this->__Vtask___VforkTask_1__243____VlefCall_10__get_full_name),
                                                                     32,
                                                                     __Vtask___VforkTask_1__243____VlefCall_11__get_inst_id) , "PHASE READY TO END"s));
            this->__Vtask_uvm_report_info__276__id = "PH_READY_TO_END"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__277__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__277__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__278__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__278__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__276__id, this->__Vtask_uvm_report_info__276__message, __Vtask_uvm_report_info__276__verbosity, this->__Vtask_uvm_report_info__276__filename, __Vtask_uvm_report_info__276__line, this->__Vtask_uvm_report_info__276__context_name, (IData)(__Vtask_uvm_report_info__276__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[16099]);
        } else {
            ++(vlSymsp->__Vcoverage[16100]);
        }
        this->__PVT__m_ready_to_end_count = ((IData)(1U) 
                                             + this->__PVT__m_ready_to_end_count);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__280__id = "PH_READY_TO_END_CB"s;
            __Vfunc_uvm_report_enabled__280__severity = 0U;
            __Vfunc_uvm_report_enabled__280__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__281__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__281__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__282__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__282__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__280__verbosity, (IData)(__Vfunc_uvm_report_enabled__280__severity), this->__Vfunc_uvm_report_enabled__280__id, __Vtask_uvm_report_enabled__283__Vfuncout);
            __Vfunc_uvm_report_enabled__280__Vfuncout 
                = __Vtask_uvm_report_enabled__283__Vfuncout;
            ++(vlSymsp->__Vcoverage[437]);
            __Vtask___VforkTask_1__243____VlefCall_12__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__280__Vfuncout;
            if ((0U != __Vtask___VforkTask_1__243____VlefCall_12__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__284__Vfuncout);
                this->__Vtask___VforkTask_1__243____VlefCall_13__get_full_name 
                    = this->__Vfunc_get_full_name__284__Vfuncout;
                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__285__Vfuncout);
                __Vtask___VforkTask_1__243____VlefCall_14__get_inst_id 
                    = __Vfunc_get_inst_id__285__Vfuncout;
                __Vtask_uvm_report_info__286__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__286__context_name = ""s;
                __Vtask_uvm_report_info__286__line = 0x000005c5U;
                this->__Vtask_uvm_report_info__286__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__286__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__286__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(this->__Vtask___VforkTask_1__243____VlefCall_13__get_full_name),
                                                                         32,
                                                                         __Vtask___VforkTask_1__243____VlefCall_14__get_inst_id) , "CALLING READY_TO_END CB"s));
                this->__Vtask_uvm_report_info__286__id = "PH_READY_TO_END_CB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__287__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__287__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__288__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__288__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__286__id, this->__Vtask_uvm_report_info__286__message, __Vtask_uvm_report_info__286__verbosity, this->__Vtask_uvm_report_info__286__filename, __Vtask_uvm_report_info__286__line, this->__Vtask_uvm_report_info__286__context_name, (IData)(__Vtask_uvm_report_info__286__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16101]);
            } else {
                ++(vlSymsp->__Vcoverage[16102]);
            }
            ++(vlSymsp->__Vcoverage[16103]);
        } else {
            ++(vlSymsp->__Vcoverage[16104]);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_1__243____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1478)
                      ->__PVT__state_chg, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1478)->__PVT__m_prev_state 
            = this->__PVT__m_state;
        this->__PVT__m_state = 0x00000020U;
        __Vtask___VforkTask_1__243__unnamedblk112__DOT__iter 
            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(__Vtask___VforkTask_1__243__unnamedblk112__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1480)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__291__Vfuncout);
        __Vtask___VforkTask_1__243__unnamedblk112__DOT__cb 
            = __Vtask_first__291__Vfuncout;
        while ((VlNull{} != __Vtask___VforkTask_1__243__unnamedblk112__DOT__cb)) {
            VL_NULL_CHECK(__Vtask___VforkTask_1__243__unnamedblk112__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1480)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__Vtask___VforkTask_1__243____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1480)
                                                                                ->__PVT__state_chg);
            VL_NULL_CHECK(__Vtask___VforkTask_1__243__unnamedblk112__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1480)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__293__Vfuncout);
            __Vtask___VforkTask_1__243__unnamedblk112__DOT__cb 
                = __Vtask_next__293__Vfuncout;
            ++(vlSymsp->__Vcoverage[16105]);
        }
        if ((VlNull{} != this->__PVT__m_imp)) {
            VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1482)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_1__243____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1482)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, 0x00000020U);
            ++(vlSymsp->__Vcoverage[16106]);
        } else {
            ++(vlSymsp->__Vcoverage[16107]);
        }
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        CData/*0:0*/ __VdynTrigger_h07a1b885__3;
        __VdynTrigger_h07a1b885__3 = 0;
        __VdynTrigger_h07a1b885__3 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        while ((1U & (~ (IData)(__VdynTrigger_h07a1b885__3)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                         430);
            __VdynTrigger_h07a1b885__3 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                          != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2);
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h07a1b885__3);
            __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 
                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     430);
        ++(vlSymsp->__Vcoverage[480]);
        co_await this->__VnoInFunc_wait_for_self_and_siblings_to_drop(vlProcess, vlSymsp);
        __Vtask___VforkTask_1__243____VlefLogAnd_16 
            = (0x00000010U == this->__PVT__m_state);
        if (__Vtask___VforkTask_1__243____VlefLogAnd_16) {
            this->__VnoInFunc_get_max_ready_to_end_iterations(vlSymsp, __Vfunc_get_max_ready_to_end_iterations__297__Vfuncout);
            __Vtask___VforkTask_1__243____VlefCall_15__get_max_ready_to_end_iterations 
                = __Vfunc_get_max_ready_to_end_iterations__297__Vfuncout;
            __Vtask___VforkTask_1__243____VlefLogAnd_16 
                = (this->__PVT__m_ready_to_end_count 
                   < __Vtask___VforkTask_1__243____VlefCall_15__get_max_ready_to_end_iterations);
        }
        __Vtask___VforkTask_1__243__do_ready_to_end 
            = __Vtask___VforkTask_1__243____VlefLogAnd_16;
        ++(vlSymsp->__Vcoverage[16111]);
    }
    __Vfork_5__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                         1450);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                            429);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_hccec5996__3;
        __Vintraval_hccec5996__3 = 0;
        __Vintraval_hccec5996__3 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_hccec5996__3);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__10;
    __VdynTrigger_h24befa02__10 = 0;
    __VdynTrigger_h24befa02__10 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__10)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h24befa02__10 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__10);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 429);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_hccec5996__3;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                            429);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_hccec5996__2;
        __Vintraval_hccec5996__2 = 0;
        __Vintraval_hccec5996__2 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_hccec5996__2);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__9;
    __VdynTrigger_h24befa02__9 = 0;
    __VdynTrigger_h24befa02__9 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__9)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h24befa02__9 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__9);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 429);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_hccec5996__2;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __VlefCall_9__uvm_report_enabled, std::string __VlefCall_10__get_full_name, IData/*31:0*/ __VlefCall_11__get_inst_id, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__233__verbosity;
    __Vfunc_uvm_report_enabled__233__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__233__severity;
    __Vfunc_uvm_report_enabled__233__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__234__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__235__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__239__verbosity;
    __Vtask_uvm_report_info__239__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__239__line;
    __Vtask_uvm_report_info__239__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__239__report_enabled_checked;
    __Vtask_uvm_report_info__239__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__240__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__241__Vfuncout;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__m_premature_end)))) {
        CData/*0:0*/ __VdynTrigger_h4afd8f79__0;
        __VdynTrigger_h4afd8f79__0 = 0;
        __VdynTrigger_h4afd8f79__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h4afd8f79__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] uvm_pkg::uvm_phase.m_premature_end)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         1445);
            __VdynTrigger_h4afd8f79__0 = this->__PVT__m_premature_end;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h4afd8f79__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] uvm_pkg::uvm_phase.m_premature_end)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                     1445);
    }
    this->__Vfunc_uvm_report_enabled__233__id = "PH/TRC/EXE/JUMP"s;
    __Vfunc_uvm_report_enabled__233__severity = 0U;
    __Vfunc_uvm_report_enabled__233__verbosity = 0x000001f4U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__234__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__234__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__235__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__235__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__233__verbosity, (IData)(__Vfunc_uvm_report_enabled__233__severity), this->__Vfunc_uvm_report_enabled__233__id, __VlefCall_9__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_9__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
        this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_11__get_inst_id);
        __Vtask_uvm_report_info__239__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__239__context_name = ""s;
        __Vtask_uvm_report_info__239__line = 0x000005a6U;
        this->__Vtask_uvm_report_info__239__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_info__239__verbosity = 0x000001f4U;
        this->__Vtask_uvm_report_info__239__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                 -1,
                                                                 &(__VlefCall_10__get_full_name),
                                                                 32,
                                                                 __VlefCall_11__get_inst_id) , "PHASE EXIT ON JUMP REQUEST"s));
        this->__Vtask_uvm_report_info__239__id = "PH/TRC/EXE/JUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__240__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__240__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__241__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__241__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__239__id, this->__Vtask_uvm_report_info__239__message, __Vtask_uvm_report_info__239__verbosity, this->__Vtask_uvm_report_info__239__filename, __Vtask_uvm_report_info__239__line, this->__Vtask_uvm_report_info__239__context_name, (IData)(__Vtask_uvm_report_info__239__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[16087]);
    } else {
        ++(vlSymsp->__Vcoverage[16088]);
    }
    __Vfork_5__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                         1444);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                            429);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_hccec5996__1;
        __Vintraval_hccec5996__1 = 0;
        __Vintraval_hccec5996__1 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_hccec5996__1);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__8;
    __VdynTrigger_h24befa02__8 = 0;
    __VdynTrigger_h24befa02__8 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__8)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h24befa02__8 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__8);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 429);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_hccec5996__1;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __VDynScope_execute_phase_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __Vtask___VforkTask_0__229____VDynScope_execute_phase_0;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__229____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                            1421);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_phase_proc);
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__229____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1429)
                  ->__PVT__task_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1429)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__229____VDynScope_execute_phase_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1429)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}, 0x00000010U);
    co_await VlForever{};
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_predecessor_nodes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> &pred) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_predecessor_nodes\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_8;
    CData/*0:0*/ __VlefExpr_7;
    CData/*0:0*/ __VlefExpr_6;
    CData/*0:0*/ __VlefExpr_5;
    IData/*31:0*/ __VlefCall_4__get_phase_type;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk124__DOT__p;
    CData/*0:0*/ unnamedblk124__DOT__p__Vfirst;
    unnamedblk124__DOT__p__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk125__DOT__p;
    CData/*0:0*/ unnamedblk125__DOT__p__Vfirst;
    unnamedblk125__DOT__p__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk125__DOT__unnamedblk126__DOT__next_p;
    CData/*0:0*/ unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst;
    unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk127__DOT__p;
    CData/*0:0*/ unnamedblk127__DOT__p__Vfirst;
    unnamedblk127__DOT__p__Vfirst = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    CData/*0:0*/ done;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> predecessors;
    IData/*31:0*/ idx;
    done = 0U;
    predecessors.clear();
    predecessors.atDefault() = 0;
    idx = 0U;
    __VlefExpr_0 = (0U != this->__PVT__m_predecessors.first(unnamedblk124__DOT__p));
    if (__VlefExpr_0) {
        unnamedblk124__DOT__p__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk124__DOT__p__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_predecessors.next(unnamedblk124__DOT__p));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk124__DOT__p__Vfirst = 0U;
            predecessors.at(unnamedblk124__DOT__p) = 1U;
            ++(vlSymsp->__Vcoverage[16221]);
        }
        ++(vlSymsp->__Vcoverage[16222]);
    } else {
        ++(vlSymsp->__Vcoverage[16223]);
    }
    while (true) {
        done = 1U;
        __VlefExpr_2 = (0U != predecessors.first(unnamedblk125__DOT__p));
        if (__VlefExpr_2) {
            unnamedblk125__DOT__p__Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk125__DOT__p__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != predecessors.next(unnamedblk125__DOT__p));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk125__DOT__p__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk125__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1710)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_4__get_phase_type);
                if ((1U != __VlefCall_4__get_phase_type)) {
                    predecessors.erase(unnamedblk125__DOT__p);
                    __VlefExpr_5 = (0U != VL_NULL_CHECK(unnamedblk125__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1712)
                                    ->__PVT__m_predecessors.first(unnamedblk125__DOT__unnamedblk126__DOT__next_p));
                    if (__VlefExpr_5) {
                        unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst = 1U;
                        while (true) {
                            __VlefExpr_6 = unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst;
                            if ((1U & (~ (IData)(__VlefExpr_6)))) {
                                __VlefExpr_6 = (0U 
                                                != VL_NULL_CHECK(unnamedblk125__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1712)
                                                ->__PVT__m_predecessors.next(unnamedblk125__DOT__unnamedblk126__DOT__next_p));
                            }
                            if (!(__VlefExpr_6)) break;
                            unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst = 0U;
                            predecessors.at(unnamedblk125__DOT__unnamedblk126__DOT__next_p) = 1U;
                            ++(vlSymsp->__Vcoverage[16224]);
                        }
                        ++(vlSymsp->__Vcoverage[16225]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16226]);
                    }
                    done = 0U;
                    ++(vlSymsp->__Vcoverage[16227]);
                } else {
                    ++(vlSymsp->__Vcoverage[16228]);
                }
                ++(vlSymsp->__Vcoverage[16229]);
            }
            ++(vlSymsp->__Vcoverage[16230]);
        } else {
            ++(vlSymsp->__Vcoverage[16231]);
        }
        ++(vlSymsp->__Vcoverage[16232]);
        if (!((1U & (~ (IData)(done))))) break;
        ++(vlSymsp->__Vcoverage[16235]);
    }
    pred.renew(predecessors.size());
    __VlefExpr_7 = (0U != predecessors.first(unnamedblk127__DOT__p));
    if (__VlefExpr_7) {
        unnamedblk127__DOT__p__Vfirst = 1U;
        while (true) {
            __VlefExpr_8 = unnamedblk127__DOT__p__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_8)))) {
                __VlefExpr_8 = (0U != predecessors.next(unnamedblk127__DOT__p));
            }
            if (!(__VlefExpr_8)) break;
            unnamedblk127__DOT__p__Vfirst = 0U;
            __Vincrement1 = idx;
            idx = ((IData)(1U) + idx);
            pred.atWrite(__Vincrement1) = unnamedblk127__DOT__p;
            ++(vlSymsp->__Vcoverage[16236]);
        }
        ++(vlSymsp->__Vcoverage[16237]);
    } else {
        ++(vlSymsp->__Vcoverage[16238]);
    }
    if ((1U & (~ (IData)(done)))) {
        ++(vlSymsp->__Vcoverage[16233]);
    }
    if (done) {
        ++(vlSymsp->__Vcoverage[16234]);
    }
    ++(vlSymsp->__Vcoverage[16239]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_successor_nodes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> &succ) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_successor_nodes\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_8;
    CData/*0:0*/ __VlefExpr_7;
    CData/*0:0*/ __VlefExpr_6;
    CData/*0:0*/ __VlefExpr_5;
    IData/*31:0*/ __VlefCall_4__get_phase_type;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk128__DOT__s;
    CData/*0:0*/ unnamedblk128__DOT__s__Vfirst;
    unnamedblk128__DOT__s__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__s;
    CData/*0:0*/ unnamedblk129__DOT__s__Vfirst;
    unnamedblk129__DOT__s__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__unnamedblk130__DOT__next_s;
    CData/*0:0*/ unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst;
    unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk131__DOT__s;
    CData/*0:0*/ unnamedblk131__DOT__s__Vfirst;
    unnamedblk131__DOT__s__Vfirst = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    CData/*0:0*/ done;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> successors;
    IData/*31:0*/ idx;
    done = 0U;
    successors.clear();
    successors.atDefault() = 0;
    idx = 0U;
    __VlefExpr_0 = (0U != this->__PVT__m_successors.first(unnamedblk128__DOT__s));
    if (__VlefExpr_0) {
        unnamedblk128__DOT__s__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk128__DOT__s__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_successors.next(unnamedblk128__DOT__s));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk128__DOT__s__Vfirst = 0U;
            successors.at(unnamedblk128__DOT__s) = 1U;
            ++(vlSymsp->__Vcoverage[16240]);
        }
        ++(vlSymsp->__Vcoverage[16241]);
    } else {
        ++(vlSymsp->__Vcoverage[16242]);
    }
    while (true) {
        done = 1U;
        __VlefExpr_2 = (0U != successors.first(unnamedblk129__DOT__s));
        if (__VlefExpr_2) {
            unnamedblk129__DOT__s__Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk129__DOT__s__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != successors.next(unnamedblk129__DOT__s));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk129__DOT__s__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk129__DOT__s, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1739)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_4__get_phase_type);
                if ((1U != __VlefCall_4__get_phase_type)) {
                    successors.erase(unnamedblk129__DOT__s);
                    __VlefExpr_5 = (0U != VL_NULL_CHECK(unnamedblk129__DOT__s, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1741)
                                    ->__PVT__m_successors.first(unnamedblk129__DOT__unnamedblk130__DOT__next_s));
                    if (__VlefExpr_5) {
                        unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst = 1U;
                        while (true) {
                            __VlefExpr_6 = unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst;
                            if ((1U & (~ (IData)(__VlefExpr_6)))) {
                                __VlefExpr_6 = (0U 
                                                != VL_NULL_CHECK(unnamedblk129__DOT__s, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1741)
                                                ->__PVT__m_successors.next(unnamedblk129__DOT__unnamedblk130__DOT__next_s));
                            }
                            if (!(__VlefExpr_6)) break;
                            unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst = 0U;
                            successors.at(unnamedblk129__DOT__unnamedblk130__DOT__next_s) = 1U;
                            ++(vlSymsp->__Vcoverage[16243]);
                        }
                        ++(vlSymsp->__Vcoverage[16244]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16245]);
                    }
                    done = 0U;
                    ++(vlSymsp->__Vcoverage[16246]);
                } else {
                    ++(vlSymsp->__Vcoverage[16247]);
                }
                ++(vlSymsp->__Vcoverage[16248]);
            }
            ++(vlSymsp->__Vcoverage[16249]);
        } else {
            ++(vlSymsp->__Vcoverage[16250]);
        }
        ++(vlSymsp->__Vcoverage[16251]);
        if (!((1U & (~ (IData)(done))))) break;
        ++(vlSymsp->__Vcoverage[16254]);
    }
    succ.renew(successors.size());
    __VlefExpr_7 = (0U != successors.first(unnamedblk131__DOT__s));
    if (__VlefExpr_7) {
        unnamedblk131__DOT__s__Vfirst = 1U;
        while (true) {
            __VlefExpr_8 = unnamedblk131__DOT__s__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_8)))) {
                __VlefExpr_8 = (0U != successors.next(unnamedblk131__DOT__s));
            }
            if (!(__VlefExpr_8)) break;
            unnamedblk131__DOT__s__Vfirst = 0U;
            __Vincrement2 = idx;
            idx = ((IData)(1U) + idx);
            succ.atWrite(__Vincrement2) = unnamedblk131__DOT__s;
            ++(vlSymsp->__Vcoverage[16255]);
        }
        ++(vlSymsp->__Vcoverage[16256]);
    } else {
        ++(vlSymsp->__Vcoverage[16257]);
    }
    if ((1U & (~ (IData)(done)))) {
        ++(vlSymsp->__Vcoverage[16252]);
    }
    if (done) {
        ++(vlSymsp->__Vcoverage[16253]);
    }
    ++(vlSymsp->__Vcoverage[16258]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors_for_successors(Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> &pred_of_succ) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors_for_successors\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_6;
    CData/*0:0*/ __VlefExpr_5;
    IData/*31:0*/ __VlefCall_4__get_phase_type;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk132__DOT__s;
    unnamedblk132__DOT__s = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk132__DOT__unnamedblk133__DOT__pred;
    CData/*0:0*/ unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst;
    unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk134__DOT__pred;
    CData/*0:0*/ unnamedblk134__DOT__pred__Vfirst;
    unnamedblk134__DOT__pred__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk134__DOT__unnamedblk135__DOT__next_pred;
    CData/*0:0*/ unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst;
    unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst = 0;
    CData/*0:0*/ done;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> successors;
    pred_of_succ.clear();
    pred_of_succ.atDefault() = 0;
    done = 0U;
    successors.clear();
    this->__VnoInFunc_get_adjacent_successor_nodes(vlSymsp, successors);
    unnamedblk132__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk132__DOT__s, successors.size())) {
        __VlefExpr_0 = (0U != VL_NULL_CHECK(successors.at(unnamedblk132__DOT__s), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1764)
                        ->__PVT__m_predecessors.first(unnamedblk132__DOT__unnamedblk133__DOT__pred));
        if (__VlefExpr_0) {
            unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != VL_NULL_CHECK(successors.at(unnamedblk132__DOT__s), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1764)
                                    ->__PVT__m_predecessors.next(unnamedblk132__DOT__unnamedblk133__DOT__pred));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst = 0U;
                pred_of_succ.at(unnamedblk132__DOT__unnamedblk133__DOT__pred) = 1U;
                ++(vlSymsp->__Vcoverage[16259]);
            }
            ++(vlSymsp->__Vcoverage[16260]);
        } else {
            ++(vlSymsp->__Vcoverage[16261]);
        }
        unnamedblk132__DOT__s = ((IData)(1U) + unnamedblk132__DOT__s);
        ++(vlSymsp->__Vcoverage[16262]);
    }
    while (true) {
        done = 1U;
        __VlefExpr_2 = (0U != pred_of_succ.first(unnamedblk134__DOT__pred));
        if (__VlefExpr_2) {
            unnamedblk134__DOT__pred__Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk134__DOT__pred__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != pred_of_succ.next(unnamedblk134__DOT__pred));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk134__DOT__pred__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk134__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1772)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_4__get_phase_type);
                if ((1U != __VlefCall_4__get_phase_type)) {
                    pred_of_succ.erase(unnamedblk134__DOT__pred);
                    __VlefExpr_5 = (0U != VL_NULL_CHECK(unnamedblk134__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1774)
                                    ->__PVT__m_predecessors.first(unnamedblk134__DOT__unnamedblk135__DOT__next_pred));
                    if (__VlefExpr_5) {
                        unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst = 1U;
                        while (true) {
                            __VlefExpr_6 = unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst;
                            if ((1U & (~ (IData)(__VlefExpr_6)))) {
                                __VlefExpr_6 = (0U 
                                                != VL_NULL_CHECK(unnamedblk134__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1774)
                                                ->__PVT__m_predecessors.next(unnamedblk134__DOT__unnamedblk135__DOT__next_pred));
                            }
                            if (!(__VlefExpr_6)) break;
                            unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst = 0U;
                            pred_of_succ.at(unnamedblk134__DOT__unnamedblk135__DOT__next_pred) = 1U;
                            ++(vlSymsp->__Vcoverage[16263]);
                        }
                        ++(vlSymsp->__Vcoverage[16264]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16265]);
                    }
                    done = 0U;
                    ++(vlSymsp->__Vcoverage[16266]);
                } else {
                    ++(vlSymsp->__Vcoverage[16267]);
                }
                ++(vlSymsp->__Vcoverage[16268]);
            }
            ++(vlSymsp->__Vcoverage[16269]);
        } else {
            ++(vlSymsp->__Vcoverage[16270]);
        }
        ++(vlSymsp->__Vcoverage[16271]);
        if (!((1U & (~ (IData)(done))))) break;
        ++(vlSymsp->__Vcoverage[16274]);
    }
    pred_of_succ.erase(VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
    if ((1U & (~ (IData)(done)))) {
        ++(vlSymsp->__Vcoverage[16272]);
    }
    if (done) {
        ++(vlSymsp->__Vcoverage[16273]);
    }
    ++(vlSymsp->__Vcoverage[16275]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_wait_for_pred\n"); );
    // Locals
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __Vtask_get_predecessors_for_successors__480__pred_of_succ;
    __Vtask_get_predecessors_for_successors__480__pred_of_succ.atDefault() = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__483__verbosity;
    __Vfunc_uvm_report_enabled__483__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__483__severity;
    __Vfunc_uvm_report_enabled__483__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__484__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__485__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__489__verbosity;
    __Vtask_uvm_report_info__489__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__489__line;
    __Vtask_uvm_report_info__489__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__489__report_enabled_checked;
    __Vtask_uvm_report_info__489__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__490__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__491__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__496__verbosity;
    __Vfunc_uvm_report_enabled__496__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__496__severity;
    __Vfunc_uvm_report_enabled__496__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__497__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__498__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__502__verbosity;
    __Vtask_uvm_report_info__502__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__502__line;
    __Vtask_uvm_report_info__502__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__502__report_enabled_checked;
    __Vtask_uvm_report_info__502__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__503__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__504__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__507__verbosity;
    __Vfunc_uvm_report_enabled__507__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__507__severity;
    __Vfunc_uvm_report_enabled__507__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__508__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__509__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__513__verbosity;
    __Vtask_uvm_report_info__513__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__513__line;
    __Vtask_uvm_report_info__513__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__513__report_enabled_checked;
    __Vtask_uvm_report_info__513__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__514__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__515__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__517__verbosity;
    __Vfunc_uvm_report_enabled__517__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__517__severity;
    __Vfunc_uvm_report_enabled__517__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__518__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__519__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__523__verbosity;
    __Vtask_uvm_report_info__523__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__523__line;
    __Vtask_uvm_report_info__523__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__523__report_enabled_checked;
    __Vtask_uvm_report_info__523__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__524__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__525__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_20__get_inst_id;
    std::string __VlefCall_19__get_full_name;
    IData/*31:0*/ __VlefCall_18__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_17__get_inst_id;
    std::string __VlefCall_16__get_full_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    std::string __VlefCall_14__get_full_name;
    CData/*0:0*/ __VlefExpr_13;
    CData/*0:0*/ __VlefExpr_12;
    IData/*31:0*/ __VlefCall_11__get_inst_id;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__get_inst_id;
    std::string __VlefCall_7__get_name;
    IData/*31:0*/ __VlefCall_6__get_inst_id;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_inst_id;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk136__DOT__sibling;
    CData/*0:0*/ unnamedblk136__DOT__sibling__Vfirst;
    unnamedblk136__DOT__sibling__Vfirst = 0;
    std::string unnamedblk136__DOT__unnamedblk137__DOT__s;
    std::string unnamedblk136__DOT__unnamedblk138__DOT__s;
    std::string unnamedblk139__DOT__s;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk139__DOT__unnamedblk140__DOT__pred;
    CData/*0:0*/ unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst;
    unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst = 0;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> pred_of_succ;
    pred_of_succ.clear();
    pred_of_succ.atDefault() = 0;
    this->__VnoInFunc_get_predecessors_for_successors(vlSymsp, __Vtask_get_predecessors_for_successors__480__pred_of_succ);
    pred_of_succ = __Vtask_get_predecessors_for_successors__480__pred_of_succ;
    __VlefExpr_0 = (0U != pred_of_succ.first(unnamedblk136__DOT__sibling));
    if (__VlefExpr_0) {
        unnamedblk136__DOT__sibling__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk136__DOT__sibling__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != pred_of_succ.next(unnamedblk136__DOT__sibling));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk136__DOT__sibling__Vfirst = 0U;
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                unnamedblk136__DOT__unnamedblk137__DOT__s = ""s;
                VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1802)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1802)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_3__get_inst_id);
                __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name37
                    .at(VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1802)
                        ->__PVT__m_state);
                unnamedblk136__DOT__unnamedblk137__DOT__s 
                    = VL_SFORMATF_N_NX("Waiting for phase '%@' (%0d) to be READY_TO_END. Current state is %@",0,
                                       -1,&(__VlefCall_2__get_name),
                                       32,__VlefCall_3__get_inst_id,
                                       -1,&(__Vtemp_1)) ;
                this->__Vfunc_uvm_report_enabled__483__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                __Vfunc_uvm_report_enabled__483__severity = 0U;
                __Vfunc_uvm_report_enabled__483__verbosity = 0x0000012cU;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__484__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__484__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__485__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__485__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__483__verbosity, (IData)(__Vfunc_uvm_report_enabled__483__severity), this->__Vfunc_uvm_report_enabled__483__id, __VlefCall_4__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_4__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
                    __Vtask_uvm_report_info__489__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__489__context_name = ""s;
                    __Vtask_uvm_report_info__489__line = 0x0000070bU;
                    this->__Vtask_uvm_report_info__489__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__489__verbosity = 0x0000012cU;
                    this->__Vtask_uvm_report_info__489__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__VlefCall_5__get_full_name),
                                                                             32,
                                                                             __VlefCall_6__get_inst_id) , unnamedblk136__DOT__unnamedblk137__DOT__s));
                    this->__Vtask_uvm_report_info__489__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__490__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__490__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__491__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__491__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__489__id, this->__Vtask_uvm_report_info__489__message, __Vtask_uvm_report_info__489__verbosity, this->__Vtask_uvm_report_info__489__filename, __Vtask_uvm_report_info__489__line, this->__Vtask_uvm_report_info__489__context_name, (IData)(__Vtask_uvm_report_info__489__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    ++(vlSymsp->__Vcoverage[16276]);
                } else {
                    ++(vlSymsp->__Vcoverage[16277]);
                }
                ++(vlSymsp->__Vcoverage[16278]);
            } else {
                ++(vlSymsp->__Vcoverage[16279]);
            }
            co_await VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1806)->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000020U, 5U);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                unnamedblk136__DOT__unnamedblk138__DOT__s = ""s;
                VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1811)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1811)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_8__get_inst_id);
                unnamedblk136__DOT__unnamedblk138__DOT__s 
                    = VL_SFORMATF_N_NX("Phase '%@' (%0d) is now READY_TO_END. Releasing phase",0,
                                       -1,&(__VlefCall_7__get_name),
                                       32,__VlefCall_8__get_inst_id) ;
                this->__Vfunc_uvm_report_enabled__496__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                __Vfunc_uvm_report_enabled__496__severity = 0U;
                __Vfunc_uvm_report_enabled__496__verbosity = 0x0000012cU;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__497__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__497__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__498__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__498__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__496__verbosity, (IData)(__Vfunc_uvm_report_enabled__496__severity), this->__Vfunc_uvm_report_enabled__496__id, __VlefCall_9__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_11__get_inst_id);
                    __Vtask_uvm_report_info__502__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__502__context_name = ""s;
                    __Vtask_uvm_report_info__502__line = 0x00000714U;
                    this->__Vtask_uvm_report_info__502__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__502__verbosity = 0x0000012cU;
                    this->__Vtask_uvm_report_info__502__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__VlefCall_10__get_full_name),
                                                                             32,
                                                                             __VlefCall_11__get_inst_id) , unnamedblk136__DOT__unnamedblk138__DOT__s));
                    this->__Vtask_uvm_report_info__502__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__503__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__503__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__504__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__504__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__502__id, this->__Vtask_uvm_report_info__502__message, __Vtask_uvm_report_info__502__verbosity, this->__Vtask_uvm_report_info__502__filename, __Vtask_uvm_report_info__502__line, this->__Vtask_uvm_report_info__502__context_name, (IData)(__Vtask_uvm_report_info__502__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    ++(vlSymsp->__Vcoverage[16280]);
                } else {
                    ++(vlSymsp->__Vcoverage[16281]);
                }
                ++(vlSymsp->__Vcoverage[16282]);
            } else {
                ++(vlSymsp->__Vcoverage[16283]);
            }
            ++(vlSymsp->__Vcoverage[16284]);
        }
        ++(vlSymsp->__Vcoverage[16285]);
    } else {
        ++(vlSymsp->__Vcoverage[16286]);
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        if ((0U != pred_of_succ.size())) {
            unnamedblk139__DOT__s = "( "s;
            __VlefExpr_12 = (0U != pred_of_succ.first(unnamedblk139__DOT__unnamedblk140__DOT__pred));
            if (__VlefExpr_12) {
                unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst = 1U;
                while (true) {
                    __VlefExpr_13 = unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_13)))) {
                        __VlefExpr_13 = (0U != pred_of_succ.next(unnamedblk139__DOT__unnamedblk140__DOT__pred));
                    }
                    if (!(__VlefExpr_13)) break;
                    unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk139__DOT__unnamedblk140__DOT__pred, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1821)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    unnamedblk139__DOT__s = VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk139__DOT__s, __VlefCall_14__get_full_name), " "s);
                    ++(vlSymsp->__Vcoverage[16287]);
                }
                ++(vlSymsp->__Vcoverage[16288]);
            } else {
                ++(vlSymsp->__Vcoverage[16289]);
            }
            unnamedblk139__DOT__s = VL_CONCATN_NNN(unnamedblk139__DOT__s, ")"s);
            this->__Vfunc_uvm_report_enabled__507__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
            __Vfunc_uvm_report_enabled__507__severity = 0U;
            __Vfunc_uvm_report_enabled__507__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__508__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__508__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__509__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__509__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__507__verbosity, (IData)(__Vfunc_uvm_report_enabled__507__severity), this->__Vfunc_uvm_report_enabled__507__id, __VlefCall_15__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_15__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_17__get_inst_id);
                __Vtask_uvm_report_info__513__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__513__context_name = ""s;
                __Vtask_uvm_report_info__513__line = 0x00000720U;
                this->__Vtask_uvm_report_info__513__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__513__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__513__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(__VlefCall_16__get_full_name),
                                                                         32,
                                                                         __VlefCall_17__get_inst_id) , 
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("*** All pred to succ "s, unnamedblk139__DOT__s), " in READY_TO_END state, so ending phase ***"s)));
                this->__Vtask_uvm_report_info__513__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__514__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__514__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__515__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__515__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__513__id, this->__Vtask_uvm_report_info__513__message, __Vtask_uvm_report_info__513__verbosity, this->__Vtask_uvm_report_info__513__filename, __Vtask_uvm_report_info__513__line, this->__Vtask_uvm_report_info__513__context_name, (IData)(__Vtask_uvm_report_info__513__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16290]);
            } else {
                ++(vlSymsp->__Vcoverage[16291]);
            }
            ++(vlSymsp->__Vcoverage[16294]);
        } else {
            this->__Vfunc_uvm_report_enabled__517__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
            __Vfunc_uvm_report_enabled__517__severity = 0U;
            __Vfunc_uvm_report_enabled__517__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__518__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__518__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__519__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__519__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__517__verbosity, (IData)(__Vfunc_uvm_report_enabled__517__severity), this->__Vfunc_uvm_report_enabled__517__id, __VlefCall_18__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_18__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_20__get_inst_id);
                __Vtask_uvm_report_info__523__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__523__context_name = ""s;
                __Vtask_uvm_report_info__523__line = 0x00000724U;
                this->__Vtask_uvm_report_info__523__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__523__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__523__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(__VlefCall_19__get_full_name),
                                                                         32,
                                                                         __VlefCall_20__get_inst_id) , "*** No pred to succ other than myself, so ending phase ***"s));
                this->__Vtask_uvm_report_info__523__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__524__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__524__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__525__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__525__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__523__id, this->__Vtask_uvm_report_info__523__message, __Vtask_uvm_report_info__523__verbosity, this->__Vtask_uvm_report_info__523__filename, __Vtask_uvm_report_info__523__line, this->__Vtask_uvm_report_info__523__context_name, (IData)(__Vtask_uvm_report_info__523__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16292]);
            } else {
                ++(vlSymsp->__Vcoverage[16293]);
            }
            ++(vlSymsp->__Vcoverage[16295]);
        }
        ++(vlSymsp->__Vcoverage[16296]);
    } else {
        ++(vlSymsp->__Vcoverage[16297]);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                            1832);
    ++(vlSymsp->__Vcoverage[16298]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_report_null_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count, std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_report_null_objection\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__529__verbosity;
    __Vfunc_uvm_report_enabled__529__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__529__severity;
    __Vfunc_uvm_report_enabled__529__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__530__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__531__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__535__verbosity;
    __Vtask_uvm_report_error__535__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__535__line;
    __Vtask_uvm_report_error__535__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__535__report_enabled_checked;
    __Vtask_uvm_report_error__535__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__536__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__537__Vfuncout;
    // Body
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_phase_type;
    std::string __VlefCall_0__get_full_name;
    std::string m_action;
    std::string m_addon;
    std::string m_obj_name;
    m_action = ""s;
    m_addon = ""s;
    if ((VlNull{} == obj)) {
        __VlefCall_0__get_full_name = "uvm_top"s;
    } else {
        VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1847)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    }
    m_obj_name = __VlefCall_0__get_full_name;
    if ((("raise"s == action) | ("drop"s == action))) {
        if ((1U != count)) {
            m_action = VL_SFORMATF_N_NX("%@ %0d objections",0,
                                        -1,&(action),
                                        32,count) ;
            ++(vlSymsp->__Vcoverage[16299]);
        } else {
            m_action = VL_SFORMATF_N_NX("%@ an objection",0,
                                        -1,&(action)) ;
            ++(vlSymsp->__Vcoverage[16300]);
        }
        ++(vlSymsp->__Vcoverage[16303]);
    } else if (("get_objection_count"s == action)) {
        m_action = "call get_objection_count"s;
        ++(vlSymsp->__Vcoverage[16301]);
    } else {
        ++(vlSymsp->__Vcoverage[16302]);
    }
    this->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_1__get_phase_type);
    if ((0U == __VlefCall_1__get_phase_type)) {
        m_addon = " (This is a UVM_PHASE_IMP, you have to query the schedule to find the UVM_PHASE_NODE)"s;
        ++(vlSymsp->__Vcoverage[16307]);
    } else {
        ++(vlSymsp->__Vcoverage[16308]);
    }
    this->__Vfunc_uvm_report_enabled__529__id = "UVM/PH/NULL_OBJECTION"s;
    __Vfunc_uvm_report_enabled__529__severity = 2U;
    __Vfunc_uvm_report_enabled__529__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__530__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__530__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__531__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__531__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__529__verbosity, (IData)(__Vfunc_uvm_report_enabled__529__severity), this->__Vfunc_uvm_report_enabled__529__id, __VlefCall_2__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        __Vtask_uvm_report_error__535__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__535__context_name = ""s;
        __Vtask_uvm_report_error__535__line = 0x0000074dU;
        this->__Vtask_uvm_report_error__535__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_error__535__verbosity = 0U;
        this->__Vtask_uvm_report_error__535__message 
            = VL_SFORMATF_N_NX("'%@' attempted to %@ on '%@', however '%@' is not a task-based phase node! %@",0,
                               -1,&(m_obj_name),-1,
                               &(m_action),-1,&(__VlefCall_3__get_name),
                               -1,&(__VlefCall_4__get_name),
                               -1,&(m_addon)) ;
        this->__Vtask_uvm_report_error__535__id = "UVM/PH/NULL_OBJECTION"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__536__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__536__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__537__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__537__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__535__id, this->__Vtask_uvm_report_error__535__message, __Vtask_uvm_report_error__535__verbosity, this->__Vtask_uvm_report_error__535__filename, __Vtask_uvm_report_error__535__line, this->__Vtask_uvm_report_error__535__context_name, (IData)(__Vtask_uvm_report_error__535__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[442]);
        ++(vlSymsp->__Vcoverage[16309]);
    } else {
        ++(vlSymsp->__Vcoverage[16310]);
    }
    if (("drop"s == action)) {
        ++(vlSymsp->__Vcoverage[16304]);
    }
    if (("raise"s == action)) {
        ++(vlSymsp->__Vcoverage[16305]);
    }
    if ((1U & ((~ ("raise"s == action)) & (~ ("drop"s 
                                              == action))))) {
        ++(vlSymsp->__Vcoverage[16306]);
    }
    ++(vlSymsp->__Vcoverage[16311]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_raise_objection\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> phase_done;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1882)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, obj, description, count);
        ++(vlSymsp->__Vcoverage[16312]);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, description, count, "raise"s);
        ++(vlSymsp->__Vcoverage[16313]);
    }
    ++(vlSymsp->__Vcoverage[16314]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_drop_objection\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> phase_done;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1897)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, obj, description, count);
        ++(vlSymsp->__Vcoverage[16315]);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, description, count, "drop"s);
        ++(vlSymsp->__Vcoverage[16316]);
    }
    ++(vlSymsp->__Vcoverage[16317]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection_count(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection_count\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> phase_done;
    get_objection_count__Vfuncrtn = 0U;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1909)->__VnoInFunc_get_objection_count(vlSymsp, obj, get_objection_count__Vfuncrtn);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, ""s, 0U, "get_objection_count"s);
        get_objection_count__Vfuncrtn = 0U;
    }
    ++(vlSymsp->__Vcoverage[16320]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_sync(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_sync\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__549__verbosity;
    __Vfunc_uvm_report_enabled__549__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__549__severity;
    __Vfunc_uvm_report_enabled__549__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__550__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__551__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__555__verbosity;
    __Vfunc_uvm_report_enabled__555__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__555__severity;
    __Vfunc_uvm_report_enabled__555__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__556__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__557__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__563__verbosity;
    __Vfunc_uvm_report_enabled__563__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__563__severity;
    __Vfunc_uvm_report_enabled__563__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__564__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__565__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__568__verbosity;
    __Vfunc_uvm_report_enabled__568__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__568__severity;
    __Vfunc_uvm_report_enabled__568__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__569__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__570__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__is_domain;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, IData/*31:0*/> unnamedblk141__DOT__visited;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> unnamedblk141__DOT__queue;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk141__DOT__unnamedblk142__DOT__node;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ;
    CData/*0:0*/ unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst;
    unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk144__DOT__from_node;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk144__DOT__to_node;
    VlQueue<IData/*31:0*/> unnamedblk144__DOT__found_to;
    VlQueue<IData/*31:0*/> unnamedblk144__DOT__found_from;
    CData/*0:0*/ __VExpr_h414661cb__0;
    __VExpr_h414661cb__0 = 0;
    {
        this->__VnoInFunc_is_domain(vlSymsp, __VExpr_h414661cb__0);
        if (__VExpr_h414661cb__0) {
            if ((VlNull{} == target)) {
                this->__Vfunc_uvm_report_enabled__549__id = "PH_BADSYNC"s;
                __Vfunc_uvm_report_enabled__549__severity = 3U;
                __Vfunc_uvm_report_enabled__549__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__550__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__550__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__551__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__551__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__549__verbosity, (IData)(__Vfunc_uvm_report_enabled__549__severity), this->__Vfunc_uvm_report_enabled__549__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "sync() called with a null target domain"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000786U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[16323]);
                } else {
                    ++(vlSymsp->__Vcoverage[16324]);
                }
                ++(vlSymsp->__Vcoverage[16349]);
            } else {
                VL_NULL_CHECK(target, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1928)->__VnoInFunc_is_domain(vlSymsp, __VlefCall_1__is_domain);
                if (__VlefCall_1__is_domain) {
                    if (((VlNull{} == phase) & (VlNull{} 
                                                != with_phase))) {
                        this->__Vfunc_uvm_report_enabled__555__id = "PH_BADSYNC"s;
                        __Vfunc_uvm_report_enabled__555__severity = 3U;
                        __Vfunc_uvm_report_enabled__555__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__556__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__556__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__557__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__557__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__555__verbosity, (IData)(__Vfunc_uvm_report_enabled__555__severity), this->__Vfunc_uvm_report_enabled__555__id, __VlefCall_2__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[437]);
                        if ((0U != __VlefCall_2__uvm_report_enabled)) {
                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "sync() called with null phase and non-null with phase"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000078cU, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[16327]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16328]);
                        }
                        ++(vlSymsp->__Vcoverage[16347]);
                    } else if ((VlNull{} == phase)) {
                        unnamedblk141__DOT__visited.clear();
                        unnamedblk141__DOT__visited.atDefault() = 0;
                        unnamedblk141__DOT__queue.clear();
                        unnamedblk141__DOT__queue.push_back(
                                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
                        unnamedblk141__DOT__visited.at(
                                                       VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                        while ((0U != unnamedblk141__DOT__queue.size())) {
                            unnamedblk141__DOT__unnamedblk142__DOT__node 
                                = unnamedblk141__DOT__queue.pop_front();
                            if ((VlNull{} != VL_NULL_CHECK(unnamedblk141__DOT__unnamedblk142__DOT__node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1943)
                                 ->__PVT__m_imp)) {
                                this->__VnoInFunc_sync(vlSymsp, target, VL_NULL_CHECK(unnamedblk141__DOT__unnamedblk142__DOT__node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1944)
                                                       ->__PVT__m_imp, VlNull{});
                                ++(vlSymsp->__Vcoverage[16329]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16330]);
                            }
                            __VlefExpr_3 = (0U != VL_NULL_CHECK(unnamedblk141__DOT__unnamedblk142__DOT__node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1946)
                                            ->__PVT__m_successors.first(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ));
                            if (__VlefExpr_3) {
                                unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst = 1U;
                                while (true) {
                                    __VlefExpr_4 = unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst;
                                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                                        __VlefExpr_4 
                                            = (0U != VL_NULL_CHECK(unnamedblk141__DOT__unnamedblk142__DOT__node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1946)
                                               ->__PVT__m_successors.next(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ));
                                    }
                                    if (!(__VlefExpr_4)) break;
                                    unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst = 0U;
                                    if (unnamedblk141__DOT__visited.exists(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ)) {
                                        ++(vlSymsp->__Vcoverage[16332]);
                                    } else {
                                        unnamedblk141__DOT__queue.push_back(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ);
                                        unnamedblk141__DOT__visited.at(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ) = 1U;
                                        ++(vlSymsp->__Vcoverage[16331]);
                                    }
                                    ++(vlSymsp->__Vcoverage[16333]);
                                }
                                ++(vlSymsp->__Vcoverage[16334]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16335]);
                            }
                            ++(vlSymsp->__Vcoverage[16336]);
                        }
                        ++(vlSymsp->__Vcoverage[16345]);
                    } else {
                        unnamedblk144__DOT__found_to.clear();
                        unnamedblk144__DOT__found_to.atDefault() = 0;
                        unnamedblk144__DOT__found_from.clear();
                        unnamedblk144__DOT__found_from.atDefault() = 0;
                        if ((VlNull{} == with_phase)) {
                            with_phase = phase;
                            ++(vlSymsp->__Vcoverage[16337]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16338]);
                        }
                        this->__VnoInFunc_find(vlProcess, vlSymsp, phase, 1U, unnamedblk144__DOT__from_node);
                        VL_NULL_CHECK(target, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1960)->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, unnamedblk144__DOT__to_node);
                        if (((VlNull{} == unnamedblk144__DOT__from_node) 
                             | (VlNull{} == unnamedblk144__DOT__to_node))) {
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[16340]);
                        }
                        unnamedblk144__DOT__found_to 
                            = VL_NULL_CHECK(unnamedblk144__DOT__from_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1962)
                            ->__PVT__m_sync.find_index(
                                                       [&](
                                                           IData/*31:0*/ node__DOT__index, 
                                                           VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> node) -> 
                                                       CData/*31:0*/ {
                                return ((node == unnamedblk144__DOT__to_node));
                            }
                        );
                        unnamedblk144__DOT__found_from 
                            = VL_NULL_CHECK(unnamedblk144__DOT__to_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1963)
                            ->__PVT__m_sync.find_index(
                                                       [&](
                                                           IData/*31:0*/ node__DOT__index, 
                                                           VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> node) -> 
                                                       CData/*31:0*/ {
                                return ((node == unnamedblk144__DOT__from_node));
                            }
                        );
                        if ((0U == unnamedblk144__DOT__found_to.size())) {
                            VL_NULL_CHECK(unnamedblk144__DOT__from_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1964)->__PVT__m_sync.push_back(unnamedblk144__DOT__to_node);
                            ++(vlSymsp->__Vcoverage[16341]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16342]);
                        }
                        if ((0U == unnamedblk144__DOT__found_from.size())) {
                            VL_NULL_CHECK(unnamedblk144__DOT__to_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1965)->__PVT__m_sync.push_back(unnamedblk144__DOT__from_node);
                            ++(vlSymsp->__Vcoverage[16343]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16344]);
                        }
                        ++(vlSymsp->__Vcoverage[16346]);
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__563__id = "PH_BADSYNC"s;
                    __Vfunc_uvm_report_enabled__563__severity = 3U;
                    __Vfunc_uvm_report_enabled__563__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__564__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__564__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__565__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__565__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__563__verbosity, (IData)(__Vfunc_uvm_report_enabled__563__severity), this->__Vfunc_uvm_report_enabled__563__id, __VlefCall_5__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "sync() called with a non-domain phase schedule node as target"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000789U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[16325]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16326]);
                    }
                    ++(vlSymsp->__Vcoverage[16348]);
                }
            }
        } else {
            this->__Vfunc_uvm_report_enabled__568__id = "PH_BADSYNC"s;
            __Vfunc_uvm_report_enabled__568__severity = 3U;
            __Vfunc_uvm_report_enabled__568__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__569__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__569__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__570__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__570__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__568__verbosity, (IData)(__Vfunc_uvm_report_enabled__568__severity), this->__Vfunc_uvm_report_enabled__568__id, __VlefCall_6__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "sync() called from a non-domain phase schedule node"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000783U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16321]);
            } else {
                ++(vlSymsp->__Vcoverage[16322]);
            }
            ++(vlSymsp->__Vcoverage[16350]);
        }
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(__VExpr_h414661cb__0)))) {
        ++(vlSymsp->__Vcoverage[16351]);
    }
    if (__VExpr_h414661cb__0) {
        ++(vlSymsp->__Vcoverage[16352]);
    }
    ++(vlSymsp->__Vcoverage[16353]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_unsync(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_unsync\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__574__verbosity;
    __Vfunc_uvm_report_enabled__574__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__574__severity;
    __Vfunc_uvm_report_enabled__574__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__575__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__576__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__580__verbosity;
    __Vfunc_uvm_report_enabled__580__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__580__severity;
    __Vfunc_uvm_report_enabled__580__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__581__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__582__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__588__verbosity;
    __Vfunc_uvm_report_enabled__588__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__588__severity;
    __Vfunc_uvm_report_enabled__588__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__589__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__590__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__593__verbosity;
    __Vfunc_uvm_report_enabled__593__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__593__severity;
    __Vfunc_uvm_report_enabled__593__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__594__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__595__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__is_domain;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, IData/*31:0*/> unnamedblk145__DOT__visited;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> unnamedblk145__DOT__queue;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk145__DOT__unnamedblk146__DOT__node;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ;
    CData/*0:0*/ unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst;
    unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk148__DOT__from_node;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk148__DOT__to_node;
    VlQueue<IData/*31:0*/> unnamedblk148__DOT__found_to;
    VlQueue<IData/*31:0*/> unnamedblk148__DOT__found_from;
    CData/*0:0*/ __VExpr_h414661cb__0;
    __VExpr_h414661cb__0 = 0;
    {
        this->__VnoInFunc_is_domain(vlSymsp, __VExpr_h414661cb__0);
        if (__VExpr_h414661cb__0) {
            if ((VlNull{} == target)) {
                this->__Vfunc_uvm_report_enabled__574__id = "PH_BADSYNC"s;
                __Vfunc_uvm_report_enabled__574__severity = 3U;
                __Vfunc_uvm_report_enabled__574__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__575__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__575__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__576__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__576__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__574__verbosity, (IData)(__Vfunc_uvm_report_enabled__574__severity), this->__Vfunc_uvm_report_enabled__574__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "unsync() called with a null target domain"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000007bbU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[16356]);
                } else {
                    ++(vlSymsp->__Vcoverage[16357]);
                }
                ++(vlSymsp->__Vcoverage[16382]);
            } else {
                VL_NULL_CHECK(target, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1980)->__VnoInFunc_is_domain(vlSymsp, __VlefCall_1__is_domain);
                if (__VlefCall_1__is_domain) {
                    if (((VlNull{} == phase) & (VlNull{} 
                                                != with_phase))) {
                        this->__Vfunc_uvm_report_enabled__580__id = "PH_BADSYNC"s;
                        __Vfunc_uvm_report_enabled__580__severity = 3U;
                        __Vfunc_uvm_report_enabled__580__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__581__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__581__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__582__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__582__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__580__verbosity, (IData)(__Vfunc_uvm_report_enabled__580__severity), this->__Vfunc_uvm_report_enabled__580__id, __VlefCall_2__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[437]);
                        if ((0U != __VlefCall_2__uvm_report_enabled)) {
                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "unsync() called with null phase and non-null with phase"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000007bfU, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[16360]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16361]);
                        }
                        ++(vlSymsp->__Vcoverage[16380]);
                    } else if ((VlNull{} == phase)) {
                        unnamedblk145__DOT__visited.clear();
                        unnamedblk145__DOT__visited.atDefault() = 0;
                        unnamedblk145__DOT__queue.clear();
                        unnamedblk145__DOT__queue.push_back(
                                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
                        unnamedblk145__DOT__visited.at(
                                                       VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                        while ((0U != unnamedblk145__DOT__queue.size())) {
                            unnamedblk145__DOT__unnamedblk146__DOT__node 
                                = unnamedblk145__DOT__queue.pop_front();
                            if ((VlNull{} != VL_NULL_CHECK(unnamedblk145__DOT__unnamedblk146__DOT__node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1993)
                                 ->__PVT__m_imp)) {
                                this->__VnoInFunc_unsync(vlSymsp, target, VL_NULL_CHECK(unnamedblk145__DOT__unnamedblk146__DOT__node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1993)
                                                         ->__PVT__m_imp, VlNull{});
                                ++(vlSymsp->__Vcoverage[16362]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16363]);
                            }
                            __VlefExpr_3 = (0U != VL_NULL_CHECK(unnamedblk145__DOT__unnamedblk146__DOT__node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1994)
                                            ->__PVT__m_successors.first(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ));
                            if (__VlefExpr_3) {
                                unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst = 1U;
                                while (true) {
                                    __VlefExpr_4 = unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst;
                                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                                        __VlefExpr_4 
                                            = (0U != VL_NULL_CHECK(unnamedblk145__DOT__unnamedblk146__DOT__node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 1994)
                                               ->__PVT__m_successors.next(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ));
                                    }
                                    if (!(__VlefExpr_4)) break;
                                    unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst = 0U;
                                    if (unnamedblk145__DOT__visited.exists(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ)) {
                                        ++(vlSymsp->__Vcoverage[16365]);
                                    } else {
                                        unnamedblk145__DOT__queue.push_back(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ);
                                        unnamedblk145__DOT__visited.at(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ) = 1U;
                                        ++(vlSymsp->__Vcoverage[16364]);
                                    }
                                    ++(vlSymsp->__Vcoverage[16366]);
                                }
                                ++(vlSymsp->__Vcoverage[16367]);
                            } else {
                                ++(vlSymsp->__Vcoverage[16368]);
                            }
                            ++(vlSymsp->__Vcoverage[16369]);
                        }
                        ++(vlSymsp->__Vcoverage[16378]);
                    } else {
                        unnamedblk148__DOT__found_to.clear();
                        unnamedblk148__DOT__found_to.atDefault() = 0;
                        unnamedblk148__DOT__found_from.clear();
                        unnamedblk148__DOT__found_from.atDefault() = 0;
                        if ((VlNull{} == with_phase)) {
                            with_phase = phase;
                            ++(vlSymsp->__Vcoverage[16370]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16371]);
                        }
                        this->__VnoInFunc_find(vlProcess, vlSymsp, phase, 1U, unnamedblk148__DOT__from_node);
                        VL_NULL_CHECK(target, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2008)->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, unnamedblk148__DOT__to_node);
                        if (((VlNull{} == unnamedblk148__DOT__from_node) 
                             | (VlNull{} == unnamedblk148__DOT__to_node))) {
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[16373]);
                        }
                        unnamedblk148__DOT__found_to 
                            = VL_NULL_CHECK(unnamedblk148__DOT__from_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2010)
                            ->__PVT__m_sync.find_index(
                                                       [&](
                                                           IData/*31:0*/ node__DOT__index, 
                                                           VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> node) -> 
                                                       CData/*31:0*/ {
                                return ((node == unnamedblk148__DOT__to_node));
                            }
                        );
                        unnamedblk148__DOT__found_from 
                            = VL_NULL_CHECK(unnamedblk148__DOT__to_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2011)
                            ->__PVT__m_sync.find_index(
                                                       [&](
                                                           IData/*31:0*/ node__DOT__index, 
                                                           VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> node) -> 
                                                       CData/*31:0*/ {
                                return ((node == unnamedblk148__DOT__from_node));
                            }
                        );
                        if ((0U != unnamedblk148__DOT__found_to.size())) {
                            VL_NULL_CHECK(unnamedblk148__DOT__from_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2012)->__PVT__m_sync.erase(unnamedblk148__DOT__found_to.at(0U));
                            ++(vlSymsp->__Vcoverage[16374]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16375]);
                        }
                        if ((0U != unnamedblk148__DOT__found_from.size())) {
                            VL_NULL_CHECK(unnamedblk148__DOT__to_node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2013)->__PVT__m_sync.erase(unnamedblk148__DOT__found_from.at(0U));
                            ++(vlSymsp->__Vcoverage[16376]);
                        } else {
                            ++(vlSymsp->__Vcoverage[16377]);
                        }
                        ++(vlSymsp->__Vcoverage[16379]);
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__588__id = "PH_BADSYNC"s;
                    __Vfunc_uvm_report_enabled__588__severity = 3U;
                    __Vfunc_uvm_report_enabled__588__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__589__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__589__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__590__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__590__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__588__verbosity, (IData)(__Vfunc_uvm_report_enabled__588__severity), this->__Vfunc_uvm_report_enabled__588__id, __VlefCall_5__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "unsync() called with a non-domain phase schedule node as target"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000007bdU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[16358]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16359]);
                    }
                    ++(vlSymsp->__Vcoverage[16381]);
                }
            }
        } else {
            this->__Vfunc_uvm_report_enabled__593__id = "PH_BADSYNC"s;
            __Vfunc_uvm_report_enabled__593__severity = 3U;
            __Vfunc_uvm_report_enabled__593__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__594__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__594__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__595__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__595__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__593__verbosity, (IData)(__Vfunc_uvm_report_enabled__593__severity), this->__Vfunc_uvm_report_enabled__593__id, __VlefCall_6__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "unsync() called from a non-domain phase schedule node"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000007b9U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16354]);
            } else {
                ++(vlSymsp->__Vcoverage[16355]);
            }
            ++(vlSymsp->__Vcoverage[16383]);
        }
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(__VExpr_h414661cb__0)))) {
        ++(vlSymsp->__Vcoverage[16384]);
    }
    if (__VExpr_h414661cb__0) {
        ++(vlSymsp->__Vcoverage[16385]);
    }
    ++(vlSymsp->__Vcoverage[16386]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ state, IData/*31:0*/ op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_state\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h06178b8d__0;
    __Vtrigprevexpr_h06178b8d__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h05ea9a17__0;
    __Vtrigprevexpr_h05ea9a17__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0b5e2fe2__0;
    __Vtrigprevexpr_h0b5e2fe2__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0b4e1892__0;
    __Vtrigprevexpr_h0b4e1892__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc7725507__0;
    __Vtrigprevexpr_hc7725507__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc44da9a3__0;
    __Vtrigprevexpr_hc44da9a3__0 = 0;
    // Body
    VL_KEEP_THIS;
    if ((3U == op)) {
        if ((0U == (state & this->__PVT__m_state))) {
            CData/*0:0*/ __VdynTrigger_hc2317f4f__0;
            __VdynTrigger_hc2317f4f__0 = 0;
            __VdynTrigger_hc2317f4f__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hc2317f4f__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 != (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2023);
                __Vtrigprevexpr_hc44da9a3__0 = (0U 
                                                != 
                                                (state 
                                                 & this->__PVT__m_state));
                __VdynTrigger_hc2317f4f__0 = __Vtrigprevexpr_hc44da9a3__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc2317f4f__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 != (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2023);
        }
        ++(vlSymsp->__Vcoverage[16387]);
    } else if ((2U == op)) {
        if ((0U != (state & this->__PVT__m_state))) {
            CData/*0:0*/ __VdynTrigger_hbd7d208b__0;
            __VdynTrigger_hbd7d208b__0 = 0;
            __VdynTrigger_hbd7d208b__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hbd7d208b__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 == (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2024);
                __Vtrigprevexpr_hc7725507__0 = (0U 
                                                == 
                                                (state 
                                                 & this->__PVT__m_state));
                __VdynTrigger_hbd7d208b__0 = __Vtrigprevexpr_hc7725507__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbd7d208b__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 == (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2024);
        }
        ++(vlSymsp->__Vcoverage[16388]);
    } else if ((0U == op)) {
        if (VL_GTES_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_h3930ed1a__0;
            __VdynTrigger_h3930ed1a__0 = 0;
            __VdynTrigger_h3930ed1a__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h3930ed1a__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state < uvm_pkg::uvm_phase.state))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2025);
                __Vtrigprevexpr_h0b4e1892__0 = VL_LTS_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h3930ed1a__0 = __Vtrigprevexpr_h0b4e1892__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3930ed1a__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state < uvm_pkg::uvm_phase.state))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2025);
        }
        ++(vlSymsp->__Vcoverage[16389]);
    } else if ((1U == op)) {
        if (VL_GTS_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_h39a1056a__0;
            __VdynTrigger_h39a1056a__0 = 0;
            __VdynTrigger_h39a1056a__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h39a1056a__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state <= uvm_pkg::uvm_phase.state))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2026);
                __Vtrigprevexpr_h0b5e2fe2__0 = VL_LTES_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h39a1056a__0 = __Vtrigprevexpr_h0b5e2fe2__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h39a1056a__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state <= uvm_pkg::uvm_phase.state))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2026);
        }
        ++(vlSymsp->__Vcoverage[16390]);
    } else if ((4U == op)) {
        if (VL_LTES_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_h00146b9b__0;
            __VdynTrigger_h00146b9b__0 = 0;
            __VdynTrigger_h00146b9b__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h00146b9b__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state > uvm_pkg::uvm_phase.state))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2027);
                __Vtrigprevexpr_h05ea9a17__0 = VL_GTS_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h00146b9b__0 = __Vtrigprevexpr_h05ea9a17__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h00146b9b__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state > uvm_pkg::uvm_phase.state))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2027);
        }
        ++(vlSymsp->__Vcoverage[16391]);
    } else if ((5U == op)) {
        if (VL_LTS_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_h00585a35__0;
            __VdynTrigger_h00585a35__0 = 0;
            __VdynTrigger_h00585a35__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h00585a35__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state >= uvm_pkg::uvm_phase.state))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2028);
                __Vtrigprevexpr_h06178b8d__0 = VL_GTES_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h00585a35__0 = __Vtrigprevexpr_h06178b8d__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h00585a35__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state >= uvm_pkg::uvm_phase.state))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2028);
        }
        ++(vlSymsp->__Vcoverage[16392]);
    }
    ++(vlSymsp->__Vcoverage[16393]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_jump_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_jump_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__598__verbosity;
    __Vfunc_uvm_report_enabled__598__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__598__severity;
    __Vfunc_uvm_report_enabled__598__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__599__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__600__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__603__verbosity;
    __Vtask_uvm_report_error__603__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__603__line;
    __Vtask_uvm_report_error__603__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__603__report_enabled_checked;
    __Vtask_uvm_report_error__603__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__604__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__605__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__611__verbosity;
    __Vfunc_uvm_report_enabled__611__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__611__severity;
    __Vfunc_uvm_report_enabled__611__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__612__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__613__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__616__verbosity;
    __Vfunc_uvm_report_enabled__616__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__616__severity;
    __Vfunc_uvm_report_enabled__616__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__617__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__618__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__621__verbosity;
    __Vtask_uvm_report_info__621__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__621__line;
    __Vtask_uvm_report_info__621__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__621__report_enabled_checked;
    __Vtask_uvm_report_info__621__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__622__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__623__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__625__verbosity;
    __Vfunc_uvm_report_enabled__625__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__625__severity;
    __Vfunc_uvm_report_enabled__625__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__626__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__627__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__630__verbosity;
    __Vtask_uvm_report_info__630__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__630__line;
    __Vtask_uvm_report_info__630__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__630__report_enabled_checked;
    __Vtask_uvm_report_info__630__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__631__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__632__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_9__get_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    std::string __VlefCall_7__get_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    std::string __VlefExpr_2;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string unnamedblk149__DOT__msg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> d;
    if ((VL_GTS_III(32, 8U, this->__PVT__m_state) | 
         VL_LTS_III(32, 0x00000040U, this->__PVT__m_state))) {
        this->__Vfunc_uvm_report_enabled__598__id = "JMPPHIDL"s;
        __Vfunc_uvm_report_enabled__598__severity = 2U;
        __Vfunc_uvm_report_enabled__598__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__599__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__599__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__600__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__600__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__598__verbosity, (IData)(__Vfunc_uvm_report_enabled__598__severity), this->__Vfunc_uvm_report_enabled__598__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __VlefExpr_2 = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN("Attempting to jump from phase \""s, __VlefCall_1__get_name), "\" which is not currently active (current state is "s), Vtb_rng___024unit::__Venumtab_enum_name37
                                                         .at(this->__PVT__m_state));
                __Vtask_uvm_report_error__603__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__603__context_name = ""s;
                __Vtask_uvm_report_error__603__line = 0x00000803U;
                this->__Vtask_uvm_report_error__603__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_error__603__verbosity = 0U;
                this->__Vtask_uvm_report_error__603__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(__VlefExpr_2, "). The jump will not happen until the phase becomes "s), "active."s));
                this->__Vtask_uvm_report_error__603__id = "JMPPHIDL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__604__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__604__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__605__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__605__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__603__id, this->__Vtask_uvm_report_error__603__message, __Vtask_uvm_report_error__603__verbosity, this->__Vtask_uvm_report_error__603__filename, __Vtask_uvm_report_error__603__line, this->__Vtask_uvm_report_error__603__context_name, (IData)(__Vtask_uvm_report_error__603__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[16394]);
            } else {
                ++(vlSymsp->__Vcoverage[16395]);
            }
            ++(vlSymsp->__Vcoverage[16396]);
        } else {
            ++(vlSymsp->__Vcoverage[16397]);
        }
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, 0U, VlNull{}, d);
        if ((VlNull{} == d)) {
            this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, 0U, VlNull{}, d);
            if ((VlNull{} == d)) {
                unnamedblk149__DOT__msg = ""s;
                VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2076)
                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                VL_SFORMAT_NX(64,unnamedblk149__DOT__msg
                              ,"185383141835722405686727906483606959610028223926251639965095180328105454202181021798014576523050255831739430717755357314293325527416269751734457336470388580408199567827659786885213904295820986423154265006128633119184827052696120418375767289254633306786801057639318606312792243541311889362526786697607599250599226180508548699624233443935867961249400945172205084085794463694864294299872742311917735567633304964265243749%@%@",0,
                              -1,&(__VlefCall_3__get_name),
                              -1,&(__VlefCall_4__get_name));
                this->__Vfunc_uvm_report_enabled__611__id = "PH_BADJUMP"s;
                __Vfunc_uvm_report_enabled__611__severity = 3U;
                __Vfunc_uvm_report_enabled__611__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__612__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__612__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__613__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__613__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__611__verbosity, (IData)(__Vfunc_uvm_report_enabled__611__severity), this->__Vfunc_uvm_report_enabled__611__id, __VlefCall_5__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_5__uvm_report_enabled)) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADJUMP"s, unnamedblk149__DOT__msg, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000081dU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[16401]);
                } else {
                    ++(vlSymsp->__Vcoverage[16402]);
                }
                ++(vlSymsp->__Vcoverage[16405]);
            } else {
                this->__PVT__m_jump_fwd = 1U;
                this->__Vfunc_uvm_report_enabled__616__id = "PH_JUMPF"s;
                __Vfunc_uvm_report_enabled__616__severity = 0U;
                __Vfunc_uvm_report_enabled__616__verbosity = 0x000001f4U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__617__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__617__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__618__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__618__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__616__verbosity, (IData)(__Vfunc_uvm_report_enabled__616__severity), this->__Vfunc_uvm_report_enabled__616__id, __VlefCall_6__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_6__uvm_report_enabled)) {
                    VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2082)
                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                    __Vtask_uvm_report_info__621__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__621__context_name = ""s;
                    __Vtask_uvm_report_info__621__line = 0x00000822U;
                    this->__Vtask_uvm_report_info__621__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__621__verbosity = 0x000001f4U;
                    this->__Vtask_uvm_report_info__621__message 
                        = VL_SFORMATF_N_NX("jumping forward to phase %@",0,
                                           -1,&(__VlefCall_7__get_name)) ;
                    this->__Vtask_uvm_report_info__621__id = "PH_JUMPF"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__622__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__622__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__623__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__623__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__621__id, this->__Vtask_uvm_report_info__621__message, __Vtask_uvm_report_info__621__verbosity, this->__Vtask_uvm_report_info__621__filename, __Vtask_uvm_report_info__621__line, this->__Vtask_uvm_report_info__621__context_name, (IData)(__Vtask_uvm_report_info__621__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    ++(vlSymsp->__Vcoverage[16403]);
                } else {
                    ++(vlSymsp->__Vcoverage[16404]);
                }
                ++(vlSymsp->__Vcoverage[16406]);
            }
            ++(vlSymsp->__Vcoverage[16409]);
        } else {
            this->__PVT__m_jump_bkwd = 1U;
            this->__Vfunc_uvm_report_enabled__625__id = "PH_JUMPB"s;
            __Vfunc_uvm_report_enabled__625__severity = 0U;
            __Vfunc_uvm_report_enabled__625__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__626__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__626__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__627__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__627__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__625__verbosity, (IData)(__Vfunc_uvm_report_enabled__625__severity), this->__Vfunc_uvm_report_enabled__625__id, __VlefCall_8__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2088)
                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                __Vtask_uvm_report_info__630__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__630__context_name = ""s;
                __Vtask_uvm_report_info__630__line = 0x00000828U;
                this->__Vtask_uvm_report_info__630__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__630__verbosity = 0x000001f4U;
                this->__Vtask_uvm_report_info__630__message 
                    = VL_SFORMATF_N_NX("jumping backward to phase %@",0,
                                       -1,&(__VlefCall_9__get_name)) ;
                this->__Vtask_uvm_report_info__630__id = "PH_JUMPB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__631__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__631__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__632__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__632__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__630__id, this->__Vtask_uvm_report_info__630__message, __Vtask_uvm_report_info__630__verbosity, this->__Vtask_uvm_report_info__630__filename, __Vtask_uvm_report_info__630__line, this->__Vtask_uvm_report_info__630__context_name, (IData)(__Vtask_uvm_report_info__630__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16407]);
            } else {
                ++(vlSymsp->__Vcoverage[16408]);
            }
            ++(vlSymsp->__Vcoverage[16410]);
        }
        this->__PVT__m_jump_phase = d;
        if (VL_LTS_III(32, 0x00000040U, this->__PVT__m_state)) {
            ++(vlSymsp->__Vcoverage[16398]);
        }
        if (VL_GTS_III(32, 8U, this->__PVT__m_state)) {
            ++(vlSymsp->__Vcoverage[16399]);
        }
        if ((VL_LTES_III(32, 8U, this->__PVT__m_state) 
             & VL_GTES_III(32, 0x00000040U, this->__PVT__m_state))) {
            ++(vlSymsp->__Vcoverage[16400]);
        }
        ++(vlSymsp->__Vcoverage[16411]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_end_prematurely(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_end_prematurely\n"); );
        // Body
        this->__PVT__m_premature_end = 1U;
        ++(vlSymsp->__Vcoverage[16412]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_jump(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_jump\n"); );
        // Body
        this->__VnoInFunc_set_jump_phase(vlSymsp, phase);
        this->__VnoInFunc_end_prematurely(vlSymsp);
        ++(vlSymsp->__Vcoverage[16413]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_jump_target(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_jump_target\n"); );
        // Body
        get_jump_target__Vfuncrtn = this->__PVT__m_jump_phase;
        ++(vlSymsp->__Vcoverage[16417]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ state) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear\n"); );
        // Body
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> phase_done;
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
        this->__PVT__m_state = state;
        this->__PVT__m_phase_proc = VlNull{};
        if ((VlNull{} != phase_done)) {
            VL_NULL_CHECK(phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2141)
                ->__VnoInFunc_clear(vlProcess, vlSymsp, 
                                    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
            ++(vlSymsp->__Vcoverage[16418]);
        } else {
            ++(vlSymsp->__Vcoverage[16419]);
        }
        ++(vlSymsp->__Vcoverage[16420]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear_successors(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ state, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> end_state) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear_successors\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk150__DOT__succ;
        CData/*0:0*/ unnamedblk150__DOT__succ__Vfirst;
        unnamedblk150__DOT__succ__Vfirst = 0;
        {
            if ((VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this} 
                 == end_state)) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[16422]);
            }
            this->__VnoInFunc_clear(vlProcess, vlSymsp, state);
            __VlefExpr_0 = (0U != this->__PVT__m_successors.first(unnamedblk150__DOT__succ));
            if (__VlefExpr_0) {
                unnamedblk150__DOT__succ__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk150__DOT__succ__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_successors.next(unnamedblk150__DOT__succ));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk150__DOT__succ__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk150__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2157)
                ->__VnoInFunc_clear_successors(vlProcess, vlSymsp, state, end_state);
                    ++(vlSymsp->__Vcoverage[16423]);
                }
                ++(vlSymsp->__Vcoverage[16424]);
            } else {
                ++(vlSymsp->__Vcoverage[16425]);
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[16426]);
    }

    VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_self_and_siblings_to_drop\n"); );
        // Locals
        VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __Vtask_get_predecessors_for_successors__642__pred_of_succ;
        __Vtask_get_predecessors_for_successors__642__pred_of_succ.atDefault() = 0;
        // Body
        VL_KEEP_THIS;
        CData/*0:0*/ __VlefLogAnd_5;
        IData/*31:0*/ __VlefCall_4__get_objection_total;
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefLogAnd_1;
        IData/*31:0*/ __VlefCall_0__get_objection_total;
        IData/*31:0*/ unnamedblk151__DOT__i;
        unnamedblk151__DOT__i = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> unnamedblk152__DOT__phase_done;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk152__DOT__unnamedblk153__DOT__sib;
        CData/*0:0*/ unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst;
        unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done;
        CData/*0:0*/ need_to_check_all;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
        VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> siblings;
        need_to_check_all = 1U;
        siblings.clear();
        siblings.atDefault() = 0;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2176)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        this->__VnoInFunc_get_predecessors_for_successors(vlSymsp, __Vtask_get_predecessors_for_successors__642__pred_of_succ);
        siblings = __Vtask_get_predecessors_for_successors__642__pred_of_succ;
        unnamedblk151__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk151__DOT__i, this->__PVT__m_sync.size())) {
            siblings.at(this->__PVT__m_sync.at(unnamedblk151__DOT__i)) = 1U;
            unnamedblk151__DOT__i = ((IData)(1U) + unnamedblk151__DOT__i);
            ++(vlSymsp->__Vcoverage[16427]);
        }
        while (need_to_check_all) {
            this->__VnoInFunc_get_objection(vlProcess, vlSymsp, unnamedblk152__DOT__phase_done);
            need_to_check_all = 0U;
            __VlefLogAnd_1 = (VlNull{} != unnamedblk152__DOT__phase_done);
            if (__VlefLogAnd_1) {
                VL_NULL_CHECK(unnamedblk152__DOT__phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2189)
                ->__VnoInFunc_get_objection_total(vlSymsp, top, __VlefCall_0__get_objection_total);
                __VlefLogAnd_1 = (0U != __VlefCall_0__get_objection_total);
            }
            if (__VlefLogAnd_1) {
                this->__PVT__m_state = 0x00000010U;
                co_await VL_NULL_CHECK(unnamedblk152__DOT__phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2191)
                ->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, top);
                need_to_check_all = 1U;
                ++(vlSymsp->__Vcoverage[16428]);
            } else {
                ++(vlSymsp->__Vcoverage[16429]);
            }
            __VlefExpr_2 = (0U != siblings.first(unnamedblk152__DOT__unnamedblk153__DOT__sib));
            if (__VlefExpr_2) {
                unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst = 1U;
                while (true) {
                    __VlefExpr_3 = unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_3)))) {
                        __VlefExpr_3 = (0U != siblings.next(unnamedblk152__DOT__unnamedblk153__DOT__sib));
                    }
                    if (!(__VlefExpr_3)) break;
                    unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__sib, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2198)
                ->__VnoInFunc_get_objection(vlProcess, vlSymsp, unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done);
                    co_await VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__sib, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2199)
                ->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000010U, 5U);
                    __VlefLogAnd_5 = (VlNull{} != unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done);
                    if (__VlefLogAnd_5) {
                        VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2200)
                ->__VnoInFunc_get_objection_total(vlSymsp, top, __VlefCall_4__get_objection_total);
                        __VlefLogAnd_5 = (0U != __VlefCall_4__get_objection_total);
                    }
                    if (__VlefLogAnd_5) {
                        this->__PVT__m_state = 0x00000010U;
                        co_await VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2202)
                ->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, top);
                        need_to_check_all = 1U;
                        ++(vlSymsp->__Vcoverage[16430]);
                    } else {
                        ++(vlSymsp->__Vcoverage[16431]);
                    }
                    ++(vlSymsp->__Vcoverage[16432]);
                }
                ++(vlSymsp->__Vcoverage[16433]);
            } else {
                ++(vlSymsp->__Vcoverage[16434]);
            }
            ++(vlSymsp->__Vcoverage[16435]);
        }
        ++(vlSymsp->__Vcoverage[16436]);
        co_return;
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__650__verbosity;
        __Vfunc_uvm_report_enabled__650__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__650__severity;
        __Vfunc_uvm_report_enabled__650__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__651__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__652__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__655__verbosity;
        __Vtask_uvm_report_info__655__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__655__line;
        __Vtask_uvm_report_info__655__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__655__report_enabled_checked;
        __Vtask_uvm_report_info__655__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__656__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__657__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_1__get_name;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__650__id = "PH_KILL"s;
        __Vfunc_uvm_report_enabled__650__severity = 0U;
        __Vfunc_uvm_report_enabled__650__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__651__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__651__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__652__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__652__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__650__verbosity, (IData)(__Vfunc_uvm_report_enabled__650__severity), this->__Vfunc_uvm_report_enabled__650__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_info__655__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__655__context_name = ""s;
            __Vtask_uvm_report_info__655__line = 0x000008a6U;
            this->__Vtask_uvm_report_info__655__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__655__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__655__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("killing phase '"s, __VlefCall_1__get_name), "'"s));
            this->__Vtask_uvm_report_info__655__id = "PH_KILL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__656__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__656__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__657__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__657__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__655__id, this->__Vtask_uvm_report_info__655__message, __Vtask_uvm_report_info__655__verbosity, this->__Vtask_uvm_report_info__655__filename, __Vtask_uvm_report_info__655__line, this->__Vtask_uvm_report_info__655__context_name, (IData)(__Vtask_uvm_report_info__655__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[16437]);
        } else {
            ++(vlSymsp->__Vcoverage[16438]);
        }
        if ((VlNull{} != this->__PVT__m_phase_proc)) {
            VL_NULL_CHECK(this->__PVT__m_phase_proc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2217)
                ->__VnoInFunc_kill(vlSymsp);
            this->__PVT__m_phase_proc = VlNull{};
            ++(vlSymsp->__Vcoverage[16439]);
        } else {
            ++(vlSymsp->__Vcoverage[16440]);
        }
        ++(vlSymsp->__Vcoverage[16441]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill_successors(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill_successors\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk155__DOT__succ;
        CData/*0:0*/ unnamedblk155__DOT__succ__Vfirst;
        unnamedblk155__DOT__succ__Vfirst = 0;
        __VlefExpr_0 = (0U != this->__PVT__m_successors.first(unnamedblk155__DOT__succ));
        if (__VlefExpr_0) {
            unnamedblk155__DOT__succ__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk155__DOT__succ__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__m_successors.next(unnamedblk155__DOT__succ));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk155__DOT__succ__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk155__DOT__succ, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2231)
                ->__VnoInFunc_kill_successors(vlSymsp);
                ++(vlSymsp->__Vcoverage[16442]);
            }
            ++(vlSymsp->__Vcoverage[16443]);
        } else {
            ++(vlSymsp->__Vcoverage[16444]);
        }
        this->__VnoInFunc_kill(vlSymsp);
        ++(vlSymsp->__Vcoverage[16445]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_terminate_phase(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_terminate_phase\n"); );
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> phase_done;
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
        if ((VlNull{} != phase_done)) {
            VL_NULL_CHECK(phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2275)
                ->__VnoInFunc_clear(vlProcess, vlSymsp, 
                                    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>{this});
            ++(vlSymsp->__Vcoverage[16448]);
        } else {
            ++(vlSymsp->__Vcoverage[16449]);
        }
        ++(vlSymsp->__Vcoverage[16450]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_termination_state(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_termination_state\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__667__verbosity;
        __Vfunc_uvm_report_enabled__667__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__667__severity;
        __Vfunc_uvm_report_enabled__667__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__668__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__669__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__673__verbosity;
        __Vtask_uvm_report_info__673__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__673__line;
        __Vtask_uvm_report_info__673__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__673__report_enabled_checked;
        __Vtask_uvm_report_info__673__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__674__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__675__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__677__verbosity;
        __Vfunc_uvm_report_enabled__677__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__677__severity;
        __Vfunc_uvm_report_enabled__677__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__678__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__679__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__682__verbosity;
        __Vtask_uvm_report_info__682__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__682__line;
        __Vtask_uvm_report_info__682__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__682__report_enabled_checked;
        __Vtask_uvm_report_info__682__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__683__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__684__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_4__get_name;
        IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_2__get_objection_total;
        std::string __VlefCall_1__get_name;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> phase_done;
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, phase_done);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2288)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        if ((VlNull{} != phase_done)) {
            this->__Vfunc_uvm_report_enabled__667__id = "PH_TERMSTATE"s;
            __Vfunc_uvm_report_enabled__667__severity = 0U;
            __Vfunc_uvm_report_enabled__667__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__668__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__668__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__669__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__669__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__667__verbosity, (IData)(__Vfunc_uvm_report_enabled__667__severity), this->__Vfunc_uvm_report_enabled__667__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                VL_NULL_CHECK(phase_done, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh", 2293)
                ->__VnoInFunc_get_objection_total(vlSymsp, top, __VlefCall_2__get_objection_total);
                __Vtask_uvm_report_info__673__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__673__context_name = ""s;
                __Vtask_uvm_report_info__673__line = 0x000008f5U;
                this->__Vtask_uvm_report_info__673__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__673__verbosity = 0x000001f4U;
                this->__Vtask_uvm_report_info__673__message 
                    = VL_SFORMATF_N_NX("phase %@ outstanding objections = %0d",0,
                                       -1,&(__VlefCall_1__get_name),
                                       32,__VlefCall_2__get_objection_total) ;
                this->__Vtask_uvm_report_info__673__id = "PH_TERMSTATE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__674__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__674__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__675__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__675__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__673__id, this->__Vtask_uvm_report_info__673__message, __Vtask_uvm_report_info__673__verbosity, this->__Vtask_uvm_report_info__673__filename, __Vtask_uvm_report_info__673__line, this->__Vtask_uvm_report_info__673__context_name, (IData)(__Vtask_uvm_report_info__673__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16451]);
            } else {
                ++(vlSymsp->__Vcoverage[16452]);
            }
            ++(vlSymsp->__Vcoverage[16455]);
        } else {
            this->__Vfunc_uvm_report_enabled__677__id = "PH_TERMSTATE"s;
            __Vfunc_uvm_report_enabled__677__severity = 0U;
            __Vfunc_uvm_report_enabled__677__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__678__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__678__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__679__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__679__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__677__verbosity, (IData)(__Vfunc_uvm_report_enabled__677__severity), this->__Vfunc_uvm_report_enabled__677__id, __VlefCall_3__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_info__682__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__682__context_name = ""s;
                __Vtask_uvm_report_info__682__line = 0x000008fbU;
                this->__Vtask_uvm_report_info__682__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__682__verbosity = 0x000001f4U;
                this->__Vtask_uvm_report_info__682__message 
                    = VL_SFORMATF_N_NX("phase %@ has no outstanding objections",0,
                                       -1,&(__VlefCall_4__get_name)) ;
                this->__Vtask_uvm_report_info__682__id = "PH_TERMSTATE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__683__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__683__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__684__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__684__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__682__id, this->__Vtask_uvm_report_info__682__message, __Vtask_uvm_report_info__682__verbosity, this->__Vtask_uvm_report_info__682__filename, __Vtask_uvm_report_info__682__line, this->__Vtask_uvm_report_info__682__context_name, (IData)(__Vtask_uvm_report_info__682__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[16453]);
            } else {
                ++(vlSymsp->__Vcoverage[16454]);
            }
            ++(vlSymsp->__Vcoverage[16456]);
        }
        ++(vlSymsp->__Vcoverage[16457]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc_randomize\n"); );
        // Body
        IData/*31:0*/ __VlefCall_0____VBasicRand;
        Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & __VlefCall_0____VBasicRand);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc___Vsetup_constraints\n"); );
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::__VnoInFunc___VBasicRand\n"); );
        // Body
        __VBasicRand__Vfuncrtn = 1U;
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_phase::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
        __PVT__m_phase_type = 0;
        __PVT__m_state = 0;
        __PVT__m_run_count = 0;
        __PVT__m_num_procs_not_yet_returned = 0;
        __PVT__m_predecessors.atDefault() = 0;
        __PVT__m_successors.atDefault() = 0;
        __PVT__m_ready_to_end_count = 0;
        __PVT__m_jump_bkwd = 0;
        __PVT__m_jump_fwd = 0;
        __PVT__m_premature_end = 0;
    }

    Vtb_rng_uvm_pkg__03a__03auvm_phase::~Vtb_rng_uvm_pkg__03a__03auvm_phase() {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::~\n"); );
    }

    std::string Vtb_rng_uvm_pkg__03a__03auvm_phase::to_string() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::to_string\n"); );
        // Body
        return ("'{"s + to_string_middle() + "}");
    }

    std::string Vtb_rng_uvm_pkg__03a__03auvm_phase::to_string_middle() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_phase::to_string_middle\n"); );
        // Body
        std::string out;
        out += "m_phase_type:" + VL_TO_STRING(__PVT__m_phase_type);
        out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
        out += ", m_imp:" + VL_TO_STRING(__PVT__m_imp);
        out += ", m_state:" + VL_TO_STRING(__PVT__m_state);
        out += ", m_run_count:" + VL_TO_STRING(__PVT__m_run_count);
        out += ", m_phase_proc:" + VL_TO_STRING(__PVT__m_phase_proc);
        out += ", max_ready_to_end_iters:" + VL_TO_STRING(__PVT__max_ready_to_end_iters);
        out += ", m_num_procs_not_yet_returned:" + VL_TO_STRING(__PVT__m_num_procs_not_yet_returned);
        out += ", m_predecessors:" + VL_TO_STRING(__PVT__m_predecessors);
        out += ", m_successors:" + VL_TO_STRING(__PVT__m_successors);
        out += ", m_end_node:" + VL_TO_STRING(__PVT__m_end_node);
        out += ", m_sync:" + VL_TO_STRING(__PVT__m_sync);
        out += ", phase_done:" + VL_TO_STRING(__PVT__phase_done);
        out += ", m_ready_to_end_count:" + VL_TO_STRING(__PVT__m_ready_to_end_count);
        out += ", m_jump_bkwd:" + VL_TO_STRING(__PVT__m_jump_bkwd);
        out += ", m_jump_fwd:" + VL_TO_STRING(__PVT__m_jump_fwd);
        out += ", m_jump_phase:" + VL_TO_STRING(__PVT__m_jump_phase);
        out += ", m_premature_end:" + VL_TO_STRING(__PVT__m_premature_end);
        out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
        return (out);
    }
