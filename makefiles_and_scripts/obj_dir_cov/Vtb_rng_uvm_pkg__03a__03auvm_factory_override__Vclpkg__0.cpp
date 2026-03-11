// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_factory_override::init(Vtb_rng__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type, std::string ovrd_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_override::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__full_inst_path = full_inst_path;
    this->__PVT__orig.__PVT__m_type_name = orig_type_name;
    this->__PVT__orig.__PVT__m_type = orig_type;
    this->__PVT__ovrd.__PVT__m_type_name = ovrd_type_name;
    this->__PVT__ovrd.__PVT__m_type = ovrd_type;
    this->__PVT__replace = replace;
    this->__VnoInFunc_m_has_wildcard(vlSymsp, full_inst_path, this->__PVT__has_wildcard);
    ++(vlSymsp->__Vcoverage[1198]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_factory_override::__VnoInFunc_m_has_wildcard(Vtb_rng__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_override::__VnoInFunc_m_has_wildcard\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    {
        m_has_wildcard__Vfuncrtn = 0U;
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, 
                          VL_LEN_IN(nm))) {
            if (((0x2aU == VL_GETC_N(nm,unnamedblk1__DOT__i)) 
                 | (0x3fU == VL_GETC_N(nm,unnamedblk1__DOT__i)))) {
                m_has_wildcard__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[1200]);
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[1204]);
        }
        m_has_wildcard__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    if ((0x3fU == VL_GETC_N(nm,unnamedblk1__DOT__i))) {
        ++(vlSymsp->__Vcoverage[1201]);
    }
    if ((0x2aU == VL_GETC_N(nm,unnamedblk1__DOT__i))) {
        ++(vlSymsp->__Vcoverage[1202]);
    }
    if (((0x2aU != VL_GETC_N(nm,unnamedblk1__DOT__i)) 
         & (0x3fU != VL_GETC_N(nm,unnamedblk1__DOT__i)))) {
        ++(vlSymsp->__Vcoverage[1203]);
    }
    ++(vlSymsp->__Vcoverage[1205]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__replace = 0;
    __PVT__selected = 0;
    __PVT__used = 0;
    __PVT__has_wildcard = 0;
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_factory_override::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_override::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_factory_override::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_factory_override::to_string_middle\n"); );
    // Body
    std::string out;
    out += "full_inst_path:" + VL_TO_STRING(__PVT__full_inst_path);
    out += ", orig:" + VL_TO_STRING(__PVT__orig);
    out += ", ovrd:" + VL_TO_STRING(__PVT__ovrd);
    out += ", replace:" + VL_TO_STRING(__PVT__replace);
    out += ", selected:" + VL_TO_STRING(__PVT__selected);
    out += ", used:" + VL_TO_STRING(__PVT__used);
    out += ", has_wildcard:" + VL_TO_STRING(__PVT__has_wildcard);
    return (out);
}
