// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi108> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi108__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[11126]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_barrier"s;
    ++(vlSymsp->__Vcoverage[11131]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi108> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi108__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[11127]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_barrier> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_barrier, vlProcess, vlSymsp, ""s, 0U);
        ++(vlSymsp->__Vcoverage[11128]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_barrier, vlProcess, vlSymsp, name, 0U);
        ++(vlSymsp->__Vcoverage[11129]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[11130]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_barrier"s;
    ++(vlSymsp->__Vcoverage[11132]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ threshold) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_event = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_event_, vlProcess, vlSymsp, 
                                  VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("barrier_"s, name)));
    this->__PVT__threshold = threshold;
    this->__PVT__num_waiters = 0U;
    this->__PVT__auto_reset = 1U;
    this->__PVT__at_threshold = 0U;
    ++(vlSymsp->__Vcoverage[11133]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_wait_for(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_wait_for\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    {
        if (this->__PVT__at_threshold) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11135]);
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        if (VL_GTES_III(32, this->__PVT__num_waiters, this->__PVT__threshold)) {
            if (this->__PVT__auto_reset) {
                ++(vlSymsp->__Vcoverage[11137]);
            } else {
                this->__PVT__at_threshold = 1U;
                ++(vlSymsp->__Vcoverage[11136]);
            }
            co_await this->__VnoInFunc_m_trigger(vlSymsp);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11141]);
        }
        co_await VL_NULL_CHECK(this->__PVT__m_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 81)->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11142]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_reset\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__PVT__at_threshold = 0U;
    if ((0U != this->__PVT__num_waiters)) {
        if (wakeup) {
            VL_NULL_CHECK(this->__PVT__m_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 101)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
            ++(vlSymsp->__Vcoverage[11143]);
        } else {
            VL_NULL_CHECK(this->__PVT__m_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 103)->__VnoInFunc_reset(vlSymsp, 0U);
            ++(vlSymsp->__Vcoverage[11144]);
        }
        ++(vlSymsp->__Vcoverage[11145]);
    } else {
        ++(vlSymsp->__Vcoverage[11146]);
    }
    this->__PVT__num_waiters = 0U;
    ++(vlSymsp->__Vcoverage[11147]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_auto_reset(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_auto_reset\n"); );
    // Body
    this->__PVT__at_threshold = 0U;
    this->__PVT__auto_reset = value;
    ++(vlSymsp->__Vcoverage[11148]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_threshold(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ threshold) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_threshold\n"); );
    // Body
    this->__PVT__threshold = threshold;
    if (VL_LTES_III(32, threshold, this->__PVT__num_waiters)) {
        this->__VnoInFunc_reset(vlSymsp, 1U);
        ++(vlSymsp->__Vcoverage[11149]);
    } else {
        ++(vlSymsp->__Vcoverage[11150]);
    }
    ++(vlSymsp->__Vcoverage[11151]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_threshold(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_threshold\n"); );
    // Body
    get_threshold__Vfuncrtn = this->__PVT__threshold;
    ++(vlSymsp->__Vcoverage[11152]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_num_waiters(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_num_waiters\n"); );
    // Body
    get_num_waiters__Vfuncrtn = this->__PVT__num_waiters;
    ++(vlSymsp->__Vcoverage[11153]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_cancel(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_cancel\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 175)->__VnoInFunc_cancel(vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 176)->__VnoInFunc_get_num_waiters(vlSymsp, this->__PVT__num_waiters);
    ++(vlSymsp->__Vcoverage[11154]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_m_trigger(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_m_trigger\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VL_NULL_CHECK(this->__PVT__m_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 180)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
    this->__PVT__num_waiters = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, nullptr, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 
                                            182);
    ++(vlSymsp->__Vcoverage[11155]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_print\n"); );
    // Body
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 186)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "threshold"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__threshold), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 187)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_waiters"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__num_waiters), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 188)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "at_threshold"s, (QData)((IData)(this->__PVT__at_threshold)), 1U, 0x01000000U, 0x2eU, "bit"s);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 189)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "auto_reset"s, (QData)((IData)(this->__PVT__auto_reset)), 1U, 0x01000000U, 0x2eU, "bit"s);
    ++(vlSymsp->__Vcoverage[11156]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_barrier> b;
    {
        Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, b);
        if (((! __VlefExpr_0) || (VlNull{} == b))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11158]);
        }
        this->__PVT__threshold = VL_NULL_CHECK(b, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 197)
            ->__PVT__threshold;
        this->__PVT__num_waiters = VL_NULL_CHECK(b, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 198)
            ->__PVT__num_waiters;
        this->__PVT__at_threshold = VL_NULL_CHECK(b, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 199)
            ->__PVT__at_threshold;
        this->__PVT__auto_reset = VL_NULL_CHECK(b, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 200)
            ->__PVT__auto_reset;
        this->__PVT__m_event = VL_NULL_CHECK(b, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_barrier.svh", 201)
            ->__PVT__m_event;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11159]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_barrier::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__threshold = 0;
    __PVT__num_waiters = 0;
    __PVT__at_threshold = 0;
    __PVT__auto_reset = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_barrier::~Vtb_rng_uvm_pkg__03a__03auvm_barrier() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_barrier::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_barrier::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_barrier::to_string_middle\n"); );
    // Body
    std::string out;
    out += "threshold:" + VL_TO_STRING(__PVT__threshold);
    out += ", num_waiters:" + VL_TO_STRING(__PVT__num_waiters);
    out += ", at_threshold:" + VL_TO_STRING(__PVT__at_threshold);
    out += ", auto_reset:" + VL_TO_STRING(__PVT__auto_reset);
    out += ", m_event:" + VL_TO_STRING(__PVT__m_event);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
