// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi175> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi175__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10058]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_table_printer"s;
    ++(vlSymsp->__Vcoverage[10063]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_table_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    this->__PVT__m_default_table_printer = printer;
    ++(vlSymsp->__Vcoverage[10102]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_default(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_table_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_default_table_printer)) {
        this->__PVT__m_default_table_printer = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, "uvm_default_table_printer"s);
        ++(vlSymsp->__Vcoverage[10103]);
    } else {
        ++(vlSymsp->__Vcoverage[10104]);
    }
    get_default__Vfuncrtn = this->__PVT__m_default_table_printer;
    ++(vlSymsp->__Vcoverage[10105]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi175> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi175__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[10059]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_table_printer> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[10060]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[10061]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[10062]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_table_printer"s;
    ++(vlSymsp->__Vcoverage[10064]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_printer::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_max_name = 4U;
    ++(vlSymsp->__Vcoverage[10065]);
    this->__PVT__m_max_type = 4U;
    ++(vlSymsp->__Vcoverage[10066]);
    this->__PVT__m_max_size = 4U;
    ++(vlSymsp->__Vcoverage[10067]);
    this->__PVT__m_max_value = 5U;
    ++(vlSymsp->__Vcoverage[10068]);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[10069]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_pop_element(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_pop_element\n"); );
    // Body
    IData/*31:0*/ __VlefCall_2__get_indent;
    IData/*31:0*/ __VlefCall_1__get_indent;
    IData/*31:0*/ __VlefCall_0__m_get_stack_size;
    IData/*31:0*/ level;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> popped;
    std::string name_str;
    std::string type_name_str;
    std::string size_str;
    std::string value_str;
    level = 0U;
    name_str = ""s;
    type_name_str = ""s;
    size_str = ""s;
    value_str = ""s;
    this->__VnoInFunc_get_top_element(vlSymsp, popped);
    this->__VnoInFunc_m_get_stack_size(vlSymsp, __VlefCall_0__m_get_stack_size);
    level = (__VlefCall_0__m_get_stack_size - (IData)(1U));
    VL_NULL_CHECK(popped, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1489)->__VnoInFunc_get_element_name(vlSymsp, name_str);
    VL_NULL_CHECK(popped, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1490)->__VnoInFunc_get_element_type_name(vlSymsp, type_name_str);
    VL_NULL_CHECK(popped, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1491)->__VnoInFunc_get_element_size(vlSymsp, size_str);
    VL_NULL_CHECK(popped, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1492)->__VnoInFunc_get_element_value(vlSymsp, value_str);
    this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_1__get_indent);
    if (VL_GTS_III(32, (VL_LEN_IN(name_str) + VL_MULS_III(32, __VlefCall_1__get_indent, level)), this->__PVT__m_max_name)) {
        this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_2__get_indent);
        this->__PVT__m_max_name = (VL_LEN_IN(name_str) 
                                   + VL_MULS_III(32, __VlefCall_2__get_indent, level));
        ++(vlSymsp->__Vcoverage[10070]);
    } else {
        ++(vlSymsp->__Vcoverage[10071]);
    }
    if (VL_GTS_III(32, VL_LEN_IN(type_name_str), this->__PVT__m_max_type)) {
        this->__PVT__m_max_type = VL_LEN_IN(type_name_str);
        ++(vlSymsp->__Vcoverage[10072]);
    } else {
        ++(vlSymsp->__Vcoverage[10073]);
    }
    if (VL_GTS_III(32, VL_LEN_IN(size_str), this->__PVT__m_max_size)) {
        this->__PVT__m_max_size = VL_LEN_IN(size_str);
        ++(vlSymsp->__Vcoverage[10074]);
    } else {
        ++(vlSymsp->__Vcoverage[10075]);
    }
    if (VL_GTS_III(32, VL_LEN_IN(value_str), this->__PVT__m_max_value)) {
        this->__PVT__m_max_value = VL_LEN_IN(value_str);
        ++(vlSymsp->__Vcoverage[10076]);
    } else {
        ++(vlSymsp->__Vcoverage[10077]);
    }
    Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element(vlSymsp);
    ++(vlSymsp->__Vcoverage[10078]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_emit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__17__verbosity;
    __Vtask_uvm_report_error__17__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__17__line;
    __Vtask_uvm_report_error__17__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__17__report_enabled_checked;
    __Vtask_uvm_report_error__17__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    // Body
    std::string __VlefCall_7__get_line_prefix;
    std::string __VlefCall_6__m_emit_element;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> __VlefCall_5__get_bottom_element;
    CData/*0:0*/ __VlefCall_4__get_size_enabled;
    CData/*0:0*/ __VlefCall_3__get_type_name_enabled;
    CData/*0:0*/ __VlefCall_2__get_name_enabled;
    std::string __VlefCall_1__get_line_prefix;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlUnpacked<IData/*31:0*/, 5> unnamedblk44__DOT__q;
    IData/*31:0*/ unnamedblk44__DOT__m;
    VlQueue<IData/*31:0*/> unnamedblk44__DOT__qq;
    std::string unnamedblk45__DOT__header;
    emit__Vfuncrtn = ""s;
    std::string s;
    std::string dashes;
    std::string linefeed;
    s = ""s;
    dashes = ""s;
    linefeed = ""s;
    if (Vtb_rng_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed) {
        Vtb_rng_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed = 0U;
        ++(vlSymsp->__Vcoverage[10082]);
    } else {
        this->__Vfunc_uvm_report_enabled__13__id = "UVM/PRINT/NO_FLUSH"s;
        __Vfunc_uvm_report_enabled__13__severity = 2U;
        __Vfunc_uvm_report_enabled__13__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__14__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__17__context_name = ""s;
            __Vtask_uvm_report_error__17__line = 0x000005ecU;
            this->__Vtask_uvm_report_error__17__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
            __Vtask_uvm_report_error__17__verbosity = 0U;
            this->__Vtask_uvm_report_error__17__message = "printer emit() method called twice without intervening uvm_printer::flush()"s;
            this->__Vtask_uvm_report_error__17__id = "UVM/PRINT/NO_FLUSH"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__17__id, this->__Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, this->__Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, this->__Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[10079]);
        } else {
            ++(vlSymsp->__Vcoverage[10080]);
        }
        ++(vlSymsp->__Vcoverage[10081]);
    }
    this->__VnoInFunc_get_line_prefix(vlSymsp, __VlefCall_1__get_line_prefix);
    linefeed = VL_CONCATN_NNN("\n"s, __VlefCall_1__get_line_prefix);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        unnamedblk44__DOT__q[__Vi0] = 0;
    }
    unnamedblk44__DOT__m = 0U;
    unnamedblk44__DOT__qq.clear();
    unnamedblk44__DOT__qq.atDefault() = 0;
    unnamedblk44__DOT__q[0U] = this->__PVT__m_max_name;
    unnamedblk44__DOT__q[1U] = this->__PVT__m_max_type;
    unnamedblk44__DOT__q[2U] = this->__PVT__m_max_size;
    unnamedblk44__DOT__q[3U] = this->__PVT__m_max_value;
    unnamedblk44__DOT__q[4U] = 0x00000064U;
    unnamedblk44__DOT__qq = unnamedblk44__DOT__q.max();
    unnamedblk44__DOT__m = unnamedblk44__DOT__qq.at(0U);
    if (VL_LTS_III(32, VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash), unnamedblk44__DOT__m)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash 
            = VL_REPLICATEN_NNI("-"s, unnamedblk44__DOT__m);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space 
            = VL_REPLICATEN_NNI(" "s, unnamedblk44__DOT__m);
        ++(vlSymsp->__Vcoverage[10085]);
    } else {
        ++(vlSymsp->__Vcoverage[10086]);
    }
    unnamedblk45__DOT__header = ""s;
    this->__VnoInFunc_get_name_enabled(vlSymsp, __VlefCall_2__get_name_enabled);
    if (__VlefCall_2__get_name_enabled) {
        dashes = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                             ((IData)(2U) + this->__PVT__m_max_name));
        unnamedblk45__DOT__header = VL_CONCATN_NNN("Name"s, 
                                                   VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                               (this->__PVT__m_max_name 
                                                                - (IData)(2U))));
        ++(vlSymsp->__Vcoverage[10087]);
    } else {
        ++(vlSymsp->__Vcoverage[10088]);
    }
    this->__VnoInFunc_get_type_name_enabled(vlSymsp, __VlefCall_3__get_type_name_enabled);
    if (__VlefCall_3__get_type_name_enabled) {
        dashes = VL_CONCATN_NNN(dashes, VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                                                    ((IData)(2U) 
                                                     + this->__PVT__m_max_type)));
        unnamedblk45__DOT__header = VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(unnamedblk45__DOT__header, "Type"s), 
                                                   VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                               (this->__PVT__m_max_type 
                                                                - (IData)(2U))));
        ++(vlSymsp->__Vcoverage[10089]);
    } else {
        ++(vlSymsp->__Vcoverage[10090]);
    }
    this->__VnoInFunc_get_size_enabled(vlSymsp, __VlefCall_4__get_size_enabled);
    if (__VlefCall_4__get_size_enabled) {
        dashes = VL_CONCATN_NNN(dashes, VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                                                    ((IData)(2U) 
                                                     + this->__PVT__m_max_size)));
        unnamedblk45__DOT__header = VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(unnamedblk45__DOT__header, "Size"s), 
                                                   VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                               (this->__PVT__m_max_size 
                                                                - (IData)(2U))));
        ++(vlSymsp->__Vcoverage[10091]);
    } else {
        ++(vlSymsp->__Vcoverage[10092]);
    }
    dashes = VL_CONCATN_NNN(VL_CONCATN_NNN(dashes, 
                                           VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,this->__PVT__m_max_value)), linefeed);
    unnamedblk45__DOT__header = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(unnamedblk45__DOT__header, "Value"s), 
                                                              VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                                          (this->__PVT__m_max_value 
                                                                           - (IData)(5U)))), linefeed);
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(s, dashes), unnamedblk45__DOT__header), dashes);
    this->__VnoInFunc_get_bottom_element(vlSymsp, __VlefCall_5__get_bottom_element);
    this->__VnoInFunc_m_emit_element(vlSymsp, __VlefCall_5__get_bottom_element, 0U, __VlefCall_6__m_emit_element);
    s = VL_CONCATN_NNN(s, __VlefCall_6__m_emit_element);
    s = VL_CONCATN_NNN(s, dashes);
    this->__VnoInFunc_get_line_prefix(vlSymsp, __VlefCall_7__get_line_prefix);
    emit__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_7__get_line_prefix, s);
    if ((1U & (~ (IData)(Vtb_rng_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed)))) {
        ++(vlSymsp->__Vcoverage[10083]);
    }
    if (Vtb_rng_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed) {
        ++(vlSymsp->__Vcoverage[10084]);
    }
    ++(vlSymsp->__Vcoverage[10093]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_m_emit_element(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> element, IData/*31:0*/ level, std::string &m_emit_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_m_emit_element\n"); );
    // Body
    std::string __VlefCall_6__m_emit_element;
    CData/*0:0*/ __VlefCall_5__get_size_enabled;
    CData/*0:0*/ __VlefCall_4__get_type_name_enabled;
    IData/*31:0*/ __VlefCall_3__get_indent;
    IData/*31:0*/ __VlefCall_2__get_indent;
    CData/*0:0*/ __VlefCall_1__get_name_enabled;
    std::string __VlefCall_0__get_line_prefix;
    std::string unnamedblk46__DOT__row_str;
    std::string unnamedblk46__DOT__name_str;
    std::string unnamedblk46__DOT__value_str;
    std::string unnamedblk46__DOT__type_name_str;
    std::string unnamedblk46__DOT__size_str;
    IData/*31:0*/ unnamedblk47__DOT__i;
    unnamedblk47__DOT__i = 0;
    std::string result;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element>> element_children;
    std::string linefeed;
    m_emit_element__Vfuncrtn = ""s;
    result = ""s;
    element_children.clear();
    linefeed = ""s;
    this->__VnoInFunc_get_line_prefix(vlSymsp, __VlefCall_0__get_line_prefix);
    linefeed = VL_CONCATN_NNN("\n"s, __VlefCall_0__get_line_prefix);
    unnamedblk46__DOT__row_str = ""s;
    unnamedblk46__DOT__name_str = ""s;
    unnamedblk46__DOT__value_str = ""s;
    unnamedblk46__DOT__type_name_str = ""s;
    unnamedblk46__DOT__size_str = ""s;
    VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1614)->__VnoInFunc_get_element_name(vlSymsp, unnamedblk46__DOT__name_str);
    VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1615)->__VnoInFunc_get_element_value(vlSymsp, unnamedblk46__DOT__value_str);
    VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1616)->__VnoInFunc_get_element_type_name(vlSymsp, unnamedblk46__DOT__type_name_str);
    VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1617)->__VnoInFunc_get_element_size(vlSymsp, unnamedblk46__DOT__size_str);
    this->__VnoInFunc_get_name_enabled(vlSymsp, __VlefCall_1__get_name_enabled);
    if (__VlefCall_1__get_name_enabled) {
        this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_2__get_indent);
        this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_3__get_indent);
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(result, 
                                                              VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                                          (level 
                                                                           * __VlefCall_2__get_indent))), unnamedblk46__DOT__name_str), 
                                VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                            ((IData)(2U) 
                                             + ((this->__PVT__m_max_name 
                                                 - 
                                                 VL_LEN_IN(unnamedblk46__DOT__name_str)) 
                                                - (level 
                                                   * __VlefCall_3__get_indent)))));
        ++(vlSymsp->__Vcoverage[10094]);
    } else {
        ++(vlSymsp->__Vcoverage[10095]);
    }
    this->__VnoInFunc_get_type_name_enabled(vlSymsp, __VlefCall_4__get_type_name_enabled);
    if (__VlefCall_4__get_type_name_enabled) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk46__DOT__type_name_str), 
                                VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                            ((IData)(2U) 
                                             + (this->__PVT__m_max_type 
                                                - VL_LEN_IN(unnamedblk46__DOT__type_name_str)))));
        ++(vlSymsp->__Vcoverage[10096]);
    } else {
        ++(vlSymsp->__Vcoverage[10097]);
    }
    this->__VnoInFunc_get_size_enabled(vlSymsp, __VlefCall_5__get_size_enabled);
    if (__VlefCall_5__get_size_enabled) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk46__DOT__size_str), 
                                VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                            ((IData)(2U) 
                                             + (this->__PVT__m_max_size 
                                                - VL_LEN_IN(unnamedblk46__DOT__size_str)))));
        ++(vlSymsp->__Vcoverage[10098]);
    } else {
        ++(vlSymsp->__Vcoverage[10099]);
    }
    result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(result, unnamedblk46__DOT__row_str), unnamedblk46__DOT__value_str), 
                                           VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                       (this->__PVT__m_max_value 
                                                        - 
                                                        VL_LEN_IN(unnamedblk46__DOT__value_str)))), linefeed);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_emit_element__Vstatic__proxy, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1627)->__VnoInFunc_get_immediate_children(vlSymsp, element, element_children);
    unnamedblk47__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk47__DOT__i, element_children.size())) {
        this->__VnoInFunc_m_emit_element(vlSymsp, element_children.at(unnamedblk47__DOT__i), 
                                         ((IData)(1U) 
                                          + level), __VlefCall_6__m_emit_element);
        result = VL_CONCATN_NNN(result, __VlefCall_6__m_emit_element);
        unnamedblk47__DOT__i = ((IData)(1U) + unnamedblk47__DOT__i);
        ++(vlSymsp->__Vcoverage[10100]);
    }
    m_emit_element__Vfuncrtn = result;
    ++(vlSymsp->__Vcoverage[10101]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_set_indent(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ indent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_set_indent\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    VL_NULL_CHECK(_knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1818)->__PVT__indent 
        = indent;
    ++(vlSymsp->__Vcoverage[10106]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_indent(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_indent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_indent\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    get_indent__Vfuncrtn = 0U;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    get_indent__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1822)
        ->__PVT__indent;
    ++(vlSymsp->__Vcoverage[10107]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_flush\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(vlProcess, vlSymsp);
    this->__PVT__m_max_name = 4U;
    this->__PVT__m_max_type = 4U;
    this->__PVT__m_max_size = 4U;
    this->__PVT__m_max_value = 5U;
    ++(vlSymsp->__Vcoverage[10108]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_table_printer::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_table_printer::~Vtb_rng_uvm_pkg__03a__03auvm_table_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_table_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_table_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_max_name:" + VL_TO_STRING(__PVT__m_max_name);
    out += ", m_max_type:" + VL_TO_STRING(__PVT__m_max_type);
    out += ", m_max_size:" + VL_TO_STRING(__PVT__m_max_size);
    out += ", m_max_value:" + VL_TO_STRING(__PVT__m_max_value);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_printer::to_string_middle();
    return (out);
}
