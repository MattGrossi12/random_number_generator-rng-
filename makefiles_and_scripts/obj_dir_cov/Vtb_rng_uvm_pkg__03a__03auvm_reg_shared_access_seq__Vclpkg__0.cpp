// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi193> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi193__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24865]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_shared_access_seq"s;
    ++(vlSymsp->__Vcoverage[24870]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi193> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi193__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24866]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s);
        ++(vlSymsp->__Vcoverage[24867]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24868]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24869]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_shared_access_seq"s;
    ++(vlSymsp->__Vcoverage[24871]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24872]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_lsb_pos__13__Vfuncout;
    __Vtask_get_lsb_pos__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__14__Vfuncout;
    __Vtask_get_n_bits__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__16__Vfuncout;
    __Vtask_get_lsb_pos__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__17__Vfuncout;
    __Vtask_get_n_bits__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__26__status;
    __Vtask_write__26__status = 0;
    IData/*31:0*/ __Vtask_read__36__status;
    __Vtask_read__36__status = 0;
    QData/*63:0*/ __Vtask_read__36__value;
    __Vtask_read__36__value = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_27__get_full_name;
    std::string __VlefCall_26__get_full_name;
    std::string __VlefCall_25__get_full_name;
    IData/*31:0*/ __VlefCall_24__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_23__uvm_report_enabled;
    std::string __VlefCall_22__get_full_name;
    std::string __VlefCall_21__get_full_name;
    IData/*31:0*/ __VlefCall_20__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_19__get;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_access;
    CData/*0:0*/ __VlefCall_7__is_known_access;
    IData/*31:0*/ __VlefCall_6__get_n_maps;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_4__get_by_name;
    std::string __VlefCall_3__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__k;
    unnamedblk1__DOT__k = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__lsb;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__w;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk3__DOT__j;
    unnamedblk3__DOT__j = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__wo;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ unnamedblk7__DOT__j;
    unnamedblk7__DOT__j = 0;
    IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__status;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__prev;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__v;
    IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    QData/*63:0*/ other_mask;
    VlQueue<QData/*63:0*/> wo_mask;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> fields;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        other_mask = 0ULL;
        wo_mask.clear();
        wo_mask.atDefault() = 0;
        fields.clear();
        maps.clear();
        if ((VlNull{} == this->__PVT__rg)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000052U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24873]);
            } else {
                ++(vlSymsp->__Vcoverage[24874]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24876]);
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 87)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 89)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24878]);
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 94)->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_6__get_n_maps);
        if (VL_GTS_III(32, 2U, __VlefCall_6__get_n_maps)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24880]);
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 95)->__VnoInFunc_get_maps(vlSymsp, maps);
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 98)->__VnoInFunc_get_fields(vlSymsp, fields);
        other_mask = 0ULL;
        unnamedblk1__DOT__k = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__k, fields.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__lsb = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__w = 0U;
            VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 105)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__13__Vfuncout);
            unnamedblk1__DOT__unnamedblk2__DOT__lsb 
                = __Vtask_get_lsb_pos__13__Vfuncout;
            VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 106)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__14__Vfuncout);
            unnamedblk1__DOT__unnamedblk2__DOT__w = __Vtask_get_n_bits__14__Vfuncout;
            VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 108)->__VnoInFunc_is_known_access(vlProcess, vlSymsp, maps.at(0U), __VlefCall_7__is_known_access);
            if (__VlefCall_7__is_known_access) {
                ++(vlSymsp->__Vcoverage[24883]);
            } else {
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk1__DOT__unnamedblk2__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    __Vincrement1 = unnamedblk1__DOT__unnamedblk2__DOT__lsb;
                    unnamedblk1__DOT__unnamedblk2__DOT__lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__lsb);
                    other_mask = (other_mask | ((QData)((IData)(1U)) 
                                                << 
                                                (0x0000003fU 
                                                 & __Vincrement1)));
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                    ++(vlSymsp->__Vcoverage[24881]);
                }
                ++(vlSymsp->__Vcoverage[24882]);
            }
            unnamedblk1__DOT__k = ((IData)(1U) + unnamedblk1__DOT__k);
            ++(vlSymsp->__Vcoverage[24884]);
        }
        unnamedblk3__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__j, maps.size())) {
            unnamedblk3__DOT__unnamedblk4__DOT__wo = 0ULL;
            unnamedblk3__DOT__unnamedblk4__DOT__wo = 0ULL;
            unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k, fields.size())) {
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb = 0U;
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 0U;
                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 124)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__16__Vfuncout);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb 
                    = __Vtask_get_lsb_pos__16__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 125)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__17__Vfuncout);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w 
                    = __Vtask_get_n_bits__17__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 127)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__j), __VlefCall_8__get_access);
                if (("WO"s == __VlefCall_8__get_access)) {
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                        = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
                    while (VL_LTS_III(32, 0U, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                        __Vincrement2 = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb;
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb 
                            = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb);
                        unnamedblk3__DOT__unnamedblk4__DOT__wo 
                            = (unnamedblk3__DOT__unnamedblk4__DOT__wo 
                               | ((QData)((IData)(1U)) 
                                  << (0x0000003fU & __Vincrement2)));
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                            = (unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                               - (IData)(1U));
                        ++(vlSymsp->__Vcoverage[24885]);
                    }
                    ++(vlSymsp->__Vcoverage[24886]);
                } else {
                    ++(vlSymsp->__Vcoverage[24887]);
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k 
                    = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k);
                ++(vlSymsp->__Vcoverage[24888]);
            }
            wo_mask.atWriteAppend(unnamedblk3__DOT__j) 
                = unnamedblk3__DOT__unnamedblk4__DOT__wo;
            unnamedblk3__DOT__j = ((IData)(1U) + unnamedblk3__DOT__j);
            ++(vlSymsp->__Vcoverage[24889]);
        }
        unnamedblk7__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk7__DOT__j, maps.size())) {
            unnamedblk7__DOT__unnamedblk8__DOT__status = 0U;
            unnamedblk7__DOT__unnamedblk8__DOT__prev = 0ULL;
            unnamedblk7__DOT__unnamedblk8__DOT__v = 0ULL;
            VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 142)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, unnamedblk7__DOT__unnamedblk8__DOT__prev);
            unnamedblk7__DOT__unnamedblk8__DOT__v = 
                ((VL_RANDOM_Q() & (~ other_mask)) | 
                 (unnamedblk7__DOT__unnamedblk8__DOT__prev 
                  & other_mask));
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_9__uvm_report_enabled);
            if ((0U != __VlefCall_9__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 148)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 148)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Writing register %@ via map \"%@\"...",0,
                                                                                -1,
                                                                                &(__VlefCall_10__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_11__get_full_name)) , 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000094U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24890]);
            } else {
                ++(vlSymsp->__Vcoverage[24891]);
            }
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000001f4U, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_12__uvm_report_enabled);
            if ((0U != __VlefCall_12__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Writing 'h%x over 'h%x",0,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__v,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__prev) , 0x000001f4U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000096U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24892]);
            } else {
                ++(vlSymsp->__Vcoverage[24893]);
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 152)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__26__status, unnamedblk7__DOT__unnamedblk8__DOT__v, 0U, maps.at(unnamedblk7__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk7__DOT__unnamedblk8__DOT__status 
                = __Vtask_write__26__status;
            if ((0U != unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_13__uvm_report_enabled);
                if ((0U != __VlefCall_13__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 155)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 155)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                    __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name83
                        [(3U & unnamedblk7__DOT__unnamedblk8__DOT__status)];
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__VlefCall_14__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_15__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000009bU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24894]);
                } else {
                    ++(vlSymsp->__Vcoverage[24895]);
                }
                ++(vlSymsp->__Vcoverage[24896]);
            } else {
                ++(vlSymsp->__Vcoverage[24897]);
            }
            unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k, maps.size())) {
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual = 0ULL;
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp = 0ULL;
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_16__uvm_report_enabled);
                if ((0U != __VlefCall_16__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 162)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 162)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Reading register %@ via map \"%@\"...",0,
                                                                                -1,
                                                                                &(__VlefCall_17__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_18__get_full_name)) , 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000a2U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24898]);
                } else {
                    ++(vlSymsp->__Vcoverage[24899]);
                }
                VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 165)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_19__get);
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp 
                    = (__VlefCall_19__get & (~ wo_mask.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k)));
                co_await VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 167)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__36__status, __Vtask_read__36__value, 0U, maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk7__DOT__unnamedblk8__DOT__status 
                    = __Vtask_read__36__status;
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual 
                    = __Vtask_read__36__value;
                if ((0U != unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_20__uvm_report_enabled);
                    if ((0U != __VlefCall_20__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 170)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 170)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                        __Vtemp_2 = Vtb_rng___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk7__DOT__unnamedblk8__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__VlefCall_21__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_22__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000aaU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24900]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24901]);
                    }
                    ++(vlSymsp->__Vcoverage[24902]);
                } else {
                    ++(vlSymsp->__Vcoverage[24903]);
                }
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000001f4U, 0U, "uvm_reg_shared_access_seq"s, __VlefCall_23__uvm_report_enabled);
                if ((0U != __VlefCall_23__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Read 'h%x, expecting 'h%x",0,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp) , 0x000001f4U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000aeU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24904]);
                } else {
                    ++(vlSymsp->__Vcoverage[24905]);
                }
                if ((unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual 
                     != unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __VlefCall_24__uvm_report_enabled);
                    if ((0U != __VlefCall_24__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Register \"%@\" through map \"%@\" is 'h%x instead of 'h%x after writing 'h%x via map \"%@\" over 'h%x.",0,
                                                                                -1,
                                                                                &(__VlefCall_25__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_26__get_full_name),
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__v,
                                                                                -1,
                                                                                &(__VlefCall_27__get_full_name),
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__prev) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000b3U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24906]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24907]);
                    }
                    ++(vlSymsp->__Vcoverage[24908]);
                } else {
                    ++(vlSymsp->__Vcoverage[24909]);
                }
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k 
                    = ((IData)(1U) + unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k);
                ++(vlSymsp->__Vcoverage[24910]);
            }
            unnamedblk7__DOT__j = ((IData)(1U) + unnamedblk7__DOT__j);
            ++(vlSymsp->__Vcoverage[24911]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24912]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
