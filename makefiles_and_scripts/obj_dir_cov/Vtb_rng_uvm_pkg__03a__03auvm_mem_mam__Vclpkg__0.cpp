// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::init(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__for_each_idx = 0xffffffffU;
    ++(vlSymsp->__Vcoverage[22529]);
    this->__PVT__cfg = cfg;
    this->__PVT__memory = mem;
    this->__PVT__default_alloc = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_policy, vlSymsp);
    ++(vlSymsp->__Vcoverage[22530]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reconfigure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reconfigure\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    QData/*63:0*/ __VlefCall_4__get_end_offset;
    QData/*63:0*/ __VlefCall_3__get_start_offset;
    CData/*0:0*/ __VlefLogOr_2;
    QData/*63:0*/ __VlefCall_1__get_end_offset;
    QData/*63:0*/ __VlefCall_0__get_start_offset;
    IData/*31:0*/ unnamedblk389__DOT__i;
    unnamedblk389__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        if ((VlNull{} == cfg)) {
            reconfigure__Vfuncrtn = this->__PVT__cfg;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22532]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 602)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        if ((VL_NULL_CHECK(cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 605)
             ->__PVT__n_bytes != VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 605)
             ->__PVT__n_bytes)) {
            VL_NULL_CHECK(top, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 606)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_mam"s, VL_SFORMATF_N_NX("Cannot reconfigure Memory Allocation Manager with a different number of bytes (%0# !== %0#)",0,
                                                                                32,
                                                                                VL_NULL_CHECK(cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 608)
                                                                                ->__PVT__n_bytes,
                                                                                32,
                                                                                VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 608)
                                                                                ->__PVT__n_bytes) , 0x00000064U, ""s, 0U, ""s, 0U);
            reconfigure__Vfuncrtn = this->__PVT__cfg;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22534]);
        }
        unnamedblk389__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk389__DOT__i, this->__PVT__in_use.size())) {
            VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk389__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 614)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_0__get_start_offset);
            __VlefLogOr_2 = (__VlefCall_0__get_start_offset 
                             < VL_NULL_CHECK(cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 614)
                             ->__PVT__start_offset);
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk389__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 615)->__VnoInFunc_get_end_offset(vlSymsp, __VlefCall_1__get_end_offset);
                __VlefLogOr_2 = (__VlefCall_1__get_end_offset 
                                 > VL_NULL_CHECK(cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 615)
                                 ->__PVT__end_offset);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk389__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 618)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_3__get_start_offset);
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk389__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 619)->__VnoInFunc_get_end_offset(vlSymsp, __VlefCall_4__get_end_offset);
                VL_NULL_CHECK(top, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 616)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_mam"s, VL_SFORMATF_N_NX("Cannot reconfigure Memory Allocation Manager with a currently allocated region outside of the managed address range ([%0#:%0#] outside of [%0#:%0#])",0,
                                                                                64,
                                                                                __VlefCall_3__get_start_offset,
                                                                                64,
                                                                                __VlefCall_4__get_end_offset,
                                                                                64,
                                                                                VL_NULL_CHECK(cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 620)
                                                                                ->__PVT__start_offset,
                                                                                64,
                                                                                VL_NULL_CHECK(cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 620)
                                                                                ->__PVT__end_offset) , 0x00000064U, ""s, 0U, ""s, 0U);
                reconfigure__Vfuncrtn = this->__PVT__cfg;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[22536]);
            }
            unnamedblk389__DOT__i = ((IData)(1U) + unnamedblk389__DOT__i);
            ++(vlSymsp->__Vcoverage[22537]);
        }
        reconfigure__Vfuncrtn = this->__PVT__cfg;
        this->__PVT__cfg = cfg;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22538]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reserve_region(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reserve_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__13__verbosity;
    __Vtask_uvm_report_error__13__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__13__line;
    __Vtask_uvm_report_error__13__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__13__report_enabled_checked;
    __Vtask_uvm_report_error__13__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__verbosity;
    __Vfunc_uvm_report_enabled__17__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__17__severity;
    __Vfunc_uvm_report_enabled__17__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__21__verbosity;
    __Vtask_uvm_report_error__21__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__21__line;
    __Vtask_uvm_report_error__21__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__21__report_enabled_checked;
    __Vtask_uvm_report_error__21__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
    __Vfunc_uvm_report_enabled__25__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
    __Vfunc_uvm_report_enabled__25__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__29__verbosity;
    __Vtask_uvm_report_error__29__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__29__line;
    __Vtask_uvm_report_error__29__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__29__report_enabled_checked;
    __Vtask_uvm_report_error__29__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__37__verbosity;
    __Vtask_uvm_report_info__37__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__37__line;
    __Vtask_uvm_report_info__37__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__37__report_enabled_checked;
    __Vtask_uvm_report_info__37__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__verbosity;
    __Vfunc_uvm_report_enabled__43__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__43__severity;
    __Vfunc_uvm_report_enabled__43__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__48__verbosity;
    __Vtask_uvm_report_error__48__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__48__line;
    __Vtask_uvm_report_error__48__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__48__report_enabled_checked;
    __Vtask_uvm_report_error__48__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__49__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__50__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    QData/*63:0*/ __VlefCall_9__get_start_offset;
    std::string __VlefCall_8__convert2string;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_6;
    QData/*63:0*/ __VlefCall_5__get_start_offset;
    QData/*63:0*/ __VlefCall_4__get_end_offset;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk390__DOT__i;
    unnamedblk390__DOT__i = 0;
    QData/*63:0*/ end_offset;
    {
        end_offset = 0ULL;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((0U == n_bytes)) {
            this->__Vfunc_uvm_report_enabled__9__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__9__severity = 2U;
            __Vfunc_uvm_report_enabled__9__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), this->__Vfunc_uvm_report_enabled__9__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__13__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__13__context_name = ""s;
                __Vtask_uvm_report_error__13__line = 0x0000027eU;
                this->__Vtask_uvm_report_error__13__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__13__verbosity = 0U;
                this->__Vtask_uvm_report_error__13__message = "Cannot reserve 0 bytes"s;
                this->__Vtask_uvm_report_error__13__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__14__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__13__id, this->__Vtask_uvm_report_error__13__message, __Vtask_uvm_report_error__13__verbosity, this->__Vtask_uvm_report_error__13__filename, __Vtask_uvm_report_error__13__line, this->__Vtask_uvm_report_error__13__context_name, (IData)(__Vtask_uvm_report_error__13__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22539]);
            } else {
                ++(vlSymsp->__Vcoverage[22540]);
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22542]);
        }
        if ((start_offset < VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 642)
             ->__PVT__start_offset)) {
            this->__Vfunc_uvm_report_enabled__17__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__17__severity = 2U;
            __Vfunc_uvm_report_enabled__17__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), this->__Vfunc_uvm_report_enabled__17__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__21__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__21__context_name = ""s;
                __Vtask_uvm_report_error__21__line = 0x00000284U;
                this->__Vtask_uvm_report_error__21__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__21__verbosity = 0U;
                this->__Vtask_uvm_report_error__21__message 
                    = VL_SFORMATF_N_NX("Cannot reserve before start of memory space: 'h%x < 'h%x",0,
                                       64,start_offset,
                                       64,VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 644)
                                       ->__PVT__start_offset) ;
                this->__Vtask_uvm_report_error__21__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__22__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__23__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__21__id, this->__Vtask_uvm_report_error__21__message, __Vtask_uvm_report_error__21__verbosity, this->__Vtask_uvm_report_error__21__filename, __Vtask_uvm_report_error__21__line, this->__Vtask_uvm_report_error__21__context_name, (IData)(__Vtask_uvm_report_error__21__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22543]);
            } else {
                ++(vlSymsp->__Vcoverage[22544]);
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22546]);
        }
        end_offset = (start_offset + VL_DIV_QQQ(64, 
                                                ((QData)((IData)(n_bytes)) 
                                                 - 1ULL), (QData)((IData)(VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 648)
                                                                          ->__PVT__n_bytes))));
        n_bytes = (IData)(((1ULL + (end_offset - start_offset)) 
                           * (QData)((IData)(VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 649)
                                             ->__PVT__n_bytes))));
        if ((end_offset > VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 651)
             ->__PVT__end_offset)) {
            this->__Vfunc_uvm_report_enabled__25__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__25__severity = 2U;
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
                __Vtask_uvm_report_error__29__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__29__context_name = ""s;
                __Vtask_uvm_report_error__29__line = 0x0000028dU;
                this->__Vtask_uvm_report_error__29__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__29__verbosity = 0U;
                this->__Vtask_uvm_report_error__29__message 
                    = VL_SFORMATF_N_NX("Cannot reserve past end of memory space: 'h%x > 'h%x",0,
                                       64,end_offset,
                                       64,VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 653)
                                       ->__PVT__end_offset) ;
                this->__Vtask_uvm_report_error__29__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__30__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__29__id, this->__Vtask_uvm_report_error__29__message, __Vtask_uvm_report_error__29__verbosity, this->__Vtask_uvm_report_error__29__filename, __Vtask_uvm_report_error__29__line, this->__Vtask_uvm_report_error__29__context_name, (IData)(__Vtask_uvm_report_error__29__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22547]);
            } else {
                ++(vlSymsp->__Vcoverage[22548]);
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22550]);
        }
        this->__Vfunc_uvm_report_enabled__33__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__33__severity = 0U;
        __Vfunc_uvm_report_enabled__33__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__34__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__35__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), this->__Vfunc_uvm_report_enabled__33__id, __VlefCall_3__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            __Vtask_uvm_report_info__37__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__37__context_name = ""s;
            __Vtask_uvm_report_info__37__line = 0x00000292U;
            this->__Vtask_uvm_report_info__37__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
            __Vtask_uvm_report_info__37__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_info__37__message 
                = VL_SFORMATF_N_NX("Attempting to reserve ['h%x:'h%x]...",0,
                                   64,start_offset,
                                   64,end_offset) ;
            this->__Vtask_uvm_report_info__37__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__38__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__39__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__37__id, this->__Vtask_uvm_report_info__37__message, __Vtask_uvm_report_info__37__verbosity, this->__Vtask_uvm_report_info__37__filename, __Vtask_uvm_report_info__37__line, this->__Vtask_uvm_report_info__37__context_name, (IData)(__Vtask_uvm_report_info__37__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[22551]);
        } else {
            ++(vlSymsp->__Vcoverage[22552]);
        }
        unnamedblk390__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk390__DOT__i, this->__PVT__in_use.size())) {
            VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk390__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 664)->__VnoInFunc_get_end_offset(vlSymsp, __VlefCall_4__get_end_offset);
            __VlefLogAnd_6 = (start_offset <= __VlefCall_4__get_end_offset);
            if (__VlefLogAnd_6) {
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk390__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 665)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_5__get_start_offset);
                __VlefLogAnd_6 = (end_offset >= __VlefCall_5__get_start_offset);
            }
            if (__VlefLogAnd_6) {
                this->__Vfunc_uvm_report_enabled__43__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__43__severity = 2U;
                __Vfunc_uvm_report_enabled__43__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__44__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__45__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__43__verbosity, (IData)(__Vfunc_uvm_report_enabled__43__severity), this->__Vfunc_uvm_report_enabled__43__id, __VlefCall_7__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_7__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk390__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 669)->__VnoInFunc_convert2string(vlSymsp, __VlefCall_8__convert2string);
                    __Vtask_uvm_report_error__48__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__48__context_name = ""s;
                    __Vtask_uvm_report_error__48__line = 0x0000029dU;
                    this->__Vtask_uvm_report_error__48__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                    __Vtask_uvm_report_error__48__verbosity = 0U;
                    this->__Vtask_uvm_report_error__48__message 
                        = VL_SFORMATF_N_NX("Cannot reserve ['h%x:'h%x] because it overlaps with %@",0,
                                           64,start_offset,
                                           64,end_offset,
                                           -1,&(__VlefCall_8__convert2string)) ;
                    this->__Vtask_uvm_report_error__48__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__49__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__49__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__50__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__50__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__48__id, this->__Vtask_uvm_report_error__48__message, __Vtask_uvm_report_error__48__verbosity, this->__Vtask_uvm_report_error__48__filename, __Vtask_uvm_report_error__48__line, this->__Vtask_uvm_report_error__48__context_name, (IData)(__Vtask_uvm_report_error__48__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[22553]);
                } else {
                    ++(vlSymsp->__Vcoverage[22554]);
                }
                reserve_region__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[22556]);
            }
            VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk390__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 674)->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_9__get_start_offset);
            if ((start_offset > __VlefCall_9__get_start_offset)) {
                reserve_region__Vfuncrtn = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_region, vlSymsp, start_offset, end_offset, 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(end_offset) 
                                                    - (IData)(start_offset))), n_bytes, 
                                                  VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam>{this});
                this->__PVT__in_use.insert(unnamedblk390__DOT__i, reserve_region__Vfuncrtn);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[22558]);
            }
            unnamedblk390__DOT__i = ((IData)(1U) + unnamedblk390__DOT__i);
            ++(vlSymsp->__Vcoverage[22559]);
        }
        reserve_region__Vfuncrtn = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_region, vlSymsp, start_offset, end_offset, 
                                          ((IData)(1U) 
                                           + ((IData)(end_offset) 
                                              - (IData)(start_offset))), n_bytes, 
                                          VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam>{this});
        this->__PVT__in_use.push_back(reserve_region__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22560]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_request_region(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_request_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__56__verbosity;
    __Vfunc_uvm_report_enabled__56__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__56__severity;
    __Vfunc_uvm_report_enabled__56__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__60__verbosity;
    __Vtask_uvm_report_error__60__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__60__line;
    __Vtask_uvm_report_error__60__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__60__report_enabled_checked;
    __Vtask_uvm_report_error__60__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    {
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == alloc)) {
            alloc = this->__PVT__default_alloc;
            ++(vlSymsp->__Vcoverage[22561]);
        } else {
            ++(vlSymsp->__Vcoverage[22562]);
        }
        VL_NULL_CHECK(alloc, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 696)->__PVT__len 
            = ((IData)(1U) + VL_DIV_III(32, (n_bytes 
                                             - (IData)(1U)), VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 696)
                                        ->__PVT__n_bytes));
        VL_NULL_CHECK(alloc, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 697)->__PVT__min_offset 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 697)
            ->__PVT__start_offset;
        VL_NULL_CHECK(alloc, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 698)->__PVT__max_offset 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 698)
            ->__PVT__end_offset;
        VL_NULL_CHECK(alloc, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 699)->__PVT__in_use 
            = this->__PVT__in_use;
        if ((VlNull{} != alloc)) {
            VL_NULL_CHECK(alloc, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 701)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if ((0U != __VlefCond_1)) {
            ++(vlSymsp->__Vcoverage[22566]);
        } else {
            this->__Vfunc_uvm_report_enabled__56__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__56__severity = 2U;
            __Vfunc_uvm_report_enabled__56__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__57__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__56__verbosity, (IData)(__Vfunc_uvm_report_enabled__56__severity), this->__Vfunc_uvm_report_enabled__56__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_error__60__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__60__context_name = ""s;
                __Vtask_uvm_report_error__60__line = 0x000002beU;
                this->__Vtask_uvm_report_error__60__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__60__verbosity = 0U;
                this->__Vtask_uvm_report_error__60__message = "Unable to randomize policy"s;
                this->__Vtask_uvm_report_error__60__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__61__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__62__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__60__id, this->__Vtask_uvm_report_error__60__message, __Vtask_uvm_report_error__60__verbosity, this->__Vtask_uvm_report_error__60__filename, __Vtask_uvm_report_error__60__line, this->__Vtask_uvm_report_error__60__context_name, (IData)(__Vtask_uvm_report_error__60__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22563]);
            } else {
                ++(vlSymsp->__Vcoverage[22564]);
            }
            request_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_reserve_region(vlSymsp, VL_NULL_CHECK(alloc, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 706)
                                         ->__PVT__start_offset, n_bytes, ""s, 0U, request_region__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22567]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_region(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> region) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__65__verbosity;
    __Vfunc_uvm_report_enabled__65__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__65__severity;
    __Vfunc_uvm_report_enabled__65__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__70__verbosity;
    __Vtask_uvm_report_error__70__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__70__line;
    __Vtask_uvm_report_error__70__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__70__report_enabled_checked;
    __Vtask_uvm_report_error__70__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__71__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__72__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__convert2string;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk391__DOT__i;
    unnamedblk391__DOT__i = 0;
    {
        if ((VlNull{} == region)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22569]);
        }
        unnamedblk391__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk391__DOT__i, this->__PVT__in_use.size())) {
            if ((this->__PVT__in_use.at(unnamedblk391__DOT__i) 
                 == region)) {
                this->__PVT__in_use.erase(unnamedblk391__DOT__i);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[22571]);
            }
            unnamedblk391__DOT__i = ((IData)(1U) + unnamedblk391__DOT__i);
            ++(vlSymsp->__Vcoverage[22572]);
        }
        this->__Vfunc_uvm_report_enabled__65__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__65__severity = 2U;
        __Vfunc_uvm_report_enabled__65__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__66__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__67__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__65__verbosity, (IData)(__Vfunc_uvm_report_enabled__65__severity), this->__Vfunc_uvm_report_enabled__65__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            VL_NULL_CHECK(region, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 721)->__VnoInFunc_convert2string(vlSymsp, __VlefCall_1__convert2string);
            __Vtask_uvm_report_error__70__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__70__context_name = ""s;
            __Vtask_uvm_report_error__70__line = 0x000002d1U;
            this->__Vtask_uvm_report_error__70__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
            __Vtask_uvm_report_error__70__verbosity = 0U;
            this->__Vtask_uvm_report_error__70__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Attempting to release unallocated region\n"s, __VlefCall_1__convert2string));
            this->__Vtask_uvm_report_error__70__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__71__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__72__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__72__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__70__id, this->__Vtask_uvm_report_error__70__message, __Vtask_uvm_report_error__70__verbosity, this->__Vtask_uvm_report_error__70__filename, __Vtask_uvm_report_error__70__line, this->__Vtask_uvm_report_error__70__context_name, (IData)(__Vtask_uvm_report_error__70__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[22573]);
        } else {
            ++(vlSymsp->__Vcoverage[22574]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22575]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_all_regions(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_all_regions\n"); );
    // Body
    this->__PVT__in_use.clear();
    ++(vlSymsp->__Vcoverage[22576]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_convert2string(Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_convert2string\n"); );
    // Body
    std::string __VlefCall_0__convert2string;
    IData/*31:0*/ unnamedblk392__DOT__i;
    unnamedblk392__DOT__i = 0;
    convert2string__Vfuncrtn = "Allocated memory regions:\n"s;
    unnamedblk392__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk392__DOT__i, this->__PVT__in_use.size())) {
        VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk392__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 734)->__VnoInFunc_convert2string(vlSymsp, __VlefCall_0__convert2string);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@   %@\n",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__VlefCall_0__convert2string));
        unnamedblk392__DOT__i = ((IData)(1U) + unnamedblk392__DOT__i);
        ++(vlSymsp->__Vcoverage[22577]);
    }
    ++(vlSymsp->__Vcoverage[22578]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_for_each(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_for_each\n"); );
    // Body
    {
        if (reset) {
            this->__PVT__for_each_idx = 0xffffffffU;
            ++(vlSymsp->__Vcoverage[22579]);
        } else {
            ++(vlSymsp->__Vcoverage[22580]);
        }
        this->__PVT__for_each_idx = ((IData)(1U) + this->__PVT__for_each_idx);
        if (VL_GTES_III(32, this->__PVT__for_each_idx, this->__PVT__in_use.size())) {
            for_each__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22582]);
        }
        for_each__Vfuncrtn = this->__PVT__in_use.at(this->__PVT__for_each_idx);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22583]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_get_memory(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_get_memory\n"); );
    // Body
    get_memory__Vfuncrtn = this->__PVT__memory;
    ++(vlSymsp->__Vcoverage[22584]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam::to_string_middle\n"); );
    // Body
    std::string out;
    out += "default_alloc:" + VL_TO_STRING(__PVT__default_alloc);
    out += ", memory:" + VL_TO_STRING(__PVT__memory);
    out += ", cfg:" + VL_TO_STRING(__PVT__cfg);
    out += ", in_use:" + VL_TO_STRING(__PVT__in_use);
    out += ", for_each_idx:" + VL_TO_STRING(__PVT__for_each_idx);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    return (out);
}
