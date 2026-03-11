// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi118> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10623]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_text_tr_database"s;
    ++(vlSymsp->__Vcoverage[10628]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi118> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[10624]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, "unnamed-uvm_text_tr_database"s);
        ++(vlSymsp->__Vcoverage[10625]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[10626]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[10627]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_tr_database"s;
    ++(vlSymsp->__Vcoverage[10629]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_tr_database::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_filename_dap = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_simple_lock_dap__Tz2, vlProcess, vlSymsp, "filename_dap"s);
    VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 77)->__VnoInFunc_set(vlProcess, vlSymsp, "tr_db.log"s);
    ++(vlSymsp->__Vcoverage[10630]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db\n"); );
    // Body
    std::string __VlefCall_0__get;
    do_open_db__Vfuncrtn = 0U;
    if (VL_UNLIKELY(((0U == this->__PVT__m_file)))) {
        VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 97)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
        this->__PVT__m_file = VL_FOPEN_NN(__VlefCall_0__get
                                          , "a+"s);
        ;
        if ((0U != this->__PVT__m_file)) {
            VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 99)->__VnoInFunc_lock(vlSymsp);
            ++(vlSymsp->__Vcoverage[10631]);
        } else {
            ++(vlSymsp->__Vcoverage[10632]);
        }
        ++(vlSymsp->__Vcoverage[10633]);
    } else {
        ++(vlSymsp->__Vcoverage[10634]);
    }
    do_open_db__Vfuncrtn = (0U != this->__PVT__m_file);
    ++(vlSymsp->__Vcoverage[10635]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db\n"); );
    // Body
    do_close_db__Vfuncrtn = 0U;
    if ((0U != this->__PVT__m_file)) {
        this->__VnoInFunc_do_close_db____Vfork_1__0(vlSymsp);
        VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 120)->__VnoInFunc_unlock(vlSymsp);
        ++(vlSymsp->__Vcoverage[10636]);
    } else {
        ++(vlSymsp->__Vcoverage[10637]);
    }
    do_close_db__Vfuncrtn = 1U;
    ++(vlSymsp->__Vcoverage[10638]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db____Vfork_1__0(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 
                                            117);
    VL_FCLOSE_I(this->__PVT__m_file); co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_text_tr_stream> m_stream;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi125__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, m_stream);
    do_open_stream__Vfuncrtn = m_stream;
    ++(vlSymsp->__Vcoverage[10639]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link\n"); );
    // Body
    IData/*31:0*/ __VlefCall_5__get_handle;
    IData/*31:0*/ __VlefCall_4__get_handle;
    IData/*31:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__get_handle;
    IData/*31:0*/ __VlefCall_1__get_handle;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_parent_child_link> unnamedblk1__DOT__pc_link;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_related_link> unnamedblk1__DOT__re_link;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> r_lhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> r_rhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs;
    VL_NULL_CHECK(link, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 147)->__VnoInFunc_get_lhs(vlSymsp, lhs);
    VL_NULL_CHECK(link, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 148)->__VnoInFunc_get_rhs(vlSymsp, rhs);
    std::ignore = VL_CAST_DYNAMIC(lhs, r_lhs);
    std::ignore = VL_CAST_DYNAMIC(rhs, r_rhs);
    if ((1U & (~ ((VlNull{} == r_lhs) | (VlNull{} == r_rhs))))) {
        __VlefExpr_0 = VL_CAST_DYNAMIC(link, unnamedblk1__DOT__pc_link);
        if (VL_UNLIKELY((__VlefExpr_0))) {
            VL_NULL_CHECK(r_lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 162)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
            VL_NULL_CHECK(r_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 163)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_2__get_handle);
            VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=child}\n",0,
                          64,VL_TIME_UNITED_Q(1),-12,
                          32,__VlefCall_1__get_handle,
                          32,__VlefCall_2__get_handle);
            ++(vlSymsp->__Vcoverage[10642]);
        } else {
            __VlefExpr_3 = VL_CAST_DYNAMIC(link, unnamedblk1__DOT__re_link);
            if (VL_UNLIKELY((__VlefExpr_3))) {
                VL_NULL_CHECK(r_lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 170)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
                VL_NULL_CHECK(r_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 171)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_5__get_handle);
                VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=}\n",0,
                              64,VL_TIME_UNITED_Q(1),
                              -12,32,__VlefCall_4__get_handle,
                              32,__VlefCall_5__get_handle);
                ++(vlSymsp->__Vcoverage[10640]);
            } else {
                ++(vlSymsp->__Vcoverage[10641]);
            }
        }
        ++(vlSymsp->__Vcoverage[10644]);
    }
    ++(vlSymsp->__Vcoverage[10645]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_set_file_name(Vtb_rng__Syms* __restrict vlSymsp, std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_set_file_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__20__verbosity;
    __Vtask_uvm_report_warning__20__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__20__line;
    __Vtask_uvm_report_warning__20__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__20__report_enabled_checked;
    __Vtask_uvm_report_warning__20__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
    __Vfunc_uvm_report_enabled__25__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
    __Vfunc_uvm_report_enabled__25__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__29__verbosity;
    __Vtask_uvm_report_warning__29__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__29__line;
    __Vtask_uvm_report_warning__29__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__29__report_enabled_checked;
    __Vtask_uvm_report_warning__29__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__try_set;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((""s == filename)) {
            this->__Vfunc_uvm_report_enabled__16__id = "UVM/TXT_DB/EMPTY_NAME"s;
            __Vfunc_uvm_report_enabled__16__severity = 1U;
            __Vfunc_uvm_report_enabled__16__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), this->__Vfunc_uvm_report_enabled__16__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__20__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__20__context_name = ""s;
                __Vtask_uvm_report_warning__20__line = 0x000000bfU;
                this->__Vtask_uvm_report_warning__20__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh"s;
                __Vtask_uvm_report_warning__20__verbosity = 0U;
                this->__Vtask_uvm_report_warning__20__message = "Ignoring attempt to set file name to ''!"s;
                this->__Vtask_uvm_report_warning__20__id = "UVM/TXT_DB/EMPTY_NAME"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__21__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__22__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__20__id, this->__Vtask_uvm_report_warning__20__message, __Vtask_uvm_report_warning__20__verbosity, this->__Vtask_uvm_report_warning__20__filename, __Vtask_uvm_report_warning__20__line, this->__Vtask_uvm_report_warning__20__context_name, (IData)(__Vtask_uvm_report_warning__20__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[10646]);
            } else {
                ++(vlSymsp->__Vcoverage[10647]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10649]);
        }
        VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 195)->__VnoInFunc_try_set(vlSymsp, filename, __VlefCall_1__try_set);
        if (__VlefCall_1__try_set) {
            ++(vlSymsp->__Vcoverage[10653]);
        } else {
            this->__Vfunc_uvm_report_enabled__25__id = "UVM/TXT_DB/SET_AFTER_OPEN"s;
            __Vfunc_uvm_report_enabled__25__severity = 1U;
            __Vfunc_uvm_report_enabled__25__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__27__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), this->__Vfunc_uvm_report_enabled__25__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__29__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__29__context_name = ""s;
                __Vtask_uvm_report_warning__29__line = 0x000000c5U;
                this->__Vtask_uvm_report_warning__29__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh"s;
                __Vtask_uvm_report_warning__29__verbosity = 0U;
                this->__Vtask_uvm_report_warning__29__message = "Ignoring attempt to change file name after opening the db!"s;
                this->__Vtask_uvm_report_warning__29__id = "UVM/TXT_DB/SET_AFTER_OPEN"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__30__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__29__id, this->__Vtask_uvm_report_warning__29__message, __Vtask_uvm_report_warning__29__verbosity, this->__Vtask_uvm_report_warning__29__filename, __Vtask_uvm_report_warning__29__line, this->__Vtask_uvm_report_warning__29__context_name, (IData)(__Vtask_uvm_report_warning__29__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[10650]);
            } else {
                ++(vlSymsp->__Vcoverage[10651]);
            }
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10654]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_file = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::~Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_filename_dap:" + VL_TO_STRING(__PVT__m_filename_dap);
    out += ", m_file:" + VL_TO_STRING(__PVT__m_file);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_tr_database::to_string_middle();
    return (out);
}
