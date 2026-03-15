// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi113> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi113__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[21097]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_backdoor"s;
    ++(vlSymsp->__Vcoverage[21099]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi113> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi113__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[21098]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_backdoor"s;
    ++(vlSymsp->__Vcoverage[21100]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[21101]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103> unnamedblk1__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk1__DOT__cb;
    this->__VnoInFunc_pre_read(vlSymsp, rw);
    unnamedblk1__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103, vlSymsp, 
                                    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk1__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk1__DOT__cb);
    while ((VlNull{} != unnamedblk1__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk1__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk1__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk1__DOT__cb);
        ++(vlSymsp->__Vcoverage[21102]);
    }
    ++(vlSymsp->__Vcoverage[21103]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk2__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103> unnamedblk3__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk3__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103> iter;
    iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103, vlSymsp, 
                  VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 65)->__VnoInFunc_last(vlProcess, vlSymsp, unnamedblk2__DOT__cb);
    while ((VlNull{} != unnamedblk2__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk2__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 66)->__VnoInFunc_decode(vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 66)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 65)->__VnoInFunc_prev(vlProcess, vlSymsp, unnamedblk2__DOT__cb);
        ++(vlSymsp->__Vcoverage[21104]);
    }
    unnamedblk3__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103, vlSymsp, 
                                    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk3__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk3__DOT__cb);
    while ((VlNull{} != unnamedblk3__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk3__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk3__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk3__DOT__cb);
        ++(vlSymsp->__Vcoverage[21105]);
    }
    this->__VnoInFunc_post_read(vlSymsp, rw);
    ++(vlSymsp->__Vcoverage[21106]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103> unnamedblk4__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk4__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk5__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103> iter;
    iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103, vlSymsp, 
                  VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    this->__VnoInFunc_pre_write(vlSymsp, rw);
    unnamedblk4__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103, vlSymsp, 
                                    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk4__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk4__DOT__cb);
    while ((VlNull{} != unnamedblk4__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk4__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk4__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk4__DOT__cb);
        ++(vlSymsp->__Vcoverage[21107]);
    }
    VL_NULL_CHECK(iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 78)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk5__DOT__cb);
    while ((VlNull{} != unnamedblk5__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk5__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 79)->__VnoInFunc_encode(vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 79)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 78)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk5__DOT__cb);
        ++(vlSymsp->__Vcoverage[21108]);
    }
    ++(vlSymsp->__Vcoverage[21109]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103> unnamedblk6__DOT__iter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk6__DOT__cb;
    unnamedblk6__DOT__iter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi103, vlSymsp, 
                                    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk6__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk6__DOT__cb);
    while ((VlNull{} != unnamedblk6__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk6__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk6__DOT__iter, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk6__DOT__cb);
        ++(vlSymsp->__Vcoverage[21110]);
    }
    this->__VnoInFunc_post_write(vlSymsp, rw);
    ++(vlSymsp->__Vcoverage[21111]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21112]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21113]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21114]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21115]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> field, CData/*0:0*/ &is_auto_updated__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated\n"); );
    // Body
    is_auto_updated__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[21117]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__30__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__30__severity = 3U;
    __Vfunc_uvm_report_enabled__30__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__31__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__32__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), this->__Vfunc_uvm_report_enabled__30__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[432]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::wait_for_change() method has not been overloaded"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x000000abU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[21118]);
    } else {
        ++(vlSymsp->__Vcoverage[21119]);
    }
    ++(vlSymsp->__Vcoverage[21120]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_36> __VDynScope_start_update_thread_0;
    __VDynScope_start_update_thread_0 = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_36, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 177)->__PVT__element 
        = element;
    {
        if (this->__PVT__m_update_thread.exists(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 179)
                                                ->__PVT__element)) {
            this->__VnoInFunc_kill_update_thread(vlSymsp, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 180)
                                                 ->__PVT__element);
            ++(vlSymsp->__Vcoverage[21121]);
        } else {
            ++(vlSymsp->__Vcoverage[21122]);
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 182)
                                       ->__PVT__element, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 182)
                                       ->__PVT__rg);
        if (__VlefExpr_0) {
            ++(vlSymsp->__Vcoverage[21124]);
        } else {
            goto __Vlabel0;
        }
        this->__VnoInFunc_start_update_thread____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp, __VDynScope_start_update_thread_0);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21133]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_36> __VDynScope_start_update_thread_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_36> __Vtask___VforkTask_0__37____VDynScope_start_update_thread_0;
    IData/*31:0*/ __Vtask___VforkTask_0__37____VlefCall_5__get_n_bits;
    __Vtask___VforkTask_0__37____VlefCall_5__get_n_bits = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__37____VlefCall_4__get_lsb_pos;
    __Vtask___VforkTask_0__37____VlefCall_4__get_lsb_pos = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__37____VlefCall_3__is_auto_updated;
    __Vtask___VforkTask_0__37____VlefCall_3__is_auto_updated = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__37____VlefCall_1__uvm_report_enabled;
    __Vtask___VforkTask_0__37____VlefCall_1__uvm_report_enabled = 0;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __Vtask___VforkTask_0__37____VlefCall_0__self;
    QData/*63:0*/ __Vtask___VforkTask_0__37__unnamedblk269__DOT__val;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__val = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item;
    IData/*31:0*/ __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> __Vtask___VforkTask_0__37__fields;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __Vfunc_self__38__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__Vfuncout;
    __Vfunc_uvm_report_enabled__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__verbosity;
    __Vfunc_uvm_report_enabled__42__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__42__severity;
    __Vfunc_uvm_report_enabled__42__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__43__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__44__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__45__Vfuncout;
    __Vtask_uvm_report_enabled__45__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__47__verbosity;
    __Vtask_uvm_report_error__47__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__47__line;
    __Vtask_uvm_report_error__47__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__47__report_enabled_checked;
    __Vtask_uvm_report_error__47__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
    CData/*0:0*/ __Vfunc_is_auto_updated__51__Vfuncout;
    __Vfunc_is_auto_updated__51__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__52__Vfuncout;
    __Vtask_get_lsb_pos__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__53__Vfuncout;
    __Vtask_get_n_bits__53__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__37____VDynScope_start_update_thread_0 
        = __VDynScope_start_update_thread_0;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 
                                            185);
    __Vtask___VforkTask_0__37__fields.clear();
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__38__Vfuncout);
    __Vtask___VforkTask_0__37____VlefCall_0__self = __Vfunc_self__38__Vfuncout;
    this->__PVT__m_update_thread.at(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 192)
                                    ->__PVT__element) 
        = __Vtask___VforkTask_0__37____VlefCall_0__self;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 195)
                  ->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 195)->__VnoInFunc_get_fields(vlSymsp, __Vtask___VforkTask_0__37__fields);
    while (true) {
        __Vtask___VforkTask_0__37__unnamedblk269__DOT__val = 0ULL;
        __Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item 
            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, "bd_r_item"s);
        VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 200)->__PVT__element 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 200)
            ->__PVT__rg;
        VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 201)->__PVT__element_kind = 0U;
        this->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item);
        __Vtask___VforkTask_0__37__unnamedblk269__DOT__val 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 203)
            ->__PVT__value.at(0U);
        if ((0U != VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 204)
             ->__PVT__status)) {
            this->__Vfunc_uvm_report_enabled__42__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__42__severity = 2U;
            __Vfunc_uvm_report_enabled__42__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__43__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__44__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__44__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__42__verbosity, (IData)(__Vfunc_uvm_report_enabled__42__severity), this->__Vfunc_uvm_report_enabled__42__id, __Vtask_uvm_report_enabled__45__Vfuncout);
            __Vfunc_uvm_report_enabled__42__Vfuncout 
                = __Vtask_uvm_report_enabled__45__Vfuncout;
            ++(vlSymsp->__Vcoverage[432]);
            __Vtask___VforkTask_0__37____VlefCall_1__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__42__Vfuncout;
            if ((0U != __Vtask___VforkTask_0__37____VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 206)
                              ->__PVT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 206)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__46__Vfuncout);
                this->__Vtask___VforkTask_0__37____VlefCall_2__get_name 
                    = this->__Vtask_get_name__46__Vfuncout;
                __Vtask_uvm_report_error__47__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__47__context_name = ""s;
                __Vtask_uvm_report_error__47__line = 0x000000ceU;
                this->__Vtask_uvm_report_error__47__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s;
                __Vtask_uvm_report_error__47__verbosity = 0U;
                this->__Vtask_uvm_report_error__47__message 
                    = VL_SFORMATF_N_NX("Backdoor read of register '%@' failed.",0,
                                       -1,&(this->__Vtask___VforkTask_0__37____VlefCall_2__get_name)) ;
                this->__Vtask_uvm_report_error__47__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__48__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__49__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__47__id, this->__Vtask_uvm_report_error__47__message, __Vtask_uvm_report_error__47__verbosity, this->__Vtask_uvm_report_error__47__filename, __Vtask_uvm_report_error__47__line, this->__Vtask_uvm_report_error__47__context_name, (IData)(__Vtask_uvm_report_error__47__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[21125]);
            } else {
                ++(vlSymsp->__Vcoverage[21126]);
            }
            ++(vlSymsp->__Vcoverage[21127]);
        } else {
            ++(vlSymsp->__Vcoverage[21128]);
        }
        __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i, __Vtask___VforkTask_0__37__fields.size())) {
            this->__VnoInFunc_is_auto_updated(vlSymsp, __Vtask___VforkTask_0__37__fields.at(__Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i), __Vfunc_is_auto_updated__51__Vfuncout);
            __Vtask___VforkTask_0__37____VlefCall_3__is_auto_updated 
                = __Vfunc_is_auto_updated__51__Vfuncout;
            if (__Vtask___VforkTask_0__37____VlefCall_3__is_auto_updated) {
                VL_NULL_CHECK(__Vtask___VforkTask_0__37__fields.at(__Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 210)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__52__Vfuncout);
                __Vtask___VforkTask_0__37____VlefCall_4__get_lsb_pos 
                    = __Vtask_get_lsb_pos__52__Vfuncout;
                VL_NULL_CHECK(__Vtask___VforkTask_0__37__fields.at(__Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 211)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__53__Vfuncout);
                __Vtask___VforkTask_0__37____VlefCall_5__get_n_bits 
                    = __Vtask_get_n_bits__53__Vfuncout;
                VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 210)->__PVT__value.atWrite(0U) 
                    = (VL_SHIFTR_QQI(64,64,32, __Vtask___VforkTask_0__37__unnamedblk269__DOT__val, __Vtask___VforkTask_0__37____VlefCall_4__get_lsb_pos) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vtask___VforkTask_0__37____VlefCall_5__get_n_bits) 
                          - 1ULL));
                VL_NULL_CHECK(__Vtask___VforkTask_0__37__fields.at(__Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 212)->__VnoInFunc_do_predict(vlProcess, vlSymsp, __Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, 0U, 0xffU);
                ++(vlSymsp->__Vcoverage[21129]);
            } else {
                ++(vlSymsp->__Vcoverage[21130]);
            }
            __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i 
                = ((IData)(1U) + __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i);
            ++(vlSymsp->__Vcoverage[21131]);
        }
        this->__VnoInFunc_wait_for_change(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 215)
                                          ->__PVT__element);
        ++(vlSymsp->__Vcoverage[21132]);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread\n"); );
    // Body
    if (this->__PVT__m_update_thread.exists(element)) {
        VL_NULL_CHECK(this->__PVT__m_update_thread.at(element), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 230)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_update_thread.erase(element);
        ++(vlSymsp->__Vcoverage[21134]);
    } else {
        ++(vlSymsp->__Vcoverage[21135]);
    }
    ++(vlSymsp->__Vcoverage[21136]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_update_threads__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads\n"); );
    // Body
    has_update_threads__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__m_update_thread.size());
    ++(vlSymsp->__Vcoverage[21137]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__57__verbosity;
    __Vfunc_uvm_report_enabled__57__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__57__severity;
    __Vfunc_uvm_report_enabled__57__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__57__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__57__severity = 3U;
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
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::write() method has not been overloaded"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x000000f8U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[21138]);
    } else {
        ++(vlSymsp->__Vcoverage[21139]);
    }
    ++(vlSymsp->__Vcoverage[21140]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read\n"); );
    // Body
    this->__VnoInFunc_do_pre_read(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_read_func(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_do_post_read(vlProcess, vlSymsp, rw);
    ++(vlSymsp->__Vcoverage[21141]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__65__verbosity;
    __Vfunc_uvm_report_enabled__65__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__65__severity;
    __Vfunc_uvm_report_enabled__65__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__65__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__65__severity = 3U;
    __Vfunc_uvm_report_enabled__65__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__66__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__67__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__65__verbosity, (IData)(__Vfunc_uvm_report_enabled__65__severity), this->__Vfunc_uvm_report_enabled__65__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[432]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::read_func() method has not been overloaded"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x00000108U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[21142]);
    } else {
        ++(vlSymsp->__Vcoverage[21143]);
    }
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 265)->__PVT__status = 1U;
    ++(vlSymsp->__Vcoverage[21144]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::~Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", m_update_thread:" + VL_TO_STRING(__PVT__m_update_thread);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
