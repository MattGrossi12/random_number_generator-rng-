// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> initiator) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__events = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz7, vlProcess, vlSymsp, "events"s);
    ++(vlSymsp->__Vcoverage[15726]);
    this->__PVT__m_transaction_id = 0xffffffffU;
    ++(vlSymsp->__Vcoverage[15727]);
    this->__PVT__begin_time = 0xffffffffffffffffULL;
    ++(vlSymsp->__Vcoverage[15728]);
    this->__PVT__end_time = 0xffffffffffffffffULL;
    ++(vlSymsp->__Vcoverage[15729]);
    this->__PVT__accept_time = 0xffffffffffffffffULL;
    ++(vlSymsp->__Vcoverage[15730]);
    /*super.new*/;
    this->__PVT__initiator = initiator;
    this->__PVT__m_transaction_id = 0xffffffffU;
    ++(vlSymsp->__Vcoverage[15731]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id\n"); );
    // Body
    this->__PVT__m_transaction_id = id;
    ++(vlSymsp->__Vcoverage[15732]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_transaction_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id\n"); );
    // Body
    get_transaction_id__Vfuncrtn = this->__PVT__m_transaction_id;
    ++(vlSymsp->__Vcoverage[15733]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_initiator(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> initiator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_initiator\n"); );
    // Body
    this->__PVT__initiator = initiator;
    ++(vlSymsp->__Vcoverage[15734]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_initiator(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &get_initiator__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_initiator\n"); );
    // Body
    get_initiator__Vfuncrtn = this->__PVT__initiator;
    ++(vlSymsp->__Vcoverage[15735]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz7> &get_event_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool\n"); );
    // Body
    get_event_pool__Vfuncrtn = this->__PVT__events;
    ++(vlSymsp->__Vcoverage[15736]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_active(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_active__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_active\n"); );
    // Body
    is_active__Vfuncrtn = (0xffffffffffffffffULL == this->__PVT__end_time);
    ++(vlSymsp->__Vcoverage[15737]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_begin_time(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &get_begin_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_begin_time\n"); );
    // Body
    get_begin_time__Vfuncrtn = this->__PVT__begin_time;
    ++(vlSymsp->__Vcoverage[15738]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_end_time(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_end_time\n"); );
    // Body
    get_end_time__Vfuncrtn = this->__PVT__end_time;
    ++(vlSymsp->__Vcoverage[15739]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_accept_time(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &get_accept_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_accept_time\n"); );
    // Body
    get_accept_time__Vfuncrtn = this->__PVT__accept_time;
    ++(vlSymsp->__Vcoverage[15740]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_accept_tr(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_accept_tr\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15741]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15742]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15743]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print\n"); );
    // Body
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    std::string str;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> tmp_initiator;
    str = ""s;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 618)->__VnoInFunc_print_time(vlProcess, vlSymsp, "accept_time"s, this->__PVT__accept_time, 0x2eU);
        ++(vlSymsp->__Vcoverage[15744]);
    } else {
        ++(vlSymsp->__Vcoverage[15745]);
    }
    if ((0xffffffffffffffffULL != this->__PVT__begin_time)) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 620)->__VnoInFunc_print_time(vlProcess, vlSymsp, "begin_time"s, this->__PVT__begin_time, 0x2eU);
        ++(vlSymsp->__Vcoverage[15746]);
    } else {
        ++(vlSymsp->__Vcoverage[15747]);
    }
    if ((0xffffffffffffffffULL != this->__PVT__end_time)) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 622)->__VnoInFunc_print_time(vlProcess, vlSymsp, "end_time"s, this->__PVT__end_time, 0x2eU);
        ++(vlSymsp->__Vcoverage[15748]);
    } else {
        ++(vlSymsp->__Vcoverage[15749]);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        tmp_initiator = this->__PVT__initiator;
        VL_NULL_CHECK(tmp_initiator, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 625)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
        VL_SFORMAT_NX(64,str,"@%0d",0,32,__VlefCall_0__get_inst_id);
        VL_NULL_CHECK(this->__PVT__initiator, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 626)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 626)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xffffffffU, str, 0x2eU);
        ++(vlSymsp->__Vcoverage[15750]);
    } else {
        ++(vlSymsp->__Vcoverage[15751]);
    }
    ++(vlSymsp->__Vcoverage[15752]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_transaction> txn;
    {
        Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if ((VlNull{} == rhs)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15754]);
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, txn);
        if (__VlefExpr_0) {
            ++(vlSymsp->__Vcoverage[15756]);
        } else {
            goto __Vlabel0;
        }
        this->__PVT__accept_time = VL_NULL_CHECK(txn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 636)
            ->__PVT__accept_time;
        this->__PVT__begin_time = VL_NULL_CHECK(txn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 637)
            ->__PVT__begin_time;
        this->__PVT__end_time = VL_NULL_CHECK(txn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 638)
            ->__PVT__end_time;
        this->__PVT__initiator = VL_NULL_CHECK(txn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 639)
            ->__PVT__initiator;
        this->__PVT__stream_handle = VL_NULL_CHECK(txn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 640)
            ->__PVT__stream_handle;
        this->__PVT__tr_recorder = VL_NULL_CHECK(txn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 641)
            ->__PVT__tr_recorder;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15757]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    // Body
    IData/*27:0*/ unnamedblk73__DOT__p;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        __Vtemp_1[0U] = (IData)(this->__PVT__accept_time);
        __Vtemp_1[1U] = (IData)((this->__PVT__accept_time 
                                 >> 0x00000020U));
        __Vilp1 = 2U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vtemp_1[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 651)->__VnoInFunc_record_field(vlProcess, vlSymsp, "accept_time"s, __Vtemp_1, 0x00000040U, 0x09000000U);
        ++(vlSymsp->__Vcoverage[15758]);
    } else {
        ++(vlSymsp->__Vcoverage[15759]);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 653)->__VnoInFunc_get_recursion_policy(vlSymsp, unnamedblk73__DOT__p);
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 654)->__VnoInFunc_set_recursion_policy(vlSymsp, 0x00040000U);
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 655)->__VnoInFunc_record_object(vlProcess, vlSymsp, "initiator"s, this->__PVT__initiator);
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 656)->__VnoInFunc_set_recursion_policy(vlSymsp, unnamedblk73__DOT__p);
        ++(vlSymsp->__Vcoverage[15760]);
    } else {
        ++(vlSymsp->__Vcoverage[15761]);
    }
    ++(vlSymsp->__Vcoverage[15762]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_tr_handle(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_tr_handle\n"); );
    // Body
    get_tr_handle__Vfuncrtn = 0U;
    if ((VlNull{} != this->__PVT__tr_recorder)) {
        VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 665)->__VnoInFunc_get_handle(vlSymsp, get_tr_handle__Vfuncrtn);
    } else {
        get_tr_handle__Vfuncrtn = 0U;
    }
    ++(vlSymsp->__Vcoverage[15765]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_disable_recording(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_disable_recording\n"); );
    // Body
    this->__PVT__stream_handle = VlNull{};
    ++(vlSymsp->__Vcoverage[15766]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_enable_recording(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_enable_recording\n"); );
    // Body
    this->__PVT__stream_handle = stream;
    ++(vlSymsp->__Vcoverage[15767]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled\n"); );
    // Body
    is_recording_enabled__Vfuncrtn = (VlNull{} != this->__PVT__stream_handle);
    ++(vlSymsp->__Vcoverage[15768]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_accept_tr(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ accept_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_accept_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> e;
    if ((0ULL != accept_time)) {
        this->__PVT__accept_time = accept_time;
        ++(vlSymsp->__Vcoverage[15769]);
    } else {
        this->__PVT__accept_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        ++(vlSymsp->__Vcoverage[15770]);
    }
    this->__VnoInFunc_do_accept_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__events, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 706)->__VnoInFunc_get(vlProcess, vlSymsp, "accept"s, e);
    if ((VlNull{} != e)) {
        VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 709)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[15771]);
    } else {
        ++(vlSymsp->__Vcoverage[15772]);
    }
    ++(vlSymsp->__Vcoverage[15773]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr\n"); );
    // Body
    begin_tr__Vfuncrtn = 0U;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, 0U, begin_tr__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[15774]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_child_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_child_tr\n"); );
    // Body
    begin_child_tr__Vfuncrtn = 0U;
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, parent_handle, begin_child_tr__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[15775]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_parent_child_link> __VlefCall_3__get_link;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__is_recording_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> unnamedblk74__DOT__db;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> unnamedblk75__DOT__begin_event;
    m_begin_tr__Vfuncrtn = 0U;
    QData/*63:0*/ tmp_time;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> parent_recorder;
    tmp_time = VL_RTOIROUND_Q_D(((0ULL == begin_time)
                                  ? VL_TIME_UNITED_D(1)
                                  : VL_ITOR_D_Q(64, begin_time)));
    if ((0U != parent_handle)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, parent_handle, parent_recorder);
        ++(vlSymsp->__Vcoverage[15778]);
    } else {
        ++(vlSymsp->__Vcoverage[15779]);
    }
    if ((VlNull{} != this->__PVT__tr_recorder)) {
        this->__VnoInFunc_end_tr(vlProcess, vlSymsp, tmp_time, 1U);
        ++(vlSymsp->__Vcoverage[15780]);
    } else {
        ++(vlSymsp->__Vcoverage[15781]);
    }
    this->__VnoInFunc_is_recording_enabled(vlSymsp, __VlefCall_0__is_recording_enabled);
    if (__VlefCall_0__is_recording_enabled) {
        VL_NULL_CHECK(this->__PVT__stream_handle, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 747)->__VnoInFunc_get_db(vlProcess, vlSymsp, unnamedblk74__DOT__db);
        this->__PVT__end_time = 0xffffffffffffffffULL;
        this->__PVT__begin_time = tmp_time;
        if ((VlNull{} == parent_recorder)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
            VL_NULL_CHECK(this->__PVT__stream_handle, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 753)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), this->__PVT__begin_time, "Begin_No_Parent, Link"s, this->__PVT__tr_recorder);
            ++(vlSymsp->__Vcoverage[15784]);
        } else {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            VL_NULL_CHECK(this->__PVT__stream_handle, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 757)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), this->__PVT__begin_time, "Begin_End, Link"s, this->__PVT__tr_recorder);
            if ((VlNull{} != this->__PVT__tr_recorder)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_parent_child_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, parent_recorder, this->__PVT__tr_recorder, "pc_link"s, __VlefCall_3__get_link);
                VL_NULL_CHECK(unnamedblk74__DOT__db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 762)->__VnoInFunc_establish_link(vlProcess, vlSymsp, __VlefCall_3__get_link);
                ++(vlSymsp->__Vcoverage[15782]);
            } else {
                ++(vlSymsp->__Vcoverage[15783]);
            }
            ++(vlSymsp->__Vcoverage[15785]);
        }
        if ((VlNull{} != this->__PVT__tr_recorder)) {
            VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 766)->__VnoInFunc_get_handle(vlSymsp, m_begin_tr__Vfuncrtn);
            ++(vlSymsp->__Vcoverage[15786]);
        } else {
            m_begin_tr__Vfuncrtn = 0U;
            ++(vlSymsp->__Vcoverage[15787]);
        }
        ++(vlSymsp->__Vcoverage[15788]);
    } else {
        this->__PVT__tr_recorder = VlNull{};
        this->__PVT__end_time = 0xffffffffffffffffULL;
        this->__PVT__begin_time = tmp_time;
        m_begin_tr__Vfuncrtn = 0U;
        ++(vlSymsp->__Vcoverage[15789]);
    }
    this->__VnoInFunc_do_begin_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__events, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 782)->__VnoInFunc_get(vlProcess, vlSymsp, "begin"s, unnamedblk75__DOT__begin_event);
    VL_NULL_CHECK(unnamedblk75__DOT__begin_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 783)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
    if ((0ULL == begin_time)) {
        ++(vlSymsp->__Vcoverage[15776]);
    }
    if ((0ULL != begin_time)) {
        ++(vlSymsp->__Vcoverage[15777]);
    }
    ++(vlSymsp->__Vcoverage[15790]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ end_time, CData/*0:0*/ free_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_recording_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> unnamedblk76__DOT__end_event;
    this->__PVT__end_time = VL_RTOIROUND_Q_D(((0ULL 
                                               == end_time)
                                               ? VL_TIME_UNITED_D(1)
                                               : VL_ITOR_D_Q(64, end_time)));
    this->__VnoInFunc_do_end_tr(vlSymsp);
    this->__VnoInFunc_is_recording_enabled(vlSymsp, __VlefCall_0__is_recording_enabled);
    if (((IData)(__VlefCall_0__is_recording_enabled) 
         && (VlNull{} != this->__PVT__tr_recorder))) {
        this->__VnoInFunc_record(vlProcess, vlSymsp, this->__PVT__tr_recorder);
        VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 800)->__VnoInFunc_close(vlSymsp, this->__PVT__end_time);
        if (free_handle) {
            VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 805)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
            ++(vlSymsp->__Vcoverage[15793]);
        } else {
            ++(vlSymsp->__Vcoverage[15794]);
        }
        ++(vlSymsp->__Vcoverage[15795]);
    } else {
        ++(vlSymsp->__Vcoverage[15796]);
    }
    this->__PVT__tr_recorder = VlNull{};
    VL_NULL_CHECK(this->__PVT__events, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 813)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, unnamedblk76__DOT__end_event);
    VL_NULL_CHECK(unnamedblk76__DOT__end_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_transaction.svh", 814)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
    if ((0ULL == end_time)) {
        ++(vlSymsp->__Vcoverage[15791]);
    }
    if ((0ULL != end_time)) {
        ++(vlSymsp->__Vcoverage[15792]);
    }
    ++(vlSymsp->__Vcoverage[15797]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_transaction::~Vtb_rng_uvm_pkg__03a__03auvm_transaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_transaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_transaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_transaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "events:" + VL_TO_STRING(__PVT__events);
    out += ", m_transaction_id:" + VL_TO_STRING(__PVT__m_transaction_id);
    out += ", begin_time:" + VL_TO_STRING(__PVT__begin_time);
    out += ", end_time:" + VL_TO_STRING(__PVT__end_time);
    out += ", accept_time:" + VL_TO_STRING(__PVT__accept_time);
    out += ", initiator:" + VL_TO_STRING(__PVT__initiator);
    out += ", stream_handle:" + VL_TO_STRING(__PVT__stream_handle);
    out += ", tr_recorder:" + VL_TO_STRING(__PVT__tr_recorder);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
