// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz229::init(vlProcess, vlSymsp, name, parent, 0U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__analysis_export = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz229_TBz303, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171>{this});
    ++(vlSymsp->__Vcoverage[20301]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::__VnoInFunc_write\n"); );
    // Body
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[20302]);
    } else {
        ++(vlSymsp->__Vcoverage[20303]);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
    ++(vlSymsp->__Vcoverage[20304]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::~Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi171::to_string_middle\n"); );
    // Body
    std::string out;
    out += "analysis_export:" + VL_TO_STRING(__PVT__analysis_export);
    out += ", sequencer_ptr:" + VL_TO_STRING(__PVT__sequencer_ptr);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz229::to_string_middle();
    return (out);
}
