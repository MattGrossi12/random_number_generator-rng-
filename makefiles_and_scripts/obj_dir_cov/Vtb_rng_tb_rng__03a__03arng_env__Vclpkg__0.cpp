// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_tb_rng__03a__03arng_env__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi69> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_env__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi69__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[657]);
}

void Vtb_rng_tb_rng__03a__03arng_env__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_env__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "rng_env"s;
    ++(vlSymsp->__Vcoverage[659]);
}

void Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi69> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi69__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[658]);
}

void Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "rng_env"s;
    ++(vlSymsp->__Vcoverage[660]);
}

void Vtb_rng_tb_rng__03a__03arng_env::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_env::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[661]);
}

void Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_build_phase\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi68__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "agent"s, 
                                                                                VlClassRef<Vtb_rng_tb_rng__03a__03arng_env>{this}, ""s, this->__PVT__agent);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi67__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "scb"s, 
                                                                                VlClassRef<Vtb_rng_tb_rng__03a__03arng_env>{this}, ""s, this->__PVT__scb);
    ++(vlSymsp->__Vcoverage[662]);
}

void Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_connect_phase\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__agent, "../UVM/UVM_env.sv", 34)
                                ->__PVT__monitor, "../UVM/UVM_env.sv", 34)
                  ->__PVT__ap, "../UVM/UVM_env.sv", 34)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__scb, "../UVM/UVM_env.sv", 34)
                                                                             ->__PVT__imp);
    ++(vlSymsp->__Vcoverage[663]);
}

void Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_tb_rng__03a__03arng_env::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_tb_rng__03a__03arng_env::~Vtb_rng_tb_rng__03a__03arng_env() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::~\n"); );
}

std::string Vtb_rng_tb_rng__03a__03arng_env::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_tb_rng__03a__03arng_env::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_rng_tb_rng__03a__03arng_env::to_string_middle\n"); );
    // Body
    std::string out;
    out += "agent:" + VL_TO_STRING(__PVT__agent);
    out += ", scb:" + VL_TO_STRING(__PVT__scb);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_env::to_string_middle();
    return (out);
}
