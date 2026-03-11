// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi114> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi114__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[21150]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_field"s;
    ++(vlSymsp->__Vcoverage[21155]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_max_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
    ++(vlSymsp->__Vcoverage[21191]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access(Vtb_rng__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_predefine_policies__3__Vfuncout;
    __Vfunc_m_predefine_policies__3__Vfuncout = 0;
    // Body
    {
        define_access__Vfuncrtn = 0U;
        if (this->__PVT__m_predefined) {
            ++(vlSymsp->__Vcoverage[21225]);
        } else {
            this->__VnoInFunc_m_predefine_policies(vlSymsp, __Vfunc_m_predefine_policies__3__Vfuncout);
            this->__PVT__m_predefined = __Vfunc_m_predefine_policies__3__Vfuncout;
            ++(vlSymsp->__Vcoverage[21224]);
        }
        name = VL_TOUPPER_NN(name);
        if (this->__PVT__m_policy_names.exists(name)) {
            define_access__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21229]);
        }
        this->__PVT__m_policy_names.at(name) = 1U;
        define_access__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(this->__PVT__m_predefined)))) {
        ++(vlSymsp->__Vcoverage[21226]);
    }
    if (this->__PVT__m_predefined) {
        ++(vlSymsp->__Vcoverage[21227]);
    }
    ++(vlSymsp->__Vcoverage[21230]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies\n"); );
    // Locals
    CData/*0:0*/ __Vtask_define_access__4__Vfuncout;
    __Vtask_define_access__4__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__5__Vfuncout;
    __Vtask_define_access__5__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__6__Vfuncout;
    __Vtask_define_access__6__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__7__Vfuncout;
    __Vtask_define_access__7__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__8__Vfuncout;
    __Vtask_define_access__8__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__9__Vfuncout;
    __Vtask_define_access__9__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__10__Vfuncout;
    __Vtask_define_access__10__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__11__Vfuncout;
    __Vtask_define_access__11__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__12__Vfuncout;
    __Vtask_define_access__12__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__13__Vfuncout;
    __Vtask_define_access__13__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__14__Vfuncout;
    __Vtask_define_access__14__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__15__Vfuncout;
    __Vtask_define_access__15__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__16__Vfuncout;
    __Vtask_define_access__16__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__17__Vfuncout;
    __Vtask_define_access__17__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__18__Vfuncout;
    __Vtask_define_access__18__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__19__Vfuncout;
    __Vtask_define_access__19__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__20__Vfuncout;
    __Vtask_define_access__20__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__21__Vfuncout;
    __Vtask_define_access__21__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__22__Vfuncout;
    __Vtask_define_access__22__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__23__Vfuncout;
    __Vtask_define_access__23__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__24__Vfuncout;
    __Vtask_define_access__24__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__25__Vfuncout;
    __Vtask_define_access__25__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__26__Vfuncout;
    __Vtask_define_access__26__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__27__Vfuncout;
    __Vtask_define_access__27__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__28__Vfuncout;
    __Vtask_define_access__28__Vfuncout = 0;
    // Body
    {
        m_predefine_policies__Vfuncrtn = 0U;
        if (this->__PVT__m_predefined) {
            m_predefine_policies__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21232]);
        }
        this->__PVT__m_predefined = 1U;
        this->__VnoInFunc_define_access(vlSymsp, "RO"s, __Vtask_define_access__4__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RW"s, __Vtask_define_access__5__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RC"s, __Vtask_define_access__6__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RS"s, __Vtask_define_access__7__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WRC"s, __Vtask_define_access__8__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WRS"s, __Vtask_define_access__9__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WC"s, __Vtask_define_access__10__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WS"s, __Vtask_define_access__11__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WSRC"s, __Vtask_define_access__12__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WCRS"s, __Vtask_define_access__13__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1C"s, __Vtask_define_access__14__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1S"s, __Vtask_define_access__15__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1T"s, __Vtask_define_access__16__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0C"s, __Vtask_define_access__17__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0S"s, __Vtask_define_access__18__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0T"s, __Vtask_define_access__19__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1SRC"s, __Vtask_define_access__20__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1CRS"s, __Vtask_define_access__21__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0SRC"s, __Vtask_define_access__22__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0CRS"s, __Vtask_define_access__23__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WO"s, __Vtask_define_access__24__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WOC"s, __Vtask_define_access__25__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WOS"s, __Vtask_define_access__26__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1"s, __Vtask_define_access__27__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WO1"s, __Vtask_define_access__28__Vfuncout);
        m_predefine_policies__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21233]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi114> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi114__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[21151]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, "uvm_reg_field"s);
        ++(vlSymsp->__Vcoverage[21152]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[21153]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[21154]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_field"s;
    ++(vlSymsp->__Vcoverage[21156]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21159]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21160]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21161]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21162]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    /*super.new*/;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vtb_rng_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vtb_rng_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    ++(vlSymsp->__Vcoverage[21163]);
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__value, 0x0000000000000040ULL, 
                                                                   "value", 0ULL, 0ULL);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure\n"); );
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__PVT__m_parent = parent;
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
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__9__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__9__context_name = ""s;
            __Vtask_uvm_report_error__9__line = 0x000001a0U;
            this->__Vtask_uvm_report_error__9__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__9__verbosity = 0U;
            this->__Vtask_uvm_report_error__9__message 
                = VL_SFORMATF_N_NX("Field \"%@\" cannot have 0 bits",0,
                                   -1,&(__VlefCall_1__get_full_name)) ;
            this->__Vtask_uvm_report_error__9__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__9__id, this->__Vtask_uvm_report_error__9__message, __Vtask_uvm_report_error__9__verbosity, this->__Vtask_uvm_report_error__9__filename, __Vtask_uvm_report_error__9__line, this->__Vtask_uvm_report_error__9__context_name, (IData)(__Vtask_uvm_report_error__9__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[21164]);
        } else {
            ++(vlSymsp->__Vcoverage[21165]);
        }
        size = 1U;
        ++(vlSymsp->__Vcoverage[21166]);
    } else {
        ++(vlSymsp->__Vcoverage[21167]);
    }
    this->__PVT__m_size = size;
    this->__PVT__m_volatile = __SYM__volatile;
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_lsb = lsb_pos;
    this->__PVT__m_cover_on = 0U;
    this->__PVT__m_written = 0U;
    this->__PVT__m_individually_accessible = individually_accessible;
    this->__PVT__m_check = ((IData)(__SYM__volatile)
                             ? 0U : 1U);
    if (has_reset) {
        this->__VnoInFunc_set_reset(vlSymsp, reset, "HARD"s);
        ++(vlSymsp->__Vcoverage[21170]);
    } else {
        ++(vlSymsp->__Vcoverage[21171]);
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 432)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this});
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access)) {
        ++(vlSymsp->__Vcoverage[21175]);
    } else {
        this->__Vfunc_uvm_report_enabled__15__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__15__severity = 2U;
        __Vfunc_uvm_report_enabled__15__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__16__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__17__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), this->__Vfunc_uvm_report_enabled__15__id, __VlefCall_2__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_error__20__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__20__context_name = ""s;
            __Vtask_uvm_report_error__20__line = 0x000001b4U;
            this->__Vtask_uvm_report_error__20__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__20__verbosity = 0U;
            this->__Vtask_uvm_report_error__20__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Access policy '"s, access), "' for field '"s), __VlefCall_3__get_full_name), "' is not defined. Setting to RW"s));
            this->__Vtask_uvm_report_error__20__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__20__id, this->__Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, this->__Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, this->__Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[21172]);
        } else {
            ++(vlSymsp->__Vcoverage[21173]);
        }
        this->__PVT__m_access = "RW"s;
        ++(vlSymsp->__Vcoverage[21174]);
    }
    if ((size > vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size 
            = size;
        ++(vlSymsp->__Vcoverage[21178]);
    } else {
        ++(vlSymsp->__Vcoverage[21179]);
    }
    if (((((((((((((((((((("RO"s == access) || ("RC"s 
                                                == access)) 
                         || ("RS"s == access)) || ("WC"s 
                                                   == access)) 
                       || ("WS"s == access)) || ("W1C"s 
                                                 == access)) 
                     || ("W1S"s == access)) || ("W1T"s 
                                                == access)) 
                   || ("W0C"s == access)) || ("W0S"s 
                                              == access)) 
                 || ("W0T"s == access)) || ("W1SRC"s 
                                            == access)) 
               || ("W1CRS"s == access)) || ("W0SRC"s 
                                            == access)) 
             || ("W0CRS"s == access)) || ("WSRC"s == access)) 
           || ("WCRS"s == access)) || ("WOC"s == access)) 
         || ("WOS"s == access))) {
        is_rand = 0U;
        ++(vlSymsp->__Vcoverage[21180]);
    }
    if (is_rand) {
        ++(vlSymsp->__Vcoverage[21182]);
    } else {
        Vtb_rng_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(0U) = 0U;
        ++(vlSymsp->__Vcoverage[21181]);
    }
    if (__SYM__volatile) {
        ++(vlSymsp->__Vcoverage[21168]);
    }
    if ((1U & (~ (IData)(__SYM__volatile)))) {
        ++(vlSymsp->__Vcoverage[21169]);
    }
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        ++(vlSymsp->__Vcoverage[21176]);
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access)) {
        ++(vlSymsp->__Vcoverage[21177]);
    }
    if ((1U & (~ (IData)(is_rand)))) {
        ++(vlSymsp->__Vcoverage[21183]);
    }
    if (is_rand) {
        ++(vlSymsp->__Vcoverage[21184]);
    }
    ++(vlSymsp->__Vcoverage[21185]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
    ++(vlSymsp->__Vcoverage[21186]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name\n"); );
    // Body
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 468)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
    ++(vlSymsp->__Vcoverage[21187]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__m_parent;
    ++(vlSymsp->__Vcoverage[21188]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos\n"); );
    // Body
    get_lsb_pos__Vfuncrtn = this->__PVT__m_lsb;
    ++(vlSymsp->__Vcoverage[21189]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_size;
    ++(vlSymsp->__Vcoverage[21190]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access\n"); );
    // Body
    std::string acc;
    {
        is_known_access__Vfuncrtn = 0U;
        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, acc);
        if (((((((((((((((((((((((((("RO"s == acc) 
                                    || ("RW"s == acc)) 
                                   || ("RC"s == acc)) 
                                  || ("RS"s == acc)) 
                                 || ("WC"s == acc)) 
                                || ("WS"s == acc)) 
                               || ("W1C"s == acc)) 
                              || ("W1S"s == acc)) || 
                             ("W1T"s == acc)) || ("W0C"s 
                                                  == acc)) 
                           || ("W0S"s == acc)) || ("W0T"s 
                                                   == acc)) 
                         || ("WRC"s == acc)) || ("WRS"s 
                                                 == acc)) 
                       || ("W1SRC"s == acc)) || ("W1CRS"s 
                                                 == acc)) 
                     || ("W0SRC"s == acc)) || ("W0CRS"s 
                                               == acc)) 
                   || ("WSRC"s == acc)) || ("WCRS"s 
                                            == acc)) 
                 || ("WO"s == acc)) || ("WOC"s == acc)) 
               || ("WOS"s == acc)) || ("W1"s == acc)) 
             || ("WO1"s == acc))) {
            is_known_access__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        is_known_access__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21193]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__37__verbosity;
    __Vtask_uvm_report_warning__37__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__37__line;
    __Vtask_uvm_report_warning__37__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__37__report_enabled_checked;
    __Vtask_uvm_report_warning__37__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    // Body
    std::string __VlefCall_5__get_rights;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_0__backdoor;
    std::string __VCase_h38baf0c6__0;
    std::string field_access;
    {
        get_access__Vfuncrtn = ""s;
        field_access = this->__PVT__m_access;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_0__backdoor);
        if ((map == __VlefCall_0__backdoor)) {
            get_access__Vfuncrtn = field_access;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21195]);
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 523)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VCase_h38baf0c6__0);
        if (("RW"s == __VCase_h38baf0c6__0)) {
            get_access__Vfuncrtn = field_access;
            goto __Vlabel0;
        } else if (("RO"s == __VCase_h38baf0c6__0)) {
            if (((((((((((("RW"s == field_access) || 
                          ("RO"s == field_access)) 
                         || ("WC"s == field_access)) 
                        || ("WS"s == field_access)) 
                       || ("W1C"s == field_access)) 
                      || ("W1S"s == field_access)) 
                     || ("W1T"s == field_access)) || 
                    ("W0C"s == field_access)) || ("W0S"s 
                                                  == field_access)) 
                  || ("W0T"s == field_access)) || ("W1"s 
                                                   == field_access))) {
                field_access = "RO"s;
                ++(vlSymsp->__Vcoverage[21197]);
            } else if (((((("RC"s == field_access) 
                           || ("WRC"s == field_access)) 
                          || ("W1SRC"s == field_access)) 
                         || ("W0SRC"s == field_access)) 
                        || ("WSRC"s == field_access))) {
                field_access = "RC"s;
                ++(vlSymsp->__Vcoverage[21198]);
            } else if (((((("RS"s == field_access) 
                           || ("WRS"s == field_access)) 
                          || ("W1CRS"s == field_access)) 
                         || ("W0CRS"s == field_access)) 
                        || ("WCRS"s == field_access))) {
                field_access = "RS"s;
                ++(vlSymsp->__Vcoverage[21199]);
            } else if ((((("WO"s == field_access) || 
                          ("WOC"s == field_access)) 
                         || ("WOS"s == field_access)) 
                        || ("WO1"s == field_access))) {
                field_access = "NOACCESS"s;
                ++(vlSymsp->__Vcoverage[21200]);
            }
            ++(vlSymsp->__Vcoverage[21201]);
        } else if (("WO"s == __VCase_h38baf0c6__0)) {
            if ((((((((((("RW"s == field_access) || 
                         ("WRC"s == field_access)) 
                        || ("WRS"s == field_access)) 
                       | ("W1SRC"s == field_access)) 
                      | ("W0SRC"s == field_access)) 
                     | ("W1CRS"s == field_access)) 
                    | ("W0CRS"s == field_access)) | 
                   ("WCRS"s == field_access)) | ("W1"s 
                                                 == field_access)) 
                 | ("WO1"s == field_access))) {
                if (((("RW"s == field_access) || ("WRC"s 
                                                  == field_access)) 
                     || ("WRS"s == field_access))) {
                    field_access = "WO"s;
                    ++(vlSymsp->__Vcoverage[21202]);
                } else if (("W1SRC"s == field_access)) {
                    field_access = "W1S"s;
                    ++(vlSymsp->__Vcoverage[21203]);
                } else if (("W0SRC"s == field_access)) {
                    field_access = "W0S"s;
                    ++(vlSymsp->__Vcoverage[21204]);
                } else if (("W1CRS"s == field_access)) {
                    field_access = "W1C"s;
                    ++(vlSymsp->__Vcoverage[21205]);
                } else if (("W0CRS"s == field_access)) {
                    field_access = "W0C"s;
                    ++(vlSymsp->__Vcoverage[21206]);
                } else if (("WCRS"s == field_access)) {
                    field_access = "WC"s;
                    ++(vlSymsp->__Vcoverage[21207]);
                } else if (("W1"s == field_access)) {
                    field_access = "W1"s;
                    ++(vlSymsp->__Vcoverage[21208]);
                } else {
                    field_access = "WO1"s;
                    ++(vlSymsp->__Vcoverage[21209]);
                }
            } else if (("WSRC"s == field_access)) {
                field_access = "WS"s;
                ++(vlSymsp->__Vcoverage[21210]);
            } else if (((("RO"s == field_access) || 
                         ("RC"s == field_access)) || 
                        ("RS"s == field_access))) {
                field_access = "NOACCESS"s;
                ++(vlSymsp->__Vcoverage[21211]);
            }
            ++(vlSymsp->__Vcoverage[21212]);
        } else {
            field_access = "NOACCESS"s;
            this->__Vfunc_uvm_report_enabled__29__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__29__severity = 1U;
            __Vfunc_uvm_report_enabled__29__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__30__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__31__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), this->__Vfunc_uvm_report_enabled__29__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VlefCall_5__get_rights);
                __Vtask_uvm_report_warning__37__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__37__context_name = ""s;
                __Vtask_uvm_report_warning__37__line = 0x0000023aU;
                this->__Vtask_uvm_report_warning__37__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__37__verbosity = 0U;
                this->__Vtask_uvm_report_warning__37__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_2__get_full_name), "' containing field '"s), __VlefCall_3__get_name), "' is mapped in map '"s), __VlefCall_4__get_full_name), "' with unknown access right '"s), __VlefCall_5__get_rights), "'"s));
                this->__Vtask_uvm_report_warning__37__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__38__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__39__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__37__id, this->__Vtask_uvm_report_warning__37__message, __Vtask_uvm_report_warning__37__verbosity, this->__Vtask_uvm_report_warning__37__filename, __Vtask_uvm_report_warning__37__line, this->__Vtask_uvm_report_warning__37__context_name, (IData)(__Vtask_uvm_report_warning__37__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[21213]);
            } else {
                ++(vlSymsp->__Vcoverage[21214]);
            }
            ++(vlSymsp->__Vcoverage[21215]);
        }
        get_access__Vfuncrtn = field_access;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21216]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_access(Vtb_rng__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
    __Vfunc_uvm_report_enabled__41__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
    __Vfunc_uvm_report_enabled__41__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__45__verbosity;
    __Vtask_uvm_report_error__45__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__45__line;
    __Vtask_uvm_report_error__45__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__45__report_enabled_checked;
    __Vtask_uvm_report_error__45__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    set_access__Vfuncrtn = this->__PVT__m_access;
    this->__PVT__m_access = VL_TOUPPER_NN(mode);
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access)) {
        ++(vlSymsp->__Vcoverage[21220]);
    } else {
        this->__Vfunc_uvm_report_enabled__41__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__41__severity = 2U;
        __Vfunc_uvm_report_enabled__41__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__42__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__43__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), this->__Vfunc_uvm_report_enabled__41__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__45__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__45__context_name = ""s;
            __Vtask_uvm_report_error__45__line = 0x00000248U;
            this->__Vtask_uvm_report_error__45__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__45__verbosity = 0U;
            this->__Vtask_uvm_report_error__45__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Access policy '"s, this->__PVT__m_access), "' is not a defined field access policy"s));
            this->__Vtask_uvm_report_error__45__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__46__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__47__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__45__id, this->__Vtask_uvm_report_error__45__message, __Vtask_uvm_report_error__45__verbosity, this->__Vtask_uvm_report_error__45__filename, __Vtask_uvm_report_error__45__line, this->__Vtask_uvm_report_error__45__context_name, (IData)(__Vtask_uvm_report_error__45__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[21217]);
        } else {
            ++(vlSymsp->__Vcoverage[21218]);
        }
        this->__PVT__m_access = set_access__Vfuncrtn;
        ++(vlSymsp->__Vcoverage[21219]);
    }
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        ++(vlSymsp->__Vcoverage[21221]);
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access)) {
        ++(vlSymsp->__Vcoverage[21222]);
    }
    ++(vlSymsp->__Vcoverage[21223]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_volatility(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_volatility\n"); );
    // Body
    this->__PVT__m_volatile = __SYM__volatile;
    ++(vlSymsp->__Vcoverage[21234]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile\n"); );
    // Body
    is_volatile__Vfuncrtn = this->__PVT__m_volatile;
    ++(vlSymsp->__Vcoverage[21235]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
    __Vfunc_uvm_report_enabled__50__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
    __Vfunc_uvm_report_enabled__50__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string __VCase_hea13bb16__0;
    QData/*63:0*/ mask;
    {
        XpredictX__Vfuncrtn = 0ULL;
        mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL);
        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __VCase_hea13bb16__0);
        if ((((((((("RO"s == __VCase_hea13bb16__0) 
                   | ("RW"s == __VCase_hea13bb16__0)) 
                  | ("RC"s == __VCase_hea13bb16__0)) 
                 | ("RS"s == __VCase_hea13bb16__0)) 
                | ("WC"s == __VCase_hea13bb16__0)) 
               | ("WS"s == __VCase_hea13bb16__0)) | 
              ("WRC"s == __VCase_hea13bb16__0)) | ("WRS"s 
                                                   == __VCase_hea13bb16__0))) {
            if (("RO"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("RW"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else if (("RC"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("RS"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("WC"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("WS"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else if (("WRC"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            }
        } else if ((((((((("WSRC"s == __VCase_hea13bb16__0) 
                          | ("WCRS"s == __VCase_hea13bb16__0)) 
                         | ("W1C"s == __VCase_hea13bb16__0)) 
                        | ("W1S"s == __VCase_hea13bb16__0)) 
                       | ("W1T"s == __VCase_hea13bb16__0)) 
                      | ("W0C"s == __VCase_hea13bb16__0)) 
                     | ("W0S"s == __VCase_hea13bb16__0)) 
                    | ("W0T"s == __VCase_hea13bb16__0))) {
            if (("WSRC"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else if (("WCRS"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("W1C"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val & (~ wr_val));
                goto __Vlabel0;
            } else if (("W1S"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val | wr_val);
                goto __Vlabel0;
            } else if (("W1T"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val ^ wr_val);
                goto __Vlabel0;
            } else if (("W0C"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val & wr_val);
                goto __Vlabel0;
            } else if (("W0S"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val | ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = (cur_val ^ ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            }
        } else if ((((((((("W1SRC"s == __VCase_hea13bb16__0) 
                          | ("W1CRS"s == __VCase_hea13bb16__0)) 
                         | ("W0SRC"s == __VCase_hea13bb16__0)) 
                        | ("W0CRS"s == __VCase_hea13bb16__0)) 
                       | ("WO"s == __VCase_hea13bb16__0)) 
                      | ("WOC"s == __VCase_hea13bb16__0)) 
                     | ("WOS"s == __VCase_hea13bb16__0)) 
                    | ("W1"s == __VCase_hea13bb16__0))) {
            if (("W1SRC"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val | wr_val);
                goto __Vlabel0;
            } else if (("W1CRS"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val & (~ wr_val));
                goto __Vlabel0;
            } else if (("W0SRC"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val | ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            } else if (("W0CRS"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = (cur_val & wr_val);
                goto __Vlabel0;
            } else if (("WO"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else if (("WOC"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("WOS"s == __VCase_hea13bb16__0)) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = ((IData)(this->__PVT__m_written)
                                        ? cur_val : wr_val);
                goto __Vlabel0;
            }
        } else if (("WO1"s == __VCase_hea13bb16__0)) {
            XpredictX__Vfuncrtn = ((IData)(this->__PVT__m_written)
                                    ? cur_val : wr_val);
            goto __Vlabel0;
        } else if (("NOACCESS"s == __VCase_hea13bb16__0)) {
            XpredictX__Vfuncrtn = cur_val;
            goto __Vlabel0;
        } else {
            XpredictX__Vfuncrtn = wr_val;
            goto __Vlabel0;
        }
        this->__Vfunc_uvm_report_enabled__50__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__50__severity = 3U;
        __Vfunc_uvm_report_enabled__50__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__51__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__52__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__50__verbosity, (IData)(__Vfunc_uvm_report_enabled__50__severity), this->__Vfunc_uvm_report_enabled__50__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_field::XpredictX(): Internal error"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s, 0x000002b3U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[21267]);
        } else {
            ++(vlSymsp->__Vcoverage[21268]);
        }
        XpredictX__Vfuncrtn = 0ULL;
        __Vlabel0: ;
    }
    if (this->__PVT__m_written) {
        ++(vlSymsp->__Vcoverage[21259]);
    }
    if ((1U & (~ (IData)(this->__PVT__m_written)))) {
        ++(vlSymsp->__Vcoverage[21260]);
    }
    if (this->__PVT__m_written) {
        ++(vlSymsp->__Vcoverage[21262]);
    }
    if ((1U & (~ (IData)(this->__PVT__m_written)))) {
        ++(vlSymsp->__Vcoverage[21263]);
    }
    ++(vlSymsp->__Vcoverage[21269]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_predict(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_predict\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    predict__Vfuncrtn = 0U;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    rw = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 707)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 708)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 709)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 710)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 711)->__PVT__lineno 
        = lineno;
    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
    predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 713)
                          ->__PVT__status) ? 0U : 1U);
    ++(vlSymsp->__Vcoverage[21270]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict\n"); );
    // Locals
    QData/*63:0*/ __Vtask_post_predict__60__value;
    __Vtask_post_predict__60__value = 0;
    QData/*63:0*/ __Vtask_post_predict__65__value;
    __Vtask_post_predict__65__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__68__verbosity;
    __Vfunc_uvm_report_enabled__68__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__68__severity;
    __Vfunc_uvm_report_enabled__68__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__74__verbosity;
    __Vtask_uvm_report_warning__74__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__74__line;
    __Vtask_uvm_report_warning__74__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__74__report_enabled_checked;
    __Vtask_uvm_report_warning__74__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__75__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__76__Vfuncout;
    // Body
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_busy;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105> unnamedblk271__DOT__cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk271__DOT__unnamedblk272__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105> unnamedblk273__DOT__cbs;
    std::string unnamedblk273__DOT__unnamedblk274__DOT__acc;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk273__DOT__unnamedblk275__DOT__cb;
    QData/*63:0*/ field_val;
    {
        field_val = (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 723)
                     ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                              - 1ULL));
        if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 725)
             ->__PVT__status)) {
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 726)->__PVT__status = 0U;
            ++(vlSymsp->__Vcoverage[21271]);
        } else {
            ++(vlSymsp->__Vcoverage[21272]);
        }
        if ((1U & (IData)(be))) {
            ++(vlSymsp->__Vcoverage[21274]);
        } else {
            goto __Vlabel0;
        }
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 732)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 733)
            ->__PVT__lineno;
        if ((2U == kind)) {
            unnamedblk271__DOT__cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105, vlSymsp, 
                                             VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 741)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 741)
                                     ->__PVT__path))) {
                this->__VnoInFunc_XpredictX(vlProcess, vlSymsp, this->__PVT__m_mirrored, field_val, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 742)
                                            ->__PVT__map, field_val);
                ++(vlSymsp->__Vcoverage[21277]);
            } else {
                ++(vlSymsp->__Vcoverage[21278]);
            }
            this->__PVT__m_written = 1U;
            VL_NULL_CHECK(unnamedblk271__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 746)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk271__DOT__unnamedblk272__DOT__cb);
            while ((VlNull{} != unnamedblk271__DOT__unnamedblk272__DOT__cb)) {
                __Vtask_post_predict__60__value = field_val;
                VL_NULL_CHECK(unnamedblk271__DOT__unnamedblk272__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 747)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__60__value, 2U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 748)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 748)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__60__value;
                VL_NULL_CHECK(unnamedblk271__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 746)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk271__DOT__unnamedblk272__DOT__cb);
                ++(vlSymsp->__Vcoverage[21279]);
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
            ++(vlSymsp->__Vcoverage[21280]);
        } else if ((1U == kind)) {
            unnamedblk273__DOT__cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105, vlSymsp, 
                                             VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 758)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 758)
                                     ->__PVT__path))) {
                this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 760)
                                             ->__PVT__map, unnamedblk273__DOT__unnamedblk274__DOT__acc);
                if (((((("RC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc) 
                        | ("WRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                       | ("WSRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                      | ("W1SRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                     | ("W0SRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) {
                    field_val = 0ULL;
                    ++(vlSymsp->__Vcoverage[21296]);
                } else {
                    if (((((("RS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc) 
                            | ("WRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                           | ("WCRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                          | ("W1CRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                         | ("W0CRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) {
                        field_val = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                     - 1ULL);
                        ++(vlSymsp->__Vcoverage[21289]);
                    } else {
                        if (((((("WO"s == unnamedblk273__DOT__unnamedblk274__DOT__acc) 
                                | ("WOC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                               | ("WOS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                              | ("WO1"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                             | ("NOACCESS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) {
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[21282]);
                        }
                        if (("NOACCESS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                            ++(vlSymsp->__Vcoverage[21283]);
                        }
                        if (("WO1"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                            ++(vlSymsp->__Vcoverage[21284]);
                        }
                        if (("WOS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                            ++(vlSymsp->__Vcoverage[21285]);
                        }
                        if (("WOC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                            ++(vlSymsp->__Vcoverage[21286]);
                        }
                        if (("WO"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                            ++(vlSymsp->__Vcoverage[21287]);
                        }
                        if ((1U & (((((~ ("WO"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                                      & (~ ("WOC"s 
                                            == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                                     & (~ ("WOS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                                    & (~ ("WO1"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                                   & (~ ("NOACCESS"s 
                                         == unnamedblk273__DOT__unnamedblk274__DOT__acc))))) {
                            ++(vlSymsp->__Vcoverage[21288]);
                        }
                    }
                    if (("W0CRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                        ++(vlSymsp->__Vcoverage[21290]);
                    }
                    if (("W1CRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                        ++(vlSymsp->__Vcoverage[21291]);
                    }
                    if (("WCRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                        ++(vlSymsp->__Vcoverage[21292]);
                    }
                    if (("WRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                        ++(vlSymsp->__Vcoverage[21293]);
                    }
                    if (("RS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                        ++(vlSymsp->__Vcoverage[21294]);
                    }
                    if ((1U & (((((~ ("RS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                                  & (~ ("WRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                                 & (~ ("WCRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                                & (~ ("W1CRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                               & (~ ("W0CRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))))) {
                        ++(vlSymsp->__Vcoverage[21295]);
                    }
                }
                if (("W0SRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                    ++(vlSymsp->__Vcoverage[21297]);
                }
                if (("W1SRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                    ++(vlSymsp->__Vcoverage[21298]);
                }
                if (("WSRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                    ++(vlSymsp->__Vcoverage[21299]);
                }
                if (("WRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                    ++(vlSymsp->__Vcoverage[21300]);
                }
                if (("RC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) {
                    ++(vlSymsp->__Vcoverage[21301]);
                }
                if ((1U & (((((~ ("RC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                              & (~ ("WRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                             & (~ ("WSRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                            & (~ ("W1SRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) 
                           & (~ ("W0SRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))))) {
                    ++(vlSymsp->__Vcoverage[21302]);
                }
                ++(vlSymsp->__Vcoverage[21303]);
            } else {
                ++(vlSymsp->__Vcoverage[21304]);
            }
            VL_NULL_CHECK(unnamedblk273__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 784)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk273__DOT__unnamedblk275__DOT__cb);
            while ((VlNull{} != unnamedblk273__DOT__unnamedblk275__DOT__cb)) {
                __Vtask_post_predict__65__value = field_val;
                VL_NULL_CHECK(unnamedblk273__DOT__unnamedblk275__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 785)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__65__value, 1U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 786)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 786)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__65__value;
                VL_NULL_CHECK(unnamedblk273__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 784)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk273__DOT__unnamedblk275__DOT__cb);
                ++(vlSymsp->__Vcoverage[21305]);
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
            ++(vlSymsp->__Vcoverage[21306]);
        } else if ((0U == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 794)->__VnoInFunc_is_busy(vlSymsp, __VlefCall_0__is_busy);
            if (__VlefCall_0__is_busy) {
                this->__Vfunc_uvm_report_enabled__68__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__68__severity = 1U;
                __Vfunc_uvm_report_enabled__68__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__69__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__69__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__70__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__68__verbosity, (IData)(__Vfunc_uvm_report_enabled__68__severity), this->__Vfunc_uvm_report_enabled__68__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 797)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_warning__74__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__74__context_name = ""s;
                    __Vtask_uvm_report_warning__74__line = 0x0000031dU;
                    this->__Vtask_uvm_report_warning__74__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__74__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__74__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Trying to predict value of field '"s, __VlefCall_2__get_name), "' while register '"s), __VlefCall_3__get_full_name), "' is being accessed"s));
                    this->__Vtask_uvm_report_warning__74__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__75__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__75__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__76__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__76__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__74__id, this->__Vtask_uvm_report_warning__74__message, __Vtask_uvm_report_warning__74__verbosity, this->__Vtask_uvm_report_warning__74__filename, __Vtask_uvm_report_warning__74__line, this->__Vtask_uvm_report_warning__74__context_name, (IData)(__Vtask_uvm_report_warning__74__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[441]);
                    ++(vlSymsp->__Vcoverage[21307]);
                } else {
                    ++(vlSymsp->__Vcoverage[21308]);
                }
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 798)->__PVT__status = 1U;
                ++(vlSymsp->__Vcoverage[21309]);
            } else {
                ++(vlSymsp->__Vcoverage[21310]);
            }
            ++(vlSymsp->__Vcoverage[21311]);
        }
        this->__PVT__m_mirrored = field_val;
        this->__PVT__m_desired = field_val;
        this->__PVT__value = field_val;
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(be)))) {
        ++(vlSymsp->__Vcoverage[21275]);
    }
    if ((1U & (IData)(be))) {
        ++(vlSymsp->__Vcoverage[21276]);
    }
    ++(vlSymsp->__Vcoverage[21312]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX\n"); );
    // Body
    XupdateX__Vfuncrtn = 0ULL;
    if ((((((((("RO"s == this->__PVT__m_access) | ("RW"s 
                                                   == this->__PVT__m_access)) 
              | ("RC"s == this->__PVT__m_access)) | 
             ("RS"s == this->__PVT__m_access)) | ("WRC"s 
                                                  == this->__PVT__m_access)) 
           | ("WRS"s == this->__PVT__m_access)) | ("WC"s 
                                                   == this->__PVT__m_access)) 
         | ("WS"s == this->__PVT__m_access))) {
        if (("RO"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21313]);
        } else if (("RW"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21314]);
        } else if (("RC"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21315]);
        } else if (("RS"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21316]);
        } else if (("WRC"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21317]);
        } else if (("WRS"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21318]);
        } else if (("WC"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21319]);
        } else {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21320]);
        }
    } else if ((((((((("WSRC"s == this->__PVT__m_access) 
                      | ("WCRS"s == this->__PVT__m_access)) 
                     | ("W1C"s == this->__PVT__m_access)) 
                    | ("W1S"s == this->__PVT__m_access)) 
                   | ("W1T"s == this->__PVT__m_access)) 
                  | ("W0C"s == this->__PVT__m_access)) 
                 | ("W0S"s == this->__PVT__m_access)) 
                | ("W0T"s == this->__PVT__m_access))) {
        if (("WSRC"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21321]);
        } else if (("WCRS"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21322]);
        } else if (("W1C"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = (~ this->__PVT__m_desired);
            ++(vlSymsp->__Vcoverage[21323]);
        } else if (("W1S"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21324]);
        } else if (("W1T"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = (this->__PVT__m_desired 
                                  ^ this->__PVT__m_mirrored);
            ++(vlSymsp->__Vcoverage[21325]);
        } else if (("W0C"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21326]);
        } else if (("W0S"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = (~ this->__PVT__m_desired);
            ++(vlSymsp->__Vcoverage[21327]);
        } else {
            XupdateX__Vfuncrtn = (~ (this->__PVT__m_desired 
                                     ^ this->__PVT__m_mirrored));
            ++(vlSymsp->__Vcoverage[21328]);
        }
    } else if ((((((((("W1SRC"s == this->__PVT__m_access) 
                      | ("W1CRS"s == this->__PVT__m_access)) 
                     | ("W0SRC"s == this->__PVT__m_access)) 
                    | ("W0CRS"s == this->__PVT__m_access)) 
                   | ("WO"s == this->__PVT__m_access)) 
                  | ("WOC"s == this->__PVT__m_access)) 
                 | ("WOS"s == this->__PVT__m_access)) 
                | ("W1"s == this->__PVT__m_access))) {
        if (("W1SRC"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21329]);
        } else if (("W1CRS"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = (~ this->__PVT__m_desired);
            ++(vlSymsp->__Vcoverage[21330]);
        } else if (("W0SRC"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = (~ this->__PVT__m_desired);
            ++(vlSymsp->__Vcoverage[21331]);
        } else if (("W0CRS"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21332]);
        } else if (("WO"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21333]);
        } else if (("WOC"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21334]);
        } else if (("WOS"s == this->__PVT__m_access)) {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21335]);
        } else {
            XupdateX__Vfuncrtn = this->__PVT__m_desired;
            ++(vlSymsp->__Vcoverage[21336]);
        }
    } else if (("WO1"s == this->__PVT__m_access)) {
        XupdateX__Vfuncrtn = this->__PVT__m_desired;
        ++(vlSymsp->__Vcoverage[21337]);
    } else {
        XupdateX__Vfuncrtn = this->__PVT__m_desired;
        ++(vlSymsp->__Vcoverage[21338]);
    }
    XupdateX__Vfuncrtn = (XupdateX__Vfuncrtn & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                - 1ULL));
    ++(vlSymsp->__Vcoverage[21339]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__83__verbosity;
    __Vtask_uvm_report_warning__83__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__83__line;
    __Vtask_uvm_report_warning__83__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__83__report_enabled_checked;
    __Vtask_uvm_report_warning__83__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__88__verbosity;
    __Vfunc_uvm_report_enabled__88__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__88__severity;
    __Vfunc_uvm_report_enabled__88__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__89__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__90__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__94__verbosity;
    __Vtask_uvm_report_warning__94__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__94__line;
    __Vtask_uvm_report_warning__94__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__94__report_enabled_checked;
    __Vtask_uvm_report_warning__94__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__95__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__96__Vfuncout;
    // Body
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__is_busy;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ mask;
    mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
            - 1ULL);
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
        this->__Vfunc_uvm_report_enabled__78__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__78__severity = 1U;
        __Vfunc_uvm_report_enabled__78__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__79__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__80__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), this->__Vfunc_uvm_report_enabled__78__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_warning__83__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__83__context_name = ""s;
            __Vtask_uvm_report_warning__83__line = 0x0000035fU;
            this->__Vtask_uvm_report_warning__83__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__83__verbosity = 0U;
            this->__Vtask_uvm_report_warning__83__message 
                = VL_SFORMATF_N_NX("Specified value (0x%x) greater than field \"%@\" size (%0# bits)",0,
                                   64,value,-1,&(__VlefCall_1__get_name),
                                   32,this->__PVT__m_size) ;
            this->__Vtask_uvm_report_warning__83__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__84__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__85__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__83__id, this->__Vtask_uvm_report_warning__83__message, __Vtask_uvm_report_warning__83__verbosity, this->__Vtask_uvm_report_warning__83__filename, __Vtask_uvm_report_warning__83__line, this->__Vtask_uvm_report_warning__83__context_name, (IData)(__Vtask_uvm_report_warning__83__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[21340]);
        } else {
            ++(vlSymsp->__Vcoverage[21341]);
        }
        value = (value & mask);
        ++(vlSymsp->__Vcoverage[21342]);
    } else {
        ++(vlSymsp->__Vcoverage[21343]);
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 867)->__VnoInFunc_is_busy(vlSymsp, __VlefCall_2__is_busy);
    if (__VlefCall_2__is_busy) {
        this->__Vfunc_uvm_report_enabled__88__id = "UVM/FLD/SET/BSY"s;
        __Vfunc_uvm_report_enabled__88__severity = 1U;
        __Vfunc_uvm_report_enabled__88__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__90__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__90__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__88__verbosity, (IData)(__Vfunc_uvm_report_enabled__88__severity), this->__Vfunc_uvm_report_enabled__88__id, __VlefCall_3__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 870)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_warning__94__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__94__context_name = ""s;
            __Vtask_uvm_report_warning__94__line = 0x00000366U;
            this->__Vtask_uvm_report_warning__94__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__94__verbosity = 0U;
            this->__Vtask_uvm_report_warning__94__message 
                = VL_SFORMATF_N_NX("Setting the value of field \"%@\" while containing register \"%@\" is being accessed may result in loss of desired field value. A race condition between threads concurrently accessing the register model is the likely cause of the problem.",0,
                                   -1,&(__VlefCall_4__get_name),
                                   -1,&(__VlefCall_5__get_full_name)) ;
            this->__Vtask_uvm_report_warning__94__id = "UVM/FLD/SET/BSY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__95__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__95__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__96__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__96__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__94__id, this->__Vtask_uvm_report_warning__94__message, __Vtask_uvm_report_warning__94__verbosity, this->__Vtask_uvm_report_warning__94__filename, __Vtask_uvm_report_warning__94__line, this->__Vtask_uvm_report_warning__94__context_name, (IData)(__Vtask_uvm_report_warning__94__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[21344]);
        } else {
            ++(vlSymsp->__Vcoverage[21345]);
        }
        ++(vlSymsp->__Vcoverage[21346]);
    } else {
        ++(vlSymsp->__Vcoverage[21347]);
    }
    if ((((((((("RO"s == this->__PVT__m_access) | ("RW"s 
                                                   == this->__PVT__m_access)) 
              | ("RC"s == this->__PVT__m_access)) | 
             ("RS"s == this->__PVT__m_access)) | ("WC"s 
                                                  == this->__PVT__m_access)) 
           | ("WS"s == this->__PVT__m_access)) | ("WRC"s 
                                                  == this->__PVT__m_access)) 
         | ("WRS"s == this->__PVT__m_access))) {
        if (("RO"s == this->__PVT__m_access)) {
            ++(vlSymsp->__Vcoverage[21348]);
        } else if (("RW"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = value;
            ++(vlSymsp->__Vcoverage[21349]);
        } else if (("RC"s == this->__PVT__m_access)) {
            ++(vlSymsp->__Vcoverage[21350]);
        } else if (("RS"s == this->__PVT__m_access)) {
            ++(vlSymsp->__Vcoverage[21351]);
        } else if (("WC"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = 0ULL;
            ++(vlSymsp->__Vcoverage[21352]);
        } else if (("WS"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = mask;
            ++(vlSymsp->__Vcoverage[21353]);
        } else if (("WRC"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = value;
            ++(vlSymsp->__Vcoverage[21354]);
        } else {
            this->__PVT__m_desired = value;
            ++(vlSymsp->__Vcoverage[21355]);
        }
    } else if ((((((((("WSRC"s == this->__PVT__m_access) 
                      | ("WCRS"s == this->__PVT__m_access)) 
                     | ("W1C"s == this->__PVT__m_access)) 
                    | ("W1S"s == this->__PVT__m_access)) 
                   | ("W1T"s == this->__PVT__m_access)) 
                  | ("W0C"s == this->__PVT__m_access)) 
                 | ("W0S"s == this->__PVT__m_access)) 
                | ("W0T"s == this->__PVT__m_access))) {
        if (("WSRC"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = mask;
            ++(vlSymsp->__Vcoverage[21356]);
        } else if (("WCRS"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = 0ULL;
            ++(vlSymsp->__Vcoverage[21357]);
        } else if (("W1C"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      & (~ value));
            ++(vlSymsp->__Vcoverage[21358]);
        } else if (("W1S"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      | value);
            ++(vlSymsp->__Vcoverage[21359]);
        } else if (("W1T"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      ^ value);
            ++(vlSymsp->__Vcoverage[21360]);
        } else if (("W0C"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      & value);
            ++(vlSymsp->__Vcoverage[21361]);
        } else if (("W0S"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      | ((~ value) 
                                         & mask));
            ++(vlSymsp->__Vcoverage[21362]);
        } else {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      ^ ((~ value) 
                                         & mask));
            ++(vlSymsp->__Vcoverage[21363]);
        }
    } else if ((((((((("W1SRC"s == this->__PVT__m_access) 
                      | ("W1CRS"s == this->__PVT__m_access)) 
                     | ("W0SRC"s == this->__PVT__m_access)) 
                    | ("W0CRS"s == this->__PVT__m_access)) 
                   | ("WO"s == this->__PVT__m_access)) 
                  | ("WOC"s == this->__PVT__m_access)) 
                 | ("WOS"s == this->__PVT__m_access)) 
                | ("W1"s == this->__PVT__m_access))) {
        if (("W1SRC"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      | value);
            ++(vlSymsp->__Vcoverage[21364]);
        } else if (("W1CRS"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      & (~ value));
            ++(vlSymsp->__Vcoverage[21365]);
        } else if (("W0SRC"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      | ((~ value) 
                                         & mask));
            ++(vlSymsp->__Vcoverage[21366]);
        } else if (("W0CRS"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = (this->__PVT__m_desired 
                                      & value);
            ++(vlSymsp->__Vcoverage[21367]);
        } else if (("WO"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = value;
            ++(vlSymsp->__Vcoverage[21368]);
        } else if (("WOC"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = 0ULL;
            ++(vlSymsp->__Vcoverage[21369]);
        } else if (("WOS"s == this->__PVT__m_access)) {
            this->__PVT__m_desired = mask;
            ++(vlSymsp->__Vcoverage[21370]);
        } else {
            this->__PVT__m_desired = ((IData)(this->__PVT__m_written)
                                       ? this->__PVT__m_desired
                                       : value);
            ++(vlSymsp->__Vcoverage[21373]);
        }
    } else if (("WO1"s == this->__PVT__m_access)) {
        this->__PVT__m_desired = ((IData)(this->__PVT__m_written)
                                   ? this->__PVT__m_desired
                                   : value);
        ++(vlSymsp->__Vcoverage[21376]);
    } else {
        this->__PVT__m_desired = value;
        ++(vlSymsp->__Vcoverage[21377]);
    }
    this->__PVT__value = this->__PVT__m_desired;
    if (this->__PVT__m_written) {
        ++(vlSymsp->__Vcoverage[21371]);
    }
    if ((1U & (~ (IData)(this->__PVT__m_written)))) {
        ++(vlSymsp->__Vcoverage[21372]);
    }
    if (this->__PVT__m_written) {
        ++(vlSymsp->__Vcoverage[21374]);
    }
    if ((1U & (~ (IData)(this->__PVT__m_written)))) {
        ++(vlSymsp->__Vcoverage[21375]);
    }
    ++(vlSymsp->__Vcoverage[21378]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get__Vfuncrtn = this->__PVT__m_desired;
    ++(vlSymsp->__Vcoverage[21379]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value(Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get_mirrored_value__Vfuncrtn = this->__PVT__m_mirrored;
    ++(vlSymsp->__Vcoverage[21380]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset\n"); );
    // Body
    {
        if (this->__PVT__m_reset.exists(kind)) {
            ++(vlSymsp->__Vcoverage[21382]);
        } else {
            goto __Vlabel0;
        }
        this->__PVT__m_mirrored = this->__PVT__m_reset
            .at(kind);
        this->__PVT__m_desired = this->__PVT__m_mirrored;
        this->__PVT__value = this->__PVT__m_mirrored;
        if (("HARD"s == kind)) {
            this->__PVT__m_written = 0U;
            ++(vlSymsp->__Vcoverage[21385]);
        } else {
            ++(vlSymsp->__Vcoverage[21386]);
        }
        __Vlabel0: ;
    }
    if ((! this->__PVT__m_reset.exists(kind))) {
        ++(vlSymsp->__Vcoverage[21383]);
    }
    if (this->__PVT__m_reset.exists(kind)) {
        ++(vlSymsp->__Vcoverage[21384]);
    }
    ++(vlSymsp->__Vcoverage[21387]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset\n"); );
    // Body
    {
        has_reset__Vfuncrtn = 0U;
        if (this->__PVT__m_reset.exists(kind)) {
            ++(vlSymsp->__Vcoverage[21389]);
        } else {
            has_reset__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (__SYM__delete) {
            this->__PVT__m_reset.erase(kind);
            ++(vlSymsp->__Vcoverage[21392]);
        } else {
            ++(vlSymsp->__Vcoverage[21393]);
        }
        has_reset__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    if ((! this->__PVT__m_reset.exists(kind))) {
        ++(vlSymsp->__Vcoverage[21390]);
    }
    if (this->__PVT__m_reset.exists(kind)) {
        ++(vlSymsp->__Vcoverage[21391]);
    }
    ++(vlSymsp->__Vcoverage[21394]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset\n"); );
    // Body
    {
        get_reset__Vfuncrtn = 0ULL;
        if (this->__PVT__m_reset.exists(kind)) {
            ++(vlSymsp->__Vcoverage[21396]);
        } else {
            get_reset__Vfuncrtn = this->__PVT__m_desired;
            goto __Vlabel0;
        }
        get_reset__Vfuncrtn = this->__PVT__m_reset.at(kind);
        __Vlabel0: ;
    }
    if ((! this->__PVT__m_reset.exists(kind))) {
        ++(vlSymsp->__Vcoverage[21397]);
    }
    if (this->__PVT__m_reset.exists(kind)) {
        ++(vlSymsp->__Vcoverage[21398]);
    }
    ++(vlSymsp->__Vcoverage[21399]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset\n"); );
    // Body
    this->__PVT__m_reset.at(kind) = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                              - 1ULL));
    ++(vlSymsp->__Vcoverage[21400]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = ((this->__PVT__m_mirrored 
                               != this->__PVT__m_desired) 
                              | (IData)(this->__PVT__m_volatile));
    if (this->__PVT__m_volatile) {
        ++(vlSymsp->__Vcoverage[21401]);
    }
    if ((this->__PVT__m_mirrored != this->__PVT__m_desired)) {
        ++(vlSymsp->__Vcoverage[21402]);
    }
    if (((this->__PVT__m_mirrored == this->__PVT__m_desired) 
         & (~ (IData)(this->__PVT__m_volatile)))) {
        ++(vlSymsp->__Vcoverage[21403]);
    }
    ++(vlSymsp->__Vcoverage[21404]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102__verbosity;
    __Vfunc_uvm_report_enabled__102__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__102__severity;
    __Vfunc_uvm_report_enabled__102__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__107__verbosity;
    __Vtask_uvm_report_warning__107__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__107__line;
    __Vtask_uvm_report_warning__107__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__107__report_enabled_checked;
    __Vtask_uvm_report_warning__107__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__114__verbosity;
    __Vfunc_uvm_report_enabled__114__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__114__severity;
    __Vfunc_uvm_report_enabled__114__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__120__verbosity;
    __Vtask_uvm_report_error__120__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__120__line;
    __Vtask_uvm_report_error__120__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__120__report_enabled_checked;
    __Vtask_uvm_report_error__120__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__121__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__122__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125__verbosity;
    __Vfunc_uvm_report_enabled__125__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__125__severity;
    __Vfunc_uvm_report_enabled__125__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__126__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__127__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__131__verbosity;
    __Vtask_uvm_report_error__131__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__131__line;
    __Vtask_uvm_report_error__131__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__131__report_enabled_checked;
    __Vtask_uvm_report_error__131__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__132__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__133__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_type_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_type_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_7__get_local_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_6__backdoor;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_3;
    CData/*0:0*/ __VlefCall_2__has_hdl_path;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_1__get_backdoor;
    IData/*31:0*/ __VlefCall_0__get_default_door;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk276__DOT__blk;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        if ((3U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 992)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 993)->__VnoInFunc_get_block(vlSymsp, unnamedblk276__DOT__blk);
            VL_NULL_CHECK(unnamedblk276__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 994)->__VnoInFunc_get_default_door(vlSymsp, __VlefCall_0__get_default_door);
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 994)->__PVT__path 
                = __VlefCall_0__get_default_door;
            ++(vlSymsp->__Vcoverage[21405]);
        } else {
            ++(vlSymsp->__Vcoverage[21406]);
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 997)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 998)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_1__get_backdoor);
            __VlefLogAnd_3 = (VlNull{} == __VlefCall_1__get_backdoor);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 998)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_2__has_hdl_path);
                __VlefLogAnd_3 = (1U & (~ (IData)(__VlefCall_2__has_hdl_path)));
            }
            if (__VlefLogAnd_3) {
                this->__Vfunc_uvm_report_enabled__102__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__102__severity = 1U;
                __Vfunc_uvm_report_enabled__102__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__103__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__103__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__104__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__102__verbosity, (IData)(__Vfunc_uvm_report_enabled__102__severity), this->__Vfunc_uvm_report_enabled__102__id, __VlefCall_4__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_4__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                    __Vtask_uvm_report_warning__107__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__107__context_name = ""s;
                    __Vtask_uvm_report_warning__107__line = 0x000003e9U;
                    this->__Vtask_uvm_report_warning__107__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__107__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__107__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for field '"s, __VlefCall_5__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__107__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__108__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__108__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__109__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__107__id, this->__Vtask_uvm_report_warning__107__message, __Vtask_uvm_report_warning__107__verbosity, this->__Vtask_uvm_report_warning__107__filename, __Vtask_uvm_report_warning__107__line, this->__Vtask_uvm_report_warning__107__context_name, (IData)(__Vtask_uvm_report_warning__107__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[441]);
                    ++(vlSymsp->__Vcoverage[21407]);
                } else {
                    ++(vlSymsp->__Vcoverage[21408]);
                }
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1002)->__PVT__path = 0U;
                ++(vlSymsp->__Vcoverage[21409]);
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_6__backdoor);
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1005)->__PVT__map 
                    = __VlefCall_6__backdoor;
                ++(vlSymsp->__Vcoverage[21410]);
            }
            ++(vlSymsp->__Vcoverage[21411]);
        } else {
            ++(vlSymsp->__Vcoverage[21412]);
        }
        if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1008)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)
                                                                                ->__PVT__map, __VlefCall_7__get_local_map);
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)->__PVT__local_map 
                = __VlefCall_7__get_local_map;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1012)
                 ->__PVT__local_map)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                this->__Vfunc_uvm_report_enabled__114__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                __Vfunc_uvm_report_enabled__114__severity = 2U;
                __Vfunc_uvm_report_enabled__114__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__115__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__116__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__114__verbosity, (IData)(__Vfunc_uvm_report_enabled__114__severity), this->__Vfunc_uvm_report_enabled__114__id, __VlefCall_9__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1015)
                                  ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1015)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    __Vtask_uvm_report_error__120__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__120__context_name = ""s;
                    __Vtask_uvm_report_error__120__line = 0x000003f7U;
                    this->__Vtask_uvm_report_error__120__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__120__verbosity = 0U;
                    this->__Vtask_uvm_report_error__120__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, __VlefCall_11__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__120__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__121__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__121__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__122__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__122__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__120__id, this->__Vtask_uvm_report_error__120__message, __Vtask_uvm_report_error__120__verbosity, this->__Vtask_uvm_report_error__120__filename, __Vtask_uvm_report_error__120__line, this->__Vtask_uvm_report_error__120__context_name, (IData)(__Vtask_uvm_report_error__120__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[21413]);
                } else {
                    ++(vlSymsp->__Vcoverage[21414]);
                }
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1016)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[21416]);
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1020)
                          ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1020)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, this->__PVT__m_parent, 1U, map_info);
            if (((VlNull{} == VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1022)
                  ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1022)
                 ->__PVT__unmapped)) {
                this->__Vfunc_uvm_report_enabled__125__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__125__severity = 2U;
                __Vfunc_uvm_report_enabled__125__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__126__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__127__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__127__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__125__verbosity, (IData)(__Vfunc_uvm_report_enabled__125__severity), this->__Vfunc_uvm_report_enabled__125__id, __VlefCall_12__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_12__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1026)
                                  ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1026)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    __Vtask_uvm_report_error__131__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__131__context_name = ""s;
                    __Vtask_uvm_report_error__131__line = 0x00000402U;
                    this->__Vtask_uvm_report_error__131__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__131__verbosity = 0U;
                    this->__Vtask_uvm_report_error__131__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Field '"s, __VlefCall_13__get_full_name), "' in register that is unmapped in map '"s), __VlefCall_14__get_full_name), "' and does not have a user-defined frontdoor"s));
                    this->__Vtask_uvm_report_error__131__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__132__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__132__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__133__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__133__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__131__id, this->__Vtask_uvm_report_error__131__message, __Vtask_uvm_report_error__131__verbosity, this->__Vtask_uvm_report_error__131__filename, __Vtask_uvm_report_error__131__line, this->__Vtask_uvm_report_error__131__context_name, (IData)(__Vtask_uvm_report_error__131__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[21417]);
                } else {
                    ++(vlSymsp->__Vcoverage[21418]);
                }
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1027)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[21420]);
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1031)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1032)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1032)
                    ->__PVT__local_map;
                ++(vlSymsp->__Vcoverage[21421]);
            } else {
                ++(vlSymsp->__Vcoverage[21422]);
            }
            ++(vlSymsp->__Vcoverage[21423]);
        } else {
            ++(vlSymsp->__Vcoverage[21424]);
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21425]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1053)->__PVT__element 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1054)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1055)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1056)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1057)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1058)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1059)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1060)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1061)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1062)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1063)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1067)
        ->__PVT__status;
    ++(vlSymsp->__Vcoverage[21426]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__139__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__140__verbosity;
    __Vfunc_uvm_report_enabled__140__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__140__severity;
    __Vfunc_uvm_report_enabled__140__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__141__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__142__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__145__verbosity;
    __Vtask_uvm_report_warning__145__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__145__line;
    __Vtask_uvm_report_warning__145__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__145__report_enabled_checked;
    __Vtask_uvm_report_warning__145__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__146__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__147__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__verbosity;
    __Vfunc_uvm_report_enabled__173__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__173__severity;
    __Vfunc_uvm_report_enabled__173__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__174__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__175__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__178__verbosity;
    __Vtask_uvm_report_warning__178__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__178__line;
    __Vtask_uvm_report_warning__178__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__178__report_enabled_checked;
    __Vtask_uvm_report_warning__178__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__179__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__180__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_7__get_auto_predict;
    CData/*0:0*/ __VlefCall_6__is_indv_accessible;
    IData/*31:0*/ __VlefCall_5__get_lsb_pos;
    IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    IData/*31:0*/ __VlefCall_3__get_n_bits;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    IData/*31:0*/ unnamedblk277__DOT__i;
    unnamedblk277__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk278__DOT__system_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105> unnamedblk278__DOT__cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk278__DOT__unnamedblk279__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk278__DOT__unnamedblk280__DOT__cb;
    std::string __VCase_hb5b99615__0;
    QData/*63:0*/ value_adjust;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> fields;
    CData/*0:0*/ bad_side_effect;
    {
        value_adjust = 0ULL;
        fields.clear();
        bad_side_effect = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1081)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1082)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1083)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__139__map_info, __VlefCall_0__Xcheck_accessX);
        if (__VlefCall_0__Xcheck_accessX) {
            ++(vlSymsp->__Vcoverage[21428]);
        } else {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        if ((0U != VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1090)
                                 ->__PVT__value.at(0U), this->__PVT__m_size))) {
            this->__Vfunc_uvm_report_enabled__140__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__140__severity = 1U;
            __Vfunc_uvm_report_enabled__140__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__141__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__141__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__142__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__142__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__140__verbosity, (IData)(__Vfunc_uvm_report_enabled__140__severity), this->__Vfunc_uvm_report_enabled__140__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_warning__145__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__145__context_name = ""s;
                __Vtask_uvm_report_warning__145__line = 0x00000444U;
                this->__Vtask_uvm_report_warning__145__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__145__verbosity = 0U;
                this->__Vtask_uvm_report_warning__145__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::write(): Value greater than field '"s, __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__145__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__146__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__146__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__147__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__147__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__145__id, this->__Vtask_uvm_report_warning__145__message, __Vtask_uvm_report_warning__145__verbosity, this->__Vtask_uvm_report_warning__145__filename, __Vtask_uvm_report_warning__145__line, this->__Vtask_uvm_report_warning__145__context_name, (IData)(__Vtask_uvm_report_warning__145__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[21429]);
            } else {
                ++(vlSymsp->__Vcoverage[21430]);
            }
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1093)->__PVT__value.atWrite(0U) 
                = (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1093)
                   ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                            - 1ULL));
            ++(vlSymsp->__Vcoverage[21431]);
        } else {
            ++(vlSymsp->__Vcoverage[21432]);
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1097)->__VnoInFunc_get_fields(vlSymsp, fields);
        unnamedblk277__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk277__DOT__i, fields.size())) {
            {
                if ((fields.at(unnamedblk277__DOT__i) 
                     == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this})) {
                    value_adjust = (value_adjust | 
                                    VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1101)
                                                  ->__PVT__value.at(0U), this->__PVT__m_lsb));
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[21434]);
                }
                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                                ->__PVT__local_map, __VCase_hb5b99615__0);
                if ((((((((("RO"s == __VCase_hb5b99615__0) 
                           || ("RC"s == __VCase_hb5b99615__0)) 
                          || ("RS"s == __VCase_hb5b99615__0)) 
                         || ("W1C"s == __VCase_hb5b99615__0)) 
                        || ("W1S"s == __VCase_hb5b99615__0)) 
                       || ("W1T"s == __VCase_hb5b99615__0)) 
                      || ("W1SRC"s == __VCase_hb5b99615__0)) 
                     || ("W1CRC"s == __VCase_hb5b99615__0))) {
                    ++(vlSymsp->__Vcoverage[21435]);
                } else if (((((("W0C"s == __VCase_hb5b99615__0) 
                               || ("W0S"s == __VCase_hb5b99615__0)) 
                              || ("W0T"s == __VCase_hb5b99615__0)) 
                             || ("W0SRC"s == __VCase_hb5b99615__0)) 
                            || ("W0CRS"s == __VCase_hb5b99615__0))) {
                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1115)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1115)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
                    value_adjust = (value_adjust | 
                                    VL_SHIFTL_QQI(64,64,32, 
                                                  (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_3__get_n_bits) 
                                                   - 1ULL), __VlefCall_4__get_lsb_pos));
                    ++(vlSymsp->__Vcoverage[21436]);
                } else if ((((((("WC"s == __VCase_hb5b99615__0) 
                                || ("WS"s == __VCase_hb5b99615__0)) 
                               || ("WCRS"s == __VCase_hb5b99615__0)) 
                              || ("WSRC"s == __VCase_hb5b99615__0)) 
                             || ("WOC"s == __VCase_hb5b99615__0)) 
                            || ("WOS"s == __VCase_hb5b99615__0))) {
                    bad_side_effect = 1U;
                    ++(vlSymsp->__Vcoverage[21437]);
                } else {
                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1122)->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_5__get_lsb_pos);
                    value_adjust = (value_adjust | 
                                    VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1122)
                                                  ->__PVT__m_mirrored, __VlefCall_5__get_lsb_pos));
                    ++(vlSymsp->__Vcoverage[21438]);
                }
                __Vlabel1: ;
            }
            unnamedblk277__DOT__i = ((IData)(1U) + unnamedblk277__DOT__i);
            ++(vlSymsp->__Vcoverage[21439]);
        }
        this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1134)
                                             ->__PVT__path, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1134)
                                             ->__PVT__local_map, __VlefCall_6__is_indv_accessible);
        if (__VlefCall_6__is_indv_accessible) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1146)
                          ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1146)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk278__DOT__system_map);
            unnamedblk278__DOT__cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105, vlSymsp, 
                                             VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1149)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1151)->__PVT__status = 0U;
            this->__VnoInFunc_pre_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1154)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk278__DOT__unnamedblk279__DOT__cb);
            while ((VlNull{} != unnamedblk278__DOT__unnamedblk279__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk278__DOT__unnamedblk279__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1155)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1154)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk278__DOT__unnamedblk279__DOT__cb);
                ++(vlSymsp->__Vcoverage[21444]);
            }
            if ((0U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1157)
                 ->__PVT__status)) {
                this->__PVT__m_write_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1159)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1160)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[21446]);
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1165)
                                   ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1165)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk278__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1167)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_7__get_auto_predict);
            if (__VlefCall_7__get_auto_predict) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                ++(vlSymsp->__Vcoverage[21447]);
            } else {
                ++(vlSymsp->__Vcoverage[21448]);
            }
            this->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1172)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk278__DOT__unnamedblk280__DOT__cb);
            while ((VlNull{} != unnamedblk278__DOT__unnamedblk280__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk278__DOT__unnamedblk280__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1173)->__VnoInFunc_post_write(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1172)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk278__DOT__unnamedblk280__DOT__cb);
                ++(vlSymsp->__Vcoverage[21449]);
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1175)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
            ++(vlSymsp->__Vcoverage[21451]);
        } else {
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1135)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1136)->__PVT__element 
                = this->__PVT__m_parent;
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1137)->__PVT__value.atWrite(0U) 
                = value_adjust;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1138)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            if (bad_side_effect) {
                this->__Vfunc_uvm_report_enabled__173__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__173__severity = 1U;
                __Vfunc_uvm_report_enabled__173__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__174__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__174__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__175__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__175__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__173__verbosity, (IData)(__Vfunc_uvm_report_enabled__173__severity), this->__Vfunc_uvm_report_enabled__173__id, __VlefCall_8__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_8__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    __Vtask_uvm_report_warning__178__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__178__context_name = ""s;
                    __Vtask_uvm_report_warning__178__line = 0x00000475U;
                    this->__Vtask_uvm_report_warning__178__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__178__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__178__message 
                        = VL_SFORMATF_N_NX("Writing field \"%@\" will cause unintended side effects in adjoining Write-to-Clear or Write-to-Set fields in the same register",0,
                                           -1,&(__VlefCall_9__get_full_name)) ;
                    this->__Vtask_uvm_report_warning__178__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__179__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__179__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__180__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__180__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__178__id, this->__Vtask_uvm_report_warning__178__message, __Vtask_uvm_report_warning__178__verbosity, this->__Vtask_uvm_report_warning__178__filename, __Vtask_uvm_report_warning__178__line, this->__Vtask_uvm_report_warning__178__context_name, (IData)(__Vtask_uvm_report_warning__178__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[441]);
                    ++(vlSymsp->__Vcoverage[21440]);
                } else {
                    ++(vlSymsp->__Vcoverage[21441]);
                }
                ++(vlSymsp->__Vcoverage[21442]);
            } else {
                ++(vlSymsp->__Vcoverage[21443]);
            }
            ++(vlSymsp->__Vcoverage[21450]);
        }
        this->__PVT__m_write_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1182)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21452]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1201)->__PVT__element 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1202)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1203)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1204)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1205)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1206)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1207)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1208)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1209)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1210)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1211)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlSymsp, rw);
    value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1215)
        ->__PVT__value.at(0U);
    status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1216)
        ->__PVT__status;
    ++(vlSymsp->__Vcoverage[21453]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__187__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__210__verbosity;
    __Vfunc_uvm_report_enabled__210__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__210__severity;
    __Vfunc_uvm_report_enabled__210__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__211__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__212__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__215__verbosity;
    __Vtask_uvm_report_warning__215__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__215__line;
    __Vtask_uvm_report_warning__215__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__215__report_enabled_checked;
    __Vtask_uvm_report_warning__215__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__216__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__217__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__get_auto_predict;
    CData/*0:0*/ __VlefCall_1__is_indv_accessible;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk281__DOT__system_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105> unnamedblk281__DOT__cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk281__DOT__unnamedblk282__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk281__DOT__unnamedblk283__DOT__cb;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> unnamedblk284__DOT__fields;
    IData/*31:0*/ unnamedblk284__DOT__unnamedblk285__DOT__i;
    unnamedblk284__DOT__unnamedblk285__DOT__i = 0;
    std::string unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode;
    CData/*0:0*/ bad_side_effect;
    {
        bad_side_effect = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1228)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1229)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1230)
            ->__PVT__lineno;
        this->__PVT__m_read_in_progress = 1U;
        this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__187__map_info, __VlefCall_0__Xcheck_accessX);
        if (__VlefCall_0__Xcheck_accessX) {
            ++(vlSymsp->__Vcoverage[21455]);
        } else {
            goto __Vlabel0;
        }
        this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1244)
                                             ->__PVT__path, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1244)
                                             ->__PVT__local_map, __VlefCall_1__is_indv_accessible);
        if (__VlefCall_1__is_indv_accessible) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1253)
                          ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1253)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk281__DOT__system_map);
            unnamedblk281__DOT__cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105, vlSymsp, 
                                             VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1256)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1258)->__PVT__status = 0U;
            this->__VnoInFunc_pre_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk281__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1261)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk281__DOT__unnamedblk282__DOT__cb);
            while ((VlNull{} != unnamedblk281__DOT__unnamedblk282__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk281__DOT__unnamedblk282__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1262)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk281__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1261)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk281__DOT__unnamedblk282__DOT__cb);
                ++(vlSymsp->__Vcoverage[21456]);
            }
            if ((0U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1264)
                 ->__PVT__status)) {
                this->__PVT__m_read_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1266)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1267)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[21458]);
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1272)
                                   ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1272)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk281__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1275)->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_2__get_auto_predict);
            if (__VlefCall_2__get_auto_predict) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                ++(vlSymsp->__Vcoverage[21459]);
            } else {
                ++(vlSymsp->__Vcoverage[21460]);
            }
            this->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk281__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1280)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk281__DOT__unnamedblk283__DOT__cb);
            while ((VlNull{} != unnamedblk281__DOT__unnamedblk283__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk281__DOT__unnamedblk283__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1281)->__VnoInFunc_post_read(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk281__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1280)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk281__DOT__unnamedblk283__DOT__cb);
                ++(vlSymsp->__Vcoverage[21461]);
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1283)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
            ++(vlSymsp->__Vcoverage[21463]);
        } else {
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1245)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1246)->__PVT__element 
                = this->__PVT__m_parent;
            bad_side_effect = 1U;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1248)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1249)->__PVT__value.atWrite(0U) 
                = (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1249)
                                 ->__PVT__value.at(0U), this->__PVT__m_lsb) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                      - 1ULL));
            ++(vlSymsp->__Vcoverage[21462]);
        }
        this->__PVT__m_read_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1290)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        if (bad_side_effect) {
            unnamedblk284__DOT__fields.clear();
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1294)->__VnoInFunc_get_fields(vlSymsp, unnamedblk284__DOT__fields);
            unnamedblk284__DOT__unnamedblk285__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk284__DOT__unnamedblk285__DOT__i, unnamedblk284__DOT__fields.size())) {
                {
                    unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode = ""s;
                    if ((unnamedblk284__DOT__fields.at(unnamedblk284__DOT__unnamedblk285__DOT__i) 
                         == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[21465]);
                    }
                    VL_NULL_CHECK(unnamedblk284__DOT__fields.at(unnamedblk284__DOT__unnamedblk285__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1299)->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode);
                    if ((((((((((("RC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode) 
                                 | ("RS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                                | ("WRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                               | ("WRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                              | ("WSRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                             | ("WCRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                            | ("W1SRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                           | ("W1CRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                          | ("W0SRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                         | ("W0CRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) {
                        this->__Vfunc_uvm_report_enabled__210__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__210__severity = 1U;
                        __Vfunc_uvm_report_enabled__210__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__211__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__211__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__212__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__212__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__210__verbosity, (IData)(__Vfunc_uvm_report_enabled__210__severity), this->__Vfunc_uvm_report_enabled__210__id, __VlefCall_3__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[437]);
                        if ((0U != __VlefCall_3__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                            __Vtask_uvm_report_warning__215__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__215__context_name = ""s;
                            __Vtask_uvm_report_warning__215__line = 0x00000520U;
                            this->__Vtask_uvm_report_warning__215__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                            __Vtask_uvm_report_warning__215__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__215__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Reading field '"s, __VlefCall_4__get_full_name), "' will cause unintended side effects in adjoining "s), "Read-to-Clear or Read-to-Set fields in the same register"s));
                            this->__Vtask_uvm_report_warning__215__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__216__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__216__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__217__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__217__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__215__id, this->__Vtask_uvm_report_warning__215__message, __Vtask_uvm_report_warning__215__verbosity, this->__Vtask_uvm_report_warning__215__filename, __Vtask_uvm_report_warning__215__line, this->__Vtask_uvm_report_warning__215__context_name, (IData)(__Vtask_uvm_report_warning__215__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[441]);
                            ++(vlSymsp->__Vcoverage[21466]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21467]);
                        }
                        ++(vlSymsp->__Vcoverage[21468]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21469]);
                    }
                    __Vlabel1: ;
                }
                unnamedblk284__DOT__unnamedblk285__DOT__i 
                    = ((IData)(1U) + unnamedblk284__DOT__unnamedblk285__DOT__i);
                ++(vlSymsp->__Vcoverage[21481]);
            }
            if (("W0CRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21470]);
            }
            if (("W0SRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21471]);
            }
            if (("W1CRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21472]);
            }
            if (("W1SRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21473]);
            }
            if (("WCRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21474]);
            }
            if (("WSRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21475]);
            }
            if (("WRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21476]);
            }
            if (("WRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21477]);
            }
            if (("RS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21478]);
            }
            if (("RC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) {
                ++(vlSymsp->__Vcoverage[21479]);
            }
            if ((1U & ((((((((((~ ("RC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                               & (~ ("RS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) 
                              & (~ ("WRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) 
                             & (~ ("WRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) 
                            & (~ ("WSRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) 
                           & (~ ("WCRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) 
                          & (~ ("W1SRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) 
                         & (~ ("W1CRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) 
                        & (~ ("W0SRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) 
                       & (~ ("W0CRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))))) {
                ++(vlSymsp->__Vcoverage[21480]);
            }
            ++(vlSymsp->__Vcoverage[21482]);
        } else {
            ++(vlSymsp->__Vcoverage[21483]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21484]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__219__verbosity;
    __Vfunc_uvm_report_enabled__219__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__219__severity;
    __Vfunc_uvm_report_enabled__219__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__220__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__221__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__224__verbosity;
    __Vtask_uvm_report_warning__224__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__224__line;
    __Vtask_uvm_report_warning__224__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__224__report_enabled_checked;
    __Vtask_uvm_report_warning__224__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__225__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__226__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__228__verbosity;
    __Vfunc_uvm_report_enabled__228__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__228__severity;
    __Vfunc_uvm_report_enabled__228__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__229__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__230__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__233__verbosity;
    __Vtask_uvm_report_warning__233__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__233__line;
    __Vtask_uvm_report_warning__233__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__233__report_enabled_checked;
    __Vtask_uvm_report_warning__233__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__234__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__235__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__238__verbosity;
    __Vfunc_uvm_report_enabled__238__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__238__severity;
    __Vfunc_uvm_report_enabled__238__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__239__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__240__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__244__verbosity;
    __Vtask_uvm_report_warning__244__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__244__line;
    __Vtask_uvm_report_warning__244__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__244__report_enabled_checked;
    __Vtask_uvm_report_warning__244__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__245__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__246__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__250__Vfuncout;
    __Vtask_get_n_bytes__250__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__252__Vfuncout;
    __Vtask_get_lsb_pos__252__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__253__Vfuncout;
    __Vtask_get_n_bits__253__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__254__Vfuncout;
    __Vtask_get_lsb_pos__254__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__255__Vfuncout;
    __Vtask_get_n_bits__255__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__256__Vfuncout;
    __Vtask_get_lsb_pos__256__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__257__Vfuncout;
    __Vtask_get_n_bits__257__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__258__verbosity;
    __Vfunc_uvm_report_enabled__258__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__258__severity;
    __Vfunc_uvm_report_enabled__258__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__259__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__260__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__263__verbosity;
    __Vtask_uvm_report_warning__263__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__263__line;
    __Vtask_uvm_report_warning__263__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__263__report_enabled_checked;
    __Vtask_uvm_report_warning__263__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__264__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__265__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> __VlefCall_4__get_frontdoor;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk287__DOT__system_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> unnamedblk287__DOT__adapter;
    IData/*31:0*/ unnamedblk288__DOT__fld_idx;
    IData/*31:0*/ unnamedblk288__DOT__bus_width;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> unnamedblk288__DOT__fields;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__this_lsb;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__next_lsb;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__prev_sz;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__this_sz;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__bus_sz;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i;
    unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i = 0;
    {
        is_indv_accessible__Vfuncrtn = 0U;
        if ((1U == path)) {
            this->__Vfunc_uvm_report_enabled__219__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__219__severity = 1U;
            __Vfunc_uvm_report_enabled__219__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__220__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__220__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__221__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__221__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__219__verbosity, (IData)(__Vfunc_uvm_report_enabled__219__severity), this->__Vfunc_uvm_report_enabled__219__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__224__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__224__context_name = ""s;
                __Vtask_uvm_report_warning__224__line = 0x0000052fU;
                this->__Vtask_uvm_report_warning__224__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__224__verbosity = 0U;
                this->__Vtask_uvm_report_warning__224__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual BACKDOOR field access not available for field '"s, __VlefCall_1__get_full_name), "'. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__224__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__225__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__225__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__226__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__226__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__224__id, this->__Vtask_uvm_report_warning__224__message, __Vtask_uvm_report_warning__224__verbosity, this->__Vtask_uvm_report_warning__224__filename, __Vtask_uvm_report_warning__224__line, this->__Vtask_uvm_report_warning__224__context_name, (IData)(__Vtask_uvm_report_warning__224__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[21485]);
            } else {
                ++(vlSymsp->__Vcoverage[21486]);
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21488]);
        }
        if (this->__PVT__m_individually_accessible) {
            ++(vlSymsp->__Vcoverage[21492]);
        } else {
            this->__Vfunc_uvm_report_enabled__228__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__228__severity = 1U;
            __Vfunc_uvm_report_enabled__228__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__229__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__229__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__230__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__230__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__228__verbosity, (IData)(__Vfunc_uvm_report_enabled__228__severity), this->__Vfunc_uvm_report_enabled__228__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_warning__233__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__233__context_name = ""s;
                __Vtask_uvm_report_warning__233__line = 0x00000536U;
                this->__Vtask_uvm_report_warning__233__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__233__verbosity = 0U;
                this->__Vtask_uvm_report_warning__233__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual field access not available for field '"s, __VlefCall_3__get_full_name), "'. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__233__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__234__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__234__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__235__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__235__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__233__id, this->__Vtask_uvm_report_warning__233__message, __Vtask_uvm_report_warning__233__verbosity, this->__Vtask_uvm_report_warning__233__filename, __Vtask_uvm_report_warning__233__line, this->__Vtask_uvm_report_warning__233__context_name, (IData)(__Vtask_uvm_report_warning__233__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[21489]);
            } else {
                ++(vlSymsp->__Vcoverage[21490]);
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1340)->__VnoInFunc_get_frontdoor(vlSymsp, local_map, __VlefCall_4__get_frontdoor);
        if ((VlNull{} != __VlefCall_4__get_frontdoor)) {
            this->__Vfunc_uvm_report_enabled__238__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__238__severity = 1U;
            __Vfunc_uvm_report_enabled__238__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__239__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__239__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__240__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__240__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__238__verbosity, (IData)(__Vfunc_uvm_report_enabled__238__severity), this->__Vfunc_uvm_report_enabled__238__id, __VlefCall_5__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1343)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_warning__244__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__244__context_name = ""s;
                __Vtask_uvm_report_warning__244__line = 0x0000053fU;
                this->__Vtask_uvm_report_warning__244__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__244__verbosity = 0U;
                this->__Vtask_uvm_report_warning__244__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Individual field access not available for field '"s, __VlefCall_6__get_name), "' because register '"s), __VlefCall_7__get_full_name), "' has a user-defined front-door. Accessing complete register instead."s));
                this->__Vtask_uvm_report_warning__244__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__245__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__245__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__246__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__246__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__244__id, this->__Vtask_uvm_report_warning__244__message, __Vtask_uvm_report_warning__244__verbosity, this->__Vtask_uvm_report_warning__244__filename, __Vtask_uvm_report_warning__244__line, this->__Vtask_uvm_report_warning__244__context_name, (IData)(__Vtask_uvm_report_warning__244__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[21495]);
            } else {
                ++(vlSymsp->__Vcoverage[21496]);
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21498]);
        }
        VL_NULL_CHECK(local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1348)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk287__DOT__system_map);
        VL_NULL_CHECK(unnamedblk287__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1349)->__VnoInFunc_get_adapter(vlSymsp, 1U, unnamedblk287__DOT__adapter);
        if (VL_NULL_CHECK(unnamedblk287__DOT__adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1350)
            ->__PVT__supports_byte_enable) {
            is_indv_accessible__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21500]);
        }
        unnamedblk288__DOT__fld_idx = 0U;
        VL_NULL_CHECK(local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1356)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__250__Vfuncout);
        unnamedblk288__DOT__bus_width = __Vtask_get_n_bytes__250__Vfuncout;
        unnamedblk288__DOT__fields.clear();
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1360)->__VnoInFunc_get_fields(vlSymsp, unnamedblk288__DOT__fields);
        if ((1U == unnamedblk288__DOT__fields.size())) {
            ++(vlSymsp->__Vcoverage[21527]);
        } else {
            unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb = 0U;
            unnamedblk288__DOT__unnamedblk289__DOT__this_lsb = 0U;
            unnamedblk288__DOT__unnamedblk289__DOT__next_lsb = 0U;
            unnamedblk288__DOT__unnamedblk289__DOT__prev_sz = 0U;
            unnamedblk288__DOT__unnamedblk289__DOT__this_sz = 0U;
            unnamedblk288__DOT__unnamedblk289__DOT__bus_sz 
                = VL_MULS_III(32, (IData)(8U), unnamedblk288__DOT__bus_width);
            {
                unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i, unnamedblk288__DOT__fields.size())) {
                    if ((unnamedblk288__DOT__fields.at(unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i) 
                         == VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        unnamedblk288__DOT__fld_idx 
                            = unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i;
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[21502]);
                    }
                    unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i 
                        = ((IData)(1U) + unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i);
                    ++(vlSymsp->__Vcoverage[21503]);
                }
                __Vlabel1: ;
            }
            VL_NULL_CHECK(unnamedblk288__DOT__fields.at(unnamedblk288__DOT__fld_idx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1377)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__252__Vfuncout);
            unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                = __Vtask_get_lsb_pos__252__Vfuncout;
            VL_NULL_CHECK(unnamedblk288__DOT__fields.at(unnamedblk288__DOT__fld_idx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1378)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__253__Vfuncout);
            unnamedblk288__DOT__unnamedblk289__DOT__this_sz 
                = __Vtask_get_n_bits__253__Vfuncout;
            if (VL_LTS_III(32, 0U, unnamedblk288__DOT__fld_idx)) {
                VL_NULL_CHECK(unnamedblk288__DOT__fields.at(
                                                            (unnamedblk288__DOT__fld_idx 
                                                             - (IData)(1U))), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1381)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__254__Vfuncout);
                unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb 
                    = __Vtask_get_lsb_pos__254__Vfuncout;
                VL_NULL_CHECK(unnamedblk288__DOT__fields.at(
                                                            (unnamedblk288__DOT__fld_idx 
                                                             - (IData)(1U))), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1382)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__255__Vfuncout);
                unnamedblk288__DOT__unnamedblk289__DOT__prev_sz 
                    = __Vtask_get_n_bits__255__Vfuncout;
                ++(vlSymsp->__Vcoverage[21504]);
            } else {
                ++(vlSymsp->__Vcoverage[21505]);
            }
            if (VL_LTS_III(32, unnamedblk288__DOT__fld_idx, 
                           (unnamedblk288__DOT__fields.size() 
                            - (IData)(1U)))) {
                VL_NULL_CHECK(unnamedblk288__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk288__DOT__fld_idx)), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1386)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__256__Vfuncout);
                unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                    = __Vtask_get_lsb_pos__256__Vfuncout;
                VL_NULL_CHECK(unnamedblk288__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk288__DOT__fld_idx)), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1387)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__257__Vfuncout);
                ++(vlSymsp->__Vcoverage[21506]);
            } else {
                ++(vlSymsp->__Vcoverage[21507]);
            }
            if (((0U == unnamedblk288__DOT__fld_idx) 
                 & ((0U == VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                    | VL_GTS_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                      - unnamedblk288__DOT__unnamedblk289__DOT__this_sz), 
                                 VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if (((unnamedblk288__DOT__fld_idx 
                         == (unnamedblk288__DOT__fields.size() 
                             - (IData)(1U))) & ((0U 
                                                 == 
                                                 VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                                                | VL_GTES_III(32, 
                                                              (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                                               - 
                                                               (unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb 
                                                                + unnamedblk288__DOT__unnamedblk289__DOT__prev_sz)), 
                                                              VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                if ((0U == VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))) {
                    if (((0U == VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                         | VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                            - (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                               + unnamedblk288__DOT__unnamedblk289__DOT__this_sz)), 
                                       VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                        is_indv_accessible__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21509]);
                    }
                    if (VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                         - (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                            + unnamedblk288__DOT__unnamedblk289__DOT__this_sz)), 
                                    VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))) {
                        ++(vlSymsp->__Vcoverage[21510]);
                    }
                    if ((0U == VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))) {
                        ++(vlSymsp->__Vcoverage[21511]);
                    }
                    if (((0U != VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                         & VL_LTS_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                           - (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                              + unnamedblk288__DOT__unnamedblk289__DOT__this_sz)), 
                                      VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                        ++(vlSymsp->__Vcoverage[21512]);
                    }
                    ++(vlSymsp->__Vcoverage[21518]);
                } else {
                    if ((VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                          - (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                             + unnamedblk288__DOT__unnamedblk289__DOT__this_sz)), 
                                     VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                         & VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                            - (unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb 
                                               + unnamedblk288__DOT__unnamedblk289__DOT__prev_sz)), 
                                       VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                        is_indv_accessible__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21514]);
                    }
                    if ((VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                          - (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                             + unnamedblk288__DOT__unnamedblk289__DOT__this_sz)), 
                                     VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                         & VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                            - (unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb 
                                               + unnamedblk288__DOT__unnamedblk289__DOT__prev_sz)), 
                                       VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                        ++(vlSymsp->__Vcoverage[21515]);
                    }
                    if (VL_LTS_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                        - (unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb 
                                           + unnamedblk288__DOT__unnamedblk289__DOT__prev_sz)), 
                                   VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))) {
                        ++(vlSymsp->__Vcoverage[21516]);
                    }
                    if (VL_LTS_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                        - (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                           + unnamedblk288__DOT__unnamedblk289__DOT__this_sz)), 
                                   VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))) {
                        ++(vlSymsp->__Vcoverage[21517]);
                    }
                    ++(vlSymsp->__Vcoverage[21519]);
                }
                ++(vlSymsp->__Vcoverage[21521]);
            }
            if (((0U == unnamedblk288__DOT__fld_idx) 
                 & VL_GTS_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                   - unnamedblk288__DOT__unnamedblk289__DOT__this_sz), 
                              VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                ++(vlSymsp->__Vcoverage[21523]);
            }
            if (((0U == unnamedblk288__DOT__fld_idx) 
                 & (0U == VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                ++(vlSymsp->__Vcoverage[21524]);
            }
            if (((0U != VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                 & VL_LTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                    - unnamedblk288__DOT__unnamedblk289__DOT__this_sz), 
                               VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                ++(vlSymsp->__Vcoverage[21525]);
            }
            if ((0U != unnamedblk288__DOT__fld_idx)) {
                ++(vlSymsp->__Vcoverage[21526]);
            }
            ++(vlSymsp->__Vcoverage[21528]);
        }
        this->__Vfunc_uvm_report_enabled__258__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__258__severity = 1U;
        __Vfunc_uvm_report_enabled__258__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__259__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__259__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__260__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__260__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__258__verbosity, (IData)(__Vfunc_uvm_report_enabled__258__severity), this->__Vfunc_uvm_report_enabled__258__id, __VlefCall_8__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_8__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
            __Vtask_uvm_report_warning__263__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__263__context_name = ""s;
            __Vtask_uvm_report_warning__263__line = 0x0000058eU;
            this->__Vtask_uvm_report_warning__263__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__263__verbosity = 0U;
            this->__Vtask_uvm_report_warning__263__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Target bus does not support byte enabling, and the field '"s, __VlefCall_9__get_full_name), "' is not the only field within the entire bus width. "s), "Individual field access will not be available. "s), "Accessing complete register instead."s));
            this->__Vtask_uvm_report_warning__263__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__264__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__264__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__265__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__265__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__263__id, this->__Vtask_uvm_report_warning__263__message, __Vtask_uvm_report_warning__263__verbosity, this->__Vtask_uvm_report_warning__263__filename, __Vtask_uvm_report_warning__263__line, this->__Vtask_uvm_report_warning__263__context_name, (IData)(__Vtask_uvm_report_warning__263__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[21529]);
        } else {
            ++(vlSymsp->__Vcoverage[21530]);
        }
        is_indv_accessible__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(this->__PVT__m_individually_accessible)))) {
        ++(vlSymsp->__Vcoverage[21493]);
    }
    if (this->__PVT__m_individually_accessible) {
        ++(vlSymsp->__Vcoverage[21494]);
    }
    ++(vlSymsp->__Vcoverage[21531]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__267__verbosity;
    __Vfunc_uvm_report_enabled__267__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__267__severity;
    __Vfunc_uvm_report_enabled__267__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__268__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__269__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__272__verbosity;
    __Vtask_uvm_report_warning__272__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__272__line;
    __Vtask_uvm_report_warning__272__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__272__report_enabled_checked;
    __Vtask_uvm_report_warning__272__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__273__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__274__Vfuncout;
    IData/*31:0*/ __Vtask_peek__277__status;
    __Vtask_peek__277__status = 0;
    QData/*63:0*/ __Vtask_peek__277__value;
    __Vtask_peek__277__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__278__verbosity;
    __Vfunc_uvm_report_enabled__278__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__278__severity;
    __Vfunc_uvm_report_enabled__278__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__279__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__280__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__283__verbosity;
    __Vtask_uvm_report_error__283__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__283__line;
    __Vtask_uvm_report_error__283__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__283__report_enabled_checked;
    __Vtask_uvm_report_error__283__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__284__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__285__Vfuncout;
    IData/*31:0*/ __Vtask_poke__288__status;
    __Vtask_poke__288__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ tmp;
    {
        status = 0U;
        tmp = 0ULL;
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
            this->__Vfunc_uvm_report_enabled__267__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__267__severity = 1U;
            __Vfunc_uvm_report_enabled__267__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__268__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__268__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__269__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__269__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__267__verbosity, (IData)(__Vfunc_uvm_report_enabled__267__severity), this->__Vfunc_uvm_report_enabled__267__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                __Vtask_uvm_report_warning__272__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__272__context_name = ""s;
                __Vtask_uvm_report_warning__272__line = 0x000005a6U;
                this->__Vtask_uvm_report_warning__272__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__272__verbosity = 0U;
                this->__Vtask_uvm_report_warning__272__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::poke(): Value exceeds size of field '"s, __VlefCall_1__get_name), "'"s));
                this->__Vtask_uvm_report_warning__272__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__273__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__273__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__274__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__274__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__272__id, this->__Vtask_uvm_report_warning__272__message, __Vtask_uvm_report_warning__272__verbosity, this->__Vtask_uvm_report_warning__272__filename, __Vtask_uvm_report_warning__272__line, this->__Vtask_uvm_report_warning__272__context_name, (IData)(__Vtask_uvm_report_warning__272__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[21532]);
            } else {
                ++(vlSymsp->__Vcoverage[21533]);
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                              - 1ULL));
            ++(vlSymsp->__Vcoverage[21534]);
        } else {
            ++(vlSymsp->__Vcoverage[21535]);
        }
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1451)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1452)->__PVT__m_is_locked_by_field = 1U;
        tmp = 0ULL;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1457)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__277__status, __Vtask_peek__277__value, kind, parent, extension, fname, lineno);
        status = __Vtask_peek__277__status;
        tmp = __Vtask_peek__277__value;
        if ((1U == status)) {
            this->__Vfunc_uvm_report_enabled__278__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__278__severity = 2U;
            __Vfunc_uvm_report_enabled__278__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__279__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__279__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__280__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__280__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__278__verbosity, (IData)(__Vfunc_uvm_report_enabled__278__severity), this->__Vfunc_uvm_report_enabled__278__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1461)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__283__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__283__context_name = ""s;
                __Vtask_uvm_report_error__283__line = 0x000005b5U;
                this->__Vtask_uvm_report_error__283__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_error__283__verbosity = 0U;
                this->__Vtask_uvm_report_error__283__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("uvm_reg_field::poke(): Peek of register '"s, __VlefCall_3__get_full_name), "' returned status "s), Vtb_rng___024unit::__Venumtab_enum_name83
                                                        [
                                                        (3U 
                                                         & status)]));
                this->__Vtask_uvm_report_error__283__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__284__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__284__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__285__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__285__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__283__id, this->__Vtask_uvm_report_error__283__message, __Vtask_uvm_report_error__283__verbosity, this->__Vtask_uvm_report_error__283__filename, __Vtask_uvm_report_error__283__line, this->__Vtask_uvm_report_error__283__context_name, (IData)(__Vtask_uvm_report_error__283__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[21536]);
            } else {
                ++(vlSymsp->__Vcoverage[21537]);
            }
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1462)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1463)->__PVT__m_is_locked_by_field = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21539]);
        }
        tmp = (tmp & (~ VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                 - 1ULL), this->__PVT__m_lsb)));
        tmp = (tmp | VL_SHIFTL_QQI(64,64,32, value, this->__PVT__m_lsb));
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1470)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__288__status, tmp, kind, parent, extension, fname, lineno);
        status = __Vtask_poke__288__status;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1472)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1473)->__PVT__m_is_locked_by_field = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21540]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__290__status;
    __Vtask_peek__290__status = 0;
    QData/*63:0*/ __Vtask_peek__290__value;
    __Vtask_peek__290__value = 0;
    // Body
    VL_KEEP_THIS;
    QData/*63:0*/ reg_value;
    status = 0U;
    value = 0ULL;
    reg_value = 0ULL;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1491)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__290__status, __Vtask_peek__290__value, kind, parent, extension, fname, lineno);
    status = __Vtask_peek__290__status;
    reg_value = __Vtask_peek__290__value;
    value = (VL_SHIFTR_QQI(64,64,32, reg_value, this->__PVT__m_lsb) 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL));
    ++(vlSymsp->__Vcoverage[21541]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__291__status;
    __Vtask_mirror__291__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    status = 0U;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1510)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__291__status, check, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_mirror__291__status;
    ++(vlSymsp->__Vcoverage[21542]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ check) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare\n"); );
    // Body
    this->__PVT__m_check = check;
    ++(vlSymsp->__Vcoverage[21543]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare\n"); );
    // Body
    get_compare__Vfuncrtn = this->__PVT__m_check;
    ++(vlSymsp->__Vcoverage[21544]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize\n"); );
    // Body
    this->__PVT__value = this->__PVT__m_desired;
    ++(vlSymsp->__Vcoverage[21545]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_desired = this->__PVT__value;
    ++(vlSymsp->__Vcoverage[21546]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print\n"); );
    // Body
    std::string __VlefCall_2__convert2string;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_name;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1548)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__convert2string), 0x2eU);
    ++(vlSymsp->__Vcoverage[21547]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    IData/*31:0*/ __VlefCall_6__get_lsb_pos;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_lsb_pos;
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_access;
    IData/*31:0*/ __VlefCall_1__get_n_bits;
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    convert2string__Vfuncrtn = ""s;
    std::string fmt;
    std::string res_str;
    std::string prefix;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> reg_;
    fmt = ""s;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_register(vlSymsp, reg_);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
    VL_SFORMAT_NX(64,fmt,"%0#'h%%%0#h",0,32,__VlefCall_0__get_n_bits,
                  32,((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                  (__VlefCall_1__get_n_bits 
                                                   - (IData)(1U)), 2U)));
    this->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __VlefCall_2__get_access);
    VL_NULL_CHECK(reg_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1566)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
    this->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
    this->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
    __Vtemp_1 = VL_CONCATN_NNN(VL_CONCATN_NNN(" (Mirror: "s, fmt), ")"s);
    __Vtemp_2 = VL_CONCATN_NNN(VL_CONCATN_NNN("%s %s %s[%0d:%0d]="s, fmt), "%s"s);
    __Vtemp_3 = ((this->__PVT__m_desired != this->__PVT__m_mirrored)
                  ? VL_SFORMATF_N_NX("%@%20#",0,-1,
                                     &(__Vtemp_1),64,
                                     this->__PVT__m_mirrored) 
                  : ""s);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@%@%@%@%10#%10#%20#%@",0,
                  -1,&(__Vtemp_2),-1,&(prefix),-1,&(__VlefCall_2__get_access),
                  -1,&(__VlefCall_3__get_name),32,(
                                                   (__VlefCall_4__get_lsb_pos 
                                                    + __VlefCall_5__get_n_bits) 
                                                   - (IData)(1U)),
                  32,__VlefCall_6__get_lsb_pos,64,this->__PVT__m_desired,
                  -1,&(__Vtemp_3));
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(64,res_str," from %@:%0d",0,
                          -1,&(this->__PVT__m_fname),
                          32,this->__PVT__m_lineno);
            ++(vlSymsp->__Vcoverage[21550]);
        } else {
            ++(vlSymsp->__Vcoverage[21551]);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), "currently being read"s), res_str);
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            ++(vlSymsp->__Vcoverage[21552]);
        }
        if ((0U == this->__PVT__m_lineno)) {
            ++(vlSymsp->__Vcoverage[21553]);
        }
        if ((1U & (~ (""s != this->__PVT__m_fname)))) {
            ++(vlSymsp->__Vcoverage[21554]);
        }
        ++(vlSymsp->__Vcoverage[21555]);
    } else {
        ++(vlSymsp->__Vcoverage[21556]);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(64,res_str," from %@:%0d",0,
                          -1,&(this->__PVT__m_fname),
                          32,this->__PVT__m_lineno);
            ++(vlSymsp->__Vcoverage[21557]);
        } else {
            ++(vlSymsp->__Vcoverage[21558]);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently being written"s);
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            ++(vlSymsp->__Vcoverage[21559]);
        }
        if ((0U == this->__PVT__m_lineno)) {
            ++(vlSymsp->__Vcoverage[21560]);
        }
        if ((1U & (~ (""s != this->__PVT__m_fname)))) {
            ++(vlSymsp->__Vcoverage[21561]);
        }
        ++(vlSymsp->__Vcoverage[21562]);
    } else {
        ++(vlSymsp->__Vcoverage[21563]);
    }
    if ((this->__PVT__m_desired != this->__PVT__m_mirrored)) {
        ++(vlSymsp->__Vcoverage[21548]);
    }
    if ((this->__PVT__m_desired == this->__PVT__m_mirrored)) {
        ++(vlSymsp->__Vcoverage[21549]);
    }
    ++(vlSymsp->__Vcoverage[21564]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__304__verbosity;
    __Vfunc_uvm_report_enabled__304__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__304__severity;
    __Vfunc_uvm_report_enabled__304__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__305__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__306__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__304__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__304__severity = 3U;
    __Vfunc_uvm_report_enabled__304__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__305__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__305__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__306__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__306__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__304__verbosity, (IData)(__Vfunc_uvm_report_enabled__304__severity), this->__Vfunc_uvm_report_enabled__304__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel field cannot be cloned"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s, 0x00000634U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[21565]);
    } else {
        ++(vlSymsp->__Vcoverage[21566]);
    }
    clone__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[21567]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__309__verbosity;
    __Vfunc_uvm_report_enabled__309__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__309__severity;
    __Vfunc_uvm_report_enabled__309__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__310__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__311__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__313__verbosity;
    __Vtask_uvm_report_warning__313__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__313__line;
    __Vtask_uvm_report_warning__313__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__313__report_enabled_checked;
    __Vtask_uvm_report_warning__313__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__314__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__315__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__309__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__309__severity = 1U;
    __Vfunc_uvm_report_enabled__309__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__310__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__310__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__311__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__311__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__309__verbosity, (IData)(__Vfunc_uvm_report_enabled__309__severity), this->__Vfunc_uvm_report_enabled__309__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__313__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__313__context_name = ""s;
        __Vtask_uvm_report_warning__313__line = 0x0000063bU;
        this->__Vtask_uvm_report_warning__313__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__313__verbosity = 0U;
        this->__Vtask_uvm_report_warning__313__message = "RegModel field copy not yet implemented"s;
        this->__Vtask_uvm_report_warning__313__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__314__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__314__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__315__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__315__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__313__id, this->__Vtask_uvm_report_warning__313__message, __Vtask_uvm_report_warning__313__verbosity, this->__Vtask_uvm_report_warning__313__filename, __Vtask_uvm_report_warning__313__line, this->__Vtask_uvm_report_warning__313__context_name, (IData)(__Vtask_uvm_report_warning__313__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[21568]);
    } else {
        ++(vlSymsp->__Vcoverage[21569]);
    }
    ++(vlSymsp->__Vcoverage[21570]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__317__verbosity;
    __Vfunc_uvm_report_enabled__317__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__317__severity;
    __Vfunc_uvm_report_enabled__317__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__318__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__319__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__321__verbosity;
    __Vtask_uvm_report_warning__321__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__321__line;
    __Vtask_uvm_report_warning__321__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__321__report_enabled_checked;
    __Vtask_uvm_report_warning__321__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__317__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__317__severity = 1U;
    __Vfunc_uvm_report_enabled__317__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__318__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__318__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__319__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__319__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__317__verbosity, (IData)(__Vfunc_uvm_report_enabled__317__severity), this->__Vfunc_uvm_report_enabled__317__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__321__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__321__context_name = ""s;
        __Vtask_uvm_report_warning__321__line = 0x00000644U;
        this->__Vtask_uvm_report_warning__321__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__321__verbosity = 0U;
        this->__Vtask_uvm_report_warning__321__message = "RegModel field compare not yet implemented"s;
        this->__Vtask_uvm_report_warning__321__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__322__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__323__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__321__id, this->__Vtask_uvm_report_warning__321__message, __Vtask_uvm_report_warning__321__verbosity, this->__Vtask_uvm_report_warning__321__filename, __Vtask_uvm_report_warning__321__line, this->__Vtask_uvm_report_warning__321__context_name, (IData)(__Vtask_uvm_report_warning__321__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[21571]);
    } else {
        ++(vlSymsp->__Vcoverage[21572]);
    }
    do_compare__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[21573]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__325__verbosity;
    __Vfunc_uvm_report_enabled__325__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__325__severity;
    __Vfunc_uvm_report_enabled__325__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__326__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__327__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__329__verbosity;
    __Vtask_uvm_report_warning__329__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__329__line;
    __Vtask_uvm_report_warning__329__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__329__report_enabled_checked;
    __Vtask_uvm_report_warning__329__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__330__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__331__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__325__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__325__severity = 1U;
    __Vfunc_uvm_report_enabled__325__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__326__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__326__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__327__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__327__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__325__verbosity, (IData)(__Vfunc_uvm_report_enabled__325__severity), this->__Vfunc_uvm_report_enabled__325__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__329__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__329__context_name = ""s;
        __Vtask_uvm_report_warning__329__line = 0x0000064dU;
        this->__Vtask_uvm_report_warning__329__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__329__verbosity = 0U;
        this->__Vtask_uvm_report_warning__329__message = "RegModel field cannot be packed"s;
        this->__Vtask_uvm_report_warning__329__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__330__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__330__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__331__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__331__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__329__id, this->__Vtask_uvm_report_warning__329__message, __Vtask_uvm_report_warning__329__verbosity, this->__Vtask_uvm_report_warning__329__filename, __Vtask_uvm_report_warning__329__line, this->__Vtask_uvm_report_warning__329__context_name, (IData)(__Vtask_uvm_report_warning__329__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[21574]);
    } else {
        ++(vlSymsp->__Vcoverage[21575]);
    }
    ++(vlSymsp->__Vcoverage[21576]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__333__verbosity;
    __Vfunc_uvm_report_enabled__333__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__333__severity;
    __Vfunc_uvm_report_enabled__333__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__334__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__335__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__337__verbosity;
    __Vtask_uvm_report_warning__337__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__337__line;
    __Vtask_uvm_report_warning__337__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__337__report_enabled_checked;
    __Vtask_uvm_report_warning__337__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__338__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__339__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__333__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__333__severity = 1U;
    __Vfunc_uvm_report_enabled__333__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__334__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__334__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__335__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__335__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__333__verbosity, (IData)(__Vfunc_uvm_report_enabled__333__severity), this->__Vfunc_uvm_report_enabled__333__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__337__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__337__context_name = ""s;
        __Vtask_uvm_report_warning__337__line = 0x00000654U;
        this->__Vtask_uvm_report_warning__337__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__337__verbosity = 0U;
        this->__Vtask_uvm_report_warning__337__message = "RegModel field cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__337__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__338__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__338__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__339__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__339__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__337__id, this->__Vtask_uvm_report_warning__337__message, __Vtask_uvm_report_warning__337__verbosity, this->__Vtask_uvm_report_warning__337__filename, __Vtask_uvm_report_warning__337__line, this->__Vtask_uvm_report_warning__337__context_name, (IData)(__Vtask_uvm_report_warning__337__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[21577]);
    } else {
        ++(vlSymsp->__Vcoverage[21578]);
    }
    ++(vlSymsp->__Vcoverage[21579]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    this->__VnoInFunc_pre_randomize(vlSymsp);
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
    this->__VnoInFunc_post_randomize(vlSymsp);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    __Vtemp_1 = (Vtb_rng_uvm_pkg__03a__03auvm_void::__Vrandmode.at(0U)
                  ? "value"s : VL_SFORMATF_N_NX("#x%x",0,
                                                64,
                                                this->__PVT__value) );
    __Vtemp_2 = VL_SFORMATF_N_NX("#x%x",0,64,VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size)) ;
    __Vtemp_3 = VL_SFORMATF_N_NX("#b%b",0,1,(0x00000040U 
                                             > this->__PVT__m_size)) ;
    __Vtemp_4 = VL_SFORMATF_N_NX("(__Vbv (bvult %@ %@))",0,
                                 -1,&(__Vtemp_1),-1,
                                 &(__Vtemp_2)) ;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool %@)))",0,
                                                                               -1,
                                                                               &(__Vtemp_3),
                                                                               -1,
                                                                               &(__Vtemp_4)) , "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 0x0000003fU, 
                                                              "      if (64 > m_size) {");
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_reg_field_valid_setup_constraint(vlSymsp);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__value = 0;
    __PVT__m_mirrored = 0;
    __PVT__m_desired = 0;
    __PVT__m_lsb = 0;
    __PVT__m_size = 0;
    __PVT__m_volatile = 0;
    __PVT__m_reset.atDefault() = 0;
    __PVT__m_written = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_lineno = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_individually_accessible = 0;
    __PVT__m_check = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_field::~Vtb_rng_uvm_pkg__03a__03auvm_reg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_field::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_field::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_field::to_string_middle\n"); );
    // Body
    std::string out;
    out += "value:" + VL_TO_STRING(__PVT__value);
    out += ", m_mirrored:" + VL_TO_STRING(__PVT__m_mirrored);
    out += ", m_desired:" + VL_TO_STRING(__PVT__m_desired);
    out += ", m_access:" + VL_TO_STRING(__PVT__m_access);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_lsb:" + VL_TO_STRING(__PVT__m_lsb);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_volatile:" + VL_TO_STRING(__PVT__m_volatile);
    out += ", m_reset:" + VL_TO_STRING(__PVT__m_reset);
    out += ", m_written:" + VL_TO_STRING(__PVT__m_written);
    out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
    out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
    out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
    out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
    out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
    out += ", m_individually_accessible:" + VL_TO_STRING(__PVT__m_individually_accessible);
    out += ", m_check:" + VL_TO_STRING(__PVT__m_check);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
