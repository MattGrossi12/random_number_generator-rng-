// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_current_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &get_current_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_current_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_peek__0__t;
    // Body
    CData/*0:0*/ __VlefCall_0__try_peek;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t;
    {
        VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 90)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__0__t, __VlefCall_0__try_peek);
        t = __Vtask_try_peek__0__t;
        if (__VlefCall_0__try_peek) {
            ++(vlSymsp->__Vcoverage[20054]);
        } else {
            get_current_item__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_current_item__Vfuncrtn = t;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20055]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_last_req(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &last_req__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_last_req\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((n > this->__PVT__m_num_last_reqs)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, VL_SFORMATF_N_NX("Invalid last access (%0#), the max history is %0d",0,
                                                                                32,
                                                                                n,
                                                                                32,
                                                                                this->__PVT__m_num_last_reqs) , 0x000000c8U, ""s, 0U, ""s, 0U);
            last_req__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20057]);
        }
        if ((n == this->__PVT__m_last_req_buffer.size())) {
            last_req__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20059]);
        }
        last_req__Vfuncrtn = this->__PVT__m_last_req_buffer.at(n);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20060]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_last_rsp(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &last_rsp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_last_rsp\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((n > this->__PVT__m_num_last_rsps)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, VL_SFORMATF_N_NX("Invalid last access (%0#), the max history is %0d",0,
                                                                                32,
                                                                                n,
                                                                                32,
                                                                                this->__PVT__m_num_last_rsps) , 0x000000c8U, ""s, 0U, ""s, 0U);
            last_rsp__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20062]);
        }
        if ((n == this->__PVT__m_last_rsp_buffer.size())) {
            last_rsp__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20064]);
        }
        last_rsp__Vfuncrtn = this->__PVT__m_last_rsp_buffer.at(n);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20065]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_num_last_reqs = 1U;
    ++(vlSymsp->__Vcoverage[20050]);
    this->__PVT__num_last_items = 1U;
    ++(vlSymsp->__Vcoverage[20051]);
    this->__PVT__m_num_last_rsps = 1U;
    ++(vlSymsp->__Vcoverage[20052]);
    /*super.new*/;
    this->__PVT__rsp_export = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_analysis_export__Tz26, vlProcess, vlSymsp, "rsp_export"s, 
                                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_>{this});
    this->__PVT__sqr_rsp_analysis_fifo = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_, vlProcess, vlSymsp, "sqr_rsp_analysis_fifo"s, 
                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_>{this});
    VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 237)->__PVT__print_enabled = 0U;
    this->__PVT__m_req_fifo = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26, vlProcess, vlSymsp, "req_fifo"s, 
                                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_>{this}, 1U);
    VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 239)->__PVT__print_enabled = 0U;
    ++(vlSymsp->__Vcoverage[20066]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_do_print\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 248)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_last_reqs"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__m_num_last_reqs), 0x00000020U, 0x02000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 249)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_last_rsps"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__m_num_last_rsps), 0x00000020U, 0x02000000U, 0x2eU, ""s);
    ++(vlSymsp->__Vcoverage[20067]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_connect_phase\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__rsp_export, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 258)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 258)
                                                                                ->__PVT__analysis_export);
    ++(vlSymsp->__Vcoverage[20068]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_build_phase\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 267)->__PVT__sequencer_ptr 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_>{this};
    ++(vlSymsp->__Vcoverage[20069]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_send_request(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_send_request\n"); );
    // Body
    CData/*0:0*/ __VlefCall_4__try_put;
    IData/*31:0*/ __VlefCall_3__m_get_sqr_sequence_id;
    IData/*31:0*/ __VlefCall_2__get_transaction_id;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> param_t;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SNDREQ"s, "Send request sequence_ptr is null"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20070]);
    } else {
        ++(vlSymsp->__Vcoverage[20071]);
    }
    if (VL_GTS_III(32, 1U, VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 283)
                   ->__PVT__m_wait_for_grant_semaphore)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SNDREQ"s, "Send request called without wait_for_grant"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20072]);
    } else {
        ++(vlSymsp->__Vcoverage[20073]);
    }
    VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 286)->__PVT__m_wait_for_grant_semaphore 
        = (VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 286)
           ->__PVT__m_wait_for_grant_semaphore - (IData)(1U));
    param_t = t;
    if (rerandomize) {
        if ((VlNull{} != param_t)) {
            VL_NULL_CHECK(param_t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 290)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if ((0U != __VlefCond_1)) {
            ++(vlSymsp->__Vcoverage[20075]);
        } else {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SQRSNDREQ"s, "Failed to rerandomize sequence item in send_request"s, 0x000000c8U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[20074]);
        }
        ++(vlSymsp->__Vcoverage[20076]);
    } else {
        ++(vlSymsp->__Vcoverage[20077]);
    }
    VL_NULL_CHECK(param_t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 294)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_2__get_transaction_id);
    if ((0xffffffffU == __VlefCall_2__get_transaction_id)) {
        __Vincrement1 = VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 295)
            ->__PVT__m_next_transaction_id;
        VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 295)->__PVT__m_next_transaction_id 
            = ((IData)(1U) + VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 295)
               ->__PVT__m_next_transaction_id);
        VL_NULL_CHECK(param_t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 295)->__VnoInFunc_set_transaction_id(vlSymsp, __Vincrement1);
        ++(vlSymsp->__Vcoverage[20078]);
    } else {
        ++(vlSymsp->__Vcoverage[20079]);
    }
    this->__VnoInFunc_m_last_req_push_front(vlSymsp, param_t);
    ++(vlSymsp->__Vcoverage[20080]);
    VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 302)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_sequencer_id, 1U, __VlefCall_3__m_get_sqr_sequence_id);
    VL_NULL_CHECK(param_t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 302)->__VnoInFunc_set_sequence_id(vlSymsp, __VlefCall_3__m_get_sqr_sequence_id);
    VL_NULL_CHECK(t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 303)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_>{this});
    VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 304)->__VnoInFunc_try_put(vlProcess, vlSymsp, param_t, __VlefCall_4__try_put);
    if (__VlefCall_4__try_put) {
        ++(vlSymsp->__Vcoverage[20083]);
    } else {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRSNDREQGNI"s, "Concurrent calls to get_next_item() not supported. Consider using a semaphore to ensure that concurrent processes take turns in the driver"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20082]);
    }
    this->__PVT__m_num_reqs_sent = ((IData)(1U) + this->__PVT__m_num_reqs_sent);
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[20084]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_put_response\n"); );
    // Body
    IData/*31:0*/ __VlefCall_3__get_sequence_id;
    CData/*0:0*/ __VlefCall_2__get_use_response_handler;
    IData/*31:0*/ __VlefCall_1__get_sequence_id;
    IData/*31:0*/ __VlefCall_0__get_sequence_id;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr;
    {
        if ((VlNull{} == t)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRPUT"s, "Driver put a null response"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[20085]);
        } else {
            ++(vlSymsp->__Vcoverage[20086]);
        }
        this->__VnoInFunc_m_last_rsp_push_front(vlSymsp, t);
        this->__PVT__m_num_rsps_received = ((IData)(1U) 
                                            + this->__PVT__m_num_rsps_received);
        VL_NULL_CHECK(t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 328)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
        if ((0xffffffffU == __VlefCall_0__get_sequence_id)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRPUT"s, "Driver put a response with null sequence_id"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20088]);
        }
        VL_NULL_CHECK(t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 335)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        this->__VnoInFunc_m_find_sequence(vlSymsp, __VlefCall_1__get_sequence_id, sequence_ptr);
        if ((VlNull{} != sequence_ptr)) {
            VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 339)->__VnoInFunc_get_use_response_handler(vlSymsp, __VlefCall_2__get_use_response_handler);
            if (__VlefCall_2__get_use_response_handler) {
                VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 340)->__VnoInFunc_response_handler(vlSymsp, t);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[20090]);
            }
            VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 344)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
            ++(vlSymsp->__Vcoverage[20091]);
        } else {
            VL_NULL_CHECK(t, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 349)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_3__get_sequence_id);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Dropping response for sequence %0d, sequence not found.  Probable cause: sequence exited or has been killed",0,
                                                                                32,
                                                                                __VlefCall_3__get_sequence_id) , 0x000000c8U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[20092]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20093]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_analysis_write\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> response;
    response = t;
    ++(vlSymsp->__Vcoverage[20095]);
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, response);
    ++(vlSymsp->__Vcoverage[20096]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_reqs_sent(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_reqs_sent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_reqs_sent\n"); );
    // Body
    get_num_reqs_sent__Vfuncrtn = this->__PVT__m_num_reqs_sent;
    ++(vlSymsp->__Vcoverage[20097]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_rsps_received(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_rsps_received__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_rsps_received\n"); );
    // Body
    get_num_rsps_received__Vfuncrtn = this->__PVT__m_num_rsps_received;
    ++(vlSymsp->__Vcoverage[20098]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_set_num_last_reqs(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_set_num_last_reqs\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0x00000400U < max)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, "Invalid last size; 1024 is the maximum and will be used"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        max = 0x00000400U;
        ++(vlSymsp->__Vcoverage[20099]);
    } else {
        ++(vlSymsp->__Vcoverage[20100]);
    }
    while (((0U != this->__PVT__m_last_req_buffer.size()) 
            & (this->__PVT__m_last_req_buffer.size() 
               > max))) {
        std::ignore = this->__PVT__m_last_req_buffer.pop_back();
        ++(vlSymsp->__Vcoverage[20101]);
    }
    this->__PVT__m_num_last_reqs = max;
    this->__PVT__num_last_items = max;
    ++(vlSymsp->__Vcoverage[20102]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_last_reqs(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_reqs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_last_reqs\n"); );
    // Body
    get_num_last_reqs__Vfuncrtn = this->__PVT__m_num_last_reqs;
    ++(vlSymsp->__Vcoverage[20103]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_m_last_req_push_front(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_m_last_req_push_front\n"); );
    // Body
    {
        if ((0U != this->__PVT__m_num_last_reqs)) {
            ++(vlSymsp->__Vcoverage[20105]);
        } else {
            goto __Vlabel0;
        }
        if ((this->__PVT__m_last_req_buffer.size() 
             == this->__PVT__m_num_last_reqs)) {
            std::ignore = this->__PVT__m_last_req_buffer.pop_back();
            ++(vlSymsp->__Vcoverage[20106]);
        } else {
            ++(vlSymsp->__Vcoverage[20107]);
        }
        this->__PVT__m_last_req_buffer.push_front(item);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20108]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_set_num_last_rsps(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_set_num_last_rsps\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0x00000400U < max)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, "Invalid last size; 1024 is the maximum and will be used"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        max = 0x00000400U;
        ++(vlSymsp->__Vcoverage[20109]);
    } else {
        ++(vlSymsp->__Vcoverage[20110]);
    }
    while (((0U != this->__PVT__m_last_rsp_buffer.size()) 
            & (this->__PVT__m_last_rsp_buffer.size() 
               > max))) {
        std::ignore = this->__PVT__m_last_rsp_buffer.pop_back();
        ++(vlSymsp->__Vcoverage[20111]);
    }
    this->__PVT__m_num_last_rsps = max;
    ++(vlSymsp->__Vcoverage[20112]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_last_rsps(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_rsps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_get_num_last_rsps\n"); );
    // Body
    get_num_last_rsps__Vfuncrtn = this->__PVT__m_num_last_rsps;
    ++(vlSymsp->__Vcoverage[20113]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_m_last_rsp_push_front(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_m_last_rsp_push_front\n"); );
    // Body
    {
        if ((0U != this->__PVT__m_num_last_rsps)) {
            ++(vlSymsp->__Vcoverage[20115]);
        } else {
            goto __Vlabel0;
        }
        if ((this->__PVT__m_last_rsp_buffer.size() 
             == this->__PVT__m_num_last_rsps)) {
            std::ignore = this->__PVT__m_last_rsp_buffer.pop_back();
            ++(vlSymsp->__Vcoverage[20116]);
        } else {
            ++(vlSymsp->__Vcoverage[20117]);
        }
        this->__PVT__m_last_rsp_buffer.push_front(item);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20118]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_num_reqs_sent = 0;
    __PVT__m_num_rsps_received = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::~Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base_::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_last_req_buffer:" + VL_TO_STRING(__PVT__m_last_req_buffer);
    out += ", m_last_rsp_buffer:" + VL_TO_STRING(__PVT__m_last_rsp_buffer);
    out += ", m_num_last_reqs:" + VL_TO_STRING(__PVT__m_num_last_reqs);
    out += ", num_last_items:" + VL_TO_STRING(__PVT__num_last_items);
    out += ", m_num_last_rsps:" + VL_TO_STRING(__PVT__m_num_last_rsps);
    out += ", m_num_reqs_sent:" + VL_TO_STRING(__PVT__m_num_reqs_sent);
    out += ", m_num_rsps_received:" + VL_TO_STRING(__PVT__m_num_rsps_received);
    out += ", sqr_rsp_analysis_fifo:" + VL_TO_STRING(__PVT__sqr_rsp_analysis_fifo);
    out += ", rsp_export:" + VL_TO_STRING(__PVT__rsp_export);
    out += ", m_req_fifo:" + VL_TO_STRING(__PVT__m_req_fifo);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle();
    return (out);
}
