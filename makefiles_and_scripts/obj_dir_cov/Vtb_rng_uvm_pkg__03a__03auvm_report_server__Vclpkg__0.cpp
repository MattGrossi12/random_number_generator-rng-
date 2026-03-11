// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_set_server(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_set_server\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> __VlefCall_0__get_report_server;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 204)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, __VlefCall_0__get_report_server);
    VL_NULL_CHECK(server, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 204)->__VnoInFunc_copy(vlProcess, vlSymsp, __VlefCall_0__get_report_server, VlNull{});
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 205)->__VnoInFunc_set_report_server(vlSymsp, server);
    ++(vlSymsp->__Vcoverage[15362]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 231)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, get_server__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[15363]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_server"s;
    ++(vlSymsp->__Vcoverage[15337]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[15338]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15339]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count\n"); );
    // Body
    get_max_quit_count__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[15340]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15341]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count\n"); );
    // Body
    get_quit_count__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[15342]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15343]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count\n"); );
    // Body
    get_severity_count__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[15344]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15345]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count\n"); );
    // Body
    get_id_count__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[15346]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_set(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_set\n"); );
    // Body
    q.clear();
    q.atDefault().clear();
    ++(vlSymsp->__Vcoverage[15347]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_set(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_set\n"); );
    // Body
    q.clear();
    q.atDefault() = 0;
    ++(vlSymsp->__Vcoverage[15348]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_message_database(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> database) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_message_database\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15349]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_message_database(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_message_database\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15350]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__6__verbosity;
    __Vtask_uvm_report_error__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__6__line;
    __Vtask_uvm_report_error__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__6__report_enabled_checked;
    __Vtask_uvm_report_error__6__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    VlQueue<CData/*1:0*/> __Vtask_get_severity_set__10__q;
    __Vtask_get_severity_set__10__q.atDefault() = 0;
    VlQueue<std::string> __Vtask_get_id_set__13__q;
    // Body
    IData/*31:0*/ __VlefCall_6__get_quit_count;
    IData/*31:0*/ __VlefCall_5__get_max_quit_count;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> __VlefCall_4__get_message_database;
    IData/*31:0*/ __VlefCall_3__get_id_count;
    IData/*31:0*/ __VlefCall_2__get_severity_count;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlQueue<CData/*1:0*/> unnamedblk1__DOT__q;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__s;
    unnamedblk1__DOT__unnamedblk2__DOT__s = 0;
    VlQueue<std::string> unnamedblk3__DOT__q;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__s;
    unnamedblk3__DOT__unnamedblk4__DOT__s = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> rhs_;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, rhs_);
    if (__VlefExpr_0) {
        ++(vlSymsp->__Vcoverage[15354]);
    } else {
        this->__Vfunc_uvm_report_enabled__2__id = "UVM/REPORT/SERVER/RPTCOPY"s;
        __Vfunc_uvm_report_enabled__2__severity = 2U;
        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__4__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            __Vtask_uvm_report_error__6__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0x00000074U;
            this->__Vtask_uvm_report_error__6__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh"s;
            __Vtask_uvm_report_error__6__verbosity = 0U;
            this->__Vtask_uvm_report_error__6__message = "cannot copy to report_server from the given datatype"s;
            this->__Vtask_uvm_report_error__6__id = "UVM/REPORT/SERVER/RPTCOPY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__6__id, this->__Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, this->__Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, this->__Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[15351]);
        } else {
            ++(vlSymsp->__Vcoverage[15352]);
        }
        ++(vlSymsp->__Vcoverage[15353]);
    }
    unnamedblk1__DOT__q.clear();
    unnamedblk1__DOT__q.atDefault() = 0;
    VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 120)->__VnoInFunc_get_severity_set(vlSymsp, __Vtask_get_severity_set__10__q);
    unnamedblk1__DOT__q = __Vtask_get_severity_set__10__q;
    unnamedblk1__DOT__unnamedblk2__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__s, unnamedblk1__DOT__q.size())) {
        VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 122)->__VnoInFunc_get_severity_count(vlSymsp, unnamedblk1__DOT__q.at(unnamedblk1__DOT__unnamedblk2__DOT__s), __VlefCall_2__get_severity_count);
        this->__VnoInFunc_set_severity_count(vlSymsp, unnamedblk1__DOT__q.at(unnamedblk1__DOT__unnamedblk2__DOT__s), __VlefCall_2__get_severity_count);
        unnamedblk1__DOT__unnamedblk2__DOT__s = ((IData)(1U) 
                                                 + unnamedblk1__DOT__unnamedblk2__DOT__s);
        ++(vlSymsp->__Vcoverage[15355]);
    }
    unnamedblk3__DOT__q.clear();
    unnamedblk3__DOT__q.atDefault().clear();
    VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 127)->__VnoInFunc_get_id_set(vlSymsp, __Vtask_get_id_set__13__q);
    unnamedblk3__DOT__q = __Vtask_get_id_set__13__q;
    unnamedblk3__DOT__unnamedblk4__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__s, unnamedblk3__DOT__q.size())) {
        VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 129)->__VnoInFunc_get_id_count(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk3__DOT__q.at(unnamedblk3__DOT__unnamedblk4__DOT__s)), __VlefCall_3__get_id_count);
        this->__VnoInFunc_set_id_count(vlSymsp, VL_CVT_PACK_STR_NN(unnamedblk3__DOT__q.at(unnamedblk3__DOT__unnamedblk4__DOT__s)), __VlefCall_3__get_id_count);
        unnamedblk3__DOT__unnamedblk4__DOT__s = ((IData)(1U) 
                                                 + unnamedblk3__DOT__unnamedblk4__DOT__s);
        ++(vlSymsp->__Vcoverage[15356]);
    }
    VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 132)->__VnoInFunc_get_message_database(vlSymsp, __VlefCall_4__get_message_database);
    this->__VnoInFunc_set_message_database(vlSymsp, __VlefCall_4__get_message_database);
    VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 133)->__VnoInFunc_get_max_quit_count(vlSymsp, __VlefCall_5__get_max_quit_count);
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, __VlefCall_5__get_max_quit_count, 1U);
    VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_server.svh", 134)->__VnoInFunc_get_quit_count(vlSymsp, __VlefCall_6__get_quit_count);
    this->__VnoInFunc_set_quit_count(vlSymsp, __VlefCall_6__get_quit_count);
    ++(vlSymsp->__Vcoverage[15357]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report_message\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15358]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_execute_report_message\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15359]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_report_message\n"); );
    // Body
    compose_report_message__Vfuncrtn = ""s;
    ++(vlSymsp->__Vcoverage[15360]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report_summarize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report_summarize\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[15361]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_report_server::~Vtb_rng_uvm_pkg__03a__03auvm_report_server() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_server::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_server::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_server::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
