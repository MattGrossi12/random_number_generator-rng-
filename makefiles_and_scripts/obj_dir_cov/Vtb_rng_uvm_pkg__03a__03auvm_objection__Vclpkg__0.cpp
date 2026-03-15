// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng___024root____VbeforeTrig_h968c0d65__0(Vtb_rng___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_23> unnamedblk5__DOT____VDynScope_unnamedblk5_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_24> unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    while (true) {
        while ((0U == this->__PVT__m_scheduled_list.size())) {
            Vtb_rng___024root____VbeforeTrig_h968c0d65__0((&vlSymsp->TOP), 
                                                          "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
            co_await vlSymsp->TOP.__VtrigSched_h968c0d65__0.trigger(1U, 
                                                                    vlProcess, 
                                                                    "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))", 
                                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                    649);
        }
        if ((0U != this->__PVT__m_scheduled_list.size())) {
            unnamedblk5__DOT____VDynScope_unnamedblk5_2 
                = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_23, vlSymsp);
            VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 653)->__PVT__c 
                = this->__PVT__m_scheduled_list.pop_front();
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                                        ->__PVT__c, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                          ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)->__PVT__m_scheduled_contexts.at(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                                                                                ->__PVT__c, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                                                                                ->__PVT__obj) 
                = VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                ->__PVT__c;
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 657)
                                        ->__PVT__c, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 657)
                          ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 657)->__PVT__m_forked_list.push_back(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 657)
                                                                                ->__PVT__c);
            unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3 
                = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_24, vlSymsp);
            VL_NULL_CHECK(unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 662)->__PVT__objection 
                = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 662)
                                ->__PVT__c, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 662)
                ->__PVT__objection;
            this->__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3);
            ++(vlSymsp->__Vcoverage[17583]);
        } else {
            ++(vlSymsp->__Vcoverage[17584]);
        }
        ++(vlSymsp->__Vcoverage[17585]);
    }
    ++(vlSymsp->__Vcoverage[17586]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_24> unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_24> __Vtask___VforkTask_0__3____VDynScope_guard_3;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __Vtask___VforkTask_0__3____VlefCall_0__self;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection_context_object> __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __Vfunc_self__4__Vfuncout;
    // Body
    __Vtask___VforkTask_0__3____VDynScope_guard_3 = unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                            661);
    if (VL_LTS_III(32, 0U, VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 665)
                                         ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 665)
                   ->__PVT__m_forked_list.size())) {
        __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt 
            = VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 667)
                            ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 667)
            ->__PVT__m_forked_list.pop_front();
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 669)
                      ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 669)->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 669)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 671)
                      ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 671)->__PVT__m_forked_contexts.at(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 671)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__4__Vfuncout);
        __Vtask___VforkTask_0__3____VlefCall_0__self 
            = __Vfunc_self__4__Vfuncout;
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 674)
                      ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 674)->__PVT__m_drain_proc.at(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 674)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0__3____VlefCall_0__self;
        co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                               ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)->__VnoInFunc_m_forked_drain(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                                                                                ->__PVT__obj, VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                                                                                ->__PVT__source_obj, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                                                                                ->__PVT__description), VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                                                                                ->__PVT__count, 1U);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 684)
                      ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 684)->__PVT__m_drain_proc.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 684)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 685)
                      ->__PVT__objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 685)->__PVT__m_forked_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 685)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 687)->__VnoInFunc_clear(vlSymsp);
        this->__PVT__m_context_pool.push_back(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt);
        ++(vlSymsp->__Vcoverage[17581]);
    } else {
        ++(vlSymsp->__Vcoverage[17582]);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections\n"); );
    // Body
    this->__VnoInFunc_m_init_objections____Vfork_2__0(std::make_shared<VlProcess>(vlProcess));
    ++(vlSymsp->__Vcoverage[17599]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                            746);
    co_await this->__VnoInFunc_m_execute_scheduled_forks(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi4> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[17683]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::new\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__6__Vfuncout;
    __Vtask_get_arg_matches__6__Vfuncout = 0;
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_prop_mode = 1U;
    ++(vlSymsp->__Vcoverage[17448]);
    IData/*31:0*/ __VlefCall_1__get_arg_matches;
    IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs_;
    VlQueue<std::string> trace_args;
    trace_args.clear();
    trace_args.atDefault().clear();
    /*super.new*/;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs_);
    VL_NULL_CHECK(cs_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 140)->__VnoInFunc_get_root(vlProcess, vlSymsp, this->__PVT__m_top);
    VL_NULL_CHECK(this->__PVT__m_top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 142)->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, ""s, __VlefCall_0__get_report_verbosity_level);
    this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, __VlefCall_0__get_report_verbosity_level);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
    VL_NULL_CHECK(clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 146)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_OBJECTION_TRACE"s, trace_args, __Vtask_get_arg_matches__6__Vfuncout);
    __VlefCall_1__get_arg_matches = __Vtask_get_arg_matches__6__Vfuncout;
    if ((0U != __VlefCall_1__get_arg_matches)) {
        this->__PVT__m_trace_mode = 1U;
        ++(vlSymsp->__Vcoverage[17449]);
    } else {
        ++(vlSymsp->__Vcoverage[17450]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_objections.push_back(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this});
    ++(vlSymsp->__Vcoverage[17451]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_trace_mode(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ mode, CData/*0:0*/ &trace_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_trace_mode\n"); );
    // Body
    trace_mode__Vfuncrtn = this->__PVT__m_trace_mode;
    if ((0U == mode)) {
        this->__PVT__m_trace_mode = 0U;
        ++(vlSymsp->__Vcoverage[17454]);
    } else if ((1U == mode)) {
        this->__PVT__m_trace_mode = 1U;
        ++(vlSymsp->__Vcoverage[17452]);
    } else {
        ++(vlSymsp->__Vcoverage[17453]);
    }
    ++(vlSymsp->__Vcoverage[17455]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report\n"); );
    // Locals
    std::string __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__cpath;
    IData/*31:0*/ unnamedblk1__DOT__last_dot;
    std::string unnamedblk1__DOT__sname;
    std::string unnamedblk1__DOT__nm;
    IData/*31:0*/ unnamedblk1__DOT__max;
    IData/*31:0*/ _count;
    IData/*31:0*/ _total;
    {
        _count = (this->__PVT__m_source_count.exists(obj)
                   ? this->__PVT__m_source_count.at(obj)
                   : 0U);
        _total = (this->__PVT__m_total_count.exists(obj)
                   ? this->__PVT__m_total_count.at(obj)
                   : 0U);
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "OBJTN_TRC"s, __VlefCall_0__uvm_report_enabled);
        if (((1U & (~ (0U != __VlefCall_0__uvm_report_enabled))) 
             || (1U & (~ (IData)(this->__PVT__m_trace_mode))))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17457]);
        }
        if ((source_obj == obj)) {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 180)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            if ((""s == __VlefCall_1__get_full_name)) {
                __VlefCall_2__get_full_name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 180)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            }
            __Vtemp_1 = ((""s != description) ? VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(" ("s, description), ")"s)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0@ %0@ %0d objection(s)%@: count=%0d  total=%0d",0,
                                                                                -1,
                                                                                &(__VlefCall_2__get_full_name),
                                                                                -1,
                                                                                &(action),
                                                                                32,
                                                                                count,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                32,
                                                                                _count,
                                                                                32,
                                                                                _total) , 0U, ""s, 0U, ""s, 0U);
            if ((""s != description)) {
                ++(vlSymsp->__Vcoverage[17458]);
            }
            if ((1U & (~ (""s != description)))) {
                ++(vlSymsp->__Vcoverage[17459]);
            }
            ++(vlSymsp->__Vcoverage[17476]);
        } else {
            unnamedblk1__DOT__cpath = 0U;
            unnamedblk1__DOT__last_dot = 0U;
            VL_NULL_CHECK(source_obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 184)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__sname);
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 184)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__nm);
            unnamedblk1__DOT__max = (VL_GTS_III(32, 
                                                VL_LEN_IN(unnamedblk1__DOT__sname), 
                                                VL_LEN_IN(unnamedblk1__DOT__nm))
                                      ? VL_LEN_IN(unnamedblk1__DOT__nm)
                                      : VL_LEN_IN(unnamedblk1__DOT__sname));
            while (((VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath) 
                     == VL_GETC_N(unnamedblk1__DOT__nm,unnamedblk1__DOT__cpath)) 
                    & VL_LTS_III(32, unnamedblk1__DOT__cpath, unnamedblk1__DOT__max))) {
                if ((0x2eU == VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath))) {
                    unnamedblk1__DOT__last_dot = unnamedblk1__DOT__cpath;
                    ++(vlSymsp->__Vcoverage[17465]);
                } else {
                    ++(vlSymsp->__Vcoverage[17466]);
                }
                unnamedblk1__DOT__cpath = ((IData)(1U) 
                                           + unnamedblk1__DOT__cpath);
                ++(vlSymsp->__Vcoverage[17467]);
            }
            if ((0U != unnamedblk1__DOT__last_dot)) {
                unnamedblk1__DOT__sname = VL_SUBSTR_N(unnamedblk1__DOT__sname,
                                                      ((IData)(1U) 
                                                       + unnamedblk1__DOT__last_dot),
                                                      VL_LEN_IN(unnamedblk1__DOT__sname));
                ++(vlSymsp->__Vcoverage[17468]);
            } else {
                ++(vlSymsp->__Vcoverage[17469]);
            }
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 197)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            if ((""s == __VlefCall_3__get_full_name)) {
                __VlefCall_4__get_full_name = "uvm_top"s;
            } else {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 197)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            }
            if (("raised"s == action)) {
                __Vtemp_5[0U] = 0x64646564U;
                __Vtemp_5[1U] = 0x00000061U;
                __Vtemp_5[2U] = 0U;
            } else {
                __Vtemp_5[0U] = 0x63746564U;
                __Vtemp_5[1U] = 0x62747261U;
                __Vtemp_5[2U] = 0x00007375U;
            }
            __Vtemp_6 = ((""s != description) ? VL_CONCATN_NNN(", "s, description)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0@ %0s %0d objection(s) %0s its total (%@ from source object %@%@): count=%0d  total=%0d",0,
                                                                                -1,
                                                                                &(__VlefCall_4__get_full_name),
                                                                                80,
                                                                                __Vtemp_5.data(),
                                                                                32,
                                                                                count,
                                                                                32,
                                                                                (("raised"s 
                                                                                == action)
                                                                                 ? 0x0000746fU
                                                                                 : 0x66726f6dU),
                                                                                -1,
                                                                                &(action),
                                                                                -1,
                                                                                &(unnamedblk1__DOT__sname),
                                                                                -1,
                                                                                &(__Vtemp_6),
                                                                                32,
                                                                                _count,
                                                                                32,
                                                                                _total) , 0U, ""s, 0U, ""s, 0U);
            if (VL_GTS_III(32, VL_LEN_IN(unnamedblk1__DOT__sname), 
                           VL_LEN_IN(unnamedblk1__DOT__nm))) {
                ++(vlSymsp->__Vcoverage[17460]);
            }
            if (VL_LTES_III(32, VL_LEN_IN(unnamedblk1__DOT__sname), 
                            VL_LEN_IN(unnamedblk1__DOT__nm))) {
                ++(vlSymsp->__Vcoverage[17461]);
            }
            if (((VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath) 
                  == VL_GETC_N(unnamedblk1__DOT__nm,unnamedblk1__DOT__cpath)) 
                 & VL_LTS_III(32, unnamedblk1__DOT__cpath, unnamedblk1__DOT__max))) {
                ++(vlSymsp->__Vcoverage[17462]);
            }
            if (VL_GTES_III(32, unnamedblk1__DOT__cpath, unnamedblk1__DOT__max)) {
                ++(vlSymsp->__Vcoverage[17463]);
            }
            if ((VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath) 
                 != VL_GETC_N(unnamedblk1__DOT__nm,unnamedblk1__DOT__cpath))) {
                ++(vlSymsp->__Vcoverage[17464]);
            }
            if (("raised"s == action)) {
                ++(vlSymsp->__Vcoverage[17470]);
            }
            if ((1U & (~ ("raised"s == action)))) {
                ++(vlSymsp->__Vcoverage[17471]);
            }
            if (("raised"s == action)) {
                ++(vlSymsp->__Vcoverage[17472]);
            }
            if ((1U & (~ ("raised"s == action)))) {
                ++(vlSymsp->__Vcoverage[17473]);
            }
            if ((""s != description)) {
                ++(vlSymsp->__Vcoverage[17474]);
            }
            if ((1U & (~ (""s != description)))) {
                ++(vlSymsp->__Vcoverage[17475]);
            }
            ++(vlSymsp->__Vcoverage[17477]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[17478]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__16__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__17__Vfuncout;
    // Body
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> seq;
    __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
    if (__VlefExpr_0) {
        VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 213)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__16__Vfuncout);
        obj = __Vtask_get_parent__16__Vfuncout;
        ++(vlSymsp->__Vcoverage[17481]);
    } else {
        __VlefExpr_1 = VL_CAST_DYNAMIC(obj, seq);
        if (__VlefExpr_1) {
            VL_NULL_CHECK(seq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 216)->__VnoInFunc_get_sequencer(vlSymsp, __Vtask_get_sequencer__17__Vfuncout);
            obj = __Vtask_get_sequencer__17__Vfuncout;
            ++(vlSymsp->__Vcoverage[17479]);
        } else {
            obj = this->__PVT__m_top;
            ++(vlSymsp->__Vcoverage[17480]);
        }
    }
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
        ++(vlSymsp->__Vcoverage[17482]);
    } else {
        ++(vlSymsp->__Vcoverage[17483]);
    }
    m_get_parent__Vfuncrtn = obj;
    ++(vlSymsp->__Vcoverage[17484]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, CData/*0:0*/ raise, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate\n"); );
    // Body
    if (((VlNull{} != obj) & (obj != this->__PVT__m_top))) {
        this->__VnoInFunc_m_get_parent(vlSymsp, obj, obj);
        if (raise) {
            this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, source_obj, description, count);
            ++(vlSymsp->__Vcoverage[17485]);
        } else {
            this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, source_obj, description, count, in_top_thread);
            ++(vlSymsp->__Vcoverage[17486]);
        }
        ++(vlSymsp->__Vcoverage[17487]);
    } else {
        ++(vlSymsp->__Vcoverage[17488]);
    }
    ++(vlSymsp->__Vcoverage[17489]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_propagate_mode(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ prop_mode) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_propagate_mode\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_6__get_objection_total;
    CData/*0:0*/ __VlefLogAnd_5;
    IData/*31:0*/ __VlefCall_4__get_objection_total;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__get_objection_total;
    {
        __VlefLogAnd_1 = (1U & (~ (IData)(this->__PVT__m_top_all_dropped)));
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __VlefCall_0__get_objection_total);
            __VlefLogAnd_1 = (0U != __VlefCall_0__get_objection_total);
        }
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "UVM/BASE/OBJTN/PROP_MODE"s, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM/BASE/OBJTN/PROP_MODE"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The propagation mode of '"s, __VlefCall_3__get_full_name), "' cannot be changed while the objection is raised "s), "or draining!"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh"s, 0x00000109U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[17490]);
            } else {
                ++(vlSymsp->__Vcoverage[17491]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17493]);
        }
        this->__PVT__m_prop_mode = prop_mode;
        __Vlabel0: ;
    }
    __VlefLogAnd_5 = (1U & (~ (IData)(this->__PVT__m_top_all_dropped)));
    if (__VlefLogAnd_5) {
        this->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __VlefCall_4__get_objection_total);
        __VlefLogAnd_5 = (0U != __VlefCall_4__get_objection_total);
    }
    if (__VlefLogAnd_5) {
        ++(vlSymsp->__Vcoverage[17494]);
    }
    this->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __VlefCall_6__get_objection_total);
    if ((0U == __VlefCall_6__get_objection_total)) {
        ++(vlSymsp->__Vcoverage[17495]);
    }
    if (this->__PVT__m_top_all_dropped) {
        ++(vlSymsp->__Vcoverage[17496]);
    }
    ++(vlSymsp->__Vcoverage[17497]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_propagate_mode(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_propagate_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_propagate_mode\n"); );
    // Body
    get_propagate_mode__Vfuncrtn = this->__PVT__m_prop_mode;
    ++(vlSymsp->__Vcoverage[17498]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection\n"); );
    // Body
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
        ++(vlSymsp->__Vcoverage[17499]);
    } else {
        ++(vlSymsp->__Vcoverage[17500]);
    }
    this->__PVT__m_cleared = 0U;
    this->__PVT__m_top_all_dropped = 0U;
    this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, obj, description, count);
    ++(vlSymsp->__Vcoverage[17501]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk2__DOT__diff_count;
    IData/*31:0*/ idx;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection_context_object> ctxt;
    {
        idx = 0U;
        if ((0U == count)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17503]);
        }
        if (this->__PVT__m_total_count.exists(obj)) {
            __VlefExpr_0 = (this->__PVT__m_total_count
                            .at(obj) + count);
            this->__PVT__m_total_count.at(obj) = __VlefExpr_0;
            ++(vlSymsp->__Vcoverage[17504]);
        } else {
            this->__PVT__m_total_count.at(obj) = count;
            ++(vlSymsp->__Vcoverage[17505]);
        }
        if ((source_obj == obj)) {
            if (this->__PVT__m_source_count.exists(obj)) {
                __VlefExpr_1 = (this->__PVT__m_source_count
                                .at(obj) + count);
                this->__PVT__m_source_count.at(obj) 
                    = __VlefExpr_1;
                ++(vlSymsp->__Vcoverage[17506]);
            } else {
                this->__PVT__m_source_count.at(obj) 
                    = count;
                ++(vlSymsp->__Vcoverage[17507]);
            }
            ++(vlSymsp->__Vcoverage[17508]);
        } else {
            ++(vlSymsp->__Vcoverage[17509]);
        }
        if (this->__PVT__m_trace_mode) {
            this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "raised"s);
            ++(vlSymsp->__Vcoverage[17510]);
        } else {
            ++(vlSymsp->__Vcoverage[17511]);
        }
        this->__VnoInFunc_raised(vlProcess, vlSymsp, obj, source_obj, description, count);
        idx = 0U;
        {
            while (VL_LTS_III(32, idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size())) {
                if (((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 343)
                      ->__PVT__obj == obj) && (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 344)
                                               ->__PVT__objection 
                                               == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this}))) {
                    ctxt = vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.erase(idx);
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[17513]);
                }
                idx = ((IData)(1U) + idx);
                ++(vlSymsp->__Vcoverage[17514]);
            }
            __Vlabel1: ;
        }
        if ((VlNull{} == ctxt)) {
            idx = 0U;
            {
                while (VL_LTS_III(32, idx, this->__PVT__m_forked_list.size())) {
                    if ((VL_NULL_CHECK(this->__PVT__m_forked_list.at(idx), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 357)
                         ->__PVT__obj == obj)) {
                        ctxt = this->__PVT__m_forked_list.at(idx);
                        this->__PVT__m_forked_list.erase(idx);
                        this->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 362)
                                                                ->__PVT__obj);
                        goto __Vlabel2;
                    } else {
                        ++(vlSymsp->__Vcoverage[17516]);
                    }
                    idx = ((IData)(1U) + idx);
                    ++(vlSymsp->__Vcoverage[17517]);
                }
                __Vlabel2: ;
            }
            ++(vlSymsp->__Vcoverage[17518]);
        } else {
            ++(vlSymsp->__Vcoverage[17519]);
        }
        if ((VlNull{} == ctxt)) {
            if (this->__PVT__m_forked_contexts.exists(obj)) {
                ctxt = this->__PVT__m_forked_contexts
                    .at(obj);
                this->__PVT__m_forked_contexts.erase(obj);
                VL_NULL_CHECK(this->__PVT__m_drain_proc
                              .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 377)->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_drain_proc.erase(obj);
                ++(vlSymsp->__Vcoverage[17520]);
            } else {
                ++(vlSymsp->__Vcoverage[17521]);
            }
            ++(vlSymsp->__Vcoverage[17522]);
        } else {
            ++(vlSymsp->__Vcoverage[17523]);
        }
        if ((VlNull{} == ctxt)) {
            if (((~ (IData)(this->__PVT__m_prop_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count);
                ++(vlSymsp->__Vcoverage[17526]);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 1U, 0U);
                ++(vlSymsp->__Vcoverage[17524]);
            } else {
                ++(vlSymsp->__Vcoverage[17525]);
            }
            ++(vlSymsp->__Vcoverage[17537]);
        } else {
            unnamedblk2__DOT__diff_count = 0U;
            unnamedblk2__DOT__diff_count = (count - VL_NULL_CHECK(ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 403)
                                            ->__PVT__count);
            if ((0U != unnamedblk2__DOT__diff_count)) {
                if (VL_LTS_III(32, 0U, unnamedblk2__DOT__diff_count)) {
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk2__DOT__diff_count);
                        ++(vlSymsp->__Vcoverage[17529]);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk2__DOT__diff_count, 1U, 0U);
                        ++(vlSymsp->__Vcoverage[17527]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17528]);
                    }
                    ++(vlSymsp->__Vcoverage[17533]);
                } else {
                    unnamedblk2__DOT__diff_count = 
                        (- unnamedblk2__DOT__diff_count);
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk2__DOT__diff_count, 0U);
                        ++(vlSymsp->__Vcoverage[17532]);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk2__DOT__diff_count, 0U, 0U);
                        ++(vlSymsp->__Vcoverage[17530]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17531]);
                    }
                    ++(vlSymsp->__Vcoverage[17534]);
                }
                ++(vlSymsp->__Vcoverage[17535]);
            } else {
                ++(vlSymsp->__Vcoverage[17536]);
            }
            VL_NULL_CHECK(ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 426)->__VnoInFunc_clear(vlSymsp);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(ctxt);
            ++(vlSymsp->__Vcoverage[17538]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[17539]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection\n"); );
    // Body
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
        ++(vlSymsp->__Vcoverage[17540]);
    } else {
        ++(vlSymsp->__Vcoverage[17541]);
    }
    this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, obj, description, count, 0U);
    ++(vlSymsp->__Vcoverage[17542]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_8;
    IData/*31:0*/ __VlefExpr_7;
    IData/*31:0*/ __VlefExpr_6;
    std::string __VlefCall_5__get_name;
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefExpr_3;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection_context_object> unnamedblk3__DOT__ctxt;
    {
        if ((0U == count)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17544]);
        }
        __VlefExpr_0 = (! this->__PVT__m_total_count.exists(obj));
        if ((1U & (~ (IData)(__VlefExpr_0)))) {
            __VlefExpr_0 = VL_GTS_III(32, count, this->__PVT__m_total_count
                                      .at(obj));
        }
        if (__VlefExpr_0) {
            if (this->__PVT__m_cleared) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[17546]);
            }
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 517)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, __VlefCall_1__get_full_name), "\" attempted to drop objection '"s), __VlefCall_2__get_name), "' count below zero"s)), 0U, ""s, 0U, ""s, 0U);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[17548]);
            }
            if ((obj == source_obj)) {
                __VlefExpr_3 = (! this->__PVT__m_source_count.exists(obj));
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = VL_GTS_III(32, count, this->__PVT__m_source_count
                                              .at(obj));
                }
                if (__VlefExpr_3) {
                    if (this->__PVT__m_cleared) {
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[17550]);
                    }
                    VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 526)
                                               ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                    this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, __VlefCall_4__get_full_name), "\" attempted to drop objection '"s), __VlefCall_5__get_name), "' count below zero"s)), 0U, ""s, 0U, ""s, 0U);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[17552]);
                    }
                    __VlefExpr_6 = (this->__PVT__m_source_count
                                    .at(obj) - count);
                    this->__PVT__m_source_count.at(obj) 
                        = __VlefExpr_6;
                    ++(vlSymsp->__Vcoverage[17553]);
                } else {
                    ++(vlSymsp->__Vcoverage[17554]);
                }
                __VlefExpr_7 = (this->__PVT__m_total_count
                                .at(obj) - count);
                this->__PVT__m_total_count.at(obj) 
                    = __VlefExpr_7;
                if (this->__PVT__m_trace_mode) {
                    this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "dropped"s);
                    ++(vlSymsp->__Vcoverage[17555]);
                } else {
                    ++(vlSymsp->__Vcoverage[17556]);
                }
                this->__VnoInFunc_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
                __VlefExpr_8 = (0U != this->__PVT__m_total_count
                                .at(obj));
                if (__VlefExpr_8) {
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, in_top_thread);
                        ++(vlSymsp->__Vcoverage[17559]);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, in_top_thread);
                        ++(vlSymsp->__Vcoverage[17557]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17558]);
                    }
                    ++(vlSymsp->__Vcoverage[17562]);
                } else {
                    if ((0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.size())) {
                        unnamedblk3__DOT__ctxt = vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.pop_front();
                        ++(vlSymsp->__Vcoverage[17560]);
                    } else {
                        unnamedblk3__DOT__ctxt = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_objection_context_object, vlSymsp);
                        ++(vlSymsp->__Vcoverage[17561]);
                    }
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 556)
                                                       ->__PVT__obj 
                        = obj;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 557)
                                                       ->__PVT__source_obj 
                        = source_obj;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 558)
                                                       ->__PVT__description 
                        = description;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 559)
                                                       ->__PVT__count 
                        = count;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 560)
                                                       ->__PVT__objection 
                        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this};
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.push_back(unnamedblk3__DOT__ctxt);
                    ++(vlSymsp->__Vcoverage[17563]);
                }
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17564]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_4;
            CData/*0:0*/ __VlefExpr_3;
            std::string __VlefCall_2__get_name;
            CData/*0:0*/ __VlefLogAnd_1;
            IData/*31:0*/ __VlefCall_0__get_objection_total;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk4__DOT__o;
            CData/*0:0*/ unnamedblk4__DOT__o__Vfirst;
            unnamedblk4__DOT__o__Vfirst = 0;
            std::string name;
            IData/*31:0*/ idx;
            name = ""s;
            idx = 0U;
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
                ++(vlSymsp->__Vcoverage[17565]);
            } else {
                ++(vlSymsp->__Vcoverage[17566]);
            }
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 587)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
            if ((""s == name)) {
                name = "uvm_top"s;
                ++(vlSymsp->__Vcoverage[17567]);
            } else {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 591)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
                ++(vlSymsp->__Vcoverage[17568]);
            }
            __VlefLogAnd_1 = (1U & (~ (IData)(this->__PVT__m_top_all_dropped)));
            if (__VlefLogAnd_1) {
                this->__VnoInFunc_get_objection_total(vlSymsp, this->__PVT__m_top, __VlefCall_0__get_objection_total);
                __VlefLogAnd_1 = (0U != __VlefCall_0__get_objection_total);
            }
            if (__VlefLogAnd_1) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "OBJTN_CLEAR"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object '"s, name), "' cleared objection counts for "s), __VlefCall_2__get_name)), 0x000000c8U, ""s, 0U, ""s, 0U);
                ++(vlSymsp->__Vcoverage[17569]);
            } else {
                ++(vlSymsp->__Vcoverage[17570]);
            }
            this->__PVT__m_source_count.clear();
            this->__PVT__m_total_count.clear();
            idx = 0U;
            while (VL_LTS_III(32, idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size())) {
                if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 602)
                     ->__PVT__objection == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this})) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 603)
                                                       ->__VnoInFunc_clear(vlSymsp);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx));
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.erase(idx);
                    ++(vlSymsp->__Vcoverage[17571]);
                } else {
                    idx = ((IData)(1U) + idx);
                    ++(vlSymsp->__Vcoverage[17572]);
                }
                ++(vlSymsp->__Vcoverage[17573]);
            }
            this->__PVT__m_scheduled_contexts.clear();
            while ((0U != this->__PVT__m_forked_list.size())) {
                VL_NULL_CHECK(this->__PVT__m_forked_list.at(0U), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 616)
                                                       ->__VnoInFunc_clear(vlSymsp);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(this->__PVT__m_forked_list.at(0U));
                std::ignore = this->__PVT__m_forked_list.pop_front();
                ++(vlSymsp->__Vcoverage[17574]);
            }
            __VlefExpr_3 = (0U != this->__PVT__m_forked_contexts.first(unnamedblk4__DOT__o));
            if (__VlefExpr_3) {
                unnamedblk4__DOT__o__Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk4__DOT__o__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__m_forked_contexts.next(unnamedblk4__DOT__o));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk4__DOT__o__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_drain_proc
                                  .at(unnamedblk4__DOT__o), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 624)
                                                       ->__VnoInFunc_kill(vlSymsp);
                    this->__PVT__m_drain_proc.erase(unnamedblk4__DOT__o);
                    VL_NULL_CHECK(this->__PVT__m_forked_contexts
                                  .at(unnamedblk4__DOT__o), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 631)
                                                       ->__VnoInFunc_clear(vlSymsp);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(this->__PVT__m_forked_contexts
                                                                                .at(unnamedblk4__DOT__o));
                    this->__PVT__m_forked_contexts.erase(unnamedblk4__DOT__o);
                    ++(vlSymsp->__Vcoverage[17575]);
                }
                ++(vlSymsp->__Vcoverage[17576]);
            } else {
                ++(vlSymsp->__Vcoverage[17577]);
            }
            this->__PVT__m_top_all_dropped = 0U;
            this->__PVT__m_cleared = 1U;
            if (this->__PVT__m_events.exists(this->__PVT__m_top)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(this->__PVT__m_top), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 639)
                                   ->__PVT__all_dropped);
                ++(vlSymsp->__Vcoverage[17578]);
            } else {
                ++(vlSymsp->__Vcoverage[17579]);
            }
            ++(vlSymsp->__Vcoverage[17580]);
        }

        VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain\n"); );
            // Locals
            CData/*0:0*/ __Vtrigprevexpr_hd73941b3__0;
            __Vtrigprevexpr_hd73941b3__0 = 0;
            // Body
            VL_KEEP_THIS;
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            if (this->__PVT__m_drain_time.exists(obj)) {
                co_await vlSymsp->TOP.__VdlySched.delay(this->__PVT__m_drain_time
                                                        .at(obj), 
                                                        vlProcess, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                        708);
                ++(vlSymsp->__Vcoverage[17587]);
            } else {
                ++(vlSymsp->__Vcoverage[17588]);
            }
            if (this->__PVT__m_trace_mode) {
                this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "all_dropped"s);
                ++(vlSymsp->__Vcoverage[17589]);
            } else {
                ++(vlSymsp->__Vcoverage[17590]);
            }
            this->__VnoInFunc_all_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
            if ((1U & (~ (IData)(vlProcess->completedFork())))) {
                CData/*0:0*/ __VdynTrigger_hed46135f__0;
                __VdynTrigger_hed46135f__0 = 0;
                __VdynTrigger_hed46135f__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_hed46135f__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 716);
                    __Vtrigprevexpr_hd73941b3__0 = 
                        vlProcess->completedFork();
                    __VdynTrigger_hed46135f__0 = __Vtrigprevexpr_hd73941b3__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hed46135f__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                             716);
            }
            __VlefExpr_0 = this->__PVT__m_source_count.exists(obj);
            if (__VlefExpr_0) {
                __VlefExpr_0 = (0U == this->__PVT__m_source_count
                                .at(obj));
            }
            if (__VlefExpr_0) {
                this->__PVT__m_source_count.erase(obj);
                ++(vlSymsp->__Vcoverage[17591]);
            } else {
                ++(vlSymsp->__Vcoverage[17592]);
            }
            __VlefExpr_1 = this->__PVT__m_total_count.exists(obj);
            if (__VlefExpr_1) {
                __VlefExpr_1 = (0U == this->__PVT__m_total_count
                                .at(obj));
            }
            if (__VlefExpr_1) {
                this->__PVT__m_total_count.erase(obj);
                ++(vlSymsp->__Vcoverage[17593]);
            } else {
                ++(vlSymsp->__Vcoverage[17594]);
            }
            if (((~ (IData)(this->__PVT__m_prop_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, 1U);
                ++(vlSymsp->__Vcoverage[17597]);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, 1U);
                ++(vlSymsp->__Vcoverage[17595]);
            } else {
                ++(vlSymsp->__Vcoverage[17596]);
            }
            ++(vlSymsp->__Vcoverage[17598]);
            co_return;
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_drain_time(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ drain) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_drain_time\n"); );
            // Body
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
                ++(vlSymsp->__Vcoverage[17600]);
            } else {
                ++(vlSymsp->__Vcoverage[17601]);
            }
            this->__PVT__m_drain_time.at(obj) = drain;
            ++(vlSymsp->__Vcoverage[17602]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised\n"); );
            // Body
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16> unnamedblk7__DOT__iter;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection_callback> unnamedblk7__DOT__cb;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp;
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
            if (__VlefExpr_0) {
                VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 788)
                                                       ->__VnoInFunc_raised(vlSymsp, 
                                                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
                ++(vlSymsp->__Vcoverage[17603]);
            } else {
                ++(vlSymsp->__Vcoverage[17604]);
            }
            unnamedblk7__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16, vlSymsp, 
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk7__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 789)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk7__DOT__cb);
            while ((VlNull{} != unnamedblk7__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk7__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 789)
                                                       ->__VnoInFunc_raised(vlSymsp, 
                                                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk7__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 789)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk7__DOT__cb);
                ++(vlSymsp->__Vcoverage[17605]);
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 791)
                                   ->__PVT__raised);
                ++(vlSymsp->__Vcoverage[17606]);
            } else {
                ++(vlSymsp->__Vcoverage[17607]);
            }
            ++(vlSymsp->__Vcoverage[17608]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped\n"); );
            // Body
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16> unnamedblk8__DOT__iter;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection_callback> unnamedblk8__DOT__cb;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp;
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
            if (__VlefExpr_0) {
                VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 807)
                                                       ->__VnoInFunc_dropped(vlSymsp, 
                                                                             VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
                ++(vlSymsp->__Vcoverage[17609]);
            } else {
                ++(vlSymsp->__Vcoverage[17610]);
            }
            unnamedblk8__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16, vlSymsp, 
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk8__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 808)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk8__DOT__cb);
            while ((VlNull{} != unnamedblk8__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk8__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 808)
                                                       ->__VnoInFunc_dropped(vlSymsp, 
                                                                             VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk8__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 808)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk8__DOT__cb);
                ++(vlSymsp->__Vcoverage[17611]);
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 810)
                                   ->__PVT__dropped);
                ++(vlSymsp->__Vcoverage[17612]);
            } else {
                ++(vlSymsp->__Vcoverage[17613]);
            }
            ++(vlSymsp->__Vcoverage[17614]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped\n"); );
            // Body
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16> unnamedblk9__DOT__iter;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection_callback> unnamedblk9__DOT__cb;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp;
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, comp);
            if (__VlefExpr_0) {
                VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 828)
                                                       ->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
                ++(vlSymsp->__Vcoverage[17615]);
            } else {
                ++(vlSymsp->__Vcoverage[17616]);
            }
            unnamedblk9__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16, vlSymsp, 
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk9__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 829)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk9__DOT__cb);
            while ((VlNull{} != unnamedblk9__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk9__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 829)
                                                       ->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk9__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 829)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk9__DOT__cb);
                ++(vlSymsp->__Vcoverage[17617]);
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 831)
                                   ->__PVT__all_dropped);
                ++(vlSymsp->__Vcoverage[17618]);
            } else {
                ++(vlSymsp->__Vcoverage[17619]);
            }
            if ((obj == this->__PVT__m_top)) {
                this->__PVT__m_top_all_dropped = 1U;
                ++(vlSymsp->__Vcoverage[17620]);
            } else {
                ++(vlSymsp->__Vcoverage[17621]);
            }
            ++(vlSymsp->__Vcoverage[17622]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>> &list) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors\n"); );
            // Body
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk10__DOT__obj;
            CData/*0:0*/ unnamedblk10__DOT__obj__Vfirst;
            unnamedblk10__DOT__obj__Vfirst = 0;
            list.clear();
            __VlefExpr_0 = (0U != this->__PVT__m_source_count.first(unnamedblk10__DOT__obj));
            if (__VlefExpr_0) {
                unnamedblk10__DOT__obj__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk10__DOT__obj__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_source_count.next(unnamedblk10__DOT__obj));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk10__DOT__obj__Vfirst = 0U;
                    list.push_back(unnamedblk10__DOT__obj);
                    ++(vlSymsp->__Vcoverage[17623]);
                }
                ++(vlSymsp->__Vcoverage[17624]);
            } else {
                ++(vlSymsp->__Vcoverage[17625]);
            }
            ++(vlSymsp->__Vcoverage[17626]);
        }

        VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ objt_event, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for\n"); );
            // Locals
            IData/*31:0*/ __Vtemp_1;
            IData/*31:0*/ __Vtemp_2;
            // Body
            VL_KEEP_THIS;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection_events> __VlefCall_0__new;
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
                ++(vlSymsp->__Vcoverage[17627]);
            } else {
                ++(vlSymsp->__Vcoverage[17628]);
            }
            if (this->__PVT__m_events.exists(obj)) {
                ++(vlSymsp->__Vcoverage[17630]);
            } else {
                __VlefCall_0__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_objection_events, vlSymsp);
                this->__PVT__m_events.at(obj) = __VlefCall_0__new;
                ++(vlSymsp->__Vcoverage[17629]);
            }
            __Vtemp_1 = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_events
                                                     .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 864)
                         ->__PVT__waiters);
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 864)
                                                       ->__PVT__waiters 
                = __Vtemp_1;
            if ((1U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_h31d1d07d__0;
                __VdynTrigger_h31d1d07d__0 = 0;
                __VdynTrigger_h31d1d07d__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h31d1d07d__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 866);
                    __VdynTrigger_h31d1d07d__0 = ((VlNull{} 
                                                   != this->__PVT__m_events
                                                   .at(obj)) 
                                                  && VL_NULL_CHECK(this->__PVT__m_events
                                                                   .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 866)
                                                  ->__PVT__raised.isFired());
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h31d1d07d__0);
                    co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 866);
                    if ((VlNull{} != this->__PVT__m_events
                         .at(obj))) {
                        VL_NULL_CHECK(this->__PVT__m_events
                                      .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 866)
                                                       ->__PVT__raised.clearFired();
                    }
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                             866);
                ++(vlSymsp->__Vcoverage[17631]);
            } else if ((2U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_h6ea3f0dd__0;
                __VdynTrigger_h6ea3f0dd__0 = 0;
                __VdynTrigger_h6ea3f0dd__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h6ea3f0dd__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 867);
                    __VdynTrigger_h6ea3f0dd__0 = ((VlNull{} 
                                                   != this->__PVT__m_events
                                                   .at(obj)) 
                                                  && VL_NULL_CHECK(this->__PVT__m_events
                                                                   .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 867)
                                                  ->__PVT__dropped.isFired());
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h6ea3f0dd__0);
                    co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 867);
                    if ((VlNull{} != this->__PVT__m_events
                         .at(obj))) {
                        VL_NULL_CHECK(this->__PVT__m_events
                                      .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 867)
                                                       ->__PVT__dropped.clearFired();
                    }
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                             867);
                ++(vlSymsp->__Vcoverage[17632]);
            } else if ((4U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_h106968fb__0;
                __VdynTrigger_h106968fb__0 = 0;
                __VdynTrigger_h106968fb__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h106968fb__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 868);
                    __VdynTrigger_h106968fb__0 = ((VlNull{} 
                                                   != this->__PVT__m_events
                                                   .at(obj)) 
                                                  && VL_NULL_CHECK(this->__PVT__m_events
                                                                   .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 868)
                                                  ->__PVT__all_dropped.isFired());
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h106968fb__0);
                    co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 868);
                    if ((VlNull{} != this->__PVT__m_events
                         .at(obj))) {
                        VL_NULL_CHECK(this->__PVT__m_events
                                      .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 868)
                                                       ->__PVT__all_dropped.clearFired();
                    }
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                             868);
                ++(vlSymsp->__Vcoverage[17633]);
            }
            __Vtemp_2 = (VL_NULL_CHECK(this->__PVT__m_events
                                       .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 871)
                         ->__PVT__waiters - (IData)(1U));
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 871)
                                                       ->__PVT__waiters 
                = __Vtemp_2;
            if ((0U == VL_NULL_CHECK(this->__PVT__m_events
                                     .at(obj), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 873)
                 ->__PVT__waiters)) {
                this->__PVT__m_events.erase(obj);
                ++(vlSymsp->__Vcoverage[17634]);
            } else {
                ++(vlSymsp->__Vcoverage[17635]);
            }
            ++(vlSymsp->__Vcoverage[17636]);
            co_return;
        }

        VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for_total_count(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for_total_count\n"); );
            // Locals
            CData/*0:0*/ __Vtrigprevexpr_hf0ab48d6__0;
            __Vtrigprevexpr_hf0ab48d6__0 = 0;
            // Body
            VL_KEEP_THIS;
            CData/*0:0*/ __VlefExpr_0;
            {
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                    ++(vlSymsp->__Vcoverage[17637]);
                } else {
                    ++(vlSymsp->__Vcoverage[17638]);
                }
                if (((! this->__PVT__m_total_count.exists(obj)) 
                     & (0U == count))) {
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17640]);
                }
                if ((0U == count)) {
                    if ((1U & (~ ((! this->__PVT__m_total_count.exists(obj)) 
                                  & (0U == count))))) {
                        CData/*0:0*/ __VdynTrigger_h12d41c76__0;
                        __VdynTrigger_h12d41c76__0 = 0;
                        __VdynTrigger_h12d41c76__0 = 0U;
                        while ((1U & (~ (IData)(__VdynTrigger_h12d41c76__0)))) {
                            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                         nullptr, 
                                                                         "@([true] ((! uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj)) & (32'sh0 == uvm_pkg::uvm_objection.count)))", 
                                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                         886);
                            __Vtrigprevexpr_hf0ab48d6__0 
                                = ((! this->__PVT__m_total_count.exists(obj)) 
                                   & (0U == count));
                            __VdynTrigger_h12d41c76__0 
                                = __Vtrigprevexpr_hf0ab48d6__0;
                            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h12d41c76__0);
                        }
                        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                     nullptr, 
                                                                     "@([true] ((! uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj)) & (32'sh0 == uvm_pkg::uvm_objection.count)))", 
                                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                     886);
                    }
                    ++(vlSymsp->__Vcoverage[17641]);
                } else {
                    __VlefExpr_0 = this->__PVT__m_total_count.exists(obj);
                    if (__VlefExpr_0) {
                        __VlefExpr_0 = (this->__PVT__m_total_count
                                        .at(obj) == count);
                    }
                    if ((1U & (~ (IData)(__VlefExpr_0)))) {
                        CData/*0:0*/ __VdynTrigger_h78adb0df__0;
                        __VdynTrigger_h78adb0df__0 = 0;
                        __VdynTrigger_h78adb0df__0 = 0U;
                        while ((1U & (~ (IData)(__VdynTrigger_h78adb0df__0)))) {
                            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                         nullptr, 
                                                                         "@([true] uvm_pkg::uvm_objection.__VlefExpr_0)", 
                                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                         888);
                            __VdynTrigger_h78adb0df__0 
                                = __VlefExpr_0;
                            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h78adb0df__0);
                        }
                        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                     nullptr, 
                                                                     "@([true] uvm_pkg::uvm_objection.__VlefExpr_0)", 
                                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                     888);
                    }
                    ++(vlSymsp->__Vcoverage[17642]);
                }
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17643]);
            co_return;
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_count(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_count\n"); );
            // Body
            {
                get_objection_count__Vfuncrtn = 0U;
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                    ++(vlSymsp->__Vcoverage[17644]);
                } else {
                    ++(vlSymsp->__Vcoverage[17645]);
                }
                if (this->__PVT__m_source_count.exists(obj)) {
                    ++(vlSymsp->__Vcoverage[17647]);
                } else {
                    get_objection_count__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                get_objection_count__Vfuncrtn = this->__PVT__m_source_count
                    .at(obj);
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17648]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_total__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total\n"); );
            // Body
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
                ++(vlSymsp->__Vcoverage[17649]);
            } else {
                ++(vlSymsp->__Vcoverage[17650]);
            }
            if (this->__PVT__m_total_count.exists(obj)) {
                get_objection_total__Vfuncrtn = this->__PVT__m_total_count
                    .at(obj);
            } else {
                get_objection_total__Vfuncrtn = 0U;
            }
            ++(vlSymsp->__Vcoverage[17653]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_drain_time(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ &get_drain_time__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_drain_time\n"); );
            // Body
            {
                get_drain_time__Vfuncrtn = 0;
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                    ++(vlSymsp->__Vcoverage[17654]);
                } else {
                    ++(vlSymsp->__Vcoverage[17655]);
                }
                if (this->__PVT__m_drain_time.exists(obj)) {
                    ++(vlSymsp->__Vcoverage[17657]);
                } else {
                    get_drain_time__Vfuncrtn = 0ULL;
                    goto __Vlabel0;
                }
                get_drain_time__Vfuncrtn = this->__PVT__m_drain_time
                    .at(obj);
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17658]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header, std::string &m_display_objections__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections\n"); );
            // Locals
            std::string __Vtemp_1;
            // Body
            CData/*0:0*/ __VlefExpr_4;
            std::string __VlefCall_3__get_full_name;
            CData/*0:0*/ __VlefExpr_2;
            CData/*0:0*/ __VlefExpr_1;
            CData/*0:0*/ __VlefExpr_0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__o;
            CData/*0:0*/ unnamedblk11__DOT__o__Vfirst;
            unnamedblk11__DOT__o__Vfirst = 0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__unnamedblk12__DOT__theobj;
            IData/*31:0*/ unnamedblk13__DOT__i;
            unnamedblk13__DOT__i = 0;
            IData/*31:0*/ unnamedblk14__DOT__i;
            std::string s;
            IData/*31:0*/ total;
            VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>> list;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> curr_obj;
            IData/*31:0*/ depth;
            std::string name;
            std::string this_obj_name;
            std::string curr_obj_name;
            {
                m_display_objections__Vfuncrtn = ""s;
                s = ""s;
                total = 0U;
                list.clear();
                depth = 0U;
                name = ""s;
                this_obj_name = ""s;
                curr_obj_name = ""s;
                __VlefExpr_0 = (0U != this->__PVT__m_total_count.first(unnamedblk11__DOT__o));
                if (__VlefExpr_0) {
                    unnamedblk11__DOT__o__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_1 = unnamedblk11__DOT__o__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_1)))) {
                            __VlefExpr_1 = (0U != this->__PVT__m_total_count.next(unnamedblk11__DOT__o));
                        }
                        if (!(__VlefExpr_1)) break;
                        unnamedblk11__DOT__o__Vfirst = 0U;
                        unnamedblk11__DOT__unnamedblk12__DOT__theobj 
                            = unnamedblk11__DOT__o;
                        __VlefExpr_2 = VL_LTS_III(32, 0U, this->__PVT__m_total_count
                                                  .at(unnamedblk11__DOT__o));
                        if (__VlefExpr_2) {
                            VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__theobj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 959)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                            list.at(__VlefCall_3__get_full_name) 
                                = unnamedblk11__DOT__unnamedblk12__DOT__theobj;
                            ++(vlSymsp->__Vcoverage[17659]);
                        } else {
                            ++(vlSymsp->__Vcoverage[17660]);
                        }
                        ++(vlSymsp->__Vcoverage[17661]);
                    }
                    ++(vlSymsp->__Vcoverage[17662]);
                } else {
                    ++(vlSymsp->__Vcoverage[17663]);
                }
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                    ++(vlSymsp->__Vcoverage[17664]);
                } else {
                    ++(vlSymsp->__Vcoverage[17665]);
                }
                this->__VnoInFunc_get_objection_total(vlSymsp, obj, total);
                s = VL_SFORMATF_N_NX("The total objection count is %0d\n",0,
                                     32,total) ;
                if ((0U == total)) {
                    m_display_objections__Vfuncrtn 
                        = s;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17667]);
                }
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                s = VL_CONCATN_NNN(s, "Source  Total   \n"s);
                s = VL_CONCATN_NNN(s, "Count   Count   Object\n"s);
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 978)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this_obj_name);
                curr_obj_name = this_obj_name;
                while (true) {
                    curr_obj = list.at(curr_obj_name);
                    depth = 0U;
                    unnamedblk13__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk13__DOT__i, 
                                      VL_LEN_IN(curr_obj_name))) {
                        if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk13__DOT__i))) {
                            depth = ((IData)(1U) + depth);
                            ++(vlSymsp->__Vcoverage[17668]);
                        } else {
                            ++(vlSymsp->__Vcoverage[17669]);
                        }
                        unnamedblk13__DOT__i = ((IData)(1U) 
                                                + unnamedblk13__DOT__i);
                        ++(vlSymsp->__Vcoverage[17670]);
                    }
                    name = curr_obj_name;
                    unnamedblk14__DOT__i = 0U;
                    unnamedblk14__DOT__i = (VL_LEN_IN(curr_obj_name) 
                                            - (IData)(1U));
                    {
                        while (VL_LTES_III(32, 0U, unnamedblk14__DOT__i)) {
                            if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk14__DOT__i))) {
                                name = VL_SUBSTR_N(curr_obj_name,
                                                   ((IData)(1U) 
                                                    + unnamedblk14__DOT__i),
                                                   (VL_LEN_IN(curr_obj_name) 
                                                    - (IData)(1U)));
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[17672]);
                            }
                            unnamedblk14__DOT__i = 
                                (unnamedblk14__DOT__i 
                                 - (IData)(1U));
                            ++(vlSymsp->__Vcoverage[17673]);
                        }
                        __Vlabel1: ;
                    }
                    if ((""s == curr_obj_name)) {
                        name = "uvm_top"s;
                        ++(vlSymsp->__Vcoverage[17674]);
                    } else {
                        depth = ((IData)(1U) + depth);
                        ++(vlSymsp->__Vcoverage[17675]);
                    }
                    __Vtemp_1 = VL_SUBSTR_N("                                                                                   "s,0U,
                                            VL_MULS_III(32, (IData)(2U), depth));
                    s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("%-6d  %-6d %@%@\n",0,
                                                           32,
                                                           (this->__PVT__m_source_count.exists(curr_obj)
                                                             ? this->__PVT__m_source_count
                                                            .at(curr_obj)
                                                             : 0U),
                                                           32,
                                                           (this->__PVT__m_total_count.exists(curr_obj)
                                                             ? this->__PVT__m_total_count
                                                            .at(curr_obj)
                                                             : 0U),
                                                           -1,
                                                           &(__Vtemp_1),
                                                           -1,
                                                           &(name)) );
                    ++(vlSymsp->__Vcoverage[17676]);
                    __VlefExpr_4 = (0U != list.next(curr_obj_name));
                    if (!(((IData)(__VlefExpr_4) && 
                           (VL_SUBSTR_N(curr_obj_name,0U,
                                        (VL_LEN_IN(this_obj_name) 
                                         - (IData)(1U))) 
                            == this_obj_name)))) break;
                    ++(vlSymsp->__Vcoverage[17677]);
                }
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                m_display_objections__Vfuncrtn = s;
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17678]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string\n"); );
            // Body
            convert2string__Vfuncrtn = ""s;
            this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, this->__PVT__m_top, 1U, convert2string__Vfuncrtn);
            ++(vlSymsp->__Vcoverage[17679]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_display_objections(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_display_objections\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            std::string m;
            this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, obj, show_header, m);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "UVM/OBJ/DISPLAY"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/OBJ/DISPLAY"s, m, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh"s, 0x00000409U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[17680]);
            } else {
                ++(vlSymsp->__Vcoverage[17681]);
            }
            ++(vlSymsp->__Vcoverage[17682]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create\n"); );
            // Body
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> tmp;
            tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, name);
            create__Vfuncrtn = tmp;
            ++(vlSymsp->__Vcoverage[17684]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name\n"); );
            // Body
            get_type_name__Vfuncrtn = "uvm_objection"s;
            ++(vlSymsp->__Vcoverage[17685]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy\n"); );
            // Body
            IData/*31:0*/ __VlefExpr_0;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> _rhs;
            __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, _rhs);
            if (VL_UNLIKELY(((! __VlefExpr_0)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_objection.svh:1056: Assertion failed in %Nuvm_pkg.uvm_objection.do_copy: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1056, "");
            }
            this->__PVT__m_source_count = VL_NULL_CHECK(_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1057)
                ->__PVT__m_source_count;
            this->__PVT__m_total_count = VL_NULL_CHECK(_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1058)
                ->__PVT__m_total_count;
            this->__PVT__m_drain_time = VL_NULL_CHECK(_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1059)
                ->__PVT__m_drain_time;
            this->__PVT__m_prop_mode = VL_NULL_CHECK(_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_objection.svh", 1060)
                ->__PVT__m_prop_mode;
            ++(vlSymsp->__Vcoverage[17686]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0____VBasicRand;
            Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
            randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
            this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
            randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                   & __VlefCall_0____VBasicRand);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vsetup_constraints\n"); );
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::__VnoInFunc___VBasicRand\n"); );
            // Body
            __VBasicRand__Vfuncrtn = 1U;
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_objection::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::_ctor_var_reset\n"); );
            // Body
            (void)vlSymsp;  // Prevent unused variable warning
            __PVT__m_trace_mode = 0;
            __PVT__m_source_count.atDefault() = 0;
            __PVT__m_total_count.atDefault() = 0;
            __PVT__m_drain_time.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 17709275628653521742ULL, 4102563340287712520ull);
            __PVT__m_top_all_dropped = 0;
            __PVT__m_cleared = 0;
        }

        Vtb_rng_uvm_pkg__03a__03auvm_objection::~Vtb_rng_uvm_pkg__03a__03auvm_objection() {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::~\n"); );
        }

        std::string Vtb_rng_uvm_pkg__03a__03auvm_objection::to_string() const {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::to_string\n"); );
            // Body
            return ("'{"s + to_string_middle() + "}");
        }

        std::string Vtb_rng_uvm_pkg__03a__03auvm_objection::to_string_middle() const {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_objection::to_string_middle\n"); );
            // Body
            std::string out;
            out += "m_trace_mode:" + VL_TO_STRING(__PVT__m_trace_mode);
            out += ", m_source_count:" + VL_TO_STRING(__PVT__m_source_count);
            out += ", m_total_count:" + VL_TO_STRING(__PVT__m_total_count);
            out += ", m_drain_time:" + VL_TO_STRING(__PVT__m_drain_time);
            out += ", m_events:" + VL_TO_STRING(__PVT__m_events);
            out += ", m_top_all_dropped:" + VL_TO_STRING(__PVT__m_top_all_dropped);
            out += ", m_top:" + VL_TO_STRING(__PVT__m_top);
            out += ", m_drain_proc:" + VL_TO_STRING(__PVT__m_drain_proc);
            out += ", m_scheduled_contexts:" + VL_TO_STRING(__PVT__m_scheduled_contexts);
            out += ", m_forked_list:" + VL_TO_STRING(__PVT__m_forked_list);
            out += ", m_forked_contexts:" + VL_TO_STRING(__PVT__m_forked_contexts);
            out += ", m_prop_mode:" + VL_TO_STRING(__PVT__m_prop_mode);
            out += ", m_cleared:" + VL_TO_STRING(__PVT__m_cleared);
            out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_report_object::to_string_middle();
            return (out);
        }
