// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer___Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz207> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer___Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz207__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20009]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz207> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz207__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[20010]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_item_done_get_trigger_data(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &item_done_get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_item_done_get_trigger_data\n"); );
    // Body
    this->__VnoInFunc_last_rsp(vlSymsp, 0U, item_done_get_trigger_data__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20011]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__seq_item_export = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi109, vlProcess, vlSymsp, "seq_item_export"s, 
                                          VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_>{this});
    ++(vlSymsp->__Vcoverage[20012]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_stop_sequences(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_stop_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__used;
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(vlSymsp);
    this->__PVT__sequence_item_requested = 0U;
    this->__PVT__get_next_item_called = 0U;
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170)->__VnoInFunc_used(vlSymsp, __VlefCall_0__used);
    if ((0U != __VlefCall_0__used)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), "Sequences stopped.  Removing request from sequencer fifo"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 172)->__VnoInFunc_flush(vlSymsp);
        ++(vlSymsp->__Vcoverage[20013]);
    } else {
        ++(vlSymsp->__Vcoverage[20014]);
    }
    ++(vlSymsp->__Vcoverage[20015]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequencer"s;
    ++(vlSymsp->__Vcoverage[20016]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_m_find_number_driver_connections(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_m_find_number_driver_connections\n"); );
    // Body
    VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208>> provided_to_port_list;
    m_find_number_driver_connections__Vfuncrtn = 0U;
    provided_to_port_list.clear();
    VL_NULL_CHECK(this->__PVT__seq_item_export, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 197)->__VnoInFunc_get_provided_to(vlSymsp, provided_to_port_list);
    m_find_number_driver_connections__Vfuncrtn = provided_to_port_list.size();
    ++(vlSymsp->__Vcoverage[20017]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__13__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    if (this->__PVT__get_next_item_called) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "Get_next_item called twice without item_done or get in between"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20018]);
    } else {
        ++(vlSymsp->__Vcoverage[20019]);
    }
    if (this->__PVT__sequence_item_requested) {
        ++(vlSymsp->__Vcoverage[20021]);
    } else {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[20020]);
    }
    this->__PVT__sequence_item_requested = 1U;
    this->__PVT__get_next_item_called = 1U;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 222)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__13__t);
    t = __Vtask_peek__13__t;
    if ((1U & (~ (IData)(this->__PVT__sequence_item_requested)))) {
        ++(vlSymsp->__Vcoverage[20022]);
    }
    if (this->__PVT__sequence_item_requested) {
        ++(vlSymsp->__Vcoverage[20023]);
    }
    ++(vlSymsp->__Vcoverage[20024]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_try_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_peek__21__t;
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
            ++(vlSymsp->__Vcoverage[20026]);
        }
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
        if ((0xffffffffU == selected_sequence)) {
            t = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20028]);
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
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__21__t, __VlefCall_1__try_peek);
        t = __Vtask_try_peek__21__t;
        if (__VlefCall_1__try_peek) {
            ++(vlSymsp->__Vcoverage[20030]);
        } else {
            VL_NULL_CHECK(seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 266)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "TRY_NEXT_BLOCKED"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("try_next_item: the selected sequence '"s, __VlefCall_2__get_full_name), "' did not produce an item within an NBA delay. "s), "Sequences should not consume time between calls to start_item and finish_item. "s), "Returning null item."s)), 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[20029]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20031]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_item_done(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_item_done\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_get__24__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__try_get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t;
    this->__PVT__sequence_item_requested = 0U;
    this->__PVT__get_next_item_called = 0U;
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__24__t, __VlefCall_0__try_get);
    t = __Vtask_try_get__24__t;
    if (__VlefCall_0__try_get) {
        VL_NULL_CHECK(t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 287)->__VnoInFunc_get_sequence_id(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_sequence_id);
        VL_NULL_CHECK(t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 288)->__VnoInFunc_get_transaction_id(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_transaction_id);
        ++(vlSymsp->__Vcoverage[20033]);
    } else {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRBADITMDN"s, "Item_done() called with no outstanding requests. Each call to item_done() must be paired with a previous call to get_next_item()."s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20032]);
    }
    if ((VlNull{} != item)) {
        VL_NULL_CHECK(this->__PVT__seq_item_export, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 292)->__VnoInFunc_put_response(vlSymsp, item);
        ++(vlSymsp->__Vcoverage[20034]);
    } else {
        ++(vlSymsp->__Vcoverage[20035]);
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[20036]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
    ++(vlSymsp->__Vcoverage[20037]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__32__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if (this->__PVT__sequence_item_requested) {
        ++(vlSymsp->__Vcoverage[20039]);
    } else {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[20038]);
    }
    this->__PVT__sequence_item_requested = 1U;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 316)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__32__t);
    t = __Vtask_peek__32__t;
    this->__VnoInFunc_item_done(vlSymsp, VlNull{});
    ++(vlSymsp->__Vcoverage[20040]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__35__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if (this->__PVT__sequence_item_requested) {
        ++(vlSymsp->__Vcoverage[20042]);
    } else {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[20041]);
    }
    this->__PVT__sequence_item_requested = 1U;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 333)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__35__t);
    t = __Vtask_peek__35__t;
    ++(vlSymsp->__Vcoverage[20043]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_item_done_trigger(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_item_done_trigger\n"); );
    // Body
    this->__VnoInFunc_item_done(vlSymsp, item);
    ++(vlSymsp->__Vcoverage[20044]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__sequence_item_requested = 0;
    __PVT__get_next_item_called = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::~Vtb_rng_uvm_pkg__03a__03auvm_sequencer_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_::to_string_middle\n"); );
    // Body
    std::string out;
    out += "sequence_item_requested:" + VL_TO_STRING(__PVT__sequence_item_requested);
    out += ", get_next_item_called:" + VL_TO_STRING(__PVT__get_next_item_called);
    out += ", seq_item_export:" + VL_TO_STRING(__PVT__seq_item_export);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::to_string_middle();
    return (out);
}
