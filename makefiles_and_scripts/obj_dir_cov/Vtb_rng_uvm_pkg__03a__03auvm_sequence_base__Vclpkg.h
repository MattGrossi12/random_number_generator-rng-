// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_std__03a__03aprocess;
class Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi8;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_factory;
class Vtb_rng_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13;
class Vtb_rng_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_recorder;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_sequence_base__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_sequence_base__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_sequence_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi8> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base : public Vtb_rng_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__response_queue_error_report_enabled;
    CData/*0:0*/ __PVT__do_not_randomize;
    CData/*0:0*/ __PVT__m_use_response_handler;
    CData/*0:0*/ __PVT__is_rel_default;
    CData/*0:0*/ __PVT__wait_rel_default;
    IData/*31:0*/ __PVT__m_sequence_state;
    IData/*31:0*/ __PVT__m_next_transaction_id;
    IData/*31:0*/ __PVT__m_priority;
    IData/*31:0*/ __PVT__m_wait_for_grant_semaphore;
    IData/*31:0*/ __PVT__response_queue_depth;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>, CData/*0:0*/> __PVT__children_array;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> __PVT__m_sqr_seq_ids;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> __PVT__m_tr_recorder;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item>> __PVT__response_queue;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __PVT__m_sequence_process;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30> __PVT__m_automatic_phase_objection_dap;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13> __PVT__m_starting_phase_dap;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_base"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_clean_exit_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clear_response_queue(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_create_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn);
    virtual void __VnoInFunc_do_kill(Vtb_rng__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_finish_item(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority);
    void __VnoInFunc_get_automatic_phase_objection(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get_base_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_priority(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn);
    virtual void __VnoInFunc_get_randomize_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_randomize_enabled__Vfuncrtn);
    void __VnoInFunc_get_response_queue_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn);
    void __VnoInFunc_get_response_queue_error_report_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_enabled__Vfuncrtn);
    void __VnoInFunc_get_sequence_state(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn);
    void __VnoInFunc_get_starting_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn);
    void __VnoInFunc_get_tr_handle(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_use_response_handler(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn);
    VlCoroutine __VnoInFunc_grab(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_has_lock(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn);
    void __VnoInFunc_is_blocked(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn);
    virtual void __VnoInFunc_is_item(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn);
    virtual void __VnoInFunc_is_relevant(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn);
    void __VnoInFunc_kill(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_lock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_m_get_sqr_sequence_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn);
    void __VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ create);
    void __VnoInFunc_m_kill(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_m_set_sqr_sequence_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id);
    virtual void __VnoInFunc_mid_do(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> this_item);
    virtual void __VnoInFunc_post_body(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_do(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> this_item);
    virtual void __VnoInFunc_post_start(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_body(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_do(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ is_item);
    virtual void __VnoInFunc_pre_start(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_put_base_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_response_handler(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> response);
    virtual void __VnoInFunc_send_request(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    void __VnoInFunc_set_priority(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    virtual void __VnoInFunc_set_randomize_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
    void __VnoInFunc_set_response_queue_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_response_queue_error_report_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    void __VnoInFunc_set_starting_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_start(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post);
  private:
    VlCoroutine __VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &__VlefCall_6__get_automatic_phase_objection, CData/*0:0*/ &call_pre_post, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, CData/*0:0*/ &__VlefCall_7__get_automatic_phase_objection, VlForkSync __Vfork_1__sync);
  public:
    virtual VlCoroutine __VnoInFunc_start_item(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_ungrab(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_unlock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_use_response_handler(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
    virtual VlCoroutine __VnoInFunc_wait_for_grant(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request);
    virtual VlCoroutine __VnoInFunc_wait_for_item_done(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id);
    virtual VlCoroutine __VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_for_sequence_state(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_base() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_sequence_base();
};


#endif  // guard
