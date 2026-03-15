// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi195> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi195__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24973]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_shared_access_seq"s;
    ++(vlSymsp->__Vcoverage[24978]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi195> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi195__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24974]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_mem_shared_access_seq"s);
        ++(vlSymsp->__Vcoverage[24975]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24976]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24977]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_shared_access_seq"s;
    ++(vlSymsp->__Vcoverage[24979]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24980]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_shared_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_shared_access_seq"s, "No register model specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000018dU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24981]);
            } else {
                ++(vlSymsp->__Vcoverage[24982]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24984]);
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi193__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_shared_access_seq"s, VlNull{}, ""s, this->__PVT__reg_seq);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi194__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_shared_access_seq"s, VlNull{}, ""s, this->__PVT__mem_seq);
        this->__VnoInFunc_reset_blk(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 407)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24985]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_do_block\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_24__get_sequencer;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_23__get_by_name;
    std::string __VlefCall_22__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_21__get_by_name;
    std::string __VlefCall_20__get_full_name;
    CData/*0:0*/ __VlefLogOr_19;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_18__get_by_name;
    std::string __VlefCall_17__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_16__get_by_name;
    std::string __VlefCall_15__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_14__get_sequencer;
    CData/*0:0*/ __VlefLogOr_13;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_12__get_by_name;
    std::string __VlefCall_11__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_10__get_by_name;
    std::string __VlefCall_9__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_8__get_by_name;
    std::string __VlefCall_7__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_6__get_by_name;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefLogOr_4;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_1__get_by_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> unnamedblk3__DOT__blks;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__i;
    unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> mems;
    {
        regs.clear();
        mems.clear();
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 421)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_1__get_by_name);
        __VlefLogOr_4 = (VlNull{} != __VlefCall_1__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 423)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_3__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 425)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_6__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_6__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 427)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_7__get_full_name)), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __VlefCall_8__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_8__get_by_name);
        }
        if (__VlefLogOr_4) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24987]);
        }
        this->__VnoInFunc_reset_blk(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 432)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 435)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, regs.size())) {
            {
                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 438)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_10__get_by_name);
                __VlefLogOr_13 = (VlNull{} != __VlefCall_10__get_by_name);
                if ((1U & (~ (IData)(__VlefLogOr_13)))) {
                    VL_NULL_CHECK(regs.at(unnamedblk1__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 440)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_11__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_12__get_by_name);
                    __VlefLogOr_13 = (VlNull{} != __VlefCall_12__get_by_name);
                }
                if (__VlefLogOr_13) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[24989]);
                }
                VL_NULL_CHECK(this->__PVT__reg_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 443)->__PVT__rg 
                    = regs.at(unnamedblk1__DOT__i);
                this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_14__get_sequencer);
                co_await VL_NULL_CHECK(this->__PVT__reg_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 444)->__VnoInFunc_start(vlProcess, vlSymsp, __VlefCall_14__get_sequencer, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel1: ;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[24990]);
        }
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 448)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, mems.size())) {
            {
                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 451)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_15__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_16__get_by_name);
                __VlefLogOr_19 = (VlNull{} != __VlefCall_16__get_by_name);
                if ((1U & (~ (IData)(__VlefLogOr_19)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 453)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_17__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_18__get_by_name);
                    __VlefLogOr_19 = (VlNull{} != __VlefCall_18__get_by_name);
                }
                if ((1U & (~ (IData)(__VlefLogOr_19)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 455)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_20__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_21__get_by_name);
                    __VlefLogOr_19 = (VlNull{} != __VlefCall_21__get_by_name);
                }
                if ((1U & (~ (IData)(__VlefLogOr_19)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 457)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_22__get_full_name)), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __VlefCall_23__get_by_name);
                    __VlefLogOr_19 = (VlNull{} != __VlefCall_23__get_by_name);
                }
                if (__VlefLogOr_19) {
                    goto __Vlabel2;
                } else {
                    ++(vlSymsp->__Vcoverage[24992]);
                }
                VL_NULL_CHECK(this->__PVT__mem_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 460)->__PVT__mem 
                    = mems.at(unnamedblk2__DOT__i);
                this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_24__get_sequencer);
                co_await VL_NULL_CHECK(this->__PVT__mem_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 461)->__VnoInFunc_start(vlProcess, vlSymsp, __VlefCall_24__get_sequencer, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel2: ;
            }
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
            ++(vlSymsp->__Vcoverage[24993]);
        }
        unnamedblk3__DOT__blks.clear();
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 467)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk3__DOT__blks, 1U);
        unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__i, unnamedblk3__DOT__blks.size())) {
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk3__DOT__blks.at(unnamedblk3__DOT__unnamedblk4__DOT__i));
            unnamedblk3__DOT__unnamedblk4__DOT__i = 
                ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__i);
            ++(vlSymsp->__Vcoverage[24994]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24995]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_reset_blk(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_reset_blk\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[24996]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "reg_seq:" + VL_TO_STRING(__PVT__reg_seq);
    out += ", mem_seq:" + VL_TO_STRING(__PVT__mem_seq);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
