// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi127> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi127__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10543]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_related_link"s;
    ++(vlSymsp->__Vcoverage[10548]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_get_link(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_related_link> &get_link__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_get_link\n"); );
    // Body
    VlClassRef<Vtb_rng_std__03a__03aprocess> p_;
    std::string s_;
    s_ = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p_);
    if ((VlNull{} != p_)) {
        VL_NULL_CHECK(p_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_links.svh", 282)->__VnoInFunc_get_randstate(vlSymsp, s_);
        ++(vlSymsp->__Vcoverage[10551]);
    } else {
        ++(vlSymsp->__Vcoverage[10552]);
    }
    get_link__Vfuncrtn = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_related_link, vlProcess, vlSymsp, name);
    if ((VlNull{} != p_)) {
        VL_NULL_CHECK(p_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_links.svh", 287)->__VnoInFunc_set_randstate(vlSymsp, s_);
        ++(vlSymsp->__Vcoverage[10553]);
    } else {
        ++(vlSymsp->__Vcoverage[10554]);
    }
    VL_NULL_CHECK(get_link__Vfuncrtn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_links.svh", 289)->__VnoInFunc_set(vlSymsp, lhs, rhs);
    ++(vlSymsp->__Vcoverage[10555]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi127> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi127__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[10544]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_related_link> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_related_link, vlProcess, vlSymsp, "unnamed-uvm_related_link"s);
        ++(vlSymsp->__Vcoverage[10545]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_related_link, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[10546]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[10547]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_related_link"s;
    ++(vlSymsp->__Vcoverage[10549]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_link_base::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[10550]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_set_lhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_set_lhs\n"); );
    // Body
    this->__PVT__m_lhs = lhs;
    ++(vlSymsp->__Vcoverage[10556]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_get_lhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &do_get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_get_lhs\n"); );
    // Body
    do_get_lhs__Vfuncrtn = this->__PVT__m_lhs;
    ++(vlSymsp->__Vcoverage[10557]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_set_rhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_set_rhs\n"); );
    // Body
    this->__PVT__m_rhs = rhs;
    ++(vlSymsp->__Vcoverage[10558]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_get_rhs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &do_get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_get_rhs\n"); );
    // Body
    do_get_rhs__Vfuncrtn = this->__PVT__m_rhs;
    ++(vlSymsp->__Vcoverage[10559]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_related_link::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_related_link::~Vtb_rng_uvm_pkg__03a__03auvm_related_link() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_related_link::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_related_link::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_related_link::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_lhs:" + VL_TO_STRING(__PVT__m_lhs);
    out += ", m_rhs:" + VL_TO_STRING(__PVT__m_rhs);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_link_base::to_string_middle();
    return (out);
}
