// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi188> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi188__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24689]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_single_access_seq"s;
    ++(vlSymsp->__Vcoverage[24694]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi188> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi188__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24690]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq, vlProcess, vlSymsp, "uam_mem_single_access_seq"s);
        ++(vlSymsp->__Vcoverage[24691]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24692]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24693]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_single_access_seq"s;
    ++(vlSymsp->__Vcoverage[24695]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24696]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_n_bits__17__Vfuncout;
    __Vtask_get_n_bits__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__25__status;
    __Vtask_peek__25__status = 0;
    QData/*63:0*/ __Vtask_peek__25__value;
    __Vtask_peek__25__value = 0;
    IData/*31:0*/ __Vtask_write__29__status;
    __Vtask_write__29__status = 0;
    IData/*31:0*/ __Vtask_peek__34__status;
    __Vtask_peek__34__status = 0;
    QData/*63:0*/ __Vtask_peek__34__value;
    __Vtask_peek__34__value = 0;
    IData/*31:0*/ __Vtask_poke__41__status;
    __Vtask_poke__41__status = 0;
    IData/*31:0*/ __Vtask_read__45__status;
    __Vtask_read__45__status = 0;
    QData/*63:0*/ __Vtask_read__45__value;
    __Vtask_read__45__value = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_34__get_full_name;
    IData/*31:0*/ __VlefCall_33__uvm_report_enabled;
    std::string __VlefCall_32__get_full_name;
    IData/*31:0*/ __VlefCall_31__uvm_report_enabled;
    std::string __VlefCall_30__get_full_name;
    std::string __VlefCall_29__get_full_name;
    IData/*31:0*/ __VlefCall_28__uvm_report_enabled;
    std::string __VlefCall_27__get_full_name;
    IData/*31:0*/ __VlefCall_26__uvm_report_enabled;
    std::string __VlefCall_25__get_full_name;
    IData/*31:0*/ __VlefCall_24__uvm_report_enabled;
    std::string __VlefCall_23__get_full_name;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_full_name;
    IData/*31:0*/ __VlefCall_17__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_16__get_size;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    std::string __VlefCall_12__get_full_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_10;
    CData/*0:0*/ __VlefCall_9__has_hdl_path;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_8__get_backdoor;
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
    std::string mode;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> maps;
    IData/*31:0*/ n_bits;
    {
        mode = ""s;
        maps.clear();
        n_bits = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000004bU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24697]);
            } else {
                ++(vlSymsp->__Vcoverage[24698]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24700]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 80)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 82)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 84)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_6__get_full_name)), "NO_MEM_ACCESS_TEST"s, 0U, __VlefCall_7__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_7__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24702]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 89)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_8__get_backdoor);
        __VlefLogAnd_10 = (VlNull{} == __VlefCall_8__get_backdoor);
        if (__VlefLogAnd_10) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 89)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_9__has_hdl_path);
            __VlefLogAnd_10 = (1U & (~ (IData)(__VlefCall_9__has_hdl_path)));
        }
        if (__VlefLogAnd_10) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_11__uvm_report_enabled);
            if ((0U != __VlefCall_11__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 91)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_12__get_full_name), "' does not have a backdoor mechanism available"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000005bU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24703]);
            } else {
                ++(vlSymsp->__Vcoverage[24704]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24706]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 95)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__17__Vfuncout);
        n_bits = __Vtask_get_n_bits__17__Vfuncout;
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 98)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__status = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__val = 0ULL;
            unnamedblk1__DOT__unnamedblk2__DOT__exp = 0ULL;
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_access_seq"s, __VlefCall_13__uvm_report_enabled);
            if ((0U != __VlefCall_13__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 107)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 107)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_access_seq"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Verifying access of memory '"s, __VlefCall_14__get_full_name), "' in map '"s), __VlefCall_15__get_full_name), "' ..."s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000006bU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24707]);
            } else {
                ++(vlSymsp->__Vcoverage[24708]);
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 109)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), mode);
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
            while (true) {
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 116)->__VnoInFunc_get_size(vlSymsp, __VlefCall_16__get_size);
                if (!(((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                       < __VlefCall_16__get_size))) break;
                unnamedblk1__DOT__unnamedblk2__DOT__val 
                    = ((QData)((IData)(VL_RANDOM_I())) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                          - 1ULL));
                if (VL_LTS_III(32, 0x00000020U, n_bits)) {
                    unnamedblk1__DOT__unnamedblk2__DOT__val 
                        = (VL_SHIFTL_QQI(64,64,32, unnamedblk1__DOT__unnamedblk2__DOT__val, 0x00000020U) 
                           | (QData)((IData)(VL_RANDOM_I())));
                    ++(vlSymsp->__Vcoverage[24709]);
                } else {
                    ++(vlSymsp->__Vcoverage[24710]);
                }
                if (("RO"s == mode)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 121)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__25__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_peek__25__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk1__DOT__unnamedblk2__DOT__status 
                        = __Vtask_peek__25__status;
                    unnamedblk1__DOT__unnamedblk2__DOT__exp 
                        = __Vtask_peek__25__value;
                    if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_17__uvm_report_enabled);
                        if ((0U != __VlefCall_17__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 124)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                            __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through backdoor.",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__VlefCall_18__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000007cU, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[24711]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24712]);
                        }
                        ++(vlSymsp->__Vcoverage[24713]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24714]);
                    }
                    ++(vlSymsp->__Vcoverage[24715]);
                } else {
                    unnamedblk1__DOT__unnamedblk2__DOT__exp 
                        = unnamedblk1__DOT__unnamedblk2__DOT__val;
                    ++(vlSymsp->__Vcoverage[24716]);
                }
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 129)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__29__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), unnamedblk1__DOT__unnamedblk2__DOT__val, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk1__DOT__unnamedblk2__DOT__status 
                    = __Vtask_write__29__status;
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_19__uvm_report_enabled);
                    if ((0U != __VlefCall_19__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 132)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 132)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                        __Vtemp_2 = Vtb_rng___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__VlefCall_20__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__VlefCall_21__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000084U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24717]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24718]);
                    }
                    ++(vlSymsp->__Vcoverage[24719]);
                } else {
                    ++(vlSymsp->__Vcoverage[24720]);
                }
                co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                        vlProcess, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 
                                                        134);
                unnamedblk1__DOT__unnamedblk2__DOT__val = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 137)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__34__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_peek__34__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                unnamedblk1__DOT__unnamedblk2__DOT__status 
                    = __Vtask_peek__34__status;
                unnamedblk1__DOT__unnamedblk2__DOT__val 
                    = __Vtask_peek__34__value;
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_22__uvm_report_enabled);
                    if ((0U != __VlefCall_22__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 140)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                        __Vtemp_3 = Vtb_rng___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through backdoor.",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__VlefCall_23__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000008cU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24721]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24722]);
                    }
                    ++(vlSymsp->__Vcoverage[24727]);
                } else {
                    if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                         != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_24__uvm_report_enabled);
                        if ((0U != __VlefCall_24__uvm_report_enabled)) {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 145)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Backdoor \"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                                                -1,
                                                                                &(__VlefCall_25__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__exp) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000091U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[24723]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24724]);
                        }
                        ++(vlSymsp->__Vcoverage[24725]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24726]);
                    }
                    ++(vlSymsp->__Vcoverage[24728]);
                }
                unnamedblk1__DOT__unnamedblk2__DOT__exp 
                    = ((~ unnamedblk1__DOT__unnamedblk2__DOT__exp) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                          - 1ULL));
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 150)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__41__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), unnamedblk1__DOT__unnamedblk2__DOT__exp, ""s, VlNull{}, VlNull{}, ""s, 0U);
                unnamedblk1__DOT__unnamedblk2__DOT__status 
                    = __Vtask_poke__41__status;
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_26__uvm_report_enabled);
                    if ((0U != __VlefCall_26__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 153)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                        __Vtemp_4 = Vtb_rng___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d-1]\" through backdoor.",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__VlefCall_27__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000099U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24729]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24730]);
                    }
                    ++(vlSymsp->__Vcoverage[24731]);
                } else {
                    ++(vlSymsp->__Vcoverage[24732]);
                }
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 156)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__45__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_read__45__value, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk1__DOT__unnamedblk2__DOT__status 
                    = __Vtask_read__45__status;
                unnamedblk1__DOT__unnamedblk2__DOT__val 
                    = __Vtask_read__45__value;
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_28__uvm_report_enabled);
                    if ((0U != __VlefCall_28__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 159)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 159)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_30__get_full_name);
                        __Vtemp_5 = Vtb_rng___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_5),
                                                                                -1,
                                                                                &(__VlefCall_29__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__VlefCall_30__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000009fU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24733]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24734]);
                    }
                    ++(vlSymsp->__Vcoverage[24745]);
                } else {
                    if (("WO"s == mode)) {
                        if ((0ULL != unnamedblk1__DOT__unnamedblk2__DOT__val)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_31__uvm_report_enabled);
                            if ((0U != __VlefCall_31__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 165)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Front door \"%@[%0d]\" read back as 'h%x instead of 'h00000000.",0,
                                                                                -1,
                                                                                &(__VlefCall_32__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000a5U, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[24735]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24736]);
                            }
                            ++(vlSymsp->__Vcoverage[24737]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24738]);
                        }
                        ++(vlSymsp->__Vcoverage[24743]);
                    } else {
                        if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                             != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __VlefCall_33__uvm_report_enabled);
                            if ((0U != __VlefCall_33__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 171)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_34__get_full_name);
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Front door \"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                                                -1,
                                                                                &(__VlefCall_34__get_full_name),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__exp) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000abU, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[24739]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24740]);
                            }
                            ++(vlSymsp->__Vcoverage[24741]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24742]);
                        }
                        ++(vlSymsp->__Vcoverage[24744]);
                    }
                    ++(vlSymsp->__Vcoverage[24746]);
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k);
                ++(vlSymsp->__Vcoverage[24747]);
            }
            unnamedblk1__DOT__j = ((IData)(1U) + unnamedblk1__DOT__j);
            ++(vlSymsp->__Vcoverage[24748]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24749]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::~Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
