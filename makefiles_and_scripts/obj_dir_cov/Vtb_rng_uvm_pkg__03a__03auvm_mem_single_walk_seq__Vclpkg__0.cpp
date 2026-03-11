// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi186> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi186__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24619]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_single_walk_seq"s;
    ++(vlSymsp->__Vcoverage[24624]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi186> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi186__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24620]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq, vlProcess, vlSymsp, "uvm_mem_walk_seq"s);
        ++(vlSymsp->__Vcoverage[24621]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24622]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24623]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_single_walk_seq"s;
    ++(vlSymsp->__Vcoverage[24625]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24626]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_n_bits__12__Vfuncout;
    __Vtask_get_n_bits__12__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__20__status;
    __Vtask_write__20__status = 0;
    IData/*31:0*/ __Vtask_read__25__status;
    __Vtask_read__25__status = 0;
    QData/*63:0*/ __Vtask_read__25__value;
    __Vtask_read__25__value = 0;
    IData/*31:0*/ __Vtask_write__33__status;
    __Vtask_write__33__status = 0;
    IData/*31:0*/ __Vtask_read__39__status;
    __Vtask_read__39__status = 0;
    QData/*63:0*/ __Vtask_read__39__value;
    __Vtask_read__39__value = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_29__get_full_name;
    IData/*31:0*/ __VlefCall_28__uvm_report_enabled;
    std::string __VlefCall_27__get_full_name;
    std::string __VlefCall_26__get_full_name;
    IData/*31:0*/ __VlefCall_25__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_24__get_size;
    std::string __VlefCall_23__get_full_name;
    std::string __VlefCall_22__get_full_name;
    IData/*31:0*/ __VlefCall_21__uvm_report_enabled;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_12__get_size;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_access;
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
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__status;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__val;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__exp;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> maps;
    IData/*31:0*/ n_bits;
    {
        maps.clear();
        n_bits = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, "No memory specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000061U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24627]);
            } else {
                ++(vlSymsp->__Vcoverage[24628]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24630]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 102)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 104)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 106)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_MEM_WALK_TEST"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24632]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 110)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__12__Vfuncout);
        n_bits = __Vtask_get_n_bits__12__Vfuncout;
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 113)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
            {
                unnamedblk1__DOT__unnamedblk2__DOT__status = 0U;
                unnamedblk1__DOT__unnamedblk2__DOT__val = 0ULL;
                unnamedblk1__DOT__unnamedblk2__DOT__exp = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 121)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), __VlefCall_8__get_access);
                if (("RW"s != __VlefCall_8__get_access)) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[24634]);
                }
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_walk_seq"s, __VlefCall_9__uvm_report_enabled);
                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 124)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 124)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Walking memory %@ in map \"%@\"...",0,
                                                                                -1,
                                                                                &(__VlefCall_10__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_11__get_full_name)) , 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x0000007cU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24635]);
                } else {
                    ++(vlSymsp->__Vcoverage[24636]);
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
                while (true) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 131)->__VnoInFunc_get_size(vlSymsp, __VlefCall_12__get_size);
                    if (!(((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                           < __VlefCall_12__get_size))) break;
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 132)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__20__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), 
                                                                                (~ 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)), 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk1__DOT__unnamedblk2__DOT__status 
                        = __Vtask_write__20__status;
                    if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_13__uvm_report_enabled);
                        if ((0U != __VlefCall_13__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 136)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                            VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 136)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                            __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__VlefCall_14__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__VlefCall_15__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000088U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[24637]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24638]);
                        }
                        ++(vlSymsp->__Vcoverage[24639]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24640]);
                    }
                    if (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) {
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 140)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__25__status, 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), __Vtask_read__25__value, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_read__25__status;
                        unnamedblk1__DOT__unnamedblk2__DOT__val 
                            = __Vtask_read__25__value;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_16__uvm_report_enabled);
                            if ((0U != __VlefCall_16__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 143)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                                VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 143)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                                __Vtemp_2 = Vtb_rng___024unit::__Venumtab_enum_name83
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__VlefCall_17__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__VlefCall_18__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x0000008fU, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[24641]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24642]);
                            }
                            ++(vlSymsp->__Vcoverage[24647]);
                        } else {
                            unnamedblk1__DOT__unnamedblk2__DOT__exp 
                                = ((~ ((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                                       - 1ULL)) & (
                                                   VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                                   - 1ULL));
                            if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                                 != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_19__uvm_report_enabled);
                                if ((0U != __VlefCall_19__uvm_report_enabled)) {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 149)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("\"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                                                -1,
                                                                                &(__VlefCall_20__get_full_name),
                                                                                32,
                                                                                (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                                                                                - (IData)(1U)),
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__exp) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000095U, ""s, 1U);
                                    ++(vlSymsp->__Vcoverage[24643]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[24644]);
                                }
                                ++(vlSymsp->__Vcoverage[24645]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24646]);
                            }
                            ++(vlSymsp->__Vcoverage[24648]);
                        }
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 154)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__33__status, 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_write__33__status;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_21__uvm_report_enabled);
                            if ((0U != __VlefCall_21__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 157)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                                VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 157)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                                __Vtemp_3 = Vtb_rng___024unit::__Venumtab_enum_name83
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__VlefCall_22__get_full_name),
                                                                                32,
                                                                                (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                                                                                - (IData)(1U)),
                                                                                -1,
                                                                                &(__VlefCall_23__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x0000009dU, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[24649]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24650]);
                            }
                            ++(vlSymsp->__Vcoverage[24651]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24652]);
                        }
                        ++(vlSymsp->__Vcoverage[24653]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24654]);
                    }
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 161)->__VnoInFunc_get_size(vlSymsp, __VlefCall_24__get_size);
                    if (((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                         == (__VlefCall_24__get_size 
                             - 1ULL))) {
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 162)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__39__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_read__39__value, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_read__39__status;
                        unnamedblk1__DOT__unnamedblk2__DOT__val 
                            = __Vtask_read__39__value;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_25__uvm_report_enabled);
                            if ((0U != __VlefCall_25__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 165)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                                VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 165)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                                __Vtemp_4 = Vtb_rng___024unit::__Venumtab_enum_name83
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__VlefCall_26__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__VlefCall_27__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x000000a5U, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[24655]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24656]);
                            }
                            ++(vlSymsp->__Vcoverage[24661]);
                        } else {
                            unnamedblk1__DOT__unnamedblk2__DOT__exp 
                                = ((~ (QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k))) 
                                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                      - 1ULL));
                            if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                                 != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __VlefCall_28__uvm_report_enabled);
                                if ((0U != __VlefCall_28__uvm_report_enabled)) {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 171)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("\"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                                                -1,
                                                                                &(__VlefCall_29__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__exp) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x000000abU, ""s, 1U);
                                    ++(vlSymsp->__Vcoverage[24657]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[24658]);
                                }
                                ++(vlSymsp->__Vcoverage[24659]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24660]);
                            }
                            ++(vlSymsp->__Vcoverage[24662]);
                        }
                        ++(vlSymsp->__Vcoverage[24663]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24664]);
                    }
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k);
                    ++(vlSymsp->__Vcoverage[24665]);
                }
                __Vlabel1: ;
            }
            unnamedblk1__DOT__j = ((IData)(1U) + unnamedblk1__DOT__j);
            ++(vlSymsp->__Vcoverage[24666]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24667]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::~Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
