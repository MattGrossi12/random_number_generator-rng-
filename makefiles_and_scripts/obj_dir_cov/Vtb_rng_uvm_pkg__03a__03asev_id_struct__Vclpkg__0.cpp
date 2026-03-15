// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03asev_id_struct::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03asev_id_struct::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[15237]);
}

void Vtb_rng_uvm_pkg__03a__03asev_id_struct::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03asev_id_struct::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__sev_specified = 0;
    __PVT__id_specified = 0;
    __PVT__sev = 0;
    __PVT__is_on = 0;
}

std::string Vtb_rng_uvm_pkg__03a__03asev_id_struct::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03asev_id_struct::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03asev_id_struct::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03asev_id_struct::to_string_middle\n"); );
    // Body
    std::string out;
    out += "sev_specified:" + VL_TO_STRING(__PVT__sev_specified);
    out += ", id_specified:" + VL_TO_STRING(__PVT__id_specified);
    out += ", sev:" + VL_TO_STRING(__PVT__sev);
    out += ", id:" + VL_TO_STRING(__PVT__id);
    out += ", is_on:" + VL_TO_STRING(__PVT__is_on);
    return (out);
}
