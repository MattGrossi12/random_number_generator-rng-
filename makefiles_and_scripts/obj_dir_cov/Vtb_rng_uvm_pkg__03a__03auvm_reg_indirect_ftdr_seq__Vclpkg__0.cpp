// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> addr_reg, IData/*31:0*/ idx, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> data_reg) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor::init(vlProcess, vlSymsp, "uvm_reg_indirect_ftdr_seq"s);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_addr_reg = addr_reg;
    this->__PVT__m_idx = idx;
    this->__PVT__m_data_reg = data_reg;
    ++(vlSymsp->__Vcoverage[22368]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __VlefCall_2__clone;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __VlefCall_0__clone;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 287)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_0__clone);
        __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__clone, rw);
        if (VL_UNLIKELY(((! __VlefExpr_1)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_indirect.svh:287: Assertion failed in %Nuvm_pkg.uvm_reg_indirect_ftdr_seq.body: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 287, "");
        }
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 288)->__PVT__element 
            = this->__PVT__m_addr_reg;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 289)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 290)->__PVT__value.atWrite(0U) 
            = VL_EXTENDS_QI(64,32, this->__PVT__m_idx);
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 292)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 293)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 295)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
        if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 297)
             ->__PVT__status)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22370]);
        }
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 300)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_2__clone);
        __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__clone, rw);
        if (VL_UNLIKELY(((! __VlefExpr_3)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_indirect.svh:300: Assertion failed in %Nuvm_pkg.uvm_reg_indirect_ftdr_seq.body: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 300, "");
        }
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 301)->__PVT__element 
            = this->__PVT__m_data_reg;
        if ((1U == VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 303)
             ->__PVT__kind)) {
            co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 304)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            ++(vlSymsp->__Vcoverage[22371]);
        } else {
            co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 306)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 307)->__PVT__value.atWrite(0U) 
                = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 307)
                ->__PVT__value.at(0U);
            ++(vlSymsp->__Vcoverage[22372]);
        }
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 310)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 311)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 313)->__PVT__status 
            = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 313)
            ->__PVT__status;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22373]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_idx = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_addr_reg:" + VL_TO_STRING(__PVT__m_addr_reg);
    out += ", m_data_reg:" + VL_TO_STRING(__PVT__m_data_reg);
    out += ", m_idx:" + VL_TO_STRING(__PVT__m_idx);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor::to_string_middle();
    return (out);
}
