// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_phase::init(vlProcess, vlSymsp, name, 0U, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[16495]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_traverse\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_first_child__3__Vfuncout;
    __Vtask_get_first_child__3__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__6__Vfuncout;
    __Vtask_get_next_child__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__15__verbosity;
    __Vtask_uvm_report_info__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__15__line;
    __Vtask_uvm_report_info__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__15__report_enabled_checked;
    __Vtask_uvm_report_info__15__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
    __Vfunc_uvm_report_enabled__25__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
    __Vfunc_uvm_report_enabled__25__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_8__get_common_domain;
    std::string __VlefCall_7__get_name;
    std::string __VlefCall_6__get_name;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__get_next_child;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> __VlefCall_1__get_child;
    IData/*31:0*/ __VlefCall_0__get_first_child;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph;
    std::string name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> phase_domain;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> comp_domain;
    name = ""s;
    VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 53)->__VnoInFunc_get_domain(vlProcess, vlSymsp, phase_domain);
    VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 54)->__VnoInFunc_get_domain(vlSymsp, comp_domain);
    VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 56)->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__3__Vfuncout);
    __VlefCall_0__get_first_child = __Vtask_get_first_child__3__Vfuncout;
    if ((0U != __VlefCall_0__get_first_child)) {
        while (true) {
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 58)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_1__get_child);
            this->__VnoInFunc_traverse(vlProcess, vlSymsp, __VlefCall_1__get_child, phase, state);
            ++(vlSymsp->__Vcoverage[16496]);
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 59)->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__6__Vfuncout);
            __VlefCall_2__get_next_child = __Vtask_get_next_child__6__Vfuncout;
            if (!((0U != __VlefCall_2__get_next_child))) break;
            ++(vlSymsp->__Vcoverage[16497]);
        }
        ++(vlSymsp->__Vcoverage[16498]);
    } else {
        ++(vlSymsp->__Vcoverage[16499]);
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        this->__Vfunc_uvm_report_enabled__7__id = "PH_TRACE"s;
        __Vfunc_uvm_report_enabled__7__severity = 0U;
        __Vfunc_uvm_report_enabled__7__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __VlefCall_3__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 64)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 64)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            VL_NULL_CHECK(comp_domain, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 64)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
            VL_NULL_CHECK(phase_domain, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 64)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
            __Vtask_uvm_report_info__15__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__15__context_name = ""s;
            __Vtask_uvm_report_info__15__line = 0x00000040U;
            this->__Vtask_uvm_report_info__15__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh"s;
            __Vtask_uvm_report_info__15__verbosity = 0x000001f4U;
            __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name37
                .at(state);
            this->__Vtask_uvm_report_info__15__message 
                = VL_SFORMATF_N_NX("bottomup-phase phase=%@ state=%@ comp=%@ comp.domain=%@ phase.domain=%@",0,
                                   -1,&(__VlefCall_4__get_name),
                                   -1,&(__Vtemp_1),
                                   -1,&(__VlefCall_5__get_full_name),
                                   -1,&(__VlefCall_6__get_name),
                                   -1,&(__VlefCall_7__get_name)) ;
            this->__Vtask_uvm_report_info__15__id = "PH_TRACE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__15__id, this->__Vtask_uvm_report_info__15__message, __Vtask_uvm_report_info__15__verbosity, this->__Vtask_uvm_report_info__15__filename, __Vtask_uvm_report_info__15__line, this->__Vtask_uvm_report_info__15__context_name, (IData)(__Vtask_uvm_report_info__15__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[16500]);
        } else {
            ++(vlSymsp->__Vcoverage[16501]);
        }
        ++(vlSymsp->__Vcoverage[16502]);
    } else {
        ++(vlSymsp->__Vcoverage[16503]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __VlefCall_8__get_common_domain);
    if (((phase_domain == __VlefCall_8__get_common_domain) 
         || (phase_domain == comp_domain))) {
        if ((8U == state)) {
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 70)->__PVT__m_current_phase 
                = phase;
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 71)->__VnoInFunc_m_apply_verbosity_settings(vlProcess, vlSymsp, phase);
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 72)->__VnoInFunc_phase_started(vlProcess, vlSymsp, phase);
            ++(vlSymsp->__Vcoverage[16504]);
        } else if ((0x00000010U == state)) {
            unnamedblk1__DOT__ph = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase>{this};
            if (VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 76)
                ->__PVT__m_phase_imps.exists(VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase>{this})) {
                unnamedblk1__DOT__ph = VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 77)
                    ->__PVT__m_phase_imps.at(VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase>{this});
                ++(vlSymsp->__Vcoverage[16505]);
            } else {
                ++(vlSymsp->__Vcoverage[16506]);
            }
            VL_NULL_CHECK(unnamedblk1__DOT__ph, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 78)->__VnoInFunc_execute(vlProcess, vlSymsp, comp, phase);
            ++(vlSymsp->__Vcoverage[16507]);
        } else if ((0x00000020U == state)) {
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 81)->__VnoInFunc_phase_ready_to_end(vlSymsp, phase);
            ++(vlSymsp->__Vcoverage[16508]);
        } else if ((0x00000040U == state)) {
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 84)->__VnoInFunc_phase_ended(vlSymsp, phase);
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 85)->__PVT__m_current_phase = VlNull{};
            ++(vlSymsp->__Vcoverage[16509]);
        } else {
            this->__Vfunc_uvm_report_enabled__25__id = "PH_BADEXEC"s;
            __Vfunc_uvm_report_enabled__25__severity = 3U;
            __Vfunc_uvm_report_enabled__25__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__27__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), this->__Vfunc_uvm_report_enabled__25__id, __VlefCall_9__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_9__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADEXEC"s, "bottomup phase traverse internal error"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh"s, 0x00000058U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[16510]);
            } else {
                ++(vlSymsp->__Vcoverage[16511]);
            }
            ++(vlSymsp->__Vcoverage[16512]);
        }
        ++(vlSymsp->__Vcoverage[16513]);
    } else {
        ++(vlSymsp->__Vcoverage[16514]);
    }
    ++(vlSymsp->__Vcoverage[16515]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_execute(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_execute\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__33____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__33____VlefExpr_4 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__33____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__33____VlefExpr_3 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__33____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__33____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__33____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__35____Vincrement2;
    __Vfunc_uvm_instance_scope__35____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__36__verbosity;
    __Vtask_uvm_report_error__36__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__36__line;
    __Vtask_uvm_report_error__36__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__36__report_enabled_checked;
    __Vtask_uvm_report_error__36__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__40__Vfuncout;
    __Vfunc_uvm_oneway_hash__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__40__seed;
    __Vfunc_uvm_oneway_hash__40__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT___byte = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit;
    __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
    // Body
    IData/*31:0*/ __VlefCall_2__uvm_create_random_seed;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_type_name;
    VlClassRef<Vtb_rng_std__03a__03aprocess> proc;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, proc);
    VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 100)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 100)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__33__inst_id 
        = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__33__type_id 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__33__inst_id)) {
        this->__Vfunc_uvm_create_random_seed__33__inst_id = "__global__"s;
        ++(vlSymsp->__Vcoverage[321]);
    } else {
        ++(vlSymsp->__Vcoverage[322]);
    }
    if (vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__33__inst_id)) {
        ++(vlSymsp->__Vcoverage[324]);
    } else {
        __Vfunc_uvm_create_random_seed__33____VlefCall_0__new 
            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.at(this->__Vfunc_uvm_create_random_seed__33__inst_id) 
            = __Vfunc_uvm_create_random_seed__33____VlefCall_0__new;
        ++(vlSymsp->__Vcoverage[323]);
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__33__inst_id);
    __Vfunc_uvm_instance_scope__35____Vincrement2 = 0U;
    {
        if ((""s != this->__Vfunc_uvm_instance_scope__35__Vfuncout)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[303]);
        }
        VL_SFORMAT_NX(64,this->__Vfunc_uvm_instance_scope__35__Vfuncout
                      ,"%Nuvm_pkg.uvm_instance_scope",0,
                      vlSymsp->name());
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__35__Vfuncout) 
               - (IData)(1U));
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
            = VL_GETC_N(this->__Vfunc_uvm_instance_scope__35__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                 & (0x2eU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                & (0x3aU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
            __Vfunc_uvm_instance_scope__35____Vincrement2 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                   - (IData)(1U));
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = __Vfunc_uvm_instance_scope__35____Vincrement2;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__35__Vfuncout,__Vfunc_uvm_instance_scope__35____Vincrement2);
            ++(vlSymsp->__Vcoverage[304]);
        }
        if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
            __Vtask_uvm_report_error__36__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__36__context_name = ""s;
            __Vtask_uvm_report_error__36__line = 0U;
            this->__Vtask_uvm_report_error__36__filename = ""s;
            __Vtask_uvm_report_error__36__verbosity = 0U;
            this->__Vtask_uvm_report_error__36__message 
                = VL_SFORMATF_N_NX("Illegal name %@ in scope string",0,
                                   -1,&(this->__Vfunc_uvm_instance_scope__35__Vfuncout)) ;
            this->__Vtask_uvm_report_error__36__id = "SCPSTR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__37__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__38__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__36__id, this->__Vtask_uvm_report_error__36__message, __Vtask_uvm_report_error__36__verbosity, this->__Vtask_uvm_report_error__36__filename, __Vtask_uvm_report_error__36__line, this->__Vtask_uvm_report_error__36__context_name, (IData)(__Vtask_uvm_report_error__36__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[305]);
        } else {
            ++(vlSymsp->__Vcoverage[306]);
        }
        this->__Vfunc_uvm_instance_scope__35__Vfuncout 
            = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__35__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[307]);
    this->__Vfunc_uvm_create_random_seed__33____VlefCall_1__uvm_instance_scope 
        = this->__Vfunc_uvm_instance_scope__35__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__33__type_id 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__33____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__33__type_id);
    if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 175)
        ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__33__type_id)) {
        ++(vlSymsp->__Vcoverage[326]);
    } else {
        __Vfunc_uvm_oneway_hash__40__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__40__string_in 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__33__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__33__inst_id));
        if ((0U != __Vfunc_uvm_oneway_hash__40__seed)) {
            ++(vlSymsp->__Vcoverage[309]);
        } else {
            __Vfunc_uvm_oneway_hash__40__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
            ++(vlSymsp->__Vcoverage[308]);
        }
        __Vfunc_uvm_oneway_hash__40__Vfuncout = __Vfunc_uvm_oneway_hash__40__seed;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT___byte = 0U;
        __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT___byte = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT___byte, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__40__string_in))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__40__string_in,__Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT___byte);
                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[311]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    ++(vlSymsp->__Vcoverage[312]);
                } else {
                    ++(vlSymsp->__Vcoverage[313]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 1U;
                ++(vlSymsp->__Vcoverage[318]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    ++(vlSymsp->__Vcoverage[312]);
                } else {
                    ++(vlSymsp->__Vcoverage[313]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 2U;
                ++(vlSymsp->__Vcoverage[318]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    ++(vlSymsp->__Vcoverage[312]);
                } else {
                    ++(vlSymsp->__Vcoverage[313]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 3U;
                ++(vlSymsp->__Vcoverage[318]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    ++(vlSymsp->__Vcoverage[312]);
                } else {
                    ++(vlSymsp->__Vcoverage[313]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 4U;
                ++(vlSymsp->__Vcoverage[318]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    ++(vlSymsp->__Vcoverage[312]);
                } else {
                    ++(vlSymsp->__Vcoverage[313]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 5U;
                ++(vlSymsp->__Vcoverage[318]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    ++(vlSymsp->__Vcoverage[312]);
                } else {
                    ++(vlSymsp->__Vcoverage[313]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 6U;
                ++(vlSymsp->__Vcoverage[318]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    ++(vlSymsp->__Vcoverage[312]);
                } else {
                    ++(vlSymsp->__Vcoverage[313]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 7U;
                ++(vlSymsp->__Vcoverage[318]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    ++(vlSymsp->__Vcoverage[312]);
                } else {
                    ++(vlSymsp->__Vcoverage[313]);
                }
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit = 8U;
                ++(vlSymsp->__Vcoverage[318]);
                __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT___byte 
                    = ((IData)(1U) + __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT___byte);
                ++(vlSymsp->__Vcoverage[319]);
            }
            __Vlabel1: ;
        }
        __Vfunc_uvm_oneway_hash__40__Vfuncout = (__Vfunc_uvm_oneway_hash__40__Vfuncout 
                                                 + 
                                                 (~ 
                                                  ((((0x0000ff00U 
                                                      & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 8U)) 
                                                      | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                         >> 0x18U)))));
        if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
             & (~ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                   >> (7U & __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit))))) {
            ++(vlSymsp->__Vcoverage[314]);
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb)) 
                   & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                      >> (7U & __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit))))) {
            ++(vlSymsp->__Vcoverage[315]);
        }
        if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
             & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                >> (7U & __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit)))) {
            ++(vlSymsp->__Vcoverage[316]);
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb)) 
                   & (~ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                         >> (7U & __Vfunc_uvm_oneway_hash__40__unnamedblk1__DOT__unnamedblk2__DOT___bit)))))) {
            ++(vlSymsp->__Vcoverage[317]);
        }
        ++(vlSymsp->__Vcoverage[320]);
        __Vfunc_uvm_create_random_seed__33____VlefCall_2__uvm_oneway_hash 
            = __Vfunc_uvm_oneway_hash__40__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 176)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__33__type_id) 
            = __Vfunc_uvm_create_random_seed__33____VlefCall_2__uvm_oneway_hash;
        ++(vlSymsp->__Vcoverage[325]);
    }
    if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 178)
        ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__33__type_id)) {
        ++(vlSymsp->__Vcoverage[328]);
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 179)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__33__type_id) = 0U;
        ++(vlSymsp->__Vcoverage[327]);
    }
    __Vfunc_uvm_create_random_seed__33____VlefExpr_3 
        = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__33__type_id) 
           + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__33__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__33__type_id) 
        = __Vfunc_uvm_create_random_seed__33____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__33____VlefExpr_4 
        = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__33__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__33__type_id) 
        = __Vfunc_uvm_create_random_seed__33____VlefExpr_4;
    __VlefCall_2__uvm_create_random_seed = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 188)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__33__type_id);
    ++(vlSymsp->__Vcoverage[329]);
    VL_NULL_CHECK(proc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 100)->__VnoInFunc_srandom(vlSymsp, __VlefCall_2__uvm_create_random_seed);
    VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 102)->__PVT__m_current_phase 
        = phase;
    this->__VnoInFunc_exec_func(vlProcess, vlSymsp, comp, phase);
    ++(vlSymsp->__Vcoverage[16516]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::~Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_phase::to_string_middle();
    return (out);
}
