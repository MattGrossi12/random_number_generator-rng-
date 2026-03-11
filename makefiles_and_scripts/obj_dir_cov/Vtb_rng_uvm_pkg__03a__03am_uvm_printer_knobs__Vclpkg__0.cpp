// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__identifier = 1U;
    ++(vlSymsp->__Vcoverage[10181]);
    this->__PVT__type_name = 1U;
    ++(vlSymsp->__Vcoverage[10182]);
    this->__PVT__size = 1U;
    ++(vlSymsp->__Vcoverage[10183]);
    this->__PVT__depth = 0xffffffffU;
    ++(vlSymsp->__Vcoverage[10184]);
    this->__PVT__reference = 1U;
    ++(vlSymsp->__Vcoverage[10185]);
    this->__PVT__begin_elements = 5U;
    ++(vlSymsp->__Vcoverage[10186]);
    this->__PVT__end_elements = 5U;
    ++(vlSymsp->__Vcoverage[10187]);
    this->__PVT__prefix = ""s;
    ++(vlSymsp->__Vcoverage[10188]);
    this->__PVT__indent = 2U;
    ++(vlSymsp->__Vcoverage[10189]);
    this->__PVT__show_root = 0U;
    ++(vlSymsp->__Vcoverage[10190]);
    this->__PVT__mcd = 0x80000001U;
    ++(vlSymsp->__Vcoverage[10191]);
    this->__PVT__separator = "{}"s;
    ++(vlSymsp->__Vcoverage[10192]);
    this->__PVT__show_radix = 1U;
    ++(vlSymsp->__Vcoverage[10193]);
    this->__PVT__default_radix = 0x07000000U;
    ++(vlSymsp->__Vcoverage[10194]);
    this->__PVT__dec_radix = "'d"s;
    ++(vlSymsp->__Vcoverage[10195]);
    this->__PVT__bin_radix = "'b"s;
    ++(vlSymsp->__Vcoverage[10196]);
    this->__PVT__oct_radix = "'o"s;
    ++(vlSymsp->__Vcoverage[10197]);
    this->__PVT__unsigned_radix = "'d"s;
    ++(vlSymsp->__Vcoverage[10198]);
    this->__PVT__hex_radix = "'h"s;
    ++(vlSymsp->__Vcoverage[10199]);
    ++(vlSymsp->__Vcoverage[10200]);
}

void Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__recursion_policy = 0;
}

std::string Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs::to_string_middle\n"); );
    // Body
    std::string out;
    out += "identifier:" + VL_TO_STRING(__PVT__identifier);
    out += ", type_name:" + VL_TO_STRING(__PVT__type_name);
    out += ", size:" + VL_TO_STRING(__PVT__size);
    out += ", depth:" + VL_TO_STRING(__PVT__depth);
    out += ", reference:" + VL_TO_STRING(__PVT__reference);
    out += ", begin_elements:" + VL_TO_STRING(__PVT__begin_elements);
    out += ", end_elements:" + VL_TO_STRING(__PVT__end_elements);
    out += ", prefix:" + VL_TO_STRING(__PVT__prefix);
    out += ", indent:" + VL_TO_STRING(__PVT__indent);
    out += ", show_root:" + VL_TO_STRING(__PVT__show_root);
    out += ", mcd:" + VL_TO_STRING(__PVT__mcd);
    out += ", separator:" + VL_TO_STRING(__PVT__separator);
    out += ", show_radix:" + VL_TO_STRING(__PVT__show_radix);
    out += ", default_radix:" + VL_TO_STRING(__PVT__default_radix);
    out += ", dec_radix:" + VL_TO_STRING(__PVT__dec_radix);
    out += ", bin_radix:" + VL_TO_STRING(__PVT__bin_radix);
    out += ", oct_radix:" + VL_TO_STRING(__PVT__oct_radix);
    out += ", unsigned_radix:" + VL_TO_STRING(__PVT__unsigned_radix);
    out += ", hex_radix:" + VL_TO_STRING(__PVT__hex_radix);
    out += ", recursion_policy:" + VL_TO_STRING(__PVT__recursion_policy);
    return (out);
}
