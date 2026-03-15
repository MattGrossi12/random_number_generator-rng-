// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz296> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz296__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20191]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz296> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz296__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[20192]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_item_done_get_trigger_data(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &item_done_get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_item_done_get_trigger_data\n"); );
    // Body
    this->__VnoInFunc_last_rsp(vlSymsp, 0U, item_done_get_trigger_data__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20193]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__seq_item_export = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165, vlProcess, vlSymsp, "seq_item_export"s, 
                                          VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229>{this});
    ++(vlSymsp->__Vcoverage[20194]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_stop_sequences(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_stop_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__used;
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(vlSymsp);
    this->__PVT__sequence_item_requested = 0U;
    this->__PVT__get_next_item_called = 0U;
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170)->__VnoInFunc_used(vlSymsp, __VlefCall_0__used);
    if ((0U != __VlefCall_0__used)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), "Sequences stopped.  Removing request from sequencer fifo"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 172)->__VnoInFunc_flush(vlSymsp);
        ++(vlSymsp->__Vcoverage[20195]);
    } else {
        ++(vlSymsp->__Vcoverage[20196]);
    }
    ++(vlSymsp->__Vcoverage[20197]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequencer"s;
    ++(vlSymsp->__Vcoverage[20198]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_m_find_number_driver_connections(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_m_find_number_driver_connections\n"); );
    // Body
    VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297>> provided_to_port_list;
    m_find_number_driver_connections__Vfuncrtn = 0U;
    provided_to_port_list.clear();
    VL_NULL_CHECK(this->__PVT__seq_item_export, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 197)->__VnoInFunc_get_provided_to(vlSymsp, provided_to_port_list);
    m_find_number_driver_connections__Vfuncrtn = provided_to_port_list.size();
    ++(vlSymsp->__Vcoverage[20199]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_get_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__13__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    if (this->__PVT__get_next_item_called) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "Get_next_item called twice without item_done or get in between"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20200]);
    } else {
        ++(vlSymsp->__Vcoverage[20201]);
    }
    if (this->__PVT__sequence_item_requested) {
        ++(vlSymsp->__Vcoverage[20203]);
    } else {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[20202]);
    }
    this->__PVT__sequence_item_requested = 1U;
    this->__PVT__get_next_item_called = 1U;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 222)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__13__t);
    t = __Vtask_peek__13__t;
    if ((1U & (~ (IData)(this->__PVT__sequence_item_requested)))) {
        ++(vlSymsp->__Vcoverage[20204]);
    }
    if (this->__PVT__sequence_item_requested) {
        ++(vlSymsp->__Vcoverage[20205]);
    }
    ++(vlSymsp->__Vcoverage[20206]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_try_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_peek__21__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__try_peek;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ selected_sequence;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> seq;
    {
        selected_sequence = 0U;
        if (this->__PVT__get_next_item_called) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "get_next_item/try_next_item called twice without item_done or get in between"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20208]);
        }
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
        if ((0xffffffffU == selected_sequence)) {
            t = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20210]);
        }
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.at(selected_sequence), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 253)
                                                      ->__PVT__request_id);
        seq = VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.at(selected_sequence), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 254)
            ->__PVT__sequence_ptr;
        Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.erase(selected_sequence);
        this->__VnoInFunc_m_update_lists(vlSymsp);
        this->__PVT__sequence_item_requested = 1U;
        this->__PVT__get_next_item_called = 1U;
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__21__t, __VlefCall_1__try_peek);
        t = __Vtask_try_peek__21__t;
        if (__VlefCall_1__try_peek) {
            ++(vlSymsp->__Vcoverage[20212]);
        } else {
            VL_NULL_CHECK(seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 266)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "TRY_NEXT_BLOCKED"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("try_next_item: the selected sequence '"s, __VlefCall_2__get_full_name), "' did not produce an item within an NBA delay. "s), "Sequences should not consume time between calls to start_item and finish_item. "s), "Returning null item."s)), 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[20211]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20213]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_item_done(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_item_done\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_get__24__t;
    // Body
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t;
    this->__PVT__sequence_item_requested = 0U;
    this->__PVT__get_next_item_called = 0U;
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283)->__VnoInFunc_try_get(vlProcess, vlSymsp, __Vtask_try_get__24__t, __VlefCall_0__try_get);
    t = __Vtask_try_get__24__t;
    if (__VlefCall_0__try_get) {
        VL_NULL_CHECK(t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 287)->__VnoInFunc_get_sequence_id(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_sequence_id);
        VL_NULL_CHECK(t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 288)->__VnoInFunc_get_transaction_id(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_transaction_id);
        ++(vlSymsp->__Vcoverage[20215]);
    } else {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRBADITMDN"s, "Item_done() called with no outstanding requests. Each call to item_done() must be paired with a previous call to get_next_item()."s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20214]);
    }
    if ((VlNull{} != item)) {
        VL_NULL_CHECK(this->__PVT__seq_item_export, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 292)->__VnoInFunc_put_response(vlProcess, vlSymsp, item);
        ++(vlSymsp->__Vcoverage[20216]);
    } else {
        ++(vlSymsp->__Vcoverage[20217]);
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[20218]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
    ++(vlSymsp->__Vcoverage[20219]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__32__t;
    // Body
    VL_KEEP_THIS;
    if (this->__PVT__sequence_item_requested) {
        ++(vlSymsp->__Vcoverage[20221]);
    } else {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[20220]);
    }
    this->__PVT__sequence_item_requested = 1U;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 316)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__32__t);
    t = __Vtask_peek__32__t;
    this->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    ++(vlSymsp->__Vcoverage[20222]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_peek(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__35__t;
    // Body
    VL_KEEP_THIS;
    if (this->__PVT__sequence_item_requested) {
        ++(vlSymsp->__Vcoverage[20224]);
    } else {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[20223]);
    }
    this->__PVT__sequence_item_requested = 1U;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 333)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__35__t);
    t = __Vtask_peek__35__t;
    ++(vlSymsp->__Vcoverage[20225]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_item_done_trigger(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_item_done_trigger\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_item_done(vlProcess, vlSymsp, item);
    ++(vlSymsp->__Vcoverage[20226]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__sequence_item_requested = 0;
    __PVT__get_next_item_called = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::~Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229::to_string_middle\n"); );
    // Body
    std::string out;
    out += "sequence_item_requested:" + VL_TO_STRING(__PVT__sequence_item_requested);
    out += ", get_next_item_called:" + VL_TO_STRING(__PVT__get_next_item_called);
    out += ", seq_item_export:" + VL_TO_STRING(__PVT__seq_item_export);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166::to_string_middle();
    return (out);
}
