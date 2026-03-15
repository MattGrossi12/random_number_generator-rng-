// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi194> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi194__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24913]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_shared_access_seq"s;
    ++(vlSymsp->__Vcoverage[24918]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi194> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi194__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24914]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s);
        ++(vlSymsp->__Vcoverage[24915]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24916]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24917]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_shared_access_seq"s;
    ++(vlSymsp->__Vcoverage[24919]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24920]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__27__status;
    __Vtask_peek__27__status = 0;
    QData/*63:0*/ __Vtask_peek__27__value;
    __Vtask_peek__27__value = 0;
    IData/*31:0*/ __Vtask_read__31__status;
    __Vtask_read__31__status = 0;
    QData/*63:0*/ __Vtask_read__31__value;
    __Vtask_read__31__value = 0;
    IData/*31:0*/ __Vtask_write__36__status;
    __Vtask_write__36__status = 0;
    IData/*31:0*/ __Vtask_read__41__status;
    __Vtask_read__41__status = 0;
    QData/*63:0*/ __Vtask_read__41__value;
    __Vtask_read__41__value = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_36__get_full_name;
    std::string __VlefCall_35__get_full_name;
    std::string __VlefCall_34__get_full_name;
    IData/*31:0*/ __VlefCall_33__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_32__get_n_bits;
    std::string __VlefCall_31__get_access;
    std::string __VlefCall_30__get_access;
    std::string __VlefCall_29__get_full_name;
    std::string __VlefCall_28__get_full_name;
    IData/*31:0*/ __VlefCall_27__uvm_report_enabled;
    std::string __VlefCall_26__get_full_name;
    std::string __VlefCall_25__get_full_name;
    IData/*31:0*/ __VlefCall_24__uvm_report_enabled;
    std::string __VlefCall_23__get_full_name;
    std::string __VlefCall_22__get_full_name;
    IData/*31:0*/ __VlefCall_21__uvm_report_enabled;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_18__get_backdoor;
    QData/*63:0*/ __VlefCall_17__get_size;
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_full_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_11__get_backdoor;
    IData/*31:0*/ __VlefCall_10__get_n_maps;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_9__get_by_name;
    std::string __VlefCall_8__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_7__get_by_name;
    std::string __VlefCall_6__get_full_name;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_4__get_by_name;
    std::string __VlefCall_3__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__j;
    unnamedblk1__DOT__j = 0;
    std::string unnamedblk1__DOT__unnamedblk2__DOT__right;
    IData/*31:0*/ unnamedblk3__DOT__j;
    unnamedblk3__DOT__j = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__offset;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp;
    IData/*31:0*/ read_from;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        read_from = 0U;
        maps.clear();
        if ((VlNull{} == this->__PVT__mem)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, "No memory specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000e6U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24921]);
            } else {
                ++(vlSymsp->__Vcoverage[24922]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24924]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 235)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 237)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 239)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 241)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_8__get_full_name)), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __VlefCall_9__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_9__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24926]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 246)->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_10__get_n_maps);
        if (VL_GTS_III(32, 2U, __VlefCall_10__get_n_maps)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24928]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 247)->__VnoInFunc_get_maps(vlSymsp, maps);
        read_from = 0xffffffffU;
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 252)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_11__get_backdoor);
        if ((VlNull{} == __VlefCall_11__get_backdoor)) {
            {
                unnamedblk1__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
                    unnamedblk1__DOT__unnamedblk2__DOT__right = ""s;
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 255)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), unnamedblk1__DOT__unnamedblk2__DOT__right);
                    if ((("RW"s == unnamedblk1__DOT__unnamedblk2__DOT__right) 
                         | ("RO"s == unnamedblk1__DOT__unnamedblk2__DOT__right))) {
                        read_from = unnamedblk1__DOT__j;
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[24930]);
                    }
                    unnamedblk1__DOT__j = ((IData)(1U) 
                                           + unnamedblk1__DOT__j);
                    ++(vlSymsp->__Vcoverage[24934]);
                }
                __Vlabel1: ;
            }
            if (VL_GTS_III(32, 0U, read_from)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_mem_shared_access_seq"s, __VlefCall_12__uvm_report_enabled);
                if ((0U != __VlefCall_12__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 263)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Memory \"%@\" cannot be read from any maps or backdoor. Shared access not verified.",0,
                                                                                -1,
                                                                                &(__VlefCall_13__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000107U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24935]);
                } else {
                    ++(vlSymsp->__Vcoverage[24936]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24938]);
            }
            if (("RO"s == unnamedblk1__DOT__unnamedblk2__DOT__right)) {
                ++(vlSymsp->__Vcoverage[24931]);
            }
            if (("RW"s == unnamedblk1__DOT__unnamedblk2__DOT__right)) {
                ++(vlSymsp->__Vcoverage[24932]);
            }
            if ((1U & ((~ ("RW"s == unnamedblk1__DOT__unnamedblk2__DOT__right)) 
                       & (~ ("RO"s == unnamedblk1__DOT__unnamedblk2__DOT__right))))) {
                ++(vlSymsp->__Vcoverage[24933]);
            }
            ++(vlSymsp->__Vcoverage[24939]);
        } else {
            ++(vlSymsp->__Vcoverage[24940]);
        }
        unnamedblk3__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__j, maps.size())) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_shared_access_seq"s, __VlefCall_14__uvm_report_enabled);
            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 272)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 272)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Writing shared memory \"%@\" via map \"%@\".",0,
                                                                                -1,
                                                                                &(__VlefCall_15__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_16__get_full_name)) , 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000110U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24941]);
            } else {
                ++(vlSymsp->__Vcoverage[24942]);
            }
            unnamedblk3__DOT__unnamedblk4__DOT__offset = 0U;
            unnamedblk3__DOT__unnamedblk4__DOT__offset = 0U;
            while (true) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 275)->__VnoInFunc_get_size(vlSymsp, __VlefCall_17__get_size);
                if (!(((QData)((IData)(unnamedblk3__DOT__unnamedblk4__DOT__offset)) 
                       < __VlefCall_17__get_size))) break;
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status = 0U;
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev = 0ULL;
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 280)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_18__get_backdoor);
                if ((VlNull{} != __VlefCall_18__get_backdoor)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 281)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__27__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_peek__27__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_peek__27__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev 
                        = __Vtask_peek__27__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_19__uvm_report_enabled);
                        if ((0U != __VlefCall_19__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 284)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                            __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading initial value of \"%@\"[%0d] through backdoor.",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__VlefCall_20__get_full_name),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000011cU, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[24943]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24944]);
                        }
                        ++(vlSymsp->__Vcoverage[24945]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24946]);
                    }
                    ++(vlSymsp->__Vcoverage[24951]);
                } else {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 288)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__31__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_read__31__value, 0U, maps.at(read_from), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_read__31__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev 
                        = __Vtask_read__31__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_21__uvm_report_enabled);
                        if ((0U != __VlefCall_21__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 292)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                            VL_NULL_CHECK(maps.at(read_from), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 292)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                            __Vtemp_2 = Vtb_rng___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading initial value of \"%@\"[%0d] through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__VlefCall_22__get_full_name),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                                                -1,
                                                                                &(__VlefCall_23__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000124U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[24947]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24948]);
                        }
                        ++(vlSymsp->__Vcoverage[24949]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24950]);
                    }
                    ++(vlSymsp->__Vcoverage[24952]);
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v 
                    = VL_RANDOM_Q();
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 300)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__36__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v, 0U, maps.at(unnamedblk3__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                    = __Vtask_write__36__status;
                if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_24__uvm_report_enabled);
                    if ((0U != __VlefCall_24__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 303)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 303)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                        __Vtemp_3 = Vtb_rng___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@\"[%0d] through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__VlefCall_25__get_full_name),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                                                -1,
                                                                                &(__VlefCall_26__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000012fU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24953]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24954]);
                    }
                    ++(vlSymsp->__Vcoverage[24955]);
                } else {
                    ++(vlSymsp->__Vcoverage[24956]);
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k, maps.size())) {
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual = 0ULL;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0ULL;
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 310)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__41__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_read__41__value, 0U, maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_read__41__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual 
                        = __Vtask_read__41__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_27__uvm_report_enabled);
                        if ((0U != __VlefCall_27__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 313)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_28__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 313)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                            __Vtemp_4 = Vtb_rng___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading %@[%0d] through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__VlefCall_28__get_full_name),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                                                -1,
                                                                                &(__VlefCall_29__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000139U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[24957]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24958]);
                        }
                        ++(vlSymsp->__Vcoverage[24959]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24960]);
                    }
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                        = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v;
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 318)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__j), __VlefCall_30__get_access);
                    if (("RO"s == __VlefCall_30__get_access)) {
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                            = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev;
                        ++(vlSymsp->__Vcoverage[24961]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24962]);
                    }
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 321)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), __VlefCall_31__get_access);
                    if (("WO"s == __VlefCall_31__get_access)) {
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0ULL;
                        ++(vlSymsp->__Vcoverage[24963]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24964]);
                    }
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 325)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_32__get_n_bits);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                        = (unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_32__get_n_bits) 
                              - 1ULL));
                    if ((unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual 
                         != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __VlefCall_33__uvm_report_enabled);
                        if ((0U != __VlefCall_33__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_34__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_35__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_36__get_full_name);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("%@[%0d] through map \"%@\" is 'h%x instead of 'h%x after writing 'h%x via map \"%@\" over 'h%x.",0,
                                                                                -1,
                                                                                &(__VlefCall_34__get_full_name),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                                                -1,
                                                                                &(__VlefCall_35__get_full_name),
                                                                                64,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual,
                                                                                64,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp,
                                                                                64,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v,
                                                                                -1,
                                                                                &(__VlefCall_36__get_full_name),
                                                                                64,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000149U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[24965]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24966]);
                        }
                        ++(vlSymsp->__Vcoverage[24967]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24968]);
                    }
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k 
                        = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k);
                    ++(vlSymsp->__Vcoverage[24969]);
                }
                unnamedblk3__DOT__unnamedblk4__DOT__offset 
                    = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__offset);
                ++(vlSymsp->__Vcoverage[24970]);
            }
            unnamedblk3__DOT__j = ((IData)(1U) + unnamedblk3__DOT__j);
            ++(vlSymsp->__Vcoverage[24971]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24972]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::~Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
