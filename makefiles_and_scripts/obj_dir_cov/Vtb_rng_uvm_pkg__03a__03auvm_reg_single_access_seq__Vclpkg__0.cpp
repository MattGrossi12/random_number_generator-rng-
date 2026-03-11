// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi190> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi190__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24775]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_single_access_seq"s;
    ++(vlSymsp->__Vcoverage[24780]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi190> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi190__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24776]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq, vlProcess, vlSymsp, "uvm_reg_single_access_seq"s);
        ++(vlSymsp->__Vcoverage[24777]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24778]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24779]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_single_access_seq"s;
    ++(vlSymsp->__Vcoverage[24781]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24782]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__32__status;
    __Vtask_write__32__status = 0;
    IData/*31:0*/ __Vtask_mirror__38__status;
    __Vtask_mirror__38__status = 0;
    IData/*31:0*/ __Vtask_write__42__status;
    __Vtask_write__42__status = 0;
    IData/*31:0*/ __Vtask_mirror__46__status;
    __Vtask_mirror__46__status = 0;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_32__get_full_name;
    std::string __VlefCall_31__get_full_name;
    IData/*31:0*/ __VlefCall_30__uvm_report_enabled;
    std::string __VlefCall_29__get_full_name;
    IData/*31:0*/ __VlefCall_28__uvm_report_enabled;
    std::string __VlefCall_27__get_full_name;
    IData/*31:0*/ __VlefCall_26__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_25__backdoor;
    std::string __VlefCall_24__get_full_name;
    std::string __VlefCall_23__get_full_name;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_access;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_12__is_known_access;
    std::string __VlefCall_11__get_access;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_8;
    CData/*0:0*/ __VlefCall_7__has_hdl_path;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_6__get_backdoor;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_4__get_by_name;
    std::string __VlefCall_3__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> unnamedblk1__DOT__fields;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__k = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    IData/*31:0*/ unnamedblk5__DOT__j;
    unnamedblk5__DOT__j = 0;
    IData/*31:0*/ unnamedblk5__DOT__unnamedblk6__DOT__status;
    QData/*63:0*/ unnamedblk5__DOT__unnamedblk6__DOT__v;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        maps.clear();
        if ((VlNull{} == this->__PVT__rg)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000052U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24783]);
            } else {
                ++(vlSymsp->__Vcoverage[24784]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24786]);
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 87)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 89)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_REG_ACCESS_TEST"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24788]);
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 94)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_6__get_backdoor);
        __VlefLogAnd_8 = (VlNull{} == __VlefCall_6__get_backdoor);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 94)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_7__has_hdl_path);
            __VlefLogAnd_8 = (1U & (~ (IData)(__VlefCall_7__has_hdl_path)));
        }
        if (__VlefLogAnd_8) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_9__uvm_report_enabled);
            if ((0U != __VlefCall_9__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 96)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_10__get_full_name), "' does not have a backdoor mechanism available"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000060U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24789]);
            } else {
                ++(vlSymsp->__Vcoverage[24790]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24792]);
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 101)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__fields.clear();
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 107)->__VnoInFunc_get_fields(vlSymsp, unnamedblk1__DOT__fields);
        unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__k, maps.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j, unnamedblk1__DOT__fields.size())) {
                VL_NULL_CHECK(unnamedblk1__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 112)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__unnamedblk2__DOT__k), __VlefCall_11__get_access);
                if (("RO"s == __VlefCall_11__get_access)) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro);
                    ++(vlSymsp->__Vcoverage[24793]);
                } else {
                    ++(vlSymsp->__Vcoverage[24794]);
                }
                VL_NULL_CHECK(unnamedblk1__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 115)->__VnoInFunc_is_known_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__unnamedblk2__DOT__k), __VlefCall_12__is_known_access);
                if (__VlefCall_12__is_known_access) {
                    ++(vlSymsp->__Vcoverage[24798]);
                } else {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_reg_access_seq"s, __VlefCall_13__uvm_report_enabled);
                    if ((0U != __VlefCall_13__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 118)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        VL_NULL_CHECK(unnamedblk1__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 118)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__unnamedblk2__DOT__k), __VlefCall_15__get_access);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                             VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_14__get_full_name), "' has field with unknown access type '"s), __VlefCall_15__get_access), "', skipping"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000076U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24795]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24796]);
                    }
                    goto __Vlabel0;
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
                ++(vlSymsp->__Vcoverage[24799]);
            }
            if ((unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro 
                 == unnamedblk1__DOT__fields.size())) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_reg_access_seq"s, __VlefCall_16__uvm_report_enabled);
                if ((0U != __VlefCall_16__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 124)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk1__DOT__unnamedblk2__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 124)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_17__get_full_name), "' has only RO fields in map "s), __VlefCall_18__get_full_name), ", skipping"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000007cU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24800]);
                } else {
                    ++(vlSymsp->__Vcoverage[24801]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24803]);
            }
            unnamedblk1__DOT__unnamedblk2__DOT__k = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__k);
            ++(vlSymsp->__Vcoverage[24804]);
        }
        unnamedblk5__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__j, maps.size())) {
            unnamedblk5__DOT__unnamedblk6__DOT__status = 0U;
            unnamedblk5__DOT__unnamedblk6__DOT__v = 0ULL;
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_access_seq"s, __VlefCall_19__uvm_report_enabled);
            if ((0U != __VlefCall_19__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 141)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 141)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Verifying access of register '"s, __VlefCall_20__get_full_name), "' in map '"s), __VlefCall_21__get_full_name), "' ..."s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000008dU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24805]);
            } else {
                ++(vlSymsp->__Vcoverage[24806]);
            }
            VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 143)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, unnamedblk5__DOT__unnamedblk6__DOT__v);
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 145)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__32__status, 
                                                                                (~ unnamedblk5__DOT__unnamedblk6__DOT__v), 0U, maps.at(unnamedblk5__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__status 
                = __Vtask_write__32__status;
            if ((0U != unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_22__uvm_report_enabled);
                if ((0U != __VlefCall_22__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 150)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 150)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, Vtb_rng___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk5__DOT__unnamedblk6__DOT__status)]), "' when writing '"s), __VlefCall_23__get_full_name), "' through map '"s), __VlefCall_24__get_full_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000096U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24807]);
                } else {
                    ++(vlSymsp->__Vcoverage[24808]);
                }
                ++(vlSymsp->__Vcoverage[24809]);
            } else {
                ++(vlSymsp->__Vcoverage[24810]);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 
                                                    152);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_25__backdoor);
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 154)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__38__status, 1U, 1U, __VlefCall_25__backdoor, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__status 
                = __Vtask_mirror__38__status;
            if ((0U != unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_26__uvm_report_enabled);
                if ((0U != __VlefCall_26__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 158)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, Vtb_rng___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk5__DOT__unnamedblk6__DOT__status)]), "' when reading reset value of register '"s), __VlefCall_27__get_full_name), "' through backdoor"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000009eU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24811]);
                } else {
                    ++(vlSymsp->__Vcoverage[24812]);
                }
                ++(vlSymsp->__Vcoverage[24813]);
            } else {
                ++(vlSymsp->__Vcoverage[24814]);
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 161)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__42__status, unnamedblk5__DOT__unnamedblk6__DOT__v, 1U, maps.at(unnamedblk5__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__status 
                = __Vtask_write__42__status;
            if ((0U != unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_28__uvm_report_enabled);
                if ((0U != __VlefCall_28__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 165)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, Vtb_rng___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk5__DOT__unnamedblk6__DOT__status)]), "' when writing '"s), __VlefCall_29__get_full_name), "' through backdoor"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x000000a5U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24815]);
                } else {
                    ++(vlSymsp->__Vcoverage[24816]);
                }
                ++(vlSymsp->__Vcoverage[24817]);
            } else {
                ++(vlSymsp->__Vcoverage[24818]);
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 168)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__46__status, 1U, 0U, maps.at(unnamedblk5__DOT__j), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__status 
                = __Vtask_mirror__46__status;
            if ((0U != unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_30__uvm_report_enabled);
                if ((0U != __VlefCall_30__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 173)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_31__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 173)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, Vtb_rng___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk5__DOT__unnamedblk6__DOT__status)]), "' when reading reset value of register '"s), __VlefCall_31__get_full_name), "' through map '"s), __VlefCall_32__get_full_name), "'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x000000adU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[24819]);
                } else {
                    ++(vlSymsp->__Vcoverage[24820]);
                }
                ++(vlSymsp->__Vcoverage[24821]);
            } else {
                ++(vlSymsp->__Vcoverage[24822]);
            }
            unnamedblk5__DOT__j = ((IData)(1U) + unnamedblk5__DOT__j);
            ++(vlSymsp->__Vcoverage[24823]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24824]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
