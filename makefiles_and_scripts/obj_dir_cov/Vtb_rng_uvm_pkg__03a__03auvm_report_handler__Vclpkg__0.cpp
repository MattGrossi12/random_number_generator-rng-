// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi6> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[15509]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_report_handler"s;
    ++(vlSymsp->__Vcoverage[15514]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_format_action(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_format_action\n"); );
    // Body
    std::string s;
    if ((0U == action)) {
        s = "NO ACTION"s;
        ++(vlSymsp->__Vcoverage[15621]);
    } else {
        s = ""s;
        if ((0U != (1U & action))) {
            s = VL_CONCATN_NNN(s, "DISPLAY "s);
            ++(vlSymsp->__Vcoverage[15607]);
        } else {
            ++(vlSymsp->__Vcoverage[15608]);
        }
        if ((0U != (2U & action))) {
            s = VL_CONCATN_NNN(s, "LOG "s);
            ++(vlSymsp->__Vcoverage[15609]);
        } else {
            ++(vlSymsp->__Vcoverage[15610]);
        }
        if ((0U != (0x00000040U & action))) {
            s = VL_CONCATN_NNN(s, "RM_RECORD "s);
            ++(vlSymsp->__Vcoverage[15611]);
        } else {
            ++(vlSymsp->__Vcoverage[15612]);
        }
        if ((0U != (4U & action))) {
            s = VL_CONCATN_NNN(s, "COUNT "s);
            ++(vlSymsp->__Vcoverage[15613]);
        } else {
            ++(vlSymsp->__Vcoverage[15614]);
        }
        if ((0U != (0x00000010U & action))) {
            s = VL_CONCATN_NNN(s, "CALL_HOOK "s);
            ++(vlSymsp->__Vcoverage[15615]);
        } else {
            ++(vlSymsp->__Vcoverage[15616]);
        }
        if ((0U != (8U & action))) {
            s = VL_CONCATN_NNN(s, "EXIT "s);
            ++(vlSymsp->__Vcoverage[15617]);
        } else {
            ++(vlSymsp->__Vcoverage[15618]);
        }
        if ((0U != (0x00000020U & action))) {
            s = VL_CONCATN_NNN(s, "STOP "s);
            ++(vlSymsp->__Vcoverage[15619]);
        } else {
            ++(vlSymsp->__Vcoverage[15620]);
        }
        ++(vlSymsp->__Vcoverage[15622]);
    }
    format_action__Vfuncrtn = s;
    ++(vlSymsp->__Vcoverage[15623]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[15510]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, "uvm_report_handler"s);
        ++(vlSymsp->__Vcoverage[15511]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[15512]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[15513]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_handler"s;
    ++(vlSymsp->__Vcoverage[15515]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__VnoInFunc_initialize(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[15516]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_do_print\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__7__Vfuncout;
    __Vtask_first__7__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__13__Vfuncout;
    __Vtask_next__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__17__Vfuncout;
    __Vtask_first__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__21__Vfuncout;
    __Vtask_next__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__23__Vfuncout;
    __Vtask_first__23__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__29__Vfuncout;
    __Vtask_next__29__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__37__Vfuncout;
    __Vtask_first__37__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__41__Vfuncout;
    __Vtask_next__41__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__43__Vfuncout;
    __Vtask_first__43__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__48__Vfuncout;
    __Vtask_next__48__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__52__Vfuncout;
    __Vtask_first__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__55__Vfuncout;
    __Vtask_next__55__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__58__Vfuncout;
    __Vtask_first__58__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__63__Vfuncout;
    __Vtask_next__63__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__70__Vfuncout;
    __Vtask_first__70__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__73__Vfuncout;
    __Vtask_next__73__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_8;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    VlWide<128>/*4095:0*/ __Vtemp_12;
    // Body
    CData/*0:0*/ __VlefExpr_56;
    IData/*31:0*/ __VlefCall_55__next;
    IData/*31:0*/ __VlefCall_54__get;
    IData/*31:0*/ __VlefCall_53__first;
    CData/*0:0*/ __VlefExpr_52;
    IData/*31:0*/ __VlefCall_51__num;
    CData/*0:0*/ __VlefExpr_50;
    CData/*0:0*/ __VlefExpr_49;
    CData/*0:0*/ __VlefExpr_48;
    VlWide<128>/*4095:0*/ __VlefExpr_47;
    CData/*0:0*/ __VlefExpr_46;
    IData/*31:0*/ __VlefCall_45__next;
    IData/*31:0*/ __VlefCall_44__get;
    IData/*31:0*/ __VlefCall_43__num;
    IData/*31:0*/ __VlefCall_42__first;
    CData/*0:0*/ __VlefExpr_41;
    IData/*31:0*/ __VlefCall_40__next;
    IData/*31:0*/ __VlefCall_39__first;
    CData/*0:0*/ __VlefExpr_38;
    IData/*31:0*/ __VlefCall_37__num;
    CData/*0:0*/ __VlefExpr_36;
    CData/*0:0*/ __VlefExpr_35;
    IData/*31:0*/ __VlefCall_34__next;
    IData/*31:0*/ __VlefCall_33__num;
    IData/*31:0*/ __VlefCall_32__first;
    CData/*0:0*/ __VlefExpr_31;
    IData/*31:0*/ __VlefCall_30__next;
    std::string __VlefCall_29__format_action;
    IData/*31:0*/ __VlefCall_28__get;
    IData/*31:0*/ __VlefCall_27__first;
    CData/*0:0*/ __VlefExpr_26;
    IData/*31:0*/ __VlefCall_25__num;
    CData/*0:0*/ __VlefExpr_24;
    CData/*0:0*/ __VlefExpr_23;
    CData/*0:0*/ __VlefExpr_22;
    std::string __VlefCall_21__format_action;
    CData/*0:0*/ __VlefExpr_20;
    IData/*31:0*/ __VlefCall_19__next;
    std::string __VlefCall_18__format_action;
    IData/*31:0*/ __VlefCall_17__num;
    IData/*31:0*/ __VlefCall_16__first;
    CData/*0:0*/ __VlefExpr_15;
    IData/*31:0*/ __VlefCall_14__next;
    std::string __VlefExpr_13;
    IData/*31:0*/ __VlefCond_12;
    IData/*31:0*/ __VlefCall_11__first;
    CData/*0:0*/ __VlefExpr_10;
    IData/*31:0*/ __VlefCall_9__num;
    CData/*0:0*/ __VlefExpr_8;
    CData/*0:0*/ __VlefExpr_7;
    IData/*31:0*/ __VlefCall_6__next;
    std::string __VlefExpr_5;
    IData/*31:0*/ __VlefCond_4;
    IData/*31:0*/ __VlefCall_3__num;
    IData/*31:0*/ __VlefCall_2__first;
    std::string __VlefExpr_1;
    IData/*31:0*/ __VlefCond_0;
    std::string unnamedblk1__DOT__l_str;
    IData/*31:0*/ unnamedblk2__DOT___total_cnt;
    CData/*1:0*/ unnamedblk2__DOT__unnamedblk3__DOT__l_severity;
    unnamedblk2__DOT__unnamedblk3__DOT__l_severity = 0;
    CData/*0:0*/ unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst;
    unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary;
    std::string unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str;
    IData/*31:0*/ unnamedblk6__DOT___total_cnt;
    CData/*1:0*/ unnamedblk6__DOT__unnamedblk7__DOT__l_severity;
    unnamedblk6__DOT__unnamedblk7__DOT__l_severity = 0;
    CData/*0:0*/ unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst;
    unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary;
    CData/*1:0*/ unnamedblk9__DOT__l_severity_new;
    IData/*31:0*/ unnamedblk10__DOT___total_cnt;
    std::string unnamedblk10__DOT__unnamedblk11__DOT__idx;
    CData/*0:0*/ unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst;
    unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary;
    CData/*1:0*/ unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev;
    IData/*31:0*/ unnamedblk14__DOT___total_cnt;
    CData/*1:0*/ unnamedblk14__DOT__unnamedblk15__DOT__l_severity;
    unnamedblk14__DOT__unnamedblk15__DOT__l_severity = 0;
    CData/*0:0*/ unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst;
    unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary;
    IData/*31:0*/ l_verbosity;
    CData/*1:0*/ l_severity;
    std::string idx;
    IData/*31:0*/ l_int;
    l_verbosity = 0U;
    l_severity = 0U;
    idx = ""s;
    l_int = 0U;
    if (Vtb_rng___024unit::__Venumtab_enum_valid25.at(this->__PVT__m_max_verbosity_level)) {
        l_verbosity = this->__PVT__m_max_verbosity_level;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        __VlefExpr_1 = VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name25
                                          .at(l_verbosity));
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 132)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "max_verbosity_level"s, "uvm_verbosity"s, 0x00000020U, __VlefExpr_1, 0x2eU);
        ++(vlSymsp->__Vcoverage[15517]);
    } else {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__m_max_verbosity_level);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 135)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_verbosity_level"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
        ++(vlSymsp->__Vcoverage[15518]);
    }
    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 139)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__7__Vfuncout);
    __VlefCall_2__first = __Vtask_first__7__Vfuncout;
    if ((0U != __VlefCall_2__first)) {
        VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 140)->__VnoInFunc_num(vlSymsp, __VlefCall_3__num);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 140)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_verbosities"s, __VlefCall_3__num, "uvm_pool"s, 0x2eU);
        while (true) {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 143)->__VnoInFunc_get(vlSymsp, idx, l_int);
            if (Vtb_rng___024unit::__Venumtab_enum_valid25
                .at(l_int)) {
                l_verbosity = l_int;
                __VlefCond_4 = 1U;
            } else {
                __VlefCond_4 = 0U;
            }
            if ((0U != __VlefCond_4)) {
                __VlefExpr_5 = VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name25
                                                  .at(l_verbosity));
                VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 145)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(idx)) , "uvm_verbosity"s, 0x00000020U, __VlefExpr_5, 0x2eU);
                ++(vlSymsp->__Vcoverage[15519]);
            } else {
                unnamedblk1__DOT__l_str = ""s;
                unnamedblk1__DOT__l_str = VL_SFORMATF_N_NX("%0d",0,
                                                           32,
                                                           l_int) ;
                VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 150)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(idx)) , "int"s, 0x00000020U, unnamedblk1__DOT__l_str, 0x2eU);
                ++(vlSymsp->__Vcoverage[15520]);
            }
            ++(vlSymsp->__Vcoverage[15521]);
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 153)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__13__Vfuncout);
            __VlefCall_6__next = __Vtask_next__13__Vfuncout;
            if (!((0U != __VlefCall_6__next))) break;
            ++(vlSymsp->__Vcoverage[15522]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 154)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15523]);
    } else {
        ++(vlSymsp->__Vcoverage[15524]);
    }
    if ((0U != this->__PVT__severity_id_verbosities.size())) {
        unnamedblk2__DOT___total_cnt = 0U;
        __VlefExpr_7 = (0U != this->__PVT__severity_id_verbosities.first(unnamedblk2__DOT__unnamedblk3__DOT__l_severity));
        if (__VlefExpr_7) {
            unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst = 1U;
            while (true) {
                __VlefExpr_8 = unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_8)))) {
                    __VlefExpr_8 = (0U != this->__PVT__severity_id_verbosities.next(unnamedblk2__DOT__unnamedblk3__DOT__l_severity));
                }
                if (!(__VlefExpr_8)) break;
                unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst = 0U;
                VL_NULL_CHECK(this->__PVT__severity_id_verbosities
                              .at(unnamedblk2__DOT__unnamedblk3__DOT__l_severity), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 161)->__VnoInFunc_num(vlSymsp, __VlefCall_9__num);
                unnamedblk2__DOT___total_cnt = (unnamedblk2__DOT___total_cnt 
                                                + __VlefCall_9__num);
                ++(vlSymsp->__Vcoverage[15525]);
            }
            ++(vlSymsp->__Vcoverage[15526]);
        } else {
            ++(vlSymsp->__Vcoverage[15527]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 162)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_verbosities"s, unnamedblk2__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_10 = (0U != this->__PVT__severity_id_verbosities.first(l_severity));
        if (__VlefExpr_10) {
            while (true) {
                unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary 
                    = this->__PVT__severity_id_verbosities
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 167)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__17__Vfuncout);
                __VlefCall_11__first = __Vtask_first__17__Vfuncout;
                if ((0U != __VlefCall_11__first)) {
                    while (true) {
                        VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 169)->__VnoInFunc_get(vlSymsp, idx, l_int);
                        if (Vtb_rng___024unit::__Venumtab_enum_valid25
                            .at(l_int)) {
                            l_verbosity = l_int;
                            __VlefCond_12 = 1U;
                        } else {
                            __VlefCond_12 = 0U;
                        }
                        if ((0U != __VlefCond_12)) {
                            __VlefExpr_13 = VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name25
                                                               .at(l_verbosity));
                            __Vtemp_2 = Vtb_rng___024unit::__Venumtab_enum_name21
                                [l_severity];
                            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 171)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(idx)) , "uvm_verbosity"s, 0x00000020U, __VlefExpr_13, 0x2eU);
                            ++(vlSymsp->__Vcoverage[15528]);
                        } else {
                            unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str = ""s;
                            unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str 
                                = VL_SFORMATF_N_NX("%0d",0,
                                                   32,
                                                   l_int) ;
                            __Vtemp_3 = Vtb_rng___024unit::__Venumtab_enum_name21
                                [l_severity];
                            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 176)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(idx)) , "int"s, 0x00000020U, unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str, 0x2eU);
                            ++(vlSymsp->__Vcoverage[15529]);
                        }
                        ++(vlSymsp->__Vcoverage[15530]);
                        VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 179)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__21__Vfuncout);
                        __VlefCall_14__next = __Vtask_next__21__Vfuncout;
                        if (!((0U != __VlefCall_14__next))) break;
                        ++(vlSymsp->__Vcoverage[15531]);
                    }
                    ++(vlSymsp->__Vcoverage[15532]);
                } else {
                    ++(vlSymsp->__Vcoverage[15533]);
                }
                ++(vlSymsp->__Vcoverage[15534]);
                __VlefExpr_15 = (0U != this->__PVT__severity_id_verbosities.next(l_severity));
                if (!(__VlefExpr_15)) break;
                ++(vlSymsp->__Vcoverage[15535]);
            }
            ++(vlSymsp->__Vcoverage[15536]);
        } else {
            ++(vlSymsp->__Vcoverage[15537]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 182)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15538]);
    } else {
        ++(vlSymsp->__Vcoverage[15539]);
    }
    VL_NULL_CHECK(this->__PVT__id_actions, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 186)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__23__Vfuncout);
    __VlefCall_16__first = __Vtask_first__23__Vfuncout;
    if ((0U != __VlefCall_16__first)) {
        VL_NULL_CHECK(this->__PVT__id_actions, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 187)->__VnoInFunc_num(vlSymsp, __VlefCall_17__num);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 187)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_actions"s, __VlefCall_17__num, "uvm_pool"s, 0x2eU);
        while (true) {
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 190)->__VnoInFunc_get(vlSymsp, idx, l_int);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, l_int, __VlefCall_18__format_action);
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 191)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(idx)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_18__format_action), 0x2eU);
            ++(vlSymsp->__Vcoverage[15540]);
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 193)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__29__Vfuncout);
            __VlefCall_19__next = __Vtask_next__29__Vfuncout;
            if (!((0U != __VlefCall_19__next))) break;
            ++(vlSymsp->__Vcoverage[15541]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 194)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15542]);
    } else {
        ++(vlSymsp->__Vcoverage[15543]);
    }
    __VlefExpr_20 = (0U != this->__PVT__severity_actions.first(l_severity));
    if (__VlefExpr_20) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 199)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_actions"s, 4U, "array"s, 0x2eU);
        while (true) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, this->__PVT__severity_actions
                                                                                .at((IData)(l_severity)), __VlefCall_21__format_action);
            __Vtemp_4 = Vtb_rng___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 201)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_4)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_21__format_action), 0x2eU);
            ++(vlSymsp->__Vcoverage[15544]);
            __VlefExpr_22 = (0U != this->__PVT__severity_actions.next(l_severity));
            if (!(__VlefExpr_22)) break;
            ++(vlSymsp->__Vcoverage[15545]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 204)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15546]);
    } else {
        ++(vlSymsp->__Vcoverage[15547]);
    }
    if ((0U != this->__PVT__severity_id_actions.size())) {
        unnamedblk6__DOT___total_cnt = 0U;
        __VlefExpr_23 = (0U != this->__PVT__severity_id_actions.first(unnamedblk6__DOT__unnamedblk7__DOT__l_severity));
        if (__VlefExpr_23) {
            unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst = 1U;
            while (true) {
                __VlefExpr_24 = unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_24)))) {
                    __VlefExpr_24 = (0U != this->__PVT__severity_id_actions.next(unnamedblk6__DOT__unnamedblk7__DOT__l_severity));
                }
                if (!(__VlefExpr_24)) break;
                unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst = 0U;
                VL_NULL_CHECK(this->__PVT__severity_id_actions
                              .at(unnamedblk6__DOT__unnamedblk7__DOT__l_severity), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 211)->__VnoInFunc_num(vlSymsp, __VlefCall_25__num);
                unnamedblk6__DOT___total_cnt = (unnamedblk6__DOT___total_cnt 
                                                + __VlefCall_25__num);
                ++(vlSymsp->__Vcoverage[15548]);
            }
            ++(vlSymsp->__Vcoverage[15549]);
        } else {
            ++(vlSymsp->__Vcoverage[15550]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 212)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_actions"s, unnamedblk6__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_26 = (0U != this->__PVT__severity_id_actions.first(l_severity));
        if (__VlefExpr_26) {
            while (true) {
                unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary 
                    = this->__PVT__severity_id_actions
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 217)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__37__Vfuncout);
                __VlefCall_27__first = __Vtask_first__37__Vfuncout;
                if ((0U != __VlefCall_27__first)) {
                    while (true) {
                        VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 220)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_28__get);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, __VlefCall_28__get, __VlefCall_29__format_action);
                        __Vtemp_5 = Vtb_rng___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 219)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_5),
                                                                                -1,
                                                                                &(idx)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_29__format_action), 0x2eU);
                        ++(vlSymsp->__Vcoverage[15551]);
                        VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 221)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__41__Vfuncout);
                        __VlefCall_30__next = __Vtask_next__41__Vfuncout;
                        if (!((0U != __VlefCall_30__next))) break;
                        ++(vlSymsp->__Vcoverage[15552]);
                    }
                    ++(vlSymsp->__Vcoverage[15553]);
                } else {
                    ++(vlSymsp->__Vcoverage[15554]);
                }
                ++(vlSymsp->__Vcoverage[15555]);
                __VlefExpr_31 = (0U != this->__PVT__severity_id_actions.next(l_severity));
                if (!(__VlefExpr_31)) break;
                ++(vlSymsp->__Vcoverage[15556]);
            }
            ++(vlSymsp->__Vcoverage[15557]);
        } else {
            ++(vlSymsp->__Vcoverage[15558]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 224)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15559]);
    } else {
        ++(vlSymsp->__Vcoverage[15560]);
    }
    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 228)->__VnoInFunc_first(vlSymsp, l_severity, __Vtask_first__43__Vfuncout);
    __VlefCall_32__first = __Vtask_first__43__Vfuncout;
    if ((0U != __VlefCall_32__first)) {
        VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 229)->__VnoInFunc_num(vlSymsp, __VlefCall_33__num);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 229)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "sev_overrides"s, __VlefCall_33__num, "uvm_pool"s, 0x2eU);
        while (true) {
            VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 232)->__VnoInFunc_get(vlSymsp, l_severity, unnamedblk9__DOT__l_severity_new);
            __Vtemp_6 = Vtb_rng___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 233)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_6)) , "uvm_severity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name21
                                                                                [unnamedblk9__DOT__l_severity_new]), 0x2eU);
            ++(vlSymsp->__Vcoverage[15561]);
            VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 235)->__VnoInFunc_next(vlSymsp, l_severity, __Vtask_next__48__Vfuncout);
            __VlefCall_34__next = __Vtask_next__48__Vfuncout;
            if (!((0U != __VlefCall_34__next))) break;
            ++(vlSymsp->__Vcoverage[15562]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 236)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15563]);
    } else {
        ++(vlSymsp->__Vcoverage[15564]);
    }
    if ((0U != this->__PVT__sev_id_overrides.size())) {
        unnamedblk10__DOT___total_cnt = 0U;
        __VlefExpr_35 = (0U != this->__PVT__sev_id_overrides.first(unnamedblk10__DOT__unnamedblk11__DOT__idx));
        if (__VlefExpr_35) {
            unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst = 1U;
            while (true) {
                __VlefExpr_36 = unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_36)))) {
                    __VlefExpr_36 = (0U != this->__PVT__sev_id_overrides.next(unnamedblk10__DOT__unnamedblk11__DOT__idx));
                }
                if (!(__VlefExpr_36)) break;
                unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(this->__PVT__sev_id_overrides
                              .at(unnamedblk10__DOT__unnamedblk11__DOT__idx), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 243)->__VnoInFunc_num(vlSymsp, __VlefCall_37__num);
                unnamedblk10__DOT___total_cnt = (unnamedblk10__DOT___total_cnt 
                                                 + __VlefCall_37__num);
                ++(vlSymsp->__Vcoverage[15565]);
            }
            ++(vlSymsp->__Vcoverage[15566]);
        } else {
            ++(vlSymsp->__Vcoverage[15567]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 244)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "sev_id_overrides"s, unnamedblk10__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_38 = (0U != this->__PVT__sev_id_overrides.first(idx));
        if (__VlefExpr_38) {
            while (true) {
                unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary 
                    = this->__PVT__sev_id_overrides
                    .at(idx);
                VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 249)->__VnoInFunc_first(vlSymsp, l_severity, __Vtask_first__52__Vfuncout);
                __VlefCall_39__first = __Vtask_first__52__Vfuncout;
                if ((0U != __VlefCall_39__first)) {
                    while (true) {
                        VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 251)->__VnoInFunc_get(vlSymsp, l_severity, unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev);
                        __Vtemp_7 = Vtb_rng___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 252)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_7),
                                                                                -1,
                                                                                &(idx)) , "uvm_severity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name21
                                                                                [unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev]), 0x2eU);
                        ++(vlSymsp->__Vcoverage[15568]);
                        VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 254)->__VnoInFunc_next(vlSymsp, l_severity, __Vtask_next__55__Vfuncout);
                        __VlefCall_40__next = __Vtask_next__55__Vfuncout;
                        if (!((0U != __VlefCall_40__next))) break;
                        ++(vlSymsp->__Vcoverage[15569]);
                    }
                    ++(vlSymsp->__Vcoverage[15570]);
                } else {
                    ++(vlSymsp->__Vcoverage[15571]);
                }
                ++(vlSymsp->__Vcoverage[15572]);
                __VlefExpr_41 = (0U != this->__PVT__sev_id_overrides.next(idx));
                if (!(__VlefExpr_41)) break;
                ++(vlSymsp->__Vcoverage[15573]);
            }
            ++(vlSymsp->__Vcoverage[15574]);
        } else {
            ++(vlSymsp->__Vcoverage[15575]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 257)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15576]);
    } else {
        ++(vlSymsp->__Vcoverage[15577]);
    }
    VL_EXTENDS_WI(4096,32, __Vtemp_8, this->__PVT__default_file_handle);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 261)->__VnoInFunc_print_field(vlProcess, vlSymsp, "default_file_handle"s, __Vtemp_8, 0x00000020U, 0x07000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 265)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__58__Vfuncout);
    __VlefCall_42__first = __Vtask_first__58__Vfuncout;
    if ((0U != __VlefCall_42__first)) {
        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 266)->__VnoInFunc_num(vlSymsp, __VlefCall_43__num);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 266)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_file_handles"s, __VlefCall_43__num, "uvm_pool"s, 0x2eU);
        while (true) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 269)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_44__get);
            VL_EXTENDS_WI(4096,32, __Vtemp_9, __VlefCall_44__get);
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 269)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(idx)) , __Vtemp_9, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
            ++(vlSymsp->__Vcoverage[15578]);
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 271)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__63__Vfuncout);
            __VlefCall_45__next = __Vtask_next__63__Vfuncout;
            if (!((0U != __VlefCall_45__next))) break;
            ++(vlSymsp->__Vcoverage[15579]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 272)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15580]);
    } else {
        ++(vlSymsp->__Vcoverage[15581]);
    }
    __VlefExpr_46 = (0U != this->__PVT__severity_file_handles.first(l_severity));
    if (__VlefExpr_46) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 277)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_file_handles"s, 4U, "array"s, 0x2eU);
        while (true) {
            VL_EXTENDS_WI(4096,32, __VlefExpr_47, this->__PVT__severity_file_handles
                          .at((IData)(l_severity)));
            __Vtemp_10 = Vtb_rng___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 279)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_10)) , __VlefExpr_47, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
            ++(vlSymsp->__Vcoverage[15582]);
            __VlefExpr_48 = (0U != this->__PVT__severity_file_handles.next(l_severity));
            if (!(__VlefExpr_48)) break;
            ++(vlSymsp->__Vcoverage[15583]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 282)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15584]);
    } else {
        ++(vlSymsp->__Vcoverage[15585]);
    }
    if ((0U != this->__PVT__severity_id_file_handles.size())) {
        unnamedblk14__DOT___total_cnt = 0U;
        __VlefExpr_49 = (0U != this->__PVT__severity_id_file_handles.first(unnamedblk14__DOT__unnamedblk15__DOT__l_severity));
        if (__VlefExpr_49) {
            unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst = 1U;
            while (true) {
                __VlefExpr_50 = unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_50)))) {
                    __VlefExpr_50 = (0U != this->__PVT__severity_id_file_handles.next(unnamedblk14__DOT__unnamedblk15__DOT__l_severity));
                }
                if (!(__VlefExpr_50)) break;
                unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst = 0U;
                VL_NULL_CHECK(this->__PVT__severity_id_file_handles
                              .at(unnamedblk14__DOT__unnamedblk15__DOT__l_severity), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 289)->__VnoInFunc_num(vlSymsp, __VlefCall_51__num);
                unnamedblk14__DOT___total_cnt = (unnamedblk14__DOT___total_cnt 
                                                 + __VlefCall_51__num);
                ++(vlSymsp->__Vcoverage[15586]);
            }
            ++(vlSymsp->__Vcoverage[15587]);
        } else {
            ++(vlSymsp->__Vcoverage[15588]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 290)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_file_handles"s, unnamedblk14__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_52 = (0U != this->__PVT__severity_id_file_handles.first(l_severity));
        if (__VlefExpr_52) {
            while (true) {
                unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary 
                    = this->__PVT__severity_id_file_handles
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 295)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__70__Vfuncout);
                __VlefCall_53__first = __Vtask_first__70__Vfuncout;
                if ((0U != __VlefCall_53__first)) {
                    while (true) {
                        VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 298)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_54__get);
                        __Vtemp_11 = Vtb_rng___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_EXTENDS_WI(4096,32, __Vtemp_12, __VlefCall_54__get);
                        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 297)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_11),
                                                                                -1,
                                                                                &(idx)) , __Vtemp_12, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
                        ++(vlSymsp->__Vcoverage[15589]);
                        VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 299)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__73__Vfuncout);
                        __VlefCall_55__next = __Vtask_next__73__Vfuncout;
                        if (!((0U != __VlefCall_55__next))) break;
                        ++(vlSymsp->__Vcoverage[15590]);
                    }
                    ++(vlSymsp->__Vcoverage[15591]);
                } else {
                    ++(vlSymsp->__Vcoverage[15592]);
                }
                ++(vlSymsp->__Vcoverage[15593]);
                __VlefExpr_56 = (0U != this->__PVT__severity_id_file_handles.next(l_severity));
                if (!(__VlefExpr_56)) break;
                ++(vlSymsp->__Vcoverage[15594]);
            }
            ++(vlSymsp->__Vcoverage[15595]);
        } else {
            ++(vlSymsp->__Vcoverage[15596]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 302)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15597]);
    } else {
        ++(vlSymsp->__Vcoverage[15598]);
    }
    ++(vlSymsp->__Vcoverage[15599]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_process_report_message\n"); );
    // Body
    IData/*31:0*/ __VlefCall_3__get_action;
    IData/*31:0*/ __VlefCall_2__get_file_handle;
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> srvr;
    std::string id;
    CData/*1:0*/ severity;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 322)->__VnoInFunc_get_id(vlSymsp, id);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 323)->__VnoInFunc_get_severity(vlSymsp, severity);
    if (this->__PVT__sev_id_overrides.exists(id)) {
        VL_NULL_CHECK(this->__PVT__sev_id_overrides
                      .at(id), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 328)->__VnoInFunc_exists(vlSymsp, severity, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            VL_NULL_CHECK(this->__PVT__sev_id_overrides
                          .at(id), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 329)->__VnoInFunc_get(vlSymsp, severity, severity);
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 330)->__VnoInFunc_set_severity(vlSymsp, severity);
            ++(vlSymsp->__Vcoverage[15600]);
        } else {
            ++(vlSymsp->__Vcoverage[15601]);
        }
        ++(vlSymsp->__Vcoverage[15604]);
    } else {
        VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 334)->__VnoInFunc_exists(vlSymsp, severity, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 335)->__VnoInFunc_get(vlSymsp, severity, severity);
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 336)->__VnoInFunc_set_severity(vlSymsp, severity);
            ++(vlSymsp->__Vcoverage[15602]);
        } else {
            ++(vlSymsp->__Vcoverage[15603]);
        }
        ++(vlSymsp->__Vcoverage[15605]);
    }
    this->__VnoInFunc_get_file_handle(vlSymsp, severity, id, __VlefCall_2__get_file_handle);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 339)->__VnoInFunc_set_file(vlSymsp, __VlefCall_2__get_file_handle);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 340)->__VnoInFunc_set_report_handler(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler>{this});
    this->__VnoInFunc_get_action(vlSymsp, severity, id, __VlefCall_3__get_action);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 341)->__VnoInFunc_set_action(vlSymsp, __VlefCall_3__get_action);
    VL_NULL_CHECK(srvr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 342)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
    ++(vlSymsp->__Vcoverage[15606]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize\n"); );
    // Body
    this->__VnoInFunc_set_default_file(vlSymsp, 0U);
    this->__PVT__m_max_verbosity_level = 0x000000c8U;
    this->__PVT__id_actions = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__id_verbosities = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__id_file_handles = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__sev_overrides = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, ""s);
    this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
    this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
    ++(vlSymsp->__Vcoverage[15624]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        get_severity_id_file__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_file_handles.exists(severity)) {
            array = this->__PVT__severity_id_file_handles
                .at(severity);
            VL_NULL_CHECK(array, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 414)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 415)->__VnoInFunc_get(vlSymsp, id, get_severity_id_file__Vfuncrtn);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[15626]);
            }
            ++(vlSymsp->__Vcoverage[15627]);
        } else {
            ++(vlSymsp->__Vcoverage[15628]);
        }
        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 419)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 420)->__VnoInFunc_get(vlSymsp, id, get_severity_id_file__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15630]);
        }
        if (this->__PVT__severity_file_handles.exists(severity)) {
            get_severity_id_file__Vfuncrtn = this->__PVT__severity_file_handles
                .at((IData)(severity));
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15632]);
        }
        get_severity_id_file__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15633]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level\n"); );
    // Body
    this->__PVT__m_max_verbosity_level = verbosity_level;
    ++(vlSymsp->__Vcoverage[15634]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        get_verbosity_level__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_verbosities.exists(severity)) {
            array = this->__PVT__severity_id_verbosities
                .at(severity);
            VL_NULL_CHECK(array, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 454)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 455)->__VnoInFunc_get(vlSymsp, id, get_verbosity_level__Vfuncrtn);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[15636]);
            }
            ++(vlSymsp->__Vcoverage[15637]);
        } else {
            ++(vlSymsp->__Vcoverage[15638]);
        }
        VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 459)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 460)->__VnoInFunc_get(vlSymsp, id, get_verbosity_level__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15640]);
        }
        get_verbosity_level__Vfuncrtn = this->__PVT__m_max_verbosity_level;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15641]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        get_action__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_actions.exists(severity)) {
            array = this->__PVT__severity_id_actions
                .at(severity);
            VL_NULL_CHECK(array, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 483)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 484)->__VnoInFunc_get(vlSymsp, id, get_action__Vfuncrtn);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[15643]);
            }
            ++(vlSymsp->__Vcoverage[15644]);
        } else {
            ++(vlSymsp->__Vcoverage[15645]);
        }
        VL_NULL_CHECK(this->__PVT__id_actions, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 487)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 488)->__VnoInFunc_get(vlSymsp, id, get_action__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15647]);
        }
        get_action__Vfuncrtn = this->__PVT__severity_actions
            .at((IData)(severity));
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15648]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    IData/*31:0*/ file;
    {
        get_file_handle__Vfuncrtn = 0U;
        file = 0U;
        this->__VnoInFunc_get_severity_id_file(vlSymsp, severity, id, file);
        if ((0U != file)) {
            get_file_handle__Vfuncrtn = file;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15650]);
        }
        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 512)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 513)->__VnoInFunc_get(vlSymsp, id, file);
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[15652]);
            }
            ++(vlSymsp->__Vcoverage[15653]);
        } else {
            ++(vlSymsp->__Vcoverage[15654]);
        }
        if (this->__PVT__severity_file_handles.exists(severity)) {
            file = this->__PVT__severity_file_handles
                .at((IData)(severity));
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[15656]);
            }
            ++(vlSymsp->__Vcoverage[15657]);
        } else {
            ++(vlSymsp->__Vcoverage[15658]);
        }
        get_file_handle__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15659]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action\n"); );
    // Body
    this->__PVT__severity_actions.at((IData)(severity)) 
        = action;
    ++(vlSymsp->__Vcoverage[15660]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_actions, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 544)->__VnoInFunc_add(vlSymsp, id, action);
    ++(vlSymsp->__Vcoverage[15661]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __VlefCall_0__new;
    if (this->__PVT__severity_id_actions.exists(severity)) {
        ++(vlSymsp->__Vcoverage[15663]);
    } else {
        __VlefCall_0__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_actions.at(severity) 
            = __VlefCall_0__new;
        ++(vlSymsp->__Vcoverage[15662]);
    }
    VL_NULL_CHECK(this->__PVT__severity_id_actions.at(severity), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 553)->__VnoInFunc_add(vlSymsp, id, action);
    ++(vlSymsp->__Vcoverage[15664]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 558)->__VnoInFunc_add(vlSymsp, id, verbosity);
    ++(vlSymsp->__Vcoverage[15665]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_verbosity(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_verbosity\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __VlefCall_0__new;
    if (this->__PVT__severity_id_verbosities.exists(severity)) {
        ++(vlSymsp->__Vcoverage[15667]);
    } else {
        __VlefCall_0__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_verbosities.at(severity) 
            = __VlefCall_0__new;
        ++(vlSymsp->__Vcoverage[15666]);
    }
    VL_NULL_CHECK(this->__PVT__severity_id_verbosities
                  .at(severity), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 567)->__VnoInFunc_add(vlSymsp, id, verbosity);
    ++(vlSymsp->__Vcoverage[15668]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file\n"); );
    // Body
    this->__PVT__default_file_handle = file;
    ++(vlSymsp->__Vcoverage[15669]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file\n"); );
    // Body
    this->__PVT__severity_file_handles.at((IData)(severity)) 
        = file;
    ++(vlSymsp->__Vcoverage[15670]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 589)->__VnoInFunc_add(vlSymsp, id, file);
    ++(vlSymsp->__Vcoverage[15671]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_file(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __VlefCall_0__new;
    if (this->__PVT__severity_id_file_handles.exists(severity)) {
        ++(vlSymsp->__Vcoverage[15673]);
    } else {
        __VlefCall_0__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_file_handles.at(severity) 
            = __VlefCall_0__new;
        ++(vlSymsp->__Vcoverage[15672]);
    }
    VL_NULL_CHECK(this->__PVT__severity_id_file_handles
                  .at(severity), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 597)->__VnoInFunc_add(vlSymsp, id, file);
    ++(vlSymsp->__Vcoverage[15674]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 603)->__VnoInFunc_add(vlSymsp, cur_severity, (IData)(new_severity));
    ++(vlSymsp->__Vcoverage[15675]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> __VlefCall_0__new;
    if (this->__PVT__sev_id_overrides.exists(id)) {
        ++(vlSymsp->__Vcoverage[15677]);
    } else {
        __VlefCall_0__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, ""s);
        this->__PVT__sev_id_overrides.at(id) = __VlefCall_0__new;
        ++(vlSymsp->__Vcoverage[15676]);
    }
    VL_NULL_CHECK(this->__PVT__sev_id_overrides.at(id), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 616)->__VnoInFunc_add(vlSymsp, cur_severity, (IData)(new_severity));
    ++(vlSymsp->__Vcoverage[15678]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__verbosity;
    __Vfunc_uvm_report_enabled__132__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__132__severity;
    __Vfunc_uvm_report_enabled__132__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__136__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_1__get_action;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> l_report_message;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        this->__Vfunc_uvm_report_enabled__132__id = id;
        __Vfunc_uvm_report_enabled__132__severity = 0U;
        __Vfunc_uvm_report_enabled__132__verbosity 
            = verbosity_level;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__133__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__133__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__134__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__132__verbosity, (IData)(__Vfunc_uvm_report_enabled__132__severity), this->__Vfunc_uvm_report_enabled__132__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            ++(vlSymsp->__Vcoverage[15680]);
        } else {
            goto __Vlabel0;
        }
        if ((VlNull{} == client)) {
            VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 645)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__136__Vfuncout);
            client = __Vtask_get_root__136__Vfuncout;
            ++(vlSymsp->__Vcoverage[15681]);
        } else {
            ++(vlSymsp->__Vcoverage[15682]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 648)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity_level, filename, line, name);
        VL_NULL_CHECK(l_report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 650)->__VnoInFunc_set_report_object(vlSymsp, client);
        this->__VnoInFunc_get_action(vlSymsp, severity, id, __VlefCall_1__get_action);
        VL_NULL_CHECK(l_report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 651)->__VnoInFunc_set_action(vlSymsp, __VlefCall_1__get_action);
        this->__VnoInFunc_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15683]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_max_verbosity_level = 0;
    __PVT__severity_actions.atDefault() = 0;
    __PVT__default_file_handle = 0;
    __PVT__severity_file_handles.atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_report_handler::~Vtb_rng_uvm_pkg__03a__03auvm_report_handler() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_handler::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_handler::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_handler::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_max_verbosity_level:" + VL_TO_STRING(__PVT__m_max_verbosity_level);
    out += ", id_verbosities:" + VL_TO_STRING(__PVT__id_verbosities);
    out += ", severity_id_verbosities:" + VL_TO_STRING(__PVT__severity_id_verbosities);
    out += ", id_actions:" + VL_TO_STRING(__PVT__id_actions);
    out += ", severity_actions:" + VL_TO_STRING(__PVT__severity_actions);
    out += ", severity_id_actions:" + VL_TO_STRING(__PVT__severity_id_actions);
    out += ", sev_overrides:" + VL_TO_STRING(__PVT__sev_overrides);
    out += ", sev_id_overrides:" + VL_TO_STRING(__PVT__sev_id_overrides);
    out += ", default_file_handle:" + VL_TO_STRING(__PVT__default_file_handle);
    out += ", id_file_handles:" + VL_TO_STRING(__PVT__id_file_handles);
    out += ", severity_file_handles:" + VL_TO_STRING(__PVT__severity_file_handles);
    out += ", severity_id_file_handles:" + VL_TO_STRING(__PVT__severity_id_file_handles);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
