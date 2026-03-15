// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi13> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi13__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[9853]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_copier"s;
    ++(vlSymsp->__Vcoverage[9858]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_copier> copier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, coreservice);
    VL_NULL_CHECK(coreservice, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh", 198)->__VnoInFunc_set_default_copier(vlSymsp, copier);
    ++(vlSymsp->__Vcoverage[9896]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_get_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_copier> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_copier__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, coreservice);
    VL_NULL_CHECK(coreservice, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh", 205)->__VnoInFunc_get_default_copier(vlProcess, vlSymsp, get_default__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[9897]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi13> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi13__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[9854]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_copier> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_copier, vlProcess, vlSymsp, "uvm_copier"s);
        ++(vlSymsp->__Vcoverage[9855]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_copier, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[9856]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[9857]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_copier"s;
    ++(vlSymsp->__Vcoverage[9859]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_policy::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__policy = 0U;
    ++(vlSymsp->__Vcoverage[9860]);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[9861]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_copy_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_copy_object\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
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
    IData/*31:0*/ __Vtask_uvm_report_error__17__verbosity;
    __Vtask_uvm_report_error__17__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__17__line;
    __Vtask_uvm_report_error__17__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__17__report_enabled_checked;
    __Vtask_uvm_report_error__17__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__30__Vfuncout;
    // Body
    IData/*27:0*/ __VlefCall_5__get_recursion_policy;
    CData/*0:0*/ __VlefCall_4__user_hook_enabled;
    IData/*27:0*/ __VlefCall_3__get_recursion_policy;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*27:0*/ __VlefCall_0__get_recursion_policy;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> field_op;
    {
        this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_0__get_recursion_policy);
        if ((0x00040000U == __VlefCall_0__get_recursion_policy)) {
            this->__Vfunc_uvm_report_enabled__5__id = "UVM_COPY_POLICY"s;
            __Vfunc_uvm_report_enabled__5__severity = 2U;
            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), this->__Vfunc_uvm_report_enabled__5__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__9__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__9__context_name = ""s;
                __Vtask_uvm_report_error__9__line = 0x00000052U;
                this->__Vtask_uvm_report_error__9__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh"s;
                __Vtask_uvm_report_error__9__verbosity = 0U;
                this->__Vtask_uvm_report_error__9__message = "Attempting to make a copy of a object which is a reference"s;
                this->__Vtask_uvm_report_error__9__id = "UVM_COPY_POLICY"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__11__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__9__id, this->__Vtask_uvm_report_error__9__message, __Vtask_uvm_report_error__9__verbosity, this->__Vtask_uvm_report_error__9__filename, __Vtask_uvm_report_error__9__line, this->__Vtask_uvm_report_error__9__context_name, (IData)(__Vtask_uvm_report_error__9__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[9862]);
            } else {
                ++(vlSymsp->__Vcoverage[9863]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9865]);
        }
        if (((VlNull{} == rhs) | (VlNull{} == lhs))) {
            this->__Vfunc_uvm_report_enabled__13__id = "UVM_COPY_NULL_OBJ"s;
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
                __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__17__context_name = ""s;
                __Vtask_uvm_report_error__17__line = 0x00000057U;
                this->__Vtask_uvm_report_error__17__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh"s;
                __Vtask_uvm_report_error__17__verbosity = 0U;
                this->__Vtask_uvm_report_error__17__message = "Attempting to make a copy of a object with null src/target"s;
                this->__Vtask_uvm_report_error__17__id = "UVM_COPY_NULL_OBJ"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__18__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__19__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__17__id, this->__Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, this->__Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, this->__Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[437]);
                ++(vlSymsp->__Vcoverage[9866]);
            } else {
                ++(vlSymsp->__Vcoverage[9867]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9869]);
        }
        this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, lhs);
        this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_3__get_recursion_policy);
        this->__PVT__m_recur_states.at(rhs).at(lhs).at(__VlefCall_3__get_recursion_policy) = 1U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, field_op);
        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh", 94)->__VnoInFunc_set(vlProcess, vlSymsp, 1U, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_copier>{this}, rhs);
        VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh", 95)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh", 96)->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __VlefCall_4__user_hook_enabled);
        if (__VlefCall_4__user_hook_enabled) {
            VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh", 97)->__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
            ++(vlSymsp->__Vcoverage[9870]);
        } else {
            ++(vlSymsp->__Vcoverage[9871]);
        }
        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_copier.svh", 99)->__VnoInFunc_m_recycle(vlSymsp);
        this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_5__get_recursion_policy);
        this->__PVT__m_recur_states.at(rhs).at(lhs).at(__VlefCall_5__get_recursion_policy) = 2U;
        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__30__Vfuncout);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9872]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_object_copied(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, IData/*27:0*/ recursion, IData/*31:0*/ &object_copied__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_object_copied\n"); );
    // Body
    object_copied__Vfuncrtn = 0U;
    if (this->__PVT__m_recur_states.exists(rhs)) {
        if (this->__PVT__m_recur_states.at(rhs).exists(lhs)) {
            if (this->__PVT__m_recur_states.at(rhs)
                .at(lhs).exists(recursion)) {
                object_copied__Vfuncrtn = this->__PVT__m_recur_states
                    .at(rhs).at(lhs).at(recursion);
            } else {
                object_copied__Vfuncrtn = 0U;
            }
        } else {
            object_copied__Vfuncrtn = 0U;
        }
    } else {
        object_copied__Vfuncrtn = 0U;
    }
    ++(vlSymsp->__Vcoverage[9877]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__m_recur_states.clear();
    ++(vlSymsp->__Vcoverage[9878]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_set_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    this->__PVT__policy = policy;
    ++(vlSymsp->__Vcoverage[9879]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = this->__PVT__policy;
    ++(vlSymsp->__Vcoverage[9880]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_num_copies(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, IData/*31:0*/ &get_num_copies__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_num_copies\n"); );
    // Body
    {
        get_num_copies__Vfuncrtn = 0U;
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_num_copies__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).size();
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9882]);
        }
        get_num_copies__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9883]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_first_copy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_first_copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_first_copy\n"); );
    // Body
    {
        get_first_copy__Vfuncrtn = 0U;
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_first_copy__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).first(lhs);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9885]);
        }
        get_first_copy__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9886]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_next_copy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_next_copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_next_copy\n"); );
    // Body
    {
        get_next_copy__Vfuncrtn = 0U;
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_next_copy__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).next(lhs);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9888]);
        }
        get_next_copy__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9889]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_last_copy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_last_copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_last_copy\n"); );
    // Body
    {
        get_last_copy__Vfuncrtn = 0U;
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_last_copy__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).last(lhs);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9891]);
        }
        get_last_copy__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9892]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_prev_copy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &lhs, IData/*31:0*/ &get_prev_copy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_get_prev_copy\n"); );
    // Body
    {
        get_prev_copy__Vfuncrtn = 0U;
        if (this->__PVT__m_recur_states.exists(rhs)) {
            get_prev_copy__Vfuncrtn = this->__PVT__m_recur_states
                .at(rhs).prev(lhs);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9894]);
        }
        get_prev_copy__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9895]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_copier::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_recur_states.atDefault().atDefault().atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_copier::~Vtb_rng_uvm_pkg__03a__03auvm_copier() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_copier::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_copier::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_copier::to_string_middle\n"); );
    // Body
    std::string out;
    out += "policy:" + VL_TO_STRING(__PVT__policy);
    out += ", m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
