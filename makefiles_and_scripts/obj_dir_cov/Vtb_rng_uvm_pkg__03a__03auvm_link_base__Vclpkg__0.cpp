// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[10499]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_lhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_lhs\n"); );
    // Body
    this->__VnoInFunc_do_set_lhs(vlSymsp, lhs);
    ++(vlSymsp->__Vcoverage[10500]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_lhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_lhs\n"); );
    // Body
    this->__VnoInFunc_do_get_lhs(vlSymsp, get_lhs__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10501]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_rhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_rhs\n"); );
    // Body
    this->__VnoInFunc_do_set_rhs(vlSymsp, rhs);
    ++(vlSymsp->__Vcoverage[10502]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_rhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_rhs\n"); );
    // Body
    this->__VnoInFunc_do_get_rhs(vlSymsp, get_rhs__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10503]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set\n"); );
    // Body
    this->__VnoInFunc_do_set_lhs(vlSymsp, lhs);
    this->__VnoInFunc_do_set_rhs(vlSymsp, rhs);
    ++(vlSymsp->__Vcoverage[10504]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_lhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_lhs\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10505]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_lhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &do_get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_lhs\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10506]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_rhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_rhs\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10507]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_rhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &do_get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_rhs\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10508]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_link_base::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_link_base::~Vtb_rng_uvm_pkg__03a__03auvm_link_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_link_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_link_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_link_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
