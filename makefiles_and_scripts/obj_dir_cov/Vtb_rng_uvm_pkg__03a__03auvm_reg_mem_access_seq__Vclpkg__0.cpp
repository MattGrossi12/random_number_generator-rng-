// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi192> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi192__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24845]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_access_seq"s;
    ++(vlSymsp->__Vcoverage[24850]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi192> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi192__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24846]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq, vlProcess, vlSymsp, "uvm_reg_mem_access_seq"s);
        ++(vlSymsp->__Vcoverage[24847]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24848]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24849]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_access_seq"s;
    ++(vlSymsp->__Vcoverage[24851]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24852]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_7__get_by_name;
    std::string __VlefCall_6__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_5__get_by_name;
    std::string __VlefCall_4__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_access_seq> unnamedblk1__DOT__sub_seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_access_seq> unnamedblk2__DOT__sub_seq;
    {
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_access_seq"s, "Register model handle is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000014eU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24853]);
            } else {
                ++(vlSymsp->__Vcoverage[24854]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24856]);
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 341)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_3__get_by_name);
        if ((VlNull{} == __VlefCall_3__get_by_name)) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 343)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_4__get_full_name)), "NO_REG_ACCESS_TEST"s, 0U, __VlefCall_5__get_by_name);
            if ((VlNull{} == __VlefCall_5__get_by_name)) {
                unnamedblk1__DOT__sub_seq = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_access_seq, vlProcess, vlSymsp, "reg_access_seq"s);
                this->__VnoInFunc_reset_blk(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
                VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 347)->__VnoInFunc_reset(vlSymsp, "HARD"s);
                VL_NULL_CHECK(unnamedblk1__DOT__sub_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 348)->__PVT__model 
                    = Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model;
                co_await VL_NULL_CHECK(unnamedblk1__DOT__sub_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 349)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq>{this}, 0xffffffffU, 1U);
                ++(vlSymsp->__Vcoverage[24857]);
            } else {
                ++(vlSymsp->__Vcoverage[24858]);
            }
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 351)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_7__get_by_name);
            if ((VlNull{} == __VlefCall_7__get_by_name)) {
                unnamedblk2__DOT__sub_seq = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_access_seq, vlProcess, vlSymsp, "mem_access_seq"s);
                this->__VnoInFunc_reset_blk(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
                VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 355)->__VnoInFunc_reset(vlSymsp, "HARD"s);
                VL_NULL_CHECK(unnamedblk2__DOT__sub_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 356)->__PVT__model 
                    = Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model;
                co_await VL_NULL_CHECK(unnamedblk2__DOT__sub_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 357)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq>{this}, 0xffffffffU, 1U);
                ++(vlSymsp->__Vcoverage[24859]);
            } else {
                ++(vlSymsp->__Vcoverage[24860]);
            }
            ++(vlSymsp->__Vcoverage[24861]);
        } else {
            ++(vlSymsp->__Vcoverage[24862]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24863]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_reset_blk(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_reset_blk\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[24864]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
