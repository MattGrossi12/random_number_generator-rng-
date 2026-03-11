// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_disable_auto_item_recording(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    this->__PVT__m_auto_item_recording = 0U;
    ++(vlSymsp->__Vcoverage[19734]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_auto_item_recording_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = this->__PVT__m_auto_item_recording;
    ++(vlSymsp->__Vcoverage[19735]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_wait_relevant_count = 0U;
    ++(vlSymsp->__Vcoverage[19727]);
    this->__PVT__m_max_zero_time_wait_relevant_count = 0x0000000aU;
    ++(vlSymsp->__Vcoverage[19728]);
    this->__PVT__m_last_wait_relevant_time = 0ULL;
    ++(vlSymsp->__Vcoverage[19729]);
    this->__PVT__m_arbitration = 0U;
    ++(vlSymsp->__Vcoverage[19730]);
    this->__PVT__m_auto_item_recording = 1U;
    ++(vlSymsp->__Vcoverage[19733]);
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    /*super.new*/;
    __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id);
    this->__PVT__m_sequencer_id = __Vincrement1;
    this->__PVT__m_lock_arb_size = 0xffffffffU;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__all_sequencer_insts.at(this->__PVT__m_sequencer_id) 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base>{this};
    ++(vlSymsp->__Vcoverage[19736]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ __VlefCall_1__get_sequence_id;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk230__DOT__i;
    unnamedblk230__DOT__i = 0;
    IData/*31:0*/ unnamedblk231__DOT__i;
    unnamedblk231__DOT__i = 0;
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 442)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "arbitration_queue"s, this->__PVT__arb_sequence_q.size(), "array"s, 0x2eU);
    unnamedblk230__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk230__DOT__i, this->__PVT__arb_sequence_q.size())) {
        __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name71
            [(1U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk230__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 445)
              ->__PVT__request)];
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 444)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk230__DOT__i) , VL_SFORMATF_N_NX("%@@seqid%0d",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                32,
                                                                                VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk230__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 445)
                                                                                ->__PVT__sequence_id) , 0x5bU);
        unnamedblk230__DOT__i = ((IData)(1U) + unnamedblk230__DOT__i);
        ++(vlSymsp->__Vcoverage[19737]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 446)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__arb_sequence_q.size());
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 448)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "lock_queue"s, this->__PVT__lock_list.size(), "array"s, 0x2eU);
    unnamedblk231__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk231__DOT__i, this->__PVT__lock_list.size())) {
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk231__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 451)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk231__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 451)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 450)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk231__DOT__i) , VL_SFORMATF_N_NX("%@@seqid%0d",0,
                                                                                -1,
                                                                                &(__VlefCall_0__get_full_name),
                                                                                32,
                                                                                __VlefCall_1__get_sequence_id) , 0x5bU);
        unnamedblk231__DOT__i = ((IData)(1U) + unnamedblk231__DOT__i);
        ++(vlSymsp->__Vcoverage[19738]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 452)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__lock_list.size());
    ++(vlSymsp->__Vcoverage[19739]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists\n"); );
    // Body
    this->__PVT__m_lock_arb_size = ((IData)(1U) + this->__PVT__m_lock_arb_size);
    ++(vlSymsp->__Vcoverage[19740]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ __VlefCall_0__get_sequence_id;
    IData/*31:0*/ unnamedblk232__DOT__i;
    unnamedblk232__DOT__i = 0;
    IData/*31:0*/ unnamedblk233__DOT__i;
    unnamedblk233__DOT__i = 0;
    std::string s;
    s = ""s;
    VL_SFORMAT_NX(64,s,"  -- arb i/id/type: ",0);
    unnamedblk232__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk232__DOT__i, this->__PVT__arb_sequence_q.size())) {
        __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name71
            [(1U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk232__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 472)
              ->__PVT__request)];
        VL_SFORMAT_NX(64,s,"%@ %0d/%0d/%@ ",0,-1,&(s),
                      32,unnamedblk232__DOT__i,32,VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk232__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 472)
                      ->__PVT__sequence_id,-1,&(__Vtemp_1));
        unnamedblk232__DOT__i = ((IData)(1U) + unnamedblk232__DOT__i);
        ++(vlSymsp->__Vcoverage[19741]);
    }
    VL_SFORMAT_NX(64,s,"%@\n -- lock_list i/id: ",0,
                  -1,&(s));
    unnamedblk233__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk233__DOT__i, this->__PVT__lock_list.size())) {
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk233__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 476)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
        VL_SFORMAT_NX(64,s,"%@ %0d/%0d",0,-1,&(s),32,
                      unnamedblk233__DOT__i,32,__VlefCall_0__get_sequence_id);
        unnamedblk233__DOT__i = ((IData)(1U) + unnamedblk233__DOT__i);
        ++(vlSymsp->__Vcoverage[19742]);
    }
    convert2string__Vfuncrtn = s;
    ++(vlSymsp->__Vcoverage[19743]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_number_driver_connections(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_number_driver_connections\n"); );
    // Body
    m_find_number_driver_connections__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[19744]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ &m_register_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_sequence_id;
    IData/*31:0*/ __VlefCall_0__m_get_sqr_sequence_id;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    {
        m_register_sequence__Vfuncrtn = 0U;
        VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 496)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __VlefCall_0__m_get_sqr_sequence_id);
        if (VL_LTS_III(32, 0U, __VlefCall_0__m_get_sqr_sequence_id)) {
            VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 497)->__VnoInFunc_get_sequence_id(vlSymsp, m_register_sequence__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19746]);
        }
        __Vincrement2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id);
        VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 499)->__VnoInFunc_m_set_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, __Vincrement2);
        VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 500)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        this->__PVT__reg_sequences.at(__VlefCall_1__get_sequence_id) 
            = sequence_ptr;
        VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 501)->__VnoInFunc_get_sequence_id(vlSymsp, m_register_sequence__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19747]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ i;
    {
        i = 0U;
        if ((0xffffffffU == sequence_id)) {
            __VlefExpr_0 = (0U != this->__PVT__reg_sequences.first(i));
            if (__VlefExpr_0) {
                m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
                    .at(i);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19749]);
            }
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19751]);
        }
        if (this->__PVT__reg_sequences.exists(sequence_id)) {
            ++(vlSymsp->__Vcoverage[19753]);
        } else {
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
            .at(sequence_id);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19754]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence\n"); );
    // Body
    {
        if (this->__PVT__reg_sequences.exists(sequence_id)) {
            ++(vlSymsp->__Vcoverage[19756]);
        } else {
            goto __Vlabel0;
        }
        this->__PVT__reg_sequences.erase(sequence_id);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19757]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> avail_sequences, IData/*31:0*/ &user_priority_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration\n"); );
    // Body
    user_priority_arbitration__Vfuncrtn = avail_sequences.at(0U);
    ++(vlSymsp->__Vcoverage[19758]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks\n"); );
    // Locals
    IData/*31:0*/ __Vtask_status__16__Vfuncout;
    __Vtask_status__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_status__17__Vfuncout;
    __Vtask_status__17__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_blocked__23__Vfuncout;
    __Vfunc_is_blocked__23__Vfuncout = 0;
    // Body
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request>> unnamedblk234__DOT__zombies;
    IData/*31:0*/ unnamedblk234__DOT__unnamedblk235__DOT__idx;
    unnamedblk234__DOT__unnamedblk235__DOT__idx = 0;
    VlQueue<IData/*31:0*/> unnamedblk236__DOT__lock_req_indices;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request> unnamedblk236__DOT__unnamedblk237__DOT__lock_req;
    unnamedblk234__DOT__zombies.clear();
    unnamedblk234__DOT__zombies = this->__PVT__arb_sequence_q.find(
                                                                   [&](
                                                                       IData/*31:0*/ item__DOT__index, 
                                                                       VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request> item) -> 
                                                                   CData/*31:0*/ {
            return (((1U == VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                      ->__PVT__request) && ((4U == 
                                             ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(
                                                                item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                                                  ->__PVT__process_id, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                                              ->__VnoInFunc_status(vlSymsp, __Vtask_status__16__Vfuncout);
                                }(), __Vtask_status__16__Vfuncout)) 
                                            || (0U 
                                                == 
                                                ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(
                                                                item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                                                  ->__PVT__process_id, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                                                 ->__VnoInFunc_status(vlSymsp, __Vtask_status__17__Vfuncout);
                                }(), __Vtask_status__17__Vfuncout)))));
        }
    );
    unnamedblk234__DOT__unnamedblk235__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk234__DOT__unnamedblk235__DOT__idx, unnamedblk234__DOT__zombies.size())) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SEQLCKZMB"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk234__DOT__zombies.at(unnamedblk234__DOT__unnamedblk235__DOT__idx), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 557)
                          ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 557)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQLCKZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a lock on sequencer '%@' for sequence '%@' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",0,
                                                                                -1,
                                                                                &(__VlefCall_1__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_2__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x0000022dU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[19759]);
        } else {
            ++(vlSymsp->__Vcoverage[19760]);
        }
        this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk234__DOT__zombies.at(unnamedblk234__DOT__unnamedblk235__DOT__idx), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 558)
                                                      ->__PVT__sequence_ptr);
        unnamedblk234__DOT__unnamedblk235__DOT__idx 
            = ((IData)(1U) + unnamedblk234__DOT__unnamedblk235__DOT__idx);
        ++(vlSymsp->__Vcoverage[19761]);
    }
    unnamedblk236__DOT__lock_req_indices.clear();
    unnamedblk236__DOT__lock_req_indices.atDefault() = 0;
    unnamedblk236__DOT__lock_req_indices = this->__PVT__arb_sequence_q.find_first_index(
                                                                                [&](
                                                                                IData/*31:0*/ item__DOT__index, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request> item) -> 
                                                                                CData/*31:0*/ {
            return (((1U == VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 565)
                      ->__PVT__request) && (1U & (~ 
                                                  ([&]() {
                                    this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(
                                                                                item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 565)
                                                                 ->__PVT__sequence_ptr, __Vfunc_is_blocked__23__Vfuncout);
                                }(), (IData)(__Vfunc_is_blocked__23__Vfuncout))))));
        }
    );
    if ((0U != unnamedblk236__DOT__lock_req_indices.size())) {
        unnamedblk236__DOT__unnamedblk237__DOT__lock_req 
            = this->__PVT__arb_sequence_q.at(unnamedblk236__DOT__lock_req_indices.at(0U));
        this->__PVT__lock_list.push_back(VL_NULL_CHECK(unnamedblk236__DOT__unnamedblk237__DOT__lock_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 568)
                                         ->__PVT__sequence_ptr);
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(unnamedblk236__DOT__unnamedblk237__DOT__lock_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 569)
                                                      ->__PVT__request_id);
        this->__PVT__arb_sequence_q.erase(unnamedblk236__DOT__lock_req_indices.at(0U));
        this->__VnoInFunc_m_update_lists(vlSymsp);
        ++(vlSymsp->__Vcoverage[19762]);
    } else {
        ++(vlSymsp->__Vcoverage[19763]);
    }
    ++(vlSymsp->__Vcoverage[19764]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ selected_sequence;
    selected_sequence = 0U;
    while (true) {
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
        if ((0xffffffffU == selected_sequence)) {
            co_await this->__VnoInFunc_m_wait_for_available_sequence(vlProcess, vlSymsp);
            ++(vlSymsp->__Vcoverage[19765]);
        } else {
            ++(vlSymsp->__Vcoverage[19766]);
        }
        ++(vlSymsp->__Vcoverage[19767]);
        if (!((0xffffffffU == selected_sequence))) break;
        ++(vlSymsp->__Vcoverage[19768]);
    }
    if (VL_LTES_III(32, 0U, selected_sequence)) {
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(selected_sequence), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 593)
                                                      ->__PVT__request_id);
        this->__PVT__arb_sequence_q.erase(selected_sequence);
        this->__VnoInFunc_m_update_lists(vlSymsp);
        ++(vlSymsp->__Vcoverage[19769]);
    } else {
        ++(vlSymsp->__Vcoverage[19770]);
    }
    ++(vlSymsp->__Vcoverage[19771]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_choose_next_request__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request\n"); );
    // Body
    std::string __VlefCall_14__convert2string;
    IData/*31:0*/ __VlefCall_13__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_12__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_11__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_10__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_9__m_get_seq_item_priority;
    CData/*0:0*/ __VlefCall_8__is_blocked;
    CData/*0:0*/ __VlefCall_7__is_relevant;
    CData/*0:0*/ __VlefCall_6__is_blocked;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    IData/*31:0*/ i;
    IData/*31:0*/ temp;
    IData/*31:0*/ sum_priority_val;
    VlQueue<IData/*31:0*/> avail_sequences;
    VlQueue<IData/*31:0*/> highest_sequences;
    IData/*31:0*/ highest_pri;
    {
        m_choose_next_request__Vfuncrtn = 0U;
        i = 0U;
        temp = 0U;
        sum_priority_val = 0U;
        avail_sequences.clear();
        avail_sequences.atDefault() = 0;
        highest_sequences.clear();
        highest_sequences.atDefault() = 0;
        highest_pri = 0U;
        this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
        i = 0U;
        while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
            {
                VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 623)
                              ->__PVT__process_id, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 623)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
                __VlefLogOr_2 = (4U == __VlefCall_0__status);
                if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 624)
                                  ->__PVT__process_id, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 624)->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                    __VlefLogOr_2 = (0U == __VlefCall_1__status);
                }
                if (__VlefLogOr_2) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SEQREQZMB"s, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 625)
                                      ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 625)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQREQZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a wait_for_grant on sequencer '%@' for sequence '%@' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",0,
                                                                                -1,
                                                                                &(__VlefCall_4__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_5__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000271U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[19772]);
                    } else {
                        ++(vlSymsp->__Vcoverage[19773]);
                    }
                    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 626)
                                                                  ->__PVT__sequence_ptr);
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[19775]);
                }
                if (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
                    if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 631)
                         ->__PVT__request)) {
                        this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 632)
                                                     ->__PVT__sequence_ptr, __VlefCall_6__is_blocked);
                        if (__VlefCall_6__is_blocked) {
                            ++(vlSymsp->__Vcoverage[19781]);
                        } else {
                            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 633)
                                          ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 633)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_7__is_relevant);
                            if (__VlefCall_7__is_relevant) {
                                if ((0U == this->__PVT__m_arbitration)) {
                                    m_choose_next_request__Vfuncrtn 
                                        = i;
                                    goto __Vlabel0;
                                } else {
                                    avail_sequences.push_back(i);
                                    ++(vlSymsp->__Vcoverage[19777]);
                                }
                                ++(vlSymsp->__Vcoverage[19778]);
                            } else {
                                ++(vlSymsp->__Vcoverage[19779]);
                            }
                            ++(vlSymsp->__Vcoverage[19780]);
                        }
                        ++(vlSymsp->__Vcoverage[19782]);
                    } else {
                        ++(vlSymsp->__Vcoverage[19783]);
                    }
                    ++(vlSymsp->__Vcoverage[19784]);
                } else {
                    ++(vlSymsp->__Vcoverage[19785]);
                }
                i = ((IData)(1U) + i);
                __Vlabel1: ;
            }
            ++(vlSymsp->__Vcoverage[19786]);
        }
        if ((0U == this->__PVT__m_arbitration)) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19788]);
        }
        if (VL_GTS_III(32, 1U, avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19790]);
        }
        if ((1U == avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19792]);
        }
        if (VL_LTS_III(32, 0U, this->__PVT__lock_list.size())) {
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 659)
                                             ->__PVT__sequence_ptr, __VlefCall_8__is_blocked);
                if (__VlefCall_8__is_blocked) {
                    avail_sequences.erase(i);
                    i = (i - (IData)(1U));
                    ++(vlSymsp->__Vcoverage[19793]);
                } else {
                    ++(vlSymsp->__Vcoverage[19794]);
                }
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[19795]);
            }
            if (VL_GTS_III(32, 1U, avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = 0xffffffffU;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19797]);
            }
            if ((1U == avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19799]);
            }
            ++(vlSymsp->__Vcoverage[19800]);
        } else {
            ++(vlSymsp->__Vcoverage[19801]);
        }
        if ((1U == this->__PVT__m_arbitration)) {
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_9__m_get_seq_item_priority);
                sum_priority_val = (sum_priority_val 
                                    + __VlefCall_9__m_get_seq_item_priority);
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[19802]);
            }
            temp = VL_URANDOM_RANGE_I((sum_priority_val 
                                       - (IData)(1U)), 0U);
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_10__m_get_seq_item_priority);
                if (VL_GTS_III(32, (__VlefCall_10__m_get_seq_item_priority 
                                    + sum_priority_val), temp)) {
                    m_choose_next_request__Vfuncrtn 
                        = avail_sequences.at(i);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[19804]);
                }
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_11__m_get_seq_item_priority);
                sum_priority_val = (sum_priority_val 
                                    + __VlefCall_11__m_get_seq_item_priority);
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[19805]);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "UVM Internal error in weighted arbitration code"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19806]);
        } else {
            ++(vlSymsp->__Vcoverage[19807]);
        }
        if ((2U == this->__PVT__m_arbitration)) {
            i = VL_URANDOM_RANGE_I((avail_sequences.size() 
                                    - (IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = avail_sequences.at(i);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19809]);
        }
        if (((3U == this->__PVT__m_arbitration) | (4U 
                                                   == this->__PVT__m_arbitration))) {
            highest_pri = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_12__m_get_seq_item_priority);
                if (VL_GTS_III(32, __VlefCall_12__m_get_seq_item_priority, highest_pri)) {
                    highest_sequences.clear();
                    highest_sequences.push_back(avail_sequences.at(i));
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), highest_pri);
                    ++(vlSymsp->__Vcoverage[19812]);
                } else {
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_13__m_get_seq_item_priority);
                    if ((__VlefCall_13__m_get_seq_item_priority 
                         == highest_pri)) {
                        highest_sequences.push_back(avail_sequences.at(i));
                        ++(vlSymsp->__Vcoverage[19810]);
                    } else {
                        ++(vlSymsp->__Vcoverage[19811]);
                    }
                }
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[19813]);
            }
            if ((3U == this->__PVT__m_arbitration)) {
                m_choose_next_request__Vfuncrtn = highest_sequences.at(0U);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19815]);
            }
            i = VL_URANDOM_RANGE_I((highest_sequences.size() 
                                    - (IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = highest_sequences.at(i);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19817]);
        }
        if ((5U == this->__PVT__m_arbitration)) {
            this->__VnoInFunc_user_priority_arbitration(vlSymsp, avail_sequences, i);
            highest_sequences = avail_sequences.find(
                                                     [&](
                                                         IData/*31:0*/ item__DOT__index, 
                                                         IData/*31:0*/ item) -> 
                                                     CData/*31:0*/ {
                    return ((item == i));
                }
            );
            if ((0U == highest_sequences.size())) {
                this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_14__convert2string);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Error in User arbitration, sequence %0d not available\n%@",0,
                                                                                32,
                                                                                i,
                                                                                -1,
                                                                                &(__VlefCall_14__convert2string)) , 0U, ""s, 0U, ""s, 0U);
                ++(vlSymsp->__Vcoverage[19821]);
            } else {
                ++(vlSymsp->__Vcoverage[19822]);
            }
            m_choose_next_request__Vfuncrtn = i;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19824]);
        }
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "Internal error: Failed to choose sequence"s, 0U, ""s, 0U, ""s, 0U);
        __Vlabel0: ;
    }
    if ((4U == this->__PVT__m_arbitration)) {
        ++(vlSymsp->__Vcoverage[19818]);
    }
    if ((3U == this->__PVT__m_arbitration)) {
        ++(vlSymsp->__Vcoverage[19819]);
    }
    if (((3U != this->__PVT__m_arbitration) & (4U != this->__PVT__m_arbitration))) {
        ++(vlSymsp->__Vcoverage[19820]);
    }
    ++(vlSymsp->__Vcoverage[19825]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h04eda68f__0;
    __Vtrigprevexpr_h04eda68f__0 = 0;
    // Body
    VL_KEEP_THIS;
    if ((this->__PVT__m_arb_size == this->__PVT__m_lock_arb_size)) {
        CData/*0:0*/ __VdynTrigger_hff116f33__0;
        __VdynTrigger_hff116f33__0 = 0;
        __VdynTrigger_hff116f33__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hff116f33__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         745);
            __Vtrigprevexpr_h04eda68f__0 = (this->__PVT__m_arb_size 
                                            != this->__PVT__m_lock_arb_size);
            __VdynTrigger_hff116f33__0 = __Vtrigprevexpr_h04eda68f__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hff116f33__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                     745);
    }
    ++(vlSymsp->__Vcoverage[19826]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_1__is_relevant;
    CData/*0:0*/ __VlefCall_0__is_blocked;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_28> __VDynScope_m_wait_for_available_sequence_0;
    VlQueue<IData/*31:0*/> is_relevant_entries;
    __VDynScope_m_wait_for_available_sequence_0 = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_28, vlSymsp);
    {
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 753)->__PVT__i = 0U;
        is_relevant_entries.clear();
        is_relevant_entries.atDefault() = 0;
        this->__PVT__m_arb_size = this->__PVT__m_lock_arb_size;
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 760)->__PVT__i = 0U;
        while (VL_LTS_III(32, VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 760)
                          ->__PVT__i, this->__PVT__arb_sequence_q.size())) {
            if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 761)
                                                                    ->__PVT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 761)
                 ->__PVT__request)) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 762)
                                                                                ->__PVT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 762)
                                             ->__PVT__sequence_ptr, __VlefCall_0__is_blocked);
                if (__VlefCall_0__is_blocked) {
                    ++(vlSymsp->__Vcoverage[19830]);
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 763)
                                                                               ->__PVT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 763)
                                  ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 763)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_1__is_relevant);
                    if (__VlefCall_1__is_relevant) {
                        ++(vlSymsp->__Vcoverage[19828]);
                    } else {
                        is_relevant_entries.push_back(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 764)
                                                      ->__PVT__i);
                        ++(vlSymsp->__Vcoverage[19827]);
                    }
                    ++(vlSymsp->__Vcoverage[19829]);
                }
                ++(vlSymsp->__Vcoverage[19831]);
            } else {
                ++(vlSymsp->__Vcoverage[19832]);
            }
            VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 760)->__PVT__i 
                = ((IData)(1U) + VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 760)
                   ->__PVT__i);
            ++(vlSymsp->__Vcoverage[19833]);
        }
        if ((0U == is_relevant_entries.size())) {
            co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19835]);
        }
        {
            VlForkSync __Vfork_1__sync;
            __Vfork_1__sync.init(1U, vlProcess);
            this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, is_relevant_entries, __VDynScope_m_wait_for_available_sequence_0, __Vfork_1__sync);
            co_await __Vfork_1__sync.join(vlProcess, 
                                          "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                          776);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19843]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &is_relevant_entries, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_28> &__VDynScope_m_wait_for_available_sequence_0, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, is_relevant_entries, __VDynScope_m_wait_for_available_sequence_0, __Vfork_2__sync);
        co_await __Vfork_2__sync.join(vlProcess, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                      778);
    }
    vlProcess->disableFork();
    __Vfork_1__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                         777);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> is_relevant_entries, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_28> __VDynScope_m_wait_for_available_sequence_0, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    this->__Vtask___VforkTask_2__57__is_relevant_entries 
        = is_relevant_entries;
    this->__Vtask___VforkTask_2__57____VDynScope_m_wait_for_available_sequence_0 
        = __VDynScope_m_wait_for_available_sequence_0;
    {
        VlForkSync __Vfork_3__sync;
        __Vfork_3__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        co_await __Vfork_3__sync.join(vlProcess, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                      780);
    }
    __Vfork_2__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                         779);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
    __Vfork_3__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                         810);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_28> __Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __Vtrigprevexpr_h106fedde__0;
    __Vtrigprevexpr_h106fedde__0 = 0;
    this->__Vtask___VforkTask_1__58__is_relevant_entries 
        = this->__Vtask___VforkTask_2__57__is_relevant_entries;
    __Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0 
        = this->__Vtask___VforkTask_2__57____VDynScope_m_wait_for_available_sequence_0;
    this->__PVT__m_is_relevant_completed = 0U;
    VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 785)->__PVT__i = 0U;
    while (VL_LTS_III(32, VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 785)
                      ->__PVT__i, this->__Vtask___VforkTask_1__58__is_relevant_entries.size())) {
        this->__Vtask___VforkTask_1__58___Vwrapped_unnamedblk238_6__DOT____VDynScope_unnamedblk238_6 
            = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_34, vlSymsp);
        VL_NULL_CHECK(this->__Vtask___VforkTask_1__58___Vwrapped_unnamedblk238_6__DOT____VDynScope_unnamedblk238_6, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 787)->__PVT__k 
            = VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 787)
            ->__PVT__i;
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 785)->__PVT__i 
            = ((IData)(1U) + VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 785)
               ->__PVT__i);
        ++(vlSymsp->__Vcoverage[19842]);
    }
    if (VL_GTES_III(32, 0U, this->__PVT__m_is_relevant_completed)) {
        CData/*0:0*/ __VdynTrigger_h368fb77e__0;
        __VdynTrigger_h368fb77e__0 = 0;
        __VdynTrigger_h368fb77e__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h368fb77e__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         806);
            __Vtrigprevexpr_h106fedde__0 = VL_LTS_III(32, 0U, this->__PVT__m_is_relevant_completed);
            __VdynTrigger_h368fb77e__0 = __Vtrigprevexpr_h106fedde__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h368fb77e__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                     806);
    }
    __Vfork_3__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                         781);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0\n"); );
    // Locals
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_0__60__is_relevant_entries;
    __Vtask___VforkTask_0__60__is_relevant_entries.atDefault() = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_34> __Vtask___VforkTask_0__60____VDynScope_unnamedblk238_6;
    IData/*31:0*/ __Vtask___VforkTask_0__60____VlefCall_0__uvm_report_enabled;
    __Vtask___VforkTask_0__60____VlefCall_0__uvm_report_enabled = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62__Vfuncout;
    __Vfunc_uvm_report_enabled__62__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__60____VDynScope_unnamedblk238_6 
        = this->__Vtask___VforkTask_1__58___Vwrapped_unnamedblk238_6__DOT____VDynScope_unnamedblk238_6;
    __Vtask___VforkTask_0__60__is_relevant_entries 
        = this->__Vtask___VforkTask_1__58__is_relevant_entries;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                            786);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(__Vtask___VforkTask_0__60__is_relevant_entries.at(VL_NULL_CHECK(__Vtask___VforkTask_0__60____VDynScope_unnamedblk238_6, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 790)
                                                                                ->__PVT__k)), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 790)
                           ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 790)->__VnoInFunc_wait_for_relevant(vlProcess, vlSymsp);
    if ((VL_TIME_UNITED_D(1) != VL_ITOR_D_Q(64, this->__PVT__m_last_wait_relevant_time))) {
        this->__PVT__m_last_wait_relevant_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__m_wait_relevant_count = 0U;
        ++(vlSymsp->__Vcoverage[19840]);
    } else {
        this->__PVT__m_wait_relevant_count = ((IData)(1U) 
                                              + this->__PVT__m_wait_relevant_count);
        if (VL_GTS_III(32, this->__PVT__m_wait_relevant_count, this->__PVT__m_max_zero_time_wait_relevant_count)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "SEQRELEVANTLOOP"s, __Vfunc_uvm_report_enabled__62__Vfuncout);
            __Vtask___VforkTask_0__60____VlefCall_0__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__62__Vfuncout;
            if ((0U != __Vtask___VforkTask_0__60____VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRELEVANTLOOP"s, VL_SFORMATF_N_NX("Zero time loop detected, passed wait_for_relevant %0d times without time advancing",0,
                                                                                32,
                                                                                this->__PVT__m_wait_relevant_count) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x0000031eU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[19836]);
            } else {
                ++(vlSymsp->__Vcoverage[19837]);
            }
            ++(vlSymsp->__Vcoverage[19838]);
        } else {
            ++(vlSymsp->__Vcoverage[19839]);
        }
        ++(vlSymsp->__Vcoverage[19841]);
    }
    this->__PVT__m_is_relevant_completed = 1U;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority\n"); );
    // Body
    IData/*31:0*/ __VlefCall_3__get_priority;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__get_priority;
    std::string __VlefCall_0__get_full_name;
    {
        m_get_seq_item_priority__Vfuncrtn = 0U;
        if ((0xffffffffU != VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 827)
             ->__PVT__item_priority)) {
            if (VL_GTES_III(32, 0U, VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 828)
                            ->__PVT__item_priority)) {
                VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 831)
                              ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 831)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQITEMPRI"s, VL_SFORMATF_N_NX("Sequence item from %@ has illegal priority: %0d",0,
                                                                                -1,
                                                                                &(__VlefCall_0__get_full_name),
                                                                                32,
                                                                                VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 832)
                                                                                ->__PVT__item_priority) , 0U, ""s, 0U, ""s, 0U);
                ++(vlSymsp->__Vcoverage[19844]);
            } else {
                ++(vlSymsp->__Vcoverage[19845]);
            }
            m_get_seq_item_priority__Vfuncrtn = VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 834)
                ->__PVT__item_priority;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19847]);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 837)
                      ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 837)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_1__get_priority);
        if (VL_GTS_III(32, 0U, __VlefCall_1__get_priority)) {
            VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 840)
                          ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 840)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 841)
                          ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 841)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_3__get_priority);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQDEFPRI"s, VL_SFORMATF_N_NX("Sequence %@ has illegal priority: %0d",0,
                                                                                -1,
                                                                                &(__VlefCall_2__get_full_name),
                                                                                32,
                                                                                __VlefCall_3__get_priority) , 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19848]);
        } else {
            ++(vlSymsp->__Vcoverage[19849]);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 843)
                      ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 843)->__VnoInFunc_get_priority(vlSymsp, m_get_seq_item_priority__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19850]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h5bb7b22f__0;
    __Vtrigprevexpr_h5bb7b22f__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ lock_arb_size;
    {
        lock_arb_size = 0U;
        while (true) {
            lock_arb_size = this->__PVT__m_lock_arb_size;
            if (this->__PVT__arb_completed.exists(request_id)) {
                this->__PVT__arb_completed.erase(request_id);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19852]);
            }
            if ((lock_arb_size == this->__PVT__m_lock_arb_size)) {
                CData/*0:0*/ __VdynTrigger_h69b782d3__0;
                __VdynTrigger_h69b782d3__0 = 0;
                __VdynTrigger_h69b782d3__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h69b782d3__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                                 862);
                    __Vtrigprevexpr_h5bb7b22f__0 = 
                        (lock_arb_size != this->__PVT__m_lock_arb_size);
                    __VdynTrigger_h69b782d3__0 = __Vtrigprevexpr_h5bb7b22f__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h69b782d3__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                             862);
            }
            ++(vlSymsp->__Vcoverage[19853]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19854]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed\n"); );
    // Body
    this->__PVT__arb_completed.at(request_id) = 1U;
    ++(vlSymsp->__Vcoverage[19855]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> child, CData/*0:0*/ &is_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> child_parent;
    {
        is_child__Vfuncrtn = 0U;
        if ((VlNull{} == child)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null child"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19856]);
        } else {
            ++(vlSymsp->__Vcoverage[19857]);
        }
        if ((VlNull{} == parent)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null parent"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19858]);
        } else {
            ++(vlSymsp->__Vcoverage[19859]);
        }
        VL_NULL_CHECK(child, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 890)->__VnoInFunc_get_parent_sequence(vlSymsp, child_parent);
        while ((VlNull{} != child_parent)) {
            VL_NULL_CHECK(child_parent, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 892)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 892)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            if ((__VlefCall_0__get_inst_id == __VlefCall_1__get_inst_id)) {
                is_child__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19861]);
            }
            VL_NULL_CHECK(child_parent, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 895)->__VnoInFunc_get_parent_sequence(vlSymsp, child_parent);
            ++(vlSymsp->__Vcoverage[19862]);
        }
        is_child__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19863]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_execute_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_execute_item\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_sqr_seq_base> seq;
    seq = VL_NEW(Vtb_rng_uvm_pkg__03a__03am_uvm_sqr_seq_base, vlProcess, vlSymsp, "execute_item_seq"s);
    VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 916)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base>{this});
    VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 917)->__VnoInFunc_set_parent_sequence(vlSymsp, seq);
    VL_NULL_CHECK(seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 918)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base>{this});
    co_await VL_NULL_CHECK(seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 919)->__VnoInFunc_start_item(vlProcess, vlSymsp, item, 0xffffffffU, VlNull{});
    co_await VL_NULL_CHECK(seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 920)->__VnoInFunc_finish_item(vlProcess, vlSymsp, item, 0xffffffffU);
    ++(vlSymsp->__Vcoverage[19864]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __VlefCall_1__self;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __VlefCall_0__self;
    IData/*31:0*/ __Vincrement4;
    __Vincrement4 = 0;
    IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request> req_s;
    IData/*31:0*/ my_seq_id;
    my_seq_id = 0U;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "wait_for_grant passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[19865]);
    } else {
        ++(vlSymsp->__Vcoverage[19866]);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
    if (lock_request) {
        req_s = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
        VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 943)->__PVT__grant = 0U;
        VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 944)->__PVT__sequence_id 
            = my_seq_id;
        VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 945)->__PVT__request = 1U;
        VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 946)->__PVT__sequence_ptr 
            = sequence_ptr;
        __Vincrement3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
        VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 947)->__PVT__request_id 
            = __Vincrement3;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_0__self);
        VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 948)->__PVT__process_id 
            = __VlefCall_0__self;
        this->__PVT__arb_sequence_q.push_back(req_s);
        ++(vlSymsp->__Vcoverage[19867]);
    } else {
        ++(vlSymsp->__Vcoverage[19868]);
    }
    req_s = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 954)->__PVT__grant = 0U;
    VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 955)->__PVT__request = 0U;
    VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 956)->__PVT__sequence_id 
        = my_seq_id;
    VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 957)->__PVT__item_priority 
        = item_priority;
    VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 958)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement4 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 959)->__PVT__request_id 
        = __Vincrement4;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_1__self);
    VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 960)->__PVT__process_id 
        = __VlefCall_1__self;
    this->__PVT__arb_sequence_q.push_back(req_s);
    this->__VnoInFunc_m_update_lists(vlSymsp);
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 966)
                                                                ->__PVT__request_id);
    VL_NULL_CHECK(VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 971)
                  ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 971)->__PVT__m_wait_for_grant_semaphore 
        = ((IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(req_s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 971)
                                       ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 971)
           ->__PVT__m_wait_for_grant_semaphore);
    ++(vlSymsp->__Vcoverage[19869]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h67d8d083__0;
    __Vtrigprevexpr_h67d8d083__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hff6c2189__0;
    __Vtrigprevexpr_hff6c2189__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ sequence_id;
    sequence_id = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 983)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, sequence_id);
    this->__PVT__m_wait_for_item_sequence_id = 0xffffffffU;
    this->__PVT__m_wait_for_item_transaction_id = 0xffffffffU;
    if ((0xffffffffU == transaction_id)) {
        if ((this->__PVT__m_wait_for_item_sequence_id 
             != sequence_id)) {
            CData/*0:0*/ __VdynTrigger_h0592f409__0;
            __VdynTrigger_h0592f409__0 = 0;
            __VdynTrigger_h0592f409__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h0592f409__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                             988);
                __Vtrigprevexpr_hff6c2189__0 = (this->__PVT__m_wait_for_item_sequence_id 
                                                == sequence_id);
                __VdynTrigger_h0592f409__0 = __Vtrigprevexpr_hff6c2189__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0592f409__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         988);
        }
        ++(vlSymsp->__Vcoverage[19873]);
    } else {
        if ((1U & (~ ((this->__PVT__m_wait_for_item_sequence_id 
                       == sequence_id) & (this->__PVT__m_wait_for_item_transaction_id 
                                          == transaction_id))))) {
            CData/*0:0*/ __VdynTrigger_h5e26a52f__0;
            __VdynTrigger_h5e26a52f__0 = 0;
            __VdynTrigger_h5e26a52f__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h5e26a52f__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                             990);
                __Vtrigprevexpr_h67d8d083__0 = ((this->__PVT__m_wait_for_item_sequence_id 
                                                 == sequence_id) 
                                                & (this->__PVT__m_wait_for_item_transaction_id 
                                                   == transaction_id));
                __VdynTrigger_h5e26a52f__0 = __Vtrigprevexpr_h67d8d083__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5e26a52f__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         990);
        }
        if (((this->__PVT__m_wait_for_item_sequence_id 
              == sequence_id) & (this->__PVT__m_wait_for_item_transaction_id 
                                 == transaction_id))) {
            ++(vlSymsp->__Vcoverage[19870]);
        }
        if ((this->__PVT__m_wait_for_item_transaction_id 
             != transaction_id)) {
            ++(vlSymsp->__Vcoverage[19871]);
        }
        if ((this->__PVT__m_wait_for_item_sequence_id 
             != sequence_id)) {
            ++(vlSymsp->__Vcoverage[19872]);
        }
        ++(vlSymsp->__Vcoverage[19874]);
    }
    ++(vlSymsp->__Vcoverage[19875]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_3;
    CData/*0:0*/ __VlefCall_2__is_child;
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ unnamedblk239__DOT__i;
    unnamedblk239__DOT__i = 0;
    {
        is_blocked__Vfuncrtn = 0U;
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "is_blocked passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19876]);
        } else {
            ++(vlSymsp->__Vcoverage[19877]);
        }
        unnamedblk239__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk239__DOT__i, this->__PVT__lock_list.size())) {
            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk239__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1005)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1006)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            __VlefLogAnd_3 = (__VlefCall_0__get_inst_id 
                              != __VlefCall_1__get_inst_id);
            if (__VlefLogAnd_3) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, this->__PVT__lock_list.at(unnamedblk239__DOT__i), sequence_ptr, __VlefCall_2__is_child);
                __VlefLogAnd_3 = (1U & (~ (IData)(__VlefCall_2__is_child)));
            }
            if (__VlefLogAnd_3) {
                is_blocked__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19879]);
            }
            unnamedblk239__DOT__i = ((IData)(1U) + unnamedblk239__DOT__i);
            ++(vlSymsp->__Vcoverage[19880]);
        }
        is_blocked__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19881]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_lock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &has_lock__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_lock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ unnamedblk240__DOT__i;
    unnamedblk240__DOT__i = 0;
    IData/*31:0*/ my_seq_id;
    {
        has_lock__Vfuncrtn = 0U;
        my_seq_id = 0U;
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "has_lock passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19882]);
        } else {
            ++(vlSymsp->__Vcoverage[19883]);
        }
        this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
        unnamedblk240__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk240__DOT__i, this->__PVT__lock_list.size())) {
            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk240__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1026)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1026)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            if ((__VlefCall_0__get_inst_id == __VlefCall_1__get_inst_id)) {
                has_lock__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19885]);
            }
            unnamedblk240__DOT__i = ((IData)(1U) + unnamedblk240__DOT__i);
            ++(vlSymsp->__Vcoverage[19886]);
        }
        has_lock__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19887]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_lock_req(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ lock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_lock_req\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __VlefCall_1__self;
    IData/*31:0*/ __VlefCall_0__get_sequence_id;
    IData/*31:0*/ __Vincrement5;
    __Vincrement5 = 0;
    IData/*31:0*/ my_seq_id;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_request> new_req;
    my_seq_id = 0U;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "lock_req passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[19888]);
    } else {
        ++(vlSymsp->__Vcoverage[19889]);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
    new_req = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(new_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1049)->__PVT__grant = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1050)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
    VL_NULL_CHECK(new_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1050)->__PVT__sequence_id 
        = __VlefCall_0__get_sequence_id;
    VL_NULL_CHECK(new_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1051)->__PVT__request = 1U;
    VL_NULL_CHECK(new_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1052)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement5 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(new_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1053)->__PVT__request_id 
        = __Vincrement5;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_1__self);
    VL_NULL_CHECK(new_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1054)->__PVT__process_id 
        = __VlefCall_1__self;
    if (lock) {
        this->__PVT__arb_sequence_q.push_back(new_req);
        ++(vlSymsp->__Vcoverage[19890]);
    } else {
        this->__PVT__arb_sequence_q.push_front(new_req);
        this->__VnoInFunc_m_update_lists(vlSymsp);
        ++(vlSymsp->__Vcoverage[19891]);
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(new_req, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1070)
                                                                ->__PVT__request_id);
    ++(vlSymsp->__Vcoverage[19892]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unlock_req(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unlock_req\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_inst_id__111__Vfuncout;
    __Vtask_get_inst_id__111__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_0__get_full_name;
    VlQueue<IData/*31:0*/> unnamedblk241__DOT__q;
    IData/*31:0*/ unnamedblk241__DOT__seqid;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "m_unlock_req passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[19893]);
    } else {
        ++(vlSymsp->__Vcoverage[19894]);
    }
    unnamedblk241__DOT__q.clear();
    unnamedblk241__DOT__q.atDefault() = 0;
    VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1087)->__VnoInFunc_get_inst_id(vlSymsp, unnamedblk241__DOT__seqid);
    unnamedblk241__DOT__q = this->__PVT__lock_list.find_first_index(
                                                                    [&](
                                                                        IData/*31:0*/ item__DOT__index, 
                                                                        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> item) -> 
                                                                    CData/*31:0*/ {
            return ((([&]() {
                            VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1088)
                      ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__111__Vfuncout);
                        }(), __Vtask_get_inst_id__111__Vfuncout) 
                     == unnamedblk241__DOT__seqid));
        }
    );
    if ((1U == unnamedblk241__DOT__q.size())) {
        this->__PVT__lock_list.erase(unnamedblk241__DOT__q.at(0U));
        this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
        this->__VnoInFunc_m_update_lists(vlSymsp);
        ++(vlSymsp->__Vcoverage[19895]);
    } else {
        VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1096)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SQRUNL"s, 
                                             VL_CVT_PACK_STR_NN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN("Sequence '"s, __VlefCall_0__get_full_name), "' called ungrab / unlock, but didn't have lock"s)), 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[19896]);
    }
    ++(vlSymsp->__Vcoverage[19897]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_lock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_lock\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_lock_req(vlSymsp, sequence_ptr, 1U);
    ++(vlSymsp->__Vcoverage[19898]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grab(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grab\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_lock_req(vlSymsp, sequence_ptr, 0U);
    ++(vlSymsp->__Vcoverage[19899]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_unlock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_unlock\n"); );
    // Body
    this->__VnoInFunc_m_unlock_req(vlSymsp, sequence_ptr);
    ++(vlSymsp->__Vcoverage[19900]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_ungrab(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_ungrab\n"); );
    // Body
    this->__VnoInFunc_m_unlock_req(vlSymsp, sequence_ptr);
    ++(vlSymsp->__Vcoverage[19901]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues\n"); );
    // Body
    IData/*31:0*/ __VlefCall_12__m_get_sqr_sequence_id;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__get_sequence_state;
    CData/*0:0*/ __VlefCall_7__is_child;
    IData/*31:0*/ __VlefCall_6__get_inst_id;
    IData/*31:0*/ __VlefCall_5__get_inst_id;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_sequence_state;
    CData/*0:0*/ __VlefCall_0__is_child;
    IData/*31:0*/ i;
    IData/*31:0*/ seq_id;
    i = 0U;
    seq_id = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1143)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 0U, seq_id);
    i = 0U;
    while (true) {
        if (VL_GTS_III(32, this->__PVT__arb_sequence_q.size(), i)) {
            __VlefCall_0__is_child = (VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1150)
                                      ->__PVT__sequence_id 
                                      == seq_id);
            if ((1U & (~ (IData)(__VlefCall_0__is_child)))) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1151)
                                           ->__PVT__sequence_ptr, __VlefCall_0__is_child);
            }
            if (__VlefCall_0__is_child) {
                VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1152)->__VnoInFunc_get_sequence_state(vlSymsp, __VlefCall_1__get_sequence_state);
                if ((0x00000100U == __VlefCall_1__get_sequence_state)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SEQFINERR"s, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1153)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1153)
                                      ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1153)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%@' should not finish before all items from itself and items from descendent sequences are processed.  The item request from the sequence '%@' is being removed.",0,
                                                                                -1,
                                                                                &(__VlefCall_3__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_4__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000481U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[19902]);
                    } else {
                        ++(vlSymsp->__Vcoverage[19903]);
                    }
                    ++(vlSymsp->__Vcoverage[19904]);
                } else {
                    ++(vlSymsp->__Vcoverage[19905]);
                }
                this->__PVT__arb_sequence_q.erase(i);
                this->__VnoInFunc_m_update_lists(vlSymsp);
                ++(vlSymsp->__Vcoverage[19906]);
            } else {
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[19907]);
            }
            ++(vlSymsp->__Vcoverage[19908]);
        } else {
            ++(vlSymsp->__Vcoverage[19909]);
        }
        ++(vlSymsp->__Vcoverage[19910]);
        if (!(VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size()))) break;
        ++(vlSymsp->__Vcoverage[19911]);
    }
    i = 0U;
    while (true) {
        if (VL_GTS_III(32, this->__PVT__lock_list.size(), i)) {
            VL_NULL_CHECK(this->__PVT__lock_list.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1169)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1169)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
            __VlefCall_7__is_child = (__VlefCall_5__get_inst_id 
                                      == __VlefCall_6__get_inst_id);
            if ((1U & (~ (IData)(__VlefCall_7__is_child)))) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, this->__PVT__lock_list.at(i), __VlefCall_7__is_child);
            }
            if (__VlefCall_7__is_child) {
                VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1171)->__VnoInFunc_get_sequence_state(vlSymsp, __VlefCall_8__get_sequence_state);
                if ((0x00000100U == __VlefCall_8__get_sequence_state)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SEQFINERR"s, __VlefCall_9__uvm_report_enabled);
                    if ((0U != __VlefCall_9__uvm_report_enabled)) {
                        VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1172)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                        VL_NULL_CHECK(this->__PVT__lock_list.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1172)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%@' should not finish before locks from itself and descedent sequences are removed.  The lock held by the child sequence '%@' is being removed.",0,
                                                                                -1,
                                                                                &(__VlefCall_10__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_11__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000494U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[19912]);
                    } else {
                        ++(vlSymsp->__Vcoverage[19913]);
                    }
                    ++(vlSymsp->__Vcoverage[19914]);
                } else {
                    ++(vlSymsp->__Vcoverage[19915]);
                }
                this->__PVT__lock_list.erase(i);
                this->__VnoInFunc_m_update_lists(vlSymsp);
                ++(vlSymsp->__Vcoverage[19916]);
            } else {
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[19917]);
            }
            ++(vlSymsp->__Vcoverage[19918]);
        } else {
            ++(vlSymsp->__Vcoverage[19919]);
        }
        ++(vlSymsp->__Vcoverage[19920]);
        if (!(VL_LTS_III(32, i, this->__PVT__lock_list.size()))) break;
        ++(vlSymsp->__Vcoverage[19921]);
    }
    VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1184)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __VlefCall_12__m_get_sqr_sequence_id);
    this->__VnoInFunc_m_unregister_sequence(vlSymsp, __VlefCall_12__m_get_sqr_sequence_id);
    ++(vlSymsp->__Vcoverage[19922]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> seq_ptr;
    this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, seq_ptr);
    while ((VlNull{} != seq_ptr)) {
        this->__VnoInFunc_kill_sequence(vlProcess, vlSymsp, seq_ptr);
        this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, seq_ptr);
        ++(vlSymsp->__Vcoverage[19923]);
    }
    ++(vlSymsp->__Vcoverage[19924]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting\n"); );
    // Body
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
    ++(vlSymsp->__Vcoverage[19925]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence\n"); );
    // Body
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
    VL_NULL_CHECK(sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1216)->__VnoInFunc_m_kill(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[19926]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_grabbed(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_grabbed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_grabbed\n"); );
    // Body
    is_grabbed__Vfuncrtn = (0U != this->__PVT__lock_list.size());
    ++(vlSymsp->__Vcoverage[19927]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_current_grabber(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &current_grabber__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_current_grabber\n"); );
    // Body
    {
        if ((0U == this->__PVT__lock_list.size())) {
            current_grabber__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19929]);
        }
        current_grabber__Vfuncrtn = this->__PVT__lock_list.at(
                                                              (this->__PVT__lock_list.size() 
                                                               - (IData)(1U)));
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19930]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefLogAnd_2;
    CData/*0:0*/ __VlefCall_1__is_blocked;
    CData/*0:0*/ __VlefCall_0__is_relevant;
    IData/*31:0*/ unnamedblk242__DOT__i;
    unnamedblk242__DOT__i = 0;
    {
        has_do_available__Vfuncrtn = 0U;
        unnamedblk242__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk242__DOT__i, this->__PVT__arb_sequence_q.size())) {
            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk242__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1245)
                          ->__PVT__sequence_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1245)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_0__is_relevant);
            __VlefLogAnd_2 = __VlefCall_0__is_relevant;
            if (__VlefLogAnd_2) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk242__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1246)
                                             ->__PVT__sequence_ptr, __VlefCall_1__is_blocked);
                __VlefLogAnd_2 = (1U & (~ (IData)(__VlefCall_1__is_blocked)));
            }
            if (__VlefLogAnd_2) {
                has_do_available__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[19932]);
            }
            unnamedblk242__DOT__i = ((IData)(1U) + unnamedblk242__DOT__i);
            ++(vlSymsp->__Vcoverage[19933]);
        }
        has_do_available__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19934]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_arbitration(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_arbitration\n"); );
    // Body
    this->__PVT__m_arbitration = val;
    ++(vlSymsp->__Vcoverage[19935]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration\n"); );
    // Body
    get_arbitration__Vfuncrtn = this->__PVT__m_arbitration;
    ++(vlSymsp->__Vcoverage[19936]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration_sequence(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &get_arbitration_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration_sequence\n"); );
    // Body
    get_arbitration_sequence__Vfuncrtn = VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(index), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1272)
        ->__PVT__sequence_ptr;
    ++(vlSymsp->__Vcoverage[19937]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[19938]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    // Body
    VL_KEEP_THIS;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
    this->__VnoInFunc_wait_for_sequences____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    CData/*0:0*/ __VdynTrigger_h07a1b885__4;
    __VdynTrigger_h07a1b885__4 = 0;
    __VdynTrigger_h07a1b885__4 = 0U;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    while ((1U & (~ (IData)(__VdynTrigger_h07a1b885__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     430);
        __VdynTrigger_h07a1b885__4 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                      != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h07a1b885__4);
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 430);
    ++(vlSymsp->__Vcoverage[480]);
    ++(vlSymsp->__Vcoverage[19939]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                            429);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    IData/*31:0*/ __Vintraval_hccec5996__4;
    __Vintraval_hccec5996__4 = 0;
    __Vintraval_hccec5996__4 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_hccec5996__4);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__11;
    __VdynTrigger_h24befa02__11 = 0;
    __VdynTrigger_h24befa02__11 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__11)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h24befa02__11 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__11);
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
        = __Vintraval_hccec5996__4;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[19940]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_max_zero_time_wait_relevant_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ new_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_max_zero_time_wait_relevant_count\n"); );
    // Body
    this->__PVT__m_max_zero_time_wait_relevant_count 
        = new_val;
    ++(vlSymsp->__Vcoverage[19941]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence\n"); );
    // Body
    std::string __VlefCall_27__get_name;
    std::string __VlefCall_26__get_type_name;
    IData/*31:0*/ __VlefCall_25__uvm_report_enabled;
    IData/*31:0*/ __VlefCond_24;
    IData/*31:0*/ __VlefCall_23__randomize;
    CData/*0:0*/ __VlefCall_22__get_randomize_enabled;
    std::string __VlefCall_21__get_name;
    std::string __VlefCall_20__get_type_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_name;
    IData/*31:0*/ __VlefCall_17__uvm_report_enabled;
    std::string __VlefCall_16__get_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_14;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __VlefCall_13__create_object_by_type;
    std::string __VlefCall_12__get_type_name;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_8;
    std::string __VlefCall_7__get_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_5__read;
    IData/*31:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefLogAnd_3;
    IData/*31:0*/ __VlefCall_2__size;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk243__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> unnamedblk243__DOT__unnamedblk244__DOT__rsrc;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz28> unnamedblk243__DOT__unnamedblk244__DOT__sbr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz12> unnamedblk243__DOT__unnamedblk244__DOT__owr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__wrapper;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_35> __VDynScope_start_phase_sequence_7;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> f;
    __VDynScope_start_phase_sequence_7 = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_35, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1314)->__PVT__phase 
        = phase;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1319)->__VnoInFunc_get_factory(vlSymsp, f);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1322)
                      ->__PVT__phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1322)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1322)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name), "_phase"s)), "default_sequence"s, VlNull{}, 0U, rq);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
        unnamedblk243__DOT__i = 0U;
        unnamedblk243__DOT__i = 0U;
        while (true) {
            __VlefLogAnd_3 = (VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1327)
                              ->__PVT__seq);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1327)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                __VlefLogAnd_3 = VL_LTS_III(32, unnamedblk243__DOT__i, __VlefCall_2__size);
            }
            if (!(__VlefLogAnd_3)) break;
            VL_NULL_CHECK(rq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1328)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk243__DOT__i, unnamedblk243__DOT__unnamedblk244__DOT__rsrc);
            __VlefExpr_4 = VL_CAST_DYNAMIC(unnamedblk243__DOT__unnamedblk244__DOT__rsrc, unnamedblk243__DOT__unnamedblk244__DOT__sbr);
            if ((__VlefExpr_4 && (VlNull{} != unnamedblk243__DOT__unnamedblk244__DOT__sbr))) {
                VL_NULL_CHECK(unnamedblk243__DOT__unnamedblk244__DOT__sbr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1338)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base>{this}, __VlefCall_5__read);
                VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1338)->__PVT__seq 
                    = __VlefCall_5__read;
                if ((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1339)
                     ->__PVT__seq)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "UVM/SQR/PH/DEF/SB/NULL"s, __VlefCall_6__uvm_report_enabled);
                    if ((0U != __VlefCall_6__uvm_report_enabled)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1341)
                                      ->__PVT__phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1341)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/SQR/PH/DEF/SB/NULL"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default phase sequence for phase '"s, __VlefCall_7__get_name), "' explicitly disabled"s)), 0x00000190U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x0000053dU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[19942]);
                    } else {
                        ++(vlSymsp->__Vcoverage[19943]);
                    }
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[19945]);
                }
                ++(vlSymsp->__Vcoverage[19956]);
            } else {
                __VlefExpr_8 = VL_CAST_DYNAMIC(unnamedblk243__DOT__unnamedblk244__DOT__rsrc, unnamedblk243__DOT__unnamedblk244__DOT__owr);
                if ((__VlefExpr_8 && (VlNull{} != unnamedblk243__DOT__unnamedblk244__DOT__owr))) {
                    VL_NULL_CHECK(unnamedblk243__DOT__unnamedblk244__DOT__owr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1350)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base>{this}, unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__wrapper);
                    if ((VlNull{} == unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__wrapper)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "UVM/SQR/PH/DEF/OW/NULL"s, __VlefCall_9__uvm_report_enabled);
                        if ((0U != __VlefCall_9__uvm_report_enabled)) {
                            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1353)
                                          ->__PVT__phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1353)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/SQR/PH/DEF/OW/NULL"s, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default phase sequence for phase '"s, __VlefCall_10__get_name), "' explicitly disabled"s)), 0x00000190U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000549U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[19946]);
                        } else {
                            ++(vlSymsp->__Vcoverage[19947]);
                        }
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[19949]);
                    }
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    VL_NULL_CHECK(unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__wrapper, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1358)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
                    VL_NULL_CHECK(f, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1357)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, unnamedblk243__DOT__unnamedblk244__DOT__unnamedblk245__DOT__wrapper, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_full_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_12__get_type_name), __VlefCall_13__create_object_by_type);
                    __VlefExpr_14 = VL_CAST_DYNAMIC(__VlefCall_13__create_object_by_type, VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1357)
                                                    ->__PVT__seq);
                    if (((! __VlefExpr_14) || (VlNull{} 
                                               == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1359)
                                               ->__PVT__seq))) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "PHASESEQ"s, __VlefCall_15__uvm_report_enabled);
                        if ((0U != __VlefCall_15__uvm_report_enabled)) {
                            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1361)
                                          ->__PVT__phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1361)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                                 VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default sequence for phase '"s, __VlefCall_16__get_name), "' %s is not a sequence type"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000551U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[19950]);
                        } else {
                            ++(vlSymsp->__Vcoverage[19951]);
                        }
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[19953]);
                    }
                    ++(vlSymsp->__Vcoverage[19954]);
                } else {
                    ++(vlSymsp->__Vcoverage[19955]);
                }
            }
            unnamedblk243__DOT__i = ((IData)(1U) + unnamedblk243__DOT__i);
            ++(vlSymsp->__Vcoverage[19957]);
        }
        if ((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1367)
             ->__PVT__seq)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_17__uvm_report_enabled);
            if ((0U != __VlefCall_17__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1369)
                              ->__PVT__phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1369)->__VnoInFunc_get_name(vlSymsp, __VlefCall_18__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No default phase sequence for phase '"s, __VlefCall_18__get_name), "'"s)), 0x00000190U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000559U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[19958]);
            } else {
                ++(vlSymsp->__Vcoverage[19959]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19961]);
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_19__uvm_report_enabled);
        if ((0U != __VlefCall_19__uvm_report_enabled)) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1374)
                          ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1374)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_20__get_type_name);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1374)
                          ->__PVT__phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1374)->__VnoInFunc_get_name(vlSymsp, __VlefCall_21__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Starting default sequence '"s, __VlefCall_20__get_type_name), "' for phase '"s), __VlefCall_21__get_name), "'"s)), 0x00000190U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x0000055eU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[19962]);
        } else {
            ++(vlSymsp->__Vcoverage[19963]);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1376)
                      ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1376)->__PVT__print_sequence_info = 1U;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1377)
                      ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1377)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base>{this});
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1378)
                      ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1378)->__VnoInFunc_reseed(vlProcess, vlSymsp);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1379)
                      ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1379)->__VnoInFunc_set_starting_phase(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1379)
                                                                                ->__PVT__phase);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)
                      ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)->__VnoInFunc_get_randomize_enabled(vlSymsp, __VlefCall_22__get_randomize_enabled);
        if (__VlefCall_22__get_randomize_enabled) {
            if ((VlNull{} != VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)
                 ->__PVT__seq)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)
                              ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)->__VnoInFunc_randomize(vlSymsp, __VlefCall_23__randomize);
                __VlefCond_24 = __VlefCall_23__randomize;
            } else {
                __VlefCond_24 = 0U;
            }
            __VlefCall_22__get_randomize_enabled = 
                (1U & (~ (0U != __VlefCond_24)));
        }
        if (__VlefCall_22__get_randomize_enabled) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "STRDEFSEQ"s, __VlefCall_25__uvm_report_enabled);
            if ((0U != __VlefCall_25__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1383)
                              ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1383)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_26__get_type_name);
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1383)
                              ->__PVT__phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1383)->__VnoInFunc_get_name(vlSymsp, __VlefCall_27__get_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "STRDEFSEQ"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Randomization failed for default sequence '"s, __VlefCall_26__get_type_name), "' for phase '"s), __VlefCall_27__get_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000567U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[19964]);
            } else {
                ++(vlSymsp->__Vcoverage[19965]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19967]);
        }
        this->__VnoInFunc_start_phase_sequence____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_start_phase_sequence_7);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19968]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_7__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_35> __VDynScope_start_phase_sequence_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_7__0\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_35> __Vtask___VforkTask_3__188____VDynScope_start_phase_sequence_7;
    IData/*31:0*/ __Vtask___VforkTask_3__188____VlefCall_3__uvm_create_random_seed;
    __Vtask___VforkTask_3__188____VlefCall_3__uvm_create_random_seed = 0;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __Vtask___VforkTask_3__188____VlefCall_0__self;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_process_wrapper> __Vtask___VforkTask_3__188__w;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __Vfunc_self__190__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__193__Vfuncout;
    __Vfunc_uvm_create_random_seed__193__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__193____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__193____VlefExpr_4 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__193____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__193____VlefExpr_3 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__193____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__193____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__193____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__195____Vincrement2;
    __Vfunc_uvm_instance_scope__195____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__196__verbosity;
    __Vtask_uvm_report_error__196__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__196__line;
    __Vtask_uvm_report_error__196__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__196__report_enabled_checked;
    __Vtask_uvm_report_error__196__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__197__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__198__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__200__Vfuncout;
    __Vfunc_uvm_oneway_hash__200__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__200__seed;
    __Vfunc_uvm_oneway_hash__200__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT___byte = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit;
    __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_3__188____VDynScope_start_phase_sequence_7 
        = __VDynScope_start_phase_sequence_7;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                            1387);
    __Vtask___VforkTask_3__188__w = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_sequence_process_wrapper, vlSymsp);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__190__Vfuncout);
    __Vtask___VforkTask_3__188____VlefCall_0__self 
        = __Vfunc_self__190__Vfuncout;
    VL_NULL_CHECK(__Vtask___VforkTask_3__188__w, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1390)->__PVT__pid 
        = __Vtask___VforkTask_3__188____VlefCall_0__self;
    VL_NULL_CHECK(__Vtask___VforkTask_3__188__w, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1391)->__PVT__seq 
        = VL_NULL_CHECK(__Vtask___VforkTask_3__188____VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1391)
        ->__PVT__seq;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__188____VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1392)
                  ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1392)->__VnoInFunc_get_type_name(vlSymsp, this->__Vtask_get_type_name__191__Vfuncout);
    this->__Vtask___VforkTask_3__188____VlefCall_1__get_type_name 
        = this->__Vtask_get_type_name__191__Vfuncout;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__192__Vfuncout);
    this->__Vtask___VforkTask_3__188____VlefCall_2__get_full_name 
        = this->__Vfunc_get_full_name__192__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__193__inst_id 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_3__188____VlefCall_2__get_full_name);
    this->__Vfunc_uvm_create_random_seed__193__type_id 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_3__188____VlefCall_1__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__193__inst_id)) {
        this->__Vfunc_uvm_create_random_seed__193__inst_id = "__global__"s;
        ++(vlSymsp->__Vcoverage[321]);
    } else {
        ++(vlSymsp->__Vcoverage[322]);
    }
    if (vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__193__inst_id)) {
        ++(vlSymsp->__Vcoverage[324]);
    } else {
        __Vfunc_uvm_create_random_seed__193____VlefCall_0__new 
            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.at(this->__Vfunc_uvm_create_random_seed__193__inst_id) 
            = __Vfunc_uvm_create_random_seed__193____VlefCall_0__new;
        ++(vlSymsp->__Vcoverage[323]);
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__193__inst_id);
    __Vfunc_uvm_instance_scope__195____Vincrement2 = 0U;
    {
        if ((""s != this->__Vfunc_uvm_instance_scope__195__Vfuncout)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[303]);
        }
        VL_SFORMAT_NX(64,this->__Vfunc_uvm_instance_scope__195__Vfuncout
                      ,"%Nuvm_pkg.uvm_instance_scope",0,
                      vlSymsp->name());
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__195__Vfuncout) 
               - (IData)(1U));
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
            = VL_GETC_N(this->__Vfunc_uvm_instance_scope__195__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                 & (0x2eU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                & (0x3aU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
            __Vfunc_uvm_instance_scope__195____Vincrement2 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                   - (IData)(1U));
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = __Vfunc_uvm_instance_scope__195____Vincrement2;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__195__Vfuncout,__Vfunc_uvm_instance_scope__195____Vincrement2);
            ++(vlSymsp->__Vcoverage[304]);
        }
        if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
            __Vtask_uvm_report_error__196__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__196__context_name = ""s;
            __Vtask_uvm_report_error__196__line = 0U;
            this->__Vtask_uvm_report_error__196__filename = ""s;
            __Vtask_uvm_report_error__196__verbosity = 0U;
            this->__Vtask_uvm_report_error__196__message 
                = VL_SFORMATF_N_NX("Illegal name %@ in scope string",0,
                                   -1,&(this->__Vfunc_uvm_instance_scope__195__Vfuncout)) ;
            this->__Vtask_uvm_report_error__196__id = "SCPSTR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__197__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__197__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__198__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__198__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__196__id, this->__Vtask_uvm_report_error__196__message, __Vtask_uvm_report_error__196__verbosity, this->__Vtask_uvm_report_error__196__filename, __Vtask_uvm_report_error__196__line, this->__Vtask_uvm_report_error__196__context_name, (IData)(__Vtask_uvm_report_error__196__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[305]);
        } else {
            ++(vlSymsp->__Vcoverage[306]);
        }
        this->__Vfunc_uvm_instance_scope__195__Vfuncout 
            = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__195__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[307]);
    this->__Vfunc_uvm_create_random_seed__193____VlefCall_1__uvm_instance_scope 
        = this->__Vfunc_uvm_instance_scope__195__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__193__type_id 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__193____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__193__type_id);
    if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 175)
        ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__193__type_id)) {
        ++(vlSymsp->__Vcoverage[326]);
    } else {
        __Vfunc_uvm_oneway_hash__200__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__200__string_in 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__193__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__193__inst_id));
        if ((0U != __Vfunc_uvm_oneway_hash__200__seed)) {
            ++(vlSymsp->__Vcoverage[309]);
        } else {
            __Vfunc_uvm_oneway_hash__200__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
            ++(vlSymsp->__Vcoverage[308]);
        }
        __Vfunc_uvm_oneway_hash__200__Vfuncout = __Vfunc_uvm_oneway_hash__200__seed;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT___byte = 0U;
        __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT___byte = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT___byte, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__200__string_in))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__200__string_in,__Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT___byte);
                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[311]);
                }
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
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
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 1U;
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
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 2U;
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
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 3U;
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
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 4U;
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
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 5U;
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
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 6U;
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
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 7U;
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
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit = 8U;
                ++(vlSymsp->__Vcoverage[318]);
                __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT___byte 
                    = ((IData)(1U) + __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT___byte);
                ++(vlSymsp->__Vcoverage[319]);
            }
            __Vlabel1: ;
        }
        __Vfunc_uvm_oneway_hash__200__Vfuncout = (__Vfunc_uvm_oneway_hash__200__Vfuncout 
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
                   >> (7U & __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit))))) {
            ++(vlSymsp->__Vcoverage[314]);
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb)) 
                   & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                      >> (7U & __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit))))) {
            ++(vlSymsp->__Vcoverage[315]);
        }
        if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
             & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                >> (7U & __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit)))) {
            ++(vlSymsp->__Vcoverage[316]);
        }
        if ((1U & ((~ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb)) 
                   & (~ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                         >> (7U & __Vfunc_uvm_oneway_hash__200__unnamedblk1__DOT__unnamedblk2__DOT___bit)))))) {
            ++(vlSymsp->__Vcoverage[317]);
        }
        ++(vlSymsp->__Vcoverage[320]);
        __Vfunc_uvm_create_random_seed__193____VlefCall_2__uvm_oneway_hash 
            = __Vfunc_uvm_oneway_hash__200__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 176)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__193__type_id) 
            = __Vfunc_uvm_create_random_seed__193____VlefCall_2__uvm_oneway_hash;
        ++(vlSymsp->__Vcoverage[325]);
    }
    if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 178)
        ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__193__type_id)) {
        ++(vlSymsp->__Vcoverage[328]);
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 179)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__193__type_id) = 0U;
        ++(vlSymsp->__Vcoverage[327]);
    }
    __Vfunc_uvm_create_random_seed__193____VlefExpr_3 
        = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__193__type_id) 
           + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__193__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__193__type_id) 
        = __Vfunc_uvm_create_random_seed__193____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__193____VlefExpr_4 
        = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__193__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__193__type_id) 
        = __Vfunc_uvm_create_random_seed__193____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__193__Vfuncout = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 188)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__193__type_id);
    ++(vlSymsp->__Vcoverage[329]);
    __Vtask___VforkTask_3__188____VlefCall_3__uvm_create_random_seed 
        = __Vfunc_uvm_create_random_seed__193__Vfuncout;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__188__w, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1392)
                  ->__PVT__pid, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1392)->__VnoInFunc_srandom(vlSymsp, __Vtask___VforkTask_3__188____VlefCall_3__uvm_create_random_seed);
    this->__PVT__m_default_sequences.at(VL_NULL_CHECK(__Vtask___VforkTask_3__188____VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1393)
                                        ->__PVT__phase) 
        = __Vtask___VforkTask_3__188__w;
    co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__188____VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1395)
                           ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1395)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base>{this}, VlNull{}, 0xffffffffU, 1U);
    this->__PVT__m_default_sequences.erase(VL_NULL_CHECK(__Vtask___VforkTask_3__188____VDynScope_start_phase_sequence_7, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1396)
                                           ->__PVT__phase);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_phase_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_phase_sequence\n"); );
    // Body
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if (this->__PVT__m_default_sequences.exists(phase)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__m_default_sequences
                                        .at(phase), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1409)
                          ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1409)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
            VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1409)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Killing default sequence '"s, __VlefCall_1__get_type_name), "' for phase '"s), __VlefCall_2__get_name), "'"s)), 0x00000190U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000581U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[19969]);
        } else {
            ++(vlSymsp->__Vcoverage[19970]);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__m_default_sequences
                                    .at(phase), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1410)
                      ->__PVT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1410)->__VnoInFunc_kill(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[19973]);
    } else {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            VL_NULL_CHECK(phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1415)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No default sequence to kill for phase '"s, __VlefCall_4__get_name), "'"s)), 0x00000190U, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000587U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[19971]);
        } else {
            ++(vlSymsp->__Vcoverage[19972]);
        }
        ++(vlSymsp->__Vcoverage[19974]);
    }
    ++(vlSymsp->__Vcoverage[19975]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__arb_completed.atDefault() = 0;
    __PVT__m_sequencer_id = 0;
    __PVT__m_lock_arb_size = 0;
    __PVT__m_arb_size = 0;
    __PVT__m_wait_for_item_sequence_id = 0;
    __PVT__m_wait_for_item_transaction_id = 0;
    __PVT__m_is_relevant_completed = 0;
    __Vtask___VforkTask_2__57__is_relevant_entries.atDefault() = 0;
    __Vtask___VforkTask_1__58__is_relevant_entries.atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::~Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "arb_sequence_q:" + VL_TO_STRING(__PVT__arb_sequence_q);
    out += ", arb_completed:" + VL_TO_STRING(__PVT__arb_completed);
    out += ", lock_list:" + VL_TO_STRING(__PVT__lock_list);
    out += ", reg_sequences:" + VL_TO_STRING(__PVT__reg_sequences);
    out += ", m_sequencer_id:" + VL_TO_STRING(__PVT__m_sequencer_id);
    out += ", m_lock_arb_size:" + VL_TO_STRING(__PVT__m_lock_arb_size);
    out += ", m_arb_size:" + VL_TO_STRING(__PVT__m_arb_size);
    out += ", m_wait_for_item_sequence_id:" + VL_TO_STRING(__PVT__m_wait_for_item_sequence_id);
    out += ", m_wait_for_item_transaction_id:" + VL_TO_STRING(__PVT__m_wait_for_item_transaction_id);
    out += ", m_wait_relevant_count:" + VL_TO_STRING(__PVT__m_wait_relevant_count);
    out += ", m_max_zero_time_wait_relevant_count:" + VL_TO_STRING(__PVT__m_max_zero_time_wait_relevant_count);
    out += ", m_last_wait_relevant_time:" + VL_TO_STRING(__PVT__m_last_wait_relevant_time);
    out += ", m_arbitration:" + VL_TO_STRING(__PVT__m_arbitration);
    out += ", m_default_sequences:" + VL_TO_STRING(__PVT__m_default_sequences);
    out += ", m_is_relevant_completed:" + VL_TO_STRING(__PVT__m_is_relevant_completed);
    out += ", m_auto_item_recording:" + VL_TO_STRING(__PVT__m_auto_item_recording);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
