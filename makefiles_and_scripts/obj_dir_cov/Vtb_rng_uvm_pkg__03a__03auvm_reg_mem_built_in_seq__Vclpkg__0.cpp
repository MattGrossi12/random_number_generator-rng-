// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi196> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi196__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[25002]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_built_in_seq"s;
    ++(vlSymsp->__Vcoverage[25007]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi196> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi196__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[25003]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq, vlProcess, vlSymsp, "uvm_reg_mem_built_in_seq"s);
        ++(vlSymsp->__Vcoverage[25004]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[25005]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[25006]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_built_in_seq"s;
    ++(vlSymsp->__Vcoverage[25008]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__tests = 0xffffffffffffffffULL;
    ++(vlSymsp->__Vcoverage[25010]);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[25009]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_45__get_name;
    IData/*31:0*/ __VlefCall_44__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_43__get_by_name;
    std::string __VlefCall_42__get_full_name;
    CData/*0:0*/ __VlefLogAnd_41;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_40__get_by_name;
    std::string __VlefCall_39__get_full_name;
    std::string __VlefCall_38__get_name;
    IData/*31:0*/ __VlefCall_37__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_36__get_by_name;
    std::string __VlefCall_35__get_full_name;
    CData/*0:0*/ __VlefLogAnd_34;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_33__get_by_name;
    std::string __VlefCall_32__get_full_name;
    std::string __VlefCall_31__get_name;
    IData/*31:0*/ __VlefCall_30__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_29__get_by_name;
    std::string __VlefCall_28__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_27__get_by_name;
    std::string __VlefCall_26__get_full_name;
    CData/*0:0*/ __VlefLogAnd_25;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_24__get_by_name;
    std::string __VlefCall_23__get_full_name;
    std::string __VlefCall_22__get_name;
    IData/*31:0*/ __VlefCall_21__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_20__get_by_name;
    std::string __VlefCall_19__get_full_name;
    CData/*0:0*/ __VlefLogAnd_18;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_17__get_by_name;
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_13__get_by_name;
    std::string __VlefCall_12__get_full_name;
    CData/*0:0*/ __VlefLogAnd_11;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_10__get_by_name;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_6__get_by_name;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefLogAnd_4;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq> unnamedblk1__DOT__seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_bit_bash_seq> unnamedblk2__DOT__seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_access_seq> unnamedblk3__DOT__seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_access_seq> unnamedblk4__DOT__seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> unnamedblk5__DOT__seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq> unnamedblk6__DOT__seq;
    {
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_built_in_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_built_in_seq"s, "Not block or system specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000043U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[25011]);
            } else {
                ++(vlSymsp->__Vcoverage[25012]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[25014]);
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "START_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        __VlefLogAnd_4 = (0U != (1ULL & this->__PVT__tests));
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 74)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogAnd_4 = (VlNull{} == __VlefCall_3__get_by_name);
        }
        if (__VlefLogAnd_4) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 76)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_6__get_by_name);
            __VlefLogAnd_4 = (VlNull{} == __VlefCall_6__get_by_name);
        }
        if (__VlefLogAnd_4) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi183__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_hw_reset_seq"s, VlNull{}, ""s, unnamedblk1__DOT__seq);
            VL_NULL_CHECK(unnamedblk1__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 79)->__PVT__model 
                = Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk1__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 80)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk1__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 81)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_8__get_name), " sequence."s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000051U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[25015]);
            } else {
                ++(vlSymsp->__Vcoverage[25016]);
            }
            ++(vlSymsp->__Vcoverage[25017]);
        } else {
            ++(vlSymsp->__Vcoverage[25018]);
        }
        __VlefLogAnd_11 = (0U != (2ULL & this->__PVT__tests));
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 85)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_10__get_by_name);
            __VlefLogAnd_11 = (VlNull{} == __VlefCall_10__get_by_name);
        }
        if (__VlefLogAnd_11) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 87)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_12__get_full_name)), "NO_REG_BIT_BASH_TEST"s, 0U, __VlefCall_13__get_by_name);
            __VlefLogAnd_11 = (VlNull{} == __VlefCall_13__get_by_name);
        }
        if (__VlefLogAnd_11) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi185__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_bit_bash_seq"s, VlNull{}, ""s, unnamedblk2__DOT__seq);
            VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 90)->__PVT__model 
                = Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 91)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_14__uvm_report_enabled);
            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 92)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_15__get_name), " sequence."s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000005cU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[25019]);
            } else {
                ++(vlSymsp->__Vcoverage[25020]);
            }
            ++(vlSymsp->__Vcoverage[25021]);
        } else {
            ++(vlSymsp->__Vcoverage[25022]);
        }
        __VlefLogAnd_18 = (0U != (4ULL & this->__PVT__tests));
        if (__VlefLogAnd_18) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 96)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_16__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_17__get_by_name);
            __VlefLogAnd_18 = (VlNull{} == __VlefCall_17__get_by_name);
        }
        if (__VlefLogAnd_18) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 98)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_19__get_full_name)), "NO_REG_ACCESS_TEST"s, 0U, __VlefCall_20__get_by_name);
            __VlefLogAnd_18 = (VlNull{} == __VlefCall_20__get_by_name);
        }
        if (__VlefLogAnd_18) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi191__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_access_seq"s, VlNull{}, ""s, unnamedblk3__DOT__seq);
            VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 101)->__PVT__model 
                = Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 102)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_21__uvm_report_enabled);
            if ((0U != __VlefCall_21__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 103)->__VnoInFunc_get_name(vlSymsp, __VlefCall_22__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_22__get_name), " sequence."s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000067U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[25023]);
            } else {
                ++(vlSymsp->__Vcoverage[25024]);
            }
            ++(vlSymsp->__Vcoverage[25025]);
        } else {
            ++(vlSymsp->__Vcoverage[25026]);
        }
        __VlefLogAnd_25 = (0U != (8ULL & this->__PVT__tests));
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 107)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_23__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_24__get_by_name);
            __VlefLogAnd_25 = (VlNull{} == __VlefCall_24__get_by_name);
        }
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 109)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_26__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_27__get_by_name);
            __VlefLogAnd_25 = (VlNull{} == __VlefCall_27__get_by_name);
        }
        if (__VlefLogAnd_25) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 111)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_28__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_29__get_by_name);
            __VlefLogAnd_25 = (VlNull{} == __VlefCall_29__get_by_name);
        }
        if (__VlefLogAnd_25) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi189__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_access_seq"s, VlNull{}, ""s, unnamedblk4__DOT__seq);
            VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 114)->__PVT__model 
                = Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 115)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_30__uvm_report_enabled);
            if ((0U != __VlefCall_30__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 116)->__VnoInFunc_get_name(vlSymsp, __VlefCall_31__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_31__get_name), " sequence."s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000074U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[25027]);
            } else {
                ++(vlSymsp->__Vcoverage[25028]);
            }
            ++(vlSymsp->__Vcoverage[25029]);
        } else {
            ++(vlSymsp->__Vcoverage[25030]);
        }
        __VlefLogAnd_34 = (0U != (0x0000000000000010ULL 
                                  & this->__PVT__tests));
        if (__VlefLogAnd_34) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 120)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_32__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_33__get_by_name);
            __VlefLogAnd_34 = (VlNull{} == __VlefCall_33__get_by_name);
        }
        if (__VlefLogAnd_34) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 122)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_35__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_35__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_36__get_by_name);
            __VlefLogAnd_34 = (VlNull{} == __VlefCall_36__get_by_name);
        }
        if (__VlefLogAnd_34) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi195__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "shared_access_seq"s, VlNull{}, ""s, unnamedblk5__DOT__seq);
            VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 125)->__PVT__model 
                = Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 126)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_37__uvm_report_enabled);
            if ((0U != __VlefCall_37__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 127)->__VnoInFunc_get_name(vlSymsp, __VlefCall_38__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_38__get_name), " sequence."s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000007fU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[25031]);
            } else {
                ++(vlSymsp->__Vcoverage[25032]);
            }
            ++(vlSymsp->__Vcoverage[25033]);
        } else {
            ++(vlSymsp->__Vcoverage[25034]);
        }
        __VlefLogAnd_41 = (0U != (0x0000000000000020ULL 
                                  & this->__PVT__tests));
        if (__VlefLogAnd_41) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 131)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_39__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_39__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_40__get_by_name);
            __VlefLogAnd_41 = (VlNull{} == __VlefCall_40__get_by_name);
        }
        if (__VlefLogAnd_41) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 133)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_42__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_42__get_full_name)), "NO_MEM_WALK_TEST"s, 0U, __VlefCall_43__get_by_name);
            __VlefLogAnd_41 = (VlNull{} == __VlefCall_43__get_by_name);
        }
        if (__VlefLogAnd_41) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi187__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_walk_seq"s, VlNull{}, ""s, unnamedblk6__DOT__seq);
            VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 136)->__PVT__model 
                = Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 137)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __VlefCall_44__uvm_report_enabled);
            if ((0U != __VlefCall_44__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 138)->__VnoInFunc_get_name(vlSymsp, __VlefCall_45__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, __VlefCall_45__get_name), " sequence."s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000008aU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[25035]);
            } else {
                ++(vlSymsp->__Vcoverage[25036]);
            }
            ++(vlSymsp->__Vcoverage[25037]);
        } else {
            ++(vlSymsp->__Vcoverage[25038]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[25039]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tests:" + VL_TO_STRING(__PVT__tests);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
