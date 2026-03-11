// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi68> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi68__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[650]);
}

void Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "rng_agent"s;
    ++(vlSymsp->__Vcoverage[652]);
}

void Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi68> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi68__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[651]);
}

void Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "rng_agent"s;
    ++(vlSymsp->__Vcoverage[653]);
}

void Vtb_rng_tb_rng__03a__03arng_agent::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_agent::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[654]);
}

void Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_build_phase\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sequencer"s, 
                                                                                VlClassRef<Vtb_rng_tb_rng__03a__03arng_agent>{this}, ""s, this->__PVT__sequencer);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "driver"s, 
                                                                                VlClassRef<Vtb_rng_tb_rng__03a__03arng_agent>{this}, ""s, this->__PVT__driver);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "monitor"s, 
                                                                                VlClassRef<Vtb_rng_tb_rng__03a__03arng_agent>{this}, ""s, this->__PVT__monitor);
    ++(vlSymsp->__Vcoverage[655]);
}

void Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_connect_phase\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__driver, "../UVM/UVM_agent.sv", 44)
                  ->__PVT__seq_item_port, "../UVM/UVM_agent.sv", 44)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sequencer, "../UVM/UVM_agent.sv", 44)
                                                                                ->__PVT__seq_item_export);
    ++(vlSymsp->__Vcoverage[656]);
}

void Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_tb_rng__03a__03arng_agent::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_tb_rng__03a__03arng_agent::~Vtb_rng_tb_rng__03a__03arng_agent() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::~\n"); );
}

std::string Vtb_rng_tb_rng__03a__03arng_agent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_tb_rng__03a__03arng_agent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtb_rng_tb_rng__03a__03arng_agent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "sequencer:" + VL_TO_STRING(__PVT__sequencer);
    out += ", driver:" + VL_TO_STRING(__PVT__driver);
    out += ", monitor:" + VL_TO_STRING(__PVT__monitor);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_agent::to_string_middle();
    return (out);
}
