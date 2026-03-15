// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi184> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi184__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[24549]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_single_bit_bash_seq"s;
    ++(vlSymsp->__Vcoverage[24554]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi184> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi184__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[24550]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, "uvm_reg_single_bit_bash_seq"s);
        ++(vlSymsp->__Vcoverage[24551]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[24552]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[24553]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_single_bit_bash_seq"s;
    ++(vlSymsp->__Vcoverage[24555]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[24556]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_lsb_pos__15__Vfuncout;
    __Vtask_get_lsb_pos__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__16__Vfuncout;
    __Vtask_get_n_bits__16__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_compare;
    IData/*31:0*/ __VlefCall_6__get_n_bytes;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_4__get_by_name;
    std::string __VlefCall_3__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz30> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__j;
    unnamedblk1__DOT__j = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> fields;
    VlUnpacked<std::string, 64> mode;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> maps;
    QData/*63:0*/ dc_mask;
    IData/*31:0*/ n_bits;
    std::string field_access;
    {
        fields.clear();
        for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
            mode[__Vi0].clear();
        }
        maps.clear();
        dc_mask = 0ULL;
        n_bits = 0U;
        field_access = ""s;
        if ((VlNull{} == this->__PVT__rg)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, "No register specified to run sequence on"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x00000052U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24557]);
            } else {
                ++(vlSymsp->__Vcoverage[24558]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24560]);
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 87)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 89)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_REG_BIT_BASH_TEST"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24562]);
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 93)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_6__get_n_bytes);
        n_bits = VL_SHIFTL_III(32,32,32, __VlefCall_6__get_n_bytes, 3U);
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 96)->__VnoInFunc_get_fields(vlSymsp, fields);
        VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 99)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__next_lsb = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__next_lsb = 0U;
            dc_mask = 0ULL;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k, fields.size())) {
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb = 0U;
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w = 0U;
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc = 0U;
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 112)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), field_access);
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 113)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_7__get_compare);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc 
                    = (0U == __VlefCall_7__get_compare);
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 114)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__15__Vfuncout);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb 
                    = __Vtask_get_lsb_pos__15__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 115)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__16__Vfuncout);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w 
                    = __Vtask_get_n_bits__16__Vfuncout;
                if (((((("WO"s == field_access) || 
                        ("WOC"s == field_access)) || 
                       ("WOS"s == field_access)) || 
                      ("WO1"s == field_access)) || 
                     ("NOACCESS"s == field_access))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc = 1U;
                    ++(vlSymsp->__Vcoverage[24563]);
                }
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__next_lsb, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb)) {
                    __Vincrement1 = unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
                    unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                    mode[(0x0000003fU & __Vincrement1)] = "RO"s;
                    ++(vlSymsp->__Vcoverage[24564]);
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    mode[(0x0000003fU & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)] 
                        = field_access;
                    dc_mask = (((~ (1ULL << (0x0000003fU 
                                             & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb))) 
                                & dc_mask) | ((QData)((IData)(
                                                              (1U 
                                                               & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc))) 
                                              << (0x0000003fU 
                                                  & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)));
                    unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                    ++(vlSymsp->__Vcoverage[24565]);
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k);
                ++(vlSymsp->__Vcoverage[24566]);
            }
            while (VL_GTS_III(32, 0x00000040U, unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)) {
                __Vincrement2 = unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
                unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                mode[(0x0000003fU & __Vincrement2)] = "RO"s;
                ++(vlSymsp->__Vcoverage[24567]);
            }
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_bit_bash_seq"s, __VlefCall_8__uvm_report_enabled);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 135)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 135)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Verifying bits in register %@ in map \"%@\"...",0,
                                                                                -1,
                                                                                &(__VlefCall_9__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_10__get_full_name)) , 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x00000087U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24568]);
            } else {
                ++(vlSymsp->__Vcoverage[24569]);
            }
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k, n_bits)) {
                {
                    if ((1U & (IData)((dc_mask >> (0x0000003fU 
                                                   & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k))))) {
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[24571]);
                    }
                    co_await this->__VnoInFunc_bash_kth_bit(vlProcess, vlSymsp, this->__PVT__rg, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k, 
                                                            VL_CVT_PACK_STR_NN(mode
                                                                               [
                                                                               (0x0000003fU 
                                                                                & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k)]), maps.at(unnamedblk1__DOT__j), dc_mask);
                    __Vlabel1: ;
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k);
                ++(vlSymsp->__Vcoverage[24572]);
            }
            unnamedblk1__DOT__j = ((IData)(1U) + unnamedblk1__DOT__j);
            ++(vlSymsp->__Vcoverage[24573]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24574]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ k, std::string mode, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ dc_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__25__status;
    __Vtask_write__25__status = 0;
    IData/*31:0*/ __Vtask_read__31__status;
    __Vtask_read__31__status = 0;
    QData/*63:0*/ __Vtask_read__31__value;
    __Vtask_read__31__value = 0;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_4__get;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ status;
    QData/*63:0*/ val;
    QData/*63:0*/ exp;
    QData/*63:0*/ v;
    CData/*0:0*/ bit_val;
    status = 0U;
    val = 0ULL;
    exp = 0ULL;
    v = 0ULL;
    bit_val = 0U;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "uvm_reg_bit_bash_seq"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("...Bashing %@ bit #%0d",0,
                                                                                -1,
                                                                                &(mode),
                                                                                32,
                                                                                k) , 0x0000012cU, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x0000009eU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[24575]);
    } else {
        ++(vlSymsp->__Vcoverage[24576]);
    }
    unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 161)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, val);
        v = val;
        exp = val;
        val = (((~ (1ULL << (0x0000003fU & k))) & val) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (val 
                                                    >> 
                                                    (0x0000003fU 
                                                     & k))))))) 
                  << (0x0000003fU & k)));
        bit_val = (1U & (IData)((val >> (0x0000003fU 
                                         & k))));
        co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 167)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__25__status, val, 0U, map, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_write__25__status;
        if ((0U != status)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 170)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 170)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtemp_2 = Vtb_rng___024unit::__Venumtab_enum_name83
                    [(3U & status)];
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing to register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__VlefCall_2__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_3__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000aaU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24579]);
            } else {
                ++(vlSymsp->__Vcoverage[24580]);
            }
            ++(vlSymsp->__Vcoverage[24581]);
        } else {
            ++(vlSymsp->__Vcoverage[24582]);
        }
        VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 173)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_4__get);
        exp = (__VlefCall_4__get & (~ dc_mask));
        co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 174)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__31__status, __Vtask_read__31__value, 0U, map, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_read__31__status;
        val = __Vtask_read__31__value;
        if ((0U != status)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 177)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 177)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtemp_3 = Vtb_rng___024unit::__Venumtab_enum_name83
                    [(3U & status)];
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__VlefCall_6__get_full_name),
                                                                                -1,
                                                                                &(__VlefCall_7__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000b1U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24583]);
            } else {
                ++(vlSymsp->__Vcoverage[24584]);
            }
            ++(vlSymsp->__Vcoverage[24585]);
        } else {
            ++(vlSymsp->__Vcoverage[24586]);
        }
        val = (val & (~ dc_mask));
        if ((val != exp)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_8__uvm_report_enabled);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 183)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Writing a %b in bit #%0d of register \"%@\" with initial value 'h%x yielded 'h%x instead of 'h%x",0,
                                                                                1,
                                                                                bit_val,
                                                                                32,
                                                                                k,
                                                                                -1,
                                                                                &(__VlefCall_9__get_full_name),
                                                                                64,
                                                                                v,
                                                                                64,
                                                                                val,
                                                                                64,
                                                                                exp) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000b7U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[24587]);
            } else {
                ++(vlSymsp->__Vcoverage[24588]);
            }
            ++(vlSymsp->__Vcoverage[24589]);
        } else {
            ++(vlSymsp->__Vcoverage[24590]);
        }
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (IData)(1U));
        ++(vlSymsp->__Vcoverage[24591]);
    }
    if ((1U & (~ (IData)((val >> (0x0000003fU & k)))))) {
        ++(vlSymsp->__Vcoverage[24577]);
    }
    if ((1U & (IData)((val >> (0x0000003fU & k))))) {
        ++(vlSymsp->__Vcoverage[24578]);
    }
    ++(vlSymsp->__Vcoverage[24592]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
