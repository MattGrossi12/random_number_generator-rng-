// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_get_name_constraint(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_name_constraint__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_get_name_constraint\n"); );
    // Body
    get_name_constraint__Vfuncrtn = "/^[][[:alnum:](){}_:-]([][[:alnum:](){} _:-]*[][[:alnum:](){}_:-])?$/"s;
    ++(vlSymsp->__Vcoverage[17853]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_visit(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> node) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_visit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__2____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__2____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__4__Vfuncout;
    __Vfunc_uvm_re_match__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__4____Vincrement1;
    __Vfunc_uvm_re_match__4____Vincrement1 = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__11__verbosity;
    __Vtask_uvm_report_warning__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__11__line;
    __Vtask_uvm_report_warning__11__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__11__report_enabled_checked;
    __Vtask_uvm_report_warning__11__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name_constraint;
    if ((this->__PVT___root != node)) {
        this->__VnoInFunc_get_name_constraint(vlSymsp, __VlefCall_0__get_name_constraint);
        VL_NULL_CHECK(node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 273)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__Vfunc_uvm_is_match__2__str = VL_CVT_PACK_STR_NN(__VlefCall_1__get_name);
        this->__Vfunc_uvm_is_match__2__expr = VL_CVT_PACK_STR_NN(__VlefCall_0__get_name_constraint);
        this->__Vfunc_uvm_glob_to_re__3__glob = this->__Vfunc_uvm_is_match__2__expr;
        this->__Vfunc_uvm_glob_to_re__3__Vfuncout = this->__Vfunc_uvm_glob_to_re__3__glob;
        ++(vlSymsp->__Vcoverage[278]);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
            = this->__Vfunc_uvm_glob_to_re__3__Vfuncout;
        this->__Vfunc_uvm_re_match__4__str = this->__Vfunc_uvm_is_match__2__str;
        this->__Vfunc_uvm_re_match__4__re = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
        __Vfunc_uvm_re_match__4____Vincrement1 = 0U;
        {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
            if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__4__re))) {
                __Vfunc_uvm_re_match__4__Vfuncout = 0U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[250]);
            }
            if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,0U))) {
                this->__Vfunc_uvm_re_match__4__re = 
                    VL_SUBSTR_N(this->__Vfunc_uvm_re_match__4__re,1U,
                                (VL_LEN_IN(this->__Vfunc_uvm_re_match__4__re) 
                                 - (IData)(1U)));
                ++(vlSymsp->__Vcoverage[251]);
            } else {
                ++(vlSymsp->__Vcoverage[252]);
            }
            while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                     != VL_LEN_IN(this->__Vfunc_uvm_re_match__4__str)) 
                    & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                      != VL_GETC_N(this->__Vfunc_uvm_re_match__4__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    __Vfunc_uvm_re_match__4__Vfuncout = 1U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[257]);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                ++(vlSymsp->__Vcoverage[261]);
            }
            while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    != VL_LEN_IN(this->__Vfunc_uvm_re_match__4__str))) {
                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__4__re))) {
                        __Vfunc_uvm_re_match__4__Vfuncout = 0U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[263]);
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    ++(vlSymsp->__Vcoverage[269]);
                } else {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          == VL_GETC_N(this->__Vfunc_uvm_re_match__4__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        ++(vlSymsp->__Vcoverage[264]);
                    } else {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match__4____Vincrement1 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match__4____Vincrement1;
                        ++(vlSymsp->__Vcoverage[265]);
                    }
                    if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[266]);
                    }
                    if ((VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                         == VL_GETC_N(this->__Vfunc_uvm_re_match__4__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                        ++(vlSymsp->__Vcoverage[267]);
                    }
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__4__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[268]);
                    }
                }
                ++(vlSymsp->__Vcoverage[270]);
            }
            while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                               VL_LEN_IN(this->__Vfunc_uvm_re_match__4__re)) 
                    & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                ++(vlSymsp->__Vcoverage[274]);
            }
            __Vfunc_uvm_re_match__4__Vfuncout = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                  == 
                                                  VL_LEN_IN(this->__Vfunc_uvm_re_match__4__re))
                                                  ? 0U
                                                  : 1U);
            __Vlabel0: ;
        }
        if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
              != VL_LEN_IN(this->__Vfunc_uvm_re_match__4__str)) 
             & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            ++(vlSymsp->__Vcoverage[253]);
        }
        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
            ++(vlSymsp->__Vcoverage[254]);
        }
        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
             == VL_LEN_IN(this->__Vfunc_uvm_re_match__4__str))) {
            ++(vlSymsp->__Vcoverage[255]);
        }
        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
              != VL_GETC_N(this->__Vfunc_uvm_re_match__4__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            ++(vlSymsp->__Vcoverage[258]);
        }
        if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
             == VL_GETC_N(this->__Vfunc_uvm_re_match__4__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                        VL_LEN_IN(this->__Vfunc_uvm_re_match__4__re)) 
             & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            ++(vlSymsp->__Vcoverage[271]);
        }
        if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
            ++(vlSymsp->__Vcoverage[272]);
        }
        if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                        VL_LEN_IN(this->__Vfunc_uvm_re_match__4__re))) {
            ++(vlSymsp->__Vcoverage[273]);
        }
        ++(vlSymsp->__Vcoverage[277]);
        __Vfunc_uvm_is_match__2____VlefCall_0__uvm_re_match 
            = __Vfunc_uvm_re_match__4__Vfuncout;
        __VlefCall_2__uvm_is_match = (0U == __Vfunc_uvm_is_match__2____VlefCall_0__uvm_re_match);
        ++(vlSymsp->__Vcoverage[457]);
        if (__VlefCall_2__uvm_is_match) {
            ++(vlSymsp->__Vcoverage[17857]);
        } else {
            this->__Vfunc_uvm_report_enabled__5__id = "UVM/COMP/NAME"s;
            __Vfunc_uvm_report_enabled__5__severity = 1U;
            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), this->__Vfunc_uvm_report_enabled__5__id, __VlefCall_3__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                VL_NULL_CHECK(node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 274)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                VL_NULL_CHECK(node, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 274)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_warning__11__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__11__context_name = ""s;
                __Vtask_uvm_report_warning__11__line = 0x00000112U;
                this->__Vtask_uvm_report_warning__11__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh"s;
                __Vtask_uvm_report_warning__11__verbosity = 0U;
                this->__Vtask_uvm_report_warning__11__message 
                    = VL_SFORMATF_N_NX("the name \"%@\" of the component \"%@\" violates the uvm component name constraints",0,
                                       -1,&(__VlefCall_4__get_name),
                                       -1,&(__VlefCall_5__get_full_name)) ;
                this->__Vtask_uvm_report_warning__11__id = "UVM/COMP/NAME"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__12__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__13__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__11__id, this->__Vtask_uvm_report_warning__11__message, __Vtask_uvm_report_warning__11__verbosity, this->__Vtask_uvm_report_warning__11__filename, __Vtask_uvm_report_warning__11__line, this->__Vtask_uvm_report_warning__11__context_name, (IData)(__Vtask_uvm_report_warning__11__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[17854]);
            } else {
                ++(vlSymsp->__Vcoverage[17855]);
            }
            ++(vlSymsp->__Vcoverage[17856]);
        }
        ++(vlSymsp->__Vcoverage[17858]);
    } else {
        ++(vlSymsp->__Vcoverage[17859]);
    }
    ++(vlSymsp->__Vcoverage[17860]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_visitor_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[17861]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_begin_v(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_begin_v\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__verbosity;
    __Vfunc_uvm_report_enabled__18__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__18__severity;
    __Vfunc_uvm_report_enabled__18__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__22__verbosity;
    __Vtask_uvm_report_info__22__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__22__line;
    __Vtask_uvm_report_info__22__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__22__report_enabled_checked;
    __Vtask_uvm_report_info__22__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh", 286)->__VnoInFunc_get_root(vlProcess, vlSymsp, this->__PVT___root);
    this->__Vfunc_uvm_report_enabled__18__id = "UVM/COMP/NAMECHECK"s;
    __Vfunc_uvm_report_enabled__18__severity = 0U;
    __Vfunc_uvm_report_enabled__18__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__19__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__20__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__18__verbosity, (IData)(__Vfunc_uvm_report_enabled__18__severity), this->__Vfunc_uvm_report_enabled__18__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[432]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_info__22__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__22__context_name = ""s;
        __Vtask_uvm_report_info__22__line = 0x00000121U;
        this->__Vtask_uvm_report_info__22__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_traversal.svh"s;
        __Vtask_uvm_report_info__22__verbosity = 0U;
        this->__Vtask_uvm_report_info__22__message = "This implementation of the component name checks requires DPI to be enabled"s;
        this->__Vtask_uvm_report_info__22__id = "UVM/COMP/NAMECHECK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__23__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__24__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__22__id, this->__Vtask_uvm_report_info__22__message, __Vtask_uvm_report_info__22__verbosity, this->__Vtask_uvm_report_info__22__filename, __Vtask_uvm_report_info__22__line, this->__Vtask_uvm_report_info__22__context_name, (IData)(__Vtask_uvm_report_info__22__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[435]);
        ++(vlSymsp->__Vcoverage[17862]);
    } else {
        ++(vlSymsp->__Vcoverage[17863]);
    }
    ++(vlSymsp->__Vcoverage[17864]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::~Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_root:" + VL_TO_STRING(__PVT___root);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_visitor_::to_string_middle();
    return (out);
}
