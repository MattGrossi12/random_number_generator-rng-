// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03aget_t::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03aget_t::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[7847]);
}

void Vtb_rng_uvm_pkg__03a__03aget_t::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03aget_t::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__t = VL_SCOPED_RAND_RESET_Q(64, 12660958201627560659ULL, 12247454108283186160ull);
}

std::string Vtb_rng_uvm_pkg__03a__03aget_t::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03aget_t::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03aget_t::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03aget_t::to_string_middle\n"); );
    // Body
    std::string out;
    out += "name:" + VL_TO_STRING(__PVT__name);
    out += ", scope:" + VL_TO_STRING(__PVT__scope);
    out += ", rsrc:" + VL_TO_STRING(__PVT__rsrc);
    out += ", t:" + VL_TO_STRING(__PVT__t);
    return (out);
}
