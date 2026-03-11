// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_std__03a__03amailbox__Tz13;
class Vtb_rng_std__03a__03aprocess;
class Vtb_rng_uvm_pkg__03a__03a__VDynScope_7;
class Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14;
class Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_domain;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_objection;
class Vtb_rng_uvm_pkg__03a__03auvm_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_phase_cb;
class Vtb_rng_uvm_pkg__03a__03auvm_phase_state_change;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_task_phase;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_phase_cb;
    CData/*0:0*/ __PVT__m_phase_trace;
    CData/*0:0*/ __PVT__m_use_ovm_run_semantic;
    IData/*31:0*/ __PVT__m_default_max_ready_to_end_iters;
    IData/*31:0*/ __PVT__m_print_successors__Vstatic__level;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_executing_phases;
    std::string __PVT__m_print_successors__Vstatic__spaces;
    std::string __Vfunc_uvm_report_enabled__2__id;
    std::string __Vtask_uvm_report_warning__6__id;
    std::string __Vtask_uvm_report_warning__6__message;
    std::string __Vtask_uvm_report_warning__6__filename;
    std::string __Vtask_uvm_report_warning__6__context_name;
    VlClassRef<Vtb_rng_std__03a__03amailbox__Tz13> __PVT__m_phase_hopper;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_default_max_ready_to_end_iterations(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_max_ready_to_end_iterations__Vfuncrtn);
    void __VnoInFunc_jump_all(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_m_run_phases(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_run_phases____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__phase);
  public:
    void __VnoInFunc_set_default_max_ready_to_end_iterations(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ max);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_phase : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_jump_bkwd;
    CData/*0:0*/ __PVT__m_jump_fwd;
    CData/*0:0*/ __PVT__m_premature_end;
    IData/*31:0*/ __PVT__m_phase_type;
    IData/*31:0*/ __PVT__m_state;
    IData/*31:0*/ __PVT__m_run_count;
    IData/*31:0*/ __PVT__max_ready_to_end_iters;
    IData/*31:0*/ __PVT__m_num_procs_not_yet_returned;
    IData/*31:0*/ __PVT__m_ready_to_end_count;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_predecessors;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __PVT__m_successors;
    std::string __Vfunc_uvm_report_enabled__16__id;
    std::string __Vfunc_uvm_report_enabled__24__id;
    std::string __Vfunc_uvm_report_enabled__33__id;
    std::string __Vfunc_uvm_report_enabled__42__id;
    std::string __Vfunc_uvm_report_enabled__51__id;
    std::string __Vfunc_uvm_report_enabled__60__id;
    std::string __Vfunc_uvm_report_enabled__66__id;
    std::string __Vfunc_uvm_report_enabled__71__id;
    std::string __Vfunc_uvm_report_enabled__76__id;
    std::string __Vfunc_uvm_report_enabled__82__id;
    std::string __Vfunc_uvm_report_enabled__90__id;
    std::string __Vfunc_uvm_report_enabled__98__id;
    std::string __Vfunc_uvm_report_enabled__109__id;
    std::string __Vtask_uvm_report_info__125__id;
    std::string __Vtask_uvm_report_info__125__message;
    std::string __Vtask_uvm_report_info__125__filename;
    std::string __Vtask_uvm_report_info__125__context_name;
    std::string __Vfunc_uvm_report_enabled__136__id;
    std::string __Vfunc_uvm_report_enabled__151__id;
    std::string __Vtask_uvm_report_info__157__id;
    std::string __Vtask_uvm_report_info__157__message;
    std::string __Vtask_uvm_report_info__157__filename;
    std::string __Vtask_uvm_report_info__157__context_name;
    std::string __Vfunc_uvm_report_enabled__202__id;
    std::string __Vtask_uvm_report_info__208__id;
    std::string __Vtask_uvm_report_info__208__message;
    std::string __Vtask_uvm_report_info__208__filename;
    std::string __Vtask_uvm_report_info__208__context_name;
    std::string __Vfunc_uvm_report_enabled__233__id;
    std::string __Vtask_uvm_report_info__239__id;
    std::string __Vtask_uvm_report_info__239__message;
    std::string __Vtask_uvm_report_info__239__filename;
    std::string __Vtask_uvm_report_info__239__context_name;
    std::string __Vtask___VforkTask_1__243____VlefCall_13__get_full_name;
    std::string __Vtask___VforkTask_1__243____VlefCall_10__get_full_name;
    std::string __Vtask___VforkTask_1__243____VlefCall_7__get_full_name;
    std::string __Vtask___VforkTask_1__243____VlefCall_4__get_full_name;
    std::string __Vtask___VforkTask_1__243____VlefCall_1__get_name;
    std::string __Vtask_get_name__246__Vfuncout;
    std::string __Vfunc_uvm_report_enabled__248__id;
    std::string __Vfunc_get_full_name__252__Vfuncout;
    std::string __Vtask_uvm_report_info__254__id;
    std::string __Vtask_uvm_report_info__254__message;
    std::string __Vtask_uvm_report_info__254__filename;
    std::string __Vtask_uvm_report_info__254__context_name;
    std::string __Vfunc_uvm_report_enabled__258__id;
    std::string __Vfunc_get_full_name__262__Vfuncout;
    std::string __Vtask_uvm_report_info__264__id;
    std::string __Vtask_uvm_report_info__264__message;
    std::string __Vtask_uvm_report_info__264__filename;
    std::string __Vtask_uvm_report_info__264__context_name;
    std::string __Vfunc_uvm_report_enabled__270__id;
    std::string __Vfunc_get_full_name__274__Vfuncout;
    std::string __Vtask_uvm_report_info__276__id;
    std::string __Vtask_uvm_report_info__276__message;
    std::string __Vtask_uvm_report_info__276__filename;
    std::string __Vtask_uvm_report_info__276__context_name;
    std::string __Vfunc_uvm_report_enabled__280__id;
    std::string __Vfunc_get_full_name__284__Vfuncout;
    std::string __Vtask_uvm_report_info__286__id;
    std::string __Vtask_uvm_report_info__286__message;
    std::string __Vtask_uvm_report_info__286__filename;
    std::string __Vtask_uvm_report_info__286__context_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_31__get_full_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_28__convert2string;
    std::string __Vtask___VforkTask_2__298____VlefCall_27__get_full_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_25__get_full_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_18__get_full_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_15__convert2string;
    std::string __Vtask___VforkTask_2__298____VlefCall_14__get_full_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_12__get_full_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_5__get_full_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_2__get_full_name;
    std::string __Vtask___VforkTask_2__298____VlefCall_0__get_name;
    std::string __Vfunc_get_name__299__Vfuncout;
    std::string __Vfunc_uvm_report_enabled__300__id;
    std::string __Vfunc_get_full_name__304__Vfuncout;
    std::string __Vtask_uvm_report_info__306__id;
    std::string __Vtask_uvm_report_info__306__message;
    std::string __Vtask_uvm_report_info__306__filename;
    std::string __Vtask_uvm_report_info__306__context_name;
    std::string __Vfunc_uvm_report_enabled__310__id;
    std::string __Vfunc_get_full_name__314__Vfuncout;
    std::string __Vtask_uvm_report_info__316__id;
    std::string __Vtask_uvm_report_info__316__message;
    std::string __Vtask_uvm_report_info__316__filename;
    std::string __Vtask_uvm_report_info__316__context_name;
    std::string __Vfunc_uvm_report_enabled__322__id;
    std::string __Vfunc_get_full_name__326__Vfuncout;
    std::string __Vtask_get_full_name__328__Vfuncout;
    std::string __Vtask_convert2string__329__Vfuncout;
    std::string __Vtask_uvm_report_info__330__id;
    std::string __Vtask_uvm_report_info__330__message;
    std::string __Vtask_uvm_report_info__330__filename;
    std::string __Vtask_uvm_report_info__330__context_name;
    std::string __Vfunc_uvm_report_enabled__334__id;
    std::string __Vfunc_uvm_report_enabled__339__id;
    std::string __Vfunc_get_full_name__343__Vfuncout;
    std::string __Vtask_uvm_report_info__345__id;
    std::string __Vtask_uvm_report_info__345__message;
    std::string __Vtask_uvm_report_info__345__filename;
    std::string __Vtask_uvm_report_info__345__context_name;
    std::string __Vfunc_uvm_report_enabled__351__id;
    std::string __Vfunc_get_full_name__355__Vfuncout;
    std::string __Vtask_get_full_name__357__Vfuncout;
    std::string __Vtask_convert2string__358__Vfuncout;
    std::string __Vtask_uvm_report_info__359__id;
    std::string __Vtask_uvm_report_info__359__message;
    std::string __Vtask_uvm_report_info__359__filename;
    std::string __Vtask_uvm_report_info__359__context_name;
    std::string __Vfunc_uvm_report_enabled__363__id;
    std::string __Vfunc_uvm_report_enabled__368__id;
    std::string __Vfunc_get_full_name__372__Vfuncout;
    std::string __Vtask_uvm_report_info__374__id;
    std::string __Vtask_uvm_report_info__374__message;
    std::string __Vtask_uvm_report_info__374__filename;
    std::string __Vtask_uvm_report_info__374__context_name;
    std::string __Vfunc_uvm_report_enabled__385__id;
    std::string __Vtask_uvm_report_info__393__id;
    std::string __Vtask_uvm_report_info__393__message;
    std::string __Vtask_uvm_report_info__393__filename;
    std::string __Vtask_uvm_report_info__393__context_name;
    std::string __Vfunc_uvm_report_enabled__397__id;
    std::string __Vtask_uvm_report_info__404__id;
    std::string __Vtask_uvm_report_info__404__message;
    std::string __Vtask_uvm_report_info__404__filename;
    std::string __Vtask_uvm_report_info__404__context_name;
    std::string __Vfunc_uvm_report_enabled__408__id;
    std::string __Vtask_uvm_report_info__414__id;
    std::string __Vtask_uvm_report_info__414__message;
    std::string __Vtask_uvm_report_info__414__filename;
    std::string __Vtask_uvm_report_info__414__context_name;
    std::string __Vfunc_uvm_report_enabled__419__id;
    std::string __Vtask_uvm_report_info__425__id;
    std::string __Vtask_uvm_report_info__425__message;
    std::string __Vtask_uvm_report_info__425__filename;
    std::string __Vtask_uvm_report_info__425__context_name;
    std::string __Vfunc_uvm_report_enabled__443__id;
    std::string __Vtask_uvm_report_info__449__id;
    std::string __Vtask_uvm_report_info__449__message;
    std::string __Vtask_uvm_report_info__449__filename;
    std::string __Vtask_uvm_report_info__449__context_name;
    std::string __Vfunc_uvm_report_enabled__465__id;
    std::string __Vtask_uvm_report_info__472__id;
    std::string __Vtask_uvm_report_info__472__message;
    std::string __Vtask_uvm_report_info__472__filename;
    std::string __Vtask_uvm_report_info__472__context_name;
    std::string __Vfunc_uvm_report_enabled__483__id;
    std::string __Vtask_uvm_report_info__489__id;
    std::string __Vtask_uvm_report_info__489__message;
    std::string __Vtask_uvm_report_info__489__filename;
    std::string __Vtask_uvm_report_info__489__context_name;
    std::string __Vfunc_uvm_report_enabled__496__id;
    std::string __Vtask_uvm_report_info__502__id;
    std::string __Vtask_uvm_report_info__502__message;
    std::string __Vtask_uvm_report_info__502__filename;
    std::string __Vtask_uvm_report_info__502__context_name;
    std::string __Vfunc_uvm_report_enabled__507__id;
    std::string __Vtask_uvm_report_info__513__id;
    std::string __Vtask_uvm_report_info__513__message;
    std::string __Vtask_uvm_report_info__513__filename;
    std::string __Vtask_uvm_report_info__513__context_name;
    std::string __Vfunc_uvm_report_enabled__517__id;
    std::string __Vtask_uvm_report_info__523__id;
    std::string __Vtask_uvm_report_info__523__message;
    std::string __Vtask_uvm_report_info__523__filename;
    std::string __Vtask_uvm_report_info__523__context_name;
    std::string __Vfunc_uvm_report_enabled__529__id;
    std::string __Vtask_uvm_report_error__535__id;
    std::string __Vtask_uvm_report_error__535__message;
    std::string __Vtask_uvm_report_error__535__filename;
    std::string __Vtask_uvm_report_error__535__context_name;
    std::string __Vfunc_uvm_report_enabled__549__id;
    std::string __Vfunc_uvm_report_enabled__555__id;
    std::string __Vfunc_uvm_report_enabled__563__id;
    std::string __Vfunc_uvm_report_enabled__568__id;
    std::string __Vfunc_uvm_report_enabled__574__id;
    std::string __Vfunc_uvm_report_enabled__580__id;
    std::string __Vfunc_uvm_report_enabled__588__id;
    std::string __Vfunc_uvm_report_enabled__593__id;
    std::string __Vfunc_uvm_report_enabled__598__id;
    std::string __Vtask_uvm_report_error__603__id;
    std::string __Vtask_uvm_report_error__603__message;
    std::string __Vtask_uvm_report_error__603__filename;
    std::string __Vtask_uvm_report_error__603__context_name;
    std::string __Vfunc_uvm_report_enabled__611__id;
    std::string __Vfunc_uvm_report_enabled__616__id;
    std::string __Vtask_uvm_report_info__621__id;
    std::string __Vtask_uvm_report_info__621__message;
    std::string __Vtask_uvm_report_info__621__filename;
    std::string __Vtask_uvm_report_info__621__context_name;
    std::string __Vfunc_uvm_report_enabled__625__id;
    std::string __Vtask_uvm_report_info__630__id;
    std::string __Vtask_uvm_report_info__630__message;
    std::string __Vtask_uvm_report_info__630__filename;
    std::string __Vtask_uvm_report_info__630__context_name;
    std::string __Vfunc_uvm_report_enabled__650__id;
    std::string __Vtask_uvm_report_info__655__id;
    std::string __Vtask_uvm_report_info__655__message;
    std::string __Vtask_uvm_report_info__655__filename;
    std::string __Vtask_uvm_report_info__655__context_name;
    std::string __Vfunc_uvm_report_enabled__667__id;
    std::string __Vtask_uvm_report_info__673__id;
    std::string __Vtask_uvm_report_info__673__message;
    std::string __Vtask_uvm_report_info__673__filename;
    std::string __Vtask_uvm_report_info__673__context_name;
    std::string __Vfunc_uvm_report_enabled__677__id;
    std::string __Vtask_uvm_report_info__682__id;
    std::string __Vtask_uvm_report_info__682__message;
    std::string __Vtask_uvm_report_info__682__filename;
    std::string __Vtask_uvm_report_info__682__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __PVT__m_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __PVT__m_imp;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __PVT__m_phase_proc;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __PVT__m_end_node;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> __PVT__m_sync;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> __PVT__phase_done;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __PVT__m_jump_phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_phase"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_phase(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> with_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> after_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> before_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> start_with_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> end_with_phase);
    void __VnoInFunc_clear(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ state);
    void __VnoInFunc_clear_successors(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ state, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> end_state);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_end_prematurely(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_exec_func(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_exec_task(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    VlCoroutine __VnoInFunc_execute_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_execute_phase____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __VDynScope_execute_phase_0);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__1);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VlefCall_9__uvm_report_enabled, std::string &__VlefCall_10__get_full_name, IData/*31:0*/ &__VlefCall_11__get_inst_id, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> &__VDynScope_execute_phase_0, VlForkSync __Vfork_4__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __VlefCall_9__uvm_report_enabled, std::string __VlefCall_10__get_full_name, IData/*31:0*/ __VlefCall_11__get_inst_id, VlForkSync __Vfork_5__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__2);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__3);
    VlCoroutine __VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_7> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync);
  public:
    void __VnoInFunc_find(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn);
    void __VnoInFunc_find_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &find_by_name__Vfuncrtn);
    void __VnoInFunc_get_adjacent_predecessor_nodes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> &pred);
    void __VnoInFunc_get_adjacent_successor_nodes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> &succ);
    void __VnoInFunc_get_begin_node(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_begin_node__Vfuncrtn);
    void __VnoInFunc_get_domain(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_domain_name__Vfuncrtn);
    void __VnoInFunc_get_end_node(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_end_node__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_imp(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn);
    void __VnoInFunc_get_jump_target(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn);
    virtual void __VnoInFunc_get_max_ready_to_end_iterations(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_ready_to_end_iterations__Vfuncrtn);
    void __VnoInFunc_get_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn);
    virtual void __VnoInFunc_get_objection_count(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn);
    void __VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_phase_type(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_type__Vfuncrtn);
    void __VnoInFunc_get_predecessors_for_successors(Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> &pred_of_succ);
    void __VnoInFunc_get_ready_to_end_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_ready_to_end_count__Vfuncrtn);
    void __VnoInFunc_get_run_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_run_count__Vfuncrtn);
    void __VnoInFunc_get_schedule(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ hier, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn);
    void __VnoInFunc_get_schedule_name(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ hier, std::string &get_schedule_name__Vfuncrtn);
    void __VnoInFunc_get_state(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_state__Vfuncrtn);
    void __VnoInFunc_is(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is__Vfuncrtn);
    void __VnoInFunc_is_after(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_after__Vfuncrtn);
    void __VnoInFunc_is_before(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_before__Vfuncrtn);
    void __VnoInFunc_is_domain(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_domain__Vfuncrtn);
    void __VnoInFunc_jump(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_kill(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_kill_successors(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_aa2string(Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> aa, std::string &m_aa2string__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn);
    void __VnoInFunc_m_find_predecessor_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &m_find_predecessor_by_name__Vfuncrtn);
    void __VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn);
    void __VnoInFunc_m_find_successor_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &m_find_successor_by_name__Vfuncrtn);
    virtual void __VnoInFunc_m_get_transitive_children(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>> &phases);
    void __VnoInFunc_m_print_successors(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_print_termination_state(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_report_null_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count, std::string action);
    void __VnoInFunc_m_terminate_phase(Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_jump_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_set_max_ready_to_end_iterations(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    void __VnoInFunc_sync(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> with_phase);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
    void __VnoInFunc_unsync(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> with_phase);
    VlCoroutine __VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ state, IData/*31:0*/ op);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_phase() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ phase_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_phase();
};


#endif  // guard
