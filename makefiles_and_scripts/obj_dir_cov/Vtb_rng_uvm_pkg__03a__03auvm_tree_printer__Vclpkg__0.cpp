// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi10> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi10__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10105]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_tree_printer"s;
    ++(vlSymsp->__Vcoverage[10110]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tree_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    this->__PVT__m_default_tree_printer = printer;
    ++(vlSymsp->__Vcoverage[10153]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_get_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tree_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_default_tree_printer)) {
        this->__PVT__m_default_tree_printer = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, "uvm_default_tree_printer"s);
        ++(vlSymsp->__Vcoverage[10154]);
    } else {
        ++(vlSymsp->__Vcoverage[10155]);
    }
    get_default__Vfuncrtn = this->__PVT__m_default_tree_printer;
    ++(vlSymsp->__Vcoverage[10156]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi10> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi10__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[10106]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tree_printer> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[10107]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[10108]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[10109]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tree_printer"s;
    ++(vlSymsp->__Vcoverage[10111]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_printer::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_newline = "\n"s;
    ++(vlSymsp->__Vcoverage[10104]);
    /*super.new*/;
    this->__VnoInFunc_set_size_enabled(vlSymsp, 0U);
    this->__VnoInFunc_set_type_name_enabled(vlSymsp, 0U);
    ++(vlSymsp->__Vcoverage[10112]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_indent(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ indent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_indent\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    VL_NULL_CHECK(_knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1656)->__PVT__indent 
        = indent;
    ++(vlSymsp->__Vcoverage[10113]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_indent(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_indent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_indent\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    get_indent__Vfuncrtn = 0U;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    get_indent__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1660)
        ->__PVT__indent;
    ++(vlSymsp->__Vcoverage[10114]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_separators(Vtb_rng__Syms* __restrict vlSymsp, std::string separators) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_separators\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    VL_NULL_CHECK(_knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1665)->__PVT__separator 
        = separators;
    ++(vlSymsp->__Vcoverage[10115]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_separators(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_separators__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_separators\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    get_separators__Vfuncrtn = ""s;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    get_separators__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1669)
        ->__PVT__separator;
    ++(vlSymsp->__Vcoverage[10116]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_flush\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[10117]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__15__verbosity;
    __Vtask_uvm_report_error__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__15__line;
    __Vtask_uvm_report_error__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__15__report_enabled_checked;
    __Vtask_uvm_report_error__15__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    // Body
    std::string __VlefCall_4__m_emit_element;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> __VlefCall_3__get_bottom_element;
    std::string __VlefCond_2;
    std::string __VlefCall_1__get_line_prefix;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string s;
    emit__Vfuncrtn = ""s;
    s = ""s;
    if (Vtb_rng_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed) {
        Vtb_rng_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed = 0U;
        ++(vlSymsp->__Vcoverage[10121]);
    } else {
        this->__Vfunc_uvm_report_enabled__11__id = "UVM/PRINT/NO_FLUSH"s;
        __Vfunc_uvm_report_enabled__11__severity = 2U;
        __Vfunc_uvm_report_enabled__11__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__13__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), this->__Vfunc_uvm_report_enabled__11__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__15__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__15__context_name = ""s;
            __Vtask_uvm_report_error__15__line = 0x00000699U;
            this->__Vtask_uvm_report_error__15__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
            __Vtask_uvm_report_error__15__verbosity = 0U;
            this->__Vtask_uvm_report_error__15__message = "printer emit() method called twice without intervening uvm_printer::flush()"s;
            this->__Vtask_uvm_report_error__15__id = "UVM/PRINT/NO_FLUSH"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__15__id, this->__Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, this->__Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, this->__Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[10118]);
        } else {
            ++(vlSymsp->__Vcoverage[10119]);
        }
        ++(vlSymsp->__Vcoverage[10120]);
    }
    this->__VnoInFunc_get_line_prefix(vlSymsp, s);
    if (((""s == this->__PVT__m_newline) | (" "s == this->__PVT__m_newline))) {
        __VlefCond_2 = this->__PVT__m_newline;
    } else {
        this->__VnoInFunc_get_line_prefix(vlSymsp, __VlefCall_1__get_line_prefix);
        __VlefCond_2 = VL_CONCATN_NNN(this->__PVT__m_newline, __VlefCall_1__get_line_prefix);
    }
    this->__PVT__m_linefeed = __VlefCond_2;
    this->__VnoInFunc_get_bottom_element(vlSymsp, __VlefCall_3__get_bottom_element);
    this->__VnoInFunc_m_emit_element(vlSymsp, __VlefCall_3__get_bottom_element, 0U, __VlefCall_4__m_emit_element);
    s = VL_CONCATN_NNN(s, __VlefCall_4__m_emit_element);
    if (((""s == this->__PVT__m_newline) | (" "s == this->__PVT__m_newline))) {
        s = VL_CONCATN_NNN(s, "\n"s);
        ++(vlSymsp->__Vcoverage[10127]);
    } else {
        ++(vlSymsp->__Vcoverage[10128]);
    }
    emit__Vfuncrtn = s;
    if ((1U & (~ (IData)(Vtb_rng_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed)))) {
        ++(vlSymsp->__Vcoverage[10122]);
    }
    if (Vtb_rng_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed) {
        ++(vlSymsp->__Vcoverage[10123]);
    }
    if ((" "s == this->__PVT__m_newline)) {
        ++(vlSymsp->__Vcoverage[10124]);
    }
    if ((""s == this->__PVT__m_newline)) {
        ++(vlSymsp->__Vcoverage[10125]);
    }
    if ((1U & ((~ (""s == this->__PVT__m_newline)) 
               & (~ (" "s == this->__PVT__m_newline))))) {
        ++(vlSymsp->__Vcoverage[10126]);
    }
    if ((" "s == this->__PVT__m_newline)) {
        ++(vlSymsp->__Vcoverage[10129]);
    }
    if ((""s == this->__PVT__m_newline)) {
        ++(vlSymsp->__Vcoverage[10130]);
    }
    if ((1U & ((~ (""s == this->__PVT__m_newline)) 
               & (~ (" "s == this->__PVT__m_newline))))) {
        ++(vlSymsp->__Vcoverage[10131]);
    }
    ++(vlSymsp->__Vcoverage[10132]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_m_emit_element(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> element, IData/*31:0*/ level, std::string &m_emit_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_m_emit_element\n"); );
    // Body
    std::string __VlefCall_18__m_emit_element;
    std::string __VlefCall_17__get_element_size;
    CData/*0:0*/ __VlefLogOr_16;
    std::string __VlefCall_15__get_element_size;
    std::string __VlefCall_14__get_element_size;
    CData/*0:0*/ __VlefCall_13__get_size_enabled;
    std::string __VlefCall_12__get_element_type_name;
    std::string __VlefCall_11__get_element_type_name;
    CData/*0:0*/ __VlefLogOr_10;
    std::string __VlefCall_9__get_element_type_name;
    std::string __VlefCall_8__get_element_type_name;
    CData/*0:0*/ __VlefCall_7__get_type_name_enabled;
    std::string __VlefCall_6__get_element_type_name;
    CData/*0:0*/ __VlefLogAnd_5;
    std::string __VlefCall_4__get_element_name;
    std::string __VlefCall_3__get_element_name;
    std::string __VlefCall_2__get_element_name;
    CData/*0:0*/ __VlefCall_1__get_name_enabled;
    IData/*31:0*/ __VlefCall_0__get_indent;
    std::string unnamedblk48__DOT__indent_str;
    std::string unnamedblk48__DOT__separators;
    std::string unnamedblk48__DOT__value_str;
    IData/*31:0*/ unnamedblk48__DOT__unnamedblk49__DOT__i;
    unnamedblk48__DOT__unnamedblk49__DOT__i = 0;
    std::string result;
    std::string space;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element>> element_children;
    m_emit_element__Vfuncrtn = ""s;
    result = ""s;
    space = "                                                                                                   "s;
    element_children.clear();
    unnamedblk48__DOT__indent_str = ""s;
    unnamedblk48__DOT__separators = ""s;
    unnamedblk48__DOT__value_str = ""s;
    this->__VnoInFunc_get_indent(vlSymsp, __VlefCall_0__get_indent);
    unnamedblk48__DOT__indent_str = VL_SUBSTR_N(space,1U,
                                                (level 
                                                 * __VlefCall_0__get_indent));
    this->__VnoInFunc_get_separators(vlSymsp, unnamedblk48__DOT__separators);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_tree_printer__Vclpkg.__PVT__m_emit_element__Vstatic__proxy, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1751)->__VnoInFunc_get_immediate_children(vlSymsp, element, element_children);
    this->__VnoInFunc_get_name_enabled(vlSymsp, __VlefCall_1__get_name_enabled);
    if (__VlefCall_1__get_name_enabled) {
        VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1755)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_2__get_element_name);
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk48__DOT__indent_str), __VlefCall_2__get_element_name);
        VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1756)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_3__get_element_name);
        __VlefLogAnd_5 = (""s != __VlefCall_3__get_element_name);
        if (__VlefLogAnd_5) {
            VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1756)->__VnoInFunc_get_element_name(vlSymsp, __VlefCall_4__get_element_name);
            __VlefLogAnd_5 = ("..."s != __VlefCall_4__get_element_name);
        }
        if (__VlefLogAnd_5) {
            result = VL_CONCATN_NNN(result, ": "s);
            ++(vlSymsp->__Vcoverage[10133]);
        } else {
            ++(vlSymsp->__Vcoverage[10134]);
        }
        ++(vlSymsp->__Vcoverage[10135]);
    } else {
        ++(vlSymsp->__Vcoverage[10136]);
    }
    VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1761)->__VnoInFunc_get_element_value(vlSymsp, unnamedblk48__DOT__value_str);
    if ((VL_LTS_III(32, 0U, VL_LEN_IN(unnamedblk48__DOT__value_str)) 
         & (0x40U == VL_GETC_N(unnamedblk48__DOT__value_str,0U)))) {
        VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1763)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_6__get_element_type_name);
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(result, "("s), __VlefCall_6__get_element_type_name), unnamedblk48__DOT__value_str), ") "s);
        ++(vlSymsp->__Vcoverage[10139]);
    } else {
        this->__VnoInFunc_get_type_name_enabled(vlSymsp, __VlefCall_7__get_type_name_enabled);
        if (__VlefCall_7__get_type_name_enabled) {
            VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1766)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_8__get_element_type_name);
            __VlefLogOr_10 = (""s != __VlefCall_8__get_element_type_name);
            if ((1U & (~ (IData)(__VlefLogOr_10)))) {
                VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1767)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_9__get_element_type_name);
                __VlefLogOr_10 = ("-"s != __VlefCall_9__get_element_type_name);
            }
            if ((1U & (~ (IData)(__VlefLogOr_10)))) {
                VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1768)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_11__get_element_type_name);
                __VlefLogOr_10 = ("..."s != __VlefCall_11__get_element_type_name);
            }
            __VlefCall_7__get_type_name_enabled = __VlefLogOr_10;
        }
        if (__VlefCall_7__get_type_name_enabled) {
            VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1769)->__VnoInFunc_get_element_type_name(vlSymsp, __VlefCall_12__get_element_type_name);
            result = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(result, "("s), __VlefCall_12__get_element_type_name), ") "s);
            ++(vlSymsp->__Vcoverage[10137]);
        } else {
            ++(vlSymsp->__Vcoverage[10138]);
        }
    }
    this->__VnoInFunc_get_size_enabled(vlSymsp, __VlefCall_13__get_size_enabled);
    if (__VlefCall_13__get_size_enabled) {
        VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1773)->__VnoInFunc_get_element_size(vlSymsp, __VlefCall_14__get_element_size);
        __VlefLogOr_16 = (""s != __VlefCall_14__get_element_size);
        if ((1U & (~ (IData)(__VlefLogOr_16)))) {
            VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1773)->__VnoInFunc_get_element_size(vlSymsp, __VlefCall_15__get_element_size);
            __VlefLogOr_16 = ("-"s != __VlefCall_15__get_element_size);
        }
        if (__VlefLogOr_16) {
            VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1774)->__VnoInFunc_get_element_size(vlSymsp, __VlefCall_17__get_element_size);
            result = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(result, "("s), __VlefCall_17__get_element_size), ") "s);
            ++(vlSymsp->__Vcoverage[10143]);
        } else {
            ++(vlSymsp->__Vcoverage[10144]);
        }
        ++(vlSymsp->__Vcoverage[10145]);
    } else {
        ++(vlSymsp->__Vcoverage[10146]);
    }
    if (VL_LTS_III(32, 0U, element_children.size())) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, 
                                               VL_CVT_PACK_STR_NI(
                                                                  VL_GETC_N(unnamedblk48__DOT__separators,0U))), this->__PVT__m_linefeed);
        ++(vlSymsp->__Vcoverage[10147]);
    } else {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk48__DOT__value_str), " "s), this->__PVT__m_linefeed);
        ++(vlSymsp->__Vcoverage[10148]);
    }
    unnamedblk48__DOT__unnamedblk49__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk48__DOT__unnamedblk49__DOT__i, element_children.size())) {
        this->__VnoInFunc_m_emit_element(vlSymsp, element_children.at(unnamedblk48__DOT__unnamedblk49__DOT__i), 
                                         ((IData)(1U) 
                                          + level), __VlefCall_18__m_emit_element);
        result = VL_CONCATN_NNN(result, __VlefCall_18__m_emit_element);
        unnamedblk48__DOT__unnamedblk49__DOT__i = ((IData)(1U) 
                                                   + unnamedblk48__DOT__unnamedblk49__DOT__i);
        ++(vlSymsp->__Vcoverage[10149]);
    }
    if (VL_LTS_III(32, 0U, element_children.size())) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk48__DOT__indent_str), 
                                               VL_CVT_PACK_STR_NI(
                                                                  VL_GETC_N(unnamedblk48__DOT__separators,1U))), this->__PVT__m_linefeed);
        ++(vlSymsp->__Vcoverage[10150]);
    } else {
        ++(vlSymsp->__Vcoverage[10151]);
    }
    m_emit_element__Vfuncrtn = result;
    if ((VL_LTS_III(32, 0U, VL_LEN_IN(unnamedblk48__DOT__value_str)) 
         & (0x40U == VL_GETC_N(unnamedblk48__DOT__value_str,0U)))) {
        ++(vlSymsp->__Vcoverage[10140]);
    }
    if ((0x40U != VL_GETC_N(unnamedblk48__DOT__value_str,0U))) {
        ++(vlSymsp->__Vcoverage[10141]);
    }
    if (VL_GTES_III(32, 0U, VL_LEN_IN(unnamedblk48__DOT__value_str))) {
        ++(vlSymsp->__Vcoverage[10142]);
    }
    ++(vlSymsp->__Vcoverage[10152]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::~Vtb_rng_uvm_pkg__03a__03auvm_tree_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_newline:" + VL_TO_STRING(__PVT__m_newline);
    out += ", m_linefeed:" + VL_TO_STRING(__PVT__m_linefeed);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_printer::to_string_middle();
    return (out);
}
