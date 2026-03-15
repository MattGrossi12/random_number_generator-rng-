// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi183> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi183__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24511]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_hw_reset_seq"s;
    ++(vlSymsp->__Vcoverage[24516]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi183> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi183__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24512]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s);
        ++(vlSymsp->__Vcoverage[24513]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24514]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24515]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_hw_reset_seq"s;
    ++(vlSymsp->__Vcoverage[24517]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24518]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_hw_reset_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s, "Not block or system specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000050U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24519]);
            } else {
                ++(vlSymsp->__Vcoverage[24520]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24522]);
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "STARTING_SEQ"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_2__get_name), " sequence...\n"s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000053U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[24523]);
        } else {
            ++(vlSymsp->__Vcoverage[24524]);
        }
        this->__VnoInFunc_reset_blk(vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 86)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24525]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_do_block\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__36__status;
    __Vtask_mirror__36__status = 0;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefExpr_28;
    CData/*0:0*/ __VlefExpr_27;
    std::string __VlefCall_26__get_full_name;
    std::string __VlefCall_25__get_full_name;
    std::string __VlefCall_24__get_type_name;
    IData/*31:0*/ __VlefCall_23__uvm_report_enabled;
    std::string __VlefCall_22__get_type_name;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_type_name;
    IData/*31:0*/ __VlefCall_18__uvm_report_enabled;
    std::string __VlefCall_17__get_type_name;
    IData/*31:0*/ __VlefCall_16__get_compare;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_15__get_by_name;
    std::string __VlefCall_14__get_full_name;
    CData/*0:0*/ __VlefLogOr_13;
    IData/*31:0*/ __VlefCall_12__get_compare;
    CData/*0:0*/ __VlefCall_11__has_reset;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_10__get_by_name;
    std::string __VlefCall_9__get_full_name;
    CData/*0:0*/ __VlefLogOr_8;
    CData/*0:0*/ __VlefCall_7__has_reset;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_6__get_by_name;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefLogOr_4;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_1__get_by_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk1__DOT__ridx;
    unnamedblk1__DOT__ridx = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> unnamedblk1__DOT__unnamedblk2__DOT__rm;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__status;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> unnamedblk1__DOT__unnamedblk2__DOT__fields;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>, IData/*31:0*/> unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> unnamedblk6__DOT__blks;
    IData/*31:0*/ unnamedblk6__DOT__unnamedblk7__DOT__i;
    unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> regs;
    {
        regs.clear();
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 100)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_1__get_by_name);
        __VlefLogOr_4 = (VlNull{} != __VlefCall_1__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 102)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_3__get_by_name);
        }
        if (__VlefLogOr_4) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24527]);
        }
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 108)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk1__DOT__ridx = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__ridx, regs.size())) {
            {
                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 111)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_6__get_by_name);
                __VlefLogOr_8 = (VlNull{} != __VlefCall_6__get_by_name);
                if ((1U & (~ (IData)(__VlefLogOr_8)))) {
                    VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 113)->__VnoInFunc_has_reset(vlSymsp, "HARD"s, 0U, __VlefCall_7__has_reset);
                    __VlefLogOr_8 = (1U & (~ (IData)(__VlefCall_7__has_reset)));
                }
                if ((1U & (~ (IData)(__VlefLogOr_8)))) {
                    VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 114)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_10__get_by_name);
                    __VlefLogOr_8 = (VlNull{} != __VlefCall_10__get_by_name);
                }
                if (__VlefLogOr_8) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[24529]);
                }
                unnamedblk1__DOT__unnamedblk2__DOT__rm.clear();
                unnamedblk1__DOT__unnamedblk2__DOT__status = 0U;
                unnamedblk1__DOT__unnamedblk2__DOT__fields.clear();
                unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.clear();
                unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.atDefault() = 0;
                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 124)->__VnoInFunc_get_maps(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__rm);
                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 126)->__VnoInFunc_get_fields(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__fields);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx, unnamedblk1__DOT__unnamedblk2__DOT__fields.size())) {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 129)->__VnoInFunc_has_reset(vlSymsp, "HARD"s, 0U, __VlefCall_11__has_reset);
                    __VlefLogOr_13 = (1U & (~ (IData)(__VlefCall_11__has_reset)));
                    if ((1U & (~ (IData)(__VlefLogOr_13)))) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 130)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_12__get_compare);
                        __VlefLogOr_13 = (0U == __VlefCall_12__get_compare);
                    }
                    if ((1U & (~ (IData)(__VlefLogOr_13)))) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 131)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_14__get_full_name)), "NO_REG_HW_RESET_TEST"s, 0U, __VlefCall_15__get_by_name);
                        __VlefLogOr_13 = (VlNull{} 
                                          != __VlefCall_15__get_by_name);
                    }
                    if (__VlefLogOr_13) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 133)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_16__get_compare);
                        unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.at(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx)) 
                            = __VlefCall_16__get_compare;
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 134)->__VnoInFunc_set_compare(vlSymsp, 0U);
                        ++(vlSymsp->__Vcoverage[24530]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24531]);
                    }
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx);
                    ++(vlSymsp->__Vcoverage[24532]);
                }
                if ((unnamedblk1__DOT__unnamedblk2__DOT__fields.size() 
                     != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.size())) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx = 0U;
                    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx, unnamedblk1__DOT__unnamedblk2__DOT__rm.size())) {
                        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_17__get_type_name);
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, 
                                                             VL_CVT_PACK_STR_NN(__VlefCall_17__get_type_name), __VlefCall_18__uvm_report_enabled);
                        if ((0U != __VlefCall_18__uvm_report_enabled)) {
                            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_19__get_type_name);
                            VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 142)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 142)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                              VL_CVT_PACK_STR_NN(__VlefCall_19__get_type_name), VL_SFORMATF_N_NX("Verifying reset value of register %@ in map \"%@\"...",0,
                                                                                -1,
                                                                                &(__VlefCall_20__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_21__get_full_name)) , 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x0000008eU, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[24533]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24534]);
                        }
                        co_await VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 144)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__36__status, 1U, 0U, unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_mirror__36__status;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_22__get_type_name);
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, 
                                                                 VL_CVT_PACK_STR_NN(__VlefCall_22__get_type_name), __VlefCall_23__uvm_report_enabled);
                            if ((0U != __VlefCall_23__uvm_report_enabled)) {
                                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_24__get_type_name);
                                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 149)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 149)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                                __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name83
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                                                   VL_CVT_PACK_STR_NN(__VlefCall_24__get_type_name), VL_SFORMATF_N_NX("Status was %@ when reading reset value of register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__VlefCall_25__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_26__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000095U, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[24535]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24536]);
                            }
                            ++(vlSymsp->__Vcoverage[24537]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24538]);
                        }
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx);
                        ++(vlSymsp->__Vcoverage[24539]);
                    }
                    ++(vlSymsp->__Vcoverage[24540]);
                } else {
                    ++(vlSymsp->__Vcoverage[24541]);
                }
                __VlefExpr_27 = (0U != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.first(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field));
                if (__VlefExpr_27) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_28 = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_28)))) {
                            __VlefExpr_28 = (0U != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.next(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field));
                        }
                        if (!(__VlefExpr_28)) break;
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 0U;
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 155)->__VnoInFunc_set_compare(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore
                                                                                .at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field));
                        ++(vlSymsp->__Vcoverage[24542]);
                    }
                    ++(vlSymsp->__Vcoverage[24543]);
                } else {
                    ++(vlSymsp->__Vcoverage[24544]);
                }
                __Vlabel1: ;
            }
            unnamedblk1__DOT__ridx = ((IData)(1U) + unnamedblk1__DOT__ridx);
            ++(vlSymsp->__Vcoverage[24545]);
        }
        unnamedblk6__DOT__blks.clear();
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 163)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk6__DOT__blks, 1U);
        unnamedblk6__DOT__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__unnamedblk7__DOT__i, unnamedblk6__DOT__blks.size())) {
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk6__DOT__blks.at(unnamedblk6__DOT__unnamedblk7__DOT__i));
            unnamedblk6__DOT__unnamedblk7__DOT__i = 
                ((IData)(1U) + unnamedblk6__DOT__unnamedblk7__DOT__i);
            ++(vlSymsp->__Vcoverage[24546]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24547]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[24548]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
