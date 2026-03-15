// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi121> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi121__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[23373]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_map"s;
    ++(vlSymsp->__Vcoverage[23378]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_backdoor)) {
        this->__PVT__m_backdoor = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "Backdoor"s);
        ++(vlSymsp->__Vcoverage[23380]);
    } else {
        ++(vlSymsp->__Vcoverage[23381]);
    }
    backdoor__Vfuncrtn = this->__PVT__m_backdoor;
    ++(vlSymsp->__Vcoverage[23382]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi121> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi121__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[23374]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "uvm_reg_map"s);
        ++(vlSymsp->__Vcoverage[23375]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[23376]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[23377]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_map"s;
    ++(vlSymsp->__Vcoverage[23379]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_auto_predict(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_auto_predict\n"); );
    // Body
    this->__PVT__m_auto_predict = on;
    ++(vlSymsp->__Vcoverage[23383]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_auto_predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict\n"); );
    // Body
    get_auto_predict__Vfuncrtn = this->__PVT__m_auto_predict;
    ++(vlSymsp->__Vcoverage[23384]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_check_on_read(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_check_on_read\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__submap;
    CData/*0:0*/ unnamedblk1__DOT__submap__Vfirst;
    unnamedblk1__DOT__submap__Vfirst = 0;
    this->__PVT__m_check_on_read = on;
    __VlefExpr_0 = (0U != this->__PVT__m_submaps.first(unnamedblk1__DOT__submap));
    if (__VlefExpr_0) {
        unnamedblk1__DOT__submap__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk1__DOT__submap__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_submaps.next(unnamedblk1__DOT__submap));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk1__DOT__submap__Vfirst = 0U;
            VL_NULL_CHECK(unnamedblk1__DOT__submap, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 392)->__VnoInFunc_set_check_on_read(vlSymsp, on);
            ++(vlSymsp->__Vcoverage[23385]);
        }
        ++(vlSymsp->__Vcoverage[23386]);
    } else {
        ++(vlSymsp->__Vcoverage[23387]);
    }
    ++(vlSymsp->__Vcoverage[23388]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_on_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read\n"); );
    // Body
    get_check_on_read__Vfuncrtn = this->__PVT__m_check_on_read;
    ++(vlSymsp->__Vcoverage[23389]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_transaction_order_policy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy> pol) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_transaction_order_policy\n"); );
    // Body
    this->__PVT__policy = pol;
    ++(vlSymsp->__Vcoverage[23390]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_transaction_order_policy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy> &get_transaction_order_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_transaction_order_policy\n"); );
    // Body
    get_transaction_order_policy__Vfuncrtn = this->__PVT__policy;
    ++(vlSymsp->__Vcoverage[23391]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_ceil(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &ceil__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_ceil\n"); );
    // Body
    IData/*31:0*/ r;
    IData/*31:0*/ r0;
    r = VL_DIV_III(32, a, b);
    r0 = VL_MODDIV_III(32, a, b);
    ceil__Vfuncrtn = ((0U != r0) ? ((IData)(1U) + r)
                       : r);
    ++(vlSymsp->__Vcoverage[23392]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_unregister(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_unregister\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk2__DOT__idx;
    unnamedblk2__DOT__idx = 0;
    IData/*31:0*/ unnamedblk3__DOT__idx;
    unnamedblk3__DOT__idx = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk4__DOT__map_;
    CData/*0:0*/ unnamedblk4__DOT__map___Vfirst;
    unnamedblk4__DOT__map___Vfirst = 0;
    QData/*63:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    CData/*0:0*/ unnamedblk5__DOT__i__Vfirst;
    unnamedblk5__DOT__i__Vfirst = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> q;
    q.clear();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__VnoInFunc_get_root_blocks(vlSymsp, q);
    unnamedblk2__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__idx, q.size())) {
        VL_NULL_CHECK(q.at(unnamedblk2__DOT__idx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 508)->__VnoInFunc_set_lock(vlSymsp, 0U);
        unnamedblk2__DOT__idx = ((IData)(1U) + unnamedblk2__DOT__idx);
        ++(vlSymsp->__Vcoverage[23393]);
    }
    unnamedblk3__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__idx, q.size())) {
        VL_NULL_CHECK(q.at(unnamedblk3__DOT__idx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 511)->__VnoInFunc_unregister(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk3__DOT__idx = ((IData)(1U) + unnamedblk3__DOT__idx);
        ++(vlSymsp->__Vcoverage[23394]);
    }
    __VlefExpr_0 = (0U != this->__PVT__m_submaps.first(unnamedblk4__DOT__map_));
    if (__VlefExpr_0) {
        unnamedblk4__DOT__map___Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk4__DOT__map___Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_submaps.next(unnamedblk4__DOT__map_));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk4__DOT__map___Vfirst = 0U;
            VL_NULL_CHECK(unnamedblk4__DOT__map_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 514)->__VnoInFunc_unregister(vlSymsp);
            ++(vlSymsp->__Vcoverage[23395]);
        }
        ++(vlSymsp->__Vcoverage[23396]);
    } else {
        ++(vlSymsp->__Vcoverage[23397]);
    }
    this->__PVT__m_submaps.clear();
    this->__PVT__m_submap_rights.clear();
    __VlefExpr_2 = (0U != this->__PVT__m_regs_by_offset.first(unnamedblk5__DOT__i));
    if (__VlefExpr_2) {
        unnamedblk5__DOT__i__Vfirst = 1U;
        while (true) {
            __VlefExpr_3 = unnamedblk5__DOT__i__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_3)))) {
                __VlefExpr_3 = (0U != this->__PVT__m_regs_by_offset.next(unnamedblk5__DOT__i));
            }
            if (!(__VlefExpr_3)) break;
            unnamedblk5__DOT__i__Vfirst = 0U;
            VL_NULL_CHECK(this->__PVT__m_regs_by_offset
                          .at(unnamedblk5__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 521)->__VnoInFunc_unregister(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this});
            ++(vlSymsp->__Vcoverage[23398]);
        }
        ++(vlSymsp->__Vcoverage[23399]);
    } else {
        ++(vlSymsp->__Vcoverage[23400]);
    }
    this->__PVT__m_regs_by_offset.clear();
    this->__PVT__m_regs_by_offset_wo.clear();
    this->__PVT__m_mems_by_offset.clear();
    this->__PVT__m_regs_info.clear();
    this->__PVT__m_mems_info.clear();
    this->__PVT__m_parent_map = VlNull{};
    ++(vlSymsp->__Vcoverage[23401]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone_and_update(Vtb_rng__Syms* __restrict vlSymsp, std::string rights, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &clone_and_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone_and_update\n"); );
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
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefExpr_6;
    CData/*0:0*/ __VlefExpr_5;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    std::string __VlefCall_2__get_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk6__DOT__m;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk6__DOT__b;
    QData/*63:0*/ unnamedblk6__DOT__unnamedblk7__DOT__i;
    unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    CData/*0:0*/ unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst;
    unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__rg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info;
    VlWide<5>/*159:0*/ unnamedblk6__DOT__unnamedblk9__DOT__i;
    VL_ZERO_W(160, unnamedblk6__DOT__unnamedblk9__DOT__i);
    CData/*0:0*/ unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst;
    unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info;
    if ((VlNull{} != this->__PVT__m_parent_map)) {
        this->__Vfunc_uvm_report_enabled__9__id = "UVM/REG/CLONEMAPWITHPARENT"s;
        __Vfunc_uvm_report_enabled__9__severity = 2U;
        __Vfunc_uvm_report_enabled__9__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__10__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), this->__Vfunc_uvm_report_enabled__9__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__13__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__13__context_name = ""s;
            __Vtask_uvm_report_error__13__line = 0x00000216U;
            this->__Vtask_uvm_report_error__13__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__13__verbosity = 0U;
            this->__Vtask_uvm_report_error__13__message = "cannot clone a map which already has a parent"s;
            this->__Vtask_uvm_report_error__13__id = "UVM/REG/CLONEMAPWITHPARENT"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__13__id, this->__Vtask_uvm_report_error__13__message, __Vtask_uvm_report_error__13__verbosity, this->__Vtask_uvm_report_error__13__filename, __Vtask_uvm_report_error__13__line, this->__Vtask_uvm_report_error__13__context_name, (IData)(__Vtask_uvm_report_error__13__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[23402]);
        } else {
            ++(vlSymsp->__Vcoverage[23403]);
        }
        ++(vlSymsp->__Vcoverage[23404]);
    } else {
        ++(vlSymsp->__Vcoverage[23405]);
    }
    if ((0U != this->__PVT__m_submaps.size())) {
        this->__Vfunc_uvm_report_enabled__17__id = "UVM/REG/CLONEMAPWITHCHILDREN"s;
        __Vfunc_uvm_report_enabled__17__severity = 2U;
        __Vfunc_uvm_report_enabled__17__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__18__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__19__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), this->__Vfunc_uvm_report_enabled__17__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            __Vtask_uvm_report_error__21__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__21__context_name = ""s;
            __Vtask_uvm_report_error__21__line = 0x00000217U;
            this->__Vtask_uvm_report_error__21__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__21__verbosity = 0U;
            this->__Vtask_uvm_report_error__21__message = "cannot clone a map which already has children"s;
            this->__Vtask_uvm_report_error__21__id = "UVM/REG/CLONEMAPWITHCHILDREN"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__21__id, this->__Vtask_uvm_report_error__21__message, __Vtask_uvm_report_error__21__verbosity, this->__Vtask_uvm_report_error__21__filename, __Vtask_uvm_report_error__21__line, this->__Vtask_uvm_report_error__21__context_name, (IData)(__Vtask_uvm_report_error__21__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[23406]);
        } else {
            ++(vlSymsp->__Vcoverage[23407]);
        }
        ++(vlSymsp->__Vcoverage[23408]);
    } else {
        ++(vlSymsp->__Vcoverage[23409]);
    }
    this->__VnoInFunc_get_parent(vlSymsp, unnamedblk6__DOT__b);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
    VL_NULL_CHECK(unnamedblk6__DOT__b, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 543)->__VnoInFunc_create_map(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), 0ULL, this->__PVT__m_n_bytes, this->__PVT__m_endian, (IData)(this->__PVT__m_byte_addressing), unnamedblk6__DOT__m);
    __VlefExpr_3 = (0U != this->__PVT__m_regs_by_offset.first(unnamedblk6__DOT__unnamedblk7__DOT__i));
    if (__VlefExpr_3) {
        unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 1U;
        while (true) {
            __VlefExpr_4 = unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_4)))) {
                __VlefExpr_4 = (0U != this->__PVT__m_regs_by_offset.next(unnamedblk6__DOT__unnamedblk7__DOT__i));
            }
            if (!(__VlefExpr_4)) break;
            unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 0U;
            unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__rg 
                = this->__PVT__m_regs_by_offset.at(unnamedblk6__DOT__unnamedblk7__DOT__i);
            this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__rg, 1U, unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info);
            VL_NULL_CHECK(unnamedblk6__DOT__m, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 548)->__VnoInFunc_add_reg(vlSymsp, unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__rg, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 548)
                                                                                ->__PVT__offset, rights, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 548)
                                                                                ->__PVT__unmapped, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 548)
                                                                                ->__PVT__frontdoor);
            ++(vlSymsp->__Vcoverage[23410]);
        }
        ++(vlSymsp->__Vcoverage[23411]);
    } else {
        ++(vlSymsp->__Vcoverage[23412]);
    }
    __VlefExpr_5 = (0U != this->__PVT__m_mems_by_offset.first(unnamedblk6__DOT__unnamedblk9__DOT__i));
    if (__VlefExpr_5) {
        unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 1U;
        while (true) {
            __VlefExpr_6 = unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_6)))) {
                __VlefExpr_6 = (0U != this->__PVT__m_mems_by_offset.next(unnamedblk6__DOT__unnamedblk9__DOT__i));
            }
            if (!(__VlefExpr_6)) break;
            unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 0U;
            unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rg 
                = this->__PVT__m_mems_by_offset.at(unnamedblk6__DOT__unnamedblk9__DOT__i);
            this->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rg, 1U, unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info);
            VL_NULL_CHECK(unnamedblk6__DOT__m, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 553)->__VnoInFunc_add_mem(vlSymsp, unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rg, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 553)
                                                                                ->__PVT__offset, rights, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 553)
                                                                                ->__PVT__unmapped, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 553)
                                                                                ->__PVT__frontdoor);
            ++(vlSymsp->__Vcoverage[23413]);
        }
        ++(vlSymsp->__Vcoverage[23414]);
    } else {
        ++(vlSymsp->__Vcoverage[23415]);
    }
    clone_and_update__Vfuncrtn = unnamedblk6__DOT__m;
    ++(vlSymsp->__Vcoverage[23416]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, 
                                              VL_CVT_PACK_STR_NN(
                                                                 ((""s 
                                                                   == name)
                                                                   ? "default_map"s
                                                                   : name)));
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_auto_predict = 0U;
    this->__PVT__m_check_on_read = 0U;
    if ((""s == name)) {
        ++(vlSymsp->__Vcoverage[23417]);
    }
    if ((1U & (~ (""s == name)))) {
        ++(vlSymsp->__Vcoverage[23418]);
    }
    ++(vlSymsp->__Vcoverage[23419]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_configure\n"); );
    // Body
    this->__PVT__m_parent = parent;
    this->__PVT__m_n_bytes = n_bytes;
    this->__PVT__m_endian = endian;
    this->__PVT__m_base_addr = base_addr;
    this->__PVT__m_byte_addressing = byte_addressing;
    ++(vlSymsp->__Vcoverage[23420]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__39__verbosity;
    __Vtask_uvm_report_error__39__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__39__line;
    __Vtask_uvm_report_error__39__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__39__report_enabled_checked;
    __Vtask_uvm_report_error__39__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__40__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__41__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__verbosity;
    __Vfunc_uvm_report_enabled__45__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__45__severity;
    __Vfunc_uvm_report_enabled__45__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__51__verbosity;
    __Vtask_uvm_report_error__51__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__51__line;
    __Vtask_uvm_report_error__51__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__51__report_enabled_checked;
    __Vtask_uvm_report_error__51__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __VlefCall_4__get_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __VlefCall_3__get_parent;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk484__DOT__info;
    {
        if (this->__PVT__m_regs_info.exists(rg)) {
            this->__Vfunc_uvm_report_enabled__33__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__33__severity = 2U;
            __Vfunc_uvm_report_enabled__33__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__34__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__35__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), this->__Vfunc_uvm_report_enabled__33__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 600)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                __Vtask_uvm_report_error__39__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__39__context_name = ""s;
                __Vtask_uvm_report_error__39__line = 0x00000258U;
                this->__Vtask_uvm_report_error__39__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__39__verbosity = 0U;
                this->__Vtask_uvm_report_error__39__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' has already been added to map '"s), __VlefCall_2__get_name), "'"s));
                this->__Vtask_uvm_report_error__39__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__40__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__40__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__41__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__41__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__39__id, this->__Vtask_uvm_report_error__39__message, __Vtask_uvm_report_error__39__verbosity, this->__Vtask_uvm_report_error__39__filename, __Vtask_uvm_report_error__39__line, this->__Vtask_uvm_report_error__39__context_name, (IData)(__Vtask_uvm_report_error__39__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23421]);
            } else {
                ++(vlSymsp->__Vcoverage[23422]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23424]);
        }
        VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 604)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_3__get_parent);
        this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_4__get_parent);
        if ((__VlefCall_3__get_parent != __VlefCall_4__get_parent)) {
            this->__Vfunc_uvm_report_enabled__45__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__45__severity = 2U;
            __Vfunc_uvm_report_enabled__45__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__46__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__47__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__45__verbosity, (IData)(__Vfunc_uvm_report_enabled__45__severity), this->__Vfunc_uvm_report_enabled__45__id, __VlefCall_5__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 607)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_error__51__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__51__context_name = ""s;
                __Vtask_uvm_report_error__51__line = 0x0000025fU;
                this->__Vtask_uvm_report_error__51__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__51__verbosity = 0U;
                this->__Vtask_uvm_report_error__51__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_6__get_full_name), "' may not be added to address map '"s), __VlefCall_7__get_full_name), "' : they are not in the same block"s));
                this->__Vtask_uvm_report_error__51__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__52__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__53__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__51__id, this->__Vtask_uvm_report_error__51__message, __Vtask_uvm_report_error__51__verbosity, this->__Vtask_uvm_report_error__51__filename, __Vtask_uvm_report_error__51__line, this->__Vtask_uvm_report_error__51__context_name, (IData)(__Vtask_uvm_report_error__51__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23425]);
            } else {
                ++(vlSymsp->__Vcoverage[23426]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23428]);
        }
        VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 611)->__VnoInFunc_add_map(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk484__DOT__info = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 615)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 616)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 617)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 618)->__PVT__frontdoor 
            = frontdoor;
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 619)->__PVT__is_initialized = 0U;
        this->__PVT__m_regs_info.at(rg) = unnamedblk484__DOT__info;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23429]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__57__verbosity;
    __Vfunc_uvm_report_enabled__57__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__57__severity;
    __Vfunc_uvm_report_enabled__57__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__63__verbosity;
    __Vtask_uvm_report_error__63__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__63__line;
    __Vtask_uvm_report_error__63__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__63__report_enabled_checked;
    __Vtask_uvm_report_error__63__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    IData/*31:0*/ __Vtask_get_physical_addresses__76__Vfuncout;
    __Vtask_get_physical_addresses__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
    __Vfunc_uvm_report_enabled__82__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
    __Vfunc_uvm_report_enabled__82__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__89__verbosity;
    __Vtask_uvm_report_warning__89__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__89__line;
    __Vtask_uvm_report_warning__89__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__89__report_enabled_checked;
    __Vtask_uvm_report_warning__89__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__90__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__91__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__93__verbosity;
    __Vfunc_uvm_report_enabled__93__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__93__severity;
    __Vfunc_uvm_report_enabled__93__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__100__verbosity;
    __Vtask_uvm_report_warning__100__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__100__line;
    __Vtask_uvm_report_warning__100__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__100__report_enabled_checked;
    __Vtask_uvm_report_warning__100__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_11;
    CData/*0:0*/ __VlefExpr_10;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefCall_3__is_locked;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk485__DOT__info;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk485__DOT__blk;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk485__DOT__top_map;
    VlQueue<QData/*63:0*/> unnamedblk485__DOT__addrs;
    IData/*31:0*/ unnamedblk485__DOT__unnamedblk486__DOT__i;
    unnamedblk485__DOT__unnamedblk486__DOT__i = 0;
    std::string unnamedblk485__DOT__unnamedblk487__DOT__rg_acc;
    IData/*31:0*/ unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i;
    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i = 0;
    QData/*63:0*/ unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2;
    std::string unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc;
    std::string unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__unnamedblk491__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range;
    VL_ZERO_W(160, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range);
    CData/*0:0*/ unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst;
    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst = 0;
    std::string unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__unnamedblk493__DOT__a;
    {
        if (this->__PVT__m_regs_info.exists(rg)) {
            ++(vlSymsp->__Vcoverage[23433]);
        } else {
            this->__Vfunc_uvm_report_enabled__57__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__57__severity = 2U;
            __Vfunc_uvm_report_enabled__57__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__59__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__59__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__57__verbosity, (IData)(__Vfunc_uvm_report_enabled__57__severity), this->__Vfunc_uvm_report_enabled__57__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 635)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__63__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__63__context_name = ""s;
                __Vtask_uvm_report_error__63__line = 0x0000027bU;
                this->__Vtask_uvm_report_error__63__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__63__verbosity = 0U;
                this->__Vtask_uvm_report_error__63__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of register '"s, __VlefCall_1__get_full_name), "' in address map '"s), __VlefCall_2__get_full_name), "' : register not mapped in that address map"s));
                this->__Vtask_uvm_report_error__63__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__64__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__65__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__63__id, this->__Vtask_uvm_report_error__63__message, __Vtask_uvm_report_error__63__verbosity, this->__Vtask_uvm_report_error__63__filename, __Vtask_uvm_report_error__63__line, this->__Vtask_uvm_report_error__63__context_name, (IData)(__Vtask_uvm_report_error__63__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23430]);
            } else {
                ++(vlSymsp->__Vcoverage[23431]);
            }
            goto __Vlabel0;
        }
        unnamedblk485__DOT__info = this->__PVT__m_regs_info
            .at(rg);
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk485__DOT__blk);
        this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk485__DOT__top_map);
        unnamedblk485__DOT__addrs.clear();
        unnamedblk485__DOT__addrs.atDefault() = 0;
        VL_NULL_CHECK(unnamedblk485__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 646)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_3__is_locked);
        if (__VlefCall_3__is_locked) {
            if (VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 649)
                ->__PVT__unmapped) {
                ++(vlSymsp->__Vcoverage[23440]);
            } else {
                unnamedblk485__DOT__unnamedblk486__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk485__DOT__unnamedblk486__DOT__i, VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 650)
                                  ->__PVT__addr.size())) {
                    if (VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 652)
                        ->__PVT__m_regs_by_offset_wo.exists(VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 652)
                                                            ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i))) {
                        __VlefExpr_4 = (VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 656)
                                        ->__PVT__m_regs_by_offset
                                        .at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 656)
                                            ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i)) 
                                        == rg);
                        if (__VlefExpr_4) {
                            __Vtemp_1 = VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 658)
                                ->__PVT__m_regs_by_offset_wo
                                .at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 658)
                                    ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i));
                            VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 657)->__PVT__m_regs_by_offset.at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 657)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i)) 
                                = __Vtemp_1;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 660)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 660)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i)));
                            ++(vlSymsp->__Vcoverage[23434]);
                        } else {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 664)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 664)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i)));
                            ++(vlSymsp->__Vcoverage[23435]);
                        }
                        VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 666)->__PVT__m_regs_by_offset_wo.erase(VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 666)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i));
                        ++(vlSymsp->__Vcoverage[23437]);
                    } else {
                        VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 653)->__PVT__m_regs_by_offset.erase(VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 653)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i));
                        ++(vlSymsp->__Vcoverage[23436]);
                    }
                    unnamedblk485__DOT__unnamedblk486__DOT__i 
                        = ((IData)(1U) + unnamedblk485__DOT__unnamedblk486__DOT__i);
                    ++(vlSymsp->__Vcoverage[23438]);
                }
                ++(vlSymsp->__Vcoverage[23439]);
            }
            if (unmapped) {
                ++(vlSymsp->__Vcoverage[23466]);
            } else {
                VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 673)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk485__DOT__unnamedblk487__DOT__rg_acc);
                VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 676)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, __VlefCall_5__get_n_bytes, unnamedblk485__DOT__addrs, __Vtask_get_physical_addresses__76__Vfuncout);
                unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i, unnamedblk485__DOT__addrs.size())) {
                    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr 
                        = unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i);
                    if (VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 681)
                        ->__PVT__m_regs_by_offset.exists(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr)) {
                        unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2 
                            = VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 683)
                            ->__PVT__m_regs_by_offset
                            .at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr);
                        VL_NULL_CHECK(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 684)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc);
                        if ((("RO"s == unnamedblk485__DOT__unnamedblk487__DOT__rg_acc) 
                             & ("WO"s == unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 689)->__PVT__m_regs_by_offset.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) 
                                = rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 691)->__PVT__m_regs_by_offset_wo.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) 
                                = unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2);
                            ++(vlSymsp->__Vcoverage[23448]);
                        } else {
                            if ((("WO"s == unnamedblk485__DOT__unnamedblk487__DOT__rg_acc) 
                                 & ("RO"s == unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc))) {
                                VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 695)->__PVT__m_regs_by_offset_wo.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) 
                                    = rg;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2);
                                ++(vlSymsp->__Vcoverage[23443]);
                            } else {
                                unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__unnamedblk491__DOT__a = ""s;
                                unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__unnamedblk491__DOT__a 
                                    = VL_SFORMATF_N_NX("%0x",0,
                                                       64,
                                                       unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) ;
                                this->__Vfunc_uvm_report_enabled__82__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__82__severity = 1U;
                                __Vfunc_uvm_report_enabled__82__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__83__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__84__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), this->__Vfunc_uvm_report_enabled__82__id, __VlefCall_6__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_6__uvm_report_enabled)) {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                                    VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 704)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                                    VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 704)
                                                  ->__PVT__m_regs_by_offset
                                                  .at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 704)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                                    __Vtask_uvm_report_warning__89__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_warning__89__context_name = ""s;
                                    __Vtask_uvm_report_warning__89__line = 0x000002c0U;
                                    this->__Vtask_uvm_report_warning__89__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                    __Vtask_uvm_report_warning__89__verbosity = 0U;
                                    this->__Vtask_uvm_report_warning__89__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_7__get_full_name), "' register '"s), __VlefCall_8__get_full_name), "' maps to same address as register '"s), __VlefCall_9__get_full_name), "': 'h"s), unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__unnamedblk491__DOT__a));
                                    this->__Vtask_uvm_report_warning__89__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__90__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                        = __Vfunc_get__90__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__91__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                        = __Vtask_get_root__91__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__89__id, this->__Vtask_uvm_report_warning__89__message, __Vtask_uvm_report_warning__89__verbosity, this->__Vtask_uvm_report_warning__89__filename, __Vtask_uvm_report_warning__89__line, this->__Vtask_uvm_report_warning__89__context_name, (IData)(__Vtask_uvm_report_warning__89__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[436]);
                                    ++(vlSymsp->__Vcoverage[23441]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[23442]);
                                }
                                ++(vlSymsp->__Vcoverage[23444]);
                            }
                            if ((("WO"s == unnamedblk485__DOT__unnamedblk487__DOT__rg_acc) 
                                 & ("RO"s == unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc))) {
                                ++(vlSymsp->__Vcoverage[23445]);
                            }
                            if ((1U & (~ ("RO"s == unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc)))) {
                                ++(vlSymsp->__Vcoverage[23446]);
                            }
                            if ((1U & (~ ("WO"s == unnamedblk485__DOT__unnamedblk487__DOT__rg_acc)))) {
                                ++(vlSymsp->__Vcoverage[23447]);
                            }
                        }
                        if ((("RO"s == unnamedblk485__DOT__unnamedblk487__DOT__rg_acc) 
                             & ("WO"s == unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc))) {
                            ++(vlSymsp->__Vcoverage[23449]);
                        }
                        if ((1U & (~ ("WO"s == unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc)))) {
                            ++(vlSymsp->__Vcoverage[23450]);
                        }
                        if ((1U & (~ ("RO"s == unnamedblk485__DOT__unnamedblk487__DOT__rg_acc)))) {
                            ++(vlSymsp->__Vcoverage[23451]);
                        }
                        ++(vlSymsp->__Vcoverage[23452]);
                    } else {
                        VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 708)->__PVT__m_regs_by_offset.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) 
                            = rg;
                        ++(vlSymsp->__Vcoverage[23453]);
                    }
                    __VlefExpr_10 = (0U != VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 710)
                                     ->__PVT__m_mems_by_offset.first(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range));
                    if (__VlefExpr_10) {
                        unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst = 1U;
                        while (true) {
                            __VlefExpr_11 = unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst;
                            if ((1U & (~ (IData)(__VlefExpr_11)))) {
                                __VlefExpr_11 = (0U 
                                                 != VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 710)
                                                 ->__PVT__m_mems_by_offset.next(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range));
                            }
                            if (!(__VlefExpr_11)) break;
                            unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst = 0U;
                            if (((unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i) 
                                  >= (((QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[4U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[3U])))) 
                                 & (unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i) 
                                    <= (((QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[2U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[1U])))))) {
                                unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__unnamedblk493__DOT__a = ""s;
                                unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__unnamedblk493__DOT__a 
                                    = VL_SFORMATF_N_NX("%0x",0,
                                                       64,
                                                       unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i)) ;
                                this->__Vfunc_uvm_report_enabled__93__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__93__severity = 1U;
                                __Vfunc_uvm_report_enabled__93__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__94__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__94__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__95__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__93__verbosity, (IData)(__Vfunc_uvm_report_enabled__93__severity), this->__Vfunc_uvm_report_enabled__93__id, __VlefCall_12__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_12__uvm_report_enabled)) {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                                    VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 716)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                                    VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 716)
                                                  ->__PVT__m_mems_by_offset
                                                  .at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 716)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                                    __Vtask_uvm_report_warning__100__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_warning__100__context_name = ""s;
                                    __Vtask_uvm_report_warning__100__line = 0x000002ccU;
                                    this->__Vtask_uvm_report_warning__100__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                    __Vtask_uvm_report_warning__100__verbosity = 0U;
                                    this->__Vtask_uvm_report_warning__100__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_13__get_full_name), "' register '"s), __VlefCall_14__get_full_name), "' overlaps with address range of memory '"s), __VlefCall_15__get_full_name), "': 'h"s), unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__unnamedblk493__DOT__a));
                                    this->__Vtask_uvm_report_warning__100__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                        = __Vfunc_get__101__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                        = __Vtask_get_root__102__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__100__id, this->__Vtask_uvm_report_warning__100__message, __Vtask_uvm_report_warning__100__verbosity, this->__Vtask_uvm_report_warning__100__filename, __Vtask_uvm_report_warning__100__line, this->__Vtask_uvm_report_warning__100__context_name, (IData)(__Vtask_uvm_report_warning__100__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[436]);
                                    ++(vlSymsp->__Vcoverage[23454]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[23455]);
                                }
                                ++(vlSymsp->__Vcoverage[23456]);
                            } else {
                                ++(vlSymsp->__Vcoverage[23457]);
                            }
                            ++(vlSymsp->__Vcoverage[23461]);
                        }
                        if (((unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i) 
                              >= (((QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[4U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[3U])))) 
                             & (unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i) 
                                <= (((QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[1U])))))) {
                            ++(vlSymsp->__Vcoverage[23458]);
                        }
                        if ((unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i) 
                             > (((QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[1U]))))) {
                            ++(vlSymsp->__Vcoverage[23459]);
                        }
                        if ((unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i) 
                             < (((QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[3U]))))) {
                            ++(vlSymsp->__Vcoverage[23460]);
                        }
                        ++(vlSymsp->__Vcoverage[23462]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23463]);
                    }
                    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i 
                        = ((IData)(1U) + unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i);
                    ++(vlSymsp->__Vcoverage[23464]);
                }
                VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 720)->__PVT__addr 
                    = unnamedblk485__DOT__addrs;
                ++(vlSymsp->__Vcoverage[23465]);
            }
            if ((1U & (~ (IData)(unmapped)))) {
                ++(vlSymsp->__Vcoverage[23467]);
            }
            if (unmapped) {
                ++(vlSymsp->__Vcoverage[23468]);
            }
            ++(vlSymsp->__Vcoverage[23469]);
        } else {
            ++(vlSymsp->__Vcoverage[23470]);
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 725)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 726)->__PVT__unmapped = 1U;
            ++(vlSymsp->__Vcoverage[23471]);
        } else {
            VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 729)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk485__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 730)->__PVT__unmapped = 0U;
            ++(vlSymsp->__Vcoverage[23472]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23473]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_mem(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__104__verbosity;
    __Vfunc_uvm_report_enabled__104__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__104__severity;
    __Vfunc_uvm_report_enabled__104__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__110__verbosity;
    __Vtask_uvm_report_error__110__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__110__line;
    __Vtask_uvm_report_error__110__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__110__report_enabled_checked;
    __Vtask_uvm_report_error__110__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__111__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__112__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__116__verbosity;
    __Vfunc_uvm_report_enabled__116__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__116__severity;
    __Vfunc_uvm_report_enabled__116__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__122__verbosity;
    __Vtask_uvm_report_error__122__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__122__line;
    __Vtask_uvm_report_error__122__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__122__report_enabled_checked;
    __Vtask_uvm_report_error__122__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__123__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__124__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __VlefCall_4__get_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __VlefCall_3__get_parent;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk494__DOT__info;
    {
        if (this->__PVT__m_mems_info.exists(mem)) {
            this->__Vfunc_uvm_report_enabled__104__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__104__severity = 2U;
            __Vfunc_uvm_report_enabled__104__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__105__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__106__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__104__verbosity, (IData)(__Vfunc_uvm_report_enabled__104__severity), this->__Vfunc_uvm_report_enabled__104__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 746)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                __Vtask_uvm_report_error__110__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__110__context_name = ""s;
                __Vtask_uvm_report_error__110__line = 0x000002eaU;
                this->__Vtask_uvm_report_error__110__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__110__verbosity = 0U;
                this->__Vtask_uvm_report_error__110__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' has already been added to map '"s), __VlefCall_2__get_name), "'"s));
                this->__Vtask_uvm_report_error__110__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__111__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__111__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__112__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__112__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__110__id, this->__Vtask_uvm_report_error__110__message, __Vtask_uvm_report_error__110__verbosity, this->__Vtask_uvm_report_error__110__filename, __Vtask_uvm_report_error__110__line, this->__Vtask_uvm_report_error__110__context_name, (IData)(__Vtask_uvm_report_error__110__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23474]);
            } else {
                ++(vlSymsp->__Vcoverage[23475]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23477]);
        }
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 750)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_3__get_parent);
        this->__VnoInFunc_get_parent(vlSymsp, __VlefCall_4__get_parent);
        if ((__VlefCall_3__get_parent != __VlefCall_4__get_parent)) {
            this->__Vfunc_uvm_report_enabled__116__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__116__severity = 2U;
            __Vfunc_uvm_report_enabled__116__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__117__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__118__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__116__verbosity, (IData)(__Vfunc_uvm_report_enabled__116__severity), this->__Vfunc_uvm_report_enabled__116__id, __VlefCall_5__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 753)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_error__122__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__122__context_name = ""s;
                __Vtask_uvm_report_error__122__line = 0x000002f1U;
                this->__Vtask_uvm_report_error__122__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__122__verbosity = 0U;
                this->__Vtask_uvm_report_error__122__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_6__get_full_name), "' may not be added to address map '"s), __VlefCall_7__get_full_name), "' : they are not in the same block"s));
                this->__Vtask_uvm_report_error__122__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__123__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__123__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__124__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__124__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__122__id, this->__Vtask_uvm_report_error__122__message, __Vtask_uvm_report_error__122__verbosity, this->__Vtask_uvm_report_error__122__filename, __Vtask_uvm_report_error__122__line, this->__Vtask_uvm_report_error__122__context_name, (IData)(__Vtask_uvm_report_error__122__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23478]);
            } else {
                ++(vlSymsp->__Vcoverage[23479]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23481]);
        }
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 757)->__VnoInFunc_add_map(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk494__DOT__info = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk494__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 761)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk494__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 762)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk494__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 763)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk494__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 764)->__PVT__frontdoor 
            = frontdoor;
        this->__PVT__m_mems_info.at(mem) = unnamedblk494__DOT__info;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23482]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__128__verbosity;
    __Vfunc_uvm_report_enabled__128__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__128__severity;
    __Vfunc_uvm_report_enabled__128__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__134__verbosity;
    __Vtask_uvm_report_error__134__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__134__line;
    __Vtask_uvm_report_error__134__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__134__report_enabled_checked;
    __Vtask_uvm_report_error__134__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__135__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__136__Vfuncout;
    IData/*31:0*/ __Vtask_get_physical_addresses__142__Vfuncout;
    __Vtask_get_physical_addresses__142__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__145__Vfuncout;
    __Vtask_get_physical_addresses__145__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__148__verbosity;
    __Vfunc_uvm_report_enabled__148__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__148__severity;
    __Vfunc_uvm_report_enabled__148__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__149__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__150__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__155__verbosity;
    __Vtask_uvm_report_warning__155__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__155__line;
    __Vtask_uvm_report_warning__155__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__155__report_enabled_checked;
    __Vtask_uvm_report_warning__155__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__156__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__157__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__159__verbosity;
    __Vfunc_uvm_report_enabled__159__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__159__severity;
    __Vfunc_uvm_report_enabled__159__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__160__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__161__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__166__verbosity;
    __Vtask_uvm_report_warning__166__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__166__line;
    __Vtask_uvm_report_warning__166__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__166__report_enabled_checked;
    __Vtask_uvm_report_warning__166__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__167__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__168__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_23__get_full_name;
    std::string __VlefCall_22__get_full_name;
    std::string __VlefCall_21__get_full_name;
    IData/*31:0*/ __VlefCall_20__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_19;
    CData/*0:0*/ __VlefExpr_18;
    std::string __VlefCall_17__get_full_name;
    std::string __VlefCall_16__get_full_name;
    std::string __VlefCall_15__get_full_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_13;
    CData/*0:0*/ __VlefExpr_12;
    IData/*31:0*/ __VlefCall_11__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_10__get_n_bytes;
    IData/*31:0*/ __VlefCall_9__get_n_bytes;
    QData/*63:0*/ __VlefCall_8__get_size;
    IData/*31:0*/ __VlefCall_7__get_n_bytes;
    CData/*0:0*/ __VlefExpr_6;
    CData/*0:0*/ __VlefExpr_5;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefCall_3__is_locked;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk495__DOT__info;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk495__DOT__blk;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk495__DOT__top_map;
    VlWide<5>/*159:0*/ unnamedblk495__DOT__unnamedblk496__DOT__range;
    VL_ZERO_W(160, unnamedblk495__DOT__unnamedblk496__DOT__range);
    CData/*0:0*/ unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst;
    unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst = 0;
    VlQueue<QData/*63:0*/> unnamedblk495__DOT__unnamedblk497__DOT__addrs;
    VlQueue<QData/*63:0*/> unnamedblk495__DOT__unnamedblk497__DOT__addrs_max;
    QData/*63:0*/ unnamedblk495__DOT__unnamedblk497__DOT__min;
    QData/*63:0*/ unnamedblk495__DOT__unnamedblk497__DOT__max;
    IData/*31:0*/ unnamedblk495__DOT__unnamedblk497__DOT__stride;
    QData/*63:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr;
    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr = 0;
    CData/*0:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst;
    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst = 0;
    std::string unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__a;
    std::string unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__b;
    VlWide<5>/*159:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range;
    VL_ZERO_W(160, unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range);
    CData/*0:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst;
    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst = 0;
    std::string unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__a;
    std::string unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__b;
    VlWide<5>/*159:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range;
    {
        if (this->__PVT__m_mems_info.exists(mem)) {
            ++(vlSymsp->__Vcoverage[23486]);
        } else {
            this->__Vfunc_uvm_report_enabled__128__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__128__severity = 2U;
            __Vfunc_uvm_report_enabled__128__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__129__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__129__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__130__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__128__verbosity, (IData)(__Vfunc_uvm_report_enabled__128__severity), this->__Vfunc_uvm_report_enabled__128__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 781)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__134__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__134__context_name = ""s;
                __Vtask_uvm_report_error__134__line = 0x0000030dU;
                this->__Vtask_uvm_report_error__134__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__134__verbosity = 0U;
                this->__Vtask_uvm_report_error__134__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of memory '"s, __VlefCall_1__get_full_name), "' in address map '"s), __VlefCall_2__get_full_name), "' : memory not mapped in that address map"s));
                this->__Vtask_uvm_report_error__134__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__135__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__135__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__136__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__136__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__134__id, this->__Vtask_uvm_report_error__134__message, __Vtask_uvm_report_error__134__verbosity, this->__Vtask_uvm_report_error__134__filename, __Vtask_uvm_report_error__134__line, this->__Vtask_uvm_report_error__134__context_name, (IData)(__Vtask_uvm_report_error__134__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23483]);
            } else {
                ++(vlSymsp->__Vcoverage[23484]);
            }
            goto __Vlabel0;
        }
        unnamedblk495__DOT__info = this->__PVT__m_mems_info
            .at(mem);
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk495__DOT__blk);
        this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk495__DOT__top_map);
        VL_NULL_CHECK(unnamedblk495__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 792)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_3__is_locked);
        if (__VlefCall_3__is_locked) {
            if (VL_NULL_CHECK(unnamedblk495__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 795)
                ->__PVT__unmapped) {
                ++(vlSymsp->__Vcoverage[23493]);
            } else {
                __VlefExpr_4 = (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 796)
                                ->__PVT__m_mems_by_offset.first(unnamedblk495__DOT__unnamedblk496__DOT__range));
                if (__VlefExpr_4) {
                    unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_5 = unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_5)))) {
                            __VlefExpr_5 = (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 796)
                                            ->__PVT__m_mems_by_offset.next(unnamedblk495__DOT__unnamedblk496__DOT__range));
                        }
                        if (!(__VlefExpr_5)) break;
                        unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst = 0U;
                        __VlefExpr_6 = (VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 797)
                                        ->__PVT__m_mems_by_offset
                                        .at(unnamedblk495__DOT__unnamedblk496__DOT__range) 
                                        == mem);
                        if (__VlefExpr_6) {
                            VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 798)->__PVT__m_mems_by_offset.erase(unnamedblk495__DOT__unnamedblk496__DOT__range);
                            ++(vlSymsp->__Vcoverage[23487]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23488]);
                        }
                        ++(vlSymsp->__Vcoverage[23489]);
                    }
                    ++(vlSymsp->__Vcoverage[23490]);
                } else {
                    ++(vlSymsp->__Vcoverage[23491]);
                }
                ++(vlSymsp->__Vcoverage[23492]);
            }
            if (unmapped) {
                ++(vlSymsp->__Vcoverage[23527]);
            } else {
                unnamedblk495__DOT__unnamedblk497__DOT__addrs.clear();
                unnamedblk495__DOT__unnamedblk497__DOT__addrs.atDefault() = 0;
                unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.clear();
                unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.atDefault() = 0;
                unnamedblk495__DOT__unnamedblk497__DOT__min = 0ULL;
                unnamedblk495__DOT__unnamedblk497__DOT__max = 0ULL;
                unnamedblk495__DOT__unnamedblk497__DOT__stride = 0U;
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 808)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_7__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, __VlefCall_7__get_n_bytes, unnamedblk495__DOT__unnamedblk497__DOT__addrs, __Vtask_get_physical_addresses__142__Vfuncout);
                unnamedblk495__DOT__unnamedblk497__DOT__min 
                    = ((unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(0U) 
                        < unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(
                                                                           (unnamedblk495__DOT__unnamedblk497__DOT__addrs.size() 
                                                                            - (IData)(1U))))
                        ? unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(0U)
                        : unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(
                                                                           (unnamedblk495__DOT__unnamedblk497__DOT__addrs.size() 
                                                                            - (IData)(1U))));
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 812)->__VnoInFunc_get_size(vlSymsp, __VlefCall_8__get_size);
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 813)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_9__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 
                                                         (__VlefCall_8__get_size 
                                                          - 1ULL), __VlefCall_9__get_n_bytes, unnamedblk495__DOT__unnamedblk497__DOT__addrs_max, __Vtask_get_physical_addresses__145__Vfuncout);
                unnamedblk495__DOT__unnamedblk497__DOT__max 
                    = ((unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(0U) 
                        > unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(
                                                                               (unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))
                        ? unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(0U)
                        : unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(
                                                                               (unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.size() 
                                                                                - (IData)(1U))));
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 818)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_10__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_11__get_addr_unit_bytes);
                unnamedblk495__DOT__unnamedblk497__DOT__stride 
                    = VL_DIV_III(32, __VlefCall_10__get_n_bytes, __VlefCall_11__get_addr_unit_bytes);
                __VlefExpr_12 = (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 821)
                                 ->__PVT__m_regs_by_offset.first(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr));
                if (__VlefExpr_12) {
                    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_13 = unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_13)))) {
                            __VlefExpr_13 = (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 821)
                                             ->__PVT__m_regs_by_offset.next(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr));
                        }
                        if (!(__VlefExpr_13)) break;
                        unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst = 0U;
                        if (((unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr 
                              >= unnamedblk495__DOT__unnamedblk497__DOT__min) 
                             & (unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr 
                                <= unnamedblk495__DOT__unnamedblk497__DOT__max))) {
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__a = ""s;
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__b = ""s;
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__a 
                                = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__min,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__max) ;
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__b 
                                = VL_SFORMATF_N_NX("%0x",0,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr) ;
                            this->__Vfunc_uvm_report_enabled__148__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__148__severity = 1U;
                            __Vfunc_uvm_report_enabled__148__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__149__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__149__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__150__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__150__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__148__verbosity, (IData)(__Vfunc_uvm_report_enabled__148__severity), this->__Vfunc_uvm_report_enabled__148__id, __VlefCall_14__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 829)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 829)
                                              ->__PVT__m_regs_by_offset
                                              .at(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 829)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                                __Vtask_uvm_report_warning__155__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_warning__155__context_name = ""s;
                                __Vtask_uvm_report_warning__155__line = 0x0000033dU;
                                this->__Vtask_uvm_report_warning__155__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__155__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__155__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_15__get_full_name), "' memory '"s), __VlefCall_16__get_full_name), "' with range "s), unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__a), " overlaps with address of existing register '"s), __VlefCall_17__get_full_name), "': 'h"s), unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__b));
                                this->__Vtask_uvm_report_warning__155__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__156__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__156__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__157__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__157__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__155__id, this->__Vtask_uvm_report_warning__155__message, __Vtask_uvm_report_warning__155__verbosity, this->__Vtask_uvm_report_warning__155__filename, __Vtask_uvm_report_warning__155__line, this->__Vtask_uvm_report_warning__155__context_name, (IData)(__Vtask_uvm_report_warning__155__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[436]);
                                ++(vlSymsp->__Vcoverage[23498]);
                            } else {
                                ++(vlSymsp->__Vcoverage[23499]);
                            }
                            ++(vlSymsp->__Vcoverage[23500]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23501]);
                        }
                        ++(vlSymsp->__Vcoverage[23505]);
                    }
                    if (((unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr 
                          >= unnamedblk495__DOT__unnamedblk497__DOT__min) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr 
                            <= unnamedblk495__DOT__unnamedblk497__DOT__max))) {
                        ++(vlSymsp->__Vcoverage[23502]);
                    }
                    if ((unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr 
                         > unnamedblk495__DOT__unnamedblk497__DOT__max)) {
                        ++(vlSymsp->__Vcoverage[23503]);
                    }
                    if ((unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr 
                         < unnamedblk495__DOT__unnamedblk497__DOT__min)) {
                        ++(vlSymsp->__Vcoverage[23504]);
                    }
                    ++(vlSymsp->__Vcoverage[23506]);
                } else {
                    ++(vlSymsp->__Vcoverage[23507]);
                }
                __VlefExpr_18 = (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 833)
                                 ->__PVT__m_mems_by_offset.first(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range));
                if (__VlefExpr_18) {
                    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_19 = unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_19)))) {
                            __VlefExpr_19 = (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 833)
                                             ->__PVT__m_mems_by_offset.next(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range));
                        }
                        if (!(__VlefExpr_19)) break;
                        unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst = 0U;
                        if (((((unnamedblk495__DOT__unnamedblk497__DOT__min 
                                <= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                               & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                                  >= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U]))))) 
                              | ((unnamedblk495__DOT__unnamedblk497__DOT__min 
                                  <= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))) 
                                 & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                                    >= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))))) 
                             | ((unnamedblk495__DOT__unnamedblk497__DOT__min 
                                 >= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))) 
                                & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                                   <= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U]))))))) {
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__a = ""s;
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__b = ""s;
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__a 
                                = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__min,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__max) ;
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__b 
                                = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                   64,
                                                   (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))),
                                                   64,
                                                   (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) ;
                            this->__Vfunc_uvm_report_enabled__159__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__159__severity = 1U;
                            __Vfunc_uvm_report_enabled__159__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__160__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__160__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__161__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__161__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__159__verbosity, (IData)(__Vfunc_uvm_report_enabled__159__severity), this->__Vfunc_uvm_report_enabled__159__id, __VlefCall_20__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_20__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 843)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 843)
                                              ->__PVT__m_mems_by_offset
                                              .at(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 843)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                                __Vtask_uvm_report_warning__166__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_warning__166__context_name = ""s;
                                __Vtask_uvm_report_warning__166__line = 0x0000034bU;
                                this->__Vtask_uvm_report_warning__166__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__166__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__166__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_21__get_full_name), "' memory '"s), __VlefCall_22__get_full_name), "' with range "s), unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__a), " overlaps existing memory with range '"s), __VlefCall_23__get_full_name), "': "s), unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__b));
                                this->__Vtask_uvm_report_warning__166__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__167__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__167__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__168__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__168__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__166__id, this->__Vtask_uvm_report_warning__166__message, __Vtask_uvm_report_warning__166__verbosity, this->__Vtask_uvm_report_warning__166__filename, __Vtask_uvm_report_warning__166__line, this->__Vtask_uvm_report_warning__166__context_name, (IData)(__Vtask_uvm_report_warning__166__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[436]);
                                ++(vlSymsp->__Vcoverage[23508]);
                            } else {
                                ++(vlSymsp->__Vcoverage[23509]);
                            }
                            ++(vlSymsp->__Vcoverage[23510]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23511]);
                        }
                        ++(vlSymsp->__Vcoverage[23523]);
                    }
                    if (((unnamedblk495__DOT__unnamedblk497__DOT__min 
                          >= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                            <= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23512]);
                    }
                    if (((unnamedblk495__DOT__unnamedblk497__DOT__min 
                          <= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                            >= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23513]);
                    }
                    if (((unnamedblk495__DOT__unnamedblk497__DOT__min 
                          <= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                            >= (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23514]);
                    }
                    if ((((unnamedblk495__DOT__unnamedblk497__DOT__max 
                           < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                          & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                             < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                            > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23515]);
                    }
                    if ((((unnamedblk495__DOT__unnamedblk497__DOT__max 
                           < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                          & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                             < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__min 
                            < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23516]);
                    }
                    if ((((unnamedblk495__DOT__unnamedblk497__DOT__max 
                           < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                          & (unnamedblk495__DOT__unnamedblk497__DOT__min 
                             > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                            > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23517]);
                    }
                    if ((((unnamedblk495__DOT__unnamedblk497__DOT__max 
                           < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                          & (unnamedblk495__DOT__unnamedblk497__DOT__min 
                             > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__min 
                            < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23518]);
                    }
                    if ((((unnamedblk495__DOT__unnamedblk497__DOT__min 
                           > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                          & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                             < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                            > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23519]);
                    }
                    if ((((unnamedblk495__DOT__unnamedblk497__DOT__min 
                           > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                          & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                             < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__min 
                            < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23520]);
                    }
                    if ((((unnamedblk495__DOT__unnamedblk497__DOT__min 
                           > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                          & (unnamedblk495__DOT__unnamedblk497__DOT__min 
                             > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                            > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23521]);
                    }
                    if ((((unnamedblk495__DOT__unnamedblk497__DOT__min 
                           > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                          & (unnamedblk495__DOT__unnamedblk497__DOT__min 
                             > (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))))) 
                         & (unnamedblk495__DOT__unnamedblk497__DOT__min 
                            < (((QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23522]);
                    }
                    ++(vlSymsp->__Vcoverage[23524]);
                } else {
                    ++(vlSymsp->__Vcoverage[23525]);
                }
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[0U] 
                    = unnamedblk495__DOT__unnamedblk497__DOT__stride;
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[1U] 
                    = (IData)(unnamedblk495__DOT__unnamedblk497__DOT__max);
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[2U] 
                    = (IData)((unnamedblk495__DOT__unnamedblk497__DOT__max 
                               >> 0x00000020U));
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[3U] 
                    = (IData)(unnamedblk495__DOT__unnamedblk497__DOT__min);
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[4U] 
                    = (IData)((unnamedblk495__DOT__unnamedblk497__DOT__min 
                               >> 0x00000020U));
                VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 849)->__PVT__m_mems_by_offset.at(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range) 
                    = mem;
                VL_NULL_CHECK(unnamedblk495__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 850)->__PVT__addr 
                    = unnamedblk495__DOT__unnamedblk497__DOT__addrs;
                VL_ASSIGN_W(160, VL_NULL_CHECK(unnamedblk495__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 851)
                            ->__PVT__mem_range, unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range);
                if ((unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(0U) 
                     < unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(
                                                                        (unnamedblk495__DOT__unnamedblk497__DOT__addrs.size() 
                                                                         - (IData)(1U))))) {
                    ++(vlSymsp->__Vcoverage[23494]);
                }
                if ((unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(0U) 
                     >= unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(
                                                                         (unnamedblk495__DOT__unnamedblk497__DOT__addrs.size() 
                                                                          - (IData)(1U))))) {
                    ++(vlSymsp->__Vcoverage[23495]);
                }
                if ((unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(0U) 
                     > unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(
                                                                            (unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.size() 
                                                                             - (IData)(1U))))) {
                    ++(vlSymsp->__Vcoverage[23496]);
                }
                if ((unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(0U) 
                     <= unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(
                                                                             (unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.size() 
                                                                              - (IData)(1U))))) {
                    ++(vlSymsp->__Vcoverage[23497]);
                }
                ++(vlSymsp->__Vcoverage[23526]);
            }
            if ((1U & (~ (IData)(unmapped)))) {
                ++(vlSymsp->__Vcoverage[23528]);
            }
            if (unmapped) {
                ++(vlSymsp->__Vcoverage[23529]);
            }
            ++(vlSymsp->__Vcoverage[23530]);
        } else {
            ++(vlSymsp->__Vcoverage[23531]);
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk495__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 858)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk495__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 859)->__PVT__unmapped = 1U;
            ++(vlSymsp->__Vcoverage[23532]);
        } else {
            VL_NULL_CHECK(unnamedblk495__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 862)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk495__DOT__info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 863)->__PVT__unmapped = 0U;
            ++(vlSymsp->__Vcoverage[23533]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23534]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_submap(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> child_map, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_submap\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__171__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__172__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__175__verbosity;
    __Vtask_uvm_report_error__175__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__175__line;
    __Vtask_uvm_report_error__175__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__175__report_enabled_checked;
    __Vtask_uvm_report_error__175__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__176__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__177__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__180__verbosity;
    __Vfunc_uvm_report_enabled__180__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__180__severity;
    __Vfunc_uvm_report_enabled__180__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__181__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__182__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__187__verbosity;
    __Vtask_uvm_report_error__187__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__187__line;
    __Vtask_uvm_report_error__187__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__187__report_enabled_checked;
    __Vtask_uvm_report_error__187__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__188__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__189__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__192__verbosity;
    __Vfunc_uvm_report_enabled__192__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__192__severity;
    __Vfunc_uvm_report_enabled__192__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__193__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__194__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__199__verbosity;
    __Vtask_uvm_report_warning__199__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__199__line;
    __Vtask_uvm_report_warning__199__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__199__report_enabled_checked;
    __Vtask_uvm_report_warning__199__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__200__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__201__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__get_n_bytes;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_6__get_n_bytes;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> parent_map;
    {
        if ((VlNull{} == child_map)) {
            this->__Vfunc_uvm_report_enabled__170__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__170__severity = 2U;
            __Vfunc_uvm_report_enabled__170__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__171__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__171__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__172__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__172__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), this->__Vfunc_uvm_report_enabled__170__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__175__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__175__context_name = ""s;
                __Vtask_uvm_report_error__175__line = 0x0000036dU;
                this->__Vtask_uvm_report_error__175__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__175__verbosity = 0U;
                this->__Vtask_uvm_report_error__175__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Attempting to add NULL map to map '"s, __VlefCall_1__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__175__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__176__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__176__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__177__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__177__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__175__id, this->__Vtask_uvm_report_error__175__message, __Vtask_uvm_report_error__175__verbosity, this->__Vtask_uvm_report_error__175__filename, __Vtask_uvm_report_error__175__line, this->__Vtask_uvm_report_error__175__context_name, (IData)(__Vtask_uvm_report_error__175__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23535]);
            } else {
                ++(vlSymsp->__Vcoverage[23536]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23538]);
        }
        VL_NULL_CHECK(child_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 881)->__VnoInFunc_get_parent_map(vlSymsp, parent_map);
        if ((VlNull{} != parent_map)) {
            this->__Vfunc_uvm_report_enabled__180__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__180__severity = 2U;
            __Vfunc_uvm_report_enabled__180__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__181__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__181__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__182__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__182__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__180__verbosity, (IData)(__Vfunc_uvm_report_enabled__180__severity), this->__Vfunc_uvm_report_enabled__180__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                VL_NULL_CHECK(child_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 890)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 890)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_error__187__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__187__context_name = ""s;
                __Vtask_uvm_report_error__187__line = 0x0000037aU;
                this->__Vtask_uvm_report_error__187__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__187__verbosity = 0U;
                this->__Vtask_uvm_report_error__187__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_3__get_full_name), "' is already a child of map '"s), __VlefCall_4__get_full_name), "'. Cannot also be a child of map '"s), __VlefCall_5__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__187__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__188__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__188__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__189__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__189__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__187__id, this->__Vtask_uvm_report_error__187__message, __Vtask_uvm_report_error__187__verbosity, this->__Vtask_uvm_report_error__187__filename, __Vtask_uvm_report_error__187__line, this->__Vtask_uvm_report_error__187__context_name, (IData)(__Vtask_uvm_report_error__187__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23539]);
            } else {
                ++(vlSymsp->__Vcoverage[23540]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23542]);
        }
        VL_NULL_CHECK(child_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 896)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_6__get_n_bytes);
        if ((this->__PVT__m_n_bytes > __VlefCall_6__get_n_bytes)) {
            this->__Vfunc_uvm_report_enabled__192__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__192__severity = 1U;
            __Vfunc_uvm_report_enabled__192__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__193__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__193__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__194__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__194__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__192__verbosity, (IData)(__Vfunc_uvm_report_enabled__192__severity), this->__Vfunc_uvm_report_enabled__192__id, __VlefCall_7__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                VL_NULL_CHECK(child_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 900)->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_8__get_n_bytes);
                VL_NULL_CHECK(child_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 900)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                __Vtask_uvm_report_warning__199__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__199__context_name = ""s;
                __Vtask_uvm_report_warning__199__line = 0x00000384U;
                this->__Vtask_uvm_report_warning__199__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__199__verbosity = 0U;
                this->__Vtask_uvm_report_warning__199__message 
                    = VL_SFORMATF_N_NX("Adding %0#-byte submap '%@' to %0#-byte parent map '%@'",0,
                                       32,__VlefCall_8__get_n_bytes,
                                       -1,&(__VlefCall_9__get_full_name),
                                       32,this->__PVT__m_n_bytes,
                                       -1,&(__VlefCall_10__get_full_name)) ;
                this->__Vtask_uvm_report_warning__199__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__200__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__201__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__201__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__199__id, this->__Vtask_uvm_report_warning__199__message, __Vtask_uvm_report_warning__199__verbosity, this->__Vtask_uvm_report_warning__199__filename, __Vtask_uvm_report_warning__199__line, this->__Vtask_uvm_report_warning__199__context_name, (IData)(__Vtask_uvm_report_warning__199__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[23543]);
            } else {
                ++(vlSymsp->__Vcoverage[23544]);
            }
            ++(vlSymsp->__Vcoverage[23545]);
        } else {
            ++(vlSymsp->__Vcoverage[23546]);
        }
        VL_NULL_CHECK(child_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 904)->__VnoInFunc_add_parent_map(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, offset);
        this->__VnoInFunc_set_submap_offset(vlSymsp, child_map, offset);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23547]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset\n"); );
    // Body
    IData/*31:0*/ unnamedblk503__DOT__i;
    unnamedblk503__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> regs;
    regs.clear();
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk503__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk503__DOT__i, regs.size())) {
        VL_NULL_CHECK(regs.at(unnamedblk503__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 919)->__VnoInFunc_reset(vlSymsp, kind);
        unnamedblk503__DOT__i = ((IData)(1U) + unnamedblk503__DOT__i);
        ++(vlSymsp->__Vcoverage[23548]);
    }
    ++(vlSymsp->__Vcoverage[23549]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_parent_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> parent_map, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_parent_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__207__verbosity;
    __Vfunc_uvm_report_enabled__207__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__207__severity;
    __Vfunc_uvm_report_enabled__207__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__208__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__209__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__212__verbosity;
    __Vtask_uvm_report_error__212__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__212__line;
    __Vtask_uvm_report_error__212__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__212__report_enabled_checked;
    __Vtask_uvm_report_error__212__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__213__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__214__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__216__verbosity;
    __Vfunc_uvm_report_enabled__216__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__216__severity;
    __Vfunc_uvm_report_enabled__216__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__217__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__218__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__223__verbosity;
    __Vtask_uvm_report_error__223__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__223__line;
    __Vtask_uvm_report_error__223__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__223__report_enabled_checked;
    __Vtask_uvm_report_error__223__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__224__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__225__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    QData/*63:0*/ __VlefCall_5__get_submap_offset;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == parent_map)) {
            this->__Vfunc_uvm_report_enabled__207__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__207__severity = 2U;
            __Vfunc_uvm_report_enabled__207__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__208__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__208__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__209__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__209__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__207__verbosity, (IData)(__Vfunc_uvm_report_enabled__207__severity), this->__Vfunc_uvm_report_enabled__207__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__212__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__212__context_name = ""s;
                __Vtask_uvm_report_error__212__line = 0x000003a2U;
                this->__Vtask_uvm_report_error__212__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__212__verbosity = 0U;
                this->__Vtask_uvm_report_error__212__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Attempting to add NULL parent map to map '"s, __VlefCall_1__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__212__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__213__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__213__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__214__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__214__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__212__id, this->__Vtask_uvm_report_error__212__message, __Vtask_uvm_report_error__212__verbosity, this->__Vtask_uvm_report_error__212__filename, __Vtask_uvm_report_error__212__line, this->__Vtask_uvm_report_error__212__context_name, (IData)(__Vtask_uvm_report_error__212__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23550]);
            } else {
                ++(vlSymsp->__Vcoverage[23551]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23553]);
        }
        if ((VlNull{} != this->__PVT__m_parent_map)) {
            this->__Vfunc_uvm_report_enabled__216__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__216__severity = 2U;
            __Vfunc_uvm_report_enabled__216__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__217__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__217__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__218__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__218__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__216__verbosity, (IData)(__Vfunc_uvm_report_enabled__216__severity), this->__Vfunc_uvm_report_enabled__216__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 938)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 938)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_5__get_submap_offset);
                __Vtask_uvm_report_error__223__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__223__context_name = ""s;
                __Vtask_uvm_report_error__223__line = 0x000003aaU;
                this->__Vtask_uvm_report_error__223__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__223__verbosity = 0U;
                this->__Vtask_uvm_report_error__223__message 
                    = VL_SFORMATF_N_NX("Map \"%@\" already a submap of map \"%@\" at offset 'h%x",0,
                                       -1,&(__VlefCall_3__get_full_name),
                                       -1,&(__VlefCall_4__get_full_name),
                                       64,__VlefCall_5__get_submap_offset) ;
                this->__Vtask_uvm_report_error__223__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__224__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__224__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__225__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__225__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__223__id, this->__Vtask_uvm_report_error__223__message, __Vtask_uvm_report_error__223__verbosity, this->__Vtask_uvm_report_error__223__filename, __Vtask_uvm_report_error__223__line, this->__Vtask_uvm_report_error__223__context_name, (IData)(__Vtask_uvm_report_error__223__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23554]);
            } else {
                ++(vlSymsp->__Vcoverage[23555]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23557]);
        }
        this->__PVT__m_parent_map = parent_map;
        VL_NULL_CHECK(parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 943)->__PVT__m_submaps.at(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}) 
            = offset;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23558]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__227__verbosity;
    __Vfunc_uvm_report_enabled__227__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__227__severity;
    __Vfunc_uvm_report_enabled__227__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__228__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__229__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__231__verbosity;
    __Vtask_uvm_report_error__231__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__231__line;
    __Vtask_uvm_report_error__231__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__231__report_enabled_checked;
    __Vtask_uvm_report_error__231__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__235__verbosity;
    __Vfunc_uvm_report_enabled__235__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__235__severity;
    __Vfunc_uvm_report_enabled__235__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__236__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__237__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__241__verbosity;
    __Vtask_uvm_report_info__241__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__241__line;
    __Vtask_uvm_report_info__241__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__241__report_enabled_checked;
    __Vtask_uvm_report_info__241__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__242__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__243__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == sequencer)) {
            this->__Vfunc_uvm_report_enabled__227__id = "REG_NULL_SQR"s;
            __Vfunc_uvm_report_enabled__227__severity = 2U;
            __Vfunc_uvm_report_enabled__227__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__228__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__228__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__229__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__229__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__227__verbosity, (IData)(__Vfunc_uvm_report_enabled__227__severity), this->__Vfunc_uvm_report_enabled__227__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__231__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__231__context_name = ""s;
                __Vtask_uvm_report_error__231__line = 0x000003baU;
                this->__Vtask_uvm_report_error__231__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__231__verbosity = 0U;
                this->__Vtask_uvm_report_error__231__message = "Null reference specified for bus sequencer"s;
                this->__Vtask_uvm_report_error__231__id = "REG_NULL_SQR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__232__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__233__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__231__id, this->__Vtask_uvm_report_error__231__message, __Vtask_uvm_report_error__231__verbosity, this->__Vtask_uvm_report_error__231__filename, __Vtask_uvm_report_error__231__line, this->__Vtask_uvm_report_error__231__context_name, (IData)(__Vtask_uvm_report_error__231__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23559]);
            } else {
                ++(vlSymsp->__Vcoverage[23560]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23562]);
        }
        if ((VlNull{} == adapter)) {
            this->__Vfunc_uvm_report_enabled__235__id = "REG_NO_ADAPT"s;
            __Vfunc_uvm_report_enabled__235__severity = 0U;
            __Vfunc_uvm_report_enabled__235__verbosity = 0x000000c8U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__236__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__236__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__237__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__237__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__235__verbosity, (IData)(__Vfunc_uvm_report_enabled__235__severity), this->__Vfunc_uvm_report_enabled__235__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 961)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_info__241__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__241__context_name = ""s;
                __Vtask_uvm_report_info__241__line = 0x000003c1U;
                this->__Vtask_uvm_report_info__241__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__241__verbosity = 0x000000c8U;
                this->__Vtask_uvm_report_info__241__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Adapter not specified for map '"s, __VlefCall_2__get_full_name), "'. Accesses via this map will send abstract 'uvm_reg_item' items to sequencer '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_info__241__id = "REG_NO_ADAPT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__242__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__242__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__243__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__243__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__241__id, this->__Vtask_uvm_report_info__241__message, __Vtask_uvm_report_info__241__verbosity, this->__Vtask_uvm_report_info__241__filename, __Vtask_uvm_report_info__241__line, this->__Vtask_uvm_report_info__241__context_name, (IData)(__Vtask_uvm_report_info__241__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[435]);
                ++(vlSymsp->__Vcoverage[23563]);
            } else {
                ++(vlSymsp->__Vcoverage[23564]);
            }
            ++(vlSymsp->__Vcoverage[23565]);
        } else {
            ++(vlSymsp->__Vcoverage[23566]);
        }
        this->__PVT__m_sequencer = sequencer;
        this->__PVT__m_adapter = adapter;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23567]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
    ++(vlSymsp->__Vcoverage[23568]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map\n"); );
    // Body
    get_parent_map__Vfuncrtn = this->__PVT__m_parent_map;
    ++(vlSymsp->__Vcoverage[23569]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCond_1;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_0__get_root_map;
    if ((VlNull{} == this->__PVT__m_parent_map)) {
        __VlefCond_1 = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this};
    } else {
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 991)->__VnoInFunc_get_root_map(vlSymsp, __VlefCall_0__get_root_map);
        __VlefCond_1 = __VlefCall_0__get_root_map;
    }
    get_root_map__Vfuncrtn = __VlefCond_1;
    ++(vlSymsp->__Vcoverage[23570]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, QData/*63:0*/ &get_base_addr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr\n"); );
    // Body
    QData/*63:0*/ __VlefCall_0__get_base_addr;
    {
        get_base_addr__Vfuncrtn = 0ULL;
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_base_addr__Vfuncrtn = this->__PVT__m_base_addr;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23572]);
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1001)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, get_base_addr__Vfuncrtn);
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1002)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 1U, __VlefCall_0__get_base_addr);
        get_base_addr__Vfuncrtn = (get_base_addr__Vfuncrtn 
                                   + __VlefCall_0__get_base_addr);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23573]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes\n"); );
    // Body
    {
        get_n_bytes__Vfuncrtn = 0U;
        if ((0U == hier)) {
            get_n_bytes__Vfuncrtn = this->__PVT__m_n_bytes;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23575]);
        }
        get_n_bytes__Vfuncrtn = this->__PVT__m_system_n_bytes;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23576]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes\n"); );
    // Body
    get_addr_unit_bytes__Vfuncrtn = ((IData)(this->__PVT__m_byte_addressing)
                                      ? 1U : this->__PVT__m_n_bytes);
    if (this->__PVT__m_byte_addressing) {
        ++(vlSymsp->__Vcoverage[23577]);
    }
    if ((1U & (~ (IData)(this->__PVT__m_byte_addressing)))) {
        ++(vlSymsp->__Vcoverage[23578]);
    }
    ++(vlSymsp->__Vcoverage[23579]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_endian__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian\n"); );
    // Body
    {
        get_endian__Vfuncrtn = 0U;
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_endian__Vfuncrtn = this->__PVT__m_endian;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23581]);
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1027)->__VnoInFunc_get_endian(vlSymsp, hier, get_endian__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23582]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer\n"); );
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23584]);
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1036)->__VnoInFunc_get_sequencer(vlSymsp, hier, get_sequencer__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23585]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter\n"); );
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_adapter__Vfuncrtn = this->__PVT__m_adapter;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23587]);
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1045)->__VnoInFunc_get_adapter(vlSymsp, hier, get_adapter__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23588]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk504__DOT__submap;
    CData/*0:0*/ unnamedblk504__DOT__submap__Vfirst;
    unnamedblk504__DOT__submap__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk505__DOT__submap_;
    CData/*0:0*/ unnamedblk505__DOT__submap___Vfirst;
    unnamedblk505__DOT__submap___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk505__DOT__unnamedblk506__DOT__submap;
    __VlefExpr_0 = (0U != this->__PVT__m_submaps.first(unnamedblk504__DOT__submap));
    if (__VlefExpr_0) {
        unnamedblk504__DOT__submap__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk504__DOT__submap__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_submaps.next(unnamedblk504__DOT__submap));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk504__DOT__submap__Vfirst = 0U;
            maps.push_back(unnamedblk504__DOT__submap);
            ++(vlSymsp->__Vcoverage[23589]);
        }
        ++(vlSymsp->__Vcoverage[23590]);
    } else {
        ++(vlSymsp->__Vcoverage[23591]);
    }
    if ((1U == hier)) {
        __VlefExpr_2 = (0U != this->__PVT__m_submaps.first(unnamedblk505__DOT__submap_));
        if (__VlefExpr_2) {
            unnamedblk505__DOT__submap___Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk505__DOT__submap___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__m_submaps.next(unnamedblk505__DOT__submap_));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk505__DOT__submap___Vfirst = 0U;
                unnamedblk505__DOT__unnamedblk506__DOT__submap 
                    = unnamedblk505__DOT__submap_;
                VL_NULL_CHECK(unnamedblk505__DOT__unnamedblk506__DOT__submap, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1060)->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
                ++(vlSymsp->__Vcoverage[23592]);
            }
            ++(vlSymsp->__Vcoverage[23593]);
        } else {
            ++(vlSymsp->__Vcoverage[23594]);
        }
        ++(vlSymsp->__Vcoverage[23595]);
    } else {
        ++(vlSymsp->__Vcoverage[23596]);
    }
    ++(vlSymsp->__Vcoverage[23597]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk507__DOT__rg;
    CData/*0:0*/ unnamedblk507__DOT__rg__Vfirst;
    unnamedblk507__DOT__rg__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk508__DOT__submap_;
    CData/*0:0*/ unnamedblk508__DOT__submap___Vfirst;
    unnamedblk508__DOT__submap___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk508__DOT__unnamedblk509__DOT__submap;
    __VlefExpr_0 = (0U != this->__PVT__m_regs_info.first(unnamedblk507__DOT__rg));
    if (__VlefExpr_0) {
        unnamedblk507__DOT__rg__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk507__DOT__rg__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_regs_info.next(unnamedblk507__DOT__rg));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk507__DOT__rg__Vfirst = 0U;
            regs.push_back(unnamedblk507__DOT__rg);
            ++(vlSymsp->__Vcoverage[23598]);
        }
        ++(vlSymsp->__Vcoverage[23599]);
    } else {
        ++(vlSymsp->__Vcoverage[23600]);
    }
    if ((1U == hier)) {
        __VlefExpr_2 = (0U != this->__PVT__m_submaps.first(unnamedblk508__DOT__submap_));
        if (__VlefExpr_2) {
            unnamedblk508__DOT__submap___Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk508__DOT__submap___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__m_submaps.next(unnamedblk508__DOT__submap_));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk508__DOT__submap___Vfirst = 0U;
                unnamedblk508__DOT__unnamedblk509__DOT__submap 
                    = unnamedblk508__DOT__submap_;
                VL_NULL_CHECK(unnamedblk508__DOT__unnamedblk509__DOT__submap, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1075)->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
                ++(vlSymsp->__Vcoverage[23601]);
            }
            ++(vlSymsp->__Vcoverage[23602]);
        } else {
            ++(vlSymsp->__Vcoverage[23603]);
        }
        ++(vlSymsp->__Vcoverage[23604]);
    } else {
        ++(vlSymsp->__Vcoverage[23605]);
    }
    ++(vlSymsp->__Vcoverage[23606]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk510__DOT__rg_;
    CData/*0:0*/ unnamedblk510__DOT__rg___Vfirst;
    unnamedblk510__DOT__rg___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk510__DOT__unnamedblk511__DOT__rg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk512__DOT__submap_;
    CData/*0:0*/ unnamedblk512__DOT__submap___Vfirst;
    unnamedblk512__DOT__submap___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk512__DOT__unnamedblk513__DOT__submap;
    __VlefExpr_0 = (0U != this->__PVT__m_regs_info.first(unnamedblk510__DOT__rg_));
    if (__VlefExpr_0) {
        unnamedblk510__DOT__rg___Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk510__DOT__rg___Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_regs_info.next(unnamedblk510__DOT__rg_));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk510__DOT__rg___Vfirst = 0U;
            unnamedblk510__DOT__unnamedblk511__DOT__rg 
                = unnamedblk510__DOT__rg_;
            VL_NULL_CHECK(unnamedblk510__DOT__unnamedblk511__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1087)->__VnoInFunc_get_fields(vlSymsp, fields);
            ++(vlSymsp->__Vcoverage[23607]);
        }
        ++(vlSymsp->__Vcoverage[23608]);
    } else {
        ++(vlSymsp->__Vcoverage[23609]);
    }
    if ((1U == hier)) {
        __VlefExpr_2 = (0U != this->__PVT__m_submaps.first(unnamedblk512__DOT__submap_));
        if (__VlefExpr_2) {
            unnamedblk512__DOT__submap___Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk512__DOT__submap___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__m_submaps.next(unnamedblk512__DOT__submap_));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk512__DOT__submap___Vfirst = 0U;
                unnamedblk512__DOT__unnamedblk513__DOT__submap 
                    = unnamedblk512__DOT__submap_;
                VL_NULL_CHECK(unnamedblk512__DOT__unnamedblk513__DOT__submap, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1093)->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
                ++(vlSymsp->__Vcoverage[23610]);
            }
            ++(vlSymsp->__Vcoverage[23611]);
        } else {
            ++(vlSymsp->__Vcoverage[23612]);
        }
        ++(vlSymsp->__Vcoverage[23613]);
    } else {
        ++(vlSymsp->__Vcoverage[23614]);
    }
    ++(vlSymsp->__Vcoverage[23615]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk514__DOT__mem;
    CData/*0:0*/ unnamedblk514__DOT__mem__Vfirst;
    unnamedblk514__DOT__mem__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk515__DOT__submap_;
    CData/*0:0*/ unnamedblk515__DOT__submap___Vfirst;
    unnamedblk515__DOT__submap___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk515__DOT__unnamedblk516__DOT__submap;
    __VlefExpr_0 = (0U != this->__PVT__m_mems_info.first(unnamedblk514__DOT__mem));
    if (__VlefExpr_0) {
        unnamedblk514__DOT__mem__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk514__DOT__mem__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_mems_info.next(unnamedblk514__DOT__mem));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk514__DOT__mem__Vfirst = 0U;
            mems.push_back(unnamedblk514__DOT__mem);
            ++(vlSymsp->__Vcoverage[23616]);
        }
        ++(vlSymsp->__Vcoverage[23617]);
    } else {
        ++(vlSymsp->__Vcoverage[23618]);
    }
    if ((1U == hier)) {
        __VlefExpr_2 = (0U != this->__PVT__m_submaps.first(unnamedblk515__DOT__submap_));
        if (__VlefExpr_2) {
            unnamedblk515__DOT__submap___Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk515__DOT__submap___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__m_submaps.next(unnamedblk515__DOT__submap_));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk515__DOT__submap___Vfirst = 0U;
                unnamedblk515__DOT__unnamedblk516__DOT__submap 
                    = unnamedblk515__DOT__submap_;
                VL_NULL_CHECK(unnamedblk515__DOT__unnamedblk516__DOT__submap, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1109)->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
                ++(vlSymsp->__Vcoverage[23619]);
            }
            ++(vlSymsp->__Vcoverage[23620]);
        } else {
            ++(vlSymsp->__Vcoverage[23621]);
        }
        ++(vlSymsp->__Vcoverage[23622]);
    } else {
        ++(vlSymsp->__Vcoverage[23623]);
    }
    ++(vlSymsp->__Vcoverage[23624]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    IData/*31:0*/ unnamedblk517__DOT__i;
    unnamedblk517__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> mems;
    mems.clear();
    this->__VnoInFunc_get_memories(vlSymsp, mems, hier);
    unnamedblk517__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk517__DOT__i, mems.size())) {
        VL_NULL_CHECK(mems.at(unnamedblk517__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1123)->__VnoInFunc_get_virtual_registers(vlSymsp, regs);
        unnamedblk517__DOT__i = ((IData)(1U) + unnamedblk517__DOT__i);
        ++(vlSymsp->__Vcoverage[23625]);
    }
    ++(vlSymsp->__Vcoverage[23626]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk518__DOT__i;
    unnamedblk518__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> regs;
    regs.clear();
    this->__VnoInFunc_get_virtual_registers(vlSymsp, regs, hier);
    unnamedblk518__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk518__DOT__i, regs.size())) {
        VL_NULL_CHECK(regs.at(unnamedblk518__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1136)->__VnoInFunc_get_fields(vlSymsp, fields);
        unnamedblk518__DOT__i = ((IData)(1U) + unnamedblk518__DOT__i);
        ++(vlSymsp->__Vcoverage[23627]);
    }
    ++(vlSymsp->__Vcoverage[23628]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name\n"); );
    // Body
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    if ((VlNull{} == this->__PVT__m_parent)) {
        this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
    } else {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1148)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
    }
    ++(vlSymsp->__Vcoverage[23631]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, CData/*0:0*/ error, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263__verbosity;
    __Vfunc_uvm_report_enabled__263__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__263__severity;
    __Vfunc_uvm_report_enabled__263__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__264__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__265__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__269__verbosity;
    __Vtask_uvm_report_error__269__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__269__line;
    __Vtask_uvm_report_error__269__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__269__report_enabled_checked;
    __Vtask_uvm_report_error__269__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__270__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__271__Vfuncout;
    // Body
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if (this->__PVT__m_mems_info.exists(mem)) {
            ++(vlSymsp->__Vcoverage[23637]);
        } else {
            if (error) {
                this->__Vfunc_uvm_report_enabled__263__id = "REG_NO_MAP"s;
                __Vfunc_uvm_report_enabled__263__severity = 2U;
                __Vfunc_uvm_report_enabled__263__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__264__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__264__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__265__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__265__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__263__verbosity, (IData)(__Vfunc_uvm_report_enabled__263__severity), this->__Vfunc_uvm_report_enabled__263__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1157)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_error__269__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__269__context_name = ""s;
                    __Vtask_uvm_report_error__269__line = 0x00000485U;
                    this->__Vtask_uvm_report_error__269__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__269__verbosity = 0U;
                    this->__Vtask_uvm_report_error__269__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' not in map '"s), __VlefCall_2__get_name), "'"s));
                    this->__Vtask_uvm_report_error__269__id = "REG_NO_MAP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__270__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__270__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__271__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__271__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__269__id, this->__Vtask_uvm_report_error__269__message, __Vtask_uvm_report_error__269__verbosity, this->__Vtask_uvm_report_error__269__filename, __Vtask_uvm_report_error__269__line, this->__Vtask_uvm_report_error__269__context_name, (IData)(__Vtask_uvm_report_error__269__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[437]);
                    ++(vlSymsp->__Vcoverage[23632]);
                } else {
                    ++(vlSymsp->__Vcoverage[23633]);
                }
                ++(vlSymsp->__Vcoverage[23634]);
            } else {
                ++(vlSymsp->__Vcoverage[23635]);
            }
            get_mem_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_mem_map_info__Vfuncrtn = this->__PVT__m_mems_info
            .at(mem);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23638]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, CData/*0:0*/ error, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__273__verbosity;
    __Vfunc_uvm_report_enabled__273__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__273__severity;
    __Vfunc_uvm_report_enabled__273__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__274__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__275__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__279__verbosity;
    __Vtask_uvm_report_error__279__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__279__line;
    __Vtask_uvm_report_error__279__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__279__report_enabled_checked;
    __Vtask_uvm_report_error__279__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__280__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__281__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__283__verbosity;
    __Vfunc_uvm_report_enabled__283__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__283__severity;
    __Vfunc_uvm_report_enabled__283__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__284__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__285__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__288__verbosity;
    __Vtask_uvm_report_warning__288__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__288__line;
    __Vtask_uvm_report_warning__288__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__288__report_enabled_checked;
    __Vtask_uvm_report_warning__288__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__289__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__290__Vfuncout;
    // Body
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> result;
    {
        if (this->__PVT__m_regs_info.exists(rg)) {
            ++(vlSymsp->__Vcoverage[23644]);
        } else {
            if (error) {
                this->__Vfunc_uvm_report_enabled__273__id = "REG_NO_MAP"s;
                __Vfunc_uvm_report_enabled__273__severity = 2U;
                __Vfunc_uvm_report_enabled__273__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__274__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__274__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__275__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__275__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__273__verbosity, (IData)(__Vfunc_uvm_report_enabled__273__severity), this->__Vfunc_uvm_report_enabled__273__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1170)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    __Vtask_uvm_report_error__279__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__279__context_name = ""s;
                    __Vtask_uvm_report_error__279__line = 0x00000492U;
                    this->__Vtask_uvm_report_error__279__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__279__verbosity = 0U;
                    this->__Vtask_uvm_report_error__279__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' not in map '"s), __VlefCall_2__get_name), "'"s));
                    this->__Vtask_uvm_report_error__279__id = "REG_NO_MAP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__280__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__280__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__281__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__281__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__279__id, this->__Vtask_uvm_report_error__279__message, __Vtask_uvm_report_error__279__verbosity, this->__Vtask_uvm_report_error__279__filename, __Vtask_uvm_report_error__279__line, this->__Vtask_uvm_report_error__279__context_name, (IData)(__Vtask_uvm_report_error__279__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[437]);
                    ++(vlSymsp->__Vcoverage[23639]);
                } else {
                    ++(vlSymsp->__Vcoverage[23640]);
                }
                ++(vlSymsp->__Vcoverage[23641]);
            } else {
                ++(vlSymsp->__Vcoverage[23642]);
            }
            get_reg_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        result = this->__PVT__m_regs_info.at(rg);
        if (VL_NULL_CHECK(result, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1174)
            ->__PVT__is_initialized) {
            ++(vlSymsp->__Vcoverage[23648]);
        } else {
            this->__Vfunc_uvm_report_enabled__283__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__283__severity = 1U;
            __Vfunc_uvm_report_enabled__283__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__284__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__284__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__285__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__285__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__283__verbosity, (IData)(__Vfunc_uvm_report_enabled__283__severity), this->__Vfunc_uvm_report_enabled__283__id, __VlefCall_3__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__288__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__288__context_name = ""s;
                __Vtask_uvm_report_warning__288__line = 0x00000497U;
                this->__Vtask_uvm_report_warning__288__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__288__verbosity = 0U;
                this->__Vtask_uvm_report_warning__288__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("map '"s, __VlefCall_4__get_name), "' does not seem to be initialized correctly, check that the top register model is locked()"s));
                this->__Vtask_uvm_report_warning__288__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__289__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__289__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__290__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__290__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__288__id, this->__Vtask_uvm_report_warning__288__message, __Vtask_uvm_report_warning__288__verbosity, this->__Vtask_uvm_report_warning__288__filename, __Vtask_uvm_report_warning__288__line, this->__Vtask_uvm_report_warning__288__context_name, (IData)(__Vtask_uvm_report_warning__288__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[436]);
                ++(vlSymsp->__Vcoverage[23645]);
            } else {
                ++(vlSymsp->__Vcoverage[23646]);
            }
            ++(vlSymsp->__Vcoverage[23647]);
        }
        get_reg_map_info__Vfuncrtn = result;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23649]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_base_addr(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_base_addr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_locked;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk519__DOT__top_map;
    if ((VlNull{} != this->__PVT__m_parent_map)) {
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1189)->__VnoInFunc_set_submap_offset(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, offset);
        ++(vlSymsp->__Vcoverage[23652]);
    } else {
        this->__PVT__m_base_addr = offset;
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1193)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk519__DOT__top_map);
            VL_NULL_CHECK(unnamedblk519__DOT__top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1195)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
            ++(vlSymsp->__Vcoverage[23650]);
        } else {
            ++(vlSymsp->__Vcoverage[23651]);
        }
        ++(vlSymsp->__Vcoverage[23653]);
    }
    ++(vlSymsp->__Vcoverage[23654]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_size\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_size__299__Vfuncout;
    __Vtask_get_size__299__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_10__get_size;
    IData/*31:0*/ __VlefExpr_9;
    CData/*0:0*/ __VlefExpr_8;
    CData/*0:0*/ __VlefExpr_7;
    IData/*31:0*/ __VlefCall_6__get_n_bytes;
    QData/*63:0*/ __VlefCall_5__get_size;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk520__DOT__rg_;
    CData/*0:0*/ unnamedblk520__DOT__rg___Vfirst;
    unnamedblk520__DOT__rg___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk520__DOT__unnamedblk521__DOT__rg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk522__DOT__mem_;
    CData/*0:0*/ unnamedblk522__DOT__mem___Vfirst;
    unnamedblk522__DOT__mem___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk522__DOT__unnamedblk523__DOT__mem;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk524__DOT__submap_;
    CData/*0:0*/ unnamedblk524__DOT__submap___Vfirst;
    unnamedblk524__DOT__submap___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk524__DOT__unnamedblk525__DOT__submap;
    IData/*31:0*/ max_addr;
    IData/*31:0*/ addr;
    get_size__Vfuncrtn = 0U;
    max_addr = 0U;
    addr = 0U;
    __VlefExpr_0 = (0U != this->__PVT__m_regs_info.first(unnamedblk520__DOT__rg_));
    if (__VlefExpr_0) {
        unnamedblk520__DOT__rg___Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk520__DOT__rg___Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_regs_info.next(unnamedblk520__DOT__rg_));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk520__DOT__rg___Vfirst = 0U;
            unnamedblk520__DOT__unnamedblk521__DOT__rg 
                = unnamedblk520__DOT__rg_;
            VL_NULL_CHECK(unnamedblk520__DOT__unnamedblk521__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1211)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
            addr = ((IData)(VL_NULL_CHECK(this->__PVT__m_regs_info
                                          .at(unnamedblk520__DOT__unnamedblk521__DOT__rg), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1211)
                            ->__PVT__offset) + (IData)(
                                                       VL_DIV_QQQ(64, 
                                                                  ((QData)((IData)(__VlefCall_2__get_n_bytes)) 
                                                                   - 1ULL), (QData)((IData)(this->__PVT__m_n_bytes)))));
            if ((addr > max_addr)) {
                max_addr = addr;
                ++(vlSymsp->__Vcoverage[23655]);
            } else {
                ++(vlSymsp->__Vcoverage[23656]);
            }
            ++(vlSymsp->__Vcoverage[23657]);
        }
        ++(vlSymsp->__Vcoverage[23658]);
    } else {
        ++(vlSymsp->__Vcoverage[23659]);
    }
    __VlefExpr_3 = (0U != this->__PVT__m_mems_info.first(unnamedblk522__DOT__mem_));
    if (__VlefExpr_3) {
        unnamedblk522__DOT__mem___Vfirst = 1U;
        while (true) {
            __VlefExpr_4 = unnamedblk522__DOT__mem___Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_4)))) {
                __VlefExpr_4 = (0U != this->__PVT__m_mems_info.next(unnamedblk522__DOT__mem_));
            }
            if (!(__VlefExpr_4)) break;
            unnamedblk522__DOT__mem___Vfirst = 0U;
            unnamedblk522__DOT__unnamedblk523__DOT__mem 
                = unnamedblk522__DOT__mem_;
            VL_NULL_CHECK(unnamedblk522__DOT__unnamedblk523__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1218)->__VnoInFunc_get_size(vlSymsp, __VlefCall_5__get_size);
            VL_NULL_CHECK(unnamedblk522__DOT__unnamedblk523__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1218)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_6__get_n_bytes);
            addr = (((IData)(VL_NULL_CHECK(this->__PVT__m_mems_info
                                           .at(unnamedblk522__DOT__unnamedblk523__DOT__mem), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1218)
                             ->__PVT__offset) + (IData)(
                                                        (__VlefCall_5__get_size 
                                                         * 
                                                         (1ULL 
                                                          + 
                                                          VL_DIV_QQQ(64, 
                                                                     ((QData)((IData)(__VlefCall_6__get_n_bytes)) 
                                                                      - 1ULL), (QData)((IData)(this->__PVT__m_n_bytes))))))) 
                    - (IData)(1U));
            if ((addr > max_addr)) {
                max_addr = addr;
                ++(vlSymsp->__Vcoverage[23660]);
            } else {
                ++(vlSymsp->__Vcoverage[23661]);
            }
            ++(vlSymsp->__Vcoverage[23662]);
        }
        ++(vlSymsp->__Vcoverage[23663]);
    } else {
        ++(vlSymsp->__Vcoverage[23664]);
    }
    __VlefExpr_7 = (0U != this->__PVT__m_submaps.first(unnamedblk524__DOT__submap_));
    if (__VlefExpr_7) {
        unnamedblk524__DOT__submap___Vfirst = 1U;
        while (true) {
            __VlefExpr_8 = unnamedblk524__DOT__submap___Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_8)))) {
                __VlefExpr_8 = (0U != this->__PVT__m_submaps.next(unnamedblk524__DOT__submap_));
            }
            if (!(__VlefExpr_8)) break;
            unnamedblk524__DOT__submap___Vfirst = 0U;
            unnamedblk524__DOT__unnamedblk525__DOT__submap 
                = unnamedblk524__DOT__submap_;
            __VlefExpr_9 = (IData)(this->__PVT__m_submaps
                                   .at(unnamedblk524__DOT__unnamedblk525__DOT__submap));
            VL_NULL_CHECK(unnamedblk524__DOT__unnamedblk525__DOT__submap, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1225)->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__299__Vfuncout);
            __VlefCall_10__get_size = __Vtask_get_size__299__Vfuncout;
            addr = (__VlefExpr_9 + __VlefCall_10__get_size);
            if ((addr > max_addr)) {
                max_addr = addr;
                ++(vlSymsp->__Vcoverage[23665]);
            } else {
                ++(vlSymsp->__Vcoverage[23666]);
            }
            ++(vlSymsp->__Vcoverage[23667]);
        }
        ++(vlSymsp->__Vcoverage[23668]);
    } else {
        ++(vlSymsp->__Vcoverage[23669]);
    }
    get_size__Vfuncrtn = ((IData)(1U) + max_addr);
    ++(vlSymsp->__Vcoverage[23670]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xverify_map_configX(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xverify_map_configX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__302__verbosity;
    __Vfunc_uvm_report_enabled__302__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__302__severity;
    __Vfunc_uvm_report_enabled__302__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__303__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__304__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__307__verbosity;
    __Vtask_uvm_report_error__307__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__307__line;
    __Vtask_uvm_report_error__307__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__307__report_enabled_checked;
    __Vtask_uvm_report_error__307__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__308__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__309__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__312__verbosity;
    __Vfunc_uvm_report_enabled__312__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__312__severity;
    __Vfunc_uvm_report_enabled__312__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__313__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__314__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__317__verbosity;
    __Vtask_uvm_report_error__317__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__317__line;
    __Vtask_uvm_report_error__317__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__317__report_enabled_checked;
    __Vtask_uvm_report_error__317__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__318__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__319__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__321__verbosity;
    __Vfunc_uvm_report_enabled__321__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__321__severity;
    __Vfunc_uvm_report_enabled__321__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> __VlefCall_0__get_adapter;
    CData/*0:0*/ error;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> root_map;
    error = 0U;
    this->__VnoInFunc_get_root_map(vlSymsp, root_map);
    VL_NULL_CHECK(root_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1241)->__VnoInFunc_get_adapter(vlSymsp, 1U, __VlefCall_0__get_adapter);
    if ((VlNull{} == __VlefCall_0__get_adapter)) {
        this->__Vfunc_uvm_report_enabled__302__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__302__severity = 2U;
        __Vfunc_uvm_report_enabled__302__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__303__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__303__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__304__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__304__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__302__verbosity, (IData)(__Vfunc_uvm_report_enabled__302__severity), this->__Vfunc_uvm_report_enabled__302__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            VL_NULL_CHECK(root_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1243)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_error__307__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__307__context_name = ""s;
            __Vtask_uvm_report_error__307__line = 0x000004dbU;
            this->__Vtask_uvm_report_error__307__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__307__verbosity = 0U;
            this->__Vtask_uvm_report_error__307__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_full_name), "' does not have an adapter registered"s));
            this->__Vtask_uvm_report_error__307__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__308__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__308__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__309__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__309__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__307__id, this->__Vtask_uvm_report_error__307__message, __Vtask_uvm_report_error__307__verbosity, this->__Vtask_uvm_report_error__307__filename, __Vtask_uvm_report_error__307__line, this->__Vtask_uvm_report_error__307__context_name, (IData)(__Vtask_uvm_report_error__307__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[23671]);
        } else {
            ++(vlSymsp->__Vcoverage[23672]);
        }
        error = (1U & ((IData)(1U) + (IData)(error)));
        ++(vlSymsp->__Vcoverage[23673]);
    } else {
        ++(vlSymsp->__Vcoverage[23674]);
    }
    VL_NULL_CHECK(root_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1246)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_3__get_sequencer);
    if ((VlNull{} == __VlefCall_3__get_sequencer)) {
        this->__Vfunc_uvm_report_enabled__312__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__312__severity = 2U;
        __Vfunc_uvm_report_enabled__312__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__313__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__313__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__314__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__314__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__312__verbosity, (IData)(__Vfunc_uvm_report_enabled__312__severity), this->__Vfunc_uvm_report_enabled__312__id, __VlefCall_4__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            VL_NULL_CHECK(root_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1248)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            __Vtask_uvm_report_error__317__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__317__context_name = ""s;
            __Vtask_uvm_report_error__317__line = 0x000004e0U;
            this->__Vtask_uvm_report_error__317__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__317__verbosity = 0U;
            this->__Vtask_uvm_report_error__317__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Map '"s, __VlefCall_5__get_full_name), "' does not have a sequencer registered"s));
            this->__Vtask_uvm_report_error__317__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__318__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__318__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__319__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__319__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__317__id, this->__Vtask_uvm_report_error__317__message, __Vtask_uvm_report_error__317__verbosity, this->__Vtask_uvm_report_error__317__filename, __Vtask_uvm_report_error__317__line, this->__Vtask_uvm_report_error__317__context_name, (IData)(__Vtask_uvm_report_error__317__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[23675]);
        } else {
            ++(vlSymsp->__Vcoverage[23676]);
        }
        error = (1U & ((IData)(1U) + (IData)(error)));
        ++(vlSymsp->__Vcoverage[23677]);
    } else {
        ++(vlSymsp->__Vcoverage[23678]);
    }
    if (error) {
        this->__Vfunc_uvm_report_enabled__321__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__321__severity = 3U;
        __Vfunc_uvm_report_enabled__321__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__322__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__323__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__321__verbosity, (IData)(__Vfunc_uvm_report_enabled__321__severity), this->__Vfunc_uvm_report_enabled__321__id, __VlefCall_6__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_6__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Must register an adapter and sequencer for each top-level map in RegModel model"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x000004e5U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[23679]);
        } else {
            ++(vlSymsp->__Vcoverage[23680]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[23682]);
    }
    ++(vlSymsp->__Vcoverage[23683]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses_to_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> parent_map, IData/*31:0*/ &byte_offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &get_physical_addresses_to_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses_to_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_bytes__326__Vfuncout;
    __Vfunc_get_n_bytes__326__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__336__Vfuncout;
    __Vtask_get_physical_addresses_to_map__336__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__347__verbosity;
    __Vfunc_uvm_report_enabled__347__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__347__severity;
    __Vfunc_uvm_report_enabled__347__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__348__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__349__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__352__verbosity;
    __Vtask_uvm_report_error__352__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__352__line;
    __Vtask_uvm_report_error__352__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__352__report_enabled_checked;
    __Vtask_uvm_report_error__352__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__353__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__354__Vfuncout;
    // Body
    std::string __VlefCall_18__get_full_name;
    IData/*31:0*/ __VlefCall_17__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_16__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_15__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_14__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_13__get_n_bytes;
    IData/*31:0*/ __VlefCall_12__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_11__get_n_bytes;
    CData/*0:0*/ __VlefLogAnd_10;
    IData/*31:0*/ __VlefCall_9__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_8__get_n_bytes;
    IData/*31:0*/ __VlefCall_7__ceil;
    IData/*31:0*/ __VlefCall_6__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_5__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_4__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_3__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_2__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_1__get_n_bytes;
    QData/*63:0*/ __VlefCall_0__get_base_addr;
    QData/*63:0*/ unnamedblk526__DOT__lb;
    QData/*63:0*/ unnamedblk526__DOT__laddr;
    QData/*63:0*/ unnamedblk527__DOT__lbase_addr2;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk528__DOT__i;
    unnamedblk527__DOT__unnamedblk528__DOT__i = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk529__DOT__i;
    unnamedblk527__DOT__unnamedblk529__DOT__i = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk530__DOT__i;
    unnamedblk527__DOT__unnamedblk530__DOT__i = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk531__DOT__i;
    unnamedblk527__DOT__unnamedblk531__DOT__i = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk532__DOT__idx;
    unnamedblk527__DOT__unnamedblk532__DOT__idx = 0;
    IData/*31:0*/ __VCase_h940ff81d__0;
    __VCase_h940ff81d__0 = 0;
    IData/*31:0*/ bus_width;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> up_map;
    VlQueue<QData/*63:0*/> local_addr;
    QData/*63:0*/ lbase_addr;
    get_physical_addresses_to_map__Vfuncrtn = 0U;
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__326__Vfuncout);
    bus_width = __Vfunc_get_n_bytes__326__Vfuncout;
    local_addr.clear();
    local_addr.atDefault() = 0;
    lbase_addr = 0ULL;
    this->__VnoInFunc_get_parent_map(vlSymsp, up_map);
    if ((VlNull{} == up_map)) {
        this->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_0__get_base_addr);
    } else {
        VL_NULL_CHECK(up_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1285)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_0__get_base_addr);
    }
    lbase_addr = __VlefCall_0__get_base_addr;
    if ((up_map != parent_map)) {
        unnamedblk526__DOT__lb = 0ULL;
        unnamedblk526__DOT__laddr = 0ULL;
        if ((0U != mem_offset)) {
            VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1297)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_1__get_n_bytes);
            this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_2__get_addr_unit_bytes);
            base_addr = (base_addr + VL_DIV_QQQ(64, 
                                                (mem_offset 
                                                 * (QData)((IData)(__VlefCall_1__get_n_bytes))), (QData)((IData)(__VlefCall_2__get_addr_unit_bytes))));
            ++(vlSymsp->__Vcoverage[23684]);
        } else {
            ++(vlSymsp->__Vcoverage[23685]);
        }
        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_3__get_addr_unit_bytes);
        VL_NULL_CHECK(up_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1299)->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_4__get_addr_unit_bytes);
        unnamedblk526__DOT__laddr = (lbase_addr + VL_DIV_QQQ(64, 
                                                             (base_addr 
                                                              * (QData)((IData)(__VlefCall_3__get_addr_unit_bytes))), (QData)((IData)(__VlefCall_4__get_addr_unit_bytes))));
        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_5__get_addr_unit_bytes);
        VL_NULL_CHECK(up_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1300)->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_6__get_addr_unit_bytes);
        unnamedblk526__DOT__lb = VL_MODDIV_QQQ(64, 
                                               (base_addr 
                                                * (QData)((IData)(__VlefCall_5__get_addr_unit_bytes))), (QData)((IData)(__VlefCall_6__get_addr_unit_bytes)));
        byte_offset = (byte_offset + (IData)(unnamedblk526__DOT__lb));
        VL_NULL_CHECK(up_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1303)->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, unnamedblk526__DOT__laddr, 0ULL, 
                                                                                (n_bytes 
                                                                                + (IData)(unnamedblk526__DOT__lb)), addr, parent_map, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__336__Vfuncout);
        get_physical_addresses_to_map__Vfuncrtn = __Vtask_get_physical_addresses_to_map__336__Vfuncout;
    } else {
        unnamedblk527__DOT__lbase_addr2 = 0ULL;
        this->__VnoInFunc_ceil(vlSymsp, n_bytes, bus_width, __VlefCall_7__ceil);
        local_addr.renew(__VlefCall_7__ceil);
        unnamedblk527__DOT__lbase_addr2 = base_addr;
        if ((0U != mem_offset)) {
            __VlefLogAnd_10 = (VlNull{} != mem);
            if (__VlefLogAnd_10) {
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1312)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_8__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_9__get_addr_unit_bytes);
                __VlefLogAnd_10 = (__VlefCall_8__get_n_bytes 
                                   >= __VlefCall_9__get_addr_unit_bytes);
            }
            if (__VlefLogAnd_10) {
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1313)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_11__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_12__get_addr_unit_bytes);
                unnamedblk527__DOT__lbase_addr2 = (base_addr 
                                                   + 
                                                   VL_DIV_QQQ(64, 
                                                              (mem_offset 
                                                               * (QData)((IData)(__VlefCall_11__get_n_bytes))), (QData)((IData)(__VlefCall_12__get_addr_unit_bytes))));
                VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1314)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_13__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_14__get_addr_unit_bytes);
                byte_offset = (byte_offset + (IData)(
                                                     VL_MODDIV_QQQ(64, 
                                                                   (mem_offset 
                                                                    * (QData)((IData)(__VlefCall_13__get_n_bytes))), (QData)((IData)(__VlefCall_14__get_addr_unit_bytes)))));
                ++(vlSymsp->__Vcoverage[23686]);
            } else {
                unnamedblk527__DOT__lbase_addr2 = (base_addr 
                                                   + mem_offset);
                ++(vlSymsp->__Vcoverage[23687]);
            }
            ++(vlSymsp->__Vcoverage[23688]);
        } else {
            ++(vlSymsp->__Vcoverage[23689]);
        }
        this->__VnoInFunc_get_endian(vlSymsp, 0U, __VCase_h940ff81d__0);
        if ((1U == __VCase_h940ff81d__0)) {
            unnamedblk527__DOT__unnamedblk528__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk528__DOT__i, local_addr.size())) {
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_15__get_addr_unit_bytes);
                local_addr.atWrite(unnamedblk527__DOT__unnamedblk528__DOT__i) 
                    = (unnamedblk527__DOT__lbase_addr2 
                       + VL_DIV_QQQ(64, ((QData)((IData)(unnamedblk527__DOT__unnamedblk528__DOT__i)) 
                                         * (QData)((IData)(bus_width))), (QData)((IData)(__VlefCall_15__get_addr_unit_bytes))));
                unnamedblk527__DOT__unnamedblk528__DOT__i 
                    = ((IData)(1U) + unnamedblk527__DOT__unnamedblk528__DOT__i);
                ++(vlSymsp->__Vcoverage[23690]);
            }
            ++(vlSymsp->__Vcoverage[23691]);
        } else if ((2U == __VCase_h940ff81d__0)) {
            unnamedblk527__DOT__unnamedblk529__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk529__DOT__i, local_addr.size())) {
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_16__get_addr_unit_bytes);
                local_addr.atWrite(unnamedblk527__DOT__unnamedblk529__DOT__i) 
                    = (unnamedblk527__DOT__lbase_addr2 
                       + VL_DIV_QQQ(64, ((((QData)((IData)(local_addr.size())) 
                                           - 1ULL) 
                                          - (QData)((IData)(unnamedblk527__DOT__unnamedblk529__DOT__i))) 
                                         * (QData)((IData)(bus_width))), (QData)((IData)(__VlefCall_16__get_addr_unit_bytes))));
                unnamedblk527__DOT__unnamedblk529__DOT__i 
                    = ((IData)(1U) + unnamedblk527__DOT__unnamedblk529__DOT__i);
                ++(vlSymsp->__Vcoverage[23692]);
            }
            ++(vlSymsp->__Vcoverage[23693]);
        } else if ((3U == __VCase_h940ff81d__0)) {
            unnamedblk527__DOT__unnamedblk530__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk530__DOT__i, local_addr.size())) {
                local_addr.atWrite(unnamedblk527__DOT__unnamedblk530__DOT__i) 
                    = unnamedblk527__DOT__lbase_addr2;
                unnamedblk527__DOT__unnamedblk530__DOT__i 
                    = ((IData)(1U) + unnamedblk527__DOT__unnamedblk530__DOT__i);
                ++(vlSymsp->__Vcoverage[23694]);
            }
            ++(vlSymsp->__Vcoverage[23695]);
        } else if ((4U == __VCase_h940ff81d__0)) {
            unnamedblk527__DOT__unnamedblk531__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk531__DOT__i, local_addr.size())) {
                local_addr.atWrite(unnamedblk527__DOT__unnamedblk531__DOT__i) 
                    = unnamedblk527__DOT__lbase_addr2;
                unnamedblk527__DOT__unnamedblk531__DOT__i 
                    = ((IData)(1U) + unnamedblk527__DOT__unnamedblk531__DOT__i);
                ++(vlSymsp->__Vcoverage[23696]);
            }
            ++(vlSymsp->__Vcoverage[23697]);
        } else {
            this->__Vfunc_uvm_report_enabled__347__id = "UVM/REG/MAPNOENDIANESS"s;
            __Vfunc_uvm_report_enabled__347__severity = 2U;
            __Vfunc_uvm_report_enabled__347__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__348__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__348__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__349__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__349__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__347__verbosity, (IData)(__Vfunc_uvm_report_enabled__347__severity), this->__Vfunc_uvm_report_enabled__347__id, __VlefCall_17__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_17__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                __Vtask_uvm_report_error__352__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__352__context_name = ""s;
                __Vtask_uvm_report_error__352__line = 0x00000543U;
                this->__Vtask_uvm_report_error__352__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__352__verbosity = 0U;
                this->__Vtask_uvm_report_error__352__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Map has no specified endianness. "s, VL_SFORMATF_N_NX("Cannot access %0# bytes register via its %0d byte \"%@\" interface",0,
                                                                                32,
                                                                                n_bytes,
                                                                                32,
                                                                                bus_width,
                                                                                -1,
                                                                                &(__VlefCall_18__get_full_name)) ));
                this->__Vtask_uvm_report_error__352__id = "UVM/REG/MAPNOENDIANESS"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__353__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__353__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__354__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__354__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__352__id, this->__Vtask_uvm_report_error__352__message, __Vtask_uvm_report_error__352__verbosity, this->__Vtask_uvm_report_error__352__filename, __Vtask_uvm_report_error__352__line, this->__Vtask_uvm_report_error__352__context_name, (IData)(__Vtask_uvm_report_error__352__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23698]);
            } else {
                ++(vlSymsp->__Vcoverage[23699]);
            }
            ++(vlSymsp->__Vcoverage[23700]);
        }
        addr.renew_copy(local_addr.size(), local_addr);
        unnamedblk527__DOT__unnamedblk532__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk532__DOT__idx, addr.size())) {
            addr.atWrite(unnamedblk527__DOT__unnamedblk532__DOT__idx) 
                = (addr.at(unnamedblk527__DOT__unnamedblk532__DOT__idx) 
                   + lbase_addr);
            unnamedblk527__DOT__unnamedblk532__DOT__idx 
                = ((IData)(1U) + unnamedblk527__DOT__unnamedblk532__DOT__idx);
            ++(vlSymsp->__Vcoverage[23701]);
        }
        ++(vlSymsp->__Vcoverage[23703]);
    }
    ++(vlSymsp->__Vcoverage[23704]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_physical_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_physical_addresses_to_map__356__Vfuncout;
    __Vfunc_get_physical_addresses_to_map__356__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ skip;
    get_physical_addresses__Vfuncrtn = 0U;
    skip = 0U;
    this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, base_addr, mem_offset, n_bytes, addr, VlNull{}, skip, VlNull{}, __Vfunc_get_physical_addresses_to_map__356__Vfuncout);
    get_physical_addresses__Vfuncrtn = __Vfunc_get_physical_addresses_to_map__356__Vfuncout;
    ++(vlSymsp->__Vcoverage[23705]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_submap_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_submap_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__verbosity;
    __Vfunc_uvm_report_enabled__357__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__357__severity;
    __Vfunc_uvm_report_enabled__357__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__358__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__359__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__361__verbosity;
    __Vtask_uvm_report_error__361__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__361__line;
    __Vtask_uvm_report_error__361__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__361__report_enabled_checked;
    __Vtask_uvm_report_error__361__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__362__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__363__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_1__is_locked;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk533__DOT__root_map;
    {
        if ((VlNull{} == submap)) {
            this->__Vfunc_uvm_report_enabled__357__id = "REG/NULL"s;
            __Vfunc_uvm_report_enabled__357__severity = 2U;
            __Vfunc_uvm_report_enabled__357__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__358__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__358__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__359__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__359__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__357__verbosity, (IData)(__Vfunc_uvm_report_enabled__357__severity), this->__Vfunc_uvm_report_enabled__357__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__361__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__361__context_name = ""s;
                __Vtask_uvm_report_error__361__line = 0x00000569U;
                this->__Vtask_uvm_report_error__361__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__361__verbosity = 0U;
                this->__Vtask_uvm_report_error__361__message = "set_submap_offset: submap handle is null"s;
                this->__Vtask_uvm_report_error__361__id = "REG/NULL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__362__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__362__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__363__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__363__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__361__id, this->__Vtask_uvm_report_error__361__message, __Vtask_uvm_report_error__361__verbosity, this->__Vtask_uvm_report_error__361__filename, __Vtask_uvm_report_error__361__line, this->__Vtask_uvm_report_error__361__context_name, (IData)(__Vtask_uvm_report_error__361__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23706]);
            } else {
                ++(vlSymsp->__Vcoverage[23707]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23709]);
        }
        this->__PVT__m_submaps.at(submap) = offset;
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1389)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_1__is_locked);
        if (__VlefCall_1__is_locked) {
            this->__VnoInFunc_get_root_map(vlSymsp, unnamedblk533__DOT__root_map);
            VL_NULL_CHECK(unnamedblk533__DOT__root_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1391)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
            ++(vlSymsp->__Vcoverage[23710]);
        } else {
            ++(vlSymsp->__Vcoverage[23711]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23712]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ &get_submap_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__368__verbosity;
    __Vfunc_uvm_report_enabled__368__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__368__severity;
    __Vfunc_uvm_report_enabled__368__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__369__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__370__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__372__verbosity;
    __Vtask_uvm_report_error__372__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__372__line;
    __Vtask_uvm_report_error__372__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__372__report_enabled_checked;
    __Vtask_uvm_report_error__372__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__373__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__374__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__376__verbosity;
    __Vfunc_uvm_report_enabled__376__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__376__severity;
    __Vfunc_uvm_report_enabled__376__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__377__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__378__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__382__verbosity;
    __Vtask_uvm_report_error__382__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__382__line;
    __Vtask_uvm_report_error__382__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__382__report_enabled_checked;
    __Vtask_uvm_report_error__382__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__383__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__384__Vfuncout;
    // Body
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_submap_offset__Vfuncrtn = 0ULL;
        if ((VlNull{} == submap)) {
            this->__Vfunc_uvm_report_enabled__368__id = "REG/NULL"s;
            __Vfunc_uvm_report_enabled__368__severity = 2U;
            __Vfunc_uvm_report_enabled__368__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__369__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__369__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__370__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__370__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__368__verbosity, (IData)(__Vfunc_uvm_report_enabled__368__severity), this->__Vfunc_uvm_report_enabled__368__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__372__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__372__context_name = ""s;
                __Vtask_uvm_report_error__372__line = 0x00000578U;
                this->__Vtask_uvm_report_error__372__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__372__verbosity = 0U;
                this->__Vtask_uvm_report_error__372__message = "set_submap_offset: submap handle is null"s;
                this->__Vtask_uvm_report_error__372__id = "REG/NULL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__373__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__373__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__374__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__374__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__372__id, this->__Vtask_uvm_report_error__372__message, __Vtask_uvm_report_error__372__verbosity, this->__Vtask_uvm_report_error__372__filename, __Vtask_uvm_report_error__372__line, this->__Vtask_uvm_report_error__372__context_name, (IData)(__Vtask_uvm_report_error__372__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23713]);
            } else {
                ++(vlSymsp->__Vcoverage[23714]);
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23716]);
        }
        if (this->__PVT__m_submaps.exists(submap)) {
            ++(vlSymsp->__Vcoverage[23720]);
        } else {
            this->__Vfunc_uvm_report_enabled__376__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__376__severity = 2U;
            __Vfunc_uvm_report_enabled__376__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__377__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__377__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__378__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__378__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__376__verbosity, (IData)(__Vfunc_uvm_report_enabled__376__severity), this->__Vfunc_uvm_report_enabled__376__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(submap, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1405)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__382__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__382__context_name = ""s;
                __Vtask_uvm_report_error__382__line = 0x0000057dU;
                this->__Vtask_uvm_report_error__382__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__382__verbosity = 0U;
                this->__Vtask_uvm_report_error__382__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_full_name), "' is not a submap of '"s), __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__382__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__383__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__383__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__384__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__384__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__382__id, this->__Vtask_uvm_report_error__382__message, __Vtask_uvm_report_error__382__verbosity, this->__Vtask_uvm_report_error__382__filename, __Vtask_uvm_report_error__382__line, this->__Vtask_uvm_report_error__382__context_name, (IData)(__Vtask_uvm_report_error__382__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23717]);
            } else {
                ++(vlSymsp->__Vcoverage[23718]);
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_submap_offset__Vfuncrtn = this->__PVT__m_submaps
            .at(submap);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23721]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_by_offset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_reg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__387__verbosity;
    __Vfunc_uvm_report_enabled__387__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__387__severity;
    __Vfunc_uvm_report_enabled__387__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__388__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__389__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__392__verbosity;
    __Vtask_uvm_report_error__392__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__392__line;
    __Vtask_uvm_report_error__392__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__392__report_enabled_checked;
    __Vtask_uvm_report_error__392__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__393__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__394__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1416)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            ++(vlSymsp->__Vcoverage[23725]);
        } else {
            this->__Vfunc_uvm_report_enabled__387__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__387__severity = 2U;
            __Vfunc_uvm_report_enabled__387__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__388__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__388__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__389__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__389__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__387__verbosity, (IData)(__Vfunc_uvm_report_enabled__387__severity), this->__Vfunc_uvm_report_enabled__387__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1417)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__392__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__392__context_name = ""s;
                __Vtask_uvm_report_error__392__line = 0x00000589U;
                this->__Vtask_uvm_report_error__392__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__392__verbosity = 0U;
                this->__Vtask_uvm_report_error__392__message 
                    = VL_SFORMATF_N_NX("Cannot get register by offset: Block %@ is not locked.",0,
                                       -1,&(__VlefCall_2__get_full_name)) ;
                this->__Vtask_uvm_report_error__392__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__393__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__393__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__394__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__394__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__392__id, this->__Vtask_uvm_report_error__392__message, __Vtask_uvm_report_error__392__verbosity, this->__Vtask_uvm_report_error__392__filename, __Vtask_uvm_report_error__392__line, this->__Vtask_uvm_report_error__392__context_name, (IData)(__Vtask_uvm_report_error__392__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23722]);
            } else {
                ++(vlSymsp->__Vcoverage[23723]);
            }
            get_reg_by_offset__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((1U & (~ (IData)(read))) && this->__PVT__m_regs_by_offset_wo.exists(offset))) {
            get_reg_by_offset__Vfuncrtn = this->__PVT__m_regs_by_offset_wo
                .at(offset);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23727]);
        }
        if (this->__PVT__m_regs_by_offset.exists(offset)) {
            get_reg_by_offset__Vfuncrtn = this->__PVT__m_regs_by_offset
                .at(offset);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23729]);
        }
        get_reg_by_offset__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23730]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_by_offset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> &get_mem_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__397__verbosity;
    __Vfunc_uvm_report_enabled__397__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__397__severity;
    __Vfunc_uvm_report_enabled__397__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__398__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__399__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__402__verbosity;
    __Vtask_uvm_report_error__402__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__402__line;
    __Vtask_uvm_report_error__402__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__402__report_enabled_checked;
    __Vtask_uvm_report_error__402__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__403__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__404__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_locked;
    VlWide<5>/*159:0*/ unnamedblk534__DOT__range;
    VL_ZERO_W(160, unnamedblk534__DOT__range);
    CData/*0:0*/ unnamedblk534__DOT__range__Vfirst;
    unnamedblk534__DOT__range__Vfirst = 0;
    {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1434)->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
        if (__VlefCall_0__is_locked) {
            ++(vlSymsp->__Vcoverage[23734]);
        } else {
            this->__Vfunc_uvm_report_enabled__397__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__397__severity = 2U;
            __Vfunc_uvm_report_enabled__397__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__398__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__398__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__399__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__399__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__397__verbosity, (IData)(__Vfunc_uvm_report_enabled__397__severity), this->__Vfunc_uvm_report_enabled__397__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1435)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__402__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__402__context_name = ""s;
                __Vtask_uvm_report_error__402__line = 0x0000059bU;
                this->__Vtask_uvm_report_error__402__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__402__verbosity = 0U;
                this->__Vtask_uvm_report_error__402__message 
                    = VL_SFORMATF_N_NX("Cannot memory register by offset: Block %@ is not locked.",0,
                                       -1,&(__VlefCall_2__get_full_name)) ;
                this->__Vtask_uvm_report_error__402__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__403__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__403__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__404__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__404__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__402__id, this->__Vtask_uvm_report_error__402__message, __Vtask_uvm_report_error__402__verbosity, this->__Vtask_uvm_report_error__402__filename, __Vtask_uvm_report_error__402__line, this->__Vtask_uvm_report_error__402__context_name, (IData)(__Vtask_uvm_report_error__402__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[23731]);
            } else {
                ++(vlSymsp->__Vcoverage[23732]);
            }
            get_mem_by_offset__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        __VlefExpr_3 = (0U != this->__PVT__m_mems_by_offset.first(unnamedblk534__DOT__range));
        if (__VlefExpr_3) {
            unnamedblk534__DOT__range__Vfirst = 1U;
            while (true) {
                __VlefExpr_4 = unnamedblk534__DOT__range__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_4)))) {
                    __VlefExpr_4 = (0U != this->__PVT__m_mems_by_offset.next(unnamedblk534__DOT__range));
                }
                if (!(__VlefExpr_4)) break;
                unnamedblk534__DOT__range__Vfirst = 0U;
                if ((((((QData)((IData)(unnamedblk534__DOT__range[4U])) 
                        << 0x00000020U) | (QData)((IData)(unnamedblk534__DOT__range[3U]))) 
                      <= offset) & (offset <= (((QData)((IData)(unnamedblk534__DOT__range[2U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(unnamedblk534__DOT__range[1U])))))) {
                    get_mem_by_offset__Vfuncrtn = this->__PVT__m_mems_by_offset
                        .at(unnamedblk534__DOT__range);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[23736]);
                }
                ++(vlSymsp->__Vcoverage[23740]);
            }
            if ((((((QData)((IData)(unnamedblk534__DOT__range[4U])) 
                    << 0x00000020U) | (QData)((IData)(unnamedblk534__DOT__range[3U]))) 
                  <= offset) & (offset <= (((QData)((IData)(unnamedblk534__DOT__range[2U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(unnamedblk534__DOT__range[1U])))))) {
                ++(vlSymsp->__Vcoverage[23737]);
            }
            if ((offset > (((QData)((IData)(unnamedblk534__DOT__range[2U])) 
                            << 0x00000020U) | (QData)((IData)(unnamedblk534__DOT__range[1U]))))) {
                ++(vlSymsp->__Vcoverage[23738]);
            }
            if (((((QData)((IData)(unnamedblk534__DOT__range[4U])) 
                   << 0x00000020U) | (QData)((IData)(unnamedblk534__DOT__range[3U]))) 
                 > offset)) {
                ++(vlSymsp->__Vcoverage[23739]);
            }
            ++(vlSymsp->__Vcoverage[23741]);
        } else {
            ++(vlSymsp->__Vcoverage[23742]);
        }
        get_mem_by_offset__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23743]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xinit_address_mapX(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xinit_address_mapX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_physical_addresses__410__Vfuncout;
    __Vfunc_get_physical_addresses__410__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__416__verbosity;
    __Vfunc_uvm_report_enabled__416__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__416__severity;
    __Vfunc_uvm_report_enabled__416__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__417__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__418__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__423__verbosity;
    __Vtask_uvm_report_warning__423__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__423__line;
    __Vtask_uvm_report_warning__423__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__423__report_enabled_checked;
    __Vtask_uvm_report_warning__423__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__424__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__425__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__427__verbosity;
    __Vfunc_uvm_report_enabled__427__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__427__severity;
    __Vfunc_uvm_report_enabled__427__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__428__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__429__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__434__verbosity;
    __Vtask_uvm_report_warning__434__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__434__line;
    __Vtask_uvm_report_warning__434__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__434__report_enabled_checked;
    __Vtask_uvm_report_warning__434__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__435__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__436__Vfuncout;
    IData/*31:0*/ __Vfunc_get_physical_addresses_to_map__439__Vfuncout;
    __Vfunc_get_physical_addresses_to_map__439__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__442__Vfuncout;
    __Vtask_get_physical_addresses_to_map__442__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__447__verbosity;
    __Vfunc_uvm_report_enabled__447__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__447__severity;
    __Vfunc_uvm_report_enabled__447__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__448__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__449__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__455__verbosity;
    __Vtask_uvm_report_warning__455__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__455__line;
    __Vtask_uvm_report_warning__455__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__455__report_enabled_checked;
    __Vtask_uvm_report_warning__455__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__456__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__457__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__463__verbosity;
    __Vfunc_uvm_report_enabled__463__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__463__severity;
    __Vfunc_uvm_report_enabled__463__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__464__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__465__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__469__verbosity;
    __Vtask_uvm_report_warning__469__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__469__line;
    __Vtask_uvm_report_warning__469__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__469__report_enabled_checked;
    __Vtask_uvm_report_warning__469__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__470__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__471__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__477__verbosity;
    __Vfunc_uvm_report_enabled__477__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__477__severity;
    __Vfunc_uvm_report_enabled__477__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__478__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__479__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__483__verbosity;
    __Vtask_uvm_report_warning__483__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__483__line;
    __Vtask_uvm_report_warning__483__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__483__report_enabled_checked;
    __Vtask_uvm_report_warning__483__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__484__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__485__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__488__verbosity;
    __Vfunc_uvm_report_enabled__488__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__488__severity;
    __Vfunc_uvm_report_enabled__488__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__489__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__490__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__494__verbosity;
    __Vtask_uvm_report_warning__494__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__494__line;
    __Vtask_uvm_report_warning__494__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__494__report_enabled_checked;
    __Vtask_uvm_report_warning__494__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__495__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__496__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__498__verbosity;
    __Vfunc_uvm_report_enabled__498__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__498__severity;
    __Vfunc_uvm_report_enabled__498__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__499__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__500__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__505__verbosity;
    __Vtask_uvm_report_warning__505__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__505__line;
    __Vtask_uvm_report_warning__505__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__505__report_enabled_checked;
    __Vtask_uvm_report_warning__505__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__506__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__507__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__509__verbosity;
    __Vfunc_uvm_report_enabled__509__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__509__severity;
    __Vfunc_uvm_report_enabled__509__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__510__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__511__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__516__verbosity;
    __Vtask_uvm_report_warning__516__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__516__line;
    __Vtask_uvm_report_warning__516__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__516__report_enabled_checked;
    __Vtask_uvm_report_warning__516__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__517__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__518__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_60__get_full_name;
    std::string __VlefCall_59__get_full_name;
    std::string __VlefCall_58__get_full_name;
    IData/*31:0*/ __VlefCall_57__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_56;
    CData/*0:0*/ __VlefExpr_55;
    CData/*0:0*/ __VlefExpr_54;
    std::string __VlefCall_53__get_full_name;
    std::string __VlefCall_52__get_full_name;
    std::string __VlefCall_51__get_full_name;
    IData/*31:0*/ __VlefCall_50__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_49;
    CData/*0:0*/ __VlefExpr_48;
    IData/*31:0*/ __VlefCall_47__get_n_bits;
    std::string __VlefCall_46__get_full_name;
    IData/*31:0*/ __VlefCall_45__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_44__get_n_bits;
    std::string __VlefCall_43__get_full_name;
    std::string __VlefCall_42__get_full_name;
    IData/*31:0*/ __VlefCall_41__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_40__get_n_bytes;
    IData/*31:0*/ __VlefCall_39__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_38__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_37__get_n_bytes;
    std::string __VlefCall_36__get_full_name;
    std::string __VlefCall_35__get_full_name;
    IData/*31:0*/ __VlefCall_34__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_33__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_32__get_n_bytes;
    IData/*31:0*/ __VlefCall_31__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_30__get_n_bytes;
    IData/*31:0*/ __VlefCall_29__get_n_bytes;
    IData/*31:0*/ __VlefCall_28__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_27__get_n_bytes;
    std::string __VlefCall_26__get_full_name;
    IData/*31:0*/ __VlefCall_25__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_24__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_23__get_n_bytes;
    IData/*31:0*/ __VlefCall_22__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_21__get_n_bytes;
    IData/*31:0*/ __VlefCall_20__get_n_bytes;
    QData/*63:0*/ __VlefCall_19__get_size;
    IData/*31:0*/ __VlefCall_18__get_n_bytes;
    CData/*0:0*/ __VlefExpr_17;
    CData/*0:0*/ __VlefExpr_16;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_11;
    CData/*0:0*/ __VlefExpr_10;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_5;
    IData/*31:0*/ __VlefCall_4__get_n_bytes;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk535__DOT__l;
    CData/*0:0*/ unnamedblk535__DOT__l__Vfirst;
    unnamedblk535__DOT__l__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk535__DOT__unnamedblk536__DOT__map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk537__DOT__rg_;
    CData/*0:0*/ unnamedblk537__DOT__rg___Vfirst;
    unnamedblk537__DOT__rg___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk537__DOT__unnamedblk538__DOT__rg;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc;
    VlQueue<QData/*63:0*/> unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs;
    IData/*31:0*/ unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i;
    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i = 0;
    QData/*63:0*/ unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__unnamedblk543__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range;
    VL_ZERO_W(160, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range);
    CData/*0:0*/ unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst;
    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst = 0;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__a;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__b;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk546__DOT__mem_;
    CData/*0:0*/ unnamedblk546__DOT__mem___Vfirst;
    unnamedblk546__DOT__mem___Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk546__DOT__unnamedblk547__DOT__mem;
    VlQueue<QData/*63:0*/> unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs;
    VlQueue<QData/*63:0*/> unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max;
    QData/*63:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min;
    QData/*63:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max;
    IData/*31:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__stride;
    IData/*31:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__bo;
    QData/*63:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr = 0;
    CData/*0:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst = 0;
    std::string unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range;
    VL_ZERO_W(160, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range);
    CData/*0:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst = 0;
    std::string unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range;
    IData/*31:0*/ bus_width;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> top_map;
    bus_width = 0U;
    this->__VnoInFunc_get_root_map(vlSymsp, top_map);
    if ((VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this} 
         == top_map)) {
        VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1458)->__PVT__m_regs_by_offset.clear();
        VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1459)->__PVT__m_regs_by_offset_wo.clear();
        VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1460)->__PVT__m_mems_by_offset.clear();
        ++(vlSymsp->__Vcoverage[23744]);
    } else {
        ++(vlSymsp->__Vcoverage[23745]);
    }
    __VlefExpr_0 = (0U != this->__PVT__m_submaps.first(unnamedblk535__DOT__l));
    if (__VlefExpr_0) {
        unnamedblk535__DOT__l__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk535__DOT__l__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_submaps.next(unnamedblk535__DOT__l));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk535__DOT__l__Vfirst = 0U;
            unnamedblk535__DOT__unnamedblk536__DOT__map 
                = unnamedblk535__DOT__l;
            VL_NULL_CHECK(unnamedblk535__DOT__unnamedblk536__DOT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1465)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
            ++(vlSymsp->__Vcoverage[23746]);
        }
        ++(vlSymsp->__Vcoverage[23747]);
    } else {
        ++(vlSymsp->__Vcoverage[23748]);
    }
    __VlefExpr_2 = (0U != this->__PVT__m_regs_info.first(unnamedblk537__DOT__rg_));
    if (__VlefExpr_2) {
        unnamedblk537__DOT__rg___Vfirst = 1U;
        while (true) {
            __VlefExpr_3 = unnamedblk537__DOT__rg___Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_3)))) {
                __VlefExpr_3 = (0U != this->__PVT__m_regs_info.next(unnamedblk537__DOT__rg_));
            }
            if (!(__VlefExpr_3)) break;
            unnamedblk537__DOT__rg___Vfirst = 0U;
            unnamedblk537__DOT__unnamedblk538__DOT__rg 
                = unnamedblk537__DOT__rg_;
            VL_NULL_CHECK(this->__PVT__m_regs_info.at(unnamedblk537__DOT__unnamedblk538__DOT__rg), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1470)->__PVT__is_initialized = 1U;
            if (VL_NULL_CHECK(this->__PVT__m_regs_info
                              .at(unnamedblk537__DOT__unnamedblk538__DOT__rg), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1471)
                ->__PVT__unmapped) {
                ++(vlSymsp->__Vcoverage[23774]);
            } else {
                VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1472)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc);
                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs.clear();
                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs.atDefault() = 0;
                VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1475)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_4__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                                .at(unnamedblk537__DOT__unnamedblk538__DOT__rg), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1475)
                                                         ->__PVT__offset, 0ULL, __VlefCall_4__get_n_bytes, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs, __Vfunc_get_physical_addresses__410__Vfuncout);
                bus_width = __Vfunc_get_physical_addresses__410__Vfuncout;
                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs.size())) {
                    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                        = unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i);
                    __VlefExpr_5 = VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1480)
                        ->__PVT__m_regs_by_offset.exists(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr);
                    if (__VlefExpr_5) {
                        __VlefExpr_5 = (VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1480)
                                        ->__PVT__m_regs_by_offset
                                        .at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                                        != unnamedblk537__DOT__unnamedblk538__DOT__rg);
                    }
                    if (__VlefExpr_5) {
                        unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2 
                            = VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1482)
                            ->__PVT__m_regs_by_offset
                            .at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr);
                        VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1483)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc);
                        if ((("RO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc) 
                             & ("WO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc))) {
                            VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1488)->__PVT__m_regs_by_offset.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                                = unnamedblk537__DOT__unnamedblk538__DOT__rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk537__DOT__unnamedblk538__DOT__rg);
                            VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1490)->__PVT__m_regs_by_offset_wo.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                                = unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2);
                            ++(vlSymsp->__Vcoverage[23756]);
                        } else {
                            if ((("WO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc) 
                                 & ("RO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc))) {
                                VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1494)->__PVT__m_regs_by_offset_wo.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                                    = unnamedblk537__DOT__unnamedblk538__DOT__rg;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk537__DOT__unnamedblk538__DOT__rg);
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2);
                                ++(vlSymsp->__Vcoverage[23751]);
                            } else {
                                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__unnamedblk543__DOT__a = ""s;
                                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__unnamedblk543__DOT__a 
                                    = VL_SFORMATF_N_NX("%0x",0,
                                                       64,
                                                       unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) ;
                                this->__Vfunc_uvm_report_enabled__416__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__416__severity = 1U;
                                __Vfunc_uvm_report_enabled__416__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__417__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__417__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__418__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__418__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__416__verbosity, (IData)(__Vfunc_uvm_report_enabled__416__severity), this->__Vfunc_uvm_report_enabled__416__id, __VlefCall_6__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_6__uvm_report_enabled)) {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                                    VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1503)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                                    VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1503)
                                                  ->__PVT__m_regs_by_offset
                                                  .at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1503)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                                    __Vtask_uvm_report_warning__423__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_warning__423__context_name = ""s;
                                    __Vtask_uvm_report_warning__423__line = 0x000005dfU;
                                    this->__Vtask_uvm_report_warning__423__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                    __Vtask_uvm_report_warning__423__verbosity = 0U;
                                    this->__Vtask_uvm_report_warning__423__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_7__get_full_name), "' register '"s), __VlefCall_8__get_full_name), "' maps to same address as register '"s), __VlefCall_9__get_full_name), "': 'h"s), unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__unnamedblk543__DOT__a));
                                    this->__Vtask_uvm_report_warning__423__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__424__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                        = __Vfunc_get__424__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__425__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                        = __Vtask_get_root__425__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__423__id, this->__Vtask_uvm_report_warning__423__message, __Vtask_uvm_report_warning__423__verbosity, this->__Vtask_uvm_report_warning__423__filename, __Vtask_uvm_report_warning__423__line, this->__Vtask_uvm_report_warning__423__context_name, (IData)(__Vtask_uvm_report_warning__423__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[436]);
                                    ++(vlSymsp->__Vcoverage[23749]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[23750]);
                                }
                                ++(vlSymsp->__Vcoverage[23752]);
                            }
                            if ((("WO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc) 
                                 & ("RO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc))) {
                                ++(vlSymsp->__Vcoverage[23753]);
                            }
                            if ((1U & (~ ("RO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc)))) {
                                ++(vlSymsp->__Vcoverage[23754]);
                            }
                            if ((1U & (~ ("WO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc)))) {
                                ++(vlSymsp->__Vcoverage[23755]);
                            }
                        }
                        if ((("RO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc) 
                             & ("WO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc))) {
                            ++(vlSymsp->__Vcoverage[23757]);
                        }
                        if ((1U & (~ ("WO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc)))) {
                            ++(vlSymsp->__Vcoverage[23758]);
                        }
                        if ((1U & (~ ("RO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc)))) {
                            ++(vlSymsp->__Vcoverage[23759]);
                        }
                        ++(vlSymsp->__Vcoverage[23760]);
                    } else {
                        VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1507)->__PVT__m_regs_by_offset.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                            = unnamedblk537__DOT__unnamedblk538__DOT__rg;
                        ++(vlSymsp->__Vcoverage[23761]);
                    }
                    __VlefExpr_10 = (0U != VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1509)
                                     ->__PVT__m_mems_by_offset.first(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range));
                    if (__VlefExpr_10) {
                        unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst = 1U;
                        while (true) {
                            __VlefExpr_11 = unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst;
                            if ((1U & (~ (IData)(__VlefExpr_11)))) {
                                __VlefExpr_11 = (0U 
                                                 != VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1509)
                                                 ->__PVT__m_mems_by_offset.next(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range));
                            }
                            if (!(__VlefExpr_11)) break;
                            unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst = 0U;
                            if (((unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                                  >= (((QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[4U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[3U])))) 
                                 & (unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                                    <= (((QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[2U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[1U])))))) {
                                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__a = ""s;
                                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__b = ""s;
                                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__a 
                                    = VL_SFORMATF_N_NX("%0x",0,
                                                       64,
                                                       unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) ;
                                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__b 
                                    = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                       64,
                                                       (((QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[4U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[3U]))),
                                                       64,
                                                       (((QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[2U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[1U])))) ;
                                this->__Vfunc_uvm_report_enabled__427__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__427__severity = 1U;
                                __Vfunc_uvm_report_enabled__427__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__428__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__428__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__429__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__429__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__427__verbosity, (IData)(__Vfunc_uvm_report_enabled__427__severity), this->__Vfunc_uvm_report_enabled__427__id, __VlefCall_12__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_12__uvm_report_enabled)) {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                                    VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1517)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                                    VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1517)
                                                  ->__PVT__m_mems_by_offset
                                                  .at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1517)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                                    __Vtask_uvm_report_warning__434__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_warning__434__context_name = ""s;
                                    __Vtask_uvm_report_warning__434__line = 0x000005edU;
                                    this->__Vtask_uvm_report_warning__434__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                    __Vtask_uvm_report_warning__434__verbosity = 0U;
                                    this->__Vtask_uvm_report_warning__434__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_13__get_full_name), "' register '"s), __VlefCall_14__get_full_name), "' with address "s), unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__a), "maps to same address as memory '"s), __VlefCall_15__get_full_name), "': "s), unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__b));
                                    this->__Vtask_uvm_report_warning__434__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__435__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                        = __Vfunc_get__435__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__436__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                        = __Vtask_get_root__436__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__434__id, this->__Vtask_uvm_report_warning__434__message, __Vtask_uvm_report_warning__434__verbosity, this->__Vtask_uvm_report_warning__434__filename, __Vtask_uvm_report_warning__434__line, this->__Vtask_uvm_report_warning__434__context_name, (IData)(__Vtask_uvm_report_warning__434__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[436]);
                                    ++(vlSymsp->__Vcoverage[23762]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[23763]);
                                }
                                ++(vlSymsp->__Vcoverage[23764]);
                            } else {
                                ++(vlSymsp->__Vcoverage[23765]);
                            }
                            ++(vlSymsp->__Vcoverage[23769]);
                        }
                        if (((unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                              >= (((QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[4U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[3U])))) 
                             & (unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                                <= (((QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[1U])))))) {
                            ++(vlSymsp->__Vcoverage[23766]);
                        }
                        if ((unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                             > (((QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[1U]))))) {
                            ++(vlSymsp->__Vcoverage[23767]);
                        }
                        if ((unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                             < (((QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[3U]))))) {
                            ++(vlSymsp->__Vcoverage[23768]);
                        }
                        ++(vlSymsp->__Vcoverage[23770]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23771]);
                    }
                    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i 
                        = ((IData)(1U) + unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i);
                    ++(vlSymsp->__Vcoverage[23772]);
                }
                VL_NULL_CHECK(this->__PVT__m_regs_info
                              .at(unnamedblk537__DOT__unnamedblk538__DOT__rg), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1521)->__PVT__addr 
                    = unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs;
                ++(vlSymsp->__Vcoverage[23773]);
            }
            ++(vlSymsp->__Vcoverage[23775]);
        }
        ++(vlSymsp->__Vcoverage[23776]);
    } else {
        ++(vlSymsp->__Vcoverage[23777]);
    }
    __VlefExpr_16 = (0U != this->__PVT__m_mems_info.first(unnamedblk546__DOT__mem_));
    if (__VlefExpr_16) {
        unnamedblk546__DOT__mem___Vfirst = 1U;
        while (true) {
            __VlefExpr_17 = unnamedblk546__DOT__mem___Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_17)))) {
                __VlefExpr_17 = (0U != this->__PVT__m_mems_info.next(unnamedblk546__DOT__mem_));
            }
            if (!(__VlefExpr_17)) break;
            unnamedblk546__DOT__mem___Vfirst = 0U;
            unnamedblk546__DOT__unnamedblk547__DOT__mem 
                = unnamedblk546__DOT__mem_;
            if (VL_NULL_CHECK(this->__PVT__m_mems_info
                              .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1527)
                ->__PVT__unmapped) {
                ++(vlSymsp->__Vcoverage[23833]);
            } else {
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.clear();
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.atDefault() = 0;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.clear();
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.atDefault() = 0;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min = 0ULL;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max = 0ULL;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__stride = 0U;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__bo = 0U;
                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1534)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_18__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                                .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1534)
                                                                ->__PVT__offset, 0ULL, __VlefCall_18__get_n_bytes, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs, VlNull{}, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__bo, unnamedblk546__DOT__unnamedblk547__DOT__mem, __Vfunc_get_physical_addresses_to_map__439__Vfuncout);
                bus_width = __Vfunc_get_physical_addresses_to_map__439__Vfuncout;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                    = ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(0U) 
                        < unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.size() 
                                                                                - (IData)(1U))))
                        ? unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(0U)
                        : unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.size() 
                                                                                - (IData)(1U))));
                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1540)->__VnoInFunc_get_size(vlSymsp, __VlefCall_19__get_size);
                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1540)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_20__get_n_bytes);
                this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                                .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1540)
                                                                ->__PVT__offset, 
                                                                (__VlefCall_19__get_size 
                                                                 - 1ULL), __VlefCall_20__get_n_bytes, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max, VlNull{}, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__bo, unnamedblk546__DOT__unnamedblk547__DOT__mem, __Vtask_get_physical_addresses_to_map__442__Vfuncout);
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                    = ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(0U) 
                        > unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))
                        ? unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(0U)
                        : unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.size() 
                                                                                - (IData)(1U))));
                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1542)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_21__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_22__get_addr_unit_bytes);
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__stride 
                    = VL_DIV_III(32, __VlefCall_21__get_n_bytes, __VlefCall_22__get_addr_unit_bytes);
                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1561)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_23__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_24__get_addr_unit_bytes);
                if ((__VlefCall_23__get_n_bytes < __VlefCall_24__get_addr_unit_bytes)) {
                    this->__Vfunc_uvm_report_enabled__447__id = "UVM/REG/ADDR"s;
                    __Vfunc_uvm_report_enabled__447__severity = 1U;
                    __Vfunc_uvm_report_enabled__447__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__448__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__448__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__449__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__449__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__447__verbosity, (IData)(__Vfunc_uvm_report_enabled__447__severity), this->__Vfunc_uvm_report_enabled__447__id, __VlefCall_25__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_25__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_27__get_n_bytes);
                        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_28__get_addr_unit_bytes);
                        VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1567)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_29__get_n_bytes);
                        __Vtask_uvm_report_warning__455__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__455__context_name = ""s;
                        __Vtask_uvm_report_warning__455__line = 0x0000061dU;
                        this->__Vtask_uvm_report_warning__455__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_warning__455__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__455__message 
                            = VL_SFORMATF_N_NX("this version of UVM does not properly support memories with \na smaller word width than the enclosing map. map %@ has n_bytes=%0# aub=%0# while the mem has get_n_bytes %0#. \nmultiple memory words fall into one bus address. if that happens memory addressing will be unpacked.",0,
                                               -1,&(__VlefCall_26__get_full_name),
                                               32,__VlefCall_27__get_n_bytes,
                                               32,__VlefCall_28__get_addr_unit_bytes,
                                               32,__VlefCall_29__get_n_bytes) ;
                        this->__Vtask_uvm_report_warning__455__id = "UVM/REG/ADDR"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__456__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__456__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__457__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__457__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__455__id, this->__Vtask_uvm_report_warning__455__message, __Vtask_uvm_report_warning__455__verbosity, this->__Vtask_uvm_report_warning__455__filename, __Vtask_uvm_report_warning__455__line, this->__Vtask_uvm_report_warning__455__context_name, (IData)(__Vtask_uvm_report_warning__455__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[436]);
                        ++(vlSymsp->__Vcoverage[23782]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23783]);
                    }
                    ++(vlSymsp->__Vcoverage[23784]);
                } else {
                    ++(vlSymsp->__Vcoverage[23785]);
                }
                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1567)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_30__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_31__get_addr_unit_bytes);
                if ((__VlefCall_30__get_n_bytes > __VlefCall_31__get_addr_unit_bytes)) {
                    VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1568)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_32__get_n_bytes);
                    this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_33__get_addr_unit_bytes);
                    if ((0U != VL_MODDIV_III(32, __VlefCall_32__get_n_bytes, __VlefCall_33__get_addr_unit_bytes))) {
                        this->__Vfunc_uvm_report_enabled__463__id = "UVM/REG/ADDR"s;
                        __Vfunc_uvm_report_enabled__463__severity = 1U;
                        __Vfunc_uvm_report_enabled__463__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__464__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__464__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__465__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__465__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__463__verbosity, (IData)(__Vfunc_uvm_report_enabled__463__severity), this->__Vfunc_uvm_report_enabled__463__id, __VlefCall_34__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_34__uvm_report_enabled)) {
                            VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1572)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_35__get_full_name);
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_36__get_full_name);
                            __Vtask_uvm_report_warning__469__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__469__context_name = ""s;
                            __Vtask_uvm_report_warning__469__line = 0x00000623U;
                            this->__Vtask_uvm_report_warning__469__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__469__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__469__message 
                                = VL_SFORMATF_N_NX("memory %@ is not matching the word width of the enclosing map %@  \n(one memory word not fitting into k map addresses)",0,
                                                   -1,
                                                   &(__VlefCall_35__get_full_name),
                                                   -1,
                                                   &(__VlefCall_36__get_full_name)) ;
                            this->__Vtask_uvm_report_warning__469__id = "UVM/REG/ADDR"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__470__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__470__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__471__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__471__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__469__id, this->__Vtask_uvm_report_warning__469__message, __Vtask_uvm_report_warning__469__verbosity, this->__Vtask_uvm_report_warning__469__filename, __Vtask_uvm_report_warning__469__line, this->__Vtask_uvm_report_warning__469__context_name, (IData)(__Vtask_uvm_report_warning__469__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[436]);
                            ++(vlSymsp->__Vcoverage[23786]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23787]);
                        }
                        ++(vlSymsp->__Vcoverage[23788]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23789]);
                    }
                    ++(vlSymsp->__Vcoverage[23790]);
                } else {
                    ++(vlSymsp->__Vcoverage[23791]);
                }
                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1574)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_37__get_n_bytes);
                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_38__get_addr_unit_bytes);
                if ((__VlefCall_37__get_n_bytes < __VlefCall_38__get_addr_unit_bytes)) {
                    this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_39__get_addr_unit_bytes);
                    VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1575)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_40__get_n_bytes);
                    if ((0U != VL_MODDIV_III(32, __VlefCall_39__get_addr_unit_bytes, __VlefCall_40__get_n_bytes))) {
                        this->__Vfunc_uvm_report_enabled__477__id = "UVM/REG/ADDR"s;
                        __Vfunc_uvm_report_enabled__477__severity = 1U;
                        __Vfunc_uvm_report_enabled__477__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__478__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__478__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__479__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__479__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__477__verbosity, (IData)(__Vfunc_uvm_report_enabled__477__severity), this->__Vfunc_uvm_report_enabled__477__id, __VlefCall_41__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_41__uvm_report_enabled)) {
                            VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1579)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_42__get_full_name);
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_43__get_full_name);
                            __Vtask_uvm_report_warning__483__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__483__context_name = ""s;
                            __Vtask_uvm_report_warning__483__line = 0x0000062aU;
                            this->__Vtask_uvm_report_warning__483__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__483__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__483__message 
                                = VL_SFORMATF_N_NX("the memory %@ is not matching the word width of the enclosing map %@  \n(one map address doesnt cover k memory words)",0,
                                                   -1,
                                                   &(__VlefCall_42__get_full_name),
                                                   -1,
                                                   &(__VlefCall_43__get_full_name)) ;
                            this->__Vtask_uvm_report_warning__483__id = "UVM/REG/ADDR"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__484__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__484__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__485__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__485__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__483__id, this->__Vtask_uvm_report_warning__483__message, __Vtask_uvm_report_warning__483__verbosity, this->__Vtask_uvm_report_warning__483__filename, __Vtask_uvm_report_warning__483__line, this->__Vtask_uvm_report_warning__483__context_name, (IData)(__Vtask_uvm_report_warning__483__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[436]);
                            ++(vlSymsp->__Vcoverage[23792]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23793]);
                        }
                        ++(vlSymsp->__Vcoverage[23794]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23795]);
                    }
                    ++(vlSymsp->__Vcoverage[23796]);
                } else {
                    ++(vlSymsp->__Vcoverage[23797]);
                }
                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1580)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_44__get_n_bits);
                if ((0U != (7U & __VlefCall_44__get_n_bits))) {
                    this->__Vfunc_uvm_report_enabled__488__id = "UVM/REG/ADDR"s;
                    __Vfunc_uvm_report_enabled__488__severity = 1U;
                    __Vfunc_uvm_report_enabled__488__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__489__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__489__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__490__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__490__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__488__verbosity, (IData)(__Vfunc_uvm_report_enabled__488__severity), this->__Vfunc_uvm_report_enabled__488__id, __VlefCall_45__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_45__uvm_report_enabled)) {
                        VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1583)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_46__get_full_name);
                        VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1583)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_47__get_n_bits);
                        __Vtask_uvm_report_warning__494__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__494__context_name = ""s;
                        __Vtask_uvm_report_warning__494__line = 0x0000062eU;
                        this->__Vtask_uvm_report_warning__494__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_warning__494__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__494__message 
                            = VL_SFORMATF_N_NX("this implementation of UVM requires memory words to be k*8 bits (mem %@ \nhas %0# bit words)",0,
                                               -1,&(__VlefCall_46__get_full_name),
                                               32,__VlefCall_47__get_n_bits) ;
                        this->__Vtask_uvm_report_warning__494__id = "UVM/REG/ADDR"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__495__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__495__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__496__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__496__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__494__id, this->__Vtask_uvm_report_warning__494__message, __Vtask_uvm_report_warning__494__verbosity, this->__Vtask_uvm_report_warning__494__filename, __Vtask_uvm_report_warning__494__line, this->__Vtask_uvm_report_warning__494__context_name, (IData)(__Vtask_uvm_report_warning__494__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[436]);
                        ++(vlSymsp->__Vcoverage[23798]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23799]);
                    }
                    ++(vlSymsp->__Vcoverage[23800]);
                } else {
                    ++(vlSymsp->__Vcoverage[23801]);
                }
                __VlefExpr_48 = (0U != VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1584)
                                 ->__PVT__m_regs_by_offset.first(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr));
                if (__VlefExpr_48) {
                    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_49 = unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_49)))) {
                            __VlefExpr_49 = (0U != VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1584)
                                             ->__PVT__m_regs_by_offset.next(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr));
                        }
                        if (!(__VlefExpr_49)) break;
                        unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst = 0U;
                        if (((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr 
                              >= unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min) 
                             & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr 
                                <= unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max))) {
                            unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a = ""s;
                            unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a 
                                = VL_SFORMATF_N_NX("%0x",0,
                                                   64,
                                                   unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr) ;
                            this->__Vfunc_uvm_report_enabled__498__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__498__severity = 1U;
                            __Vfunc_uvm_report_enabled__498__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__499__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__499__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__500__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__500__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__498__verbosity, (IData)(__Vfunc_uvm_report_enabled__498__severity), this->__Vfunc_uvm_report_enabled__498__id, __VlefCall_50__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_50__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_51__get_full_name);
                                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1590)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_52__get_full_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1590)
                                              ->__PVT__m_regs_by_offset
                                              .at(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1590)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_53__get_full_name);
                                __Vtask_uvm_report_warning__505__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_warning__505__context_name = ""s;
                                __Vtask_uvm_report_warning__505__line = 0x00000636U;
                                this->__Vtask_uvm_report_warning__505__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__505__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__505__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_51__get_full_name), "' memory '"s), __VlefCall_52__get_full_name), "' maps to same address as register '"s), __VlefCall_53__get_full_name), "': 'h"s), unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a));
                                this->__Vtask_uvm_report_warning__505__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__506__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__506__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__507__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__507__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__505__id, this->__Vtask_uvm_report_warning__505__message, __Vtask_uvm_report_warning__505__verbosity, this->__Vtask_uvm_report_warning__505__filename, __Vtask_uvm_report_warning__505__line, this->__Vtask_uvm_report_warning__505__context_name, (IData)(__Vtask_uvm_report_warning__505__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[436]);
                                ++(vlSymsp->__Vcoverage[23802]);
                            } else {
                                ++(vlSymsp->__Vcoverage[23803]);
                            }
                            ++(vlSymsp->__Vcoverage[23804]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23805]);
                        }
                        ++(vlSymsp->__Vcoverage[23809]);
                    }
                    if (((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr 
                          >= unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr 
                            <= unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max))) {
                        ++(vlSymsp->__Vcoverage[23806]);
                    }
                    if ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr 
                         > unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max)) {
                        ++(vlSymsp->__Vcoverage[23807]);
                    }
                    if ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr 
                         < unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min)) {
                        ++(vlSymsp->__Vcoverage[23808]);
                    }
                    ++(vlSymsp->__Vcoverage[23810]);
                } else {
                    ++(vlSymsp->__Vcoverage[23811]);
                }
                __VlefExpr_54 = (0U != VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1594)
                                 ->__PVT__m_mems_by_offset.first(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range));
                if (__VlefExpr_54) {
                    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_55 = unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_55)))) {
                            __VlefExpr_55 = (0U != VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1594)
                                             ->__PVT__m_mems_by_offset.next(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range));
                        }
                        if (!(__VlefExpr_55)) break;
                        unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst = 0U;
                        if (((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                                <= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                               & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                                  >= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U]))))) 
                              | ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                                  <= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))) 
                                 & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                                    >= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))))) 
                             | ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                                 >= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))) 
                                & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                                   <= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U]))))))) {
                            __VlefExpr_56 = (VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1598)
                                             ->__PVT__m_mems_by_offset
                                             .at(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range) 
                                             != unnamedblk546__DOT__unnamedblk547__DOT__mem);
                            if (__VlefExpr_56) {
                                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a = ""s;
                                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a 
                                    = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                       64,
                                                       unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min,
                                                       64,
                                                       unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max) ;
                                this->__Vfunc_uvm_report_enabled__509__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__509__severity = 1U;
                                __Vfunc_uvm_report_enabled__509__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__510__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__510__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__511__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__511__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__509__verbosity, (IData)(__Vfunc_uvm_report_enabled__509__severity), this->__Vfunc_uvm_report_enabled__509__id, __VlefCall_57__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_57__uvm_report_enabled)) {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_58__get_full_name);
                                    VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1604)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_59__get_full_name);
                                    VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1604)
                                                  ->__PVT__m_mems_by_offset
                                                  .at(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1604)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_60__get_full_name);
                                    __Vtask_uvm_report_warning__516__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_warning__516__context_name = ""s;
                                    __Vtask_uvm_report_warning__516__line = 0x00000644U;
                                    this->__Vtask_uvm_report_warning__516__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                    __Vtask_uvm_report_warning__516__verbosity = 0U;
                                    this->__Vtask_uvm_report_warning__516__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, __VlefCall_58__get_full_name), "' memory '"s), __VlefCall_59__get_full_name), "' overlaps with address range of memory '"s), __VlefCall_60__get_full_name), "': 'h"s), unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a));
                                    this->__Vtask_uvm_report_warning__516__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__517__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                        = __Vfunc_get__517__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__518__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                        = __Vtask_get_root__518__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__516__id, this->__Vtask_uvm_report_warning__516__message, __Vtask_uvm_report_warning__516__verbosity, this->__Vtask_uvm_report_warning__516__filename, __Vtask_uvm_report_warning__516__line, this->__Vtask_uvm_report_warning__516__context_name, (IData)(__Vtask_uvm_report_warning__516__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[436]);
                                    ++(vlSymsp->__Vcoverage[23812]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[23813]);
                                }
                                ++(vlSymsp->__Vcoverage[23814]);
                            } else {
                                ++(vlSymsp->__Vcoverage[23815]);
                            }
                            ++(vlSymsp->__Vcoverage[23816]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23817]);
                        }
                        ++(vlSymsp->__Vcoverage[23829]);
                    }
                    if (((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                          >= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                            <= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23818]);
                    }
                    if (((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                          <= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                            >= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23819]);
                    }
                    if (((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                          <= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                            >= (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23820]);
                    }
                    if ((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                           < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                          & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                             < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U]))))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                            > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23821]);
                    }
                    if ((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                           < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                          & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                             < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U]))))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                            < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23822]);
                    }
                    if ((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                           < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                          & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                             > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U]))))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                            > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23823]);
                    }
                    if ((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                           < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                          & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                             > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U]))))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                            < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23824]);
                    }
                    if ((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                           > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                          & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                             < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U]))))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                            > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23825]);
                    }
                    if ((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                           > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                          & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                             < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U]))))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                            < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23826]);
                    }
                    if ((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                           > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                          & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                             > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U]))))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                            > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))))) {
                        ++(vlSymsp->__Vcoverage[23827]);
                    }
                    if ((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                           > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                               << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                          & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                             > (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                 << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U]))))) 
                         & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                            < (((QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                << 0x00000020U) | (QData)((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))))) {
                        ++(vlSymsp->__Vcoverage[23828]);
                    }
                    ++(vlSymsp->__Vcoverage[23830]);
                } else {
                    ++(vlSymsp->__Vcoverage[23831]);
                }
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[0U] 
                    = unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__stride;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[1U] 
                    = (IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max);
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[2U] 
                    = (IData)((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                               >> 0x00000020U));
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[3U] 
                    = (IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min);
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[4U] 
                    = (IData)((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                               >> 0x00000020U));
                VL_NULL_CHECK(top_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1610)->__PVT__m_mems_by_offset.at(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range) 
                    = unnamedblk546__DOT__unnamedblk547__DOT__mem;
                VL_NULL_CHECK(this->__PVT__m_mems_info
                              .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1611)->__PVT__addr 
                    = unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs;
                VL_ASSIGN_W(160, VL_NULL_CHECK(this->__PVT__m_mems_info
                                               .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1612)
                            ->__PVT__mem_range, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range);
                if ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(0U) 
                     < unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.size() 
                                                                                - (IData)(1U))))) {
                    ++(vlSymsp->__Vcoverage[23778]);
                }
                if ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(0U) 
                     >= unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.size() 
                                                                                - (IData)(1U))))) {
                    ++(vlSymsp->__Vcoverage[23779]);
                }
                if ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(0U) 
                     > unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))) {
                    ++(vlSymsp->__Vcoverage[23780]);
                }
                if ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(0U) 
                     <= unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))) {
                    ++(vlSymsp->__Vcoverage[23781]);
                }
                ++(vlSymsp->__Vcoverage[23832]);
            }
            ++(vlSymsp->__Vcoverage[23834]);
        }
        ++(vlSymsp->__Vcoverage[23835]);
    } else {
        ++(vlSymsp->__Vcoverage[23836]);
    }
    if ((0U == bus_width)) {
        bus_width = this->__PVT__m_n_bytes;
        ++(vlSymsp->__Vcoverage[23837]);
    } else {
        ++(vlSymsp->__Vcoverage[23838]);
    }
    this->__PVT__m_system_n_bytes = bus_width;
    ++(vlSymsp->__Vcoverage[23839]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &map_info, IData/*31:0*/ &size, IData/*31:0*/ &lsb, IData/*31:0*/ &addr_skip) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__520__verbosity;
    __Vfunc_uvm_report_enabled__520__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__520__severity;
    __Vfunc_uvm_report_enabled__520__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__521__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__522__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__527__Vfuncout;
    __Vtask_get_n_bits__527__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__528__verbosity;
    __Vfunc_uvm_report_enabled__528__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__528__severity;
    __Vfunc_uvm_report_enabled__528__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__529__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__530__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__535__Vfuncout;
    __Vtask_get_n_bits__535__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__536__verbosity;
    __Vfunc_uvm_report_enabled__536__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__536__severity;
    __Vfunc_uvm_report_enabled__536__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__537__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__538__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__544__Vfuncout;
    __Vtask_get_n_bits__544__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__545__Vfuncout;
    __Vtask_get_lsb_pos__545__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_13__get_n_bytes;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> __VlefCall_12__get_parent;
    std::string __VlefCall_11__get_name;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_9;
    IData/*31:0*/ __VlefExpr_8;
    std::string __VlefCall_7__get_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_5;
    IData/*31:0*/ __VlefExpr_4;
    std::string __VlefCall_3__get_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk554__DOT__mem;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk555__DOT__rg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> unnamedblk556__DOT__field;
    size = 0U;
    lsb = 0U;
    addr_skip = 0U;
    if ((2U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1635)
         ->__PVT__element_kind)) {
        __VlefLogOr_1 = (VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1637)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1637)
                                           ->__PVT__element, unnamedblk554__DOT__mem);
            __VlefLogOr_1 = (! __VlefExpr_0);
        }
        if (__VlefLogOr_1) {
            this->__Vfunc_uvm_report_enabled__520__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__520__severity = 3U;
            __Vfunc_uvm_report_enabled__520__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__521__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__521__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__522__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__522__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__520__verbosity, (IData)(__Vfunc_uvm_report_enabled__520__severity), this->__Vfunc_uvm_report_enabled__520__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1639)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_MEM, but 'element' does not point to a memory: "s, __VlefCall_3__get_name)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x00000667U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[23840]);
            } else {
                ++(vlSymsp->__Vcoverage[23841]);
            }
            ++(vlSymsp->__Vcoverage[23842]);
        } else {
            ++(vlSymsp->__Vcoverage[23843]);
        }
        this->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, unnamedblk554__DOT__mem, 1U, map_info);
        VL_NULL_CHECK(unnamedblk554__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1641)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__527__Vfuncout);
        size = __Vtask_get_n_bits__527__Vfuncout;
        ++(vlSymsp->__Vcoverage[23855]);
    } else if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1643)
                ->__PVT__element_kind)) {
        __VlefLogOr_5 = (VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1645)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            __VlefExpr_4 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1645)
                                           ->__PVT__element, unnamedblk555__DOT__rg);
            __VlefLogOr_5 = (! __VlefExpr_4);
        }
        if (__VlefLogOr_5) {
            this->__Vfunc_uvm_report_enabled__528__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__528__severity = 3U;
            __Vfunc_uvm_report_enabled__528__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__529__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__529__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__530__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__530__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__528__verbosity, (IData)(__Vfunc_uvm_report_enabled__528__severity), this->__Vfunc_uvm_report_enabled__528__id, __VlefCall_6__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1647)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_REG, but 'element' does not point to a register: "s, __VlefCall_7__get_name)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x0000066fU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[23844]);
            } else {
                ++(vlSymsp->__Vcoverage[23845]);
            }
            ++(vlSymsp->__Vcoverage[23846]);
        } else {
            ++(vlSymsp->__Vcoverage[23847]);
        }
        this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, unnamedblk555__DOT__rg, 1U, map_info);
        VL_NULL_CHECK(unnamedblk555__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1649)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__535__Vfuncout);
        size = __Vtask_get_n_bits__535__Vfuncout;
        ++(vlSymsp->__Vcoverage[23854]);
    } else if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1651)
                ->__PVT__element_kind)) {
        __VlefLogOr_9 = (VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1653)
                         ->__PVT__element);
        if ((1U & (~ (IData)(__VlefLogOr_9)))) {
            __VlefExpr_8 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1653)
                                           ->__PVT__element, unnamedblk556__DOT__field);
            __VlefLogOr_9 = (! __VlefExpr_8);
        }
        if (__VlefLogOr_9) {
            this->__Vfunc_uvm_report_enabled__536__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__536__severity = 3U;
            __Vfunc_uvm_report_enabled__536__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__537__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__537__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__538__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__538__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__536__verbosity, (IData)(__Vfunc_uvm_report_enabled__536__severity), this->__Vfunc_uvm_report_enabled__536__id, __VlefCall_10__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_10__uvm_report_enabled)) {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1655)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_FIELD, but 'element' does not point to a field: "s, __VlefCall_11__get_name)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x00000677U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[23848]);
            } else {
                ++(vlSymsp->__Vcoverage[23849]);
            }
            ++(vlSymsp->__Vcoverage[23850]);
        } else {
            ++(vlSymsp->__Vcoverage[23851]);
        }
        VL_NULL_CHECK(unnamedblk556__DOT__field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1656)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_12__get_parent);
        this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, __VlefCall_12__get_parent, 1U, map_info);
        VL_NULL_CHECK(unnamedblk556__DOT__field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1657)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__544__Vfuncout);
        size = __Vtask_get_n_bits__544__Vfuncout;
        VL_NULL_CHECK(unnamedblk556__DOT__field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1658)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__545__Vfuncout);
        lsb = __Vtask_get_lsb_pos__545__Vfuncout;
        this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_13__get_n_bytes);
        addr_skip = VL_DIV_III(32, lsb, VL_SHIFTL_III(32,32,32, __VlefCall_13__get_n_bytes, 3U));
        ++(vlSymsp->__Vcoverage[23852]);
    } else {
        ++(vlSymsp->__Vcoverage[23853]);
    }
    ++(vlSymsp->__Vcoverage[23856]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__551__verbosity;
    __Vfunc_uvm_report_enabled__551__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__551__severity;
    __Vfunc_uvm_report_enabled__551__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__552__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__553__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__558__verbosity;
    __Vfunc_uvm_report_enabled__558__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__558__severity;
    __Vfunc_uvm_report_enabled__558__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__559__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__560__Vfuncout;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_3;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk557__DOT__o;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> unnamedblk557__DOT__seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> unnamedblk558__DOT__end_event;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz7> unnamedblk558__DOT__ep;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base> parent_proxy;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    VL_NULL_CHECK(system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1672)->__VnoInFunc_get_adapter(vlSymsp, 1U, adapter);
    VL_NULL_CHECK(system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1673)->__VnoInFunc_get_sequencer(vlSymsp, 1U, sequencer);
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1676)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1679)
                      ->__PVT__parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1679)->__VnoInFunc_clone(vlProcess, vlSymsp, unnamedblk557__DOT__o);
        if ((VlNull{} == unnamedblk557__DOT__o)) {
            this->__Vfunc_uvm_report_enabled__551__id = "REG/CLONE"s;
            __Vfunc_uvm_report_enabled__551__severity = 3U;
            __Vfunc_uvm_report_enabled__551__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__552__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__552__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__553__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__553__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__551__verbosity, (IData)(__Vfunc_uvm_report_enabled__551__severity), this->__Vfunc_uvm_report_enabled__551__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1686)
                              ->__PVT__parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1686)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1686)
                              ->__PVT__parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1686)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CLONE"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to clone adapter's parent sequence: '"s, __VlefCall_1__get_full_name), "' (of type '"s), __VlefCall_2__get_type_name), "')"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x00000696U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[23857]);
            } else {
                ++(vlSymsp->__Vcoverage[23858]);
            }
            ++(vlSymsp->__Vcoverage[23859]);
        } else {
            ++(vlSymsp->__Vcoverage[23860]);
        }
        __VlefExpr_3 = VL_CAST_DYNAMIC(unnamedblk557__DOT__o, unnamedblk557__DOT__seq);
        if (__VlefExpr_3) {
            ++(vlSymsp->__Vcoverage[23864]);
        } else {
            this->__Vfunc_uvm_report_enabled__558__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__558__severity = 3U;
            __Vfunc_uvm_report_enabled__558__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__559__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__559__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__560__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__560__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__558__verbosity, (IData)(__Vfunc_uvm_report_enabled__558__severity), this->__Vfunc_uvm_report_enabled__558__id, __VlefCall_4__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk557__DOT__o, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1693)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                VL_NULL_CHECK(unnamedblk557__DOT__o, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1693)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to cast: '"s, __VlefCall_5__get_full_name), "' (of type '"s), __VlefCall_6__get_type_name), "') to uvm_sequence_base!"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x0000069dU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[23861]);
            } else {
                ++(vlSymsp->__Vcoverage[23862]);
            }
            ++(vlSymsp->__Vcoverage[23863]);
        }
        VL_NULL_CHECK(unnamedblk557__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1694)->__VnoInFunc_set_parent_sequence(vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1694)
                                                                                ->__PVT__parent);
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1695)->__PVT__parent 
            = unnamedblk557__DOT__seq;
        tmp_parent_seq = unnamedblk557__DOT__seq;
        ++(vlSymsp->__Vcoverage[23865]);
    } else {
        ++(vlSymsp->__Vcoverage[23866]);
    }
    if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1699)
         ->__PVT__parent)) {
        parent_proxy = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1701)->__PVT__parent 
            = parent_proxy;
        tmp_parent_seq = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1702)
            ->__PVT__parent;
        ++(vlSymsp->__Vcoverage[23867]);
    } else {
        ++(vlSymsp->__Vcoverage[23868]);
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1708)->__VnoInFunc_get_event_pool(vlSymsp, unnamedblk558__DOT__ep);
        VL_NULL_CHECK(unnamedblk558__DOT__ep, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1709)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, unnamedblk558__DOT__end_event);
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1710)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1711)
                               ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1711)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1711)
                                                                                ->__PVT__prior, VlNull{});
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1712)
                               ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1712)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(unnamedblk558__DOT__end_event, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1713)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[23869]);
    } else {
        co_await this->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, sequencer, adapter);
        ++(vlSymsp->__Vcoverage[23870]);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1720)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
        ++(vlSymsp->__Vcoverage[23871]);
    } else {
        ++(vlSymsp->__Vcoverage[23872]);
    }
    ++(vlSymsp->__Vcoverage[23873]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__579__verbosity;
    __Vfunc_uvm_report_enabled__579__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__579__severity;
    __Vfunc_uvm_report_enabled__579__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__580__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__581__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__586__verbosity;
    __Vfunc_uvm_report_enabled__586__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__586__severity;
    __Vfunc_uvm_report_enabled__586__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__587__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__588__Vfuncout;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_3;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk559__DOT__o;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> unnamedblk559__DOT__seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> unnamedblk560__DOT__end_event;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz7> unnamedblk560__DOT__ep;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base> parent_proxy;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    VL_NULL_CHECK(system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1731)->__VnoInFunc_get_adapter(vlSymsp, 1U, adapter);
    VL_NULL_CHECK(system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1732)->__VnoInFunc_get_sequencer(vlSymsp, 1U, sequencer);
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1735)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1738)
                      ->__PVT__parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1738)->__VnoInFunc_clone(vlProcess, vlSymsp, unnamedblk559__DOT__o);
        if ((VlNull{} == unnamedblk559__DOT__o)) {
            this->__Vfunc_uvm_report_enabled__579__id = "REG/CLONE"s;
            __Vfunc_uvm_report_enabled__579__severity = 3U;
            __Vfunc_uvm_report_enabled__579__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__580__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__580__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__581__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__581__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__579__verbosity, (IData)(__Vfunc_uvm_report_enabled__579__severity), this->__Vfunc_uvm_report_enabled__579__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1745)
                              ->__PVT__parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1745)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1745)
                              ->__PVT__parent_sequence, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1745)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CLONE"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to clone adapter's parent sequence: '"s, __VlefCall_1__get_full_name), "' (of type '"s), __VlefCall_2__get_type_name), "')"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x000006d1U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[23874]);
            } else {
                ++(vlSymsp->__Vcoverage[23875]);
            }
            ++(vlSymsp->__Vcoverage[23876]);
        } else {
            ++(vlSymsp->__Vcoverage[23877]);
        }
        __VlefExpr_3 = VL_CAST_DYNAMIC(unnamedblk559__DOT__o, unnamedblk559__DOT__seq);
        if (__VlefExpr_3) {
            ++(vlSymsp->__Vcoverage[23881]);
        } else {
            this->__Vfunc_uvm_report_enabled__586__id = "REG/CAST"s;
            __Vfunc_uvm_report_enabled__586__severity = 3U;
            __Vfunc_uvm_report_enabled__586__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__587__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__587__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__588__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__588__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__586__verbosity, (IData)(__Vfunc_uvm_report_enabled__586__severity), this->__Vfunc_uvm_report_enabled__586__id, __VlefCall_4__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                VL_NULL_CHECK(unnamedblk559__DOT__o, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1752)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                VL_NULL_CHECK(unnamedblk559__DOT__o, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1752)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to cast: '"s, __VlefCall_5__get_full_name), "' (of type '"s), __VlefCall_6__get_type_name), "') to uvm_sequence_base!"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x000006d8U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[23878]);
            } else {
                ++(vlSymsp->__Vcoverage[23879]);
            }
            ++(vlSymsp->__Vcoverage[23880]);
        }
        VL_NULL_CHECK(unnamedblk559__DOT__seq, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1753)->__VnoInFunc_set_parent_sequence(vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1753)
                                                                                ->__PVT__parent);
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1754)->__PVT__parent 
            = unnamedblk559__DOT__seq;
        tmp_parent_seq = unnamedblk559__DOT__seq;
        ++(vlSymsp->__Vcoverage[23882]);
    } else {
        ++(vlSymsp->__Vcoverage[23883]);
    }
    if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1758)
         ->__PVT__parent)) {
        parent_proxy = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1760)->__PVT__parent 
            = parent_proxy;
        tmp_parent_seq = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1761)
            ->__PVT__parent;
        ++(vlSymsp->__Vcoverage[23884]);
    } else {
        ++(vlSymsp->__Vcoverage[23885]);
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1767)->__VnoInFunc_get_event_pool(vlSymsp, unnamedblk560__DOT__ep);
        VL_NULL_CHECK(unnamedblk560__DOT__ep, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1768)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, unnamedblk560__DOT__end_event);
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1769)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1770)
                               ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1770)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1770)
                                                                                ->__PVT__prior, VlNull{});
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1771)
                               ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1771)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(unnamedblk560__DOT__end_event, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1772)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
        ++(vlSymsp->__Vcoverage[23886]);
    } else {
        co_await this->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, sequencer, adapter);
        ++(vlSymsp->__Vcoverage[23887]);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1779)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
        ++(vlSymsp->__Vcoverage[23888]);
    } else {
        ++(vlSymsp->__Vcoverage[23889]);
    }
    ++(vlSymsp->__Vcoverage[23890]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_do_bus_access(vlProcess, vlSymsp, rw, sequencer, adapter);
    ++(vlSymsp->__Vcoverage[23891]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_perform_accesses(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<Vtb_rng_uvm_reg_bus_op__struct__0> &accesses, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_perform_accesses\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_reg2bus__607__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__609__verbosity;
    __Vfunc_uvm_report_enabled__609__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__609__severity;
    __Vfunc_uvm_report_enabled__609__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__610__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__611__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__623__response;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__627__verbosity;
    __Vfunc_uvm_report_enabled__627__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__627__severity;
    __Vfunc_uvm_report_enabled__627__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__628__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__629__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__632__verbosity;
    __Vtask_uvm_report_info__632__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__632__line;
    __Vtask_uvm_report_info__632__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__632__report_enabled_checked;
    __Vtask_uvm_report_info__632__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__633__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__634__Vfuncout;
    std::string __Vtemp_3;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__get_n_bytes;
    IData/*31:0*/ __VlefCall_2__get_transaction_id;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk561__DOT__i;
    unnamedblk561__DOT__i = 0;
    Vtb_rng_uvm_reg_bus_op__struct__0 unnamedblk561__DOT__unnamedblk562__DOT__rw_access;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> unnamedblk561__DOT__unnamedblk562__DOT__bus_req;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__end_event;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz7> unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__ep;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk564__DOT__bus_rsp;
    std::string op;
    QData/*63:0*/ data;
    IData/*31:0*/ endian;
    data = 0;
    endian = 0U;
    op = VL_CVT_PACK_STR_NQ((((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1802)
                               ->__PVT__kind) || (2U 
                                                  == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1802)
                                                  ->__PVT__kind))
                              ? 0x0000000052656164ULL
                              : 0x00000057726f7465ULL));
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    if ((VlNull{} != this->__PVT__policy)) {
        VL_NULL_CHECK(this->__PVT__policy, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1807)->__VnoInFunc_order(vlSymsp, accesses);
        ++(vlSymsp->__Vcoverage[23892]);
    } else {
        ++(vlSymsp->__Vcoverage[23893]);
    }
    {
        unnamedblk561__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk561__DOT__i, accesses.size())) {
            unnamedblk561__DOT__unnamedblk562__DOT__rw_access 
                = accesses.at(unnamedblk561__DOT__i);
            if (((1U == unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                  .__PVT__kind) & (2U == endian))) {
                unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__data 
                    = VL_STREAML_FAST_QQI(64, unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                                          .__PVT__data, 3);
                ++(vlSymsp->__Vcoverage[23894]);
            } else {
                ++(vlSymsp->__Vcoverage[23895]);
            }
            VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1818)->__VnoInFunc_m_set_item(vlSymsp, rw);
            VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1819)->__VnoInFunc_reg2bus(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__rw_access, __Vtask_reg2bus__607__Vfuncout);
            unnamedblk561__DOT__unnamedblk562__DOT__bus_req 
                = __Vtask_reg2bus__607__Vfuncout;
            VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1820)->__VnoInFunc_m_set_item(vlSymsp, VlNull{});
            if ((VlNull{} == unnamedblk561__DOT__unnamedblk562__DOT__bus_req)) {
                this->__Vfunc_uvm_report_enabled__609__id = "RegMem"s;
                __Vfunc_uvm_report_enabled__609__severity = 3U;
                __Vfunc_uvm_report_enabled__609__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__610__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__610__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__611__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__611__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__609__verbosity, (IData)(__Vfunc_uvm_report_enabled__609__severity), this->__Vfunc_uvm_report_enabled__609__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1823)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegMem"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("adapter ["s, __VlefCall_1__get_name), "] didnt return a bus transaction"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x0000071fU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[23899]);
                } else {
                    ++(vlSymsp->__Vcoverage[23900]);
                }
                ++(vlSymsp->__Vcoverage[23901]);
            } else {
                ++(vlSymsp->__Vcoverage[23902]);
            }
            VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__bus_req, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1825)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1826)
                                   ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1826)->__VnoInFunc_start_item(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__bus_req, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1826)
                                                                                ->__PVT__prior, VlNull{});
            if (((VlNull{} != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1828)
                  ->__PVT__parent) && (0U == unnamedblk561__DOT__i))) {
                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1829)
                              ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1829)->__VnoInFunc_mid_do(vlSymsp, rw);
                ++(vlSymsp->__Vcoverage[23903]);
            } else {
                ++(vlSymsp->__Vcoverage[23904]);
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1831)
                                   ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1831)->__VnoInFunc_finish_item(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__bus_req, 0xffffffffU);
            VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__bus_req, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1835)->__VnoInFunc_get_event_pool(vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__ep);
            VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__ep, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1836)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__end_event);
            co_await VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__end_event, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1837)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
            if (VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1840)
                ->__PVT__provides_responses) {
                VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__bus_req, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1844)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_2__get_transaction_id);
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1844)
                                       ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1844)->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__623__response, __VlefCall_2__get_transaction_id);
                unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk564__DOT__bus_rsp 
                    = __Vtask_get_base_response__623__response;
                VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1845)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk564__DOT__bus_rsp, unnamedblk561__DOT__unnamedblk562__DOT__rw_access);
                ++(vlSymsp->__Vcoverage[23905]);
            } else {
                VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1848)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__bus_req, unnamedblk561__DOT__unnamedblk562__DOT__rw_access);
                ++(vlSymsp->__Vcoverage[23906]);
            }
            if (((0U == unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                  .__PVT__kind) & (2U == endian))) {
                unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__data 
                    = VL_STREAML_FAST_QQI(64, unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                                          .__PVT__data, 3);
                ++(vlSymsp->__Vcoverage[23907]);
            } else {
                ++(vlSymsp->__Vcoverage[23908]);
            }
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1855)->__PVT__status 
                = unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                .__PVT__status;
            this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_3__get_n_bytes);
            data = (unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                    .__PVT__data & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                  VL_SHIFTL_III(32,32,32, __VlefCall_3__get_n_bytes, 3U)) 
                                    - 1ULL));
            if (((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1860)
                  ->__PVT__kind) || (2U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1860)
                                     ->__PVT__kind))) {
                ++(vlSymsp->__Vcoverage[23913]);
                ++(vlSymsp->__Vcoverage[23914]);
            } else {
                ++(vlSymsp->__Vcoverage[23915]);
            }
            unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__data 
                = data;
            this->__Vfunc_uvm_report_enabled__627__id = "UVM/REG/ADDR"s;
            __Vfunc_uvm_report_enabled__627__severity = 0U;
            __Vfunc_uvm_report_enabled__627__verbosity = 0x00000190U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__628__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__628__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__629__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__629__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__627__verbosity, (IData)(__Vfunc_uvm_report_enabled__627__severity), this->__Vfunc_uvm_report_enabled__627__id, __VlefCall_4__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1869)
                              ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1869)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                __Vtask_uvm_report_info__632__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__632__context_name = ""s;
                __Vtask_uvm_report_info__632__line = 0x0000074dU;
                this->__Vtask_uvm_report_info__632__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__632__verbosity = 0x00000190U;
                __Vtemp_3 = Vtb_rng___024unit::__Venumtab_enum_name83
                    [(3U & VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1869)
                      ->__PVT__status)];
                this->__Vtask_uvm_report_info__632__message 
                    = VL_SFORMATF_N_NX("%@ 'h%0x at 'h%0x via map \"%@\": %@...",0,
                                       -1,&(op),64,
                                       unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                                       .__PVT__data,
                                       64,unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                                       .__PVT__addr,
                                       -1,&(__VlefCall_5__get_full_name),
                                       -1,&(__Vtemp_3)) ;
                this->__Vtask_uvm_report_info__632__id = "UVM/REG/ADDR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__633__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__633__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__634__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__634__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__632__id, this->__Vtask_uvm_report_info__632__message, __Vtask_uvm_report_info__632__verbosity, this->__Vtask_uvm_report_info__632__filename, __Vtask_uvm_report_info__632__line, this->__Vtask_uvm_report_info__632__context_name, (IData)(__Vtask_uvm_report_info__632__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[435]);
                ++(vlSymsp->__Vcoverage[23916]);
            } else {
                ++(vlSymsp->__Vcoverage[23917]);
            }
            if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1871)
                 ->__PVT__status)) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[23919]);
            }
            if (((VlNull{} != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1874)
                  ->__PVT__parent) && (unnamedblk561__DOT__i 
                                       == (accesses.size() 
                                           - (IData)(1U))))) {
                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1875)
                              ->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1875)->__VnoInFunc_post_do(vlSymsp, rw);
                ++(vlSymsp->__Vcoverage[23920]);
            } else {
                ++(vlSymsp->__Vcoverage[23921]);
            }
            accesses.atWriteAppend(unnamedblk561__DOT__i) 
                = unnamedblk561__DOT__unnamedblk562__DOT__rw_access;
            unnamedblk561__DOT__i = ((IData)(1U) + unnamedblk561__DOT__i);
            ++(vlSymsp->__Vcoverage[23922]);
        }
        __Vlabel0: ;
    }
    if (((1U == unnamedblk561__DOT__unnamedblk562__DOT__rw_access
          .__PVT__kind) & (2U == endian))) {
        ++(vlSymsp->__Vcoverage[23896]);
    }
    if ((2U != endian)) {
        ++(vlSymsp->__Vcoverage[23897]);
    }
    if ((1U != unnamedblk561__DOT__unnamedblk562__DOT__rw_access
         .__PVT__kind)) {
        ++(vlSymsp->__Vcoverage[23898]);
    }
    if (((0U == unnamedblk561__DOT__unnamedblk562__DOT__rw_access
          .__PVT__kind) & (2U == endian))) {
        ++(vlSymsp->__Vcoverage[23909]);
    }
    if ((2U != endian)) {
        ++(vlSymsp->__Vcoverage[23910]);
    }
    if ((0U != unnamedblk561__DOT__unnamedblk562__DOT__rw_access
         .__PVT__kind)) {
        ++(vlSymsp->__Vcoverage[23911]);
    }
    ++(vlSymsp->__Vcoverage[23923]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_access\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_Xget_bus_infoX__639__map_info;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__639__size;
    __Vtask_Xget_bus_infoX__639__size = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__639__lsb;
    __Vtask_Xget_bus_infoX__639__lsb = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__639__addr_skip;
    __Vtask_Xget_bus_infoX__639__addr_skip = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__641__Vfuncout;
    __Vtask_get_physical_addresses_to_map__641__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__648__Vfuncout;
    __Vtask_get_physical_addresses_to_map__648__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__658__Vfuncout;
    __Vtask_get_physical_addresses_to_map__658__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__662__verbosity;
    __Vfunc_uvm_report_enabled__662__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__662__severity;
    __Vfunc_uvm_report_enabled__662__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__663__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__664__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__667__verbosity;
    __Vtask_uvm_report_info__667__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__667__line;
    __Vtask_uvm_report_info__667__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__667__report_enabled_checked;
    __Vtask_uvm_report_info__667__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__668__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__669__Vfuncout;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_17__get_n_bits;
    IData/*31:0*/ __VlefExpr_16;
    std::string __VlefCall_15__get_full_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_13__get_n_bytes;
    IData/*31:0*/ __VlefExpr_12;
    IData/*31:0*/ __VlefCall_11__get_n_bits;
    IData/*31:0*/ __VlefCall_10__get_n_bits;
    IData/*31:0*/ __VlefCall_9__get_n_bytes;
    IData/*31:0*/ __VlefCall_8__get_n_bits;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    IData/*31:0*/ __VlefCall_6__ceil;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> __VlefCall_4__get_parent;
    IData/*31:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    IData/*31:0*/ __VlefCall_1__get_n_bytes;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk565__DOT__mem;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> unnamedblk566__DOT__f;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk567__DOT__r;
    VlQueue<CData/*0:0*/> unnamedblk568__DOT__be;
    VlQueue<CData/*7:0*/> unnamedblk568__DOT__p;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk569__DOT__idx;
    unnamedblk568__DOT__unnamedblk569__DOT__idx = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk571__DOT__ac;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx;
    unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx = 0;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__unnamedblk573__DOT__n;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk574__DOT__i;
    unnamedblk568__DOT__unnamedblk574__DOT__i = 0;
    Vtb_rng_uvm_reg_bus_op__struct__0 unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk579__DOT__i0;
    unnamedblk568__DOT__unnamedblk579__DOT__i0 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4;
    unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk581__DOT__i;
    unnamedblk568__DOT__unnamedblk581__DOT__i = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i;
    CData/*7:0*/ unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk585__DOT__idx;
    unnamedblk568__DOT__unnamedblk585__DOT__idx = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> unnamedblk568__DOT__unnamedblk587__DOT__f;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk587__DOT__m;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx;
    unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> system_map;
    IData/*31:0*/ bus_width;
    IData/*31:0*/ lsb;
    IData/*31:0*/ skip;
    VlQueue<Vtb_rng_uvm_reg_bus_op__struct__0> accesses;
    std::string op;
    VlQueue<QData/*63:0*/> adr;
    IData/*31:0*/ byte_offset;
    IData/*31:0*/ num_stream_bytes;
    IData/*31:0*/ n_bytes;
    IData/*31:0*/ bytes_per_value;
    IData/*31:0*/ bit_shift;
    IData/*31:0*/ extra_byte;
    this->__VnoInFunc_get_root_map(vlSymsp, system_map);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, bus_width);
    lsb = 0U;
    skip = 0U;
    accesses.clear();
    accesses.atDefault().__PVT__kind = 0;
    accesses.atDefault().__PVT__addr = 0;
    accesses.atDefault().__PVT__data = 0;
    accesses.atDefault().__PVT__n_bits = 0;
    accesses.atDefault().__PVT__byte_en = 0;
    accesses.atDefault().__PVT__status = 0;
    op = ""s;
    adr.clear();
    adr.atDefault() = 0;
    byte_offset = 0U;
    num_stream_bytes = 0U;
    n_bytes = 0U;
    bytes_per_value = 0U;
    bit_shift = 0U;
    extra_byte = 0U;
    this->__VnoInFunc_Xget_bus_infoX(vlProcess, vlSymsp, rw, __Vtask_Xget_bus_infoX__639__map_info, __Vtask_Xget_bus_infoX__639__size, __Vtask_Xget_bus_infoX__639__lsb, __Vtask_Xget_bus_infoX__639__addr_skip);
    lsb = __Vtask_Xget_bus_infoX__639__lsb;
    skip = __Vtask_Xget_bus_infoX__639__addr_skip;
    op = VL_CVT_PACK_STR_NQ((((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1910)
                               ->__PVT__kind) || (2U 
                                                  == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1910)
                                                  ->__PVT__kind))
                              ? 0x0052656164696e67ULL
                              : 0x0057726974696e67ULL));
    if ((2U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1912)
         ->__PVT__element_kind)) {
        __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1915)
                                       ->__PVT__element, unnamedblk565__DOT__mem);
        if (VL_UNLIKELY(((! __VlefExpr_0)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1915: Assertion failed in %Nuvm_pkg.uvm_reg_map.do_bus_access.unnamedblk565: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1915, "");
        }
        VL_NULL_CHECK(unnamedblk565__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1916)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_1__get_n_bytes);
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                                .at(unnamedblk565__DOT__mem), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1916)
                                                        ->__PVT__offset, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1916)
                                                        ->__PVT__offset, 
                                                        (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1916)
                                                         ->__PVT__value.size() 
                                                         * __VlefCall_1__get_n_bytes), adr, VlNull{}, byte_offset, unnamedblk565__DOT__mem, __Vtask_get_physical_addresses_to_map__641__Vfuncout);
        VL_NULL_CHECK(unnamedblk565__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1917)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        num_stream_bytes = (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1917)
                            ->__PVT__value.size() * __VlefCall_2__get_n_bytes);
        VL_NULL_CHECK(unnamedblk565__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1918)->__VnoInFunc_get_n_bytes(vlSymsp, n_bytes);
        VL_NULL_CHECK(unnamedblk565__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1919)->__VnoInFunc_get_n_bytes(vlSymsp, bytes_per_value);
        ++(vlSymsp->__Vcoverage[23924]);
    } else if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1912)
                ->__PVT__element_kind)) {
        __VlefExpr_3 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1924)
                                       ->__PVT__element, unnamedblk566__DOT__f);
        if (VL_UNLIKELY(((! __VlefExpr_3)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1924: Assertion failed in %Nuvm_pkg.uvm_reg_map.do_bus_access.unnamedblk566: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1924, "");
        }
        VL_NULL_CHECK(unnamedblk566__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1927)->__VnoInFunc_get_parent(vlSymsp, __VlefCall_4__get_parent);
        VL_NULL_CHECK(unnamedblk566__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1927)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
        this->__VnoInFunc_ceil(vlSymsp, __VlefCall_5__get_n_bits, 8U, __VlefCall_6__ceil);
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, 
                                                        (VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                       .at(__VlefCall_4__get_parent), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1927)
                                                         ->__PVT__offset 
                                                         + (QData)((IData)(skip))), 0ULL, __VlefCall_6__ceil, adr, VlNull{}, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__648__Vfuncout);
        VL_NULL_CHECK(unnamedblk566__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1928)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
        this->__VnoInFunc_ceil(vlSymsp, __VlefCall_7__get_n_bits, 8U, num_stream_bytes);
        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, n_bytes);
        VL_NULL_CHECK(unnamedblk566__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1930)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_8__get_n_bits);
        this->__VnoInFunc_ceil(vlSymsp, __VlefCall_8__get_n_bits, 8U, bytes_per_value);
        this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_9__get_n_bytes);
        bit_shift = VL_MODDIV_III(32, lsb, VL_SHIFTL_III(32,32,32, __VlefCall_9__get_n_bytes, 3U));
        VL_NULL_CHECK(unnamedblk566__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1932)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_10__get_n_bits);
        VL_NULL_CHECK(unnamedblk566__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1932)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_11__get_n_bits);
        if ((VL_SHIFTR_III(32,32,32, (bit_shift + __VlefCall_10__get_n_bits), 3U) 
             != VL_SHIFTR_III(32,32,32, __VlefCall_11__get_n_bits, 3U))) {
            extra_byte = 1U;
            ++(vlSymsp->__Vcoverage[23925]);
        } else {
            ++(vlSymsp->__Vcoverage[23926]);
        }
        ++(vlSymsp->__Vcoverage[23927]);
    } else if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1912)
                ->__PVT__element_kind)) {
        __VlefExpr_12 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1939)
                                        ->__PVT__element, unnamedblk567__DOT__r);
        if (VL_UNLIKELY(((! __VlefExpr_12)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1939: Assertion failed in %Nuvm_pkg.uvm_reg_map.do_bus_access.unnamedblk567: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1939, "");
        }
        VL_NULL_CHECK(unnamedblk567__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1941)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_13__get_n_bytes);
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                                .at(unnamedblk567__DOT__r), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1941)
                                                        ->__PVT__offset, 0ULL, __VlefCall_13__get_n_bytes, adr, VlNull{}, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__658__Vfuncout);
        VL_NULL_CHECK(unnamedblk567__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1942)->__VnoInFunc_get_n_bytes(vlSymsp, num_stream_bytes);
        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, n_bytes);
        VL_NULL_CHECK(unnamedblk567__DOT__r, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1944)->__VnoInFunc_get_n_bytes(vlSymsp, bytes_per_value);
        ++(vlSymsp->__Vcoverage[23928]);
    }
    unnamedblk568__DOT__be.clear();
    unnamedblk568__DOT__be.atDefault() = 0;
    unnamedblk568__DOT__p.clear();
    unnamedblk568__DOT__p.atDefault() = 0;
    num_stream_bytes = (num_stream_bytes + extra_byte);
    unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = byte_offset;
    while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        unnamedblk568__DOT__be.push_back(0U);
        unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[23929]);
    }
    unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = num_stream_bytes;
    while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        unnamedblk568__DOT__be.push_back(1U);
        unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[23930]);
    }
    unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = bus_width;
    while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        unnamedblk568__DOT__be.push_back(0U);
        unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[23931]);
    }
    unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3 
        = byte_offset;
    while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        unnamedblk568__DOT__p.push_back(0U);
        unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
        ++(vlSymsp->__Vcoverage[23932]);
    }
    unnamedblk568__DOT__unnamedblk569__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk569__DOT__idx, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1961)
                      ->__PVT__value.size())) {
        unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i = 0U;
        unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i = 0U;
        while ((unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i 
                < bytes_per_value)) {
            unnamedblk568__DOT__p.push_back((0x000000ffU 
                                             & (IData)(
                                                       (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1963)
                                                        ->__PVT__value.at(unnamedblk568__DOT__unnamedblk569__DOT__idx) 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i))))));
            unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i);
            ++(vlSymsp->__Vcoverage[23933]);
        }
        unnamedblk568__DOT__unnamedblk569__DOT__idx 
            = ((IData)(1U) + unnamedblk568__DOT__unnamedblk569__DOT__idx);
        ++(vlSymsp->__Vcoverage[23934]);
    }
    if ((0U != bit_shift)) {
        unnamedblk568__DOT__unnamedblk571__DOT__ac = 0ULL;
        unnamedblk568__DOT__unnamedblk571__DOT__ac = 0ULL;
        unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx, unnamedblk568__DOT__p.size())) {
            unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__unnamedblk573__DOT__n = 0ULL;
            unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__unnamedblk573__DOT__n 
                = (0x00000000000000ffULL & (unnamedblk568__DOT__unnamedblk571__DOT__ac 
                                            | VL_SHIFTL_QQI(64,64,32, (QData)((IData)(unnamedblk568__DOT__p.at(unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx))), bit_shift)));
            unnamedblk568__DOT__unnamedblk571__DOT__ac 
                = (0x00000000000000ffULL & VL_SHIFTR_QQI(64,64,32, (QData)((IData)(unnamedblk568__DOT__p.at(unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx))), bit_shift));
            unnamedblk568__DOT__p.atWriteAppend(unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx) 
                = (0x000000ffU & (IData)(unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__unnamedblk573__DOT__n));
            unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx);
            ++(vlSymsp->__Vcoverage[23935]);
        }
        if ((0U != extra_byte)) {
            unnamedblk568__DOT__p.push_back((0x000000ffU 
                                             & (IData)(unnamedblk568__DOT__unnamedblk571__DOT__ac)));
            ++(vlSymsp->__Vcoverage[23936]);
        } else {
            ++(vlSymsp->__Vcoverage[23937]);
        }
        ++(vlSymsp->__Vcoverage[23938]);
    } else {
        ++(vlSymsp->__Vcoverage[23939]);
    }
    accesses.clear();
    unnamedblk568__DOT__unnamedblk574__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk574__DOT__i, adr.size())) {
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__kind = 0;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__addr = 0;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__data = 0;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__n_bits = 0;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__byte_en = 0;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__status = 0;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data = 0ULL;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0 = 0U;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0 = 0U;
        while ((unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0 
                < bus_width)) {
            unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data 
                = (((~ (0x00000000000000ffULL << (0x0000003fU 
                                                  & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0)))) 
                    & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data) 
                   | ((QData)((IData)(unnamedblk568__DOT__p.at(
                                                               ((unnamedblk568__DOT__unnamedblk574__DOT__i 
                                                                 * bus_width) 
                                                                + unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0)))) 
                      << (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0))));
            unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0);
            ++(vlSymsp->__Vcoverage[23940]);
        }
        this->__Vfunc_uvm_report_enabled__662__id = "UVM/REG/ADDR"s;
        __Vfunc_uvm_report_enabled__662__severity = 0U;
        __Vfunc_uvm_report_enabled__662__verbosity = 0x00000190U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__663__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__663__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__664__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__664__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__662__verbosity, (IData)(__Vfunc_uvm_report_enabled__662__severity), this->__Vfunc_uvm_report_enabled__662__id, __VlefCall_14__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_14__uvm_report_enabled)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2007)
                          ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2007)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
            __Vtask_uvm_report_info__667__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__667__context_name = ""s;
            __Vtask_uvm_report_info__667__line = 0x000007d7U;
            this->__Vtask_uvm_report_info__667__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_info__667__verbosity = 0x00000190U;
            this->__Vtask_uvm_report_info__667__message 
                = VL_SFORMATF_N_NX("%@ 'h%0x at 'h%0x via map \"%@\"...",0,
                                   -1,&(op),64,unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data,
                                   64,adr.at(unnamedblk568__DOT__unnamedblk574__DOT__i),
                                   -1,&(__VlefCall_15__get_full_name)) ;
            this->__Vtask_uvm_report_info__667__id = "UVM/REG/ADDR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__668__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__668__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__669__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__669__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__667__id, this->__Vtask_uvm_report_info__667__message, __Vtask_uvm_report_info__667__verbosity, this->__Vtask_uvm_report_info__667__filename, __Vtask_uvm_report_info__667__line, this->__Vtask_uvm_report_info__667__context_name, (IData)(__Vtask_uvm_report_info__667__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[435]);
            ++(vlSymsp->__Vcoverage[23941]);
        } else {
            ++(vlSymsp->__Vcoverage[23942]);
        }
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z = 0U;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z = 0U;
        while ((unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z 
                < bus_width)) {
            unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__byte_en 
                = (((~ ((IData)(1U) << (7U & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z))) 
                    & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access
                    .__PVT__byte_en) | (0x00ffU & (unnamedblk568__DOT__be.at(
                                                                             ((bus_width 
                                                                               * unnamedblk568__DOT__unnamedblk574__DOT__i) 
                                                                              + unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z)) 
                                                   << 
                                                   (7U 
                                                    & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z))));
            unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z);
            ++(vlSymsp->__Vcoverage[23943]);
        }
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__kind 
            = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2012)
            ->__PVT__kind;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__addr 
            = adr.at(unnamedblk568__DOT__unnamedblk574__DOT__i);
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__data 
            = unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__n_bits 
            = VL_SHIFTL_III(32,32,32, bus_width, 3U);
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i = 0U;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i 
            = (bus_width - (IData)(1U));
        {
            while (VL_LTES_III(32, 0U, unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i)) {
                if ((1U & (unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access
                           .__PVT__byte_en >> (7U & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i)))) {
                    goto __Vlabel0;
                } else {
                    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__n_bits 
                        = (unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access
                           .__PVT__n_bits - (IData)(8U));
                    ++(vlSymsp->__Vcoverage[23944]);
                }
                unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i 
                    = (unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i 
                       - (IData)(1U));
                ++(vlSymsp->__Vcoverage[23946]);
            }
            __Vlabel0: ;
        }
        accesses.push_back(unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access);
        unnamedblk568__DOT__unnamedblk574__DOT__i = 
            ((IData)(1U) + unnamedblk568__DOT__unnamedblk574__DOT__i);
        ++(vlSymsp->__Vcoverage[23947]);
    }
    co_await this->__VnoInFunc_perform_accesses(vlProcess, vlSymsp, accesses, rw, adapter, sequencer);
    if (((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2030)
          ->__PVT__kind) || (2U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2030)
                             ->__PVT__kind))) {
        unnamedblk568__DOT__p.clear();
        unnamedblk568__DOT__unnamedblk579__DOT__i0 = 0U;
        while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk579__DOT__i0, accesses.size())) {
            unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1 = 0U;
            unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1 = 0U;
            while ((unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1 
                    < bus_width)) {
                unnamedblk568__DOT__p.push_back((0x000000ffU 
                                                 & (IData)(
                                                           (accesses.at(unnamedblk568__DOT__unnamedblk579__DOT__i0)
                                                            .__PVT__data 
                                                            >> 
                                                            (0x0000003fU 
                                                             & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1))))));
                unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1 
                    = ((IData)(1U) + unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1);
                ++(vlSymsp->__Vcoverage[23948]);
            }
            unnamedblk568__DOT__unnamedblk579__DOT__i0 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk579__DOT__i0);
            ++(vlSymsp->__Vcoverage[23949]);
        }
        unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = byte_offset;
        while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
            std::ignore = unnamedblk568__DOT__p.pop_front();
            unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4 
                = (unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4 
                   - (IData)(1U));
            ++(vlSymsp->__Vcoverage[23950]);
        }
        unnamedblk568__DOT__unnamedblk581__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk581__DOT__i, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2037)
                          ->__PVT__value.size())) {
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2037)->__PVT__value.atWrite(unnamedblk568__DOT__unnamedblk581__DOT__i) = 0ULL;
            unnamedblk568__DOT__unnamedblk581__DOT__i 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk581__DOT__i);
            ++(vlSymsp->__Vcoverage[23951]);
        }
        if ((0U != bit_shift)) {
            unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i = 0U;
            unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i, unnamedblk568__DOT__p.size())) {
                unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv = 0U;
                unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv 
                    = VL_SHIFTR_III(8,8,32, unnamedblk568__DOT__p.at(unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i), bit_shift);
                if ((unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i 
                     != (unnamedblk568__DOT__p.size() 
                         - (IData)(1U)))) {
                    unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv 
                        = (0x000000ffU & ((IData)(unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv) 
                                          | VL_SHIFTL_III(8,8,32, unnamedblk568__DOT__p.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i)), bit_shift)));
                    ++(vlSymsp->__Vcoverage[23952]);
                } else {
                    ++(vlSymsp->__Vcoverage[23953]);
                }
                unnamedblk568__DOT__p.atWriteAppend(unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i) 
                    = unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv;
                unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i 
                    = ((IData)(1U) + unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i);
                ++(vlSymsp->__Vcoverage[23954]);
            }
            if ((0U != extra_byte)) {
                std::ignore = unnamedblk568__DOT__p.pop_back();
                ++(vlSymsp->__Vcoverage[23955]);
            } else {
                ++(vlSymsp->__Vcoverage[23956]);
            }
            ++(vlSymsp->__Vcoverage[23957]);
        } else {
            ++(vlSymsp->__Vcoverage[23958]);
        }
        unnamedblk568__DOT__unnamedblk585__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk585__DOT__idx, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2054)
                          ->__PVT__value.size())) {
            unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0 = 0U;
            unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0 = 0U;
            while ((unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0 
                    < bytes_per_value)) {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2056)->__PVT__value.atWrite(unnamedblk568__DOT__unnamedblk585__DOT__idx) 
                    = (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0)))) 
                        & VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2056)
                        ->__PVT__value.atWrite(unnamedblk568__DOT__unnamedblk585__DOT__idx)) 
                       | ((QData)((IData)(unnamedblk568__DOT__p.at(
                                                                   ((unnamedblk568__DOT__unnamedblk585__DOT__idx 
                                                                     * bytes_per_value) 
                                                                    + unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0)))) 
                          << (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0))));
                unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0 
                    = ((IData)(1U) + unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0);
                ++(vlSymsp->__Vcoverage[23959]);
            }
            unnamedblk568__DOT__unnamedblk585__DOT__idx 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk585__DOT__idx);
            ++(vlSymsp->__Vcoverage[23960]);
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2058)
             ->__PVT__element_kind)) {
            unnamedblk568__DOT__unnamedblk587__DOT__m = 0ULL;
            __VlefExpr_16 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2061)
                                            ->__PVT__element, unnamedblk568__DOT__unnamedblk587__DOT__f);
            if (VL_UNLIKELY(((! __VlefExpr_16)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:2061: Assertion failed in %Nuvm_pkg.uvm_reg_map.do_bus_access.unnamedblk568.unnamedblk587: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2061, "");
            }
            VL_NULL_CHECK(unnamedblk568__DOT__unnamedblk587__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2063)->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_17__get_n_bits);
            unnamedblk568__DOT__unnamedblk587__DOT__m 
                = (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_17__get_n_bits) 
                   - 1ULL);
            unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx = 0U;
            while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2064)
                              ->__PVT__value.size())) {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2065)->__PVT__value.atWrite(unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx) 
                    = (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2065)
                       ->__PVT__value.at(unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx) 
                       & unnamedblk568__DOT__unnamedblk587__DOT__m);
                unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx 
                    = ((IData)(1U) + unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx);
                ++(vlSymsp->__Vcoverage[23961]);
            }
            ++(vlSymsp->__Vcoverage[23962]);
        } else {
            ++(vlSymsp->__Vcoverage[23963]);
        }
        ++(vlSymsp->__Vcoverage[23964]);
    } else {
        ++(vlSymsp->__Vcoverage[23965]);
    }
    ++(vlSymsp->__Vcoverage[23966]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_do_bus_access(vlProcess, vlSymsp, rw, sequencer, adapter);
    ++(vlSymsp->__Vcoverage[23967]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print\n"); );
    // Body
    std::string __VlefCall_16__get_name;
    QData/*63:0*/ __VlefCall_15__get_address;
    IData/*31:0*/ __VlefCall_14__get_inst_id;
    std::string __VlefCall_13__get_type_name;
    std::string __VlefCall_12__get_name;
    QData/*63:0*/ __VlefCall_11__get_address;
    IData/*31:0*/ __VlefCall_10__get_inst_id;
    std::string __VlefCall_9__get_type_name;
    std::string __VlefCall_8__get_name;
    QData/*63:0*/ __VlefCall_7__get_address;
    IData/*31:0*/ __VlefCall_6__get_inst_id;
    std::string __VlefCall_5__get_type_name;
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__get_addr_unit_bytes;
    IData/*31:0*/ __VlefCall_0__get_n_bytes;
    IData/*31:0*/ unnamedblk589__DOT__j;
    unnamedblk589__DOT__j = 0;
    IData/*31:0*/ unnamedblk590__DOT__j;
    unnamedblk590__DOT__j = 0;
    IData/*31:0*/ unnamedblk591__DOT__j;
    unnamedblk591__DOT__j = 0;
    IData/*31:0*/ unnamedblk592__DOT__j;
    unnamedblk592__DOT__j = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> vregs;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> mems;
    IData/*31:0*/ endian;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> maps;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sqr;
    regs.clear();
    vregs.clear();
    mems.clear();
    endian = 0U;
    maps.clear();
    this->__VnoInFunc_get_sequencer(vlSymsp, 1U, sqr);
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2107)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "endian"s, ""s, 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name89
                                                                                [
                                                                                (7U 
                                                                                & endian)]), 0x2eU);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_0__get_n_bytes);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2108)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "n_bytes"s, (QData)((IData)(__VlefCall_0__get_n_bytes)), 0x00000040U, 0x02000000U, 0x2eU, ""s);
    this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __VlefCall_1__get_addr_unit_bytes);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2109)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "byte addressing"s, (QData)((IData)(
                                                                                (1U 
                                                                                == __VlefCall_1__get_addr_unit_bytes))), 0x00000040U, 0x02000000U, 0x2eU, ""s);
    if ((VlNull{} != sqr)) {
        VL_NULL_CHECK(sqr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2112)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        VL_NULL_CHECK(sqr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2112)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2112)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "effective sequencer"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), 0x2eU);
        ++(vlSymsp->__Vcoverage[23968]);
    } else {
        ++(vlSymsp->__Vcoverage[23969]);
    }
    this->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk589__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk589__DOT__j, regs.size())) {
        VL_NULL_CHECK(regs.at(unnamedblk589__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        VL_NULL_CHECK(regs.at(unnamedblk589__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
        VL_NULL_CHECK(regs.at(unnamedblk589__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
        VL_NULL_CHECK(regs.at(unnamedblk589__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)->__VnoInFunc_get_address(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_7__get_address);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",0,
                                                                                32,
                                                                                __VlefCall_6__get_inst_id,
                                                                                64,
                                                                                __VlefCall_7__get_address) , 0x2eU);
        unnamedblk589__DOT__j = ((IData)(1U) + unnamedblk589__DOT__j);
        ++(vlSymsp->__Vcoverage[23970]);
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk590__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk590__DOT__j, mems.size())) {
        VL_NULL_CHECK(mems.at(unnamedblk590__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
        VL_NULL_CHECK(mems.at(unnamedblk590__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
        VL_NULL_CHECK(mems.at(unnamedblk590__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_10__get_inst_id);
        VL_NULL_CHECK(mems.at(unnamedblk590__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_11__get_address);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_8__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_9__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",0,
                                                                                32,
                                                                                __VlefCall_10__get_inst_id,
                                                                                64,
                                                                                __VlefCall_11__get_address) , 0x2eU);
        unnamedblk590__DOT__j = ((IData)(1U) + unnamedblk590__DOT__j);
        ++(vlSymsp->__Vcoverage[23971]);
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk591__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk591__DOT__j, vregs.size())) {
        VL_NULL_CHECK(vregs.at(unnamedblk591__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)->__VnoInFunc_get_name(vlSymsp, __VlefCall_12__get_name);
        VL_NULL_CHECK(vregs.at(unnamedblk591__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
        VL_NULL_CHECK(vregs.at(unnamedblk591__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_14__get_inst_id);
        VL_NULL_CHECK(vregs.at(unnamedblk591__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>{this}, __VlefCall_15__get_address);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_12__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_13__get_type_name), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",0,
                                                                                32,
                                                                                __VlefCall_14__get_inst_id,
                                                                                64,
                                                                                __VlefCall_15__get_address) , 0x2eU);
        unnamedblk591__DOT__j = ((IData)(1U) + unnamedblk591__DOT__j);
        ++(vlSymsp->__Vcoverage[23972]);
    }
    this->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
    unnamedblk592__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk592__DOT__j, maps.size())) {
        VL_NULL_CHECK(maps.at(unnamedblk592__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2129)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2129)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_16__get_name), maps.at(unnamedblk592__DOT__j), 0x2eU);
        unnamedblk592__DOT__j = ((IData)(1U) + unnamedblk592__DOT__j);
        ++(vlSymsp->__Vcoverage[23973]);
    }
    ++(vlSymsp->__Vcoverage[23974]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    std::string __VlefCall_4__convert2string;
    std::string __VlefCall_3__convert2string;
    std::string __VlefCall_2__convert2string;
    IData/*31:0*/ __VlefCall_1__get_n_bytes;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk593__DOT__j;
    unnamedblk593__DOT__j = 0;
    IData/*31:0*/ unnamedblk594__DOT__j;
    unnamedblk594__DOT__j = 0;
    IData/*31:0*/ unnamedblk595__DOT__j;
    unnamedblk595__DOT__j = 0;
    convert2string__Vfuncrtn = ""s;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> vregs;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> mems;
    IData/*31:0*/ endian;
    std::string prefix;
    regs.clear();
    vregs.clear();
    mems.clear();
    endian = 0U;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@Map %@",0,
                  -1,&(prefix),-1,&(__VlefCall_0__get_full_name));
    this->__VnoInFunc_get_endian(vlSymsp, 0U, endian);
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __VlefCall_1__get_n_bytes);
    __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name89
        [(7U & endian)];
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@ -- %0# bytes (%@)",0,
                  -1,&(convert2string__Vfuncrtn),32,
                  __VlefCall_1__get_n_bytes,-1,&(__Vtemp_1));
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk593__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk593__DOT__j, regs.size())) {
        VL_NULL_CHECK(regs.at(unnamedblk593__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2148)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@\n%@",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__VlefCall_2__convert2string));
        unnamedblk593__DOT__j = ((IData)(1U) + unnamedblk593__DOT__j);
        ++(vlSymsp->__Vcoverage[23975]);
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk594__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk594__DOT__j, mems.size())) {
        VL_NULL_CHECK(mems.at(unnamedblk594__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2153)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_3__convert2string);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@\n%@",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__VlefCall_3__convert2string));
        unnamedblk594__DOT__j = ((IData)(1U) + unnamedblk594__DOT__j);
        ++(vlSymsp->__Vcoverage[23976]);
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk595__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk595__DOT__j, vregs.size())) {
        VL_NULL_CHECK(vregs.at(unnamedblk595__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2158)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_4__convert2string);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@\n%@",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__VlefCall_4__convert2string));
        unnamedblk595__DOT__j = ((IData)(1U) + unnamedblk595__DOT__j);
        ++(vlSymsp->__Vcoverage[23977]);
    }
    ++(vlSymsp->__Vcoverage[23978]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__715__verbosity;
    __Vfunc_uvm_report_enabled__715__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__715__severity;
    __Vfunc_uvm_report_enabled__715__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__716__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__717__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__715__id = "UVM/REGMAP/NOCLONE"s;
    __Vfunc_uvm_report_enabled__715__severity = 3U;
    __Vfunc_uvm_report_enabled__715__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__716__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__716__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__717__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__717__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__715__verbosity, (IData)(__Vfunc_uvm_report_enabled__715__severity), this->__Vfunc_uvm_report_enabled__715__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[432]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/REGMAP/NOCLONE"s, "uvm_reg_map doesnt support clone()"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x00000876U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[23979]);
    } else {
        ++(vlSymsp->__Vcoverage[23980]);
    }
    clone__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[23981]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[23982]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_base_addr = 0;
    __PVT__m_n_bytes = 0;
    __PVT__m_endian = 0;
    __PVT__m_byte_addressing = 0;
    __PVT__m_auto_predict = 0;
    __PVT__m_check_on_read = 0;
    __PVT__m_system_n_bytes = 0;
    __PVT__m_submaps.atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_map::~Vtb_rng_uvm_pkg__03a__03auvm_reg_map() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_map::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_map::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_map::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_base_addr:" + VL_TO_STRING(__PVT__m_base_addr);
    out += ", m_n_bytes:" + VL_TO_STRING(__PVT__m_n_bytes);
    out += ", m_endian:" + VL_TO_STRING(__PVT__m_endian);
    out += ", m_byte_addressing:" + VL_TO_STRING(__PVT__m_byte_addressing);
    out += ", m_sequence_wrapper:" + VL_TO_STRING(__PVT__m_sequence_wrapper);
    out += ", m_adapter:" + VL_TO_STRING(__PVT__m_adapter);
    out += ", m_sequencer:" + VL_TO_STRING(__PVT__m_sequencer);
    out += ", m_auto_predict:" + VL_TO_STRING(__PVT__m_auto_predict);
    out += ", m_check_on_read:" + VL_TO_STRING(__PVT__m_check_on_read);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_system_n_bytes:" + VL_TO_STRING(__PVT__m_system_n_bytes);
    out += ", m_parent_map:" + VL_TO_STRING(__PVT__m_parent_map);
    out += ", m_submaps:" + VL_TO_STRING(__PVT__m_submaps);
    out += ", m_submap_rights:" + VL_TO_STRING(__PVT__m_submap_rights);
    out += ", m_regs_info:" + VL_TO_STRING(__PVT__m_regs_info);
    out += ", m_mems_info:" + VL_TO_STRING(__PVT__m_mems_info);
    out += ", m_regs_by_offset:" + VL_TO_STRING(__PVT__m_regs_by_offset);
    out += ", m_regs_by_offset_wo:" + VL_TO_STRING(__PVT__m_regs_by_offset_wo);
    out += ", m_mems_by_offset:" + VL_TO_STRING(__PVT__m_mems_by_offset);
    out += ", policy:" + VL_TO_STRING(__PVT__policy);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
