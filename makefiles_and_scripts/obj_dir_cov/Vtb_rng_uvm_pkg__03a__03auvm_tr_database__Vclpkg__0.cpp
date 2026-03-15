// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[10555]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_db(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_db\n"); );
    // Body
    open_db__Vfuncrtn = 0U;
    if (this->__PVT__m_is_opened) {
        ++(vlSymsp->__Vcoverage[10557]);
    } else {
        this->__VnoInFunc_do_open_db(vlSymsp, this->__PVT__m_is_opened);
        ++(vlSymsp->__Vcoverage[10556]);
    }
    open_db__Vfuncrtn = this->__PVT__m_is_opened;
    if ((1U & (~ (IData)(this->__PVT__m_is_opened)))) {
        ++(vlSymsp->__Vcoverage[10558]);
    }
    if (this->__PVT__m_is_opened) {
        ++(vlSymsp->__Vcoverage[10559]);
    }
    ++(vlSymsp->__Vcoverage[10560]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_close_db(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &close_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_close_db\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__do_close_db;
    close_db__Vfuncrtn = 0U;
    if (this->__PVT__m_is_opened) {
        this->__VnoInFunc_do_close_db(vlSymsp, __VlefCall_0__do_close_db);
        if (__VlefCall_0__do_close_db) {
            this->__PVT__m_is_opened = 0U;
            ++(vlSymsp->__Vcoverage[10561]);
        } else {
            ++(vlSymsp->__Vcoverage[10562]);
        }
        ++(vlSymsp->__Vcoverage[10563]);
    } else {
        ++(vlSymsp->__Vcoverage[10564]);
    }
    close_db__Vfuncrtn = (1U & (~ (IData)(this->__PVT__m_is_opened)));
    ++(vlSymsp->__Vcoverage[10565]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_is_open(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
    ++(vlSymsp->__Vcoverage[10566]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_stream(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> &open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_stream\n"); );
    // Body
    VlClassRef<Vtb_rng_std__03a__03aprocess> unnamedblk1__DOT__p;
    std::string unnamedblk1__DOT__s;
    CData/*0:0*/ __VExpr_h9bd7b4d5__0;
    __VExpr_h9bd7b4d5__0 = 0;
    this->__VnoInFunc_open_db(vlSymsp, __VExpr_h9bd7b4d5__0);
    if (__VExpr_h9bd7b4d5__0) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk1__DOT__p);
        unnamedblk1__DOT__s = ""s;
        if ((VlNull{} != unnamedblk1__DOT__p)) {
            VL_NULL_CHECK(unnamedblk1__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 110)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk1__DOT__s);
            ++(vlSymsp->__Vcoverage[10567]);
        } else {
            ++(vlSymsp->__Vcoverage[10568]);
        }
        this->__VnoInFunc_do_open_stream(vlProcess, vlSymsp, name, scope, type_name, open_stream__Vfuncrtn);
        if ((VlNull{} != open_stream__Vfuncrtn)) {
            this->__PVT__m_streams.at(open_stream__Vfuncrtn) = 1U;
            VL_NULL_CHECK(open_stream__Vfuncrtn, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 117)->__VnoInFunc_m_do_open(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database>{this}, scope, type_name);
            ++(vlSymsp->__Vcoverage[10569]);
        } else {
            ++(vlSymsp->__Vcoverage[10570]);
        }
        if ((VlNull{} != unnamedblk1__DOT__p)) {
            VL_NULL_CHECK(unnamedblk1__DOT__p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 121)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk1__DOT__s);
            ++(vlSymsp->__Vcoverage[10571]);
        } else {
            ++(vlSymsp->__Vcoverage[10572]);
        }
        ++(vlSymsp->__Vcoverage[10574]);
    } else {
        open_stream__Vfuncrtn = VlNull{};
    }
    if ((1U & (~ (IData)(__VExpr_h9bd7b4d5__0)))) {
        ++(vlSymsp->__Vcoverage[10575]);
    }
    if (__VExpr_h9bd7b4d5__0) {
        ++(vlSymsp->__Vcoverage[10576]);
    }
    ++(vlSymsp->__Vcoverage[10577]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_m_free_stream(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_m_free_stream\n"); );
    // Body
    if (this->__PVT__m_streams.exists(stream)) {
        this->__PVT__m_streams.erase(stream);
        ++(vlSymsp->__Vcoverage[10578]);
    } else {
        ++(vlSymsp->__Vcoverage[10579]);
    }
    ++(vlSymsp->__Vcoverage[10580]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_get_streams(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream>> &q, CData/*0:0*/ &get_streams__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_get_streams\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> unnamedblk2__DOT__idx;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vfirst;
    unnamedblk2__DOT__idx__Vfirst = 0;
    q.clear();
    __VlefExpr_0 = (0U != this->__PVT__m_streams.first(unnamedblk2__DOT__idx));
    if (__VlefExpr_0) {
        unnamedblk2__DOT__idx__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk2__DOT__idx__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_streams.next(unnamedblk2__DOT__idx));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk2__DOT__idx__Vfirst = 0U;
            q.push_back(unnamedblk2__DOT__idx);
            ++(vlSymsp->__Vcoverage[10581]);
        }
        ++(vlSymsp->__Vcoverage[10582]);
    } else {
        ++(vlSymsp->__Vcoverage[10583]);
    }
    get_streams__Vfuncrtn = (1U & q.size());
    ++(vlSymsp->__Vcoverage[10584]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_establish_link(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_establish_link\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__verbosity;
    __Vtask_uvm_report_warning__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__line;
    __Vtask_uvm_report_warning__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__15__report_enabled_checked;
    __Vtask_uvm_report_warning__15__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__verbosity;
    __Vfunc_uvm_report_enabled__19__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__19__severity;
    __Vfunc_uvm_report_enabled__19__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__23__verbosity;
    __Vtask_uvm_report_warning__23__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__23__line;
    __Vtask_uvm_report_warning__23__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__23__report_enabled_checked;
    __Vtask_uvm_report_warning__23__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__verbosity;
    __Vfunc_uvm_report_enabled__27__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__27__severity;
    __Vfunc_uvm_report_enabled__27__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__32__verbosity;
    __Vtask_uvm_report_warning__32__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__32__line;
    __Vtask_uvm_report_warning__32__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__32__report_enabled_checked;
    __Vtask_uvm_report_warning__32__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__verbosity;
    __Vfunc_uvm_report_enabled__36__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__36__severity;
    __Vfunc_uvm_report_enabled__36__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__41__verbosity;
    __Vtask_uvm_report_warning__41__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__41__line;
    __Vtask_uvm_report_warning__41__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__41__report_enabled_checked;
    __Vtask_uvm_report_warning__41__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__55__verbosity;
    __Vtask_uvm_report_warning__55__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__55__line;
    __Vtask_uvm_report_warning__55__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__55__report_enabled_checked;
    __Vtask_uvm_report_warning__55__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__56__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__57__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__61__verbosity;
    __Vfunc_uvm_report_enabled__61__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__61__severity;
    __Vfunc_uvm_report_enabled__61__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__62__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__63__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__67__verbosity;
    __Vtask_uvm_report_warning__67__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__67__line;
    __Vtask_uvm_report_warning__67__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__67__report_enabled_checked;
    __Vtask_uvm_report_warning__67__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    // Body
    std::string __VlefCall_21__get_name;
    std::string __VlefCall_20__get_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_18;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> __VlefCall_17__get_db;
    std::string __VlefCall_16__get_name;
    std::string __VlefCall_15__get_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_13;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> __VlefCall_12__get_db;
    std::string __VlefCall_11__get_type_name;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_9;
    IData/*31:0*/ __VlefExpr_8;
    IData/*31:0*/ __VlefExpr_7;
    std::string __VlefCall_6__get_type_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_4;
    IData/*31:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefExpr_2;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> s_lhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> s_rhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> r_lhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> r_rhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> db;
    {
        VL_NULL_CHECK(link, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 152)->__VnoInFunc_get_lhs(vlSymsp, lhs);
        VL_NULL_CHECK(link, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 153)->__VnoInFunc_get_rhs(vlSymsp, rhs);
        if ((VlNull{} == lhs)) {
            this->__Vfunc_uvm_report_enabled__11__id = "UVM/TR_DB/BAD_LINK"s;
            __Vfunc_uvm_report_enabled__11__severity = 1U;
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
                __Vtask_uvm_report_warning__15__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__15__context_name = ""s;
                __Vtask_uvm_report_warning__15__line = 0x0000009eU;
                this->__Vtask_uvm_report_warning__15__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__15__verbosity = 0U;
                this->__Vtask_uvm_report_warning__15__message = "left hand side '<null>' is not supported in links for 'uvm_tr_database'"s;
                this->__Vtask_uvm_report_warning__15__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__17__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__15__id, this->__Vtask_uvm_report_warning__15__message, __Vtask_uvm_report_warning__15__verbosity, this->__Vtask_uvm_report_warning__15__filename, __Vtask_uvm_report_warning__15__line, this->__Vtask_uvm_report_warning__15__context_name, (IData)(__Vtask_uvm_report_warning__15__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[10585]);
            } else {
                ++(vlSymsp->__Vcoverage[10586]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10588]);
        }
        if ((VlNull{} == rhs)) {
            this->__Vfunc_uvm_report_enabled__19__id = "UVM/TR_DB/BAD_LINK"s;
            __Vfunc_uvm_report_enabled__19__severity = 1U;
            __Vfunc_uvm_report_enabled__19__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__19__verbosity, (IData)(__Vfunc_uvm_report_enabled__19__severity), this->__Vfunc_uvm_report_enabled__19__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__23__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__23__context_name = ""s;
                __Vtask_uvm_report_warning__23__line = 0x000000a3U;
                this->__Vtask_uvm_report_warning__23__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__23__verbosity = 0U;
                this->__Vtask_uvm_report_warning__23__message = "right hand side '<null>' is not supported in links for 'uvm_tr_database'"s;
                this->__Vtask_uvm_report_warning__23__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__24__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__25__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__23__id, this->__Vtask_uvm_report_warning__23__message, __Vtask_uvm_report_warning__23__verbosity, this->__Vtask_uvm_report_warning__23__filename, __Vtask_uvm_report_warning__23__line, this->__Vtask_uvm_report_warning__23__context_name, (IData)(__Vtask_uvm_report_warning__23__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[10589]);
            } else {
                ++(vlSymsp->__Vcoverage[10590]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10592]);
        }
        __VlefExpr_2 = VL_CAST_DYNAMIC(lhs, s_lhs);
        __VlefLogAnd_4 = (! __VlefExpr_2);
        if (__VlefLogAnd_4) {
            __VlefExpr_3 = VL_CAST_DYNAMIC(lhs, r_lhs);
            __VlefLogAnd_4 = (! __VlefExpr_3);
        }
        if (__VlefLogAnd_4) {
            this->__Vfunc_uvm_report_enabled__27__id = "UVM/TR_DB/BAD_LINK"s;
            __Vfunc_uvm_report_enabled__27__severity = 1U;
            __Vfunc_uvm_report_enabled__27__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__28__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__28__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__29__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__27__verbosity, (IData)(__Vfunc_uvm_report_enabled__27__severity), this->__Vfunc_uvm_report_enabled__27__id, __VlefCall_5__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 171)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                __Vtask_uvm_report_warning__32__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__32__context_name = ""s;
                __Vtask_uvm_report_warning__32__line = 0x000000abU;
                this->__Vtask_uvm_report_warning__32__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__32__verbosity = 0U;
                this->__Vtask_uvm_report_warning__32__message 
                    = VL_SFORMATF_N_NX("left hand side of type '%@' not supported in links for 'uvm_tr_database'",0,
                                       -1,&(__VlefCall_6__get_type_name)) ;
                this->__Vtask_uvm_report_warning__32__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__32__id, this->__Vtask_uvm_report_warning__32__message, __Vtask_uvm_report_warning__32__verbosity, this->__Vtask_uvm_report_warning__32__filename, __Vtask_uvm_report_warning__32__line, this->__Vtask_uvm_report_warning__32__context_name, (IData)(__Vtask_uvm_report_warning__32__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[10593]);
            } else {
                ++(vlSymsp->__Vcoverage[10594]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10596]);
        }
        __VlefExpr_7 = VL_CAST_DYNAMIC(rhs, s_rhs);
        __VlefLogAnd_9 = (! __VlefExpr_7);
        if (__VlefLogAnd_9) {
            __VlefExpr_8 = VL_CAST_DYNAMIC(rhs, r_rhs);
            __VlefLogAnd_9 = (! __VlefExpr_8);
        }
        if (__VlefLogAnd_9) {
            this->__Vfunc_uvm_report_enabled__36__id = "UVM/TR_DB/BAD_LINK"s;
            __Vfunc_uvm_report_enabled__36__severity = 1U;
            __Vfunc_uvm_report_enabled__36__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__37__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__38__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__36__verbosity, (IData)(__Vfunc_uvm_report_enabled__36__severity), this->__Vfunc_uvm_report_enabled__36__id, __VlefCall_10__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_10__uvm_report_enabled)) {
                VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 178)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                __Vtask_uvm_report_warning__41__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__41__context_name = ""s;
                __Vtask_uvm_report_warning__41__line = 0x000000b2U;
                this->__Vtask_uvm_report_warning__41__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__41__verbosity = 0U;
                this->__Vtask_uvm_report_warning__41__message 
                    = VL_SFORMATF_N_NX("right hand side of type '%@' not supported in links for 'uvm_record_datbasae'",0,
                                       -1,&(__VlefCall_11__get_type_name)) ;
                this->__Vtask_uvm_report_warning__41__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__42__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__43__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__41__id, this->__Vtask_uvm_report_warning__41__message, __Vtask_uvm_report_warning__41__verbosity, this->__Vtask_uvm_report_warning__41__filename, __Vtask_uvm_report_warning__41__line, this->__Vtask_uvm_report_warning__41__context_name, (IData)(__Vtask_uvm_report_warning__41__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[10597]);
            } else {
                ++(vlSymsp->__Vcoverage[10598]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10600]);
        }
        if ((VlNull{} != r_lhs)) {
            VL_NULL_CHECK(r_lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 183)->__VnoInFunc_get_stream(vlProcess, vlSymsp, s_lhs);
            ++(vlSymsp->__Vcoverage[10601]);
        } else {
            ++(vlSymsp->__Vcoverage[10602]);
        }
        if ((VlNull{} != r_rhs)) {
            VL_NULL_CHECK(r_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 186)->__VnoInFunc_get_stream(vlProcess, vlSymsp, s_rhs);
            ++(vlSymsp->__Vcoverage[10603]);
        } else {
            ++(vlSymsp->__Vcoverage[10604]);
        }
        __VlefLogAnd_13 = (VlNull{} != s_lhs);
        if (__VlefLogAnd_13) {
            VL_NULL_CHECK(s_lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 189)->__VnoInFunc_get_db(vlProcess, vlSymsp, __VlefCall_12__get_db);
            __VlefLogAnd_13 = (__VlefCall_12__get_db 
                               != VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database>{this});
        }
        if (__VlefLogAnd_13) {
            VL_NULL_CHECK(s_lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 190)->__VnoInFunc_get_db(vlProcess, vlSymsp, db);
            this->__Vfunc_uvm_report_enabled__49__id = "UVM/TR_DB/BAD_LINK"s;
            __Vfunc_uvm_report_enabled__49__severity = 1U;
            __Vfunc_uvm_report_enabled__49__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__50__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), this->__Vfunc_uvm_report_enabled__49__id, __VlefCall_14__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                VL_NULL_CHECK(db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 193)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                __Vtask_uvm_report_warning__55__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__55__context_name = ""s;
                __Vtask_uvm_report_warning__55__line = 0x000000c1U;
                this->__Vtask_uvm_report_warning__55__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__55__verbosity = 0U;
                this->__Vtask_uvm_report_warning__55__message 
                    = VL_SFORMATF_N_NX("attempt to link stream from '%@' into '%@'",0,
                                       -1,&(__VlefCall_15__get_name),
                                       -1,&(__VlefCall_16__get_name)) ;
                this->__Vtask_uvm_report_warning__55__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__56__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__56__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__57__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__57__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__55__id, this->__Vtask_uvm_report_warning__55__message, __Vtask_uvm_report_warning__55__verbosity, this->__Vtask_uvm_report_warning__55__filename, __Vtask_uvm_report_warning__55__line, this->__Vtask_uvm_report_warning__55__context_name, (IData)(__Vtask_uvm_report_warning__55__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[10605]);
            } else {
                ++(vlSymsp->__Vcoverage[10606]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10608]);
        }
        __VlefLogAnd_18 = (VlNull{} != s_rhs);
        if (__VlefLogAnd_18) {
            VL_NULL_CHECK(s_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 196)->__VnoInFunc_get_db(vlProcess, vlSymsp, __VlefCall_17__get_db);
            __VlefLogAnd_18 = (__VlefCall_17__get_db 
                               != VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database>{this});
        }
        if (__VlefLogAnd_18) {
            VL_NULL_CHECK(s_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 197)->__VnoInFunc_get_db(vlProcess, vlSymsp, db);
            this->__Vfunc_uvm_report_enabled__61__id = "UVM/TR_DB/BAD_LINK"s;
            __Vfunc_uvm_report_enabled__61__severity = 1U;
            __Vfunc_uvm_report_enabled__61__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__62__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__63__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__63__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__61__verbosity, (IData)(__Vfunc_uvm_report_enabled__61__severity), this->__Vfunc_uvm_report_enabled__61__id, __VlefCall_19__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_19__uvm_report_enabled)) {
                VL_NULL_CHECK(db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 200)->__VnoInFunc_get_name(vlSymsp, __VlefCall_20__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_21__get_name);
                __Vtask_uvm_report_warning__67__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__67__context_name = ""s;
                __Vtask_uvm_report_warning__67__line = 0x000000c8U;
                this->__Vtask_uvm_report_warning__67__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__67__verbosity = 0U;
                this->__Vtask_uvm_report_warning__67__message 
                    = VL_SFORMATF_N_NX("attempt to link stream from '%@' into '%@'",0,
                                       -1,&(__VlefCall_20__get_name),
                                       -1,&(__VlefCall_21__get_name)) ;
                this->__Vtask_uvm_report_warning__67__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__68__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__69__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__67__id, this->__Vtask_uvm_report_warning__67__message, __Vtask_uvm_report_warning__67__verbosity, this->__Vtask_uvm_report_warning__67__filename, __Vtask_uvm_report_warning__67__line, this->__Vtask_uvm_report_warning__67__context_name, (IData)(__Vtask_uvm_report_warning__67__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[10609]);
            } else {
                ++(vlSymsp->__Vcoverage[10610]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10612]);
        }
        this->__VnoInFunc_do_establish_link(vlSymsp, link);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10613]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_db(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_db\n"); );
    // Body
    do_open_db__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[10614]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_close_db(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_close_db\n"); );
    // Body
    do_close_db__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[10615]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_stream\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10616]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_establish_link(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_establish_link\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[10617]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_tr_database::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_is_opened = 0;
    __PVT__m_streams.atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_tr_database::~Vtb_rng_uvm_pkg__03a__03auvm_tr_database() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_tr_database::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_tr_database::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tr_database::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
