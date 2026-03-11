// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi180> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi180__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20830]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_tlm_adapter"s;
    ++(vlSymsp->__Vcoverage[20835]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi180> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi180__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[20831]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, "uvm_reg_tlm_adapter"s);
        ++(vlSymsp->__Vcoverage[20832]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[20833]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[20834]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_tlm_adapter"s;
    ++(vlSymsp->__Vcoverage[20836]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[20837]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, const Vtb_rng_uvm_reg_bus_op__struct__0 &rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_streaming_width;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    IData/*31:0*/ nbytes;
    QData/*63:0*/ addr;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi111__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "tlm_gp"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), gp);
    nbytes = ((IData)(1U) + VL_DIVS_III(32, (rw.__PVT__n_bits 
                                             - (IData)(1U)), (IData)(8U)));
    addr = rw.__PVT__addr;
    if ((1U == rw.__PVT__kind)) {
        VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 195)->__VnoInFunc_set_command(vlSymsp, 1U);
        ++(vlSymsp->__Vcoverage[20838]);
    } else {
        VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 197)->__VnoInFunc_set_command(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[20839]);
    }
    VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 199)->__VnoInFunc_set_address(vlSymsp, addr);
    VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 201)->__PVT__m_byte_enable.renew(nbytes);
    VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 202)->__PVT__m_byte_enable_length 
        = nbytes;
    VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 204)->__VnoInFunc_set_streaming_width(vlSymsp, nbytes);
    VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 206)->__VnoInFunc_get_streaming_width(vlSymsp, __VlefCall_1__get_streaming_width);
    VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 206)->__PVT__m_data.renew(__VlefCall_1__get_streaming_width);
    VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 207)->__PVT__m_length 
        = nbytes;
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, nbytes)) {
        VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 210)->__PVT__m_data.atWrite(unnamedblk1__DOT__i) 
            = (0x000000ffU & (IData)((rw.__PVT__data 
                                      >> (0x0000003fU 
                                          & VL_MULS_III(32, (IData)(8U), unnamedblk1__DOT__i)))));
        VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 211)->__PVT__m_byte_enable.atWrite(unnamedblk1__DOT__i) 
            = (VL_GTS_III(32, unnamedblk1__DOT__i, nbytes)
                ? 0U : ((1U & (rw.__PVT__byte_en >> 
                               (7U & unnamedblk1__DOT__i)))
                         ? 0xffU : 0U));
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        ++(vlSymsp->__Vcoverage[20842]);
    }
    reg2bus__Vfuncrtn = gp;
    if (VL_GTS_III(32, unnamedblk1__DOT__i, nbytes)) {
        ++(vlSymsp->__Vcoverage[20840]);
    }
    if (VL_LTES_III(32, unnamedblk1__DOT__i, nbytes)) {
        ++(vlSymsp->__Vcoverage[20841]);
    }
    ++(vlSymsp->__Vcoverage[20843]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> bus_item, Vtb_rng_uvm_reg_bus_op__struct__0 &rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    CData/*0:0*/ __VlefCall_5__is_response_ok;
    QData/*63:0*/ __VlefCall_4__get_address;
    IData/*31:0*/ __VlefCall_3__get_command;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    {
        if ((VlNull{} == bus_item)) {
            this->__Vfunc_uvm_report_enabled__11__id = "REG/NULL_ITEM"s;
            __Vfunc_uvm_report_enabled__11__severity = 3U;
            __Vfunc_uvm_report_enabled__11__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), this->__Vfunc_uvm_report_enabled__11__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/NULL_ITEM"s, "bus2reg: bus_item argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh"s, 0x000000e4U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[20844]);
            } else {
                ++(vlSymsp->__Vcoverage[20845]);
            }
            ++(vlSymsp->__Vcoverage[20846]);
        } else {
            ++(vlSymsp->__Vcoverage[20847]);
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(bus_item, gp);
        if (__VlefExpr_1) {
            ++(vlSymsp->__Vcoverage[20851]);
        } else {
            this->__Vfunc_uvm_report_enabled__16__id = "WRONG_TYPE"s;
            __Vfunc_uvm_report_enabled__16__severity = 2U;
            __Vfunc_uvm_report_enabled__16__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), this->__Vfunc_uvm_report_enabled__16__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_error__20__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__20__context_name = ""s;
                __Vtask_uvm_report_error__20__line = 0x000000e7U;
                this->__Vtask_uvm_report_error__20__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh"s;
                __Vtask_uvm_report_error__20__verbosity = 0U;
                this->__Vtask_uvm_report_error__20__message = "Provided bus_item is not of type uvm_tlm_gp"s;
                this->__Vtask_uvm_report_error__20__id = "WRONG_TYPE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__21__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__22__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__20__id, this->__Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, this->__Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, this->__Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[20848]);
            } else {
                ++(vlSymsp->__Vcoverage[20849]);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 235)->__VnoInFunc_get_command(vlSymsp, __VlefCall_3__get_command);
        if ((1U == __VlefCall_3__get_command)) {
            rw.__PVT__kind = 1U;
            ++(vlSymsp->__Vcoverage[20852]);
        } else {
            rw.__PVT__kind = 0U;
            ++(vlSymsp->__Vcoverage[20853]);
        }
        VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 240)->__VnoInFunc_get_address(vlSymsp, __VlefCall_4__get_address);
        rw.__PVT__addr = __VlefCall_4__get_address;
        rw.__PVT__byte_en = 0U;
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 243)
                          ->__PVT__m_byte_enable.size())) {
            rw.__PVT__byte_en = (((~ ((IData)(1U) << 
                                      (7U & unnamedblk2__DOT__i))) 
                                  & rw.__PVT__byte_en) 
                                 | (0x00ffU & ((1U 
                                                & VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 244)
                                                ->__PVT__m_byte_enable.at(unnamedblk2__DOT__i)) 
                                               << (7U 
                                                   & unnamedblk2__DOT__i))));
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
            ++(vlSymsp->__Vcoverage[20854]);
        }
        rw.__PVT__data = 0ULL;
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 247)
                          ->__PVT__m_data.size())) {
            rw.__PVT__data = (((~ (0x00000000000000ffULL 
                                   << (0x0000003fU 
                                       & VL_MULS_III(32, (IData)(8U), unnamedblk3__DOT__i)))) 
                               & rw.__PVT__data) | 
                              ((QData)((IData)(VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 248)
                                               ->__PVT__m_data.at(unnamedblk3__DOT__i))) 
                               << (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk3__DOT__i))));
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
            ++(vlSymsp->__Vcoverage[20855]);
        }
        VL_NULL_CHECK(gp, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 250)->__VnoInFunc_is_response_ok(vlSymsp, __VlefCall_5__is_response_ok);
        rw.__PVT__status = ((IData)(__VlefCall_5__is_response_ok)
                             ? 0U : 1U);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20856]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::~Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter::to_string_middle();
    return (out);
}
