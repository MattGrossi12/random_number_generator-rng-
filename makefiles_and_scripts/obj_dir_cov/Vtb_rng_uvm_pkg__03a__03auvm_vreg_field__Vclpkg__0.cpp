// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi115> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi115__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[21575]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_vreg_field"s;
    ++(vlSymsp->__Vcoverage[21580]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi115> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi115__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[21576]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, "uvm_vreg_field"s);
        ++(vlSymsp->__Vcoverage[21577]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[21578]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[21579]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_vreg_field"s;
    ++(vlSymsp->__Vcoverage[21581]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21583]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21584]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21585]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ &path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21586]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[21587]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__9__verbosity;
    __Vtask_uvm_report_error__9__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__9__line;
    __Vtask_uvm_report_error__9__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__9__report_enabled_checked;
    __Vtask_uvm_report_error__9__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__18__verbosity;
    __Vtask_uvm_report_error__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__18__line;
    __Vtask_uvm_report_error__18__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__18__report_enabled_checked;
    __Vtask_uvm_report_error__18__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__PVT__parent = parent;
    if ((0U == size)) {
        this->__Vfunc_uvm_report_enabled__4__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__4__severity = 2U;
        __Vfunc_uvm_report_enabled__4__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__5__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__6__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), this->__Vfunc_uvm_report_enabled__4__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__9__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__9__context_name = ""s;
            __Vtask_uvm_report_error__9__line = 0x00000141U;
            this->__Vtask_uvm_report_error__9__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_error__9__verbosity = 0U;
            this->__Vtask_uvm_report_error__9__message 
                = VL_SFORMATF_N_NX("Virtual field \"%@\" cannot have 0 bits",0,
                                   -1,&(__VlefCall_1__get_full_name)) ;
            this->__Vtask_uvm_report_error__9__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__9__id, this->__Vtask_uvm_report_error__9__message, __Vtask_uvm_report_error__9__verbosity, this->__Vtask_uvm_report_error__9__filename, __Vtask_uvm_report_error__9__line, this->__Vtask_uvm_report_error__9__context_name, (IData)(__Vtask_uvm_report_error__9__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[21588]);
        } else {
            ++(vlSymsp->__Vcoverage[21589]);
        }
        size = 1U;
        ++(vlSymsp->__Vcoverage[21590]);
    } else {
        ++(vlSymsp->__Vcoverage[21591]);
    }
    if ((0x00000040U < size)) {
        this->__Vfunc_uvm_report_enabled__13__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__13__severity = 2U;
        __Vfunc_uvm_report_enabled__13__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__14__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_2__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_error__18__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__18__context_name = ""s;
            __Vtask_uvm_report_error__18__line = 0x00000147U;
            this->__Vtask_uvm_report_error__18__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_error__18__verbosity = 0U;
            this->__Vtask_uvm_report_error__18__message 
                = VL_SFORMATF_N_NX("Virtual field \"%@\" cannot have more than 64 bits",0,
                                   -1,&(__VlefCall_3__get_full_name)) ;
            this->__Vtask_uvm_report_error__18__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__18__id, this->__Vtask_uvm_report_error__18__message, __Vtask_uvm_report_error__18__verbosity, this->__Vtask_uvm_report_error__18__filename, __Vtask_uvm_report_error__18__line, this->__Vtask_uvm_report_error__18__context_name, (IData)(__Vtask_uvm_report_error__18__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[21592]);
        } else {
            ++(vlSymsp->__Vcoverage[21593]);
        }
        size = 0x00000040U;
        ++(vlSymsp->__Vcoverage[21594]);
    } else {
        ++(vlSymsp->__Vcoverage[21595]);
    }
    this->__PVT__size = size;
    this->__PVT__lsb = lsb_pos;
    VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 334)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>{this});
    ++(vlSymsp->__Vcoverage[21596]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name\n"); );
    // Body
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 340)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
    ++(vlSymsp->__Vcoverage[21597]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__parent;
    ++(vlSymsp->__Vcoverage[21598]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
    ++(vlSymsp->__Vcoverage[21599]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register\n"); );
    // Body
    get_lsb_pos_in_register__Vfuncrtn = this->__PVT__lsb;
    ++(vlSymsp->__Vcoverage[21600]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__size;
    ++(vlSymsp->__Vcoverage[21601]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__verbosity;
    __Vfunc_uvm_report_enabled__26__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__26__severity;
    __Vfunc_uvm_report_enabled__26__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__31__verbosity;
    __Vtask_uvm_report_error__31__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__31__line;
    __Vtask_uvm_report_error__31__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__31__report_enabled_checked;
    __Vtask_uvm_report_error__31__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> __VlefCall_0__get_memory;
    {
        get_access__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 366)->__VnoInFunc_get_memory(vlSymsp, __VlefCall_0__get_memory);
        if ((VlNull{} == __VlefCall_0__get_memory)) {
            this->__Vfunc_uvm_report_enabled__26__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__26__severity = 2U;
            __Vfunc_uvm_report_enabled__26__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__27__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__28__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__26__verbosity, (IData)(__Vfunc_uvm_report_enabled__26__severity), this->__Vfunc_uvm_report_enabled__26__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__31__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__31__context_name = ""s;
                __Vtask_uvm_report_error__31__line = 0x00000170U;
                this->__Vtask_uvm_report_error__31__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__31__verbosity = 0U;
                this->__Vtask_uvm_report_error__31__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::get_rights() on unimplemented virtual field \"%@\"",0,
                                       -1,&(__VlefCall_2__get_full_name)) ;
                this->__Vtask_uvm_report_error__31__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__31__id, this->__Vtask_uvm_report_error__31__message, __Vtask_uvm_report_error__31__verbosity, this->__Vtask_uvm_report_error__31__filename, __Vtask_uvm_report_error__31__line, this->__Vtask_uvm_report_error__31__context_name, (IData)(__Vtask_uvm_report_error__31__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[21602]);
            } else {
                ++(vlSymsp->__Vcoverage[21603]);
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21605]);
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 372)->__VnoInFunc_get_access(vlSymsp, map, get_access__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21606]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__verbosity;
    __Vfunc_uvm_report_enabled__38__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__38__severity;
    __Vfunc_uvm_report_enabled__38__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__43__verbosity;
    __Vtask_uvm_report_error__43__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__43__line;
    __Vtask_uvm_report_error__43__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__43__report_enabled_checked;
    __Vtask_uvm_report_error__43__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
    __Vfunc_uvm_report_enabled__50__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
    __Vfunc_uvm_report_enabled__50__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__56__verbosity;
    __Vtask_uvm_report_warning__56__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__56__line;
    __Vtask_uvm_report_warning__56__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__56__report_enabled_checked;
    __Vtask_uvm_report_warning__56__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__65__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__65__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__69__status;
    __Vtask_read__69__status = 0;
    QData/*63:0*/ __Vtask_read__69__value;
    __Vtask_read__69__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70__verbosity;
    __Vfunc_uvm_report_enabled__70__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__70__severity;
    __Vfunc_uvm_report_enabled__70__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__71__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__72__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__76__verbosity;
    __Vtask_uvm_report_error__76__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__76__line;
    __Vtask_uvm_report_error__76__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__76__report_enabled_checked;
    __Vtask_uvm_report_error__76__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
    IData/*31:0*/ __Vtask_read__82__status;
    __Vtask_read__82__status = 0;
    QData/*63:0*/ __Vtask_read__82__value;
    __Vtask_read__82__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__83__verbosity;
    __Vfunc_uvm_report_enabled__83__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__83__severity;
    __Vfunc_uvm_report_enabled__83__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__89__verbosity;
    __Vtask_uvm_report_error__89__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__89__line;
    __Vtask_uvm_report_error__89__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__89__report_enabled_checked;
    __Vtask_uvm_report_error__89__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__90__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__91__Vfuncout;
    IData/*31:0*/ __Vtask_write__94__status;
    __Vtask_write__94__status = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_12__get_n_bits;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__get_n_bits;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_7__get_backdoor;
    QData/*63:0*/ __VlefCall_6__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk291__DOT__blk;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk292__DOT__cb;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk294__DOT__cb;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ fmsb;
    IData/*31:0*/ rmwbits;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem;
    IData/*31:0*/ rm_path;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106> cbs;
    {
        status = 0U;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        fmsb = 0U;
        rmwbits = 0U;
        segsiz = 0U;
        segn = 0U;
        rm_path = 0U;
        cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106, vlSymsp, 
                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__write_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 401)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__38__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__38__severity = 2U;
            __Vfunc_uvm_report_enabled__38__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__39__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__40__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__38__verbosity, (IData)(__Vfunc_uvm_report_enabled__38__severity), this->__Vfunc_uvm_report_enabled__38__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__43__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__43__context_name = ""s;
                __Vtask_uvm_report_error__43__line = 0x00000194U;
                this->__Vtask_uvm_report_error__43__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__43__verbosity = 0U;
                this->__Vtask_uvm_report_error__43__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::write() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__43__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__44__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__45__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__43__id, this->__Vtask_uvm_report_error__43__message, __Vtask_uvm_report_error__43__verbosity, this->__Vtask_uvm_report_error__43__filename, __Vtask_uvm_report_error__43__line, this->__Vtask_uvm_report_error__43__context_name, (IData)(__Vtask_uvm_report_error__43__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[21607]);
            } else {
                ++(vlSymsp->__Vcoverage[21608]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21610]);
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 410)->__VnoInFunc_get_block(vlSymsp, unnamedblk291__DOT__blk);
            VL_NULL_CHECK(unnamedblk291__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 411)->__VnoInFunc_get_default_door(vlSymsp, path);
            ++(vlSymsp->__Vcoverage[21611]);
        } else {
            ++(vlSymsp->__Vcoverage[21612]);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 416)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            this->__Vfunc_uvm_report_enabled__50__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__50__severity = 1U;
            __Vfunc_uvm_report_enabled__50__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__52__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__50__verbosity, (IData)(__Vfunc_uvm_report_enabled__50__severity), this->__Vfunc_uvm_report_enabled__50__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
                __Vtask_uvm_report_warning__56__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__56__context_name = ""s;
                __Vtask_uvm_report_warning__56__line = 0x000001a3U;
                this->__Vtask_uvm_report_warning__56__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__56__verbosity = 0U;
                this->__Vtask_uvm_report_warning__56__message 
                    = VL_SFORMATF_N_NX("Writing value 'h%x that is greater than field \"%@\" size (%0# bits)",0,
                                       64,value,-1,
                                       &(__VlefCall_3__get_full_name),
                                       32,__VlefCall_4__get_n_bits) ;
                this->__Vtask_uvm_report_warning__56__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__57__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__58__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__56__id, this->__Vtask_uvm_report_warning__56__message, __Vtask_uvm_report_warning__56__verbosity, this->__Vtask_uvm_report_warning__56__filename, __Vtask_uvm_report_warning__56__line, this->__Vtask_uvm_report_warning__56__context_name, (IData)(__Vtask_uvm_report_warning__56__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[21613]);
            } else {
                ++(vlSymsp->__Vcoverage[21614]);
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
            ++(vlSymsp->__Vcoverage[21615]);
        } else {
            ++(vlSymsp->__Vcoverage[21616]);
        }
        tmp = 0ULL;
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 425)->__VnoInFunc_first(vlSymsp, unnamedblk292__DOT__cb);
        while ((VlNull{} != unnamedblk292__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk292__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 427)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk292__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 428)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk292__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 429)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 426)->__VnoInFunc_next(vlSymsp, unnamedblk292__DOT__cb);
            ++(vlSymsp->__Vcoverage[21617]);
        }
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 432)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        segsiz = VL_SHIFTL_III(32,32,32, __VlefCall_5__get_n_bytes, 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__65__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__65__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 434)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_6__get_offset_in_memory);
        segoff = (__VlefCall_6__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        rm_path = 3U;
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 438)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_7__get_backdoor);
        if ((VlNull{} != __VlefCall_7__get_backdoor)) {
            rm_path = 1U;
            ++(vlSymsp->__Vcoverage[21618]);
        } else {
            ++(vlSymsp->__Vcoverage[21619]);
        }
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_8__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                               + __VlefCall_8__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            co_await VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 449)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__69__status, segoff, __Vtask_read__69__value, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__69__status;
            tmp = __Vtask_read__69__value;
            if (((0U != st) & (2U != st))) {
                this->__Vfunc_uvm_report_enabled__70__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__70__severity = 2U;
                __Vfunc_uvm_report_enabled__70__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__71__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__72__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__72__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__70__verbosity, (IData)(__Vfunc_uvm_report_enabled__70__severity), this->__Vfunc_uvm_report_enabled__70__id, __VlefCall_9__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                    VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 453)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    __Vtask_uvm_report_error__76__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__76__context_name = ""s;
                    __Vtask_uvm_report_error__76__line = 0x000001c5U;
                    this->__Vtask_uvm_report_error__76__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                    __Vtask_uvm_report_error__76__verbosity = 0U;
                    this->__Vtask_uvm_report_error__76__message 
                        = VL_SFORMATF_N_NX("Unable to read LSB bits in %@[%0#] to for RMW cycle on virtual field %@.",0,
                                           -1,&(__VlefCall_10__get_full_name),
                                           64,segoff,
                                           -1,&(__VlefCall_11__get_full_name)) ;
                    this->__Vtask_uvm_report_error__76__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__77__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__78__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__76__id, this->__Vtask_uvm_report_error__76__message, __Vtask_uvm_report_error__76__verbosity, this->__Vtask_uvm_report_error__76__filename, __Vtask_uvm_report_error__76__line, this->__Vtask_uvm_report_error__76__context_name, (IData)(__Vtask_uvm_report_error__76__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[437]);
                    ++(vlSymsp->__Vcoverage[21620]);
                } else {
                    ++(vlSymsp->__Vcoverage[21621]);
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 455)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[21623]);
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
            if (((0U != st) & (2U != st))) {
                ++(vlSymsp->__Vcoverage[21624]);
            }
            if ((2U == st)) {
                ++(vlSymsp->__Vcoverage[21625]);
            }
            if ((0U == st)) {
                ++(vlSymsp->__Vcoverage[21626]);
            }
            ++(vlSymsp->__Vcoverage[21627]);
        } else {
            ++(vlSymsp->__Vcoverage[21628]);
        }
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
        fmsb = ((rmwbits + __VlefCall_12__get_n_bits) 
                - (IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((IData)(1U) + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                co_await VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 467)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__82__status, 
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL), __Vtask_read__82__value, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
                st = __Vtask_read__82__status;
                tmp = __Vtask_read__82__value;
                if (((0U != st) & (2U != st))) {
                    this->__Vfunc_uvm_report_enabled__83__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__83__severity = 2U;
                    __Vfunc_uvm_report_enabled__83__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__84__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__85__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__83__verbosity, (IData)(__Vfunc_uvm_report_enabled__83__severity), this->__Vfunc_uvm_report_enabled__83__id, __VlefCall_13__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_13__uvm_report_enabled)) {
                        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 472)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                        __Vtask_uvm_report_error__89__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__89__context_name = ""s;
                        __Vtask_uvm_report_error__89__line = 0x000001d8U;
                        this->__Vtask_uvm_report_error__89__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                        __Vtask_uvm_report_error__89__verbosity = 0U;
                        this->__Vtask_uvm_report_error__89__message 
                            = VL_SFORMATF_N_NX("Unable to read MSB bits in %@[%0#] to for RMW cycle on virtual field %@.",0,
                                               -1,&(__VlefCall_14__get_full_name),
                                               64,(
                                                   (segoff 
                                                    + (QData)((IData)(segn))) 
                                                   - 1ULL),
                                               -1,&(__VlefCall_15__get_full_name)) ;
                        this->__Vtask_uvm_report_error__89__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__90__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__90__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__91__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__91__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__89__id, this->__Vtask_uvm_report_error__89__message, __Vtask_uvm_report_error__89__verbosity, this->__Vtask_uvm_report_error__89__filename, __Vtask_uvm_report_error__89__line, this->__Vtask_uvm_report_error__89__context_name, (IData)(__Vtask_uvm_report_error__89__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[437]);
                        ++(vlSymsp->__Vcoverage[21629]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21630]);
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 474)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[21632]);
                }
                if (((0U != st) & (2U != st))) {
                    ++(vlSymsp->__Vcoverage[21633]);
                }
                if ((2U == st)) {
                    ++(vlSymsp->__Vcoverage[21634]);
                }
                if ((0U == st)) {
                    ++(vlSymsp->__Vcoverage[21635]);
                }
                ++(vlSymsp->__Vcoverage[21636]);
            } else {
                ++(vlSymsp->__Vcoverage[21637]);
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (IData)(1U)), segsiz)));
            ++(vlSymsp->__Vcoverage[21638]);
        } else {
            ++(vlSymsp->__Vcoverage[21639]);
        }
        tmp = value;
        unnamedblk1_1__DOT____Vrepeat0 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
            co_await VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 484)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__94__status, segoff, tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_write__94__status;
            if (((0U != st) & (2U != st))) {
                status = 1U;
                ++(vlSymsp->__Vcoverage[21640]);
            } else {
                ++(vlSymsp->__Vcoverage[21641]);
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                              - (IData)(1U));
            ++(vlSymsp->__Vcoverage[21645]);
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 492)->__VnoInFunc_first(vlSymsp, unnamedblk294__DOT__cb);
        while ((VlNull{} != unnamedblk294__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk294__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 494)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk294__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 495)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk294__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 496)->__VnoInFunc_post_write(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 493)->__VnoInFunc_next(vlSymsp, unnamedblk294__DOT__cb);
            ++(vlSymsp->__Vcoverage[21646]);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 499)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__100__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__100__severity = 0U;
        __Vfunc_uvm_report_enabled__100__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__101__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__102__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__100__verbosity, (IData)(__Vfunc_uvm_report_enabled__100__severity), this->__Vfunc_uvm_report_enabled__100__id, __VlefCall_16__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_16__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
            __Vtask_uvm_report_info__105__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__105__context_name = ""s;
            __Vtask_uvm_report_info__105__line = 0x000001f9U;
            this->__Vtask_uvm_report_info__105__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__105__verbosity = 0x000000c8U;
            __Vtemp_4[0U] = 0x646f6f72U;
            if ((0U == path)) {
                __Vtemp_4[1U] = 0x726f6e74U;
                __Vtemp_4[2U] = 0x00000066U;
            } else {
                __Vtemp_4[1U] = 0x6261636bU;
                __Vtemp_4[2U] = 0U;
            }
            this->__Vtask_uvm_report_info__105__message 
                = VL_SFORMATF_N_NX("Wrote virtual field \"%@\"[%0#] via %s with: 'h%x",0,
                                   -1,&(__VlefCall_17__get_full_name),
                                   64,idx,72,__Vtemp_4.data(),
                                   64,value) ;
            this->__Vtask_uvm_report_info__105__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__106__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__107__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__105__id, this->__Vtask_uvm_report_info__105__message, __Vtask_uvm_report_info__105__verbosity, this->__Vtask_uvm_report_info__105__filename, __Vtask_uvm_report_info__105__line, this->__Vtask_uvm_report_info__105__context_name, (IData)(__Vtask_uvm_report_info__105__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[435]);
            if ((0U == path)) {
                ++(vlSymsp->__Vcoverage[21647]);
            }
            if ((0U != path)) {
                ++(vlSymsp->__Vcoverage[21648]);
            }
            ++(vlSymsp->__Vcoverage[21649]);
        } else {
            ++(vlSymsp->__Vcoverage[21650]);
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    if (((0U != st) & (2U != st))) {
        ++(vlSymsp->__Vcoverage[21642]);
    }
    if ((2U == st)) {
        ++(vlSymsp->__Vcoverage[21643]);
    }
    if ((0U == st)) {
        ++(vlSymsp->__Vcoverage[21644]);
    }
    ++(vlSymsp->__Vcoverage[21651]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__111__verbosity;
    __Vfunc_uvm_report_enabled__111__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__111__severity;
    __Vfunc_uvm_report_enabled__111__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__112__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__113__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__116__verbosity;
    __Vtask_uvm_report_error__116__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__116__line;
    __Vtask_uvm_report_error__116__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__116__report_enabled_checked;
    __Vtask_uvm_report_error__116__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__128__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__128__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__131__status;
    __Vtask_read__131__status = 0;
    QData/*63:0*/ __Vtask_read__131__value;
    __Vtask_read__131__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__138__verbosity;
    __Vfunc_uvm_report_enabled__138__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__138__severity;
    __Vfunc_uvm_report_enabled__138__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__139__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__140__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__143__verbosity;
    __Vtask_uvm_report_info__143__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__143__line;
    __Vtask_uvm_report_info__143__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__143__report_enabled_checked;
    __Vtask_uvm_report_info__143__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__144__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__145__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    QData/*63:0*/ __VlefCall_3__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk295__DOT__blk;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk296__DOT__cb;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk297__DOT__cb;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ lsb;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106> cbs;
    {
        status = 0U;
        value = 0ULL;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        lsb = 0U;
        segsiz = 0U;
        segn = 0U;
        cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106, vlSymsp, 
                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__read_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 537)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__111__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__111__severity = 2U;
            __Vfunc_uvm_report_enabled__111__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__112__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__112__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__113__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__113__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__111__verbosity, (IData)(__Vfunc_uvm_report_enabled__111__severity), this->__Vfunc_uvm_report_enabled__111__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__116__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__116__context_name = ""s;
                __Vtask_uvm_report_error__116__line = 0x0000021cU;
                this->__Vtask_uvm_report_error__116__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__116__verbosity = 0U;
                this->__Vtask_uvm_report_error__116__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::read() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__116__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__117__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__118__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__116__id, this->__Vtask_uvm_report_error__116__message, __Vtask_uvm_report_error__116__verbosity, this->__Vtask_uvm_report_error__116__filename, __Vtask_uvm_report_error__116__line, this->__Vtask_uvm_report_error__116__context_name, (IData)(__Vtask_uvm_report_error__116__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[21652]);
            } else {
                ++(vlSymsp->__Vcoverage[21653]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21655]);
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 546)->__VnoInFunc_get_block(vlSymsp, unnamedblk295__DOT__blk);
            VL_NULL_CHECK(unnamedblk295__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 547)->__VnoInFunc_get_default_door(vlSymsp, path);
            ++(vlSymsp->__Vcoverage[21656]);
        } else {
            ++(vlSymsp->__Vcoverage[21657]);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 552)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 557)->__VnoInFunc_first(vlSymsp, unnamedblk296__DOT__cb);
        while ((VlNull{} != unnamedblk296__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk296__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 559)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk296__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 560)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk296__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 561)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 558)->__VnoInFunc_next(vlSymsp, unnamedblk296__DOT__cb);
            ++(vlSymsp->__Vcoverage[21658]);
        }
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 564)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        segsiz = VL_SHIFTL_III(32,32,32, __VlefCall_2__get_n_bytes, 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__128__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__128__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 566)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_3__get_offset_in_memory);
        segoff = (__VlefCall_3__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((lsb 
                                               + __VlefCall_4__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        segoff = (segoff + ((QData)((IData)(segn)) 
                            - 1ULL));
        unnamedblk1_2__DOT____Vrepeat1 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            co_await VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 577)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__131__status, segoff, __Vtask_read__131__value, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__131__status;
            tmp = __Vtask_read__131__value;
            if (((0U != st) & (2U != st))) {
                status = 1U;
                ++(vlSymsp->__Vcoverage[21659]);
            } else {
                ++(vlSymsp->__Vcoverage[21660]);
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                              - (IData)(1U));
            ++(vlSymsp->__Vcoverage[21664]);
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                          - 1ULL));
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 591)->__VnoInFunc_first(vlSymsp, unnamedblk297__DOT__cb);
        while ((VlNull{} != unnamedblk297__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk297__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 593)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk297__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 594)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk297__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 595)->__VnoInFunc_post_read(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 592)->__VnoInFunc_next(vlSymsp, unnamedblk297__DOT__cb);
            ++(vlSymsp->__Vcoverage[21665]);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 598)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__138__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__138__severity = 0U;
        __Vfunc_uvm_report_enabled__138__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__139__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__139__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__140__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__140__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__138__verbosity, (IData)(__Vfunc_uvm_report_enabled__138__severity), this->__Vfunc_uvm_report_enabled__138__id, __VlefCall_6__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_6__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            __Vtask_uvm_report_info__143__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__143__context_name = ""s;
            __Vtask_uvm_report_info__143__line = 0x0000025bU;
            this->__Vtask_uvm_report_info__143__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__143__verbosity = 0x000000c8U;
            __Vtemp_4[0U] = 0x646f6f72U;
            if ((0U == path)) {
                __Vtemp_4[1U] = 0x726f6e74U;
                __Vtemp_4[2U] = 0x00000066U;
            } else {
                __Vtemp_4[1U] = 0x6261636bU;
                __Vtemp_4[2U] = 0U;
            }
            this->__Vtask_uvm_report_info__143__message 
                = VL_SFORMATF_N_NX("Read virtual field \"%@\"[%0#] via %s: 'h%x",0,
                                   -1,&(__VlefCall_7__get_full_name),
                                   64,idx,72,__Vtemp_4.data(),
                                   64,value) ;
            this->__Vtask_uvm_report_info__143__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__144__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__144__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__145__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__145__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__143__id, this->__Vtask_uvm_report_info__143__message, __Vtask_uvm_report_info__143__verbosity, this->__Vtask_uvm_report_info__143__filename, __Vtask_uvm_report_info__143__line, this->__Vtask_uvm_report_info__143__context_name, (IData)(__Vtask_uvm_report_info__143__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[435]);
            if ((0U == path)) {
                ++(vlSymsp->__Vcoverage[21666]);
            }
            if ((0U != path)) {
                ++(vlSymsp->__Vcoverage[21667]);
            }
            ++(vlSymsp->__Vcoverage[21668]);
        } else {
            ++(vlSymsp->__Vcoverage[21669]);
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    if (((0U != st) & (2U != st))) {
        ++(vlSymsp->__Vcoverage[21661]);
    }
    if ((2U == st)) {
        ++(vlSymsp->__Vcoverage[21662]);
    }
    if ((0U == st)) {
        ++(vlSymsp->__Vcoverage[21663]);
    }
    ++(vlSymsp->__Vcoverage[21670]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__148__verbosity;
    __Vfunc_uvm_report_enabled__148__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__148__severity;
    __Vfunc_uvm_report_enabled__148__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__149__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__150__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__153__verbosity;
    __Vtask_uvm_report_error__153__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__153__line;
    __Vtask_uvm_report_error__153__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__153__report_enabled_checked;
    __Vtask_uvm_report_error__153__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__154__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__155__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__158__verbosity;
    __Vfunc_uvm_report_enabled__158__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__158__severity;
    __Vfunc_uvm_report_enabled__158__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__159__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__160__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__164__verbosity;
    __Vtask_uvm_report_warning__164__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__164__line;
    __Vtask_uvm_report_warning__164__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__164__report_enabled_checked;
    __Vtask_uvm_report_warning__164__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__165__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__166__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__169__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__169__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__172__status;
    __Vtask_peek__172__status = 0;
    QData/*63:0*/ __Vtask_peek__172__value;
    __Vtask_peek__172__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__verbosity;
    __Vfunc_uvm_report_enabled__173__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__173__severity;
    __Vfunc_uvm_report_enabled__173__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__174__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__175__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__179__verbosity;
    __Vtask_uvm_report_error__179__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__179__line;
    __Vtask_uvm_report_error__179__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__179__report_enabled_checked;
    __Vtask_uvm_report_error__179__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__180__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__181__Vfuncout;
    IData/*31:0*/ __Vtask_peek__185__status;
    __Vtask_peek__185__status = 0;
    QData/*63:0*/ __Vtask_peek__185__value;
    __Vtask_peek__185__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__186__verbosity;
    __Vfunc_uvm_report_enabled__186__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__186__severity;
    __Vfunc_uvm_report_enabled__186__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__187__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__188__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__192__verbosity;
    __Vtask_uvm_report_error__192__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__192__line;
    __Vtask_uvm_report_error__192__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__192__report_enabled_checked;
    __Vtask_uvm_report_error__192__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__193__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__194__Vfuncout;
    IData/*31:0*/ __Vtask_poke__197__status;
    __Vtask_poke__197__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__199__verbosity;
    __Vfunc_uvm_report_enabled__199__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__199__severity;
    __Vfunc_uvm_report_enabled__199__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__200__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__201__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__204__verbosity;
    __Vtask_uvm_report_info__204__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__204__line;
    __Vtask_uvm_report_info__204__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__204__report_enabled_checked;
    __Vtask_uvm_report_info__204__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__205__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__206__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_16__get_full_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bits;
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    QData/*63:0*/ __VlefCall_6__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ fmsb;
    IData/*31:0*/ rmwbits;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        fmsb = 0U;
        rmwbits = 0U;
        segsiz = 0U;
        segn = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 631)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__148__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__148__severity = 2U;
            __Vfunc_uvm_report_enabled__148__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__149__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__149__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__150__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__150__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__148__verbosity, (IData)(__Vfunc_uvm_report_enabled__148__severity), this->__Vfunc_uvm_report_enabled__148__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__153__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__153__context_name = ""s;
                __Vtask_uvm_report_error__153__line = 0x0000027aU;
                this->__Vtask_uvm_report_error__153__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__153__verbosity = 0U;
                this->__Vtask_uvm_report_error__153__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::poke() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__153__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__154__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__154__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__155__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__155__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__153__id, this->__Vtask_uvm_report_error__153__message, __Vtask_uvm_report_error__153__verbosity, this->__Vtask_uvm_report_error__153__filename, __Vtask_uvm_report_error__153__line, this->__Vtask_uvm_report_error__153__context_name, (IData)(__Vtask_uvm_report_error__153__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[21671]);
            } else {
                ++(vlSymsp->__Vcoverage[21672]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21674]);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 641)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            this->__Vfunc_uvm_report_enabled__158__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__158__severity = 1U;
            __Vfunc_uvm_report_enabled__158__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__159__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__159__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__160__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__160__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__158__verbosity, (IData)(__Vfunc_uvm_report_enabled__158__severity), this->__Vfunc_uvm_report_enabled__158__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
                __Vtask_uvm_report_warning__164__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__164__context_name = ""s;
                __Vtask_uvm_report_warning__164__line = 0x00000284U;
                this->__Vtask_uvm_report_warning__164__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__164__verbosity = 0U;
                this->__Vtask_uvm_report_warning__164__message 
                    = VL_SFORMATF_N_NX("Writing value 'h%x that is greater than field \"%@\" size (%0# bits)",0,
                                       64,value,-1,
                                       &(__VlefCall_3__get_full_name),
                                       32,__VlefCall_4__get_n_bits) ;
                this->__Vtask_uvm_report_warning__164__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__165__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__165__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__166__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__166__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__164__id, this->__Vtask_uvm_report_warning__164__message, __Vtask_uvm_report_warning__164__verbosity, this->__Vtask_uvm_report_warning__164__filename, __Vtask_uvm_report_warning__164__line, this->__Vtask_uvm_report_warning__164__context_name, (IData)(__Vtask_uvm_report_warning__164__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[21675]);
            } else {
                ++(vlSymsp->__Vcoverage[21676]);
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
            ++(vlSymsp->__Vcoverage[21677]);
        } else {
            ++(vlSymsp->__Vcoverage[21678]);
        }
        tmp = 0ULL;
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 649)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        segsiz = VL_SHIFTL_III(32,32,32, __VlefCall_5__get_n_bytes, 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__169__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__169__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 651)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_6__get_offset_in_memory);
        segoff = (__VlefCall_6__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                               + __VlefCall_7__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 662)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__172__status, segoff, __Vtask_peek__172__value, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__172__status;
            tmp = __Vtask_peek__172__value;
            if (((0U != st) & (2U != st))) {
                this->__Vfunc_uvm_report_enabled__173__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__173__severity = 2U;
                __Vfunc_uvm_report_enabled__173__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__174__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__174__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__175__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__175__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__173__verbosity, (IData)(__Vfunc_uvm_report_enabled__173__severity), this->__Vfunc_uvm_report_enabled__173__id, __VlefCall_8__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_8__uvm_report_enabled)) {
                    VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 666)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    __Vtask_uvm_report_error__179__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__179__context_name = ""s;
                    __Vtask_uvm_report_error__179__line = 0x0000029aU;
                    this->__Vtask_uvm_report_error__179__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                    __Vtask_uvm_report_error__179__verbosity = 0U;
                    this->__Vtask_uvm_report_error__179__message 
                        = VL_SFORMATF_N_NX("Unable to read LSB bits in %@[%0#] to for RMW cycle on virtual field %@.",0,
                                           -1,&(__VlefCall_9__get_full_name),
                                           64,segoff,
                                           -1,&(__VlefCall_10__get_full_name)) ;
                    this->__Vtask_uvm_report_error__179__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__180__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__180__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__181__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__181__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__179__id, this->__Vtask_uvm_report_error__179__message, __Vtask_uvm_report_error__179__verbosity, this->__Vtask_uvm_report_error__179__filename, __Vtask_uvm_report_error__179__line, this->__Vtask_uvm_report_error__179__context_name, (IData)(__Vtask_uvm_report_error__179__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[437]);
                    ++(vlSymsp->__Vcoverage[21679]);
                } else {
                    ++(vlSymsp->__Vcoverage[21680]);
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 668)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[21682]);
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
            if (((0U != st) & (2U != st))) {
                ++(vlSymsp->__Vcoverage[21683]);
            }
            if ((2U == st)) {
                ++(vlSymsp->__Vcoverage[21684]);
            }
            if ((0U == st)) {
                ++(vlSymsp->__Vcoverage[21685]);
            }
            ++(vlSymsp->__Vcoverage[21686]);
        } else {
            ++(vlSymsp->__Vcoverage[21687]);
        }
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_11__get_n_bits);
        fmsb = ((rmwbits + __VlefCall_11__get_n_bits) 
                - (IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((IData)(1U) + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 680)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__185__status, 
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL), __Vtask_peek__185__value, ""s, parent, extension, fname, lineno);
                st = __Vtask_peek__185__status;
                tmp = __Vtask_peek__185__value;
                if (((0U != st) & (2U != st))) {
                    this->__Vfunc_uvm_report_enabled__186__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__186__severity = 2U;
                    __Vfunc_uvm_report_enabled__186__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__187__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__187__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__188__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__188__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__186__verbosity, (IData)(__Vfunc_uvm_report_enabled__186__severity), this->__Vfunc_uvm_report_enabled__186__id, __VlefCall_12__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_12__uvm_report_enabled)) {
                        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 685)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        __Vtask_uvm_report_error__192__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__192__context_name = ""s;
                        __Vtask_uvm_report_error__192__line = 0x000002adU;
                        this->__Vtask_uvm_report_error__192__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                        __Vtask_uvm_report_error__192__verbosity = 0U;
                        this->__Vtask_uvm_report_error__192__message 
                            = VL_SFORMATF_N_NX("Unable to read MSB bits in %@[%0#] to for RMW cycle on virtual field %@.",0,
                                               -1,&(__VlefCall_13__get_full_name),
                                               64,(
                                                   (segoff 
                                                    + (QData)((IData)(segn))) 
                                                   - 1ULL),
                                               -1,&(__VlefCall_14__get_full_name)) ;
                        this->__Vtask_uvm_report_error__192__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__193__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__193__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__194__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__194__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__192__id, this->__Vtask_uvm_report_error__192__message, __Vtask_uvm_report_error__192__verbosity, this->__Vtask_uvm_report_error__192__filename, __Vtask_uvm_report_error__192__line, this->__Vtask_uvm_report_error__192__context_name, (IData)(__Vtask_uvm_report_error__192__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[437]);
                        ++(vlSymsp->__Vcoverage[21688]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21689]);
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 687)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[21691]);
                }
                if (((0U != st) & (2U != st))) {
                    ++(vlSymsp->__Vcoverage[21692]);
                }
                if ((2U == st)) {
                    ++(vlSymsp->__Vcoverage[21693]);
                }
                if ((0U == st)) {
                    ++(vlSymsp->__Vcoverage[21694]);
                }
                ++(vlSymsp->__Vcoverage[21695]);
            } else {
                ++(vlSymsp->__Vcoverage[21696]);
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (IData)(1U)), segsiz)));
            ++(vlSymsp->__Vcoverage[21697]);
        } else {
            ++(vlSymsp->__Vcoverage[21698]);
        }
        tmp = value;
        unnamedblk1_3__DOT____Vrepeat2 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
            VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 697)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__197__status, segoff, tmp, ""s, parent, extension, fname, lineno);
            st = __Vtask_poke__197__status;
            if (((0U != st) & (2U != st))) {
                status = 1U;
                ++(vlSymsp->__Vcoverage[21699]);
            } else {
                ++(vlSymsp->__Vcoverage[21700]);
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                              - (IData)(1U));
            ++(vlSymsp->__Vcoverage[21704]);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 704)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__199__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__199__severity = 0U;
        __Vfunc_uvm_report_enabled__199__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__200__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__201__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__201__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__199__verbosity, (IData)(__Vfunc_uvm_report_enabled__199__severity), this->__Vfunc_uvm_report_enabled__199__id, __VlefCall_15__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_15__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
            __Vtask_uvm_report_info__204__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__204__context_name = ""s;
            __Vtask_uvm_report_info__204__line = 0x000002c3U;
            this->__Vtask_uvm_report_info__204__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__204__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_info__204__message 
                = VL_SFORMATF_N_NX("Wrote virtual field \"%@\"[%0#] with: 'h%x",0,
                                   -1,&(__VlefCall_16__get_full_name),
                                   64,idx,64,value) ;
            this->__Vtask_uvm_report_info__204__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__205__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__205__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__206__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__206__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__204__id, this->__Vtask_uvm_report_info__204__message, __Vtask_uvm_report_info__204__verbosity, this->__Vtask_uvm_report_info__204__filename, __Vtask_uvm_report_info__204__line, this->__Vtask_uvm_report_info__204__context_name, (IData)(__Vtask_uvm_report_info__204__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[435]);
            ++(vlSymsp->__Vcoverage[21705]);
        } else {
            ++(vlSymsp->__Vcoverage[21706]);
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    if (((0U != st) & (2U != st))) {
        ++(vlSymsp->__Vcoverage[21701]);
    }
    if ((2U == st)) {
        ++(vlSymsp->__Vcoverage[21702]);
    }
    if ((0U == st)) {
        ++(vlSymsp->__Vcoverage[21703]);
    }
    ++(vlSymsp->__Vcoverage[21707]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__209__verbosity;
    __Vfunc_uvm_report_enabled__209__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__209__severity;
    __Vfunc_uvm_report_enabled__209__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__210__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__211__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__214__verbosity;
    __Vtask_uvm_report_error__214__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__214__line;
    __Vtask_uvm_report_error__214__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__214__report_enabled_checked;
    __Vtask_uvm_report_error__214__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__215__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__216__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__220__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__220__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__223__status;
    __Vtask_peek__223__status = 0;
    QData/*63:0*/ __Vtask_peek__223__value;
    __Vtask_peek__223__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__226__verbosity;
    __Vfunc_uvm_report_enabled__226__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__226__severity;
    __Vfunc_uvm_report_enabled__226__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__227__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__228__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__231__verbosity;
    __Vtask_uvm_report_info__231__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__231__line;
    __Vtask_uvm_report_info__231__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__231__report_enabled_checked;
    __Vtask_uvm_report_info__231__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    QData/*63:0*/ __VlefCall_3__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk1_4__DOT____Vrepeat3 = 0;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ lsb;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value = 0ULL;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        lsb = 0U;
        segsiz = 0U;
        segn = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 732)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__209__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__209__severity = 2U;
            __Vfunc_uvm_report_enabled__209__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__210__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__210__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__211__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__211__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__209__verbosity, (IData)(__Vfunc_uvm_report_enabled__209__severity), this->__Vfunc_uvm_report_enabled__209__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__214__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__214__context_name = ""s;
                __Vtask_uvm_report_error__214__line = 0x000002dfU;
                this->__Vtask_uvm_report_error__214__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__214__verbosity = 0U;
                this->__Vtask_uvm_report_error__214__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::peek() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__214__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__215__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__215__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__216__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__216__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__214__id, this->__Vtask_uvm_report_error__214__message, __Vtask_uvm_report_error__214__verbosity, this->__Vtask_uvm_report_error__214__filename, __Vtask_uvm_report_error__214__line, this->__Vtask_uvm_report_error__214__context_name, (IData)(__Vtask_uvm_report_error__214__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[21708]);
            } else {
                ++(vlSymsp->__Vcoverage[21709]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21711]);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 742)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 746)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        segsiz = VL_SHIFTL_III(32,32,32, __VlefCall_2__get_n_bytes, 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__220__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__220__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 748)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_3__get_offset_in_memory);
        segoff = (__VlefCall_3__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((lsb 
                                               + __VlefCall_4__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        segoff = (segoff + ((QData)((IData)(segn)) 
                            - 1ULL));
        unnamedblk1_4__DOT____Vrepeat3 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_4__DOT____Vrepeat3)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 759)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__223__status, segoff, __Vtask_peek__223__value, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__223__status;
            tmp = __Vtask_peek__223__value;
            if (((0U != st) & (2U != st))) {
                status = 1U;
                ++(vlSymsp->__Vcoverage[21712]);
            } else {
                ++(vlSymsp->__Vcoverage[21713]);
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_4__DOT____Vrepeat3 = (unnamedblk1_4__DOT____Vrepeat3 
                                              - (IData)(1U));
            ++(vlSymsp->__Vcoverage[21717]);
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                          - 1ULL));
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 773)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__226__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__226__severity = 0U;
        __Vfunc_uvm_report_enabled__226__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__227__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__227__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__228__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__228__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__226__verbosity, (IData)(__Vfunc_uvm_report_enabled__226__severity), this->__Vfunc_uvm_report_enabled__226__id, __VlefCall_6__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_6__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            __Vtask_uvm_report_info__231__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__231__context_name = ""s;
            __Vtask_uvm_report_info__231__line = 0x00000307U;
            this->__Vtask_uvm_report_info__231__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__231__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_info__231__message 
                = VL_SFORMATF_N_NX("Peeked virtual field \"%@\"[%0#]: 'h%x",0,
                                   -1,&(__VlefCall_7__get_full_name),
                                   64,idx,64,value) ;
            this->__Vtask_uvm_report_info__231__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__232__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__233__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__231__id, this->__Vtask_uvm_report_info__231__message, __Vtask_uvm_report_info__231__verbosity, this->__Vtask_uvm_report_info__231__filename, __Vtask_uvm_report_info__231__line, this->__Vtask_uvm_report_info__231__context_name, (IData)(__Vtask_uvm_report_info__231__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[435]);
            ++(vlSymsp->__Vcoverage[21718]);
        } else {
            ++(vlSymsp->__Vcoverage[21719]);
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    if (((0U != st) & (2U != st))) {
        ++(vlSymsp->__Vcoverage[21714]);
    }
    if ((2U == st)) {
        ++(vlSymsp->__Vcoverage[21715]);
    }
    if ((0U == st)) {
        ++(vlSymsp->__Vcoverage[21716]);
    }
    ++(vlSymsp->__Vcoverage[21720]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print\n"); );
    // Body
    std::string __VlefCall_1__convert2string;
    std::string __VlefCall_0__get_type_name;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 784)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 784)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__convert2string), 0x2eU);
    ++(vlSymsp->__Vcoverage[21721]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string\n"); );
    // Body
    IData/*31:0*/ __VlefCall_3__get_lsb_pos_in_register;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    IData/*31:0*/ __VlefCall_1__get_lsb_pos_in_register;
    std::string __VlefCall_0__get_name;
    convert2string__Vfuncrtn = ""s;
    std::string res_str;
    res_str = ""s;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_1__get_lsb_pos_in_register);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_3__get_lsb_pos_in_register);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn," 45275008804733919578580061%@%10#%10#",0,
                  -1,&(__VlefCall_0__get_name),32,(
                                                   (__VlefCall_1__get_lsb_pos_in_register 
                                                    + __VlefCall_2__get_n_bits) 
                                                   - (IData)(1U)),
                  32,__VlefCall_3__get_lsb_pos_in_register);
    if (this->__PVT__read_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,-1,
                          &(this->__PVT__fname),32,
                          this->__PVT__lineno);
            ++(vlSymsp->__Vcoverage[21722]);
        } else {
            ++(vlSymsp->__Vcoverage[21723]);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            ++(vlSymsp->__Vcoverage[21724]);
        }
        if ((0U == this->__PVT__lineno)) {
            ++(vlSymsp->__Vcoverage[21725]);
        }
        if ((1U & (~ (""s != this->__PVT__fname)))) {
            ++(vlSymsp->__Vcoverage[21726]);
        }
        ++(vlSymsp->__Vcoverage[21727]);
    } else {
        ++(vlSymsp->__Vcoverage[21728]);
    }
    if (this->__PVT__write_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,-1,
                          &(this->__PVT__fname),32,
                          this->__PVT__lineno);
            ++(vlSymsp->__Vcoverage[21729]);
        } else {
            ++(vlSymsp->__Vcoverage[21730]);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            ++(vlSymsp->__Vcoverage[21731]);
        }
        if ((0U == this->__PVT__lineno)) {
            ++(vlSymsp->__Vcoverage[21732]);
        }
        if ((1U & (~ (""s != this->__PVT__fname)))) {
            ++(vlSymsp->__Vcoverage[21733]);
        }
        ++(vlSymsp->__Vcoverage[21734]);
    } else {
        ++(vlSymsp->__Vcoverage[21735]);
    }
    ++(vlSymsp->__Vcoverage[21736]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone\n"); );
    // Body
    clone__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[21737]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21738]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[21739]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21740]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21741]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lsb = 0;
    __PVT__size = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::~Vtb_rng_uvm_pkg__03a__03auvm_vreg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg_field::to_string_middle\n"); );
    // Body
    std::string out;
    out += "parent:" + VL_TO_STRING(__PVT__parent);
    out += ", lsb:" + VL_TO_STRING(__PVT__lsb);
    out += ", size:" + VL_TO_STRING(__PVT__size);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", read_in_progress:" + VL_TO_STRING(__PVT__read_in_progress);
    out += ", write_in_progress:" + VL_TO_STRING(__PVT__write_in_progress);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
