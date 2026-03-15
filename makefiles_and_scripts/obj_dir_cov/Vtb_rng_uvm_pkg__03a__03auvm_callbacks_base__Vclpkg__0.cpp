// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg::__VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base> &m_initialize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg::__VnoInFunc_m_initialize\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base, vlProcess, vlSymsp);
        this->__PVT__m_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz68_TBz69, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[11157]);
    } else {
        ++(vlSymsp->__Vcoverage[11158]);
    }
    m_initialize__Vfuncrtn = this->__PVT__m_b_inst;
    ++(vlSymsp->__Vcoverage[11159]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_am_i_a(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_am_i_a\n"); );
    // Body
    m_am_i_a__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[11160]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_for_me(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_for_me\n"); );
    // Body
    m_is_for_me__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[11161]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_registered(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_registered\n"); );
    // Body
    m_is_registered__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[11162]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_get_tw_cb_q(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> &m_get_tw_cb_q__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_get_tw_cb_q\n"); );
    // Body
    m_get_tw_cb_q__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[11163]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_add_tw_cbs\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[11164]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_delete_tw_cbs\n"); );
    // Body
    m_delete_tw_cbs__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[11165]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_check_registration(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &check_registration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_check_registration\n"); );
    // Body
    CData/*0:0*/ __VlefCall_2__check_registration;
    CData/*0:0*/ __VlefCall_1__m_is_registered;
    CData/*0:0*/ __VlefCall_0__m_is_registered;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base> dt;
    {
        check_registration__Vfuncrtn = 0U;
        this->__VnoInFunc_m_is_registered(vlSymsp, obj, cb, __VlefCall_0__m_is_registered);
        if (__VlefCall_0__m_is_registered) {
            check_registration__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11167]);
        }
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_this_type.size())) {
            __VlefCall_1__m_is_registered = (vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst 
                                             != this->__PVT__m_this_type.at(unnamedblk1__DOT__i));
            if (__VlefCall_1__m_is_registered) {
                VL_NULL_CHECK(this->__PVT__m_this_type.at(unnamedblk1__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 147)->__VnoInFunc_m_is_registered(vlSymsp, obj, cb, __VlefCall_1__m_is_registered);
            }
            if (__VlefCall_1__m_is_registered) {
                check_registration__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[11169]);
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[11170]);
        }
        if ((VlNull{} == obj)) {
            unnamedblk2__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_derived_types.size())) {
                dt = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                    .at(this->__PVT__m_derived_types.at(unnamedblk2__DOT__i));
                __VlefCall_2__check_registration = 
                    (VlNull{} != dt);
                if (__VlefCall_2__check_registration) {
                    VL_NULL_CHECK(dt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 153)->__VnoInFunc_check_registration(vlSymsp, VlNull{}, cb, __VlefCall_2__check_registration);
                }
                if (__VlefCall_2__check_registration) {
                    check_registration__Vfuncrtn = 1U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[11172]);
                }
                unnamedblk2__DOT__i = ((IData)(1U) 
                                       + unnamedblk2__DOT__i);
                ++(vlSymsp->__Vcoverage[11173]);
            }
            ++(vlSymsp->__Vcoverage[11174]);
        } else {
            ++(vlSymsp->__Vcoverage[11175]);
        }
        check_registration__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11176]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, ""s);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[11177]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::~Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_this_type:" + VL_TO_STRING(__PVT__m_this_type);
    out += ", m_super_type:" + VL_TO_STRING(__PVT__m_super_type);
    out += ", m_derived_types:" + VL_TO_STRING(__PVT__m_derived_types);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
