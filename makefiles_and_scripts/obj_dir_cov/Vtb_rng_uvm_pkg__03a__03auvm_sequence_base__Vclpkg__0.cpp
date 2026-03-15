// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi8> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequence_base__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi8__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20300]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequence_base__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_sequence_base"s;
    ++(vlSymsp->__Vcoverage[20302]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi8> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi8__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[20301]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequence_base"s;
    ++(vlSymsp->__Vcoverage[20303]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_next_transaction_id = 1U;
    ++(vlSymsp->__Vcoverage[20304]);
    this->__PVT__m_priority = 0xffffffffU;
    ++(vlSymsp->__Vcoverage[20305]);
    this->__PVT__response_queue_depth = 8U;
    ++(vlSymsp->__Vcoverage[20306]);
    /*super.new*/;
    this->__PVT__m_sequence_state = 1U;
    this->__PVT__m_wait_for_grant_semaphore = 0U;
    this->__VnoInFunc_m_init_phase_daps(vlProcess, vlSymsp, 1U);
    ++(vlSymsp->__Vcoverage[20307]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_randomize_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_randomize_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_randomize_enabled\n"); );
    // Body
    get_randomize_enabled__Vfuncrtn = (1U & (~ (IData)(this->__PVT__do_not_randomize)));
    ++(vlSymsp->__Vcoverage[20308]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_randomize_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_randomize_enabled\n"); );
    // Body
    this->__PVT__do_not_randomize = (1U & (~ (IData)(enable)));
    if ((1U & (~ (IData)(enable)))) {
        ++(vlSymsp->__Vcoverage[20309]);
    }
    if (enable) {
        ++(vlSymsp->__Vcoverage[20310]);
    }
    ++(vlSymsp->__Vcoverage[20311]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[20312]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state\n"); );
    // Body
    get_sequence_state__Vfuncrtn = this->__PVT__m_sequence_state;
    ++(vlSymsp->__Vcoverage[20313]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_sequence_state(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_sequence_state\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hd12161e8__0;
    __Vtrigprevexpr_hd12161e8__0 = 0;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (0U != (this->__PVT__m_sequence_state 
                         & state_mask))))) {
        CData/*0:0*/ __VdynTrigger_hf34e336c__0;
        __VdynTrigger_hf34e336c__0 = 0;
        __VdynTrigger_hf34e336c__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hf34e336c__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (| (uvm_pkg::uvm_sequence_base.m_sequence_state & uvm_pkg::uvm_sequence_base.state_mask)))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                         244);
            __Vtrigprevexpr_hd12161e8__0 = (0U != (this->__PVT__m_sequence_state 
                                                   & state_mask));
            __VdynTrigger_hf34e336c__0 = __Vtrigprevexpr_hd12161e8__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf34e336c__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (| (uvm_pkg::uvm_sequence_base.m_sequence_state & uvm_pkg::uvm_sequence_base.state_mask)))", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                     244);
    }
    ++(vlSymsp->__Vcoverage[20314]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_tr_handle(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_tr_handle\n"); );
    // Body
    get_tr_handle__Vfuncrtn = 0U;
    if ((VlNull{} != this->__PVT__m_tr_recorder)) {
        VL_NULL_CHECK(this->__PVT__m_tr_recorder, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 256)->__VnoInFunc_get_handle(vlSymsp, get_tr_handle__Vfuncrtn);
    } else {
        get_tr_handle__Vfuncrtn = 0U;
    }
    ++(vlSymsp->__Vcoverage[20317]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start\n"); );
    // Locals
    IData/*31:0*/ __Vtask_m_register_sequence__19__Vfuncout;
    __Vtask_m_register_sequence__19__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_7__get_automatic_phase_objection;
    CData/*0:0*/ __VlefCall_6__get_automatic_phase_objection;
    IData/*31:0*/ __VlefCond_5;
    IData/*31:0*/ __VlefCall_4__get_handle;
    std::string __VlefCall_3__get_root_sequence_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk1__DOT__handle;
    CData/*0:0*/ old_automatic_phase_objection;
    old_automatic_phase_objection = 0U;
    this->__VnoInFunc_set_item_context(vlProcess, vlSymsp, parent_sequence, sequencer);
    if ((((1U == this->__PVT__m_sequence_state) | (0x00000080U 
                                                   == this->__PVT__m_sequence_state)) 
         | (0x00000100U == this->__PVT__m_sequence_state))) {
        ++(vlSymsp->__Vcoverage[20319]);
    } else {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ_NOT_DONE"s, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN("Sequence "s, __VlefCall_0__get_full_name), " already started"s)), 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20318]);
    }
    if ((VlNull{} != Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 304)->__PVT__children_array.at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}) = 1U;
        ++(vlSymsp->__Vcoverage[20324]);
    } else {
        ++(vlSymsp->__Vcoverage[20325]);
    }
    if (VL_GTS_III(32, 0xffffffffU, this_priority)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQPRI"s, VL_SFORMATF_N_NX("Sequence %@ start has illegal priority: %0d",0,
                                                                                -1,
                                                                                &(__VlefCall_1__get_full_name),
                                                                                32,
                                                                                this_priority) , 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20326]);
    } else {
        ++(vlSymsp->__Vcoverage[20327]);
    }
    if (VL_GTS_III(32, 0U, this_priority)) {
        if ((VlNull{} == parent_sequence)) {
            this_priority = 0x00000064U;
            ++(vlSymsp->__Vcoverage[20328]);
        } else {
            VL_NULL_CHECK(parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 314)->__VnoInFunc_get_priority(vlSymsp, this_priority);
            ++(vlSymsp->__Vcoverage[20329]);
        }
        ++(vlSymsp->__Vcoverage[20330]);
    } else {
        ++(vlSymsp->__Vcoverage[20331]);
    }
    this->__VnoInFunc_clear_response_queue(vlSymsp);
    this->__PVT__m_priority = this_priority;
    if ((VlNull{} != Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        unnamedblk1__DOT__handle = 0U;
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 325)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), ""s, ""s, 0ULL, 0U, unnamedblk1__DOT__handle);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, unnamedblk1__DOT__handle, this->__PVT__m_tr_recorder);
            ++(vlSymsp->__Vcoverage[20332]);
        } else {
            this->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_3__get_root_sequence_name);
            if ((VlNull{} == VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 329)
                 ->__PVT__m_tr_recorder)) {
                __VlefCond_5 = 0U;
            } else {
                VL_NULL_CHECK(VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 329)
                              ->__PVT__m_tr_recorder, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 329)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
                __VlefCond_5 = __VlefCall_4__get_handle;
            }
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 328)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_root_sequence_name), ""s, ""s, 0ULL, __VlefCond_5, unnamedblk1__DOT__handle);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, unnamedblk1__DOT__handle, this->__PVT__m_tr_recorder);
            ++(vlSymsp->__Vcoverage[20333]);
        }
        ++(vlSymsp->__Vcoverage[20334]);
    } else {
        ++(vlSymsp->__Vcoverage[20335]);
    }
    this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
    if ((VlNull{} != Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 339)->__VnoInFunc_m_register_sequence(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, __Vtask_m_register_sequence__19__Vfuncout);
        ++(vlSymsp->__Vcoverage[20336]);
    } else {
        ++(vlSymsp->__Vcoverage[20337]);
    }
    this->__PVT__m_sequence_state = 2U;
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(1U, vlProcess);
    this->__VnoInFunc_start____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VlefCall_6__get_automatic_phase_objection, call_pre_post, parent_sequence, __VlefCall_7__get_automatic_phase_objection, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(vlProcess, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                  345);
    if ((VlNull{} != Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 404)->__VnoInFunc_end_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, 0ULL, 1U);
        ++(vlSymsp->__Vcoverage[20350]);
    } else {
        ++(vlSymsp->__Vcoverage[20351]);
    }
    if ((0x00000080U != this->__PVT__m_sequence_state)) {
        this->__VnoInFunc_clean_exit_sequence(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[20352]);
    } else {
        ++(vlSymsp->__Vcoverage[20353]);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            413);
    if (((VlNull{} != Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 415)
         ->__PVT__children_array.exists(VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 416)->__PVT__children_array.erase(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20354]);
    } else {
        ++(vlSymsp->__Vcoverage[20355]);
    }
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, old_automatic_phase_objection);
    this->__VnoInFunc_m_init_phase_daps(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_set_automatic_phase_objection(vlProcess, vlSymsp, old_automatic_phase_objection);
    if ((((1U != this->__PVT__m_sequence_state) & (0x00000080U 
                                                   != this->__PVT__m_sequence_state)) 
         & (0x00000100U != this->__PVT__m_sequence_state))) {
        ++(vlSymsp->__Vcoverage[20320]);
    }
    if ((0x00000100U == this->__PVT__m_sequence_state)) {
        ++(vlSymsp->__Vcoverage[20321]);
    }
    if ((0x00000080U == this->__PVT__m_sequence_state)) {
        ++(vlSymsp->__Vcoverage[20322]);
    }
    if ((1U == this->__PVT__m_sequence_state)) {
        ++(vlSymsp->__Vcoverage[20323]);
    }
    ++(vlSymsp->__Vcoverage[20356]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &__VlefCall_6__get_automatic_phase_objection, CData/*0:0*/ &call_pre_post, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, CData/*0:0*/ &__VlefCall_7__get_automatic_phase_objection, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_sequence_process);
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            350);
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_6__get_automatic_phase_objection);
    if (__VlefCall_6__get_automatic_phase_objection) {
        this->__VnoInFunc_m_safe_raise_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
        ++(vlSymsp->__Vcoverage[20338]);
    } else {
        ++(vlSymsp->__Vcoverage[20339]);
    }
    this->__VnoInFunc_pre_start(vlSymsp);
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 4U;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                362);
        this->__VnoInFunc_pre_body(vlSymsp);
        ++(vlSymsp->__Vcoverage[20340]);
    } else {
        ++(vlSymsp->__Vcoverage[20341]);
    }
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 367)->__VnoInFunc_pre_do(vlSymsp, 0U);
        VL_NULL_CHECK(parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 368)->__VnoInFunc_mid_do(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20342]);
    } else {
        ++(vlSymsp->__Vcoverage[20343]);
    }
    this->__PVT__m_sequence_state = 8U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            372);
    co_await this->__VnoInFunc_body(vlProcess, vlSymsp);
    this->__PVT__m_sequence_state = 0x00000040U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            376);
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 379)->__VnoInFunc_post_do(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20344]);
    } else {
        ++(vlSymsp->__Vcoverage[20345]);
    }
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 0x00000010U;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                384);
        this->__VnoInFunc_post_body(vlSymsp);
        ++(vlSymsp->__Vcoverage[20346]);
    } else {
        ++(vlSymsp->__Vcoverage[20347]);
    }
    this->__PVT__m_sequence_state = 0x00000020U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            389);
    this->__VnoInFunc_post_start(vlSymsp);
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_7__get_automatic_phase_objection);
    if (__VlefCall_7__get_automatic_phase_objection) {
        this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
        ++(vlSymsp->__Vcoverage[20348]);
    } else {
        ++(vlSymsp->__Vcoverage[20349]);
    }
    this->__PVT__m_sequence_state = 0x00000100U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            398);
    __Vfork_1__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                         346);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clean_exit_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clean_exit_sequence\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk2__DOT__seqrID;
    unnamedblk2__DOT__seqrID = 0;
    CData/*0:0*/ unnamedblk2__DOT__seqrID__Vfirst;
    unnamedblk2__DOT__seqrID__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> unnamedblk2__DOT__unnamedblk3__DOT__s;
    if ((VlNull{} != Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 430)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20363]);
    } else {
        __VlefExpr_0 = (0U != this->__PVT__m_sqr_seq_ids.first(unnamedblk2__DOT__seqrID));
        if (__VlefExpr_0) {
            unnamedblk2__DOT__seqrID__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk2__DOT__seqrID__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__m_sqr_seq_ids.next(unnamedblk2__DOT__seqrID));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk2__DOT__seqrID__Vfirst = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__s 
                    = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__all_sequencer_insts
                    .at(unnamedblk2__DOT__seqrID);
                VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__s, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 436)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
                ++(vlSymsp->__Vcoverage[20360]);
            }
            __VlefExpr_2 = (0U != this->__PVT__m_sqr_seq_ids.next(unnamedblk2__DOT__seqrID));
            if (__VlefExpr_2) {
                ++(vlSymsp->__Vcoverage[20357]);
            }
            if (unnamedblk2__DOT__seqrID__Vfirst) {
                ++(vlSymsp->__Vcoverage[20358]);
            }
            __VlefExpr_3 = (1U & (~ (IData)(unnamedblk2__DOT__seqrID__Vfirst)));
            if (__VlefExpr_3) {
                __VlefExpr_3 = (0U == this->__PVT__m_sqr_seq_ids.next(unnamedblk2__DOT__seqrID));
            }
            if (__VlefExpr_3) {
                ++(vlSymsp->__Vcoverage[20359]);
            }
            ++(vlSymsp->__Vcoverage[20361]);
        } else {
            ++(vlSymsp->__Vcoverage[20362]);
        }
        ++(vlSymsp->__Vcoverage[20364]);
    }
    this->__PVT__m_sqr_seq_ids.clear();
    ++(vlSymsp->__Vcoverage[20365]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_start(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_start\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20366]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_body(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_body\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20367]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ is_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20368]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20369]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_sequence_base"s, "Body definition undefined"s, 0x000000c8U, ""s, 0U, ""s, 0U);
    ++(vlSymsp->__Vcoverage[20370]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20371]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_body(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_body\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20372]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_start(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_start\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20373]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ create) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_init_phase_daps\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_2__get_sequencer;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    std::string apo_name;
    std::string sp_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    apo_name = VL_SFORMATF_N_NX("%@.automatic_phase_objection",0,
                                -1,&(__VlefCall_0__get_full_name)) ;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    sp_name = VL_SFORMATF_N_NX("%@.starting_phase",0,
                               -1,&(__VlefCall_1__get_full_name)) ;
    if (create) {
        this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_2__get_sequencer);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz80__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, apo_name, __VlefCall_2__get_sequencer, ""s, this->__PVT__m_automatic_phase_objection_dap);
        this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_3__get_sequencer);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz81__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, sp_name, __VlefCall_3__get_sequencer, ""s, this->__PVT__m_starting_phase_dap);
        ++(vlSymsp->__Vcoverage[20374]);
    } else {
        VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 570)->__VnoInFunc_set_name(vlProcess, vlSymsp, apo_name);
        VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 571)->__VnoInFunc_set_name(vlProcess, vlSymsp, sp_name);
        ++(vlSymsp->__Vcoverage[20375]);
    }
    ++(vlSymsp->__Vcoverage[20376]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_starting_phase(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_starting_phase\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 591)->__VnoInFunc_get(vlSymsp, get_starting_phase__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20377]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_starting_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_starting_phase\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 597)->__VnoInFunc_set(vlProcess, vlSymsp, phase);
    ++(vlSymsp->__Vcoverage[20378]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_automatic_phase_objection\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 603)->__VnoInFunc_set(vlProcess, vlSymsp, value);
    ++(vlSymsp->__Vcoverage[20379]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_automatic_phase_objection(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_automatic_phase_objection\n"); );
    // Body
    get_automatic_phase_objection__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 609)->__VnoInFunc_get(vlSymsp, get_automatic_phase_objection__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20380]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_raise_starting_phase\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> starting_phase;
    this->__VnoInFunc_get_starting_phase(vlSymsp, starting_phase);
    if ((VlNull{} != starting_phase)) {
        VL_NULL_CHECK(starting_phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 617)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, description, count);
        ++(vlSymsp->__Vcoverage[20381]);
    } else {
        ++(vlSymsp->__Vcoverage[20382]);
    }
    ++(vlSymsp->__Vcoverage[20383]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_drop_starting_phase\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> starting_phase;
    this->__VnoInFunc_get_starting_phase(vlSymsp, starting_phase);
    if ((VlNull{} != starting_phase)) {
        VL_NULL_CHECK(starting_phase, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 625)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, description, count);
        ++(vlSymsp->__Vcoverage[20384]);
    } else {
        ++(vlSymsp->__Vcoverage[20385]);
    }
    ++(vlSymsp->__Vcoverage[20386]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_priority(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_priority\n"); );
    // Body
    this->__PVT__m_priority = value;
    ++(vlSymsp->__Vcoverage[20387]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority\n"); );
    // Body
    get_priority__Vfuncrtn = this->__PVT__m_priority;
    ++(vlSymsp->__Vcoverage[20388]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant\n"); );
    // Body
    this->__PVT__is_rel_default = 1U;
    is_relevant__Vfuncrtn = 1U;
    ++(vlSymsp->__Vcoverage[20389]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant\n"); );
    // Body
    VL_KEEP_THIS;
    VlAssignableEvent e;
    this->__PVT__wait_rel_default = 1U;
    if (this->__PVT__is_rel_default) {
        ++(vlSymsp->__Vcoverage[20391]);
    } else {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RELMSM"s, "is_relevant() was implemented without defining wait_for_relevant()"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20390]);
    }
    CData/*0:0*/ __VdynTrigger_h568678b7__0;
    __VdynTrigger_h568678b7__0 = 0;
    __VdynTrigger_h568678b7__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h568678b7__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                     705);
        __VdynTrigger_h568678b7__0 = e.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h568678b7__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                     705);
        e.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                 705);
    ++(vlSymsp->__Vcoverage[20392]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_lock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_lock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == sequencer)) {
        sequencer = Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer;
        ++(vlSymsp->__Vcoverage[20393]);
    } else {
        ++(vlSymsp->__Vcoverage[20394]);
    }
    if ((VlNull{} == sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "LOCKSEQR"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20395]);
    } else {
        ++(vlSymsp->__Vcoverage[20396]);
    }
    co_await VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 728)->__VnoInFunc_lock(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
    ++(vlSymsp->__Vcoverage[20397]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_grab(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_grab\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == sequencer)) {
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "GRAB"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[20398]);
        } else {
            ++(vlSymsp->__Vcoverage[20399]);
        }
        co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 749)->__VnoInFunc_grab(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20400]);
    } else {
        co_await VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 752)->__VnoInFunc_grab(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20401]);
    }
    ++(vlSymsp->__Vcoverage[20402]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_unlock(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_unlock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == sequencer)) {
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "UNLOCK"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[20403]);
        } else {
            ++(vlSymsp->__Vcoverage[20404]);
        }
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 769)->__VnoInFunc_unlock(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20405]);
    } else {
        VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 771)->__VnoInFunc_unlock(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20406]);
    }
    ++(vlSymsp->__Vcoverage[20407]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_ungrab(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_ungrab\n"); );
    // Body
    this->__VnoInFunc_unlock(vlSymsp, sequencer);
    ++(vlSymsp->__Vcoverage[20408]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_blocked(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_blocked\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    is_blocked__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 799)->__VnoInFunc_is_blocked(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, is_blocked__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20409]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_has_lock(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_has_lock\n"); );
    // Body
    has_lock__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 813)->__VnoInFunc_has_lock(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, has_lock__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20410]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill\n"); );
    // Body
    CData/*0:0*/ __VlefCall_1__get_automatic_phase_objection;
    CData/*0:0*/ __VlefCall_0__get_automatic_phase_objection;
    {
        if ((VlNull{} != this->__PVT__m_sequence_process)) {
            if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                this->__VnoInFunc_m_kill(vlProcess, vlSymsp);
                this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_0__get_automatic_phase_objection);
                if (__VlefCall_0__get_automatic_phase_objection) {
                    this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
                    ++(vlSymsp->__Vcoverage[20411]);
                } else {
                    ++(vlSymsp->__Vcoverage[20412]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[20414]);
            }
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 844)->__VnoInFunc_kill_sequence(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
            this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __VlefCall_1__get_automatic_phase_objection);
            if (__VlefCall_1__get_automatic_phase_objection) {
                this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
                ++(vlSymsp->__Vcoverage[20415]);
            } else {
                ++(vlSymsp->__Vcoverage[20416]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[20418]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20419]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_kill(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_kill\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20420]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> unnamedblk4__DOT__i;
    CData/*0:0*/ unnamedblk4__DOT__i__Vfirst;
    unnamedblk4__DOT__i__Vfirst = 0;
    this->__VnoInFunc_do_kill(vlSymsp);
    __VlefExpr_0 = (0U != this->__PVT__children_array.first(unnamedblk4__DOT__i));
    if (__VlefExpr_0) {
        unnamedblk4__DOT__i__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk4__DOT__i__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__children_array.next(unnamedblk4__DOT__i));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk4__DOT__i__Vfirst = 0U;
            VL_NULL_CHECK(unnamedblk4__DOT__i, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 874)->__VnoInFunc_kill(vlProcess, vlSymsp);
            ++(vlSymsp->__Vcoverage[20421]);
        }
        ++(vlSymsp->__Vcoverage[20422]);
    } else {
        ++(vlSymsp->__Vcoverage[20423]);
    }
    if ((VlNull{} != this->__PVT__m_sequence_process)) {
        VL_NULL_CHECK(this->__PVT__m_sequence_process, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 877)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_sequence_process = VlNull{};
        ++(vlSymsp->__Vcoverage[20424]);
    } else {
        ++(vlSymsp->__Vcoverage[20425]);
    }
    this->__PVT__m_sequence_state = 0x00000080U;
    if (((VlNull{} != Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 881)
         ->__PVT__children_array.exists(VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 882)->__PVT__children_array.erase(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this});
        ++(vlSymsp->__Vcoverage[20426]);
    } else {
        ++(vlSymsp->__Vcoverage[20427]);
    }
    this->__VnoInFunc_clean_exit_sequence(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[20428]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_item\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __VlefCall_1__create_object_by_type;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 902)->__VnoInFunc_get_factory(vlSymsp, factory);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 903)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, type_var, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), name, __VlefCall_1__create_object_by_type);
    __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__create_object_by_type, create_item__Vfuncrtn);
    if (VL_UNLIKELY(((! __VlefExpr_2)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_sequence_base.svh:903: Assertion failed in %Nuvm_pkg.uvm_sequence_base.create_item: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 903, "");
    }
    VL_NULL_CHECK(create_item__Vfuncrtn, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 905)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, l_sequencer);
    ++(vlSymsp->__Vcoverage[20429]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item\n"); );
    // Locals
    IData/*31:0*/ __Vtask_begin_tr__99__Vfuncout;
    __Vtask_begin_tr__99__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_7;
    IData/*31:0*/ __VlefCall_6__get_handle;
    std::string __VlefCall_5__get_root_sequence_name;
    CData/*0:0*/ __VlefCall_4__is_auto_item_recording_enabled;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__is_item;
    std::string __VlefCall_0__get_full_name;
    {
        if ((VlNull{} == item)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NULLITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a null item from sequence '"s, __VlefCall_0__get_full_name), "'"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20431]);
        }
        VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 930)->__VnoInFunc_is_item(vlSymsp, __VlefCall_1__is_item);
        if (__VlefCall_1__is_item) {
            ++(vlSymsp->__Vcoverage[20433]);
        } else {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQNOTITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a sequence using start_item() from sequence '"s, __VlefCall_2__get_full_name), "'. Use seq.start() instead."s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == sequencer)) {
            VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 938)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
            ++(vlSymsp->__Vcoverage[20434]);
        } else {
            ++(vlSymsp->__Vcoverage[20435]);
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
            ++(vlSymsp->__Vcoverage[20436]);
        } else {
            ++(vlSymsp->__Vcoverage[20437]);
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN("neither the item's sequencer nor dedicated sequencer has been supplied to start item in "s, __VlefCall_3__get_full_name)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20439]);
        }
        VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 948)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, sequencer);
        if (VL_GTS_III(32, 0U, set_priority)) {
            this->__VnoInFunc_get_priority(vlSymsp, set_priority);
            ++(vlSymsp->__Vcoverage[20440]);
        } else {
            ++(vlSymsp->__Vcoverage[20441]);
        }
        co_await VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 953)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, set_priority, 0U);
        VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 955)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __VlefCall_4__is_auto_item_recording_enabled);
        if (__VlefCall_4__is_auto_item_recording_enabled) {
            VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 956)->__VnoInFunc_get_root_sequence_name(vlSymsp, __VlefCall_5__get_root_sequence_name);
            if ((VlNull{} == this->__PVT__m_tr_recorder)) {
                __VlefCond_7 = 0U;
            } else {
                VL_NULL_CHECK(this->__PVT__m_tr_recorder, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 957)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_6__get_handle);
                __VlefCond_7 = __VlefCall_6__get_handle;
            }
            VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 956)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, item, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__get_root_sequence_name), "Transactions"s, ""s, 0ULL, __VlefCond_7, __Vtask_begin_tr__99__Vfuncout);
            ++(vlSymsp->__Vcoverage[20442]);
        } else {
            ++(vlSymsp->__Vcoverage[20443]);
        }
        this->__VnoInFunc_pre_do(vlSymsp, 1U);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20444]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_0__is_auto_item_recording_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VL_NULL_CHECK(item, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 979)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
    if ((VlNull{} == sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "STRITM"s, "sequence_item has null sequencer"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20445]);
    } else {
        ++(vlSymsp->__Vcoverage[20446]);
    }
    this->__VnoInFunc_mid_do(vlSymsp, item);
    VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 986)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, item, 0U);
    co_await VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 987)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, 0xffffffffU);
    VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 989)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __VlefCall_0__is_auto_item_recording_enabled);
    if (__VlefCall_0__is_auto_item_recording_enabled) {
        VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 990)->__VnoInFunc_end_tr(vlProcess, vlSymsp, item, 0ULL, 1U);
        ++(vlSymsp->__Vcoverage[20447]);
    } else {
        ++(vlSymsp->__Vcoverage[20448]);
    }
    this->__VnoInFunc_post_do(vlSymsp, item);
    ++(vlSymsp->__Vcoverage[20449]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITGRANT"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20450]);
    } else {
        ++(vlSymsp->__Vcoverage[20451]);
    }
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1016)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, item_priority, (IData)(lock_request));
    ++(vlSymsp->__Vcoverage[20452]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SENDREQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20453]);
    } else {
        ++(vlSymsp->__Vcoverage[20454]);
    }
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1032)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, request, rerandomize);
    ++(vlSymsp->__Vcoverage[20455]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITITEMDONE"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20456]);
    } else {
        ++(vlSymsp->__Vcoverage[20457]);
    }
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1054)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base>{this}, transaction_id);
    ++(vlSymsp->__Vcoverage[20458]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_use_response_handler(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_use_response_handler\n"); );
    // Body
    this->__PVT__m_use_response_handler = enable;
    ++(vlSymsp->__Vcoverage[20459]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler\n"); );
    // Body
    get_use_response_handler__Vfuncrtn = this->__PVT__m_use_response_handler;
    ++(vlSymsp->__Vcoverage[20460]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[20461]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_error_report_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_error_report_enabled\n"); );
    // Body
    this->__PVT__response_queue_error_report_enabled 
        = value;
    ++(vlSymsp->__Vcoverage[20462]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_error_report_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_error_report_enabled\n"); );
    // Body
    get_response_queue_error_report_enabled__Vfuncrtn 
        = this->__PVT__response_queue_error_report_enabled;
    ++(vlSymsp->__Vcoverage[20463]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_depth\n"); );
    // Body
    this->__PVT__response_queue_depth = value;
    ++(vlSymsp->__Vcoverage[20464]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_depth\n"); );
    // Body
    get_response_queue_depth__Vfuncrtn = this->__PVT__response_queue_depth;
    ++(vlSymsp->__Vcoverage[20465]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue\n"); );
    // Body
    this->__PVT__response_queue.clear();
    ++(vlSymsp->__Vcoverage[20466]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response\n"); );
    // Body
    std::string __VlefCall_0__get_full_name;
    {
        if (((0xffffffffU == this->__PVT__response_queue_depth) 
             | VL_LTS_III(32, this->__PVT__response_queue.size(), this->__PVT__response_queue_depth))) {
            this->__PVT__response_queue.push_back(response);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20468]);
        }
        if (this->__PVT__response_queue_error_report_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "Response queue overflow, response was dropped"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[20469]);
        } else {
            ++(vlSymsp->__Vcoverage[20470]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20471]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response\n"); );
    // Body
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
    ++(vlSymsp->__Vcoverage[20472]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h9a3b8396__0;
    __Vtrigprevexpr_h9a3b8396__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc40b1554__0;
    __Vtrigprevexpr_hc40b1554__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__get_transaction_id;
    IData/*31:0*/ queue_size;
    IData/*31:0*/ i;
    {
        queue_size = 0U;
        i = 0U;
        if ((0U == this->__PVT__response_queue.size())) {
            if ((0U == this->__PVT__response_queue.size())) {
                CData/*0:0*/ __VdynTrigger_hc1f3e000__0;
                __VdynTrigger_hc1f3e000__0 = 0;
                __VdynTrigger_hc1f3e000__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_hc1f3e000__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                                 1212);
                    __Vtrigprevexpr_hc40b1554__0 = 
                        (0U != this->__PVT__response_queue.size());
                    __VdynTrigger_hc1f3e000__0 = __Vtrigprevexpr_hc40b1554__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc1f3e000__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                             1212);
            }
            ++(vlSymsp->__Vcoverage[20473]);
        } else {
            ++(vlSymsp->__Vcoverage[20474]);
        }
        if ((0xffffffffU == transaction_id)) {
            response = this->__PVT__response_queue.pop_front();
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20476]);
        }
        while (true) {
            queue_size = this->__PVT__response_queue.size();
            i = 0U;
            while (VL_LTS_III(32, i, queue_size)) {
                VL_NULL_CHECK(this->__PVT__response_queue.at(i), "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1222)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_0__get_transaction_id);
                if ((__VlefCall_0__get_transaction_id 
                     == transaction_id)) {
                    response = this->__PVT__response_queue.at(i);
                    this->__PVT__response_queue.erase(i);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[20478]);
                }
                i = ((IData)(1U) + i);
                ++(vlSymsp->__Vcoverage[20479]);
            }
            if ((this->__PVT__response_queue.size() 
                 == queue_size)) {
                CData/*0:0*/ __VdynTrigger_hac445236__0;
                __VdynTrigger_hac445236__0 = 0;
                __VdynTrigger_hac445236__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_hac445236__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                                 1229);
                    __Vtrigprevexpr_h9a3b8396__0 = 
                        (this->__PVT__response_queue.size() 
                         != queue_size);
                    __VdynTrigger_hac445236__0 = __Vtrigprevexpr_h9a3b8396__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hac445236__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                             1229);
            }
            ++(vlSymsp->__Vcoverage[20480]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20481]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id\n"); );
    // Body
    {
        m_get_sqr_sequence_id__Vfuncrtn = 0U;
        if (this->__PVT__m_sqr_seq_ids.exists(sequencer_id)) {
            if (update_sequence_id) {
                this->__VnoInFunc_set_sequence_id(vlSymsp, this->__PVT__m_sqr_seq_ids
                                                  .at(sequencer_id));
                ++(vlSymsp->__Vcoverage[20482]);
            } else {
                ++(vlSymsp->__Vcoverage[20483]);
            }
            m_get_sqr_sequence_id__Vfuncrtn = this->__PVT__m_sqr_seq_ids
                .at(sequencer_id);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[20485]);
        }
        if (update_sequence_id) {
            this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
            ++(vlSymsp->__Vcoverage[20486]);
        } else {
            ++(vlSymsp->__Vcoverage[20487]);
        }
        m_get_sqr_sequence_id__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20488]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id\n"); );
    // Body
    this->__PVT__m_sqr_seq_ids.at(sequencer_id) = sequence_id;
    this->__VnoInFunc_set_sequence_id(vlSymsp, sequence_id);
    ++(vlSymsp->__Vcoverage[20489]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    ++(vlSymsp->__Vcoverage[20490]);
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_sequence_state = 0;
    __PVT__m_wait_for_grant_semaphore = 0;
    __PVT__m_sqr_seq_ids.atDefault() = 0;
    __PVT__children_array.atDefault() = 0;
    __PVT__response_queue_error_report_enabled = 0;
    __PVT__do_not_randomize = 0;
    __PVT__m_use_response_handler = 0;
    __PVT__is_rel_default = 0;
    __PVT__wait_rel_default = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::~Vtb_rng_uvm_pkg__03a__03auvm_sequence_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_sequence_state:" + VL_TO_STRING(__PVT__m_sequence_state);
    out += ", m_next_transaction_id:" + VL_TO_STRING(__PVT__m_next_transaction_id);
    out += ", m_priority:" + VL_TO_STRING(__PVT__m_priority);
    out += ", m_tr_recorder:" + VL_TO_STRING(__PVT__m_tr_recorder);
    out += ", m_wait_for_grant_semaphore:" + VL_TO_STRING(__PVT__m_wait_for_grant_semaphore);
    out += ", m_sqr_seq_ids:" + VL_TO_STRING(__PVT__m_sqr_seq_ids);
    out += ", children_array:" + VL_TO_STRING(__PVT__children_array);
    out += ", response_queue:" + VL_TO_STRING(__PVT__response_queue);
    out += ", response_queue_depth:" + VL_TO_STRING(__PVT__response_queue_depth);
    out += ", response_queue_error_report_enabled:" + VL_TO_STRING(__PVT__response_queue_error_report_enabled);
    out += ", do_not_randomize:" + VL_TO_STRING(__PVT__do_not_randomize);
    out += ", m_sequence_process:" + VL_TO_STRING(__PVT__m_sequence_process);
    out += ", m_use_response_handler:" + VL_TO_STRING(__PVT__m_use_response_handler);
    out += ", is_rel_default:" + VL_TO_STRING(__PVT__is_rel_default);
    out += ", wait_rel_default:" + VL_TO_STRING(__PVT__wait_rel_default);
    out += ", m_automatic_phase_objection_dap:" + VL_TO_STRING(__PVT__m_automatic_phase_objection_dap);
    out += ", m_starting_phase_dap:" + VL_TO_STRING(__PVT__m_starting_phase_dap);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
