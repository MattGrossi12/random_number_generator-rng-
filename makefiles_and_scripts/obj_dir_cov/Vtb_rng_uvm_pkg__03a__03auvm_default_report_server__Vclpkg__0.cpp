// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_default_report_server"s;
    ++(vlSymsp->__Vcoverage[15369]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_report_server::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__max_quit_overridable = 1U;
    ++(vlSymsp->__Vcoverage[15364]);
    this->__PVT__enable_report_id_count_summary = 1U;
    ++(vlSymsp->__Vcoverage[15365]);
    this->__PVT__record_all_messages = 0U;
    ++(vlSymsp->__Vcoverage[15366]);
    this->__PVT__show_verbosity = 0U;
    ++(vlSymsp->__Vcoverage[15367]);
    this->__PVT__show_terminator = 0U;
    ++(vlSymsp->__Vcoverage[15368]);
    /*super.new*/;
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, 0U, 1U);
    this->__VnoInFunc_reset_quit_count(vlSymsp);
    this->__VnoInFunc_reset_severity_counts(vlSymsp);
    ++(vlSymsp->__Vcoverage[15370]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    VlWide<128>/*4095:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_8;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    // Body
    CData/*0:0*/ __VlefExpr_5;
    VlWide<128>/*4095:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    VlWide<128>/*4095:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    CData/*1:0*/ l_severity_count_index;
    std::string l_id_count_index;
    l_severity_count_index = 0U;
    l_id_count_index = ""s;
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__m_quit_count);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 338)->__VnoInFunc_print_field(vlProcess, vlSymsp, "quit_count"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT__m_max_quit_count);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 340)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_quit_count"s, __Vtemp_2, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    __Vtemp_3[0U] = this->__PVT__max_quit_overridable;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_3[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 342)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_quit_overridable"s, __Vtemp_3, 1U, 0x01000000U, 0x2eU, "bit"s);
    __VlefExpr_0 = (0U != this->__PVT__m_severity_count.first(l_severity_count_index));
    if (__VlefExpr_0) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 346)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_count"s, this->__PVT__m_severity_count.size(), "severity counts"s, 0x2eU);
        while (true) {
            VL_EXTENDS_WI(4096,32, __VlefExpr_1, this->__PVT__m_severity_count
                          .at((IData)(l_severity_count_index)));
            __Vtemp_4 = Vtb_rng___024unit::__Venumtab_enum_name21
                [l_severity_count_index];
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 348)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_4)) , __VlefExpr_1, 0x00000020U, 0x02000000U, 0x2eU, ""s);
            ++(vlSymsp->__Vcoverage[15371]);
            __VlefExpr_2 = (0U != this->__PVT__m_severity_count.next(l_severity_count_index));
            if (!(__VlefExpr_2)) break;
            ++(vlSymsp->__Vcoverage[15372]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 351)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15373]);
    } else {
        ++(vlSymsp->__Vcoverage[15374]);
    }
    __VlefExpr_3 = (0U != this->__PVT__m_id_count.first(l_id_count_index));
    if (__VlefExpr_3) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 355)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_count"s, this->__PVT__m_id_count.size(), "id counts"s, 0x2eU);
        while (true) {
            VL_EXTENDS_WI(4096,32, __VlefExpr_4, this->__PVT__m_id_count
                          .at(l_id_count_index));
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 357)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(l_id_count_index)) , __VlefExpr_4, 0x00000020U, 0x02000000U, 0x2eU, ""s);
            ++(vlSymsp->__Vcoverage[15375]);
            __VlefExpr_5 = (0U != this->__PVT__m_id_count.next(l_id_count_index));
            if (!(__VlefExpr_5)) break;
            ++(vlSymsp->__Vcoverage[15376]);
        }
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 360)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[15377]);
    } else {
        ++(vlSymsp->__Vcoverage[15378]);
    }
    __Vtemp_5[0U] = this->__PVT__enable_report_id_count_summary;
    __Vilp2 = 1U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vtemp_5[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 363)->__VnoInFunc_print_field(vlProcess, vlSymsp, "enable_report_id_count_summary"s, __Vtemp_5, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_6[0U] = this->__PVT__record_all_messages;
    __Vilp3 = 1U;
    while ((__Vilp3 <= 0x0000007fU)) {
        __Vtemp_6[__Vilp3] = 0U;
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 365)->__VnoInFunc_print_field(vlProcess, vlSymsp, "record_all_messages"s, __Vtemp_6, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_7[0U] = this->__PVT__show_verbosity;
    __Vilp4 = 1U;
    while ((__Vilp4 <= 0x0000007fU)) {
        __Vtemp_7[__Vilp4] = 0U;
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 367)->__VnoInFunc_print_field(vlProcess, vlSymsp, "show_verbosity"s, __Vtemp_7, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_8[0U] = this->__PVT__show_terminator;
    __Vilp5 = 1U;
    while ((__Vilp5 <= 0x0000007fU)) {
        __Vtemp_8[__Vilp5] = 0U;
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 369)->__VnoInFunc_print_field(vlProcess, vlSymsp, "show_terminator"s, __Vtemp_8, 1U, 0x01000000U, 0x2eU, "bit"s);
    ++(vlSymsp->__Vcoverage[15379]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_max_quit_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_max_quit_count\n"); );
    // Body
    get_max_quit_count__Vfuncrtn = this->__PVT__m_max_quit_count;
    ++(vlSymsp->__Vcoverage[15380]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_max_quit_count\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__17__verbosity;
    __Vtask_uvm_report_info__17__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__17__line;
    __Vtask_uvm_report_info__17__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__17__report_enabled_checked;
    __Vtask_uvm_report_info__17__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    // Body
    {
        if (this->__PVT__max_quit_overridable) {
            ++(vlSymsp->__Vcoverage[15382]);
        } else {
            __Vtask_uvm_report_info__17__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_info__17__context_name = ""s;
            __Vtask_uvm_report_info__17__line = 0U;
            this->__Vtask_uvm_report_info__17__filename = ""s;
            __Vtask_uvm_report_info__17__verbosity = 0U;
            this->__Vtask_uvm_report_info__17__message 
                = VL_SFORMATF_N_NX("The max quit count setting of %0d is not overridable to %0d due to a previous setting.",0,
                                   32,this->__PVT__m_max_quit_count,
                                   32,count) ;
            this->__Vtask_uvm_report_info__17__id = "NOMAXQUITOVR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__17__id, this->__Vtask_uvm_report_info__17__message, __Vtask_uvm_report_info__17__verbosity, this->__Vtask_uvm_report_info__17__filename, __Vtask_uvm_report_info__17__line, this->__Vtask_uvm_report_info__17__context_name, (IData)(__Vtask_uvm_report_info__17__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            goto __Vlabel0;
        }
        this->__PVT__max_quit_overridable = overridable;
        this->__PVT__m_max_quit_count = (VL_GTS_III(32, 0U, count)
                                          ? 0U : count);
        __Vlabel0: ;
    }
    if (VL_GTS_III(32, 0U, count)) {
        ++(vlSymsp->__Vcoverage[15383]);
    }
    if (VL_LTES_III(32, 0U, count)) {
        ++(vlSymsp->__Vcoverage[15384]);
    }
    ++(vlSymsp->__Vcoverage[15385]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_quit_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_quit_count\n"); );
    // Body
    get_quit_count__Vfuncrtn = this->__PVT__m_quit_count;
    ++(vlSymsp->__Vcoverage[15386]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_quit_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = (VL_GTS_III(32, 0U, quit_count)
                                  ? 0U : quit_count);
    if (VL_GTS_III(32, 0U, quit_count)) {
        ++(vlSymsp->__Vcoverage[15387]);
    }
    if (VL_LTES_III(32, 0U, quit_count)) {
        ++(vlSymsp->__Vcoverage[15388]);
    }
    ++(vlSymsp->__Vcoverage[15389]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_quit_count(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = ((IData)(1U) + this->__PVT__m_quit_count);
    ++(vlSymsp->__Vcoverage[15390]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_quit_count(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = 0U;
    ++(vlSymsp->__Vcoverage[15391]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_is_quit_count_reached(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_quit_count_reached__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_is_quit_count_reached\n"); );
    // Body
    is_quit_count_reached__Vfuncrtn = VL_GTES_III(32, this->__PVT__m_quit_count, this->__PVT__m_max_quit_count);
    ++(vlSymsp->__Vcoverage[15392]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_count(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_count\n"); );
    // Body
    get_severity_count__Vfuncrtn = this->__PVT__m_severity_count
        .at((IData)(severity));
    ++(vlSymsp->__Vcoverage[15393]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_severity_count(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_severity_count\n"); );
    // Body
    this->__PVT__m_severity_count.at((IData)(severity)) 
        = (VL_GTS_III(32, 0U, count) ? 0U : count);
    if (VL_GTS_III(32, 0U, count)) {
        ++(vlSymsp->__Vcoverage[15394]);
    }
    if (VL_LTES_III(32, 0U, count)) {
        ++(vlSymsp->__Vcoverage[15395]);
    }
    ++(vlSymsp->__Vcoverage[15396]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_severity_count(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_severity_count\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    __VlefExpr_0 = ((IData)(1U) + this->__PVT__m_severity_count
                    .at((IData)(severity)));
    this->__PVT__m_severity_count.at((IData)(severity)) 
        = __VlefExpr_0;
    ++(vlSymsp->__Vcoverage[15397]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_severity_counts(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_severity_counts\n"); );
    // Body
    CData/*1:0*/ s;
    s = 0U;
    {
        while (true) {
            this->__PVT__m_severity_count.at((IData)(s)) = 0U;
            if ((3U == (IData)(s))) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[15399]);
            }
            s = Vtb_rng___024unit::__Venumtab_enum_next21
                [s];
            ++(vlSymsp->__Vcoverage[15400]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15401]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_count(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_count\n"); );
    // Body
    {
        get_id_count__Vfuncrtn = 0U;
        if (this->__PVT__m_id_count.exists(id)) {
            get_id_count__Vfuncrtn = this->__PVT__m_id_count
                .at(id);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15403]);
        }
        get_id_count__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15404]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_id_count(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_id_count\n"); );
    // Body
    this->__PVT__m_id_count.at(id) = (VL_GTS_III(32, 0U, count)
                                       ? 0U : count);
    if (VL_GTS_III(32, 0U, count)) {
        ++(vlSymsp->__Vcoverage[15405]);
    }
    if (VL_LTES_III(32, 0U, count)) {
        ++(vlSymsp->__Vcoverage[15406]);
    }
    ++(vlSymsp->__Vcoverage[15407]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_id_count(Vtb_rng__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_id_count\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    if (this->__PVT__m_id_count.exists(id)) {
        __VlefExpr_0 = ((IData)(1U) + this->__PVT__m_id_count
                        .at(id));
        this->__PVT__m_id_count.at(id) = __VlefExpr_0;
        ++(vlSymsp->__Vcoverage[15408]);
    } else {
        this->__PVT__m_id_count.at(id) = 1U;
        ++(vlSymsp->__Vcoverage[15409]);
    }
    ++(vlSymsp->__Vcoverage[15410]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_message_database(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> database) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_message_database\n"); );
    // Body
    this->__PVT__m_message_db = database;
    ++(vlSymsp->__Vcoverage[15411]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_message_database(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_message_database\n"); );
    // Body
    get_message_database__Vfuncrtn = this->__PVT__m_message_db;
    ++(vlSymsp->__Vcoverage[15412]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_set(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_set\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    CData/*1:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    CData/*0:0*/ unnamedblk1__DOT__idx__Vfirst;
    unnamedblk1__DOT__idx__Vfirst = 0;
    q.clear();
    q.atDefault() = 0;
    __VlefExpr_0 = (0U != this->__PVT__m_severity_count.first(unnamedblk1__DOT__idx));
    if (__VlefExpr_0) {
        unnamedblk1__DOT__idx__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk1__DOT__idx__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_severity_count.next(unnamedblk1__DOT__idx));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk1__DOT__idx__Vfirst = 0U;
            q.push_back(unnamedblk1__DOT__idx);
            ++(vlSymsp->__Vcoverage[15416]);
        }
        __VlefExpr_2 = (0U != this->__PVT__m_severity_count.next(unnamedblk1__DOT__idx));
        if (__VlefExpr_2) {
            ++(vlSymsp->__Vcoverage[15413]);
        }
        if (unnamedblk1__DOT__idx__Vfirst) {
            ++(vlSymsp->__Vcoverage[15414]);
        }
        __VlefExpr_3 = (1U & (~ (IData)(unnamedblk1__DOT__idx__Vfirst)));
        if (__VlefExpr_3) {
            __VlefExpr_3 = (0U == this->__PVT__m_severity_count.next(unnamedblk1__DOT__idx));
        }
        if (__VlefExpr_3) {
            ++(vlSymsp->__Vcoverage[15415]);
        }
        ++(vlSymsp->__Vcoverage[15417]);
    } else {
        ++(vlSymsp->__Vcoverage[15418]);
    }
    ++(vlSymsp->__Vcoverage[15419]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_set(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_set\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk2__DOT__idx;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vfirst;
    unnamedblk2__DOT__idx__Vfirst = 0;
    q.clear();
    q.atDefault().clear();
    __VlefExpr_0 = (0U != this->__PVT__m_id_count.first(unnamedblk2__DOT__idx));
    if (__VlefExpr_0) {
        unnamedblk2__DOT__idx__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk2__DOT__idx__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_id_count.next(unnamedblk2__DOT__idx));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk2__DOT__idx__Vfirst = 0U;
            q.push_back(unnamedblk2__DOT__idx);
            ++(vlSymsp->__Vcoverage[15423]);
        }
        __VlefExpr_2 = (0U != this->__PVT__m_id_count.next(unnamedblk2__DOT__idx));
        if (__VlefExpr_2) {
            ++(vlSymsp->__Vcoverage[15420]);
        }
        if (unnamedblk2__DOT__idx__Vfirst) {
            ++(vlSymsp->__Vcoverage[15421]);
        }
        __VlefExpr_3 = (1U & (~ (IData)(unnamedblk2__DOT__idx__Vfirst)));
        if (__VlefExpr_3) {
            __VlefExpr_3 = (0U == this->__PVT__m_id_count.next(unnamedblk2__DOT__idx));
        }
        if (__VlefExpr_3) {
            ++(vlSymsp->__Vcoverage[15422]);
        }
        ++(vlSymsp->__Vcoverage[15424]);
    } else {
        ++(vlSymsp->__Vcoverage[15425]);
    }
    ++(vlSymsp->__Vcoverage[15426]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_f_display(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_f_display\n"); );
    // Body
    if ((0U == file)) {
        VL_WRITEF_NX("%@\n",0,-1,&(str));
        ++(vlSymsp->__Vcoverage[15427]);
    } else {
        VL_FWRITEF_NX(file,"%@\n",0,-1,&(str));
        ++(vlSymsp->__Vcoverage[15428]);
    }
    ++(vlSymsp->__Vcoverage[15429]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report_message\n"); );
    // Body
    IData/*31:0*/ __VlefCall_2__get_action;
    IData/*31:0*/ __VlefCall_1__get_action;
    IData/*31:0*/ __VlefCall_0__process_all_report_catchers;
    std::string unnamedblk3__DOT__m;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk3__DOT__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> unnamedblk3__DOT__svr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> l_report_handler;
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    CData/*0:0*/ report_ok;
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 564)->__VnoInFunc_get_report_handler(vlSymsp, l_report_handler);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    report_ok = 1U;
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 569)->__VnoInFunc_set_report_server(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_default_report_server>{this});
    if (report_ok) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_process_all_report_catchers(vlProcess, vlSymsp, report_message, __VlefCall_0__process_all_report_catchers);
        report_ok = (1U & __VlefCall_0__process_all_report_catchers);
        ++(vlSymsp->__Vcoverage[15430]);
    } else {
        ++(vlSymsp->__Vcoverage[15431]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 574)->__VnoInFunc_get_action(vlSymsp, __VlefCall_1__get_action);
    if ((0U == __VlefCall_1__get_action)) {
        report_ok = 0U;
        ++(vlSymsp->__Vcoverage[15432]);
    } else {
        ++(vlSymsp->__Vcoverage[15433]);
    }
    if (report_ok) {
        unnamedblk3__DOT__m = ""s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__cs);
        VL_NULL_CHECK(unnamedblk3__DOT__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 581)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, unnamedblk3__DOT__svr);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 584)->__VnoInFunc_get_action(vlSymsp, __VlefCall_2__get_action);
        if ((0U != (3U & __VlefCall_2__get_action))) {
            VL_NULL_CHECK(unnamedblk3__DOT__svr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 585)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, report_message, ""s, unnamedblk3__DOT__m);
            ++(vlSymsp->__Vcoverage[15434]);
        } else {
            ++(vlSymsp->__Vcoverage[15435]);
        }
        VL_NULL_CHECK(unnamedblk3__DOT__svr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 587)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, report_message, unnamedblk3__DOT__m);
        ++(vlSymsp->__Vcoverage[15436]);
    } else {
        ++(vlSymsp->__Vcoverage[15437]);
    }
    ++(vlSymsp->__Vcoverage[15438]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_execute_report_message\n"); );
    // Body
    IData/*31:0*/ __VlefCall_28__get_action;
    IData/*31:0*/ __VlefCall_27__get_action;
    IData/*31:0*/ __VlefCall_26__get_action;
    CData/*0:0*/ __VlefCall_25__is_quit_count_reached;
    IData/*31:0*/ __VlefCall_24__get_max_quit_count;
    IData/*31:0*/ __VlefCall_23__get_action;
    IData/*31:0*/ __VlefCall_22__get_file;
    IData/*31:0*/ __VlefCall_21__get_file;
    CData/*0:0*/ __VlefLogOr_20;
    IData/*31:0*/ __VlefCall_19__get_file;
    IData/*31:0*/ __VlefCall_18__get_file;
    IData/*31:0*/ __VlefCall_17__get_action;
    IData/*31:0*/ __VlefCall_16__get_action;
    std::string __VlefCall_15__get_type_name;
    std::string __VlefCall_14__get_name;
    std::string __VlefCall_13__get_name;
    std::string __VlefCall_12__get_name;
    std::string __VlefCall_11__get_name;
    std::string __VlefCall_10__get_name;
    std::string __VlefCall_9__get_name;
    std::string __VlefCall_8__get_name;
    CData/*0:0*/ __VlefLogAnd_7;
    std::string __VlefCall_6__get_name;
    std::string __VlefCall_5__get_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__get_action;
    IData/*31:0*/ __VlefCall_2__get_action;
    std::string __VlefCall_1__get_id;
    CData/*1:0*/ __VlefCall_0__get_severity;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> unnamedblk4__DOT__stream;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT__ro;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> unnamedblk4__DOT__rh;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> unnamedblk4__DOT__unnamedblk5__DOT__db;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__unnamedblk7__DOT__recorder;
    IData/*31:0*/ unnamedblk8__DOT__tmp_file;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> unnamedblk9__DOT__l_root;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk9__DOT__cs;
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 610)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_0__get_severity);
    this->__VnoInFunc_incr_severity_count(vlSymsp, __VlefCall_0__get_severity);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 611)->__VnoInFunc_get_id(vlSymsp, __VlefCall_1__get_id);
    this->__VnoInFunc_incr_id_count(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get_id));
    if (this->__PVT__record_all_messages) {
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 614)->__VnoInFunc_get_action(vlSymsp, __VlefCall_2__get_action);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 614)->__VnoInFunc_set_action(vlSymsp, 
                                                                                (0x00000040U 
                                                                                | __VlefCall_2__get_action));
        ++(vlSymsp->__Vcoverage[15439]);
    } else {
        ++(vlSymsp->__Vcoverage[15440]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 617)->__VnoInFunc_get_action(vlSymsp, __VlefCall_3__get_action);
    if ((0U != (0x00000040U & __VlefCall_3__get_action))) {
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 619)->__VnoInFunc_get_report_object(vlSymsp, unnamedblk4__DOT__ro);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 620)->__VnoInFunc_get_report_handler(vlSymsp, unnamedblk4__DOT__rh);
        VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 623)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        __VlefLogAnd_7 = this->__PVT__m_streams.exists(__VlefCall_4__get_name);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 623)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
            VL_NULL_CHECK(unnamedblk4__DOT__rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 623)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
            __VlefLogAnd_7 = this->__PVT__m_streams
                .at(__VlefCall_5__get_name).exists(__VlefCall_6__get_name);
        }
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 624)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
            VL_NULL_CHECK(unnamedblk4__DOT__rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 624)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
            unnamedblk4__DOT__stream = this->__PVT__m_streams
                .at(__VlefCall_8__get_name).at(__VlefCall_9__get_name);
            ++(vlSymsp->__Vcoverage[15441]);
        } else {
            ++(vlSymsp->__Vcoverage[15442]);
        }
        if ((VlNull{} == unnamedblk4__DOT__stream)) {
            this->__VnoInFunc_get_message_database(vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__db);
            if ((VlNull{} == unnamedblk4__DOT__unnamedblk5__DOT__db)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 636)->__VnoInFunc_get_default_tr_database(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__db);
                ++(vlSymsp->__Vcoverage[15443]);
            } else {
                ++(vlSymsp->__Vcoverage[15444]);
            }
            if ((VlNull{} != unnamedblk4__DOT__unnamedblk5__DOT__db)) {
                VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 640)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 640)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk5__DOT__db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 640)->__VnoInFunc_open_stream(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_10__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_name), "MESSAGES"s, unnamedblk4__DOT__stream);
                VL_NULL_CHECK(unnamedblk4__DOT__ro, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 642)->__VnoInFunc_get_name(vlSymsp, __VlefCall_12__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 642)->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                this->__PVT__m_streams.at(__VlefCall_12__get_name).at(__VlefCall_13__get_name) 
                    = unnamedblk4__DOT__stream;
                ++(vlSymsp->__Vcoverage[15445]);
            } else {
                ++(vlSymsp->__Vcoverage[15446]);
            }
            ++(vlSymsp->__Vcoverage[15447]);
        } else {
            ++(vlSymsp->__Vcoverage[15448]);
        }
        if ((VlNull{} != unnamedblk4__DOT__stream)) {
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 646)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 646)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_15__get_type_name);
            VL_NULL_CHECK(unnamedblk4__DOT__stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 646)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_14__get_name), 0ULL, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_15__get_type_name), unnamedblk4__DOT__unnamedblk7__DOT__recorder);
            if ((VlNull{} != unnamedblk4__DOT__unnamedblk7__DOT__recorder)) {
                VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 648)->__VnoInFunc_record(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk7__DOT__recorder);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk7__DOT__recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 649)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                ++(vlSymsp->__Vcoverage[15449]);
            } else {
                ++(vlSymsp->__Vcoverage[15450]);
            }
            ++(vlSymsp->__Vcoverage[15451]);
        } else {
            ++(vlSymsp->__Vcoverage[15452]);
        }
        ++(vlSymsp->__Vcoverage[15453]);
    } else {
        ++(vlSymsp->__Vcoverage[15454]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 655)->__VnoInFunc_get_action(vlSymsp, __VlefCall_16__get_action);
    if (VL_UNLIKELY(((0U != (1U & __VlefCall_16__get_action))))) {
        VL_WRITEF_NX("%@\n",0,-1,&(composed_message));
        ++(vlSymsp->__Vcoverage[15455]);
    } else {
        ++(vlSymsp->__Vcoverage[15456]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 662)->__VnoInFunc_get_action(vlSymsp, __VlefCall_17__get_action);
    if ((0U != (2U & __VlefCall_17__get_action))) {
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 663)->__VnoInFunc_get_file(vlSymsp, __VlefCall_18__get_file);
        __VlefLogOr_20 = (0U == __VlefCall_18__get_file);
        if ((1U & (~ (IData)(__VlefLogOr_20)))) {
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 664)->__VnoInFunc_get_file(vlSymsp, __VlefCall_19__get_file);
            __VlefLogOr_20 = (0x80000001U != __VlefCall_19__get_file);
        }
        if (__VlefLogOr_20) {
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 665)->__VnoInFunc_get_file(vlSymsp, unnamedblk8__DOT__tmp_file);
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 666)->__VnoInFunc_get_file(vlSymsp, __VlefCall_21__get_file);
            if ((0U == (0x80000000U & __VlefCall_21__get_file))) {
                VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 667)->__VnoInFunc_get_file(vlSymsp, __VlefCall_22__get_file);
                unnamedblk8__DOT__tmp_file = (0xfffffffeU 
                                              & __VlefCall_22__get_file);
                ++(vlSymsp->__Vcoverage[15457]);
            } else {
                ++(vlSymsp->__Vcoverage[15458]);
            }
            this->__VnoInFunc_f_display(vlSymsp, unnamedblk8__DOT__tmp_file, composed_message);
            ++(vlSymsp->__Vcoverage[15459]);
        } else {
            ++(vlSymsp->__Vcoverage[15460]);
        }
        ++(vlSymsp->__Vcoverage[15461]);
    } else {
        ++(vlSymsp->__Vcoverage[15462]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 673)->__VnoInFunc_get_action(vlSymsp, __VlefCall_23__get_action);
    if ((0U != (4U & __VlefCall_23__get_action))) {
        this->__VnoInFunc_get_max_quit_count(vlSymsp, __VlefCall_24__get_max_quit_count);
        if ((0U != __VlefCall_24__get_max_quit_count)) {
            this->__VnoInFunc_incr_quit_count(vlSymsp);
            this->__VnoInFunc_is_quit_count_reached(vlSymsp, __VlefCall_25__is_quit_count_reached);
            if (__VlefCall_25__is_quit_count_reached) {
                VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 678)->__VnoInFunc_get_action(vlSymsp, __VlefCall_26__get_action);
                VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 678)->__VnoInFunc_set_action(vlSymsp, 
                                                                                (8U 
                                                                                | __VlefCall_26__get_action));
                ++(vlSymsp->__Vcoverage[15463]);
            } else {
                ++(vlSymsp->__Vcoverage[15464]);
            }
            ++(vlSymsp->__Vcoverage[15465]);
        } else {
            ++(vlSymsp->__Vcoverage[15466]);
        }
        ++(vlSymsp->__Vcoverage[15467]);
    } else {
        ++(vlSymsp->__Vcoverage[15468]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 684)->__VnoInFunc_get_action(vlSymsp, __VlefCall_27__get_action);
    if ((0U != (8U & __VlefCall_27__get_action))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__cs);
        VL_NULL_CHECK(unnamedblk9__DOT__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 688)->__VnoInFunc_get_root(vlProcess, vlSymsp, unnamedblk9__DOT__l_root);
        VL_NULL_CHECK(unnamedblk9__DOT__l_root, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 689)->__VnoInFunc_die(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[15469]);
    } else {
        ++(vlSymsp->__Vcoverage[15470]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 693)->__VnoInFunc_get_action(vlSymsp, __VlefCall_28__get_action);
    if (VL_UNLIKELY(((0U != (0x00000020U & __VlefCall_28__get_action))))) {
        VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 694, "");
    } else {
        ++(vlSymsp->__Vcoverage[15471]);
    }
    ++(vlSymsp->__Vcoverage[15472]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_report_message\n"); );
    // Body
    std::string __VlefCall_11__get_id;
    std::string __VlefCall_10__sprint;
    std::string __VlefCall_9__get_message;
    IData/*31:0*/ __VlefCall_8__size;
    IData/*31:0*/ __VlefCall_7__get_verbosity;
    IData/*31:0*/ __VlefCond_6;
    IData/*31:0*/ __VlefCall_5__get_verbosity;
    std::string __VlefCall_4__get_context;
    std::string __VlefCall_3__get_context;
    std::string __VlefCall_2__get_filename;
    IData/*31:0*/ __VlefCall_1__get_line;
    std::string __VlefCall_0__get_filename;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> unnamedblk10__DOT__uvm_default_printer;
    compose_report_message__Vfuncrtn = ""s;
    std::string sev_string;
    CData/*1:0*/ l_severity;
    IData/*31:0*/ l_verbosity;
    std::string filename_line_string;
    std::string time_str;
    std::string line_str;
    std::string context_str;
    std::string verbosity_str;
    std::string terminator_str;
    std::string msg_body_str;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container> el_container;
    std::string prefix;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> l_report_handler;
    sev_string = ""s;
    l_severity = 0U;
    l_verbosity = 0U;
    filename_line_string = ""s;
    time_str = ""s;
    line_str = ""s;
    context_str = ""s;
    verbosity_str = ""s;
    terminator_str = ""s;
    msg_body_str = ""s;
    prefix = ""s;
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 782)->__VnoInFunc_get_severity(vlSymsp, l_severity);
    sev_string = Vtb_rng___024unit::__Venumtab_enum_name21
        [l_severity];
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 785)->__VnoInFunc_get_filename(vlSymsp, __VlefCall_0__get_filename);
    if ((""s != __VlefCall_0__get_filename)) {
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 786)->__VnoInFunc_get_line(vlSymsp, __VlefCall_1__get_line);
        line_str = VL_SFORMATF_N_NX("%0d",0,32,__VlefCall_1__get_line) ;
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 787)->__VnoInFunc_get_filename(vlSymsp, __VlefCall_2__get_filename);
        filename_line_string = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__VlefCall_2__get_filename, "("s), line_str), ") "s);
        ++(vlSymsp->__Vcoverage[15473]);
    } else {
        ++(vlSymsp->__Vcoverage[15474]);
    }
    VL_SFORMAT_NX(64,time_str,"%0t",0,64,VL_TIME_UNITED_Q(1),
                  -12);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 793)->__VnoInFunc_get_context(vlSymsp, __VlefCall_3__get_context);
    if ((""s != __VlefCall_3__get_context)) {
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 794)->__VnoInFunc_get_context(vlSymsp, __VlefCall_4__get_context);
        context_str = VL_CONCATN_NNN("@@"s, __VlefCall_4__get_context);
        ++(vlSymsp->__Vcoverage[15475]);
    } else {
        ++(vlSymsp->__Vcoverage[15476]);
    }
    if (this->__PVT__show_verbosity) {
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 797)->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_5__get_verbosity);
        if (Vtb_rng___024unit::__Venumtab_enum_valid25
            .at(__VlefCall_5__get_verbosity)) {
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 797)->__VnoInFunc_get_verbosity(vlSymsp, l_verbosity);
            __VlefCond_6 = 1U;
        } else {
            __VlefCond_6 = 0U;
        }
        if ((0U != __VlefCond_6)) {
            verbosity_str = Vtb_rng___024unit::__Venumtab_enum_name25
                .at(l_verbosity);
            ++(vlSymsp->__Vcoverage[15477]);
        } else {
            VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 800)->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_7__get_verbosity);
            verbosity_str = VL_SFORMATF_N_NX("%0d",0,
                                             32,__VlefCall_7__get_verbosity) ;
            ++(vlSymsp->__Vcoverage[15478]);
        }
        verbosity_str = VL_CONCATN_NNN(VL_CONCATN_NNN("("s, verbosity_str), ")"s);
        ++(vlSymsp->__Vcoverage[15479]);
    } else {
        ++(vlSymsp->__Vcoverage[15480]);
    }
    if (this->__PVT__show_terminator) {
        terminator_str = VL_CONCATN_NNN(" -"s, sev_string);
        ++(vlSymsp->__Vcoverage[15481]);
    } else {
        ++(vlSymsp->__Vcoverage[15482]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 807)->__VnoInFunc_get_element_container(vlSymsp, el_container);
    VL_NULL_CHECK(el_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 808)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
    if ((0U == __VlefCall_8__size)) {
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 809)->__VnoInFunc_get_message(vlSymsp, msg_body_str);
        ++(vlSymsp->__Vcoverage[15483]);
    } else {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, unnamedblk10__DOT__uvm_default_printer);
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 812)->__VnoInFunc_get_line_prefix(vlSymsp, prefix);
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 813)->__VnoInFunc_set_line_prefix(vlSymsp, " +"s);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 814)->__VnoInFunc_get_message(vlSymsp, __VlefCall_9__get_message);
        VL_NULL_CHECK(el_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 814)->__VnoInFunc_sprint(vlProcess, vlSymsp, VlNull{}, __VlefCall_10__sprint);
        msg_body_str = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_9__get_message, "\n"s), __VlefCall_10__sprint);
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 815)->__VnoInFunc_set_line_prefix(vlSymsp, prefix);
        ++(vlSymsp->__Vcoverage[15484]);
    }
    if ((""s == report_object_name)) {
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 819)->__VnoInFunc_get_report_handler(vlSymsp, l_report_handler);
        VL_NULL_CHECK(l_report_handler, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 820)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, report_object_name);
        ++(vlSymsp->__Vcoverage[15485]);
    } else {
        ++(vlSymsp->__Vcoverage[15486]);
    }
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 825)->__VnoInFunc_get_id(vlSymsp, __VlefCall_11__get_id);
    compose_report_message__Vfuncrtn = VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(sev_string, verbosity_str), " "s), filename_line_string), "@ "s), time_str), ": "s), report_object_name), context_str), " ["s), __VlefCall_11__get_id), "] "s), msg_body_str), terminator_str);
    ++(vlSymsp->__Vcoverage[15487]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_report_summarize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_report_summarize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__100__verbosity;
    __Vfunc_uvm_report_enabled__100__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__100__severity;
    __Vfunc_uvm_report_enabled__100__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__105__verbosity;
    __Vtask_uvm_report_info__105__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__105__line;
    __Vtask_uvm_report_info__105__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__105__report_enabled_checked;
    __Vtask_uvm_report_info__105__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
    std::string __Vtemp_1;
    // Body
    std::string __VlefCall_9__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_7;
    CData/*0:0*/ __VlefExpr_6;
    CData/*0:0*/ __VlefExpr_5;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    CData/*1:0*/ unnamedblk11__DOT__s;
    unnamedblk11__DOT__s = 0;
    CData/*0:0*/ unnamedblk11__DOT__s__Vfirst;
    unnamedblk11__DOT__s__Vfirst = 0;
    std::string unnamedblk12__DOT__id;
    CData/*0:0*/ unnamedblk12__DOT__id__Vfirst;
    unnamedblk12__DOT__id__Vfirst = 0;
    VlQueue<std::string> q;
    q.clear();
    q.atDefault().clear();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_summarize(vlProcess, vlSymsp);
    q.push_back("\n--- UVM Report Summary ---\n\n"s);
    if ((0U != this->__PVT__m_max_quit_count)) {
        if (VL_GTES_III(32, this->__PVT__m_quit_count, this->__PVT__m_max_quit_count)) {
            q.push_back("Quit count reached!\n"s);
            ++(vlSymsp->__Vcoverage[15488]);
        } else {
            ++(vlSymsp->__Vcoverage[15489]);
        }
        q.push_back(VL_SFORMATF_N_NX("Quit count : %5d of %5d\n",0,
                                     32,this->__PVT__m_quit_count,
                                     32,this->__PVT__m_max_quit_count) );
        ++(vlSymsp->__Vcoverage[15490]);
    } else {
        ++(vlSymsp->__Vcoverage[15491]);
    }
    q.push_back("** Report counts by severity\n"s);
    __VlefExpr_0 = (0U != this->__PVT__m_severity_count.first(unnamedblk11__DOT__s));
    if (__VlefExpr_0) {
        unnamedblk11__DOT__s__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk11__DOT__s__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_severity_count.next(unnamedblk11__DOT__s));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk11__DOT__s__Vfirst = 0U;
            __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name21
                [unnamedblk11__DOT__s];
            q.push_back(VL_SFORMATF_N_NX("%@ :%5d\n",0,
                                         -1,&(__Vtemp_1),
                                         32,this->__PVT__m_severity_count
                                         .at((IData)(unnamedblk11__DOT__s))) );
            ++(vlSymsp->__Vcoverage[15495]);
        }
        __VlefExpr_2 = (0U != this->__PVT__m_severity_count.next(unnamedblk11__DOT__s));
        if (__VlefExpr_2) {
            ++(vlSymsp->__Vcoverage[15492]);
        }
        if (unnamedblk11__DOT__s__Vfirst) {
            ++(vlSymsp->__Vcoverage[15493]);
        }
        __VlefExpr_3 = (1U & (~ (IData)(unnamedblk11__DOT__s__Vfirst)));
        if (__VlefExpr_3) {
            __VlefExpr_3 = (0U == this->__PVT__m_severity_count.next(unnamedblk11__DOT__s));
        }
        if (__VlefExpr_3) {
            ++(vlSymsp->__Vcoverage[15494]);
        }
        ++(vlSymsp->__Vcoverage[15496]);
    } else {
        ++(vlSymsp->__Vcoverage[15497]);
    }
    if (this->__PVT__enable_report_id_count_summary) {
        q.push_back("** Report counts by id\n"s);
        __VlefExpr_4 = (0U != this->__PVT__m_id_count.first(unnamedblk12__DOT__id));
        if (__VlefExpr_4) {
            unnamedblk12__DOT__id__Vfirst = 1U;
            while (true) {
                __VlefExpr_5 = unnamedblk12__DOT__id__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_5)))) {
                    __VlefExpr_5 = (0U != this->__PVT__m_id_count.next(unnamedblk12__DOT__id));
                }
                if (!(__VlefExpr_5)) break;
                unnamedblk12__DOT__id__Vfirst = 0U;
                q.push_back(VL_SFORMATF_N_NX("[%@] %5d\n",0,
                                             -1,&(unnamedblk12__DOT__id),
                                             32,this->__PVT__m_id_count
                                             .at(unnamedblk12__DOT__id)) );
                ++(vlSymsp->__Vcoverage[15501]);
            }
            __VlefExpr_6 = (0U != this->__PVT__m_id_count.next(unnamedblk12__DOT__id));
            if (__VlefExpr_6) {
                ++(vlSymsp->__Vcoverage[15498]);
            }
            if (unnamedblk12__DOT__id__Vfirst) {
                ++(vlSymsp->__Vcoverage[15499]);
            }
            __VlefExpr_7 = (1U & (~ (IData)(unnamedblk12__DOT__id__Vfirst)));
            if (__VlefExpr_7) {
                __VlefExpr_7 = (0U == this->__PVT__m_id_count.next(unnamedblk12__DOT__id));
            }
            if (__VlefExpr_7) {
                ++(vlSymsp->__Vcoverage[15500]);
            }
            ++(vlSymsp->__Vcoverage[15502]);
        } else {
            ++(vlSymsp->__Vcoverage[15503]);
        }
        ++(vlSymsp->__Vcoverage[15504]);
    } else {
        ++(vlSymsp->__Vcoverage[15505]);
    }
    this->__Vfunc_uvm_report_enabled__100__id = "UVM/REPORT/SERVER"s;
    __Vfunc_uvm_report_enabled__100__severity = 0U;
    __Vfunc_uvm_report_enabled__100__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__101__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__102__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__100__verbosity, (IData)(__Vfunc_uvm_report_enabled__100__severity), this->__Vfunc_uvm_report_enabled__100__id, __VlefCall_8__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_8__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__104__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__104__Vfuncout 
            = VL_CVT_PACK_STR_ND(q);
        ++(vlSymsp->__Vcoverage[434]);
        __VlefCall_9__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__104__Vfuncout;
        __Vtask_uvm_report_info__105__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__105__context_name = ""s;
        __Vtask_uvm_report_info__105__line = 0x00000360U;
        this->__Vtask_uvm_report_info__105__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh"s;
        __Vtask_uvm_report_info__105__verbosity = 0U;
        this->__Vtask_uvm_report_info__105__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_9__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__105__id = "UVM/REPORT/SERVER"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__106__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__107__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__105__id, this->__Vtask_uvm_report_info__105__message, __Vtask_uvm_report_info__105__verbosity, this->__Vtask_uvm_report_info__105__filename, __Vtask_uvm_report_info__105__line, this->__Vtask_uvm_report_info__105__context_name, (IData)(__Vtask_uvm_report_info__105__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[15506]);
    } else {
        ++(vlSymsp->__Vcoverage[15507]);
    }
    ++(vlSymsp->__Vcoverage[15508]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_quit_count = 0;
    __PVT__m_max_quit_count = 0;
    __PVT__m_severity_count.atDefault() = 0;
    __PVT__m_id_count.atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::~Vtb_rng_uvm_pkg__03a__03auvm_default_report_server() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_report_server::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_quit_count:" + VL_TO_STRING(__PVT__m_quit_count);
    out += ", m_max_quit_count:" + VL_TO_STRING(__PVT__m_max_quit_count);
    out += ", max_quit_overridable:" + VL_TO_STRING(__PVT__max_quit_overridable);
    out += ", m_severity_count:" + VL_TO_STRING(__PVT__m_severity_count);
    out += ", m_id_count:" + VL_TO_STRING(__PVT__m_id_count);
    out += ", m_message_db:" + VL_TO_STRING(__PVT__m_message_db);
    out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
    out += ", enable_report_id_count_summary:" + VL_TO_STRING(__PVT__enable_report_id_count_summary);
    out += ", record_all_messages:" + VL_TO_STRING(__PVT__record_all_messages);
    out += ", show_verbosity:" + VL_TO_STRING(__PVT__show_verbosity);
    out += ", show_terminator:" + VL_TO_STRING(__PVT__show_terminator);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_report_server::to_string_middle();
    return (out);
}
