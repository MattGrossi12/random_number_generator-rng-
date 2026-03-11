// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz255> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz255__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[18829]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_tlm_fifo #(T)"s;
    ++(vlSymsp->__Vcoverage[18831]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz255> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz255__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[18830]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tlm_fifo #(T)"s;
    ++(vlSymsp->__Vcoverage[18832]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ size) {
    Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m = VL_NEW(Vtb_rng_std__03a__03amailbox__Tz26, vlSymsp, size);
    this->__PVT__m_size = size;
    ++(vlSymsp->__Vcoverage[18833]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_size;
    ++(vlSymsp->__Vcoverage[18834]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_used(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_used\n"); );
    // Body
    used__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 88)->__VnoInFunc_num(vlSymsp, used__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[18835]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_is_empty(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_is_empty\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    is_empty__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 97)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    is_empty__Vfuncrtn = (0U == __VlefCall_0__num);
    ++(vlSymsp->__Vcoverage[18836]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_is_full(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_is_full\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__num;
    is_full__Vfuncrtn = 0U;
    __VlefLogAnd_1 = (0U != this->__PVT__m_size);
    if (__VlefLogAnd_1) {
        VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 107)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        __VlefLogAnd_1 = (__VlefCall_0__num == this->__PVT__m_size);
    }
    is_full__Vfuncrtn = __VlefLogAnd_1;
    ++(vlSymsp->__Vcoverage[18837]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 113)->__VnoInFunc_put(vlSymsp, t);
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::__PVT__put_ap, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 114)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    ++(vlSymsp->__Vcoverage[18838]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    this->__PVT__m_pending_blocked_gets = ((IData)(1U) 
                                           + this->__PVT__m_pending_blocked_gets);
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 119)->__VnoInFunc_get(vlSymsp, t);
    this->__PVT__m_pending_blocked_gets = (this->__PVT__m_pending_blocked_gets 
                                           - (IData)(1U));
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::__PVT__get_ap, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 121)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    ++(vlSymsp->__Vcoverage[18839]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_peek\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 125)->__VnoInFunc_peek(vlSymsp, t);
    ++(vlSymsp->__Vcoverage[18840]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_get\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__11__Vfuncout;
    __Vtask_try_get__11__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__try_get;
    {
        try_get__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 129)->__VnoInFunc_try_get(vlSymsp, t, __Vtask_try_get__11__Vfuncout);
        __VlefCall_0__try_get = __Vtask_try_get__11__Vfuncout;
        if ((0U != __VlefCall_0__try_get)) {
            ++(vlSymsp->__Vcoverage[18842]);
        } else {
            try_get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::__PVT__get_ap, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 133)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[18843]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_peek__13__Vfuncout;
    __Vtask_try_peek__13__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_0__try_peek;
    {
        try_peek__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 138)->__VnoInFunc_try_peek(vlSymsp, t, __Vtask_try_peek__13__Vfuncout);
        __VlefCall_0__try_peek = __Vtask_try_peek__13__Vfuncout;
        if ((0U != __VlefCall_0__try_peek)) {
            ++(vlSymsp->__Vcoverage[18845]);
        } else {
            try_peek__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[18846]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_put(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_try_put\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__try_put;
    {
        try_put__Vfuncrtn = 0U;
        VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 145)->__VnoInFunc_try_put(vlSymsp, t, __VlefCall_0__try_put);
        if ((0U != __VlefCall_0__try_put)) {
            ++(vlSymsp->__Vcoverage[18848]);
        } else {
            try_put__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::__PVT__put_ap, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 149)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_put__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[18849]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_put(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_put\n"); );
    // Body
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__num;
    can_put__Vfuncrtn = 0U;
    __VlefLogOr_1 = (0U == this->__PVT__m_size);
    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 154)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        __VlefLogOr_1 = VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_size);
    }
    can_put__Vfuncrtn = __VlefLogOr_1;
    ++(vlSymsp->__Vcoverage[18850]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_get(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_get\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    can_get__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 158)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    can_get__Vfuncrtn = (VL_LTS_III(32, 0U, __VlefCall_0__num) 
                         && (0U == this->__PVT__m_pending_blocked_gets));
    ++(vlSymsp->__Vcoverage[18851]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_peek(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_can_peek\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    can_peek__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 162)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    can_peek__Vfuncrtn = VL_LTS_III(32, 0U, __VlefCall_0__num);
    ++(vlSymsp->__Vcoverage[18852]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_flush(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_flush\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vfunc_try_get__19__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__num;
    CData/*0:0*/ r;
    r = 1U;
    while (r) {
        this->__VnoInFunc_try_get(vlSymsp, __Vfunc_try_get__19__t, r);
        ++(vlSymsp->__Vcoverage[18853]);
    }
    VL_NULL_CHECK(this->__PVT__m, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 178)->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
    if ((VL_LTS_III(32, 0U, __VlefCall_0__num) && (0U 
                                                   != this->__PVT__m_pending_blocked_gets))) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "flush failed"s, "there are blocked gets preventing the flush"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[18854]);
    } else {
        ++(vlSymsp->__Vcoverage[18855]);
    }
    ++(vlSymsp->__Vcoverage[18856]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_size = 0;
    __PVT__m_pending_blocked_gets = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::~Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz26::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m:" + VL_TO_STRING(__PVT__m);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_pending_blocked_gets:" + VL_TO_STRING(__PVT__m_pending_blocked_gets);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26::to_string_middle();
    return (out);
}
