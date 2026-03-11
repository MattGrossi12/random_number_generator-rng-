// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCER_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_std__03a__03aprocess;
class Vtb_rng_uvm_pkg__03a__03a__VDynScope_28;
class Vtb_rng_uvm_pkg__03a__03a__VDynScope_34;
class Vtb_rng_uvm_pkg__03a__03a__VDynScope_35;
class Vtb_rng_uvm_pkg__03a__03am_uvm_sqr_seq_base;
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_factory;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5;
class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz12;
class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz28;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_base;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_seed_map;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_process_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_request;
class Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__g_request_id;
    IData/*31:0*/ __PVT__g_sequence_id;
    IData/*31:0*/ __PVT__g_sequencer_id;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base>> __PVT__all_sequencer_insts;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base : public Vtb_rng_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_auto_item_recording;
    IData/*31:0*/ __PVT__m_sequencer_id;
    IData/*31:0*/ __PVT__m_lock_arb_size;
    IData/*31:0*/ __PVT__m_arb_size;
    IData/*31:0*/ __PVT__m_wait_for_item_sequence_id;
    IData/*31:0*/ __PVT__m_wait_for_item_transaction_id;
    IData/*31:0*/ __PVT__m_wait_relevant_count;
    IData/*31:0*/ __PVT__m_max_zero_time_wait_relevant_count;
    IData/*31:0*/ __PVT__m_arbitration;
    IData/*31:0*/ __PVT__m_is_relevant_completed;
    QData/*63:0*/ __PVT__m_last_wait_relevant_time;
    VlAssocArray<IData/*31:0*/, CData/*0:0*/> __PVT__arb_completed;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_2__57__is_relevant_entries;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_1__58__is_relevant_entries;
    std::string __Vtask___VforkTask_3__188____VlefCall_2__get_full_name;
    std::string __Vtask___VforkTask_3__188____VlefCall_1__get_type_name;
    std::string __Vtask_get_type_name__191__Vfuncout;
    std::string __Vfunc_get_full_name__192__Vfuncout;
    std::string __Vfunc_uvm_create_random_seed__193__type_id;
    std::string __Vfunc_uvm_create_random_seed__193__inst_id;
    std::string __Vfunc_uvm_create_random_seed__193____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__195__Vfuncout;
    std::string __Vtask_uvm_report_error__196__id;
    std::string __Vtask_uvm_report_error__196__message;
    std::string __Vtask_uvm_report_error__196__filename;
    std::string __Vtask_uvm_report_error__196__context_name;
    std::string __Vfunc_uvm_oneway_hash__200__string_in;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request>> __PVT__arb_sequence_q;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>> __PVT__lock_list;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>> __PVT__reg_sequences;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase>, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_process_wrapper>> __PVT__m_default_sequences;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_28> __Vtask___VforkTask_2__57____VDynScope_m_wait_for_available_sequence_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_34> __Vtask___VforkTask_1__58___Vwrapped_unnamedblk238_6__DOT____VDynScope_unnamedblk238_6;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_base"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_current_grabber(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &current_grabber__Vfuncrtn);
    virtual void __VnoInFunc_disable_auto_item_recording(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_execute_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item);
    void __VnoInFunc_get_arbitration(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_arbitration__Vfuncrtn);
    virtual void __VnoInFunc_get_arbitration_sequence(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &get_arbitration_sequence__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_grab(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_has_do_available(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_has_lock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &has_lock__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_is_blocked(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &is_blocked__Vfuncrtn);
    void __VnoInFunc_is_child(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> child, CData/*0:0*/ &is_child__Vfuncrtn);
    virtual void __VnoInFunc_is_grabbed(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_grabbed__Vfuncrtn);
    void __VnoInFunc_kill_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual VlCoroutine __VnoInFunc_lock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_choose_next_request__Vfuncrtn);
    virtual void __VnoInFunc_m_find_number_driver_connections(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    void __VnoInFunc_m_find_sequence(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn);
    void __VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_lock_req(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ lock);
    virtual void __VnoInFunc_m_register_sequence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ &m_register_sequence__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    void __VnoInFunc_m_set_arbitration_completed(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ request_id);
    void __VnoInFunc_m_unlock_req(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_m_unregister_sequence(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id);
    void __VnoInFunc_m_update_lists(Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ request_id);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &is_relevant_entries, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_28> &__VDynScope_m_wait_for_available_sequence_0, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> is_relevant_entries, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_28> __VDynScope_m_wait_for_available_sequence_0, VlForkSync __Vfork_2__sync);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync);
  public:
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_arbitration(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ val);
    virtual void __VnoInFunc_set_max_zero_time_wait_relevant_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ new_val);
    virtual void __VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_start_phase_sequence____Vfork_7__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_35> __VDynScope_start_phase_sequence_7);
  public:
    virtual void __VnoInFunc_stop_phase_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_stop_sequences(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_ungrab(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_unlock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr);
    virtual void __VnoInFunc_user_priority_arbitration(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> avail_sequences, IData/*31:0*/ &user_priority_arbitration__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_5__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__4);
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base();
};


#endif  // guard
