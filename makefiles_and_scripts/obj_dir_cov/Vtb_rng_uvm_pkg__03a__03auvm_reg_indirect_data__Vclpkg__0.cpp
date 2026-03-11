// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg::init(vlProcess, vlSymsp, name, n_bits, has_cover);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[22319]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_build\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22320]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> idx, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> reg_a, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> regfile_parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_configure\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__map;
    CData/*0:0*/ unnamedblk1__DOT__map__Vfirst;
    unnamedblk1__DOT__map__Vfirst = 0;
    Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure(vlSymsp, blk_parent, regfile_parent, ""s);
    this->__PVT__m_idx = idx;
    this->__PVT__m_tbl = reg_a;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 1U, VlNull{});
    __VlefExpr_1 = (0U != Vtb_rng_uvm_pkg__03a__03auvm_reg::__PVT__m_maps.first(unnamedblk1__DOT__map));
    if (__VlefExpr_1) {
        unnamedblk1__DOT__map__Vfirst = 1U;
        while (true) {
            __VlefExpr_2 = unnamedblk1__DOT__map__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_2)))) {
                __VlefExpr_2 = (0U != Vtb_rng_uvm_pkg__03a__03auvm_reg::__PVT__m_maps.next(unnamedblk1__DOT__map));
            }
            if (!(__VlefExpr_2)) break;
            unnamedblk1__DOT__map__Vfirst = 0U;
            this->__VnoInFunc_add_frontdoors(vlSymsp, unnamedblk1__DOT__map);
            ++(vlSymsp->__Vcoverage[22321]);
        }
        ++(vlSymsp->__Vcoverage[22322]);
    } else {
        ++(vlSymsp->__Vcoverage[22323]);
    }
    ++(vlSymsp->__Vcoverage[22324]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_map\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(vlSymsp, map);
    this->__VnoInFunc_add_frontdoors(vlSymsp, map);
    ++(vlSymsp->__Vcoverage[22325]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_frontdoors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__verbosity;
    __Vfunc_uvm_report_enabled__8__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__8__severity;
    __Vfunc_uvm_report_enabled__8__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__13__verbosity;
    __Vtask_uvm_report_error__13__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__13__line;
    __Vtask_uvm_report_error__13__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__13__report_enabled_checked;
    __Vtask_uvm_report_error__13__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_3__is_in_map;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq> unnamedblk2__DOT__unnamedblk3__DOT__fd;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_tbl.size())) {
        {
            if ((VlNull{} == this->__PVT__m_tbl.at(unnamedblk2__DOT__i))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__Vfunc_uvm_report_enabled__8__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
                __Vfunc_uvm_report_enabled__8__severity = 2U;
                __Vfunc_uvm_report_enabled__8__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                    __Vtask_uvm_report_error__13__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__13__context_name = ""s;
                    __Vtask_uvm_report_error__13__line = 0x0000005aU;
                    this->__Vtask_uvm_report_error__13__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
                    __Vtask_uvm_report_error__13__verbosity = 0U;
                    this->__Vtask_uvm_report_error__13__message 
                        = VL_SFORMATF_N_NX("Indirect register #%0d is NULL",0,
                                           32,unnamedblk2__DOT__i) ;
                    this->__Vtask_uvm_report_error__13__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__14__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__15__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__13__id, this->__Vtask_uvm_report_error__13__message, __Vtask_uvm_report_error__13__verbosity, this->__Vtask_uvm_report_error__13__filename, __Vtask_uvm_report_error__13__line, this->__Vtask_uvm_report_error__13__context_name, (IData)(__Vtask_uvm_report_error__13__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[22326]);
                } else {
                    ++(vlSymsp->__Vcoverage[22327]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[22329]);
            }
            unnamedblk2__DOT__unnamedblk3__DOT__fd 
                = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq, vlProcess, vlSymsp, this->__PVT__m_idx, unnamedblk2__DOT__i, 
                         VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data>{this});
            VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 94)->__VnoInFunc_is_in_map(vlSymsp, map, __VlefCall_3__is_in_map);
            if (__VlefCall_3__is_in_map) {
                VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk2__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 95)->__VnoInFunc_set_frontdoor(vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__fd, map, ""s, 0U);
                ++(vlSymsp->__Vcoverage[22330]);
            } else {
                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 97)->__VnoInFunc_add_reg(vlSymsp, this->__PVT__m_tbl.at(unnamedblk2__DOT__i), 0xffffffffffffffffULL, "RW"s, 1U, unnamedblk2__DOT__unnamedblk3__DOT__fd);
                ++(vlSymsp->__Vcoverage[22331]);
            }
            __Vlabel0: ;
        }
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        ++(vlSymsp->__Vcoverage[22332]);
    }
    ++(vlSymsp->__Vcoverage[22333]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_do_predict\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__30__verbosity;
    __Vtask_uvm_report_error__30__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__30__line;
    __Vtask_uvm_report_error__30__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__30__report_enabled_checked;
    __Vtask_uvm_report_error__30__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    // Body
    QData/*63:0*/ __VlefCall_6__get;
    QData/*63:0*/ __VlefCall_5__get;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    QData/*63:0*/ __VlefCall_0__get;
    IData/*31:0*/ unnamedblk4__DOT__idx;
    {
        VL_NULL_CHECK(this->__PVT__m_idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 104)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_0__get);
        if ((__VlefCall_0__get >= (QData)((IData)(this->__PVT__m_tbl.size())))) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__Vfunc_uvm_report_enabled__23__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
            __Vfunc_uvm_report_enabled__23__severity = 2U;
            __Vfunc_uvm_report_enabled__23__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__23__verbosity, (IData)(__Vfunc_uvm_report_enabled__23__severity), this->__Vfunc_uvm_report_enabled__23__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 105)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 105)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_5__get);
                __Vtask_uvm_report_error__30__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__30__context_name = ""s;
                __Vtask_uvm_report_error__30__line = 0x00000069U;
                this->__Vtask_uvm_report_error__30__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
                __Vtask_uvm_report_error__30__verbosity = 0U;
                this->__Vtask_uvm_report_error__30__message 
                    = VL_SFORMATF_N_NX("Address register %@ has a value (%0#) greater than the maximum indirect register array size (%0d)",0,
                                       -1,&(__VlefCall_4__get_full_name),
                                       64,__VlefCall_5__get,
                                       32,this->__PVT__m_tbl.size()) ;
                this->__Vtask_uvm_report_error__30__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__30__id, this->__Vtask_uvm_report_error__30__message, __Vtask_uvm_report_error__30__verbosity, this->__Vtask_uvm_report_error__30__filename, __Vtask_uvm_report_error__30__line, this->__Vtask_uvm_report_error__30__context_name, (IData)(__Vtask_uvm_report_error__30__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22334]);
            } else {
                ++(vlSymsp->__Vcoverage[22335]);
            }
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 106)->__PVT__status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22337]);
        }
        VL_NULL_CHECK(this->__PVT__m_idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 112)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_6__get);
        unnamedblk4__DOT__idx = (IData)(__VlefCall_6__get);
        VL_NULL_CHECK(this->__PVT__m_tbl.at(unnamedblk4__DOT__idx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 113)->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22338]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_local_map\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 119)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, get_local_map__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[22339]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_add_field\n"); );
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
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__38__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__38__severity = 2U;
    __Vfunc_uvm_report_enabled__38__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__39__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__40__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__38__verbosity, (IData)(__Vfunc_uvm_report_enabled__38__severity), this->__Vfunc_uvm_report_enabled__38__id, __VlefCall_1__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__43__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__43__context_name = ""s;
        __Vtask_uvm_report_error__43__line = 0x0000007eU;
        this->__Vtask_uvm_report_error__43__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__43__verbosity = 0U;
        this->__Vtask_uvm_report_error__43__message = "Cannot add field to an indirect data access register"s;
        this->__Vtask_uvm_report_error__43__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__44__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__45__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__43__id, this->__Vtask_uvm_report_error__43__message, __Vtask_uvm_report_error__43__verbosity, this->__Vtask_uvm_report_error__43__filename, __Vtask_uvm_report_error__43__line, this->__Vtask_uvm_report_error__43__context_name, (IData)(__Vtask_uvm_report_error__43__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[442]);
        ++(vlSymsp->__Vcoverage[22340]);
    } else {
        ++(vlSymsp->__Vcoverage[22341]);
    }
    ++(vlSymsp->__Vcoverage[22342]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__48__verbosity;
    __Vfunc_uvm_report_enabled__48__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__48__severity;
    __Vfunc_uvm_report_enabled__48__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__49__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__50__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__53__verbosity;
    __Vtask_uvm_report_error__53__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__53__line;
    __Vtask_uvm_report_error__53__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__53__report_enabled_checked;
    __Vtask_uvm_report_error__53__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__54__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__55__Vfuncout;
    // Body
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__48__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__48__severity = 2U;
    __Vfunc_uvm_report_enabled__48__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__49__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__49__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__50__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__50__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__48__verbosity, (IData)(__Vfunc_uvm_report_enabled__48__severity), this->__Vfunc_uvm_report_enabled__48__id, __VlefCall_1__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__53__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__53__context_name = ""s;
        __Vtask_uvm_report_error__53__line = 0x00000084U;
        this->__Vtask_uvm_report_error__53__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__53__verbosity = 0U;
        this->__Vtask_uvm_report_error__53__message = "Cannot set() an indirect data access register"s;
        this->__Vtask_uvm_report_error__53__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__54__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__54__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__55__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__55__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__53__id, this->__Vtask_uvm_report_error__53__message, __Vtask_uvm_report_error__53__verbosity, this->__Vtask_uvm_report_error__53__filename, __Vtask_uvm_report_error__53__line, this->__Vtask_uvm_report_error__53__context_name, (IData)(__Vtask_uvm_report_error__53__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[442]);
        ++(vlSymsp->__Vcoverage[22343]);
    } else {
        ++(vlSymsp->__Vcoverage[22344]);
    }
    ++(vlSymsp->__Vcoverage[22345]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__58__verbosity;
    __Vfunc_uvm_report_enabled__58__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__58__severity;
    __Vfunc_uvm_report_enabled__58__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__59__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__60__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__63__verbosity;
    __Vtask_uvm_report_error__63__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__63__line;
    __Vtask_uvm_report_error__63__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__63__report_enabled_checked;
    __Vtask_uvm_report_error__63__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    // Body
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    get__Vfuncrtn = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__58__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__58__severity = 2U;
    __Vfunc_uvm_report_enabled__58__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__59__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__60__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__60__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__58__verbosity, (IData)(__Vfunc_uvm_report_enabled__58__severity), this->__Vfunc_uvm_report_enabled__58__id, __VlefCall_1__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__63__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__63__context_name = ""s;
        __Vtask_uvm_report_error__63__line = 0x00000089U;
        this->__Vtask_uvm_report_error__63__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__63__verbosity = 0U;
        this->__Vtask_uvm_report_error__63__message = "Cannot get() an indirect data access register"s;
        this->__Vtask_uvm_report_error__63__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__64__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__65__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__63__id, this->__Vtask_uvm_report_error__63__message, __Vtask_uvm_report_error__63__verbosity, this->__Vtask_uvm_report_error__63__filename, __Vtask_uvm_report_error__63__line, this->__Vtask_uvm_report_error__63__context_name, (IData)(__Vtask_uvm_report_error__63__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[442]);
        ++(vlSymsp->__Vcoverage[22346]);
    } else {
        ++(vlSymsp->__Vcoverage[22347]);
    }
    get__Vfuncrtn = 0ULL;
    ++(vlSymsp->__Vcoverage[22348]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_indirect_reg(Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_indirect_reg__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_get_indirect_reg\n"); );
    // Body
    QData/*63:0*/ __VlefCall_0__get_mirrored_value;
    IData/*31:0*/ idx;
    VL_NULL_CHECK(this->__PVT__m_idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 143)->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __VlefCall_0__get_mirrored_value);
    idx = (IData)(__VlefCall_0__get_mirrored_value);
    get_indirect_reg__Vfuncrtn = this->__PVT__m_tbl.at(idx);
    ++(vlSymsp->__Vcoverage[22349]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[22350]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__71__verbosity;
    __Vfunc_uvm_report_enabled__71__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__71__severity;
    __Vfunc_uvm_report_enabled__71__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__76__verbosity;
    __Vtask_uvm_report_warning__76__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__76__line;
    __Vtask_uvm_report_warning__76__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__76__report_enabled_checked;
    __Vtask_uvm_report_warning__76__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk5__DOT__blk;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> unnamedblk6__DOT__rw;
    status = 0U;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk5__DOT__blk);
        VL_NULL_CHECK(unnamedblk5__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 163)->__VnoInFunc_get_default_door(vlSymsp, path);
        ++(vlSymsp->__Vcoverage[22351]);
    } else {
        ++(vlSymsp->__Vcoverage[22352]);
    }
    if ((1U == path)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__Vfunc_uvm_report_enabled__71__id = 
            VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
        __Vfunc_uvm_report_enabled__71__severity = 1U;
        __Vfunc_uvm_report_enabled__71__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__72__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__73__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__71__verbosity, (IData)(__Vfunc_uvm_report_enabled__71__severity), this->__Vfunc_uvm_report_enabled__71__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__76__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__76__context_name = ""s;
            __Vtask_uvm_report_warning__76__line = 0x000000a7U;
            this->__Vtask_uvm_report_warning__76__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__76__verbosity = 0U;
            this->__Vtask_uvm_report_warning__76__message = "Cannot backdoor-write an indirect data access register. Switching to frontdoor."s;
            this->__Vtask_uvm_report_warning__76__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__77__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__78__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__76__id, this->__Vtask_uvm_report_warning__76__message, __Vtask_uvm_report_warning__76__verbosity, this->__Vtask_uvm_report_warning__76__filename, __Vtask_uvm_report_warning__76__line, this->__Vtask_uvm_report_warning__76__context_name, (IData)(__Vtask_uvm_report_warning__76__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[22353]);
        } else {
            ++(vlSymsp->__Vcoverage[22354]);
        }
        path = 0U;
        ++(vlSymsp->__Vcoverage[22355]);
    } else {
        ++(vlSymsp->__Vcoverage[22356]);
    }
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), unnamedblk6__DOT__rw);
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 178)->__PVT__element 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data>{this};
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 179)->__PVT__element_kind = 0U;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 180)->__PVT__kind = 1U;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 181)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 182)->__PVT__path 
        = path;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 183)->__PVT__map 
        = map;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 184)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 185)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 186)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 187)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 188)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, unnamedblk6__DOT__rw);
    status = VL_NULL_CHECK(unnamedblk6__DOT__rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 192)
        ->__PVT__status;
    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
    ++(vlSymsp->__Vcoverage[22357]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__88__verbosity;
    __Vfunc_uvm_report_enabled__88__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__88__severity;
    __Vfunc_uvm_report_enabled__88__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__89__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__90__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__93__verbosity;
    __Vtask_uvm_report_warning__93__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__93__line;
    __Vtask_uvm_report_warning__93__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__93__report_enabled_checked;
    __Vtask_uvm_report_warning__93__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
    IData/*31:0*/ __Vtask_read__97__status;
    __Vtask_read__97__status = 0;
    QData/*63:0*/ __Vtask_read__97__value;
    __Vtask_read__97__value = 0;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk7__DOT__blk;
    status = 0U;
    value = 0ULL;
    if ((3U == path)) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk7__DOT__blk);
        VL_NULL_CHECK(unnamedblk7__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 210)->__VnoInFunc_get_default_door(vlSymsp, path);
        ++(vlSymsp->__Vcoverage[22358]);
    } else {
        ++(vlSymsp->__Vcoverage[22359]);
    }
    if ((1U == path)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__Vfunc_uvm_report_enabled__88__id = 
            VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
        __Vfunc_uvm_report_enabled__88__severity = 1U;
        __Vfunc_uvm_report_enabled__88__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__90__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__90__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__88__verbosity, (IData)(__Vfunc_uvm_report_enabled__88__severity), this->__Vfunc_uvm_report_enabled__88__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__93__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__93__context_name = ""s;
            __Vtask_uvm_report_warning__93__line = 0x000000d6U;
            this->__Vtask_uvm_report_warning__93__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
            __Vtask_uvm_report_warning__93__verbosity = 0U;
            this->__Vtask_uvm_report_warning__93__message = "Cannot backdoor-read an indirect data access register. Switching to frontdoor."s;
            this->__Vtask_uvm_report_warning__93__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__94__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__94__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__95__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__93__id, this->__Vtask_uvm_report_warning__93__message, __Vtask_uvm_report_warning__93__verbosity, this->__Vtask_uvm_report_warning__93__filename, __Vtask_uvm_report_warning__93__line, this->__Vtask_uvm_report_warning__93__context_name, (IData)(__Vtask_uvm_report_warning__93__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[22360]);
        } else {
            ++(vlSymsp->__Vcoverage[22361]);
        }
        path = 0U;
        ++(vlSymsp->__Vcoverage[22362]);
    } else {
        ++(vlSymsp->__Vcoverage[22363]);
    }
    co_await Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__97__status, __Vtask_read__97__value, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_read__97__status;
    value = __Vtask_read__97__value;
    ++(vlSymsp->__Vcoverage[22364]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__99__verbosity;
    __Vfunc_uvm_report_enabled__99__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__99__severity;
    __Vfunc_uvm_report_enabled__99__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__100__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__101__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__104__verbosity;
    __Vtask_uvm_report_error__104__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__104__line;
    __Vtask_uvm_report_error__104__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__104__report_enabled_checked;
    __Vtask_uvm_report_error__104__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__99__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__99__severity = 2U;
    __Vfunc_uvm_report_enabled__99__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__100__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__100__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__101__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__101__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__99__verbosity, (IData)(__Vfunc_uvm_report_enabled__99__severity), this->__Vfunc_uvm_report_enabled__99__id, __VlefCall_1__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__104__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__104__context_name = ""s;
        __Vtask_uvm_report_error__104__line = 0x000000e4U;
        this->__Vtask_uvm_report_error__104__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__104__verbosity = 0U;
        this->__Vtask_uvm_report_error__104__message = "Cannot poke() an indirect data access register"s;
        this->__Vtask_uvm_report_error__104__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__105__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__106__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__104__id, this->__Vtask_uvm_report_error__104__message, __Vtask_uvm_report_error__104__verbosity, this->__Vtask_uvm_report_error__104__filename, __Vtask_uvm_report_error__104__line, this->__Vtask_uvm_report_error__104__context_name, (IData)(__Vtask_uvm_report_error__104__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[442]);
        ++(vlSymsp->__Vcoverage[22365]);
    } else {
        ++(vlSymsp->__Vcoverage[22366]);
    }
    status = 1U;
    ++(vlSymsp->__Vcoverage[22367]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__109__verbosity;
    __Vfunc_uvm_report_enabled__109__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__109__severity;
    __Vfunc_uvm_report_enabled__109__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__114__verbosity;
    __Vtask_uvm_report_error__114__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__114__line;
    __Vtask_uvm_report_error__114__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__114__report_enabled_checked;
    __Vtask_uvm_report_error__114__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__Vfunc_uvm_report_enabled__109__id = VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name);
    __Vfunc_uvm_report_enabled__109__severity = 2U;
    __Vfunc_uvm_report_enabled__109__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__110__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__111__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__109__verbosity, (IData)(__Vfunc_uvm_report_enabled__109__severity), this->__Vfunc_uvm_report_enabled__109__id, __VlefCall_1__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        __Vtask_uvm_report_error__114__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__114__context_name = ""s;
        __Vtask_uvm_report_error__114__line = 0x000000efU;
        this->__Vtask_uvm_report_error__114__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh"s;
        __Vtask_uvm_report_error__114__verbosity = 0U;
        this->__Vtask_uvm_report_error__114__message = "Cannot peek() an indirect data access register"s;
        this->__Vtask_uvm_report_error__114__id = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__115__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__116__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__114__id, this->__Vtask_uvm_report_error__114__message, __Vtask_uvm_report_error__114__verbosity, this->__Vtask_uvm_report_error__114__filename, __Vtask_uvm_report_error__114__line, this->__Vtask_uvm_report_error__114__context_name, (IData)(__Vtask_uvm_report_error__114__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[442]);
        ++(vlSymsp->__Vcoverage[22368]);
    } else {
        ++(vlSymsp->__Vcoverage[22369]);
    }
    status = 1U;
    ++(vlSymsp->__Vcoverage[22370]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_update\n"); );
    // Body
    VL_KEEP_THIS;
    status = 0U;
    ++(vlSymsp->__Vcoverage[22371]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_mirror\n"); );
    // Body
    VL_KEEP_THIS;
    status = 0U;
    ++(vlSymsp->__Vcoverage[22372]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::~Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_indirect_data::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_idx:" + VL_TO_STRING(__PVT__m_idx);
    out += ", m_tbl:" + VL_TO_STRING(__PVT__m_tbl);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg::to_string_middle();
    return (out);
}
