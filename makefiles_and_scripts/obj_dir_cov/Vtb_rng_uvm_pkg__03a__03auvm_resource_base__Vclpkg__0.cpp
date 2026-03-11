// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__modified = 0U;
    this->__PVT__read_only = 0U;
    ++(vlSymsp->__Vcoverage[7809]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[7810]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_only(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_only\n"); );
    // Body
    this->__PVT__read_only = 1U;
    ++(vlSymsp->__Vcoverage[7811]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_write(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_write\n"); );
    // Body
    this->__PVT__read_only = 0U;
    ++(vlSymsp->__Vcoverage[7812]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read_only__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only\n"); );
    // Body
    is_read_only__Vfuncrtn = this->__PVT__read_only;
    ++(vlSymsp->__Vcoverage[7813]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_wait_modified(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_wait_modified\n"); );
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__modified)))) {
        CData/*0:0*/ __VdynTrigger_h8d42ca11__0;
        __VdynTrigger_h8d42ca11__0 = 0;
        __VdynTrigger_h8d42ca11__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h8d42ca11__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] uvm_pkg::uvm_resource_base.modified)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 
                                                         319);
            __VdynTrigger_h8d42ca11__0 = this->__PVT__modified;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8d42ca11__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] uvm_pkg::uvm_resource_base.modified)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 
                                                     319);
    }
    this->__PVT__modified = 0U;
    ++(vlSymsp->__Vcoverage[7814]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string\n"); );
    // Body
    std::string __VlefCall_1__m_value_as_string;
    std::string __VlefCall_0__m_value_type_name;
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_m_value_type_name(vlSymsp, __VlefCall_0__m_value_type_name);
    this->__VnoInFunc_m_value_as_string(vlSymsp, __VlefCall_1__m_value_as_string);
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("(%@) %@",0,
                                                -1,
                                                &(__VlefCall_0__m_value_type_name),
                                                -1,
                                                &(__VlefCall_1__m_value_as_string)) ;
    ++(vlSymsp->__Vcoverage[7815]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = ""s;
    ++(vlSymsp->__Vcoverage[7816]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_as_string(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_m_value_as_string\n"); );
    // Body
    m_value_as_string__Vfuncrtn = ""s;
    ++(vlSymsp->__Vcoverage[7817]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print\n"); );
    // Body
    std::string __VlefCall_1__m_value_as_string;
    std::string __VlefCall_0__m_value_type_name;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_m_value_type_name(vlSymsp, __VlefCall_0__m_value_type_name);
    this->__VnoInFunc_m_value_as_string(vlSymsp, __VlefCall_1__m_value_as_string);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 397)->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, "val"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__m_value_type_name), ""s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__m_value_as_string));
    ++(vlSymsp->__Vcoverage[7818]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access\n"); );
    // Locals
    Vtb_rng_access_t__struct__0 __Vtask_init_access_record__9__access_record;
    __Vtask_init_access_record__9__access_record.__PVT__read_time = 0;
    __Vtask_init_access_record__9__access_record.__PVT__write_time = 0;
    __Vtask_init_access_record__9__access_record.__PVT__read_count = 0;
    __Vtask_init_access_record__9__access_record.__PVT__write_count = 0;
    // Body
    CData/*0:0*/ __VExpr_h77b709fa__0;
    __VExpr_h77b709fa__0 = 0;
    std::string str;
    Vtb_rng_access_t__struct__0 access_record;
    {
        str = ""s;
        access_record.__PVT__read_time = 0;
        access_record.__PVT__write_time = 0;
        access_record.__PVT__read_count = 0;
        access_record.__PVT__write_count = 0;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VExpr_h77b709fa__0);
        if (__VExpr_h77b709fa__0) {
            ++(vlSymsp->__Vcoverage[7820]);
        } else {
            goto __Vlabel0;
        }
        if ((VlNull{} != accessor)) {
            VL_NULL_CHECK(accessor, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 456)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
            ++(vlSymsp->__Vcoverage[7823]);
        } else {
            str = "<empty>"s;
            ++(vlSymsp->__Vcoverage[7824]);
        }
        if (this->__PVT__access.exists(str)) {
            access_record = this->__PVT__access.at(str);
            ++(vlSymsp->__Vcoverage[7825]);
        } else {
            __Vtask_init_access_record__9__access_record 
                = access_record;
            this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__9__access_record);
            access_record = __Vtask_init_access_record__9__access_record;
            ++(vlSymsp->__Vcoverage[7826]);
        }
        access_record.__PVT__read_count = ((IData)(1U) 
                                           + access_record
                                           .__PVT__read_count);
        access_record.__PVT__read_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__access.at(str) = access_record;
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(__VExpr_h77b709fa__0)))) {
        ++(vlSymsp->__Vcoverage[7821]);
    }
    if (__VExpr_h77b709fa__0) {
        ++(vlSymsp->__Vcoverage[7822]);
    }
    ++(vlSymsp->__Vcoverage[7827]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access\n"); );
    // Locals
    Vtb_rng_access_t__struct__0 __Vtask_init_access_record__12__access_record;
    __Vtask_init_access_record__12__access_record.__PVT__read_time = 0;
    __Vtask_init_access_record__12__access_record.__PVT__write_time = 0;
    __Vtask_init_access_record__12__access_record.__PVT__read_count = 0;
    __Vtask_init_access_record__12__access_record.__PVT__write_count = 0;
    // Body
    CData/*0:0*/ __VlefCall_0__is_auditing;
    Vtb_rng_access_t__struct__0 unnamedblk1__DOT__access_record;
    std::string unnamedblk1__DOT__str;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
    if (__VlefCall_0__is_auditing) {
        if ((VlNull{} != accessor)) {
            unnamedblk1__DOT__access_record.__PVT__read_time = 0;
            unnamedblk1__DOT__access_record.__PVT__write_time = 0;
            unnamedblk1__DOT__access_record.__PVT__read_count = 0;
            unnamedblk1__DOT__access_record.__PVT__write_count = 0;
            unnamedblk1__DOT__str = ""s;
            VL_NULL_CHECK(accessor, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 493)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__str);
            if (this->__PVT__access.exists(unnamedblk1__DOT__str)) {
                unnamedblk1__DOT__access_record = this->__PVT__access
                    .at(unnamedblk1__DOT__str);
                ++(vlSymsp->__Vcoverage[7828]);
            } else {
                __Vtask_init_access_record__12__access_record 
                    = unnamedblk1__DOT__access_record;
                this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__12__access_record);
                unnamedblk1__DOT__access_record = __Vtask_init_access_record__12__access_record;
                ++(vlSymsp->__Vcoverage[7829]);
            }
            unnamedblk1__DOT__access_record.__PVT__write_count 
                = ((IData)(1U) + unnamedblk1__DOT__access_record
                   .__PVT__write_count);
            unnamedblk1__DOT__access_record.__PVT__write_time 
                = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
            this->__PVT__access.at(unnamedblk1__DOT__str) 
                = unnamedblk1__DOT__access_record;
            ++(vlSymsp->__Vcoverage[7830]);
        } else {
            ++(vlSymsp->__Vcoverage[7831]);
        }
        ++(vlSymsp->__Vcoverage[7832]);
    } else {
        ++(vlSymsp->__Vcoverage[7833]);
    }
    ++(vlSymsp->__Vcoverage[7834]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__18__verbosity;
    __Vtask_uvm_report_info__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__18__line;
    __Vtask_uvm_report_info__18__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__18__report_enabled_checked;
    __Vtask_uvm_report_info__18__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_5__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk2__DOT__i;
    CData/*0:0*/ unnamedblk2__DOT__i__Vfirst;
    unnamedblk2__DOT__i__Vfirst = 0;
    std::string str;
    Vtb_rng_access_t__struct__0 access_record;
    VlQueue<std::string> qs;
    {
        str = ""s;
        access_record.__PVT__read_time = 0;
        access_record.__PVT__write_time = 0;
        access_record.__PVT__read_count = 0;
        access_record.__PVT__write_count = 0;
        qs.clear();
        qs.atDefault().clear();
        if ((0U == this->__PVT__access.size())) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[7836]);
        }
        __VlefExpr_0 = (0U != this->__PVT__access.first(unnamedblk2__DOT__i));
        if (__VlefExpr_0) {
            unnamedblk2__DOT__i__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk2__DOT__i__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__access.next(unnamedblk2__DOT__i));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk2__DOT__i__Vfirst = 0U;
                str = unnamedblk2__DOT__i;
                access_record = this->__PVT__access
                    .at(str);
                qs.push_back(VL_SFORMATF_N_NX("%@ reads: %0# @ %0t  writes: %0# @ %0t\n",0,
                                              -1,&(str),
                                              32,access_record
                                              .__PVT__read_count,
                                              64,access_record
                                              .__PVT__read_time,
                                              -12,32,
                                              access_record
                                              .__PVT__write_count,
                                              64,access_record
                                              .__PVT__write_time,
                                              -12) );
                ++(vlSymsp->__Vcoverage[7840]);
            }
            __VlefExpr_2 = (0U != this->__PVT__access.next(unnamedblk2__DOT__i));
            if (__VlefExpr_2) {
                ++(vlSymsp->__Vcoverage[7837]);
            }
            if (unnamedblk2__DOT__i__Vfirst) {
                ++(vlSymsp->__Vcoverage[7838]);
            }
            __VlefExpr_3 = (1U & (~ (IData)(unnamedblk2__DOT__i__Vfirst)));
            if (__VlefExpr_3) {
                __VlefExpr_3 = (0U == this->__PVT__access.next(unnamedblk2__DOT__i));
            }
            if (__VlefExpr_3) {
                ++(vlSymsp->__Vcoverage[7839]);
            }
            ++(vlSymsp->__Vcoverage[7841]);
        } else {
            ++(vlSymsp->__Vcoverage[7842]);
        }
        this->__Vfunc_uvm_report_enabled__13__id = "UVM/RESOURCE/ACCESSOR"s;
        __Vfunc_uvm_report_enabled__13__severity = 0U;
        __Vfunc_uvm_report_enabled__13__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__14__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_4__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            this->__Vfunc_m_uvm_string_queue_join__17__Vfuncout = ""s;
            this->__Vfunc_m_uvm_string_queue_join__17__Vfuncout 
                = VL_CVT_PACK_STR_ND(qs);
            ++(vlSymsp->__Vcoverage[434]);
            __VlefCall_5__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__17__Vfuncout;
            __Vtask_uvm_report_info__18__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__18__context_name = ""s;
            __Vtask_uvm_report_info__18__line = 0x00000214U;
            this->__Vtask_uvm_report_info__18__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh"s;
            __Vtask_uvm_report_info__18__verbosity = 0U;
            this->__Vtask_uvm_report_info__18__message 
                = VL_CVT_PACK_STR_NN(__VlefCall_5__m_uvm_string_queue_join);
            this->__Vtask_uvm_report_info__18__id = "UVM/RESOURCE/ACCESSOR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__18__id, this->__Vtask_uvm_report_info__18__message, __Vtask_uvm_report_info__18__verbosity, this->__Vtask_uvm_report_info__18__filename, __Vtask_uvm_report_info__18__line, this->__Vtask_uvm_report_info__18__context_name, (IData)(__Vtask_uvm_report_info__18__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[7843]);
        } else {
            ++(vlSymsp->__Vcoverage[7844]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[7845]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_init_access_record(Vtb_rng__Syms* __restrict vlSymsp, Vtb_rng_access_t__struct__0 &access_record) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_init_access_record\n"); );
    // Body
    access_record.__PVT__read_time = 0ULL;
    access_record.__PVT__write_time = 0ULL;
    access_record.__PVT__read_count = 0U;
    access_record.__PVT__write_count = 0U;
    ++(vlSymsp->__Vcoverage[7846]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__modified = 0;
    __PVT__read_only = 0;
    __PVT__access.atDefault().__PVT__read_time = VL_SCOPED_RAND_RESET_Q(64, 12052251328565956498ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__write_time = VL_SCOPED_RAND_RESET_Q(64, 12052251328565956498ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__read_count = 0;
    __PVT__access.atDefault().__PVT__write_count = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_resource_base::~Vtb_rng_uvm_pkg__03a__03auvm_resource_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "modified:" + VL_TO_STRING(__PVT__modified);
    out += ", read_only:" + VL_TO_STRING(__PVT__read_only);
    out += ", access:" + VL_TO_STRING(__PVT__access);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
