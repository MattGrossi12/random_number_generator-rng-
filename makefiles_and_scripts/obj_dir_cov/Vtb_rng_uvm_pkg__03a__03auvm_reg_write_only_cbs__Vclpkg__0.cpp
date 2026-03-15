// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi182> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi182__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[21073]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_write_only_cbs"s;
    ++(vlSymsp->__Vcoverage[21078]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_me)) {
        this->__PVT__m_me = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, "uvm_reg_write_only_cbs"s);
        ++(vlSymsp->__Vcoverage[21087]);
    } else {
        ++(vlSymsp->__Vcoverage[21088]);
    }
    get__Vfuncrtn = this->__PVT__m_me;
    ++(vlSymsp->__Vcoverage[21089]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_add(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_add\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_1__get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_0__get;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> flds;
    flds.clear();
    this->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg.__VnoInFunc_add(vlSymsp, rg, __VlefCall_0__get, 0U);
    VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 334)->__VnoInFunc_get_fields(vlSymsp, flds);
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, flds.size())) {
        this->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg.__VnoInFunc_add(vlSymsp, flds.at(unnamedblk2__DOT__i), __VlefCall_1__get, 0U);
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        ++(vlSymsp->__Vcoverage[21090]);
    }
    ++(vlSymsp->__Vcoverage[21091]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_remove(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_remove\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__8__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__12__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_4__get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_3__get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> __VlefCall_2__get_cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_1__get;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> __VlefCall_0__get_cb;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi102> cbs;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> flds;
    {
        cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi102, vlSymsp, rg);
        flds.clear();
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 347)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__8__Vfuncout);
        while (true) {
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 348)->__VnoInFunc_get_cb(vlSymsp, __VlefCall_0__get_cb);
            this->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
            if (!((__VlefCall_0__get_cb != __VlefCall_1__get))) break;
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 349)->__VnoInFunc_get_cb(vlSymsp, __VlefCall_2__get_cb);
            if ((VlNull{} == __VlefCall_2__get_cb)) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[21093]);
            }
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 351)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__12__Vfuncout);
            ++(vlSymsp->__Vcoverage[21094]);
        }
        this->__VnoInFunc_get(vlSymsp, __VlefCall_3__get);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg.__VnoInFunc_delete(vlSymsp, rg, __VlefCall_3__get);
        VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 354)->__VnoInFunc_get_fields(vlSymsp, flds);
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, flds.size())) {
            this->__VnoInFunc_get(vlSymsp, __VlefCall_4__get);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz199_TBz196__Vclpkg.__VnoInFunc_delete(vlSymsp, flds.at(unnamedblk3__DOT__i), __VlefCall_4__get);
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
            ++(vlSymsp->__Vcoverage[21095]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21096]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[21072]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi182> __Vfunc_get__1__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi182__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__1__Vfuncout;
    ++(vlSymsp->__Vcoverage[21074]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, "uvm_reg_write_only_cbs"s);
        ++(vlSymsp->__Vcoverage[21075]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[21076]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[21077]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_write_only_cbs"s;
    ++(vlSymsp->__Vcoverage[21079]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_pre_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_pre_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__11__verbosity;
    __Vtask_uvm_report_error__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__11__line;
    __Vtask_uvm_report_error__11__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__11__report_enabled_checked;
    __Vtask_uvm_report_error__11__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__fld;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk1__DOT__rg;
    std::string name;
    {
        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 302)
                      ->__PVT__element, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 302)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
        if ((0U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 304)
             ->__PVT__status)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[21081]);
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 307)
             ->__PVT__element_kind)) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 310)
                                           ->__PVT__element, unnamedblk1__DOT__fld);
            if (VL_UNLIKELY(((! __VlefExpr_0)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_cbs.svh:310: Assertion failed in %Nuvm_pkg.uvm_reg_write_only_cbs.pre_read.unnamedblk1: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 310, "");
            }
            VL_NULL_CHECK(unnamedblk1__DOT__fld, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 311)->__VnoInFunc_get_parent(vlSymsp, unnamedblk1__DOT__rg);
            VL_NULL_CHECK(unnamedblk1__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 312)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
            ++(vlSymsp->__Vcoverage[21082]);
        } else {
            ++(vlSymsp->__Vcoverage[21083]);
        }
        this->__Vfunc_uvm_report_enabled__7__id = "UVM/REG/WRTEONLY"s;
        __Vfunc_uvm_report_enabled__7__severity = 2U;
        __Vfunc_uvm_report_enabled__7__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            __Vtask_uvm_report_error__11__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__11__context_name = ""s;
            __Vtask_uvm_report_error__11__line = 0x0000013cU;
            this->__Vtask_uvm_report_error__11__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh"s;
            __Vtask_uvm_report_error__11__verbosity = 0U;
            this->__Vtask_uvm_report_error__11__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, " is write-only. Cannot call read() method."s));
            this->__Vtask_uvm_report_error__11__id = "UVM/REG/WRTEONLY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__11__id, this->__Vtask_uvm_report_error__11__message, __Vtask_uvm_report_error__11__verbosity, this->__Vtask_uvm_report_error__11__filename, __Vtask_uvm_report_error__11__line, this->__Vtask_uvm_report_error__11__context_name, (IData)(__Vtask_uvm_report_error__11__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[21084]);
        } else {
            ++(vlSymsp->__Vcoverage[21085]);
        }
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 318)->__PVT__status = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[21086]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::~Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_write_only_cbs::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs::to_string_middle();
    return (out);
}
