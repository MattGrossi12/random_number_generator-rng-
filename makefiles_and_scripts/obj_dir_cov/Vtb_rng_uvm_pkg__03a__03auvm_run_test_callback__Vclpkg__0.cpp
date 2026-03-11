// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_add(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &add__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_add\n"); );
    // Body
    CData/*0:0*/ found;
    IData/*31:0*/ i;
    {
        add__Vfuncrtn = 0U;
        found = 0U;
        i = 0U;
        if ((VlNull{} == cb)) {
            add__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16720]);
        }
        found = 0U;
        i = 0U;
        while (((~ (IData)(found)) & (i < this->__PVT__m_registered_cbs.size()))) {
            if ((this->__PVT__m_registered_cbs.at(i) 
                 == cb)) {
                found = 1U;
                ++(vlSymsp->__Vcoverage[16721]);
            } else {
                ++(vlSymsp->__Vcoverage[16722]);
            }
            i = ((IData)(1U) + i);
            ++(vlSymsp->__Vcoverage[16723]);
        }
        if (found) {
            ++(vlSymsp->__Vcoverage[16725]);
        } else {
            this->__PVT__m_registered_cbs.push_back(cb);
            ++(vlSymsp->__Vcoverage[16724]);
        }
        add__Vfuncrtn = (1U & (~ (IData)(found)));
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(found)))) {
        ++(vlSymsp->__Vcoverage[16726]);
    }
    if (found) {
        ++(vlSymsp->__Vcoverage[16727]);
    }
    if ((1U & (~ (IData)(found)))) {
        ++(vlSymsp->__Vcoverage[16728]);
    }
    if (found) {
        ++(vlSymsp->__Vcoverage[16729]);
    }
    ++(vlSymsp->__Vcoverage[16730]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_delete(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &delete__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_delete\n"); );
    // Body
    IData/*31:0*/ unnamedblk158__DOT__i;
    unnamedblk158__DOT__i = 0;
    VlQueue<IData/*31:0*/> cb_idxs;
    {
        delete__Vfuncrtn = 0U;
        cb_idxs.clear();
        cb_idxs.atDefault() = 0;
        if ((VlNull{} == cb)) {
            delete__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[16732]);
        }
        cb_idxs = this->__PVT__m_registered_cbs.find_index(
                                                           [&](
                                                               IData/*31:0*/ item__DOT__index, 
                                                               VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback> item) -> 
                                                           CData/*31:0*/ {
                return ((item == cb));
            }
        );
        unnamedblk158__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk158__DOT__i, cb_idxs.size())) {
            this->__PVT__m_registered_cbs.erase(unnamedblk158__DOT__i);
            unnamedblk158__DOT__i = ((IData)(1U) + unnamedblk158__DOT__i);
            ++(vlSymsp->__Vcoverage[16733]);
        }
        delete__Vfuncrtn = VL_LTS_III(32, 0U, cb_idxs.size());
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[16734]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_run_test(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_run_test\n"); );
    // Body
    IData/*31:0*/ unnamedblk159__DOT__i;
    unnamedblk159__DOT__i = 0;
    unnamedblk159__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk159__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk159__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 114)->__VnoInFunc_pre_run_test(vlSymsp);
        unnamedblk159__DOT__i = ((IData)(1U) + unnamedblk159__DOT__i);
        ++(vlSymsp->__Vcoverage[16735]);
    }
    ++(vlSymsp->__Vcoverage[16736]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_post_run_test(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_post_run_test\n"); );
    // Body
    IData/*31:0*/ unnamedblk160__DOT__i;
    unnamedblk160__DOT__i = 0;
    unnamedblk160__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk160__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk160__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 121)->__VnoInFunc_post_run_test(vlSymsp);
        unnamedblk160__DOT__i = ((IData)(1U) + unnamedblk160__DOT__i);
        ++(vlSymsp->__Vcoverage[16737]);
    }
    ++(vlSymsp->__Vcoverage[16738]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_abort(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_abort\n"); );
    // Body
    IData/*31:0*/ unnamedblk161__DOT__i;
    unnamedblk161__DOT__i = 0;
    unnamedblk161__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk161__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk161__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 128)->__VnoInFunc_pre_abort(vlSymsp);
        unnamedblk161__DOT__i = ((IData)(1U) + unnamedblk161__DOT__i);
        ++(vlSymsp->__Vcoverage[16739]);
    }
    ++(vlSymsp->__Vcoverage[16740]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_run_test(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_run_test\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[16715]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_post_run_test(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_post_run_test\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[16716]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_abort(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_abort\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[16717]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[16718]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::~Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_run_test_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
