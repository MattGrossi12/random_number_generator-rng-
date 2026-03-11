// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> target) {
    Vtb_rng_uvm_pkg__03a__03auvm_objection_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::new\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__cs);
    ++(vlSymsp->__Vcoverage[17772]);
    /*super.new*/;
    if ((VlNull{} != target)) {
        this->__PVT__target = target;
        ++(vlSymsp->__Vcoverage[17773]);
    } else {
        VL_NULL_CHECK(this->__PVT__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 312)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
        this->__PVT__target = __Vtask_get_root__2__Vfuncout;
        ++(vlSymsp->__Vcoverage[17774]);
    }
    ++(vlSymsp->__Vcoverage[17775]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    if ((obj == this->__PVT__target)) {
        if (this->__PVT__cnt.exists(source_obj)) {
            ++(vlSymsp->__Vcoverage[17777]);
        } else {
            this->__PVT__cnt.at(source_obj) = 0U;
            ++(vlSymsp->__Vcoverage[17776]);
        }
        __VlefExpr_0 = ((IData)(1U) + this->__PVT__cnt
                        .at(source_obj));
        this->__PVT__cnt.at(source_obj) = __VlefExpr_0;
        this->__PVT__last_trigger.at(source_obj) = 
            VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        ++(vlSymsp->__Vcoverage[17778]);
    } else {
        ++(vlSymsp->__Vcoverage[17779]);
    }
    ++(vlSymsp->__Vcoverage[17780]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped\n"); );
    // Body
    this->__VnoInFunc_raised(vlSymsp, objection, obj, source_obj, description, count);
    ++(vlSymsp->__Vcoverage[17781]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_reset_counts(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_reset_counts\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk1__DOT__i;
    CData/*0:0*/ unnamedblk1__DOT__i__Vfirst;
    unnamedblk1__DOT__i__Vfirst = 0;
    __VlefExpr_0 = (0U != this->__PVT__cnt.first(unnamedblk1__DOT__i));
    if (__VlefExpr_0) {
        unnamedblk1__DOT__i__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk1__DOT__i__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__cnt.next(unnamedblk1__DOT__i));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk1__DOT__i__Vfirst = 0U;
            this->__PVT__cnt.at(unnamedblk1__DOT__i) = 0U;
            ++(vlSymsp->__Vcoverage[17782]);
        }
        ++(vlSymsp->__Vcoverage[17783]);
    } else {
        ++(vlSymsp->__Vcoverage[17784]);
    }
    ++(vlSymsp->__Vcoverage[17785]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_objects_triggered(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &objects_triggered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_objects_triggered\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk2__DOT__i;
    CData/*0:0*/ unnamedblk2__DOT__i__Vfirst;
    unnamedblk2__DOT__i__Vfirst = 0;
    objects_triggered__Vfuncrtn = 0U;
    __VlefExpr_0 = (0U != this->__PVT__cnt.first(unnamedblk2__DOT__i));
    if (__VlefExpr_0) {
        unnamedblk2__DOT__i__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk2__DOT__i__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__cnt.next(unnamedblk2__DOT__i));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk2__DOT__i__Vfirst = 0U;
            __VlefExpr_2 = (0U != this->__PVT__cnt.at(unnamedblk2__DOT__i));
            if (__VlefExpr_2) {
                objects_triggered__Vfuncrtn = ((IData)(1U) 
                                               + objects_triggered__Vfuncrtn);
                ++(vlSymsp->__Vcoverage[17786]);
            } else {
                ++(vlSymsp->__Vcoverage[17787]);
            }
            ++(vlSymsp->__Vcoverage[17788]);
        }
        ++(vlSymsp->__Vcoverage[17789]);
    } else {
        ++(vlSymsp->__Vcoverage[17790]);
    }
    ++(vlSymsp->__Vcoverage[17791]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__cnt.atDefault() = 0;
    __PVT__last_trigger.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 6832164394050517435ULL, 14228963972983550624ull);
}

Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::~Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += "cnt:" + VL_TO_STRING(__PVT__cnt);
    out += ", last_trigger:" + VL_TO_STRING(__PVT__last_trigger);
    out += ", target:" + VL_TO_STRING(__PVT__target);
    out += ", cs:" + VL_TO_STRING(__PVT__cs);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_objection_callback::to_string_middle();
    return (out);
}
