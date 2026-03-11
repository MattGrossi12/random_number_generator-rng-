// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::init(vlProcess, vlSymsp, name, parent, 0U, 0U, vlSymsp->TOP__uvm_pkg.__PVT__UVM_UNBOUNDED_CONNECTIONS);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__PVT__m_if_mask = 0x00000100U;
    ++(vlSymsp->__Vcoverage[18823]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_port"s;
    ++(vlSymsp->__Vcoverage[18824]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> __Vfunc_get_if__2__Vfuncout;
    // Body
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26> tif;
    unnamedblk1__DOT__i = 0U;
    while (true) {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_0__size))) break;
        this->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk1__DOT__i, __Vfunc_get_if__2__Vfuncout);
        tif = __Vfunc_get_if__2__Vfuncout;
        if ((VlNull{} == tif)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NTCONN"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No uvm_tlm interface is connected to "s, __VlefCall_1__get_full_name), " for executing write()"s)), 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[18825]);
        } else {
            ++(vlSymsp->__Vcoverage[18826]);
        }
        VL_NULL_CHECK(tif, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 78)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        ++(vlSymsp->__Vcoverage[18827]);
    }
    ++(vlSymsp->__Vcoverage[18828]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::~Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz26::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::to_string_middle();
    return (out);
}
