// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi89> imp) {
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172::__PVT__m_if_mask = 0x00000100U;
    ++(vlSymsp->__Vcoverage[19241]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
    ++(vlSymsp->__Vcoverage[19242]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
    ++(vlSymsp->__Vcoverage[19243]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::~Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz182::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz172::to_string_middle();
    return (out);
}
