// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_request::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_request::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[19977]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__grant = 0;
    __PVT__sequence_id = 0;
    __PVT__request_id = 0;
    __PVT__item_priority = 0;
    __PVT__request = 0;
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequence_request::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_request::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sequence_request::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_request::to_string_middle\n"); );
    // Body
    std::string out;
    out += "grant:" + VL_TO_STRING(__PVT__grant);
    out += ", sequence_id:" + VL_TO_STRING(__PVT__sequence_id);
    out += ", request_id:" + VL_TO_STRING(__PVT__request_id);
    out += ", item_priority:" + VL_TO_STRING(__PVT__item_priority);
    out += ", process_id:" + VL_TO_STRING(__PVT__process_id);
    out += ", request:" + VL_TO_STRING(__PVT__request);
    out += ", sequence_ptr:" + VL_TO_STRING(__PVT__sequence_ptr);
    return (out);
}
