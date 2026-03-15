// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi187> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi187__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24663]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_walk_seq"s;
    ++(vlSymsp->__Vcoverage[24668]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi187> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi187__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24664]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq, vlProcess, vlSymsp, "uvm_mem_walk_seq"s);
        ++(vlSymsp->__Vcoverage[24665]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24666]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24667]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_walk_seq"s;
    ++(vlSymsp->__Vcoverage[24669]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24670]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, "No register model specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x000000e7U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24671]);
            } else {
                ++(vlSymsp->__Vcoverage[24672]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24674]);
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi186__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "single_mem_walk_seq"s, VlNull{}, ""s, this->__PVT__mem_seq);
        this->__VnoInFunc_reset_blk(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 240)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24675]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_do_block\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_13__get_by_name;
    std::string __VlefCall_12__get_full_name;
    CData/*0:0*/ __VlefLogOr_11;
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
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> unnamedblk2__DOT__blks;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i;
    unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> mems;
    {
        mems.clear();
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 253)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_1__get_by_name);
        __VlefLogOr_4 = (VlNull{} != __VlefCall_1__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 255)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_3__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 257)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_6__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_6__get_by_name);
        }
        if (__VlefLogOr_4) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24677]);
        }
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 262)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, mems.size())) {
            {
                VL_NULL_CHECK(mems.at(unnamedblk1__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 265)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_7__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_8__get_by_name);
                __VlefLogOr_11 = (VlNull{} != __VlefCall_8__get_by_name);
                if ((1U & (~ (IData)(__VlefLogOr_11)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk1__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 267)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_10__get_by_name);
                    __VlefLogOr_11 = (VlNull{} != __VlefCall_10__get_by_name);
                }
                if ((1U & (~ (IData)(__VlefLogOr_11)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk1__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 269)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_12__get_full_name)), "NO_MEM_WALK_TEST"s, 0U, __VlefCall_13__get_by_name);
                    __VlefLogOr_11 = (VlNull{} != __VlefCall_13__get_by_name);
                }
                if (__VlefLogOr_11) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[24679]);
                }
                VL_NULL_CHECK(this->__PVT__mem_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 273)->__PVT__mem 
                    = mems.at(unnamedblk1__DOT__i);
                co_await VL_NULL_CHECK(this->__PVT__mem_seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 274)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq>{this}, 0xffffffffU, 1U);
                __Vlabel1: ;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[24680]);
        }
        unnamedblk2__DOT__blks.clear();
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 280)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk2__DOT__blks, 1U);
        unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__i, unnamedblk2__DOT__blks.size())) {
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk2__DOT__blks.at(unnamedblk2__DOT__unnamedblk3__DOT__i));
            unnamedblk2__DOT__unnamedblk3__DOT__i = 
                ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__i);
            ++(vlSymsp->__Vcoverage[24681]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24682]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_reset_blk(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_reset_blk\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[24683]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::~Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_walk_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem_seq:" + VL_TO_STRING(__PVT__mem_seq);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
