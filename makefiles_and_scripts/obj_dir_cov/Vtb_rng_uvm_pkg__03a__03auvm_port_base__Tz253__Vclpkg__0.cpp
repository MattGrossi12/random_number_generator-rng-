// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size) {
    Vtb_rng_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::new\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_get__2__value;
    VL_ZERO_W(4096, __Vfunc_get__2__value);
    // Body
    _ctor_var_reset(vlSymsp);
    CData/*0:0*/ __VlefCall_0__get;
    IData/*31:0*/ tmp;
    /*super.new*/;
    tmp = 0U;
    this->__PVT__m_port_type = port_type;
    this->__PVT__m_min_size = min_size;
    this->__PVT__m_max_size = max_size;
    this->__PVT__m_comp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz284, vlProcess, vlSymsp, name, parent, 
                                 VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253>{this});
    VL_EXTENDS_WI(4096,32, __Vfunc_get__2__value, tmp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__m_comp, ""s, "check_connection_relationships"s, __Vfunc_get__2__value, __VlefCall_0__get);
    tmp = __Vfunc_get__2__value[0U];
    if (__VlefCall_0__get) {
        ++(vlSymsp->__Vcoverage[19083]);
    } else {
        VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 268)->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_warning_id, 0U);
        ++(vlSymsp->__Vcoverage[19082]);
    }
    ++(vlSymsp->__Vcoverage[19084]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 279)->__VnoInFunc_get_name(vlSymsp, get_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19085]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_full_name\n"); );
    // Body
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 289)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, get_full_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19086]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_parent\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 299)->__VnoInFunc_get_parent(vlSymsp, get_parent__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19087]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_comp(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_comp\n"); );
    // Body
    get_comp__Vfuncrtn = this->__PVT__m_comp;
    ++(vlSymsp->__Vcoverage[19088]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = ""s;
    if ((0U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "port"s;
    } else if ((1U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "export"s;
    } else if ((2U == this->__PVT__m_port_type)) {
        get_type_name__Vfuncrtn = "implementation"s;
    }
    ++(vlSymsp->__Vcoverage[19092]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_max_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_max_size\n"); );
    // Body
    max_size__Vfuncrtn = this->__PVT__m_max_size;
    ++(vlSymsp->__Vcoverage[19093]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_min_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_min_size\n"); );
    // Body
    min_size__Vfuncrtn = this->__PVT__m_min_size;
    ++(vlSymsp->__Vcoverage[19094]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_is_unbounded(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_is_unbounded\n"); );
    // Body
    is_unbounded__Vfuncrtn = (this->__PVT__m_max_size 
                              == vlSymsp->TOP__uvm_pkg.__PVT__UVM_UNBOUNDED_CONNECTIONS);
    ++(vlSymsp->__Vcoverage[19095]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_is_port(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_is_port\n"); );
    // Body
    is_port__Vfuncrtn = (0U == this->__PVT__m_port_type);
    ++(vlSymsp->__Vcoverage[19096]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_is_export(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_is_export\n"); );
    // Body
    is_export__Vfuncrtn = (1U == this->__PVT__m_port_type);
    ++(vlSymsp->__Vcoverage[19097]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_is_imp(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_is_imp\n"); );
    // Body
    is_imp__Vfuncrtn = (2U == this->__PVT__m_port_type);
    ++(vlSymsp->__Vcoverage[19098]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_imp_list.size();
    ++(vlSymsp->__Vcoverage[19099]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_set_if(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_set_if\n"); );
    // Body
    this->__VnoInFunc_get_if(vlProcess, vlSymsp, index, this->__PVT__m_if);
    if ((VlNull{} != this->__PVT__m_if)) {
        this->__PVT__m_def_index = index;
        ++(vlSymsp->__Vcoverage[19100]);
    } else {
        ++(vlSymsp->__Vcoverage[19101]);
    }
    ++(vlSymsp->__Vcoverage[19102]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_m_get_if_mask(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_m_get_if_mask\n"); );
    // Body
    m_get_if_mask__Vfuncrtn = this->__PVT__m_if_mask;
    ++(vlSymsp->__Vcoverage[19103]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_set_default_index(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_set_default_index\n"); );
    // Body
    this->__PVT__m_def_index = index;
    ++(vlSymsp->__Vcoverage[19104]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_connect(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> provider) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_connect\n"); );
    // Locals
    CData/*0:0*/ __Vtask_m_check_relationship__28__Vfuncout;
    __Vtask_m_check_relationship__28__Vfuncout = 0;
    // Body
    std::string __VlefCall_13__get_full_name;
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_full_name;
    CData/*0:0*/ __VlefCall_10__is_export;
    std::string __VlefCall_9__get_full_name;
    CData/*0:0*/ __VlefCall_8__is_imp;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__get_state;
    IData/*31:0*/ __VlefCall_0__get_state;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 474)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 475)->__VnoInFunc_get_state(vlSymsp, __VlefCall_0__get_state);
        __VlefLogOr_2 = (0x00000010U == __VlefCall_0__get_state);
        if ((1U & (~ (IData)(__VlefLogOr_2)))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 476)->__VnoInFunc_get_state(vlSymsp, __VlefCall_1__get_state);
            __VlefLogOr_2 = (0x00000100U == __VlefCall_1__get_state);
        }
        if (__VlefLogOr_2) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 477)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Late Connection"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Attempt to connect "s, __VlefCall_3__get_full_name), " (of type "s), __VlefCall_4__get_type_name), ") at or after end_of_elaboration phase.  Ignoring."s)), 0x000000c8U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19106]);
        }
        if ((VlNull{} == provider)) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 484)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_error_id, "Cannot connect to null port handle"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19108]);
        }
        if ((provider == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253>{this})) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 490)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_error_id, "Cannot connect a port instance to itself"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19110]);
        }
        if (((VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 495)
              ->__PVT__m_if_mask & this->__PVT__m_if_mask) 
             != this->__PVT__m_if_mask)) {
            VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 497)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 498)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 496)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_error_id, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_5__get_full_name, " (of type "s), __VlefCall_6__get_type_name), ") does not provide the complete interface required of this port (type "s), __VlefCall_7__get_type_name), ")"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19112]);
        }
        this->__VnoInFunc_is_imp(vlSymsp, __VlefCall_8__is_imp);
        if (__VlefCall_8__is_imp) {
            VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 508)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 506)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_error_id, VL_SFORMATF_N_NX("Cannot call an imp port's connect method. An imp is connected only to the component passed in its constructor. (You attempted to bind this imp to %@)",0,
                                                                                -1,
                                                                                &(__VlefCall_9__get_full_name)) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19114]);
        }
        this->__VnoInFunc_is_export(vlSymsp, __VlefCall_10__is_export);
        if (__VlefCall_10__is_export) {
            VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 513)->__VnoInFunc_is_port(vlSymsp, __VlefCall_10__is_export);
        }
        if (__VlefCall_10__is_export) {
            VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 516)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 514)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_error_id, VL_SFORMATF_N_NX("Cannot connect exports to ports Try calling port.connect(export) instead. (You attempted to bind this export to %@).",0,
                                                                                -1,
                                                                                &(__VlefCall_11__get_full_name)) , 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19116]);
        }
        this->__VnoInFunc_m_check_relationship(vlProcess, vlSymsp, provider, __Vtask_m_check_relationship__28__Vfuncout);
        VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 522)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
        this->__PVT__m_provided_by.at(__VlefCall_12__get_full_name) 
            = provider;
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
        VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 523)->__PVT__m_provided_to.at(__VlefCall_13__get_full_name) 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253>{this};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19117]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_debug_connected_to(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_debug_connected_to\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_10__get_type_name;
    CData/*0:0*/ __VlefExpr_9;
    CData/*0:0*/ __VlefExpr_8;
    CData/*0:0*/ __VlefLogOr_7;
    IData/*31:0*/ __VlefCall_6__get_state;
    IData/*31:0*/ __VlefCall_5__get_state;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_type_name;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk1__DOT__nm;
    CData/*0:0*/ unnamedblk1__DOT__nm__Vfirst;
    unnamedblk1__DOT__nm__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> unnamedblk2__DOT__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk2__DOT__cs;
    std::string unnamedblk3__DOT__nm;
    CData/*0:0*/ unnamedblk3__DOT__nm__Vfirst;
    unnamedblk3__DOT__nm__Vfirst = 0;
    IData/*31:0*/ sz;
    IData/*31:0*/ num;
    IData/*31:0*/ curr_num;
    std::string s_sz;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> port;
    {
        sz = 0U;
        num = 0U;
        curr_num = 0U;
        s_sz = ""s;
        if (VL_GTS_III(32, 0U, level)) {
            level = 0U;
            ++(vlSymsp->__Vcoverage[19118]);
        } else {
            ++(vlSymsp->__Vcoverage[19119]);
        }
        if ((0U == level)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent = "  "s;
            ++(vlSymsp->__Vcoverage[19120]);
        } else {
            ++(vlSymsp->__Vcoverage[19121]);
        }
        if (((0xffffffffU != max_level) & VL_GTES_III(32, level, max_level))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19123]);
        }
        num = this->__PVT__m_provided_by.size();
        if ((0U != this->__PVT__m_provided_by.size())) {
            __VlefExpr_0 = (0U != this->__PVT__m_provided_by.first(unnamedblk1__DOT__nm));
            if (__VlefExpr_0) {
                unnamedblk1__DOT__nm__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk1__DOT__nm__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_provided_by.next(unnamedblk1__DOT__nm));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk1__DOT__nm__Vfirst = 0U;
                    curr_num = ((IData)(1U) + curr_num);
                    port = this->__PVT__m_provided_by
                        .at(unnamedblk1__DOT__nm);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), "  | \n"s);
                    VL_NULL_CHECK(port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 559)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), "  |_"s), unnamedblk1__DOT__nm), " ("s), __VlefCall_2__get_type_name), ")\n"s);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent 
                        = ((VL_LTS_III(32, 1U, num) 
                            & (curr_num != num)) ? 
                           VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent, "  | "s)
                            : VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent, "    "s));
                    VL_NULL_CHECK(port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 561)->__VnoInFunc_debug_connected_to(vlSymsp, 
                                                                                ((IData)(1U) 
                                                                                + level), max_level);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent 
                        = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent,0U,
                                      ((VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent) 
                                        - (IData)(4U)) 
                                       - (IData)(1U)));
                    ++(vlSymsp->__Vcoverage[19130]);
                }
                if ((VL_LTS_III(32, 1U, num) & (curr_num 
                                                != num))) {
                    ++(vlSymsp->__Vcoverage[19127]);
                }
                if ((curr_num == num)) {
                    ++(vlSymsp->__Vcoverage[19128]);
                }
                if (VL_GTES_III(32, 1U, num)) {
                    ++(vlSymsp->__Vcoverage[19129]);
                }
                ++(vlSymsp->__Vcoverage[19131]);
            } else {
                ++(vlSymsp->__Vcoverage[19132]);
            }
            ++(vlSymsp->__Vcoverage[19133]);
        } else {
            ++(vlSymsp->__Vcoverage[19134]);
        }
        if ((0U == level)) {
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("This port's fanout network:\n\n  "s, __VlefCall_3__get_full_name), " ("s), __VlefCall_4__get_type_name), ")\n"s), vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save), "\n"s);
                ++(vlSymsp->__Vcoverage[19135]);
            } else {
                ++(vlSymsp->__Vcoverage[19136]);
            }
            if ((0U == this->__PVT__m_imp_list.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__cs);
                VL_NULL_CHECK(unnamedblk2__DOT__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 574)->__VnoInFunc_get_root(vlProcess, vlSymsp, unnamedblk2__DOT__top);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 575)->__VnoInFunc_get_state(vlSymsp, __VlefCall_5__get_state);
                __VlefLogOr_7 = (0x00000010U == __VlefCall_5__get_state);
                if ((1U & (~ (IData)(__VlefLogOr_7)))) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 576)->__VnoInFunc_get_state(vlSymsp, __VlefCall_6__get_state);
                    __VlefLogOr_7 = (0x00000100U == __VlefCall_6__get_state);
                }
                if (__VlefLogOr_7) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                        = VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Connected implementations: none\n"s);
                    ++(vlSymsp->__Vcoverage[19137]);
                } else {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                        = VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Connected implementations: not resolved until end-of-elab\n"s);
                    ++(vlSymsp->__Vcoverage[19138]);
                }
                ++(vlSymsp->__Vcoverage[19142]);
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                    = VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save, "  Resolved implementation list:\n"s);
                __VlefExpr_8 = (0U != this->__PVT__m_imp_list.first(unnamedblk3__DOT__nm));
                if (__VlefExpr_8) {
                    unnamedblk3__DOT__nm__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_9 = unnamedblk3__DOT__nm__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_9)))) {
                            __VlefExpr_9 = (0U != this->__PVT__m_imp_list.next(unnamedblk3__DOT__nm));
                        }
                        if (!(__VlefExpr_9)) break;
                        unnamedblk3__DOT__nm__Vfirst = 0U;
                        port = this->__PVT__m_imp_list
                            .at(unnamedblk3__DOT__nm);
                        s_sz = VL_SFORMATF_N_NX("%0d",0,
                                                32,
                                                sz) ;
                        VL_NULL_CHECK(port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 587)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__indent), s_sz), ": "s), unnamedblk3__DOT__nm), " ("s), __VlefCall_10__get_type_name), ")\n"s);
                        sz = ((IData)(1U) + sz);
                        ++(vlSymsp->__Vcoverage[19139]);
                    }
                    ++(vlSymsp->__Vcoverage[19140]);
                } else {
                    ++(vlSymsp->__Vcoverage[19141]);
                }
                ++(vlSymsp->__Vcoverage[19143]);
            }
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 591)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "debug_connected_to"s, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_connected_to__Vstatic__save, 0x000000c8U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19144]);
        } else {
            ++(vlSymsp->__Vcoverage[19145]);
        }
        __Vlabel0: ;
    }
    if (((0xffffffffU != max_level) & VL_GTES_III(32, level, max_level))) {
        ++(vlSymsp->__Vcoverage[19124]);
    }
    if (VL_LTS_III(32, level, max_level)) {
        ++(vlSymsp->__Vcoverage[19125]);
    }
    if ((0xffffffffU == max_level)) {
        ++(vlSymsp->__Vcoverage[19126]);
    }
    ++(vlSymsp->__Vcoverage[19146]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_debug_provided_to(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_debug_provided_to\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_type_name;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk4__DOT__nm;
    CData/*0:0*/ unnamedblk4__DOT__nm__Vfirst;
    unnamedblk4__DOT__nm__Vfirst = 0;
    IData/*31:0*/ num;
    IData/*31:0*/ curr_num;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> port;
    {
        num = 0U;
        curr_num = 0U;
        if (VL_GTS_III(32, 0U, level)) {
            level = 0U;
            ++(vlSymsp->__Vcoverage[19147]);
        } else {
            ++(vlSymsp->__Vcoverage[19148]);
        }
        if ((0U == level)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save = ""s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent = "  "s;
            ++(vlSymsp->__Vcoverage[19149]);
        } else {
            ++(vlSymsp->__Vcoverage[19150]);
        }
        if (((0xffffffffU != max_level) & VL_GTS_III(32, level, max_level))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19152]);
        }
        num = this->__PVT__m_provided_to.size();
        if ((0U != num)) {
            __VlefExpr_0 = (0U != this->__PVT__m_provided_to.first(unnamedblk4__DOT__nm));
            if (__VlefExpr_0) {
                unnamedblk4__DOT__nm__Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk4__DOT__nm__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__m_provided_to.next(unnamedblk4__DOT__nm));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk4__DOT__nm__Vfirst = 0U;
                    curr_num = ((IData)(1U) + curr_num);
                    port = this->__PVT__m_provided_to
                        .at(unnamedblk4__DOT__nm);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "  | \n"s);
                    VL_NULL_CHECK(port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 626)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "  |_"s), unnamedblk4__DOT__nm), " ("s), __VlefCall_2__get_type_name), ")\n"s);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent 
                        = ((VL_LTS_III(32, 1U, num) 
                            & (curr_num != num)) ? 
                           VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent, "  | "s)
                            : VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent, "    "s));
                    VL_NULL_CHECK(port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 628)->__VnoInFunc_debug_provided_to(vlSymsp, 
                                                                                ((IData)(1U) 
                                                                                + level), max_level);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent 
                        = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent,0U,
                                      ((VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent) 
                                        - (IData)(4U)) 
                                       - (IData)(1U)));
                    ++(vlSymsp->__Vcoverage[19159]);
                }
                if ((VL_LTS_III(32, 1U, num) & (curr_num 
                                                != num))) {
                    ++(vlSymsp->__Vcoverage[19156]);
                }
                if ((curr_num == num)) {
                    ++(vlSymsp->__Vcoverage[19157]);
                }
                if (VL_GTES_III(32, 1U, num)) {
                    ++(vlSymsp->__Vcoverage[19158]);
                }
                ++(vlSymsp->__Vcoverage[19160]);
            } else {
                ++(vlSymsp->__Vcoverage[19161]);
            }
            ++(vlSymsp->__Vcoverage[19162]);
        } else {
            ++(vlSymsp->__Vcoverage[19163]);
        }
        if ((0U == level)) {
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("This port's fanin network:\n\n  "s, __VlefCall_3__get_full_name), " ("s), __VlefCall_4__get_type_name), ")\n"s), vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save), "\n"s);
                ++(vlSymsp->__Vcoverage[19164]);
            } else {
                ++(vlSymsp->__Vcoverage[19165]);
            }
            if ((0U == this->__PVT__m_provided_to.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__indent), "This port has not been bound\n"s);
                ++(vlSymsp->__Vcoverage[19166]);
            } else {
                ++(vlSymsp->__Vcoverage[19167]);
            }
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 639)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "debug_provided_to"s, vlSymsp->TOP__uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.__PVT__debug_provided_to__Vstatic__save, 0x000000c8U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19168]);
        } else {
            ++(vlSymsp->__Vcoverage[19169]);
        }
        __Vlabel0: ;
    }
    if (((0xffffffffU != max_level) & VL_GTS_III(32, level, max_level))) {
        ++(vlSymsp->__Vcoverage[19153]);
    }
    if (VL_LTES_III(32, level, max_level)) {
        ++(vlSymsp->__Vcoverage[19154]);
    }
    if ((0xffffffffU == max_level)) {
        ++(vlSymsp->__Vcoverage[19155]);
    }
    ++(vlSymsp->__Vcoverage[19170]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_connected_to(Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_connected_to\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk5__DOT__name;
    CData/*0:0*/ unnamedblk5__DOT__name__Vfirst;
    unnamedblk5__DOT__name__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> port;
    list.clear();
    __VlefExpr_0 = (0U != this->__PVT__m_provided_by.first(unnamedblk5__DOT__name));
    if (__VlefExpr_0) {
        unnamedblk5__DOT__name__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk5__DOT__name__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_provided_by.next(unnamedblk5__DOT__name));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk5__DOT__name__Vfirst = 0U;
            port = this->__PVT__m_provided_by.at(unnamedblk5__DOT__name);
            list.at(unnamedblk5__DOT__name) = port;
            ++(vlSymsp->__Vcoverage[19171]);
        }
        ++(vlSymsp->__Vcoverage[19172]);
    } else {
        ++(vlSymsp->__Vcoverage[19173]);
    }
    ++(vlSymsp->__Vcoverage[19174]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_provided_to(Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_provided_to\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk6__DOT__name;
    CData/*0:0*/ unnamedblk6__DOT__name__Vfirst;
    unnamedblk6__DOT__name__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> port;
    list.clear();
    __VlefExpr_0 = (0U != this->__PVT__m_provided_to.first(unnamedblk6__DOT__name));
    if (__VlefExpr_0) {
        unnamedblk6__DOT__name__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk6__DOT__name__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_provided_to.next(unnamedblk6__DOT__name));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk6__DOT__name__Vfirst = 0U;
            port = this->__PVT__m_provided_to.at(unnamedblk6__DOT__name);
            list.at(unnamedblk6__DOT__name) = port;
            ++(vlSymsp->__Vcoverage[19175]);
        }
        ++(vlSymsp->__Vcoverage[19176]);
    } else {
        ++(vlSymsp->__Vcoverage[19177]);
    }
    ++(vlSymsp->__Vcoverage[19178]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_m_check_relationship\n"); );
    // Body
    std::string __VlefCall_11__get_type_name;
    std::string __VlefCall_10__get_full_name;
    CData/*0:0*/ __VlefCall_9__is_export;
    CData/*0:0*/ __VlefCall_8__is_export;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefCall_5__is_export;
    CData/*0:0*/ __VlefCall_4__is_port;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__is_port;
    std::string __VlefCall_0__get_type_name;
    std::string s;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> from;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> from_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> to_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> from_gparent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> to_gparent;
    {
        m_check_relationship__Vfuncrtn = 0U;
        s = ""s;
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        if (("uvm_analysis_port"s == __VlefCall_0__get_type_name)) {
            m_check_relationship__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19180]);
        }
        from = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253>{this};
        this->__VnoInFunc_get_parent(vlSymsp, from_parent);
        VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 694)->__VnoInFunc_get_parent(vlSymsp, to_parent);
        if (((VlNull{} == from_parent) | (VlNull{} 
                                          == to_parent))) {
            m_check_relationship__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19182]);
        }
        VL_NULL_CHECK(from_parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 700)->__VnoInFunc_get_parent(vlSymsp, from_gparent);
        VL_NULL_CHECK(to_parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 701)->__VnoInFunc_get_parent(vlSymsp, to_gparent);
        VL_NULL_CHECK(from, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705)->__VnoInFunc_is_port(vlSymsp, __VlefCall_1__is_port);
        if (__VlefCall_1__is_port) {
            VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 705)->__VnoInFunc_is_port(vlSymsp, __VlefCall_1__is_port);
        }
        if (((IData)(__VlefCall_1__is_port) && (from_gparent 
                                                != to_parent))) {
            VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 706)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 707)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(__VlefCall_2__get_full_name, " (of type "s), __VlefCall_3__get_type_name), ") is not up one level of hierarchy from this port. "s), "A port-to-port connection takes the form "s), "child_component.child_port.connect(parent_port)"s);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 711)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_warning_id, s, 0U, ""s, 0U, ""s, 0U);
            m_check_relationship__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            VL_NULL_CHECK(from, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718)->__VnoInFunc_is_port(vlSymsp, __VlefCall_4__is_port);
            if (__VlefCall_4__is_port) {
                VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718)->__VnoInFunc_is_export(vlSymsp, __VlefCall_5__is_export);
                if ((1U & (~ (IData)(__VlefCall_5__is_export)))) {
                    VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 718)->__VnoInFunc_is_imp(vlSymsp, __VlefCall_5__is_export);
                }
                __VlefCall_4__is_port = __VlefCall_5__is_export;
            }
            if (((IData)(__VlefCall_4__is_port) && 
                 (from_gparent != to_gparent))) {
                VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 720)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 721)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
                s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_6__get_full_name, " (of type "s), __VlefCall_7__get_type_name), ") is not at the same level of hierarchy as this port. "s), "A port-to-export connection takes the form "s), "component1.port.connect(component2.export)"s);
                VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 725)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_warning_id, s, 0U, ""s, 0U, ""s, 0U);
                m_check_relationship__Vfuncrtn = 0U;
                goto __Vlabel0;
            } else {
                VL_NULL_CHECK(from, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732)->__VnoInFunc_is_export(vlSymsp, __VlefCall_8__is_export);
                if (__VlefCall_8__is_export) {
                    VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732)->__VnoInFunc_is_export(vlSymsp, __VlefCall_9__is_export);
                    if ((1U & (~ (IData)(__VlefCall_9__is_export)))) {
                        VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 732)->__VnoInFunc_is_imp(vlSymsp, __VlefCall_9__is_export);
                    }
                    __VlefCall_8__is_export = __VlefCall_9__is_export;
                }
                if (((IData)(__VlefCall_8__is_export) 
                     && (from_parent != to_gparent))) {
                    VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 734)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 735)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_10__get_full_name, " (of type "s), __VlefCall_11__get_type_name), ") is not down one level of hierarchy from this export. "s), "An export-to-export or export-to-imp connection takes the form "s), "parent_export.connect(child_component.child_export)"s);
                    VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 739)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_warning_id, s, 0U, ""s, 0U, ""s, 0U);
                    m_check_relationship__Vfuncrtn = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[19184]);
                }
            }
        }
        m_check_relationship__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[19187]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_m_add_list(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> provider) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_m_add_list\n"); );
    // Body
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk7__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> imp;
    unnamedblk7__DOT__i = 0U;
    while (true) {
        VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 755)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk7__DOT__i, __VlefCall_0__size))) break;
        VL_NULL_CHECK(provider, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 756)->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk7__DOT__i, imp);
        VL_NULL_CHECK(imp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 757)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        if (this->__PVT__m_imp_list.exists(__VlefCall_1__get_full_name)) {
            ++(vlSymsp->__Vcoverage[19189]);
        } else {
            VL_NULL_CHECK(imp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 758)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__PVT__m_imp_list.at(__VlefCall_2__get_full_name) 
                = imp;
            ++(vlSymsp->__Vcoverage[19188]);
        }
        unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
        ++(vlSymsp->__Vcoverage[19190]);
    }
    ++(vlSymsp->__Vcoverage[19191]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_resolve_bindings\n"); );
    // Body
    IData/*31:0*/ __VlefCall_21__max_size;
    IData/*31:0*/ __VlefCall_20__max_size;
    IData/*31:0*/ __VlefCall_19__size;
    CData/*0:0*/ __VlefLogAnd_18;
    IData/*31:0*/ __VlefCall_17__max_size;
    IData/*31:0*/ __VlefCall_16__size;
    IData/*31:0*/ __VlefCall_15__max_size;
    IData/*31:0*/ __VlefCall_14__size;
    IData/*31:0*/ __VlefCall_13__max_size;
    IData/*31:0*/ __VlefCall_12__size;
    CData/*0:0*/ __VlefLogAnd_11;
    IData/*31:0*/ __VlefCall_10__max_size;
    IData/*31:0*/ __VlefCall_9__size;
    IData/*31:0*/ __VlefCall_8__max_size;
    IData/*31:0*/ __VlefCall_7__min_size;
    IData/*31:0*/ __VlefCall_6__size;
    IData/*31:0*/ __VlefCall_5__min_size;
    IData/*31:0*/ __VlefCall_4__size;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    std::string __VlefCall_1__get_full_name;
    CData/*0:0*/ __VlefCall_0__is_imp;
    std::string unnamedblk8__DOT__nm;
    CData/*0:0*/ unnamedblk8__DOT__nm__Vfirst;
    unnamedblk8__DOT__nm__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> unnamedblk8__DOT__unnamedblk9__DOT__port;
    {
        if (this->__PVT__m_resolved) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19193]);
        }
        this->__VnoInFunc_is_imp(vlSymsp, __VlefCall_0__is_imp);
        if (__VlefCall_0__is_imp) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__PVT__m_imp_list.at(__VlefCall_1__get_full_name) 
                = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253>{this};
            ++(vlSymsp->__Vcoverage[19197]);
        } else {
            __VlefExpr_2 = (0U != this->__PVT__m_provided_by.first(unnamedblk8__DOT__nm));
            if (__VlefExpr_2) {
                unnamedblk8__DOT__nm__Vfirst = 1U;
                while (true) {
                    __VlefExpr_3 = unnamedblk8__DOT__nm__Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_3)))) {
                        __VlefExpr_3 = (0U != this->__PVT__m_provided_by.next(unnamedblk8__DOT__nm));
                    }
                    if (!(__VlefExpr_3)) break;
                    unnamedblk8__DOT__nm__Vfirst = 0U;
                    unnamedblk8__DOT__unnamedblk9__DOT__port 
                        = this->__PVT__m_provided_by
                        .at(unnamedblk8__DOT__nm);
                    VL_NULL_CHECK(unnamedblk8__DOT__unnamedblk9__DOT__port, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 787)->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
                    this->__VnoInFunc_m_add_list(vlProcess, vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__port);
                    ++(vlSymsp->__Vcoverage[19194]);
                }
                ++(vlSymsp->__Vcoverage[19195]);
            } else {
                ++(vlSymsp->__Vcoverage[19196]);
            }
            ++(vlSymsp->__Vcoverage[19198]);
        }
        this->__PVT__m_resolved = 1U;
        this->__VnoInFunc_size(vlSymsp, __VlefCall_4__size);
        this->__VnoInFunc_min_size(vlSymsp, __VlefCall_5__min_size);
        if (VL_LTS_III(32, __VlefCall_4__size, __VlefCall_5__min_size)) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
            this->__VnoInFunc_min_size(vlSymsp, __VlefCall_7__min_size);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 795)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_error_id, VL_SFORMATF_N_NX("connection count of %0d does not meet required minimum of %0d",0,
                                                                                32,
                                                                                __VlefCall_6__size,
                                                                                32,
                                                                                __VlefCall_7__min_size) , 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19199]);
        } else {
            ++(vlSymsp->__Vcoverage[19200]);
        }
        this->__VnoInFunc_max_size(vlSymsp, __VlefCall_8__max_size);
        __VlefLogAnd_11 = (__VlefCall_8__max_size != vlSymsp->TOP__uvm_pkg.__PVT__UVM_UNBOUNDED_CONNECTIONS);
        if (__VlefLogAnd_11) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_9__size);
            this->__VnoInFunc_max_size(vlSymsp, __VlefCall_10__max_size);
            __VlefLogAnd_11 = VL_GTS_III(32, __VlefCall_9__size, __VlefCall_10__max_size);
        }
        if (__VlefLogAnd_11) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_12__size);
            this->__VnoInFunc_max_size(vlSymsp, __VlefCall_13__max_size);
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 801)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_error_id, VL_SFORMATF_N_NX("connection count of %0d exceeds maximum of %0d",0,
                                                                                32,
                                                                                __VlefCall_12__size,
                                                                                32,
                                                                                __VlefCall_13__max_size) , 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[19201]);
        } else {
            ++(vlSymsp->__Vcoverage[19202]);
        }
        this->__VnoInFunc_size(vlSymsp, __VlefCall_14__size);
        if ((0U != __VlefCall_14__size)) {
            this->__VnoInFunc_set_if(vlProcess, vlSymsp, 0U);
            ++(vlSymsp->__Vcoverage[19206]);
        } else {
            ++(vlSymsp->__Vcoverage[19207]);
        }
        __Vlabel0: ;
    }
    this->__VnoInFunc_max_size(vlSymsp, __VlefCall_15__max_size);
    __VlefLogAnd_18 = (__VlefCall_15__max_size != vlSymsp->TOP__uvm_pkg.__PVT__UVM_UNBOUNDED_CONNECTIONS);
    if (__VlefLogAnd_18) {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_16__size);
        this->__VnoInFunc_max_size(vlSymsp, __VlefCall_17__max_size);
        __VlefLogAnd_18 = VL_GTS_III(32, __VlefCall_16__size, __VlefCall_17__max_size);
    }
    if (__VlefLogAnd_18) {
        ++(vlSymsp->__Vcoverage[19203]);
    }
    this->__VnoInFunc_size(vlSymsp, __VlefCall_19__size);
    this->__VnoInFunc_max_size(vlSymsp, __VlefCall_20__max_size);
    if (VL_LTES_III(32, __VlefCall_19__size, __VlefCall_20__max_size)) {
        ++(vlSymsp->__Vcoverage[19204]);
    }
    this->__VnoInFunc_max_size(vlSymsp, __VlefCall_21__max_size);
    if ((__VlefCall_21__max_size == vlSymsp->TOP__uvm_pkg.__PVT__UVM_UNBOUNDED_CONNECTIONS)) {
        ++(vlSymsp->__Vcoverage[19205]);
    }
    ++(vlSymsp->__Vcoverage[19208]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_if(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253> &get_if__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::__VnoInFunc_get_if\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_8;
    IData/*31:0*/ __VlefCall_7__size;
    IData/*31:0*/ __VlefCall_6__size;
    CData/*0:0*/ __VlefExpr_5;
    CData/*0:0*/ __VlefExpr_4;
    IData/*31:0*/ __VlefCall_3__size;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    std::string unnamedblk10__DOT__nm;
    CData/*0:0*/ unnamedblk10__DOT__nm__Vfirst;
    unnamedblk10__DOT__nm__Vfirst = 0;
    std::string s;
    {
        s = ""s;
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 822)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "get_if"s, "Port size is zero; cannot get interface at any index"s, 0U, ""s, 0U, ""s, 0U);
            get_if__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19210]);
        }
        __VlefLogOr_2 = VL_GTS_III(32, 0U, index);
        if ((1U & (~ (IData)(__VlefLogOr_2)))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __VlefLogOr_2 = VL_GTES_III(32, index, __VlefCall_1__size);
        }
        if (__VlefLogOr_2) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
            VL_SFORMAT_NX(64,s,"Index %0d out of range [0,%0d]",0,
                          32,index,32,(__VlefCall_3__size 
                                       - (IData)(1U)));
            VL_NULL_CHECK(this->__PVT__m_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_port_base.svh", 828)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__s_connection_error_id, s, 0U, ""s, 0U, ""s, 0U);
            get_if__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[19212]);
        }
        __VlefExpr_4 = (0U != this->__PVT__m_imp_list.first(unnamedblk10__DOT__nm));
        if (__VlefExpr_4) {
            unnamedblk10__DOT__nm__Vfirst = 1U;
            while (true) {
                __VlefExpr_5 = unnamedblk10__DOT__nm__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_5)))) {
                    __VlefExpr_5 = (0U != this->__PVT__m_imp_list.next(unnamedblk10__DOT__nm));
                }
                if (!(__VlefExpr_5)) break;
                unnamedblk10__DOT__nm__Vfirst = 0U;
                if ((0U == index)) {
                    get_if__Vfuncrtn = this->__PVT__m_imp_list
                        .at(unnamedblk10__DOT__nm);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[19217]);
                }
                index = (index - (IData)(1U));
                ++(vlSymsp->__Vcoverage[19218]);
            }
            ++(vlSymsp->__Vcoverage[19219]);
        } else {
            ++(vlSymsp->__Vcoverage[19220]);
        }
        __Vlabel0: ;
    }
    this->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
    if (VL_GTES_III(32, index, __VlefCall_6__size)) {
        ++(vlSymsp->__Vcoverage[19213]);
    }
    if (VL_GTS_III(32, 0U, index)) {
        ++(vlSymsp->__Vcoverage[19214]);
    }
    __VlefLogAnd_8 = VL_LTES_III(32, 0U, index);
    if (__VlefLogAnd_8) {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_7__size);
        __VlefLogAnd_8 = VL_LTS_III(32, index, __VlefCall_7__size);
    }
    if (__VlefLogAnd_8) {
        ++(vlSymsp->__Vcoverage[19215]);
    }
    ++(vlSymsp->__Vcoverage[19221]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_if_mask = 0;
    __PVT__m_def_index = 0;
    __PVT__m_port_type = 0;
    __PVT__m_min_size = 0;
    __PVT__m_max_size = 0;
    __PVT__m_resolved = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::~Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_if_mask:" + VL_TO_STRING(__PVT__m_if_mask);
    out += ", m_if:" + VL_TO_STRING(__PVT__m_if);
    out += ", m_def_index:" + VL_TO_STRING(__PVT__m_def_index);
    out += ", m_comp:" + VL_TO_STRING(__PVT__m_comp);
    out += ", m_provided_by:" + VL_TO_STRING(__PVT__m_provided_by);
    out += ", m_provided_to:" + VL_TO_STRING(__PVT__m_provided_to);
    out += ", m_port_type:" + VL_TO_STRING(__PVT__m_port_type);
    out += ", m_min_size:" + VL_TO_STRING(__PVT__m_min_size);
    out += ", m_max_size:" + VL_TO_STRING(__PVT__m_max_size);
    out += ", m_resolved:" + VL_TO_STRING(__PVT__m_resolved);
    out += ", m_imp_list:" + VL_TO_STRING(__PVT__m_imp_list);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26::to_string_middle();
    return (out);
}
