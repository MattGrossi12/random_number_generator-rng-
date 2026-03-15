// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi176> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi176__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10157]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_line_printer"s;
    ++(vlSymsp->__Vcoverage[10162]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_line_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    this->__PVT__m_default_line_printer = printer;
    ++(vlSymsp->__Vcoverage[10165]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_get_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_line_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_default_line_printer)) {
        this->__PVT__m_default_line_printer = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_line_printer, vlProcess, vlSymsp, "uvm_default_line_printer"s);
        ++(vlSymsp->__Vcoverage[10166]);
    } else {
        ++(vlSymsp->__Vcoverage[10167]);
    }
    get_default__Vfuncrtn = this->__PVT__m_default_line_printer;
    ++(vlSymsp->__Vcoverage[10168]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi176> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi176__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[10158]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_line_printer> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_line_printer, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[10159]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_line_printer, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[10160]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[10161]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_line_printer"s;
    ++(vlSymsp->__Vcoverage[10163]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__PVT__m_newline = " "s;
    this->__VnoInFunc_set_indent(vlSymsp, 0U);
    ++(vlSymsp->__Vcoverage[10164]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_set_separators(Vtb_rng__Syms* __restrict vlSymsp, std::string separators) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_set_separators\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__10__verbosity;
    __Vtask_uvm_report_error__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__10__line;
    __Vtask_uvm_report_error__10__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__10__report_enabled_checked;
    __Vtask_uvm_report_error__10__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    if (VL_GTS_III(32, 2U, VL_LEN_IN(separators))) {
        this->__Vfunc_uvm_report_enabled__6__id = "UVM/PRINT/SHORT_SEP"s;
        __Vfunc_uvm_report_enabled__6__severity = 2U;
        __Vfunc_uvm_report_enabled__6__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), this->__Vfunc_uvm_report_enabled__6__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__10__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__10__context_name = ""s;
            __Vtask_uvm_report_error__10__line = 0x00000760U;
            this->__Vtask_uvm_report_error__10__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
            __Vtask_uvm_report_error__10__verbosity = 0U;
            this->__Vtask_uvm_report_error__10__message 
                = VL_SFORMATF_N_NX("Bad call: set_separators(%@) (Argument must have at least 2 characters)",0,
                                   -1,&(separators)) ;
            this->__Vtask_uvm_report_error__10__id = "UVM/PRINT/SHORT_SEP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__10__id, this->__Vtask_uvm_report_error__10__message, __Vtask_uvm_report_error__10__verbosity, this->__Vtask_uvm_report_error__10__filename, __Vtask_uvm_report_error__10__line, this->__Vtask_uvm_report_error__10__context_name, (IData)(__Vtask_uvm_report_error__10__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[10169]);
        } else {
            ++(vlSymsp->__Vcoverage[10170]);
        }
        ++(vlSymsp->__Vcoverage[10171]);
    } else {
        ++(vlSymsp->__Vcoverage[10172]);
    }
    VL_NULL_CHECK(_knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1890)->__PVT__separator 
        = separators;
    ++(vlSymsp->__Vcoverage[10173]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_separators(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_separators__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_separators\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    get_separators__Vfuncrtn = ""s;
    this->__VnoInFunc_get_knobs(vlSymsp, _knobs);
    get_separators__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1894)
        ->__PVT__separator;
    ++(vlSymsp->__Vcoverage[10174]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_flush\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_flush(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[10175]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_line_printer::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_line_printer::~Vtb_rng_uvm_pkg__03a__03auvm_line_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_line_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_line_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_line_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_tree_printer::to_string_middle();
    return (out);
}
