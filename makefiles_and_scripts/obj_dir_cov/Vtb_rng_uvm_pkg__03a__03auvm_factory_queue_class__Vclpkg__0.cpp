// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_factory_queue_class::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_queue_class::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[864]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_factory_queue_class::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_queue_class::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_factory_queue_class::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_queue_class::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_factory_queue_class::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_queue_class::to_string_middle\n"); );
    // Body
    std::string out;
    out += "queue:" + VL_TO_STRING(__PVT__queue);
    return (out);
}
