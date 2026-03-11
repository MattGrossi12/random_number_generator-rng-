// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22652]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22653]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22654]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22655]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__6__verbosity;
    __Vtask_uvm_report_error__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__6__line;
    __Vtask_uvm_report_error__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__6__report_enabled_checked;
    __Vtask_uvm_report_error__6__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__verbosity;
    __Vfunc_uvm_report_enabled__10__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__10__severity;
    __Vfunc_uvm_report_enabled__10__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__15__verbosity;
    __Vtask_uvm_report_error__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__15__line;
    __Vtask_uvm_report_error__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__15__report_enabled_checked;
    __Vtask_uvm_report_error__15__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    if ((0U == n_bits)) {
        this->__Vfunc_uvm_report_enabled__1__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__1__severity = 2U;
        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__6__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0x000001a9U;
            this->__Vtask_uvm_report_error__6__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_error__6__verbosity = 0U;
            this->__Vtask_uvm_report_error__6__message 
                = VL_SFORMATF_N_NX("Virtual register \"%@\" cannot have 0 bits",0,
                                   -1,&(__VlefCall_1__get_full_name)) ;
            this->__Vtask_uvm_report_error__6__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__6__id, this->__Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, this->__Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, this->__Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[22656]);
        } else {
            ++(vlSymsp->__Vcoverage[22657]);
        }
        n_bits = 1U;
        ++(vlSymsp->__Vcoverage[22658]);
    } else {
        ++(vlSymsp->__Vcoverage[22659]);
    }
    if ((0x00000040U < n_bits)) {
        this->__Vfunc_uvm_report_enabled__10__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__10__severity = 2U;
        __Vfunc_uvm_report_enabled__10__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__10__verbosity, (IData)(__Vfunc_uvm_report_enabled__10__severity), this->__Vfunc_uvm_report_enabled__10__id, __VlefCall_2__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_error__15__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__15__context_name = ""s;
            __Vtask_uvm_report_error__15__line = 0x000001adU;
            this->__Vtask_uvm_report_error__15__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_error__15__verbosity = 0U;
            this->__Vtask_uvm_report_error__15__message 
                = VL_SFORMATF_N_NX("Virtual register \"%@\" cannot have more than 64 bits (%0#)",0,
                                   -1,&(__VlefCall_3__get_full_name),
                                   32,n_bits) ;
            this->__Vtask_uvm_report_error__15__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__15__id, this->__Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, this->__Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, this->__Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[22660]);
        } else {
            ++(vlSymsp->__Vcoverage[22661]);
        }
        n_bits = 0x00000040U;
        ++(vlSymsp->__Vcoverage[22662]);
    } else {
        ++(vlSymsp->__Vcoverage[22663]);
    }
    this->__PVT__n_bits = n_bits;
    this->__PVT__locked = 0U;
    ++(vlSymsp->__Vcoverage[22664]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_configure\n"); );
    // Locals
    CData/*0:0*/ __Vtask_implement__19__Vfuncout;
    __Vtask_implement__19__Vfuncout = 0;
    // Body
    this->__PVT__parent = parent;
    this->__PVT__n_used_bits = 0U;
    if ((VlNull{} != mem)) {
        this->__VnoInFunc_implement(vlSymsp, size, mem, offset, incr, __Vtask_implement__19__Vfuncout);
        this->__PVT__is_static = 1U;
        ++(vlSymsp->__Vcoverage[22665]);
    } else {
        this->__PVT__mem = VlNull{};
        this->__PVT__is_static = 0U;
        ++(vlSymsp->__Vcoverage[22666]);
    }
    VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 454)->__VnoInFunc_add_vreg(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this});
    this->__PVT__atomic = VL_NEW(Vtb_rng_std__03a__03asemaphore, vlSymsp, 1U);
    ++(vlSymsp->__Vcoverage[22667]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_Xlock_modelX(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    {
        if (this->__PVT__locked) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22669]);
        }
        this->__PVT__locked = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22670]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_add_field(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_add_field\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__26__verbosity;
    __Vtask_uvm_report_error__26__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__26__line;
    __Vtask_uvm_report_error__26__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__26__report_enabled_checked;
    __Vtask_uvm_report_error__26__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__35__Vfuncout;
    __Vtask_get_lsb_pos_in_register__35__Vfuncout = 0;
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__56__verbosity;
    __Vtask_uvm_report_error__56__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__56__line;
    __Vtask_uvm_report_error__56__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__56__report_enabled_checked;
    __Vtask_uvm_report_error__56__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62__verbosity;
    __Vfunc_uvm_report_enabled__62__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__62__severity;
    __Vfunc_uvm_report_enabled__62__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__63__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__64__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__69__verbosity;
    __Vtask_uvm_report_error__69__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__69__line;
    __Vtask_uvm_report_error__69__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__69__report_enabled_checked;
    __Vtask_uvm_report_error__69__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__70__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__71__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_17__get_full_name;
    std::string __VlefCall_16__get_name;
    std::string __VlefCall_15__get_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_13__get_lsb_pos_in_register;
    IData/*31:0*/ __VlefCall_12__get_n_bits;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_name;
    std::string __VlefCall_9__get_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    IData/*31:0*/ __VlefCall_6__get_lsb_pos_in_register;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_n_bits;
    IData/*31:0*/ __VlefCall_2__get_lsb_pos_in_register;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk393__DOT__i;
    unnamedblk393__DOT__i = 0;
    IData/*31:0*/ unnamedblk393__DOT__unnamedblk394__DOT__j;
    IData/*31:0*/ offset;
    IData/*31:0*/ idx;
    {
        offset = 0U;
        idx = 0U;
        if (this->__PVT__locked) {
            this->__Vfunc_uvm_report_enabled__22__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__22__severity = 2U;
            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), this->__Vfunc_uvm_report_enabled__22__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__26__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__26__context_name = ""s;
                __Vtask_uvm_report_error__26__line = 0x000001d9U;
                this->__Vtask_uvm_report_error__26__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__26__verbosity = 0U;
                this->__Vtask_uvm_report_error__26__message = "Cannot add virtual field to locked virtual register model"s;
                this->__Vtask_uvm_report_error__26__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__27__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__28__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__26__id, this->__Vtask_uvm_report_error__26__message, __Vtask_uvm_report_error__26__verbosity, this->__Vtask_uvm_report_error__26__filename, __Vtask_uvm_report_error__26__line, this->__Vtask_uvm_report_error__26__context_name, (IData)(__Vtask_uvm_report_error__26__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22671]);
            } else {
                ++(vlSymsp->__Vcoverage[22672]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22674]);
        }
        if ((VlNull{} == field)) {
            this->__Vfunc_uvm_report_enabled__30__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__30__severity = 3U;
            __Vfunc_uvm_report_enabled__30__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__31__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__32__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), this->__Vfunc_uvm_report_enabled__30__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Attempting to register NULL virtual field"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s, 0x000001ddU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[22675]);
            } else {
                ++(vlSymsp->__Vcoverage[22676]);
            }
            ++(vlSymsp->__Vcoverage[22677]);
        } else {
            ++(vlSymsp->__Vcoverage[22678]);
        }
        VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 480)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__35__Vfuncout);
        offset = __Vtask_get_lsb_pos_in_register__35__Vfuncout;
        idx = 0xffffffffU;
        {
            unnamedblk393__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk393__DOT__i, this->__PVT__fields.size())) {
                VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk393__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 484)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_2__get_lsb_pos_in_register);
                if ((offset < __VlefCall_2__get_lsb_pos_in_register)) {
                    unnamedblk393__DOT__unnamedblk394__DOT__j 
                        = unnamedblk393__DOT__i;
                    this->__PVT__fields.insert(unnamedblk393__DOT__unnamedblk394__DOT__j, field);
                    idx = unnamedblk393__DOT__i;
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[22680]);
                }
                unnamedblk393__DOT__i = ((IData)(1U) 
                                         + unnamedblk393__DOT__i);
                ++(vlSymsp->__Vcoverage[22681]);
            }
            __Vlabel1: ;
        }
        if (VL_GTS_III(32, 0U, idx)) {
            this->__PVT__fields.push_back(field);
            idx = (this->__PVT__fields.size() - (IData)(1U));
            ++(vlSymsp->__Vcoverage[22682]);
        } else {
            ++(vlSymsp->__Vcoverage[22683]);
        }
        VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 496)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
        this->__PVT__n_used_bits = (this->__PVT__n_used_bits 
                                    + __VlefCall_3__get_n_bits);
        if ((this->__PVT__n_used_bits > this->__PVT__n_bits)) {
            this->__Vfunc_uvm_report_enabled__38__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__38__severity = 2U;
            __Vfunc_uvm_report_enabled__38__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__39__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__40__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__38__verbosity, (IData)(__Vfunc_uvm_report_enabled__38__severity), this->__Vfunc_uvm_report_enabled__38__id, __VlefCall_4__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__43__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__43__context_name = ""s;
                __Vtask_uvm_report_error__43__line = 0x000001f5U;
                this->__Vtask_uvm_report_error__43__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__43__verbosity = 0U;
                this->__Vtask_uvm_report_error__43__message 
                    = VL_SFORMATF_N_NX("Virtual fields use more bits (%0#) than available in virtual register \"%@\" (%0#)",0,
                                       32,this->__PVT__n_used_bits,
                                       -1,&(__VlefCall_5__get_full_name),
                                       32,this->__PVT__n_bits) ;
                this->__Vtask_uvm_report_error__43__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__44__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__45__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__43__id, this->__Vtask_uvm_report_error__43__message, __Vtask_uvm_report_error__43__verbosity, this->__Vtask_uvm_report_error__43__filename, __Vtask_uvm_report_error__43__line, this->__Vtask_uvm_report_error__43__context_name, (IData)(__Vtask_uvm_report_error__43__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22684]);
            } else {
                ++(vlSymsp->__Vcoverage[22685]);
            }
            ++(vlSymsp->__Vcoverage[22686]);
        } else {
            ++(vlSymsp->__Vcoverage[22687]);
        }
        if (VL_LTS_III(32, 0U, idx)) {
            VL_NULL_CHECK(this->__PVT__fields.at((idx 
                                                  - (IData)(1U))), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 506)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_6__get_lsb_pos_in_register);
            VL_NULL_CHECK(this->__PVT__fields.at((idx 
                                                  - (IData)(1U))), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 507)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
            if (((__VlefCall_6__get_lsb_pos_in_register 
                  + __VlefCall_7__get_n_bits) > offset)) {
                this->__Vfunc_uvm_report_enabled__49__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__49__severity = 2U;
                __Vfunc_uvm_report_enabled__49__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__50__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__51__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), this->__Vfunc_uvm_report_enabled__49__id, __VlefCall_8__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_8__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__fields.at(
                                                         (idx 
                                                          - (IData)(1U))), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 511)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                    VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 511)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    __Vtask_uvm_report_error__56__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__56__context_name = ""s;
                    __Vtask_uvm_report_error__56__line = 0x000001ffU;
                    this->__Vtask_uvm_report_error__56__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                    __Vtask_uvm_report_error__56__verbosity = 0U;
                    this->__Vtask_uvm_report_error__56__message 
                        = VL_SFORMATF_N_NX("Field %@ overlaps field %@ in virtual register \"%@\"",0,
                                           -1,&(__VlefCall_9__get_name),
                                           -1,&(__VlefCall_10__get_name),
                                           -1,&(__VlefCall_11__get_full_name)) ;
                    this->__Vtask_uvm_report_error__56__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__57__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__58__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__56__id, this->__Vtask_uvm_report_error__56__message, __Vtask_uvm_report_error__56__verbosity, this->__Vtask_uvm_report_error__56__filename, __Vtask_uvm_report_error__56__line, this->__Vtask_uvm_report_error__56__context_name, (IData)(__Vtask_uvm_report_error__56__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[22688]);
                } else {
                    ++(vlSymsp->__Vcoverage[22689]);
                }
                ++(vlSymsp->__Vcoverage[22690]);
            } else {
                ++(vlSymsp->__Vcoverage[22691]);
            }
            ++(vlSymsp->__Vcoverage[22692]);
        } else {
            ++(vlSymsp->__Vcoverage[22693]);
        }
        if (VL_LTS_III(32, idx, (this->__PVT__fields.size() 
                                 - (IData)(1U)))) {
            VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 515)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
            VL_NULL_CHECK(this->__PVT__fields.at(((IData)(1U) 
                                                  + idx)), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 516)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_13__get_lsb_pos_in_register);
            if (((offset + __VlefCall_12__get_n_bits) 
                 > __VlefCall_13__get_lsb_pos_in_register)) {
                this->__Vfunc_uvm_report_enabled__62__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__62__severity = 2U;
                __Vfunc_uvm_report_enabled__62__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__63__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__64__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__64__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__62__verbosity, (IData)(__Vfunc_uvm_report_enabled__62__severity), this->__Vfunc_uvm_report_enabled__62__id, __VlefCall_14__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_14__uvm_report_enabled)) {
                    VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 520)->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                    VL_NULL_CHECK(this->__PVT__fields.at(
                                                         ((IData)(1U) 
                                                          + idx)), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 520)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    __Vtask_uvm_report_error__69__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__69__context_name = ""s;
                    __Vtask_uvm_report_error__69__line = 0x00000208U;
                    this->__Vtask_uvm_report_error__69__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                    __Vtask_uvm_report_error__69__verbosity = 0U;
                    this->__Vtask_uvm_report_error__69__message 
                        = VL_SFORMATF_N_NX("Field %@ overlaps field %@ in virtual register \"%@\"",0,
                                           -1,&(__VlefCall_15__get_name),
                                           -1,&(__VlefCall_16__get_name),
                                           -1,&(__VlefCall_17__get_full_name)) ;
                    this->__Vtask_uvm_report_error__69__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__70__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__70__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__71__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__71__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__69__id, this->__Vtask_uvm_report_error__69__message, __Vtask_uvm_report_error__69__verbosity, this->__Vtask_uvm_report_error__69__filename, __Vtask_uvm_report_error__69__line, this->__Vtask_uvm_report_error__69__context_name, (IData)(__Vtask_uvm_report_error__69__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[22694]);
                } else {
                    ++(vlSymsp->__Vcoverage[22695]);
                }
                ++(vlSymsp->__Vcoverage[22696]);
            } else {
                ++(vlSymsp->__Vcoverage[22697]);
            }
            ++(vlSymsp->__Vcoverage[22698]);
        } else {
            ++(vlSymsp->__Vcoverage[22699]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22700]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__74__Vfuncout;
    __Vtask_try_get__74__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if (on) {
        co_await VL_NULL_CHECK(this->__PVT__atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 527)->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
        ++(vlSymsp->__Vcoverage[22701]);
    } else {
        VL_NULL_CHECK(this->__PVT__atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 530)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__74__Vfuncout);
        VL_NULL_CHECK(this->__PVT__atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 531)->__VnoInFunc_put(vlSymsp, 1U);
        ++(vlSymsp->__Vcoverage[22702]);
    }
    ++(vlSymsp->__Vcoverage[22703]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_reset\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__76__Vfuncout;
    __Vtask_try_get__76__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 539)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__76__Vfuncout);
    VL_NULL_CHECK(this->__PVT__atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 540)->__VnoInFunc_put(vlSymsp, 1U);
    ++(vlSymsp->__Vcoverage[22704]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name\n"); );
    // Body
    std::string __VlefCall_1__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __VlefCall_0__get_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk;
    {
        get_full_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
        this->__VnoInFunc_get_block(vlSymsp, blk);
        if ((VlNull{} == blk)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22706]);
        }
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 552)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_0__get_parent);
        if ((VlNull{} == __VlefCall_0__get_parent)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22708]);
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 554)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22709]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_set_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__parent = parent;
    ++(vlSymsp->__Vcoverage[22710]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
    ++(vlSymsp->__Vcoverage[22711]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__parent;
    ++(vlSymsp->__Vcoverage[22712]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_implement(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_implement\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
    __Vfunc_uvm_report_enabled__82__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
    __Vfunc_uvm_report_enabled__82__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__87__verbosity;
    __Vtask_uvm_report_error__87__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__87__line;
    __Vtask_uvm_report_error__87__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__87__report_enabled_checked;
    __Vtask_uvm_report_error__87__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__88__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__89__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__91__verbosity;
    __Vfunc_uvm_report_enabled__91__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__91__severity;
    __Vfunc_uvm_report_enabled__91__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__96__verbosity;
    __Vtask_uvm_report_error__96__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__96__line;
    __Vtask_uvm_report_error__96__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__96__report_enabled_checked;
    __Vtask_uvm_report_error__96__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__97__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__98__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__100__verbosity;
    __Vfunc_uvm_report_enabled__100__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__100__severity;
    __Vfunc_uvm_report_enabled__100__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__105__verbosity;
    __Vtask_uvm_report_error__105__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__105__line;
    __Vtask_uvm_report_error__105__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__105__report_enabled_checked;
    __Vtask_uvm_report_error__105__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__110__verbosity;
    __Vfunc_uvm_report_enabled__110__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__110__severity;
    __Vfunc_uvm_report_enabled__110__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__111__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__112__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__116__verbosity;
    __Vtask_uvm_report_error__116__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__116__line;
    __Vtask_uvm_report_error__116__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__116__report_enabled_checked;
    __Vtask_uvm_report_error__116__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__122__verbosity;
    __Vfunc_uvm_report_enabled__122__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__122__severity;
    __Vfunc_uvm_report_enabled__122__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__123__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__124__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__128__verbosity;
    __Vtask_uvm_report_error__128__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__128__line;
    __Vtask_uvm_report_error__128__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__128__report_enabled_checked;
    __Vtask_uvm_report_error__128__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__133__verbosity;
    __Vfunc_uvm_report_enabled__133__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__133__severity;
    __Vfunc_uvm_report_enabled__133__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__134__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__135__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__139__verbosity;
    __Vtask_uvm_report_error__139__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__139__line;
    __Vtask_uvm_report_error__139__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__139__report_enabled_checked;
    __Vtask_uvm_report_error__139__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__140__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__141__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__145__verbosity;
    __Vfunc_uvm_report_enabled__145__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__145__severity;
    __Vfunc_uvm_report_enabled__145__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__146__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__147__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__150__verbosity;
    __Vtask_uvm_report_error__150__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__150__line;
    __Vtask_uvm_report_error__150__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__150__report_enabled_checked;
    __Vtask_uvm_report_error__150__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__151__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__152__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__154__verbosity;
    __Vfunc_uvm_report_enabled__154__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__154__severity;
    __Vfunc_uvm_report_enabled__154__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__155__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__156__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__161__verbosity;
    __Vtask_uvm_report_info__161__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__161__line;
    __Vtask_uvm_report_info__161__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__161__report_enabled_checked;
    __Vtask_uvm_report_info__161__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__162__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__163__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_25__get_full_name;
    std::string __VlefCall_24__get_full_name;
    std::string __VlefCall_23__get_full_name;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    std::string __VlefCall_21__get_full_name;
    IData/*31:0*/ __VlefCall_20__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_19__get_n_bytes;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_15__get_size;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    IData/*31:0*/ __VlefCall_10__get_n_bytes;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __VlefCall_6__get_block;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk395__DOT__min_incr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> region;
    {
        implement__Vfuncrtn = 0U;
        if ((1ULL > n)) {
            this->__Vfunc_uvm_report_enabled__82__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__82__severity = 2U;
            __Vfunc_uvm_report_enabled__82__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__83__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__84__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), this->__Vfunc_uvm_report_enabled__82__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__87__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__87__context_name = ""s;
                __Vtask_uvm_report_error__87__line = 0x00000243U;
                this->__Vtask_uvm_report_error__87__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__87__verbosity = 0U;
                this->__Vtask_uvm_report_error__87__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" with a subscript less than one doesn't make sense",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__87__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__88__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__88__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__89__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__89__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__87__id, this->__Vtask_uvm_report_error__87__message, __Vtask_uvm_report_error__87__verbosity, this->__Vtask_uvm_report_error__87__filename, __Vtask_uvm_report_error__87__line, this->__Vtask_uvm_report_error__87__context_name, (IData)(__Vtask_uvm_report_error__87__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22713]);
            } else {
                ++(vlSymsp->__Vcoverage[22714]);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22716]);
        }
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__91__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__91__severity = 2U;
            __Vfunc_uvm_report_enabled__91__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__91__verbosity, (IData)(__Vfunc_uvm_report_enabled__91__severity), this->__Vfunc_uvm_report_enabled__91__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__96__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__96__context_name = ""s;
                __Vtask_uvm_report_error__96__line = 0x00000248U;
                this->__Vtask_uvm_report_error__96__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__96__verbosity = 0U;
                this->__Vtask_uvm_report_error__96__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" using a NULL uvm_mem reference",0,
                                       -1,&(__VlefCall_3__get_full_name)) ;
                this->__Vtask_uvm_report_error__96__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__97__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__97__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__98__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__98__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__96__id, this->__Vtask_uvm_report_error__96__message, __Vtask_uvm_report_error__96__verbosity, this->__Vtask_uvm_report_error__96__filename, __Vtask_uvm_report_error__96__line, this->__Vtask_uvm_report_error__96__context_name, (IData)(__Vtask_uvm_report_error__96__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22717]);
            } else {
                ++(vlSymsp->__Vcoverage[22718]);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22720]);
        }
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__100__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__100__severity = 2U;
            __Vfunc_uvm_report_enabled__100__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__101__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__102__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__100__verbosity, (IData)(__Vfunc_uvm_report_enabled__100__severity), this->__Vfunc_uvm_report_enabled__100__id, __VlefCall_4__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__105__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__105__context_name = ""s;
                __Vtask_uvm_report_error__105__line = 0x0000024dU;
                this->__Vtask_uvm_report_error__105__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__105__verbosity = 0U;
                this->__Vtask_uvm_report_error__105__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is static and cannot be dynamically implemented",0,
                                       -1,&(__VlefCall_5__get_full_name)) ;
                this->__Vtask_uvm_report_error__105__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__106__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__107__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__105__id, this->__Vtask_uvm_report_error__105__message, __Vtask_uvm_report_error__105__verbosity, this->__Vtask_uvm_report_error__105__filename, __Vtask_uvm_report_error__105__line, this->__Vtask_uvm_report_error__105__context_name, (IData)(__Vtask_uvm_report_error__105__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22721]);
            } else {
                ++(vlSymsp->__Vcoverage[22722]);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22724]);
        }
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 593)->__VnoInFunc_get_block(vlSymsp, __VlefCall_6__get_block);
        if ((__VlefCall_6__get_block != this->__PVT__parent)) {
            this->__Vfunc_uvm_report_enabled__110__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__110__severity = 2U;
            __Vfunc_uvm_report_enabled__110__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__111__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__111__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__112__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__112__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__110__verbosity, (IData)(__Vfunc_uvm_report_enabled__110__severity), this->__Vfunc_uvm_report_enabled__110__id, __VlefCall_7__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 596)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_error__116__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__116__context_name = ""s;
                __Vtask_uvm_report_error__116__line = 0x00000254U;
                this->__Vtask_uvm_report_error__116__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__116__verbosity = 0U;
                this->__Vtask_uvm_report_error__116__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" on memory \"%@\" in a different block",0,
                                       -1,&(__VlefCall_8__get_full_name),
                                       -1,&(__VlefCall_9__get_full_name)) ;
                this->__Vtask_uvm_report_error__116__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__117__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__118__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__116__id, this->__Vtask_uvm_report_error__116__message, __Vtask_uvm_report_error__116__verbosity, this->__Vtask_uvm_report_error__116__filename, __Vtask_uvm_report_error__116__line, this->__Vtask_uvm_report_error__116__context_name, (IData)(__Vtask_uvm_report_error__116__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22725]);
            } else {
                ++(vlSymsp->__Vcoverage[22726]);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22728]);
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 601)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
        unnamedblk395__DOT__min_incr = ((IData)(1U) 
                                        + VL_DIV_III(32, 
                                                     (__VlefCall_10__get_n_bytes 
                                                      - (IData)(1U)), __VlefCall_11__get_n_bytes));
        if ((0U == incr)) {
            incr = unnamedblk395__DOT__min_incr;
            ++(vlSymsp->__Vcoverage[22729]);
        } else {
            ++(vlSymsp->__Vcoverage[22730]);
        }
        if ((unnamedblk395__DOT__min_incr > incr)) {
            this->__Vfunc_uvm_report_enabled__122__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__122__severity = 2U;
            __Vfunc_uvm_report_enabled__122__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__123__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__123__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__124__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__124__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__122__verbosity, (IData)(__Vfunc_uvm_report_enabled__122__severity), this->__Vfunc_uvm_report_enabled__122__id, __VlefCall_12__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_12__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 606)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                __Vtask_uvm_report_error__128__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__128__context_name = ""s;
                __Vtask_uvm_report_error__128__line = 0x0000025eU;
                this->__Vtask_uvm_report_error__128__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__128__verbosity = 0U;
                this->__Vtask_uvm_report_error__128__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" increment is too small (%0#): Each virtual register requires at least %0d locations in memory \"%@\".",0,
                                       -1,&(__VlefCall_13__get_full_name),
                                       32,incr,32,unnamedblk395__DOT__min_incr,
                                       -1,&(__VlefCall_14__get_full_name)) ;
                this->__Vtask_uvm_report_error__128__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__129__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__129__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__130__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__128__id, this->__Vtask_uvm_report_error__128__message, __Vtask_uvm_report_error__128__verbosity, this->__Vtask_uvm_report_error__128__filename, __Vtask_uvm_report_error__128__line, this->__Vtask_uvm_report_error__128__context_name, (IData)(__Vtask_uvm_report_error__128__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22731]);
            } else {
                ++(vlSymsp->__Vcoverage[22732]);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22734]);
        }
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 612)->__VnoInFunc_get_size(vlSymsp, __VlefCall_15__get_size);
        if (((offset + (n * (QData)((IData)(incr)))) 
             > __VlefCall_15__get_size)) {
            this->__Vfunc_uvm_report_enabled__133__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__133__severity = 2U;
            __Vfunc_uvm_report_enabled__133__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__134__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__134__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__135__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__135__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__133__verbosity, (IData)(__Vfunc_uvm_report_enabled__133__severity), this->__Vfunc_uvm_report_enabled__133__id, __VlefCall_16__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_16__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 613)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                __Vtask_uvm_report_error__139__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__139__context_name = ""s;
                __Vtask_uvm_report_error__139__line = 0x00000265U;
                this->__Vtask_uvm_report_error__139__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__139__verbosity = 0U;
                this->__Vtask_uvm_report_error__139__message 
                    = VL_SFORMATF_N_NX("Given Offset for Virtual register \"%@[%0#]\" is too big for memory %@@'h%0x",0,
                                       -1,&(__VlefCall_17__get_full_name),
                                       64,n,-1,&(__VlefCall_18__get_full_name),
                                       64,offset) ;
                this->__Vtask_uvm_report_error__139__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__140__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__140__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__141__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__141__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__139__id, this->__Vtask_uvm_report_error__139__message, __Vtask_uvm_report_error__139__verbosity, this->__Vtask_uvm_report_error__139__filename, __Vtask_uvm_report_error__139__line, this->__Vtask_uvm_report_error__139__context_name, (IData)(__Vtask_uvm_report_error__139__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22735]);
            } else {
                ++(vlSymsp->__Vcoverage[22736]);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22738]);
        }
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 617)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_19__get_n_bytes);
        VL_NULL_CHECK(VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 617)
                      ->__PVT__mam, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 617)->__VnoInFunc_reserve_region(vlSymsp, offset, (IData)(
                                                                                ((n 
                                                                                * (QData)((IData)(incr))) 
                                                                                * (QData)((IData)(__VlefCall_19__get_n_bytes)))), ""s, 0U, region);
        if ((VlNull{} == region)) {
            this->__Vfunc_uvm_report_enabled__145__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__145__severity = 2U;
            __Vfunc_uvm_report_enabled__145__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__146__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__146__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__147__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__147__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__145__verbosity, (IData)(__Vfunc_uvm_report_enabled__145__severity), this->__Vfunc_uvm_report_enabled__145__id, __VlefCall_20__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_20__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                __Vtask_uvm_report_error__150__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__150__context_name = ""s;
                __Vtask_uvm_report_error__150__line = 0x0000026cU;
                this->__Vtask_uvm_report_error__150__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__150__verbosity = 0U;
                this->__Vtask_uvm_report_error__150__message 
                    = VL_SFORMATF_N_NX("Could not allocate a memory region for virtual register \"%@\"",0,
                                       -1,&(__VlefCall_21__get_full_name)) ;
                this->__Vtask_uvm_report_error__150__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__151__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__151__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__152__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__152__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__150__id, this->__Vtask_uvm_report_error__150__message, __Vtask_uvm_report_error__150__verbosity, this->__Vtask_uvm_report_error__150__filename, __Vtask_uvm_report_error__150__line, this->__Vtask_uvm_report_error__150__context_name, (IData)(__Vtask_uvm_report_error__150__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22739]);
            } else {
                ++(vlSymsp->__Vcoverage[22740]);
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22742]);
        }
        if ((VlNull{} != this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__154__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__154__severity = 0U;
            __Vfunc_uvm_report_enabled__154__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__155__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__155__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__156__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__156__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__154__verbosity, (IData)(__Vfunc_uvm_report_enabled__154__severity), this->__Vfunc_uvm_report_enabled__154__id, __VlefCall_22__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_22__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 629)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 629)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_25__get_full_name);
                __Vtask_uvm_report_info__161__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__161__context_name = ""s;
                __Vtask_uvm_report_info__161__line = 0x00000275U;
                this->__Vtask_uvm_report_info__161__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_info__161__verbosity = 0x000000c8U;
                this->__Vtask_uvm_report_info__161__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is being moved re-implemented from %@@'h%0x to %@@'h%0x",0,
                                       -1,&(__VlefCall_23__get_full_name),
                                       -1,&(__VlefCall_24__get_full_name),
                                       64,this->__PVT__offset,
                                       -1,&(__VlefCall_25__get_full_name),
                                       64,offset) ;
                this->__Vtask_uvm_report_info__161__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__162__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__162__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__163__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__163__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__161__id, this->__Vtask_uvm_report_info__161__message, __Vtask_uvm_report_info__161__verbosity, this->__Vtask_uvm_report_info__161__filename, __Vtask_uvm_report_info__161__line, this->__Vtask_uvm_report_info__161__context_name, (IData)(__Vtask_uvm_report_info__161__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[22743]);
            } else {
                ++(vlSymsp->__Vcoverage[22744]);
            }
            this->__VnoInFunc_release_region(vlSymsp);
            ++(vlSymsp->__Vcoverage[22745]);
        } else {
            ++(vlSymsp->__Vcoverage[22746]);
        }
        this->__PVT__region = region;
        this->__PVT__mem = mem;
        this->__PVT__size = n;
        this->__PVT__offset = offset;
        this->__PVT__incr = incr;
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 638)->__VnoInFunc_Xadd_vregX(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this});
        implement__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22747]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_allocate(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_allocate\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__167__verbosity;
    __Vfunc_uvm_report_enabled__167__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__167__severity;
    __Vfunc_uvm_report_enabled__167__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__168__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__169__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__172__verbosity;
    __Vtask_uvm_report_error__172__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__172__line;
    __Vtask_uvm_report_error__172__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__172__report_enabled_checked;
    __Vtask_uvm_report_error__172__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__173__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__174__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__176__verbosity;
    __Vfunc_uvm_report_enabled__176__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__176__severity;
    __Vfunc_uvm_report_enabled__176__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__177__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__178__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__181__verbosity;
    __Vtask_uvm_report_error__181__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__181__line;
    __Vtask_uvm_report_error__181__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__181__report_enabled_checked;
    __Vtask_uvm_report_error__181__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__182__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__183__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__185__verbosity;
    __Vfunc_uvm_report_enabled__185__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__185__severity;
    __Vfunc_uvm_report_enabled__185__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__186__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__187__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__190__verbosity;
    __Vtask_uvm_report_error__190__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__190__line;
    __Vtask_uvm_report_error__190__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__190__report_enabled_checked;
    __Vtask_uvm_report_error__190__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__191__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__192__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__196__verbosity;
    __Vfunc_uvm_report_enabled__196__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__196__severity;
    __Vfunc_uvm_report_enabled__196__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__197__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__198__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__202__verbosity;
    __Vtask_uvm_report_error__202__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__202__line;
    __Vtask_uvm_report_error__202__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__202__report_enabled_checked;
    __Vtask_uvm_report_error__202__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__203__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__204__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__208__verbosity;
    __Vfunc_uvm_report_enabled__208__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__208__severity;
    __Vfunc_uvm_report_enabled__208__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__209__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__210__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__214__verbosity;
    __Vtask_uvm_report_error__214__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__214__line;
    __Vtask_uvm_report_error__214__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__214__report_enabled_checked;
    __Vtask_uvm_report_error__214__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__215__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__216__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__220__verbosity;
    __Vfunc_uvm_report_enabled__220__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__220__severity;
    __Vfunc_uvm_report_enabled__220__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__221__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__222__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__225__verbosity;
    __Vtask_uvm_report_error__225__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__225__line;
    __Vtask_uvm_report_error__225__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__225__report_enabled_checked;
    __Vtask_uvm_report_error__225__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__226__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__227__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__229__verbosity;
    __Vfunc_uvm_report_enabled__229__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__229__severity;
    __Vfunc_uvm_report_enabled__229__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__230__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__231__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__237__verbosity;
    __Vtask_uvm_report_info__237__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__237__line;
    __Vtask_uvm_report_info__237__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__237__report_enabled_checked;
    __Vtask_uvm_report_info__237__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__238__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__239__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    QData/*63:0*/ __VlefCall_22__get_start_offset;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_full_name;
    IData/*31:0*/ __VlefCall_18__uvm_report_enabled;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_15__get_n_bytes;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    IData/*31:0*/ __VlefCall_10__get_n_bytes;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __VlefCall_6__get_block;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk396__DOT__min_incr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem;
    {
        if ((1ULL > n)) {
            this->__Vfunc_uvm_report_enabled__167__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__167__severity = 2U;
            __Vfunc_uvm_report_enabled__167__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__168__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__168__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__169__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__169__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__167__verbosity, (IData)(__Vfunc_uvm_report_enabled__167__severity), this->__Vfunc_uvm_report_enabled__167__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__172__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__172__context_name = ""s;
                __Vtask_uvm_report_error__172__line = 0x0000028cU;
                this->__Vtask_uvm_report_error__172__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__172__verbosity = 0U;
                this->__Vtask_uvm_report_error__172__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" with a subscript less than one doesn't make sense",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__172__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__173__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__173__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__174__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__174__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__172__id, this->__Vtask_uvm_report_error__172__message, __Vtask_uvm_report_error__172__verbosity, this->__Vtask_uvm_report_error__172__filename, __Vtask_uvm_report_error__172__line, this->__Vtask_uvm_report_error__172__context_name, (IData)(__Vtask_uvm_report_error__172__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22748]);
            } else {
                ++(vlSymsp->__Vcoverage[22749]);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22751]);
        }
        if ((VlNull{} == mam)) {
            this->__Vfunc_uvm_report_enabled__176__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__176__severity = 2U;
            __Vfunc_uvm_report_enabled__176__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__177__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__177__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__178__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__178__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__176__verbosity, (IData)(__Vfunc_uvm_report_enabled__176__severity), this->__Vfunc_uvm_report_enabled__176__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__181__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__181__context_name = ""s;
                __Vtask_uvm_report_error__181__line = 0x00000291U;
                this->__Vtask_uvm_report_error__181__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__181__verbosity = 0U;
                this->__Vtask_uvm_report_error__181__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" using a NULL uvm_mem_mam reference",0,
                                       -1,&(__VlefCall_3__get_full_name)) ;
                this->__Vtask_uvm_report_error__181__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__182__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__182__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__183__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__183__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__181__id, this->__Vtask_uvm_report_error__181__message, __Vtask_uvm_report_error__181__verbosity, this->__Vtask_uvm_report_error__181__filename, __Vtask_uvm_report_error__181__line, this->__Vtask_uvm_report_error__181__context_name, (IData)(__Vtask_uvm_report_error__181__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22752]);
            } else {
                ++(vlSymsp->__Vcoverage[22753]);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22755]);
        }
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__185__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__185__severity = 2U;
            __Vfunc_uvm_report_enabled__185__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__186__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__186__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__187__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__187__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__185__verbosity, (IData)(__Vfunc_uvm_report_enabled__185__severity), this->__Vfunc_uvm_report_enabled__185__id, __VlefCall_4__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__190__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__190__context_name = ""s;
                __Vtask_uvm_report_error__190__line = 0x00000296U;
                this->__Vtask_uvm_report_error__190__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__190__verbosity = 0U;
                this->__Vtask_uvm_report_error__190__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is static and cannot be dynamically allocated",0,
                                       -1,&(__VlefCall_5__get_full_name)) ;
                this->__Vtask_uvm_report_error__190__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__191__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__191__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__192__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__192__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__190__id, this->__Vtask_uvm_report_error__190__message, __Vtask_uvm_report_error__190__verbosity, this->__Vtask_uvm_report_error__190__filename, __Vtask_uvm_report_error__190__line, this->__Vtask_uvm_report_error__190__context_name, (IData)(__Vtask_uvm_report_error__190__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22756]);
            } else {
                ++(vlSymsp->__Vcoverage[22757]);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22759]);
        }
        VL_NULL_CHECK(mam, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 666)->__VnoInFunc_get_memory(vlSymsp, mem);
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 667)->__VnoInFunc_get_block(vlSymsp, __VlefCall_6__get_block);
        if ((__VlefCall_6__get_block != this->__PVT__parent)) {
            this->__Vfunc_uvm_report_enabled__196__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__196__severity = 2U;
            __Vfunc_uvm_report_enabled__196__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__197__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__197__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__198__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__198__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__196__verbosity, (IData)(__Vfunc_uvm_report_enabled__196__severity), this->__Vfunc_uvm_report_enabled__196__id, __VlefCall_7__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 670)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_error__202__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__202__context_name = ""s;
                __Vtask_uvm_report_error__202__line = 0x0000029eU;
                this->__Vtask_uvm_report_error__202__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__202__verbosity = 0U;
                this->__Vtask_uvm_report_error__202__message 
                    = VL_SFORMATF_N_NX("Attempting to allocate virtual register \"%@\" on memory \"%@\" in a different block",0,
                                       -1,&(__VlefCall_8__get_full_name),
                                       -1,&(__VlefCall_9__get_full_name)) ;
                this->__Vtask_uvm_report_error__202__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__203__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__203__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__204__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__204__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__202__id, this->__Vtask_uvm_report_error__202__message, __Vtask_uvm_report_error__202__verbosity, this->__Vtask_uvm_report_error__202__filename, __Vtask_uvm_report_error__202__line, this->__Vtask_uvm_report_error__202__context_name, (IData)(__Vtask_uvm_report_error__202__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22760]);
            } else {
                ++(vlSymsp->__Vcoverage[22761]);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22763]);
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 675)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
        unnamedblk396__DOT__min_incr = ((IData)(1U) 
                                        + VL_DIV_III(32, 
                                                     (__VlefCall_10__get_n_bytes 
                                                      - (IData)(1U)), __VlefCall_11__get_n_bytes));
        if ((0U == this->__PVT__incr)) {
            this->__PVT__incr = unnamedblk396__DOT__min_incr;
            ++(vlSymsp->__Vcoverage[22764]);
        } else {
            ++(vlSymsp->__Vcoverage[22765]);
        }
        if ((unnamedblk396__DOT__min_incr < this->__PVT__incr)) {
            this->__Vfunc_uvm_report_enabled__208__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__208__severity = 2U;
            __Vfunc_uvm_report_enabled__208__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__209__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__209__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__210__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__210__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__208__verbosity, (IData)(__Vfunc_uvm_report_enabled__208__severity), this->__Vfunc_uvm_report_enabled__208__id, __VlefCall_12__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_12__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 680)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                __Vtask_uvm_report_error__214__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__214__context_name = ""s;
                __Vtask_uvm_report_error__214__line = 0x000002a8U;
                this->__Vtask_uvm_report_error__214__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__214__verbosity = 0U;
                this->__Vtask_uvm_report_error__214__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" increment is too small (%0#): Each virtual register requires at least %0d locations in memory \"%@\".",0,
                                       -1,&(__VlefCall_13__get_full_name),
                                       32,this->__PVT__incr,
                                       32,unnamedblk396__DOT__min_incr,
                                       -1,&(__VlefCall_14__get_full_name)) ;
                this->__Vtask_uvm_report_error__214__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__215__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__215__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__216__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__216__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__214__id, this->__Vtask_uvm_report_error__214__message, __Vtask_uvm_report_error__214__verbosity, this->__Vtask_uvm_report_error__214__filename, __Vtask_uvm_report_error__214__line, this->__Vtask_uvm_report_error__214__context_name, (IData)(__Vtask_uvm_report_error__214__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22766]);
            } else {
                ++(vlSymsp->__Vcoverage[22767]);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22769]);
        }
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 686)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_15__get_n_bytes);
        VL_NULL_CHECK(mam, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 686)->__VnoInFunc_request_region(vlSymsp, (IData)(
                                                                                ((n 
                                                                                * (QData)((IData)(this->__PVT__incr))) 
                                                                                * (QData)((IData)(__VlefCall_15__get_n_bytes)))), alloc, ""s, 0U, allocate__Vfuncrtn);
        if ((VlNull{} == allocate__Vfuncrtn)) {
            this->__Vfunc_uvm_report_enabled__220__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__220__severity = 2U;
            __Vfunc_uvm_report_enabled__220__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__221__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__221__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__222__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__222__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__220__verbosity, (IData)(__Vfunc_uvm_report_enabled__220__severity), this->__Vfunc_uvm_report_enabled__220__id, __VlefCall_16__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_16__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                __Vtask_uvm_report_error__225__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__225__context_name = ""s;
                __Vtask_uvm_report_error__225__line = 0x000002b0U;
                this->__Vtask_uvm_report_error__225__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__225__verbosity = 0U;
                this->__Vtask_uvm_report_error__225__message 
                    = VL_SFORMATF_N_NX("Could not allocate a memory region for virtual register \"%@\"",0,
                                       -1,&(__VlefCall_17__get_full_name)) ;
                this->__Vtask_uvm_report_error__225__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__226__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__226__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__227__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__227__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__225__id, this->__Vtask_uvm_report_error__225__message, __Vtask_uvm_report_error__225__verbosity, this->__Vtask_uvm_report_error__225__filename, __Vtask_uvm_report_error__225__line, this->__Vtask_uvm_report_error__225__context_name, (IData)(__Vtask_uvm_report_error__225__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22770]);
            } else {
                ++(vlSymsp->__Vcoverage[22771]);
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22773]);
        }
        if ((VlNull{} != this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__229__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__229__severity = 0U;
            __Vfunc_uvm_report_enabled__229__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__230__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__230__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__231__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__231__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__229__verbosity, (IData)(__Vfunc_uvm_report_enabled__229__severity), this->__Vfunc_uvm_report_enabled__229__id, __VlefCall_18__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_18__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 698)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 698)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                VL_NULL_CHECK(allocate__Vfuncrtn, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 698)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_22__get_start_offset);
                __Vtask_uvm_report_info__237__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__237__context_name = ""s;
                __Vtask_uvm_report_info__237__line = 0x000002baU;
                this->__Vtask_uvm_report_info__237__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_info__237__verbosity = 0x000000c8U;
                this->__Vtask_uvm_report_info__237__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is being moved from %@@'h%0x to %@@'h%0x",0,
                                       -1,&(__VlefCall_19__get_full_name),
                                       -1,&(__VlefCall_20__get_full_name),
                                       64,this->__PVT__offset,
                                       -1,&(__VlefCall_21__get_full_name),
                                       64,__VlefCall_22__get_start_offset) ;
                this->__Vtask_uvm_report_info__237__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__238__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__238__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__239__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__239__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__237__id, this->__Vtask_uvm_report_info__237__message, __Vtask_uvm_report_info__237__verbosity, this->__Vtask_uvm_report_info__237__filename, __Vtask_uvm_report_info__237__line, this->__Vtask_uvm_report_info__237__context_name, (IData)(__Vtask_uvm_report_info__237__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[22774]);
            } else {
                ++(vlSymsp->__Vcoverage[22775]);
            }
            this->__VnoInFunc_release_region(vlSymsp);
            ++(vlSymsp->__Vcoverage[22776]);
        } else {
            ++(vlSymsp->__Vcoverage[22777]);
        }
        this->__PVT__region = allocate__Vfuncrtn;
        VL_NULL_CHECK(mam, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 705)->__VnoInFunc_get_memory(vlSymsp, this->__PVT__mem);
        VL_NULL_CHECK(allocate__Vfuncrtn, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 706)->__VnoInFunc_get_start_offset(vlSymsp, this->__PVT__offset);
        this->__PVT__size = n;
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 710)->__VnoInFunc_Xadd_vregX(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this});
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22778]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_region(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_region\n"); );
    // Body
    get_region__Vfuncrtn = this->__PVT__region;
    ++(vlSymsp->__Vcoverage[22779]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_release_region(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_release_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__245__verbosity;
    __Vfunc_uvm_report_enabled__245__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__245__severity;
    __Vfunc_uvm_report_enabled__245__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__246__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__247__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__250__verbosity;
    __Vtask_uvm_report_error__250__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__250__line;
    __Vtask_uvm_report_error__250__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__250__report_enabled_checked;
    __Vtask_uvm_report_error__250__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__251__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__252__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if (this->__PVT__is_static) {
            this->__Vfunc_uvm_report_enabled__245__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__245__severity = 2U;
            __Vfunc_uvm_report_enabled__245__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__246__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__246__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__247__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__247__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__245__verbosity, (IData)(__Vfunc_uvm_report_enabled__245__severity), this->__Vfunc_uvm_report_enabled__245__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__250__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__250__context_name = ""s;
                __Vtask_uvm_report_error__250__line = 0x000002d1U;
                this->__Vtask_uvm_report_error__250__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__250__verbosity = 0U;
                this->__Vtask_uvm_report_error__250__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is static and cannot be dynamically released",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__250__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__251__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__251__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__252__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__252__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__250__id, this->__Vtask_uvm_report_error__250__message, __Vtask_uvm_report_error__250__verbosity, this->__Vtask_uvm_report_error__250__filename, __Vtask_uvm_report_error__250__line, this->__Vtask_uvm_report_error__250__context_name, (IData)(__Vtask_uvm_report_error__250__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22780]);
            } else {
                ++(vlSymsp->__Vcoverage[22781]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22783]);
        }
        if ((VlNull{} != this->__PVT__mem)) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 726)->__VnoInFunc_Xdelete_vregX(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this});
            ++(vlSymsp->__Vcoverage[22784]);
        } else {
            ++(vlSymsp->__Vcoverage[22785]);
        }
        if ((VlNull{} != this->__PVT__region)) {
            VL_NULL_CHECK(this->__PVT__region, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 729)->__VnoInFunc_release_region(vlSymsp);
            ++(vlSymsp->__Vcoverage[22786]);
        } else {
            ++(vlSymsp->__Vcoverage[22787]);
        }
        this->__PVT__region = VlNull{};
        this->__PVT__mem = VlNull{};
        this->__PVT__size = 0ULL;
        this->__PVT__offset = 0ULL;
        this->__VnoInFunc_reset(vlSymsp, "HARD"s);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22788]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory\n"); );
    // Body
    get_memory__Vfuncrtn = this->__PVT__mem;
    ++(vlSymsp->__Vcoverage[22789]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__257__verbosity;
    __Vfunc_uvm_report_enabled__257__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__257__severity;
    __Vfunc_uvm_report_enabled__257__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__258__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__259__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__262__verbosity;
    __Vtask_uvm_report_error__262__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__262__line;
    __Vtask_uvm_report_error__262__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__262__report_enabled_checked;
    __Vtask_uvm_report_error__262__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__263__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__264__Vfuncout;
    // Body
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_offset_in_memory__Vfuncrtn = 0ULL;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__257__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__257__severity = 2U;
            __Vfunc_uvm_report_enabled__257__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__258__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__258__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__259__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__259__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__257__verbosity, (IData)(__Vfunc_uvm_report_enabled__257__severity), this->__Vfunc_uvm_report_enabled__257__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__262__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__262__context_name = ""s;
                __Vtask_uvm_report_error__262__line = 0x000002edU;
                this->__Vtask_uvm_report_error__262__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__262__verbosity = 0U;
                this->__Vtask_uvm_report_error__262__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_offset_in_memory() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__262__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__263__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__263__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__264__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__264__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__262__id, this->__Vtask_uvm_report_error__262__message, __Vtask_uvm_report_error__262__verbosity, this->__Vtask_uvm_report_error__262__filename, __Vtask_uvm_report_error__262__line, this->__Vtask_uvm_report_error__262__context_name, (IData)(__Vtask_uvm_report_error__262__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22790]);
            } else {
                ++(vlSymsp->__Vcoverage[22791]);
            }
            get_offset_in_memory__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22793]);
        }
        get_offset_in_memory__Vfuncrtn = (this->__PVT__offset 
                                          + (idx * (QData)((IData)(this->__PVT__incr))));
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22794]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__266__verbosity;
    __Vfunc_uvm_report_enabled__266__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__266__severity;
    __Vfunc_uvm_report_enabled__266__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__267__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__268__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__271__verbosity;
    __Vtask_uvm_report_error__271__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__271__line;
    __Vtask_uvm_report_error__271__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__271__report_enabled_checked;
    __Vtask_uvm_report_error__271__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__272__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__273__Vfuncout;
    // Body
    QData/*63:0*/ __VlefCall_2__get_offset_in_memory;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_address__Vfuncrtn = 0ULL;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__266__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__266__severity = 2U;
            __Vfunc_uvm_report_enabled__266__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__267__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__267__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__268__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__268__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__266__verbosity, (IData)(__Vfunc_uvm_report_enabled__266__severity), this->__Vfunc_uvm_report_enabled__266__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__271__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__271__context_name = ""s;
                __Vtask_uvm_report_error__271__line = 0x000002f8U;
                this->__Vtask_uvm_report_error__271__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__271__verbosity = 0U;
                this->__Vtask_uvm_report_error__271__message 
                    = VL_SFORMATF_N_NX("Cannot get address of of unimplemented virtual register \"%@\".",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__271__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__272__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__272__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__273__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__273__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__271__id, this->__Vtask_uvm_report_error__271__message, __Vtask_uvm_report_error__271__verbosity, this->__Vtask_uvm_report_error__271__filename, __Vtask_uvm_report_error__271__line, this->__Vtask_uvm_report_error__271__context_name, (IData)(__Vtask_uvm_report_error__271__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22795]);
            } else {
                ++(vlSymsp->__Vcoverage[22796]);
            }
            get_address__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22798]);
        }
        this->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_2__get_offset_in_memory);
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 764)->__VnoInFunc_get_address(vlProcess, vlSymsp, __VlefCall_2__get_offset_in_memory, map, get_address__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22799]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_size\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__277__verbosity;
    __Vfunc_uvm_report_enabled__277__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__277__severity;
    __Vfunc_uvm_report_enabled__277__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__278__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__279__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__282__verbosity;
    __Vtask_uvm_report_error__282__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__282__line;
    __Vtask_uvm_report_error__282__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__282__report_enabled_checked;
    __Vtask_uvm_report_error__282__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__283__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__284__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_size__Vfuncrtn = 0U;
        if ((0ULL == this->__PVT__size)) {
            this->__Vfunc_uvm_report_enabled__277__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__277__severity = 2U;
            __Vfunc_uvm_report_enabled__277__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__278__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__278__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__279__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__279__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__277__verbosity, (IData)(__Vfunc_uvm_report_enabled__277__severity), this->__Vfunc_uvm_report_enabled__277__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__282__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__282__context_name = ""s;
                __Vtask_uvm_report_error__282__line = 0x00000303U;
                this->__Vtask_uvm_report_error__282__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__282__verbosity = 0U;
                this->__Vtask_uvm_report_error__282__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_size() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__282__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__283__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__283__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__284__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__284__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__282__id, this->__Vtask_uvm_report_error__282__message, __Vtask_uvm_report_error__282__verbosity, this->__Vtask_uvm_report_error__282__filename, __Vtask_uvm_report_error__282__line, this->__Vtask_uvm_report_error__282__context_name, (IData)(__Vtask_uvm_report_error__282__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22800]);
            } else {
                ++(vlSymsp->__Vcoverage[22801]);
            }
            get_size__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22803]);
        }
        get_size__Vfuncrtn = (IData)(this->__PVT__size);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22804]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                         (this->__PVT__n_bits 
                                                          - (IData)(1U)), 3U));
    ++(vlSymsp->__Vcoverage[22805]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__286__verbosity;
    __Vfunc_uvm_report_enabled__286__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__286__severity;
    __Vfunc_uvm_report_enabled__286__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__287__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__288__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__291__verbosity;
    __Vtask_uvm_report_error__291__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__291__line;
    __Vtask_uvm_report_error__291__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__291__report_enabled_checked;
    __Vtask_uvm_report_error__291__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__292__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__293__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_n_memlocs__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__286__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__286__severity = 2U;
            __Vfunc_uvm_report_enabled__286__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__287__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__287__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__288__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__288__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__286__verbosity, (IData)(__Vfunc_uvm_report_enabled__286__severity), this->__Vfunc_uvm_report_enabled__286__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__291__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__291__context_name = ""s;
                __Vtask_uvm_report_error__291__line = 0x00000313U;
                this->__Vtask_uvm_report_error__291__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__291__verbosity = 0U;
                this->__Vtask_uvm_report_error__291__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_n_memlocs() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__291__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__292__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__292__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__293__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__293__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__291__id, this->__Vtask_uvm_report_error__291__message, __Vtask_uvm_report_error__291__verbosity, this->__Vtask_uvm_report_error__291__filename, __Vtask_uvm_report_error__291__line, this->__Vtask_uvm_report_error__291__context_name, (IData)(__Vtask_uvm_report_error__291__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22806]);
            } else {
                ++(vlSymsp->__Vcoverage[22807]);
            }
            get_n_memlocs__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22809]);
        }
        this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 791)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
        get_n_memlocs__Vfuncrtn = ((IData)(1U) + VL_DIV_III(32, 
                                                            (__VlefCall_2__get_n_bytes 
                                                             - (IData)(1U)), __VlefCall_3__get_n_bytes));
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22810]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_incr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_incr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__297__verbosity;
    __Vfunc_uvm_report_enabled__297__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__297__severity;
    __Vfunc_uvm_report_enabled__297__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__298__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__299__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__302__verbosity;
    __Vtask_uvm_report_error__302__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__302__line;
    __Vtask_uvm_report_error__302__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__302__report_enabled_checked;
    __Vtask_uvm_report_error__302__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__303__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__304__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_incr__Vfuncrtn = 0U;
        if ((0U == this->__PVT__incr)) {
            this->__Vfunc_uvm_report_enabled__297__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__297__severity = 2U;
            __Vfunc_uvm_report_enabled__297__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__298__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__298__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__299__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__299__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__297__verbosity, (IData)(__Vfunc_uvm_report_enabled__297__severity), this->__Vfunc_uvm_report_enabled__297__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__302__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__302__context_name = ""s;
                __Vtask_uvm_report_error__302__line = 0x0000031eU;
                this->__Vtask_uvm_report_error__302__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__302__verbosity = 0U;
                this->__Vtask_uvm_report_error__302__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_incr() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__302__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__303__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__303__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__304__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__304__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__302__id, this->__Vtask_uvm_report_error__302__message, __Vtask_uvm_report_error__302__verbosity, this->__Vtask_uvm_report_error__302__filename, __Vtask_uvm_report_error__302__line, this->__Vtask_uvm_report_error__302__context_name, (IData)(__Vtask_uvm_report_error__302__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22811]);
            } else {
                ++(vlSymsp->__Vcoverage[22812]);
            }
            get_incr__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22814]);
        }
        get_incr__Vfuncrtn = this->__PVT__incr;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22815]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306__verbosity;
    __Vfunc_uvm_report_enabled__306__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__306__severity;
    __Vfunc_uvm_report_enabled__306__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__307__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__308__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__311__verbosity;
    __Vtask_uvm_report_error__311__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__311__line;
    __Vtask_uvm_report_error__311__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__311__report_enabled_checked;
    __Vtask_uvm_report_error__311__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__312__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__313__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_n_maps__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__306__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__306__severity = 2U;
            __Vfunc_uvm_report_enabled__306__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__307__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__307__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__308__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__308__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__306__verbosity, (IData)(__Vfunc_uvm_report_enabled__306__severity), this->__Vfunc_uvm_report_enabled__306__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__311__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__311__context_name = ""s;
                __Vtask_uvm_report_error__311__line = 0x00000329U;
                this->__Vtask_uvm_report_error__311__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__311__verbosity = 0U;
                this->__Vtask_uvm_report_error__311__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_n_maps() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__311__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__312__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__312__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__313__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__313__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__311__id, this->__Vtask_uvm_report_error__311__message, __Vtask_uvm_report_error__311__verbosity, this->__Vtask_uvm_report_error__311__filename, __Vtask_uvm_report_error__311__line, this->__Vtask_uvm_report_error__311__context_name, (IData)(__Vtask_uvm_report_error__311__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22816]);
            } else {
                ++(vlSymsp->__Vcoverage[22817]);
            }
            get_n_maps__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22819]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 813)->__VnoInFunc_get_n_maps(vlSymsp, get_n_maps__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22820]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__316__verbosity;
    __Vfunc_uvm_report_enabled__316__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__316__severity;
    __Vfunc_uvm_report_enabled__316__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__317__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__318__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__321__verbosity;
    __Vtask_uvm_report_error__321__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__321__line;
    __Vtask_uvm_report_error__321__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__321__report_enabled_checked;
    __Vtask_uvm_report_error__321__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__316__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__316__severity = 2U;
            __Vfunc_uvm_report_enabled__316__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__317__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__317__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__318__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__318__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__316__verbosity, (IData)(__Vfunc_uvm_report_enabled__316__severity), this->__Vfunc_uvm_report_enabled__316__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__321__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__321__context_name = ""s;
                __Vtask_uvm_report_error__321__line = 0x00000334U;
                this->__Vtask_uvm_report_error__321__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__321__verbosity = 0U;
                this->__Vtask_uvm_report_error__321__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_maps() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__321__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__322__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__323__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__321__id, this->__Vtask_uvm_report_error__321__message, __Vtask_uvm_report_error__321__verbosity, this->__Vtask_uvm_report_error__321__filename, __Vtask_uvm_report_error__321__line, this->__Vtask_uvm_report_error__321__context_name, (IData)(__Vtask_uvm_report_error__321__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22821]);
            } else {
                ++(vlSymsp->__Vcoverage[22822]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22824]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 824)->__VnoInFunc_get_maps(vlSymsp, maps);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22825]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__326__verbosity;
    __Vfunc_uvm_report_enabled__326__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__326__severity;
    __Vfunc_uvm_report_enabled__326__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__327__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__328__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__331__verbosity;
    __Vtask_uvm_report_error__331__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__331__line;
    __Vtask_uvm_report_error__331__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__331__report_enabled_checked;
    __Vtask_uvm_report_error__331__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__332__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__333__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        is_in_map__Vfuncrtn = 0U;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__326__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__326__severity = 2U;
            __Vfunc_uvm_report_enabled__326__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__327__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__327__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__328__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__328__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__326__verbosity, (IData)(__Vfunc_uvm_report_enabled__326__severity), this->__Vfunc_uvm_report_enabled__326__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__331__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__331__context_name = ""s;
                __Vtask_uvm_report_error__331__line = 0x0000033fU;
                this->__Vtask_uvm_report_error__331__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__331__verbosity = 0U;
                this->__Vtask_uvm_report_error__331__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::is_in_map() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__331__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__332__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__332__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__333__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__333__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__331__id, this->__Vtask_uvm_report_error__331__message, __Vtask_uvm_report_error__331__verbosity, this->__Vtask_uvm_report_error__331__filename, __Vtask_uvm_report_error__331__line, this->__Vtask_uvm_report_error__331__context_name, (IData)(__Vtask_uvm_report_error__331__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22826]);
            } else {
                ++(vlSymsp->__Vcoverage[22827]);
            }
            is_in_map__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22829]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 835)->__VnoInFunc_is_in_map(vlSymsp, map, is_in_map__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22830]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__336__verbosity;
    __Vfunc_uvm_report_enabled__336__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__336__severity;
    __Vfunc_uvm_report_enabled__336__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__337__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__338__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__341__verbosity;
    __Vtask_uvm_report_error__341__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__341__line;
    __Vtask_uvm_report_error__341__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__341__report_enabled_checked;
    __Vtask_uvm_report_error__341__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__342__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__343__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_access__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__336__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__336__severity = 2U;
            __Vfunc_uvm_report_enabled__336__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__337__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__337__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__338__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__338__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__336__verbosity, (IData)(__Vfunc_uvm_report_enabled__336__severity), this->__Vfunc_uvm_report_enabled__336__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__341__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__341__context_name = ""s;
                __Vtask_uvm_report_error__341__line = 0x0000034aU;
                this->__Vtask_uvm_report_error__341__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__341__verbosity = 0U;
                this->__Vtask_uvm_report_error__341__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__341__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__342__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__342__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__343__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__343__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__341__id, this->__Vtask_uvm_report_error__341__message, __Vtask_uvm_report_error__341__verbosity, this->__Vtask_uvm_report_error__341__filename, __Vtask_uvm_report_error__341__line, this->__Vtask_uvm_report_error__341__context_name, (IData)(__Vtask_uvm_report_error__341__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22831]);
            } else {
                ++(vlSymsp->__Vcoverage[22832]);
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22834]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 846)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, get_access__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22835]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__346__verbosity;
    __Vfunc_uvm_report_enabled__346__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__346__severity;
    __Vfunc_uvm_report_enabled__346__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__347__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__348__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__351__verbosity;
    __Vtask_uvm_report_error__351__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__351__line;
    __Vtask_uvm_report_error__351__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__351__report_enabled_checked;
    __Vtask_uvm_report_error__351__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__352__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__353__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_rights__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__346__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__346__severity = 2U;
            __Vfunc_uvm_report_enabled__346__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__347__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__347__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__348__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__348__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__346__verbosity, (IData)(__Vfunc_uvm_report_enabled__346__severity), this->__Vfunc_uvm_report_enabled__346__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__351__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__351__context_name = ""s;
                __Vtask_uvm_report_error__351__line = 0x00000355U;
                this->__Vtask_uvm_report_error__351__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__351__verbosity = 0U;
                this->__Vtask_uvm_report_error__351__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__351__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__352__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__352__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__353__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__353__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__351__id, this->__Vtask_uvm_report_error__351__message, __Vtask_uvm_report_error__351__verbosity, this->__Vtask_uvm_report_error__351__filename, __Vtask_uvm_report_error__351__line, this->__Vtask_uvm_report_error__351__context_name, (IData)(__Vtask_uvm_report_error__351__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22836]);
            } else {
                ++(vlSymsp->__Vcoverage[22837]);
            }
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22839]);
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 857)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, get_rights__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22840]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk397__DOT__i;
    unnamedblk397__DOT__i = 0;
    unnamedblk397__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk397__DOT__i, this->__PVT__fields.size())) {
        fields.push_back(this->__PVT__fields.at(unnamedblk397__DOT__i));
        unnamedblk397__DOT__i = ((IData)(1U) + unnamedblk397__DOT__i);
        ++(vlSymsp->__Vcoverage[22841]);
    }
    ++(vlSymsp->__Vcoverage[22842]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_field_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_field_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__verbosity;
    __Vfunc_uvm_report_enabled__357__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__357__severity;
    __Vfunc_uvm_report_enabled__357__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__358__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__359__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__362__verbosity;
    __Vtask_uvm_report_warning__362__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__362__line;
    __Vtask_uvm_report_warning__362__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__362__report_enabled_checked;
    __Vtask_uvm_report_warning__362__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__363__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__364__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk398__DOT__i;
    unnamedblk398__DOT__i = 0;
    {
        unnamedblk398__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk398__DOT__i, this->__PVT__fields.size())) {
            VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk398__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 869)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_field_by_name__Vfuncrtn = this->__PVT__fields.at(unnamedblk398__DOT__i);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[22844]);
            }
            unnamedblk398__DOT__i = ((IData)(1U) + unnamedblk398__DOT__i);
            ++(vlSymsp->__Vcoverage[22845]);
        }
        this->__Vfunc_uvm_report_enabled__357__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__357__severity = 1U;
        __Vfunc_uvm_report_enabled__357__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__358__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__358__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__359__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__359__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__357__verbosity, (IData)(__Vfunc_uvm_report_enabled__357__severity), this->__Vfunc_uvm_report_enabled__357__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__362__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__362__context_name = ""s;
            __Vtask_uvm_report_warning__362__line = 0x0000036aU;
            this->__Vtask_uvm_report_warning__362__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_warning__362__verbosity = 0U;
            this->__Vtask_uvm_report_warning__362__message 
                = VL_SFORMATF_N_NX("Unable to locate field \"%@\" in virtual register \"%@\".",0,
                                   -1,&(name),-1,&(__VlefCall_2__get_full_name)) ;
            this->__Vtask_uvm_report_warning__362__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__363__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__363__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__364__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__364__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__362__id, this->__Vtask_uvm_report_warning__362__message, __Vtask_uvm_report_warning__362__verbosity, this->__Vtask_uvm_report_warning__362__filename, __Vtask_uvm_report_warning__362__line, this->__Vtask_uvm_report_warning__362__context_name, (IData)(__Vtask_uvm_report_warning__362__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[22846]);
        } else {
            ++(vlSymsp->__Vcoverage[22847]);
        }
        get_field_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22848]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__367__verbosity;
    __Vfunc_uvm_report_enabled__367__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__367__severity;
    __Vfunc_uvm_report_enabled__367__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__368__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__369__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__372__verbosity;
    __Vtask_uvm_report_error__372__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__372__line;
    __Vtask_uvm_report_error__372__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__372__report_enabled_checked;
    __Vtask_uvm_report_error__372__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__373__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__374__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__378__Vfuncout;
    __Vtask_get_lsb_pos_in_register__378__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__390__status;
    __Vtask_write__390__status = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__397__Vfuncout;
    __Vtask_get_lsb_pos_in_register__397__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__403__verbosity;
    __Vfunc_uvm_report_enabled__403__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__403__severity;
    __Vfunc_uvm_report_enabled__403__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__404__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__405__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__408__verbosity;
    __Vtask_uvm_report_info__408__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__408__line;
    __Vtask_uvm_report_info__408__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__408__report_enabled_checked;
    __Vtask_uvm_report_info__408__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__409__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__410__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_6__get_n_bits;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    IData/*31:0*/ __VlefCall_3__get_n_memlocs;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk399__DOT__i;
    unnamedblk399__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106> unnamedblk399__DOT__unnamedblk400__DOT__cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> unnamedblk399__DOT__unnamedblk400__DOT__f;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk399__DOT__unnamedblk400__DOT__unnamedblk401__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk402__DOT__cb;
    IData/*31:0*/ unnamedblk403__DOT__i;
    IData/*31:0*/ unnamedblk403__DOT__unnamedblk404__DOT__s;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk405__DOT__cb;
    IData/*31:0*/ unnamedblk406__DOT__i;
    unnamedblk406__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106> unnamedblk406__DOT__unnamedblk407__DOT__cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> unnamedblk406__DOT__unnamedblk407__DOT__f;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi107> cbs;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi107, vlSymsp, 
                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this});
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__write_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__367__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__367__severity = 2U;
            __Vfunc_uvm_report_enabled__367__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__368__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__368__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__369__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__369__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__367__verbosity, (IData)(__Vfunc_uvm_report_enabled__367__severity), this->__Vfunc_uvm_report_enabled__367__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__372__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__372__context_name = ""s;
                __Vtask_uvm_report_error__372__line = 0x00000383U;
                this->__Vtask_uvm_report_error__372__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__372__verbosity = 0U;
                this->__Vtask_uvm_report_error__372__message 
                    = VL_SFORMATF_N_NX("Cannot write to unimplemented virtual register \"%@\".",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__372__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__373__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__373__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__374__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__374__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__372__id, this->__Vtask_uvm_report_error__372__message, __Vtask_uvm_report_error__372__verbosity, this->__Vtask_uvm_report_error__372__filename, __Vtask_uvm_report_error__372__line, this->__Vtask_uvm_report_error__372__context_name, (IData)(__Vtask_uvm_report_error__372__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22849]);
            } else {
                ++(vlSymsp->__Vcoverage[22850]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22852]);
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 905)->__VnoInFunc_get_default_door(vlSymsp, path);
            ++(vlSymsp->__Vcoverage[22853]);
        } else {
            ++(vlSymsp->__Vcoverage[22854]);
        }
        unnamedblk399__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk399__DOT__i, this->__PVT__fields.size())) {
            unnamedblk399__DOT__unnamedblk400__DOT__cbs 
                = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106, vlSymsp, this->__PVT__fields.at(unnamedblk399__DOT__i));
            unnamedblk399__DOT__unnamedblk400__DOT__f 
                = this->__PVT__fields.at(unnamedblk399__DOT__i);
            VL_NULL_CHECK(unnamedblk399__DOT__unnamedblk400__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 911)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__378__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__378__Vfuncout;
            VL_NULL_CHECK(unnamedblk399__DOT__unnamedblk400__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 912)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_2__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk399__DOT__unnamedblk400__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 915)->__VnoInFunc_pre_write(vlSymsp, idx, tmp, path, map);
            VL_NULL_CHECK(unnamedblk399__DOT__unnamedblk400__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 916)->__VnoInFunc_first(vlSymsp, unnamedblk399__DOT__unnamedblk400__DOT__unnamedblk401__DOT__cb);
            while ((VlNull{} != unnamedblk399__DOT__unnamedblk400__DOT__unnamedblk401__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk399__DOT__unnamedblk400__DOT__unnamedblk401__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 918)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk399__DOT__unnamedblk400__DOT__unnamedblk401__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 919)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk399__DOT__unnamedblk400__DOT__unnamedblk401__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 920)->__VnoInFunc_pre_write(vlSymsp, unnamedblk399__DOT__unnamedblk400__DOT__f, idx, tmp, path, map);
                VL_NULL_CHECK(unnamedblk399__DOT__unnamedblk400__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 917)->__VnoInFunc_next(vlSymsp, unnamedblk399__DOT__unnamedblk400__DOT__unnamedblk401__DOT__cb);
                ++(vlSymsp->__Vcoverage[22855]);
            }
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            unnamedblk399__DOT__i = ((IData)(1U) + unnamedblk399__DOT__i);
            ++(vlSymsp->__Vcoverage[22856]);
        }
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 926)->__VnoInFunc_first(vlSymsp, unnamedblk402__DOT__cb);
        while ((VlNull{} != unnamedblk402__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk402__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 928)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk402__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 929)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk402__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 930)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 927)->__VnoInFunc_next(vlSymsp, unnamedblk402__DOT__cb);
            ++(vlSymsp->__Vcoverage[22857]);
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk403__DOT__i = 0U;
        unnamedblk403__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_3__get_n_memlocs);
            if (!((unnamedblk403__DOT__i < __VlefCall_3__get_n_memlocs))) break;
            unnamedblk403__DOT__unnamedblk404__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 940)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         VL_SHIFTL_III(32,32,32, __VlefCall_4__get_n_bytes, 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 942)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__390__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk403__DOT__i))), tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk403__DOT__unnamedblk404__DOT__s 
                = __Vtask_write__390__status;
            if (((0U != unnamedblk403__DOT__unnamedblk404__DOT__s) 
                 & (2U != unnamedblk403__DOT__unnamedblk404__DOT__s))) {
                status = unnamedblk403__DOT__unnamedblk404__DOT__s;
                ++(vlSymsp->__Vcoverage[22858]);
            } else {
                ++(vlSymsp->__Vcoverage[22859]);
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 944)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
            lsb = (lsb + VL_SHIFTL_III(32,32,32, __VlefCall_5__get_n_bytes, 3U));
            unnamedblk403__DOT__i = ((IData)(1U) + unnamedblk403__DOT__i);
            ++(vlSymsp->__Vcoverage[22863]);
        }
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 947)->__VnoInFunc_first(vlSymsp, unnamedblk405__DOT__cb);
        while ((VlNull{} != unnamedblk405__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk405__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 949)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk405__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 950)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk405__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 951)->__VnoInFunc_post_write(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 948)->__VnoInFunc_next(vlSymsp, unnamedblk405__DOT__cb);
            ++(vlSymsp->__Vcoverage[22864]);
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        unnamedblk406__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk406__DOT__i, this->__PVT__fields.size())) {
            unnamedblk406__DOT__unnamedblk407__DOT__cbs 
                = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106, vlSymsp, this->__PVT__fields.at(unnamedblk406__DOT__i));
            unnamedblk406__DOT__unnamedblk407__DOT__f 
                = this->__PVT__fields.at(unnamedblk406__DOT__i);
            VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 958)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__397__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__397__Vfuncout;
            VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 959)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_6__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_6__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 962)->__VnoInFunc_first(vlSymsp, unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb);
            while ((VlNull{} != unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 964)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 965)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 966)->__VnoInFunc_post_write(vlSymsp, unnamedblk406__DOT__unnamedblk407__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 963)->__VnoInFunc_next(vlSymsp, unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb);
                ++(vlSymsp->__Vcoverage[22865]);
            }
            VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 968)->__VnoInFunc_post_write(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            unnamedblk406__DOT__i = ((IData)(1U) + unnamedblk406__DOT__i);
            ++(vlSymsp->__Vcoverage[22866]);
        }
        this->__Vfunc_uvm_report_enabled__403__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__403__severity = 0U;
        __Vfunc_uvm_report_enabled__403__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__404__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__405__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__405__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__403__verbosity, (IData)(__Vfunc_uvm_report_enabled__403__severity), this->__Vfunc_uvm_report_enabled__403__id, __VlefCall_7__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_7__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
            __Vtask_uvm_report_info__408__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__408__context_name = ""s;
            __Vtask_uvm_report_info__408__line = 0x000003d0U;
            this->__Vtask_uvm_report_info__408__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__408__verbosity = 0x000000c8U;
            __Vtemp_4[0U] = 0x646f6f72U;
            if ((0U == path)) {
                __Vtemp_4[1U] = 0x726f6e74U;
                __Vtemp_4[2U] = 0x00000066U;
            } else {
                __Vtemp_4[1U] = 0x6261636bU;
                __Vtemp_4[2U] = 0U;
            }
            this->__Vtask_uvm_report_info__408__message 
                = VL_SFORMATF_N_NX("Wrote virtual register \"%@\"[%0#] via %s with: 'h%x",0,
                                   -1,&(__VlefCall_8__get_full_name),
                                   64,idx,72,__Vtemp_4.data(),
                                   64,value) ;
            this->__Vtask_uvm_report_info__408__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__409__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__409__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__410__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__410__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__408__id, this->__Vtask_uvm_report_info__408__message, __Vtask_uvm_report_info__408__verbosity, this->__Vtask_uvm_report_info__408__filename, __Vtask_uvm_report_info__408__line, this->__Vtask_uvm_report_info__408__context_name, (IData)(__Vtask_uvm_report_info__408__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            if ((0U == path)) {
                ++(vlSymsp->__Vcoverage[22867]);
            }
            if ((0U != path)) {
                ++(vlSymsp->__Vcoverage[22868]);
            }
            ++(vlSymsp->__Vcoverage[22869]);
        } else {
            ++(vlSymsp->__Vcoverage[22870]);
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    if (((0U != unnamedblk403__DOT__unnamedblk404__DOT__s) 
         & (2U != unnamedblk403__DOT__unnamedblk404__DOT__s))) {
        ++(vlSymsp->__Vcoverage[22860]);
    }
    if ((2U == unnamedblk403__DOT__unnamedblk404__DOT__s)) {
        ++(vlSymsp->__Vcoverage[22861]);
    }
    if ((0U == unnamedblk403__DOT__unnamedblk404__DOT__s)) {
        ++(vlSymsp->__Vcoverage[22862]);
    }
    ++(vlSymsp->__Vcoverage[22871]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__413__verbosity;
    __Vfunc_uvm_report_enabled__413__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__413__severity;
    __Vfunc_uvm_report_enabled__413__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__414__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__415__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__418__verbosity;
    __Vtask_uvm_report_error__418__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__418__line;
    __Vtask_uvm_report_error__418__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__418__report_enabled_checked;
    __Vtask_uvm_report_error__418__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__419__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__420__Vfuncout;
    IData/*31:0*/ __Vtask_read__433__status;
    __Vtask_read__433__status = 0;
    QData/*63:0*/ __Vtask_read__433__value;
    __Vtask_read__433__value = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__440__Vfuncout;
    __Vtask_get_lsb_pos_in_register__440__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__446__verbosity;
    __Vfunc_uvm_report_enabled__446__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__446__severity;
    __Vfunc_uvm_report_enabled__446__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__447__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__448__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__451__verbosity;
    __Vtask_uvm_report_info__451__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__451__line;
    __Vtask_uvm_report_info__451__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__451__report_enabled_checked;
    __Vtask_uvm_report_info__451__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__452__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__453__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk409__DOT__i;
    unnamedblk409__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106> unnamedblk409__DOT__unnamedblk410__DOT__cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> unnamedblk409__DOT__unnamedblk410__DOT__f;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk409__DOT__unnamedblk410__DOT__unnamedblk411__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk412__DOT__cb;
    IData/*31:0*/ unnamedblk413__DOT__i;
    IData/*31:0*/ unnamedblk413__DOT__unnamedblk414__DOT__s;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk415__DOT__cb;
    IData/*31:0*/ unnamedblk416__DOT__i;
    unnamedblk416__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106> unnamedblk416__DOT__unnamedblk417__DOT__cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> unnamedblk416__DOT__unnamedblk417__DOT__f;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi107> cbs;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        value = 0ULL;
        cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi107, vlSymsp, 
                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this});
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__read_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__413__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__413__severity = 2U;
            __Vfunc_uvm_report_enabled__413__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__414__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__414__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__415__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__415__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__413__verbosity, (IData)(__Vfunc_uvm_report_enabled__413__severity), this->__Vfunc_uvm_report_enabled__413__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__418__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__418__context_name = ""s;
                __Vtask_uvm_report_error__418__line = 0x000003edU;
                this->__Vtask_uvm_report_error__418__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__418__verbosity = 0U;
                this->__Vtask_uvm_report_error__418__message 
                    = VL_SFORMATF_N_NX("Cannot read from unimplemented virtual register \"%@\".",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__418__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__419__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__419__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__420__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__420__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__418__id, this->__Vtask_uvm_report_error__418__message, __Vtask_uvm_report_error__418__verbosity, this->__Vtask_uvm_report_error__418__filename, __Vtask_uvm_report_error__418__line, this->__Vtask_uvm_report_error__418__context_name, (IData)(__Vtask_uvm_report_error__418__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22872]);
            } else {
                ++(vlSymsp->__Vcoverage[22873]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22875]);
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1011)->__VnoInFunc_get_default_door(vlSymsp, path);
            ++(vlSymsp->__Vcoverage[22876]);
        } else {
            ++(vlSymsp->__Vcoverage[22877]);
        }
        unnamedblk409__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk409__DOT__i, this->__PVT__fields.size())) {
            unnamedblk409__DOT__unnamedblk410__DOT__cbs 
                = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106, vlSymsp, this->__PVT__fields.at(unnamedblk409__DOT__i));
            unnamedblk409__DOT__unnamedblk410__DOT__f 
                = this->__PVT__fields.at(unnamedblk409__DOT__i);
            VL_NULL_CHECK(unnamedblk409__DOT__unnamedblk410__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1017)->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
            VL_NULL_CHECK(unnamedblk409__DOT__unnamedblk410__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1018)->__VnoInFunc_first(vlSymsp, unnamedblk409__DOT__unnamedblk410__DOT__unnamedblk411__DOT__cb);
            while ((VlNull{} != unnamedblk409__DOT__unnamedblk410__DOT__unnamedblk411__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk409__DOT__unnamedblk410__DOT__unnamedblk411__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1020)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk409__DOT__unnamedblk410__DOT__unnamedblk411__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1021)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk409__DOT__unnamedblk410__DOT__unnamedblk411__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1022)->__VnoInFunc_pre_read(vlSymsp, unnamedblk409__DOT__unnamedblk410__DOT__f, idx, path, map);
                VL_NULL_CHECK(unnamedblk409__DOT__unnamedblk410__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1019)->__VnoInFunc_next(vlSymsp, unnamedblk409__DOT__unnamedblk410__DOT__unnamedblk411__DOT__cb);
                ++(vlSymsp->__Vcoverage[22878]);
            }
            unnamedblk409__DOT__i = ((IData)(1U) + unnamedblk409__DOT__i);
            ++(vlSymsp->__Vcoverage[22879]);
        }
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1026)->__VnoInFunc_first(vlSymsp, unnamedblk412__DOT__cb);
        while ((VlNull{} != unnamedblk412__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk412__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1028)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk412__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1029)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk412__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1030)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1027)->__VnoInFunc_next(vlSymsp, unnamedblk412__DOT__cb);
            ++(vlSymsp->__Vcoverage[22880]);
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk413__DOT__i = 0U;
        unnamedblk413__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk413__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk413__DOT__unnamedblk414__DOT__s = 0U;
            co_await VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1041)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__433__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk413__DOT__i))), __Vtask_read__433__value, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk413__DOT__unnamedblk414__DOT__s 
                = __Vtask_read__433__status;
            tmp = __Vtask_read__433__value;
            if (((0U != unnamedblk413__DOT__unnamedblk414__DOT__s) 
                 & (2U != unnamedblk413__DOT__unnamedblk414__DOT__s))) {
                status = unnamedblk413__DOT__unnamedblk414__DOT__s;
                ++(vlSymsp->__Vcoverage[22881]);
            } else {
                ++(vlSymsp->__Vcoverage[22882]);
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1045)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            lsb = (lsb + VL_SHIFTL_III(32,32,32, __VlefCall_3__get_n_bytes, 3U));
            unnamedblk413__DOT__i = ((IData)(1U) + unnamedblk413__DOT__i);
            ++(vlSymsp->__Vcoverage[22886]);
        }
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1048)->__VnoInFunc_first(vlSymsp, unnamedblk415__DOT__cb);
        while ((VlNull{} != unnamedblk415__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk415__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1050)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk415__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1051)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk415__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1052)->__VnoInFunc_post_read(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1049)->__VnoInFunc_next(vlSymsp, unnamedblk415__DOT__cb);
            ++(vlSymsp->__Vcoverage[22887]);
        }
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        unnamedblk416__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk416__DOT__i, this->__PVT__fields.size())) {
            unnamedblk416__DOT__unnamedblk417__DOT__cbs 
                = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106, vlSymsp, this->__PVT__fields.at(unnamedblk416__DOT__i));
            unnamedblk416__DOT__unnamedblk417__DOT__f 
                = this->__PVT__fields.at(unnamedblk416__DOT__i);
            VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1059)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__440__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__440__Vfuncout;
            VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1061)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_4__get_n_bits) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1064)->__VnoInFunc_first(vlSymsp, unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb);
            while ((VlNull{} != unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1066)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1067)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1068)->__VnoInFunc_post_read(vlSymsp, unnamedblk416__DOT__unnamedblk417__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1065)->__VnoInFunc_next(vlSymsp, unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb);
                ++(vlSymsp->__Vcoverage[22888]);
            }
            VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1070)->__VnoInFunc_post_read(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            unnamedblk416__DOT__i = ((IData)(1U) + unnamedblk416__DOT__i);
            ++(vlSymsp->__Vcoverage[22889]);
        }
        this->__Vfunc_uvm_report_enabled__446__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__446__severity = 0U;
        __Vfunc_uvm_report_enabled__446__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__447__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__447__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__448__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__448__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__446__verbosity, (IData)(__Vfunc_uvm_report_enabled__446__severity), this->__Vfunc_uvm_report_enabled__446__id, __VlefCall_5__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__451__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__451__context_name = ""s;
            __Vtask_uvm_report_info__451__line = 0x00000436U;
            this->__Vtask_uvm_report_info__451__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__451__verbosity = 0x000000c8U;
            __Vtemp_4[0U] = 0x646f6f72U;
            if ((0U == path)) {
                __Vtemp_4[1U] = 0x726f6e74U;
                __Vtemp_4[2U] = 0x00000066U;
            } else {
                __Vtemp_4[1U] = 0x6261636bU;
                __Vtemp_4[2U] = 0U;
            }
            this->__Vtask_uvm_report_info__451__message 
                = VL_SFORMATF_N_NX("Read virtual register \"%@\"[%0#] via %s: 'h%x",0,
                                   -1,&(__VlefCall_6__get_full_name),
                                   64,idx,72,__Vtemp_4.data(),
                                   64,value) ;
            this->__Vtask_uvm_report_info__451__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__452__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__452__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__453__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__453__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__451__id, this->__Vtask_uvm_report_info__451__message, __Vtask_uvm_report_info__451__verbosity, this->__Vtask_uvm_report_info__451__filename, __Vtask_uvm_report_info__451__line, this->__Vtask_uvm_report_info__451__context_name, (IData)(__Vtask_uvm_report_info__451__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            if ((0U == path)) {
                ++(vlSymsp->__Vcoverage[22890]);
            }
            if ((0U != path)) {
                ++(vlSymsp->__Vcoverage[22891]);
            }
            ++(vlSymsp->__Vcoverage[22892]);
        } else {
            ++(vlSymsp->__Vcoverage[22893]);
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    if (((0U != unnamedblk413__DOT__unnamedblk414__DOT__s) 
         & (2U != unnamedblk413__DOT__unnamedblk414__DOT__s))) {
        ++(vlSymsp->__Vcoverage[22883]);
    }
    if ((2U == unnamedblk413__DOT__unnamedblk414__DOT__s)) {
        ++(vlSymsp->__Vcoverage[22884]);
    }
    if ((0U == unnamedblk413__DOT__unnamedblk414__DOT__s)) {
        ++(vlSymsp->__Vcoverage[22885]);
    }
    ++(vlSymsp->__Vcoverage[22894]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__455__verbosity;
    __Vfunc_uvm_report_enabled__455__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__455__severity;
    __Vfunc_uvm_report_enabled__455__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__456__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__457__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__460__verbosity;
    __Vtask_uvm_report_error__460__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__460__line;
    __Vtask_uvm_report_error__460__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__460__report_enabled_checked;
    __Vtask_uvm_report_error__460__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__461__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__462__Vfuncout;
    IData/*31:0*/ __Vtask_poke__466__status;
    __Vtask_poke__466__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__468__verbosity;
    __Vfunc_uvm_report_enabled__468__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__468__severity;
    __Vfunc_uvm_report_enabled__468__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__469__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__470__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__473__verbosity;
    __Vtask_uvm_report_info__473__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__473__line;
    __Vtask_uvm_report_info__473__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__473__report_enabled_checked;
    __Vtask_uvm_report_info__473__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__474__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__475__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk419__DOT__i;
    IData/*31:0*/ unnamedblk419__DOT__unnamedblk420__DOT__s;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    QData/*63:0*/ msk;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        addr = 0ULL;
        tmp = 0ULL;
        msk = 0ULL;
        lsb = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__455__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__455__severity = 2U;
            __Vfunc_uvm_report_enabled__455__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__456__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__456__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__457__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__457__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__455__verbosity, (IData)(__Vfunc_uvm_report_enabled__455__severity), this->__Vfunc_uvm_report_enabled__455__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__460__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__460__context_name = ""s;
                __Vtask_uvm_report_error__460__line = 0x0000044dU;
                this->__Vtask_uvm_report_error__460__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__460__verbosity = 0U;
                this->__Vtask_uvm_report_error__460__message 
                    = VL_SFORMATF_N_NX("Cannot poke in unimplemented virtual register \"%@\".",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__460__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__461__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__461__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__462__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__462__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__460__id, this->__Vtask_uvm_report_error__460__message, __Vtask_uvm_report_error__460__verbosity, this->__Vtask_uvm_report_error__460__filename, __Vtask_uvm_report_error__460__line, this->__Vtask_uvm_report_error__460__context_name, (IData)(__Vtask_uvm_report_error__460__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22895]);
            } else {
                ++(vlSymsp->__Vcoverage[22896]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22898]);
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk419__DOT__i = 0U;
        unnamedblk419__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk419__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk419__DOT__unnamedblk420__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1113)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         VL_SHIFTL_III(32,32,32, __VlefCall_3__get_n_bytes, 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1116)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__466__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk419__DOT__i))), tmp, ""s, parent, extension, fname, lineno);
            status = __Vtask_poke__466__status;
            if (((0U != unnamedblk419__DOT__unnamedblk420__DOT__s) 
                 & (2U != unnamedblk419__DOT__unnamedblk420__DOT__s))) {
                status = unnamedblk419__DOT__unnamedblk420__DOT__s;
                ++(vlSymsp->__Vcoverage[22899]);
            } else {
                ++(vlSymsp->__Vcoverage[22900]);
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1119)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
            lsb = (lsb + VL_SHIFTL_III(32,32,32, __VlefCall_4__get_n_bytes, 3U));
            unnamedblk419__DOT__i = ((IData)(1U) + unnamedblk419__DOT__i);
            ++(vlSymsp->__Vcoverage[22904]);
        }
        this->__Vfunc_uvm_report_enabled__468__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__468__severity = 0U;
        __Vfunc_uvm_report_enabled__468__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__469__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__469__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__470__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__470__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__468__verbosity, (IData)(__Vfunc_uvm_report_enabled__468__severity), this->__Vfunc_uvm_report_enabled__468__id, __VlefCall_5__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__473__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__473__context_name = ""s;
            __Vtask_uvm_report_info__473__line = 0x00000463U;
            this->__Vtask_uvm_report_info__473__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__473__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_info__473__message 
                = VL_SFORMATF_N_NX("Poked virtual register \"%@\"[%0#] with: 'h%x",0,
                                   -1,&(__VlefCall_6__get_full_name),
                                   64,idx,64,value) ;
            this->__Vtask_uvm_report_info__473__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__474__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__474__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__475__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__475__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__473__id, this->__Vtask_uvm_report_info__473__message, __Vtask_uvm_report_info__473__verbosity, this->__Vtask_uvm_report_info__473__filename, __Vtask_uvm_report_info__473__line, this->__Vtask_uvm_report_info__473__context_name, (IData)(__Vtask_uvm_report_info__473__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[22905]);
        } else {
            ++(vlSymsp->__Vcoverage[22906]);
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    if (((0U != unnamedblk419__DOT__unnamedblk420__DOT__s) 
         & (2U != unnamedblk419__DOT__unnamedblk420__DOT__s))) {
        ++(vlSymsp->__Vcoverage[22901]);
    }
    if ((2U == unnamedblk419__DOT__unnamedblk420__DOT__s)) {
        ++(vlSymsp->__Vcoverage[22902]);
    }
    if ((0U == unnamedblk419__DOT__unnamedblk420__DOT__s)) {
        ++(vlSymsp->__Vcoverage[22903]);
    }
    ++(vlSymsp->__Vcoverage[22907]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__477__verbosity;
    __Vfunc_uvm_report_enabled__477__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__477__severity;
    __Vfunc_uvm_report_enabled__477__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__478__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__479__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__482__verbosity;
    __Vtask_uvm_report_error__482__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__482__line;
    __Vtask_uvm_report_error__482__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__482__report_enabled_checked;
    __Vtask_uvm_report_error__482__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__483__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__484__Vfuncout;
    IData/*31:0*/ __Vtask_peek__487__status;
    __Vtask_peek__487__status = 0;
    QData/*63:0*/ __Vtask_peek__487__value;
    __Vtask_peek__487__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__489__verbosity;
    __Vfunc_uvm_report_enabled__489__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__489__severity;
    __Vfunc_uvm_report_enabled__489__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__490__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__491__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__494__verbosity;
    __Vtask_uvm_report_info__494__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__494__line;
    __Vtask_uvm_report_info__494__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__494__report_enabled_checked;
    __Vtask_uvm_report_info__494__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__495__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__496__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_n_memlocs;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk421__DOT__i;
    IData/*31:0*/ unnamedblk421__DOT__unnamedblk422__DOT__s;
    QData/*63:0*/ addr;
    QData/*63:0*/ tmp;
    IData/*31:0*/ lsb;
    {
        status = 0U;
        value = 0ULL;
        addr = 0ULL;
        tmp = 0ULL;
        lsb = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            this->__Vfunc_uvm_report_enabled__477__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__477__severity = 2U;
            __Vfunc_uvm_report_enabled__477__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__478__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__478__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__479__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__479__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__477__verbosity, (IData)(__Vfunc_uvm_report_enabled__477__severity), this->__Vfunc_uvm_report_enabled__477__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__482__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__482__context_name = ""s;
                __Vtask_uvm_report_error__482__line = 0x00000479U;
                this->__Vtask_uvm_report_error__482__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__482__verbosity = 0U;
                this->__Vtask_uvm_report_error__482__message 
                    = VL_SFORMATF_N_NX("Cannot peek in from unimplemented virtual register \"%@\".",0,
                                       -1,&(__VlefCall_1__get_full_name)) ;
                this->__Vtask_uvm_report_error__482__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__483__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__483__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__484__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__484__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__482__id, this->__Vtask_uvm_report_error__482__message, __Vtask_uvm_report_error__482__verbosity, this->__Vtask_uvm_report_error__482__filename, __Vtask_uvm_report_error__482__line, this->__Vtask_uvm_report_error__482__context_name, (IData)(__Vtask_uvm_report_error__482__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22908]);
            } else {
                ++(vlSymsp->__Vcoverage[22909]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22911]);
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk421__DOT__i = 0U;
        unnamedblk421__DOT__i = 0U;
        while (true) {
            this->__VnoInFunc_get_n_memlocs(vlSymsp, __VlefCall_2__get_n_memlocs);
            if (!((unnamedblk421__DOT__i < __VlefCall_2__get_n_memlocs))) break;
            unnamedblk421__DOT__unnamedblk422__DOT__s = 0U;
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1158)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__487__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk421__DOT__i))), __Vtask_peek__487__value, ""s, parent, extension, fname, lineno);
            status = __Vtask_peek__487__status;
            tmp = __Vtask_peek__487__value;
            if (((0U != unnamedblk421__DOT__unnamedblk422__DOT__s) 
                 & (2U != unnamedblk421__DOT__unnamedblk422__DOT__s))) {
                status = unnamedblk421__DOT__unnamedblk422__DOT__s;
                ++(vlSymsp->__Vcoverage[22912]);
            } else {
                ++(vlSymsp->__Vcoverage[22913]);
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1162)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_3__get_n_bytes);
            lsb = (lsb + VL_SHIFTL_III(32,32,32, __VlefCall_3__get_n_bytes, 3U));
            unnamedblk421__DOT__i = ((IData)(1U) + unnamedblk421__DOT__i);
            ++(vlSymsp->__Vcoverage[22917]);
        }
        this->__Vfunc_uvm_report_enabled__489__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__489__severity = 0U;
        __Vfunc_uvm_report_enabled__489__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__490__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__490__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__491__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__491__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__489__verbosity, (IData)(__Vfunc_uvm_report_enabled__489__severity), this->__Vfunc_uvm_report_enabled__489__id, __VlefCall_4__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_info__494__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__494__context_name = ""s;
            __Vtask_uvm_report_info__494__line = 0x0000048eU;
            this->__Vtask_uvm_report_info__494__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__494__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_info__494__message 
                = VL_SFORMATF_N_NX("Peeked virtual register \"%@\"[%0#]: 'h%x",0,
                                   -1,&(__VlefCall_5__get_full_name),
                                   64,idx,64,value) ;
            this->__Vtask_uvm_report_info__494__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__495__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__495__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__496__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__496__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__494__id, this->__Vtask_uvm_report_info__494__message, __Vtask_uvm_report_info__494__verbosity, this->__Vtask_uvm_report_info__494__filename, __Vtask_uvm_report_info__494__line, this->__Vtask_uvm_report_info__494__context_name, (IData)(__Vtask_uvm_report_info__494__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[22918]);
        } else {
            ++(vlSymsp->__Vcoverage[22919]);
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    if (((0U != unnamedblk421__DOT__unnamedblk422__DOT__s) 
         & (2U != unnamedblk421__DOT__unnamedblk422__DOT__s))) {
        ++(vlSymsp->__Vcoverage[22914]);
    }
    if ((2U == unnamedblk421__DOT__unnamedblk422__DOT__s)) {
        ++(vlSymsp->__Vcoverage[22915]);
    }
    if ((0U == unnamedblk421__DOT__unnamedblk422__DOT__s)) {
        ++(vlSymsp->__Vcoverage[22916]);
    }
    ++(vlSymsp->__Vcoverage[22920]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print\n"); );
    // Body
    std::string __VlefCall_1__convert2string;
    std::string __VlefCall_0__get_type_name;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1176)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1176)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__convert2string), 0x2eU);
    ++(vlSymsp->__Vcoverage[22921]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string\n"); );
    // Body
    std::string __VlefCall_4__convert2string;
    QData/*63:0*/ __VlefCall_3__get_address;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> unnamedblk423__DOT__maps;
    IData/*31:0*/ unnamedblk423__DOT__unnamedblk424__DOT__i;
    unnamedblk423__DOT__unnamedblk424__DOT__i = 0;
    QData/*63:0*/ unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__addr0;
    IData/*31:0*/ unnamedblk426__DOT__i;
    unnamedblk426__DOT__i = 0;
    convert2string__Vfuncrtn = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"Virtual register %@ -- ",0,
                  -1,&(__VlefCall_0__get_full_name));
    if ((0ULL == this->__PVT__size)) {
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@unimplemented",0,
                      -1,&(convert2string__Vfuncrtn));
        ++(vlSymsp->__Vcoverage[22923]);
    } else {
        unnamedblk423__DOT__maps.clear();
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1190)->__VnoInFunc_get_maps(vlSymsp, unnamedblk423__DOT__maps);
        VL_NULL_CHECK(this->__PVT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1193)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@[%0#] in %0@['h%0x+'h%0x]\n",0,
                      -1,&(convert2string__Vfuncrtn),
                      64,this->__PVT__size,-1,&(__VlefCall_1__get_full_name),
                      64,this->__PVT__offset,32,this->__PVT__incr);
        unnamedblk423__DOT__unnamedblk424__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk423__DOT__unnamedblk424__DOT__i, unnamedblk423__DOT__maps.size())) {
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, unnamedblk423__DOT__maps.at(unnamedblk423__DOT__unnamedblk424__DOT__i), unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__addr0);
            VL_NULL_CHECK(unnamedblk423__DOT__maps.at(unnamedblk423__DOT__unnamedblk424__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1198)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 1ULL, unnamedblk423__DOT__maps.at(unnamedblk423__DOT__unnamedblk424__DOT__i), __VlefCall_3__get_address);
            VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                          ,"  Address in map '%@' -- @'h%0x+%0x",0,
                          -1,&(__VlefCall_2__get_full_name),
                          64,unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__addr0,
                          64,(__VlefCall_3__get_address 
                              - unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__addr0));
            unnamedblk423__DOT__unnamedblk424__DOT__i 
                = ((IData)(1U) + unnamedblk423__DOT__unnamedblk424__DOT__i);
            ++(vlSymsp->__Vcoverage[22922]);
        }
        ++(vlSymsp->__Vcoverage[22924]);
    }
    unnamedblk426__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk426__DOT__i, this->__PVT__fields.size())) {
        VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk426__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1203)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@\n%@",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__VlefCall_4__convert2string));
        unnamedblk426__DOT__i = ((IData)(1U) + unnamedblk426__DOT__i);
        ++(vlSymsp->__Vcoverage[22925]);
    }
    ++(vlSymsp->__Vcoverage[22926]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone\n"); );
    // Body
    clone__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[22927]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22928]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[22929]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22930]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22931]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__locked = 0;
    __PVT__n_bits = 0;
    __PVT__n_used_bits = 0;
    __PVT__offset = 0;
    __PVT__incr = 0;
    __PVT__size = 0;
    __PVT__is_static = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_vreg::~Vtb_rng_uvm_pkg__03a__03auvm_vreg() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_vreg::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_vreg::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_vreg::to_string_middle\n"); );
    // Body
    std::string out;
    out += "locked:" + VL_TO_STRING(__PVT__locked);
    out += ", parent:" + VL_TO_STRING(__PVT__parent);
    out += ", n_bits:" + VL_TO_STRING(__PVT__n_bits);
    out += ", n_used_bits:" + VL_TO_STRING(__PVT__n_used_bits);
    out += ", fields:" + VL_TO_STRING(__PVT__fields);
    out += ", mem:" + VL_TO_STRING(__PVT__mem);
    out += ", offset:" + VL_TO_STRING(__PVT__offset);
    out += ", incr:" + VL_TO_STRING(__PVT__incr);
    out += ", size:" + VL_TO_STRING(__PVT__size);
    out += ", is_static:" + VL_TO_STRING(__PVT__is_static);
    out += ", region:" + VL_TO_STRING(__PVT__region);
    out += ", atomic:" + VL_TO_STRING(__PVT__atomic);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", read_in_progress:" + VL_TO_STRING(__PVT__read_in_progress);
    out += ", write_in_progress:" + VL_TO_STRING(__PVT__write_in_progress);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
