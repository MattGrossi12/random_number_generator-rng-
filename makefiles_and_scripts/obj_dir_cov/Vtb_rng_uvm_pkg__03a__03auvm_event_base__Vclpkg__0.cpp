// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi20> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi20__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[11090]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_event_base__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_event_base"s;
    ++(vlSymsp->__Vcoverage[11092]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi20> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi20__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[11091]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_event_base"s;
    ++(vlSymsp->__Vcoverage[11093]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__trigger_time = 0ULL;
    ++(vlSymsp->__Vcoverage[11094]);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[11095]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_on(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ delta) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_on\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0;
    __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 = 0;
    // Body
    VL_KEEP_THIS;
    {
        if (this->__PVT__on) {
            if (delta) {
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                        75);
                ++(vlSymsp->__Vcoverage[11096]);
            } else {
                ++(vlSymsp->__Vcoverage[11097]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11099]);
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_hf32f9014__0;
        __VdynTrigger_hf32f9014__0 = 0;
        __VdynTrigger_hf32f9014__0 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 
            = this->__PVT__on;
        while ((1U & (~ (IData)(__VdynTrigger_hf32f9014__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg::uvm_event_base.on)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                         79);
            __VdynTrigger_hf32f9014__0 = ((IData)(this->__PVT__on) 
                                          != (IData)(__Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf32f9014__0);
            __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__0 
                = this->__PVT__on;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg::uvm_event_base.on)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                     79);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11100]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_off(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ delta) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_off\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1;
    __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1 = 0;
    // Body
    VL_KEEP_THIS;
    {
        if (this->__PVT__on) {
            ++(vlSymsp->__Vcoverage[11104]);
        } else {
            if (delta) {
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        nullptr, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                        97);
                ++(vlSymsp->__Vcoverage[11101]);
            } else {
                ++(vlSymsp->__Vcoverage[11102]);
            }
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_hf32f9014__1;
        __VdynTrigger_hf32f9014__1 = 0;
        __VdynTrigger_hf32f9014__1 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1 
            = this->__PVT__on;
        while ((1U & (~ (IData)(__VdynTrigger_hf32f9014__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@( uvm_pkg::uvm_event_base.on)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                         101);
            __VdynTrigger_hf32f9014__1 = ((IData)(this->__PVT__on) 
                                          != (IData)(__Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf32f9014__1);
            __Vtrigprevexpr___TOP__uvm_pkg__03a__03auvm_event_base____PVT__on__1 
                = this->__PVT__on;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@( uvm_pkg::uvm_event_base.on)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                     101);
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(this->__PVT__on)))) {
        ++(vlSymsp->__Vcoverage[11105]);
    }
    if (this->__PVT__on) {
        ++(vlSymsp->__Vcoverage[11106]);
    }
    ++(vlSymsp->__Vcoverage[11107]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_trigger(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_trigger\n"); );
    // Body
    VL_KEEP_THIS;
    this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
    CData/*0:0*/ __VdynTrigger_h466858eb__0;
    __VdynTrigger_h466858eb__0 = 0;
    __VdynTrigger_h466858eb__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h466858eb__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                     118);
        __VdynTrigger_h466858eb__0 = this->__PVT__m_event.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h466858eb__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                     118);
        this->__PVT__m_event.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                 118);
    ++(vlSymsp->__Vcoverage[11108]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_ptrigger(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_wait_ptrigger\n"); );
    // Body
    VL_KEEP_THIS;
    {
        if (this->__PVT__m_event.isTriggered()) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11110]);
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        CData/*0:0*/ __VdynTrigger_h466858eb__1;
        __VdynTrigger_h466858eb__1 = 0;
        __VdynTrigger_h466858eb__1 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h466858eb__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                         134);
            __VdynTrigger_h466858eb__1 = this->__PVT__m_event.isFired();
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h466858eb__1);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                         134);
            this->__PVT__m_event.clearFired();
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([event] uvm_pkg::uvm_event_base.m_event)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 
                                                     134);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11111]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_trigger_time(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &get_trigger_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_trigger_time\n"); );
    // Body
    get_trigger_time__Vfuncrtn = this->__PVT__trigger_time;
    ++(vlSymsp->__Vcoverage[11112]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_is_on(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_on__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_is_on\n"); );
    // Body
    is_on__Vfuncrtn = this->__PVT__on;
    ++(vlSymsp->__Vcoverage[11113]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_is_off(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_off__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_is_off\n"); );
    // Body
    is_off__Vfuncrtn = (1U & (~ (IData)(this->__PVT__on)));
    ++(vlSymsp->__Vcoverage[11114]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_reset\n"); );
    // Body
    VlAssignableEvent e;
    if (wakeup) {
        vlSymsp->fireEvent(this->__PVT__m_event);
        ++(vlSymsp->__Vcoverage[11115]);
    } else {
        ++(vlSymsp->__Vcoverage[11116]);
    }
    this->__PVT__m_event = e;
    this->__PVT__num_waiters = 0U;
    this->__PVT__on = 0U;
    this->__PVT__trigger_time = 0ULL;
    ++(vlSymsp->__Vcoverage[11117]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_cancel(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_cancel\n"); );
    // Body
    if (VL_LTS_III(32, 0U, this->__PVT__num_waiters)) {
        this->__PVT__num_waiters = (this->__PVT__num_waiters 
                                    - (IData)(1U));
        ++(vlSymsp->__Vcoverage[11118]);
    } else {
        ++(vlSymsp->__Vcoverage[11119]);
    }
    ++(vlSymsp->__Vcoverage[11120]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_num_waiters(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_get_num_waiters\n"); );
    // Body
    get_num_waiters__Vfuncrtn = this->__PVT__num_waiters;
    ++(vlSymsp->__Vcoverage[11121]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print\n"); );
    // Body
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 225)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_waiters"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__num_waiters), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 226)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "on"s, (QData)((IData)(this->__PVT__on)), 1U, 0x01000000U, 0x2eU, "bit"s);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 227)->__VnoInFunc_print_time(vlProcess, vlSymsp, "trigger_time"s, this->__PVT__trigger_time, 0x2eU);
    ++(vlSymsp->__Vcoverage[11122]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_base> e;
    {
        Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, e);
        if (((! __VlefExpr_0) || (VlNull{} == e))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11124]);
        }
        this->__PVT__m_event = VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 236)
            ->__PVT__m_event;
        this->__PVT__num_waiters = VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 237)
            ->__PVT__num_waiters;
        this->__PVT__on = VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 238)
            ->__PVT__on;
        this->__PVT__trigger_time = VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_event.svh", 239)
            ->__PVT__trigger_time;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11125]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_event_base::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__num_waiters = 0;
    __PVT__on = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_event_base::~Vtb_rng_uvm_pkg__03a__03auvm_event_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_event_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_event_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_event_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_event:" + VL_TO_STRING(__PVT__m_event);
    out += ", num_waiters:" + VL_TO_STRING(__PVT__num_waiters);
    out += ", on:" + VL_TO_STRING(__PVT__on);
    out += ", trigger_time:" + VL_TO_STRING(__PVT__trigger_time);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
