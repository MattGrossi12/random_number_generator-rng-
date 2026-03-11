// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> objection) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::new\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    /*super.new*/;
    this->__PVT__m_objection = objection;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    if ((VlNull{} != cntxt)) {
        this->__PVT__m_cntxt = cntxt;
        ++(vlSymsp->__Vcoverage[17698]);
    } else {
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 91)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
        this->__PVT__m_cntxt = __Vtask_get_root__2__Vfuncout;
        ++(vlSymsp->__Vcoverage[17699]);
    }
    this->__PVT__m_cb = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback, vlProcess, vlSymsp, 
                               VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, "_cb"s)), this->__PVT__m_cntxt);
    ++(vlSymsp->__Vcoverage[17700]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_mode(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_mode\n"); );
    // Body
    set_mode__Vfuncrtn = this->__PVT__m_mode;
    if ((((2U == mode) | (1U == mode)) | (0U == mode))) {
        this->__PVT__m_mode = mode;
        ++(vlSymsp->__Vcoverage[17701]);
    } else {
        ++(vlSymsp->__Vcoverage[17702]);
    }
    if ((0U == mode)) {
        ++(vlSymsp->__Vcoverage[17703]);
    }
    if ((1U == mode)) {
        ++(vlSymsp->__Vcoverage[17704]);
    }
    if ((2U == mode)) {
        ++(vlSymsp->__Vcoverage[17705]);
    }
    if ((((2U != mode) & (1U != mode)) & (0U != mode))) {
        ++(vlSymsp->__Vcoverage[17706]);
    }
    ++(vlSymsp->__Vcoverage[17707]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_heartbeat(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> e, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> &comps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_heartbeat\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> c;
    {
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, comps.size())) {
            c = comps.at(unnamedblk1__DOT__i);
            if (VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 129)
                ->__PVT__cnt.exists(c)) {
                ++(vlSymsp->__Vcoverage[17709]);
            } else {
                VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 130)->__PVT__cnt.at(c) = 0U;
                ++(vlSymsp->__Vcoverage[17708]);
            }
            if (VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 131)
                ->__PVT__last_trigger.exists(c)) {
                ++(vlSymsp->__Vcoverage[17711]);
            } else {
                VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 132)->__PVT__last_trigger.at(c) = 0ULL;
                ++(vlSymsp->__Vcoverage[17710]);
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[17712]);
        }
        if (((VlNull{} == e) & (VlNull{} == this->__PVT__m_event))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17714]);
        }
        this->__VnoInFunc_start(vlSymsp, e);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[17715]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_add(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_add\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> c;
    {
        c = comp;
        if (VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 149)
            ->__PVT__cnt.exists(c)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17717]);
        }
        VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 150)->__PVT__cnt.at(c) = 0U;
        VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 151)->__PVT__last_trigger.at(c) = 0ULL;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[17718]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_remove(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_remove\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> c;
    c = comp;
    if (VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 163)
        ->__PVT__cnt.exists(c)) {
        VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 163)->__PVT__cnt.erase(c);
        ++(vlSymsp->__Vcoverage[17719]);
    } else {
        ++(vlSymsp->__Vcoverage[17720]);
    }
    if (VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 164)
        ->__PVT__last_trigger.exists(c)) {
        VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 164)->__PVT__last_trigger.erase(c);
        ++(vlSymsp->__Vcoverage[17721]);
    } else {
        ++(vlSymsp->__Vcoverage[17722]);
    }
    ++(vlSymsp->__Vcoverage[17723]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_start(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> e) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_start\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    {
        if (((VlNull{} == this->__PVT__m_event) & (VlNull{} 
                                                   == e))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_NULL_CHECK(this->__PVT__m_cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 179)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOEVNT"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("start() was called for: "s, __VlefCall_0__get_name), " with a null trigger and no currently set trigger"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17725]);
        }
        if ((((VlNull{} != this->__PVT__m_event) & 
              (e != this->__PVT__m_event)) & (IData)(this->__PVT__m_started))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(e, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 186)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            VL_NULL_CHECK(this->__PVT__m_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 187)->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
            VL_NULL_CHECK(this->__PVT__m_cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 185)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILHBVNT"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("start() was called for: "s, __VlefCall_1__get_name), " with trigger "s), __VlefCall_2__get_name), " which is different "s), "from the original trigger "s), __VlefCall_3__get_name)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17727]);
        }
        if ((VlNull{} != e)) {
            this->__PVT__m_event = e;
            ++(vlSymsp->__Vcoverage[17728]);
        } else {
            ++(vlSymsp->__Vcoverage[17729]);
        }
        this->__VnoInFunc_m_enable_cb(vlSymsp);
        this->__VnoInFunc_m_start_hb_process(vlSymsp);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[17730]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_stop(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_stop\n"); );
    // Body
    this->__PVT__m_started = 0U;
    vlSymsp->fireEvent(this->__PVT__m_stop_event);
    this->__VnoInFunc_m_disable_cb(vlSymsp);
    ++(vlSymsp->__Vcoverage[17731]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process\n"); );
    // Body
    {
        if (this->__PVT__m_started) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17733]);
        }
        this->__PVT__m_started = 1U;
        this->__VnoInFunc_m_start_hb_process____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[17734]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                            211);
    co_await this->__VnoInFunc_m_hb_process(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_enable_cb(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_enable_cb\n"); );
    // Locals
    CData/*0:0*/ __Vtask_callback_mode__15__Vfuncout;
    __Vtask_callback_mode__15__Vfuncout = 0;
    // Body
    {
        VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 218)->__VnoInFunc_callback_mode(vlSymsp, 1U, __Vtask_callback_mode__15__Vfuncout);
        if ((VlNull{} == this->__PVT__m_objection)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17736]);
        }
        if (this->__PVT__m_added) {
            ++(vlSymsp->__Vcoverage[17738]);
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz15_TBz193__Vclpkg.__VnoInFunc_add(vlSymsp, this->__PVT__m_objection, this->__PVT__m_cb, 0U);
            ++(vlSymsp->__Vcoverage[17737]);
        }
        this->__PVT__m_added = 1U;
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(this->__PVT__m_added)))) {
        ++(vlSymsp->__Vcoverage[17739]);
    }
    if (this->__PVT__m_added) {
        ++(vlSymsp->__Vcoverage[17740]);
    }
    ++(vlSymsp->__Vcoverage[17741]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_disable_cb(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_disable_cb\n"); );
    // Locals
    CData/*0:0*/ __Vtask_callback_mode__17__Vfuncout;
    __Vtask_callback_mode__17__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 226)->__VnoInFunc_callback_mode(vlSymsp, 0U, __Vtask_callback_mode__17__Vfuncout);
    ++(vlSymsp->__Vcoverage[17742]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_27> __VDynScope_m_hb_process_1;
    __VDynScope_m_hb_process_1 = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_27, vlSymsp);
    VL_NULL_CHECK(__VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 231)->__PVT__triggered = 0U;
    VL_NULL_CHECK(__VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 232)->__PVT__last_trigger = 0ULL;
    VlForkSync __Vfork_2__sync;
    __Vfork_2__sync.init(1U, vlProcess);
    this->__VnoInFunc_m_hb_process____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_m_hb_process_1, __Vfork_2__sync);
    this->__VnoInFunc_m_hb_process____Vfork_2__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync);
    co_await __Vfork_2__sync.join(vlProcess, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                  233);
    vlProcess->disableFork();
    ++(vlSymsp->__Vcoverage[17771]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__1\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h1e54772b__0;
    __VdynTrigger_h1e54772b__0 = 0;
    __VdynTrigger_h1e54772b__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h1e54772b__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                                     294);
        __VdynTrigger_h1e54772b__0 = this->__PVT__m_stop_event.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1e54772b__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                                     294);
        this->__PVT__m_stop_event.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                                 294);
    __Vfork_2__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                         294);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_27> __VDynScope_m_hb_process_1, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__0\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_27> __Vtask___VforkTask_0__19____VDynScope_m_hb_process_1;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_20;
    __Vtask___VforkTask_0__19____VlefExpr_20 = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_19;
    __Vtask___VforkTask_0__19____VlefExpr_19 = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefLogAnd_18;
    __Vtask___VforkTask_0__19____VlefLogAnd_18 = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__19____VlefCall_17__objects_triggered;
    __Vtask___VforkTask_0__19____VlefCall_17__objects_triggered = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_14;
    __Vtask___VforkTask_0__19____VlefExpr_14 = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_13;
    __Vtask___VforkTask_0__19____VlefExpr_13 = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_12;
    __Vtask___VforkTask_0__19____VlefExpr_12 = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__19____VlefCall_11__objects_triggered;
    __Vtask___VforkTask_0__19____VlefCall_11__objects_triggered = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_8;
    __Vtask___VforkTask_0__19____VlefExpr_8 = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_7;
    __Vtask___VforkTask_0__19____VlefExpr_7 = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefLogAnd_6;
    __Vtask___VforkTask_0__19____VlefLogAnd_6 = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__19____VlefCall_5__objects_triggered;
    __Vtask___VforkTask_0__19____VlefCall_5__objects_triggered = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_2;
    __Vtask___VforkTask_0__19____VlefExpr_2 = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_1;
    __Vtask___VforkTask_0__19____VlefExpr_1 = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__19____VlefExpr_0;
    __Vtask___VforkTask_0__19____VlefExpr_0 = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst;
    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst;
    __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst;
    __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst;
    __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst = 0;
    IData/*31:0*/ __Vtask_objects_triggered__24__Vfuncout;
    __Vtask_objects_triggered__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_objects_triggered__28__Vfuncout;
    __Vtask_objects_triggered__28__Vfuncout = 0;
    IData/*31:0*/ __Vtask_objects_triggered__32__Vfuncout;
    __Vtask_objects_triggered__32__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__19____VDynScope_m_hb_process_1 
        = __VDynScope_m_hb_process_1;
    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst = 0U;
    __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst = 0U;
    __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst = 0U;
    __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst = 0U;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__m_event, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 239)->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
        if (VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 240)
            ->__PVT__triggered) {
            if ((0U == this->__PVT__m_mode)) {
                __Vtask___VforkTask_0__19____VlefExpr_0 
                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 244)
                       ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk2__DOT__idx));
                if (__Vtask___VforkTask_0__19____VlefExpr_0) {
                    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst = 1U;
                    while (true) {
                        __Vtask___VforkTask_0__19____VlefExpr_1 
                            = __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst;
                        if ((1U & (~ (IData)(__Vtask___VforkTask_0__19____VlefExpr_1)))) {
                            __Vtask___VforkTask_0__19____VlefExpr_1 
                                = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 244)
                                   ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk2__DOT__idx));
                        }
                        if (!(__Vtask___VforkTask_0__19____VlefExpr_1)) break;
                        __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst = 0U;
                        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 245)->__PVT__obj 
                            = __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx;
                        __Vtask___VforkTask_0__19____VlefExpr_2 
                            = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 246)
                               ->__PVT__cnt.at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 246)
                                               ->__PVT__obj));
                        if (__Vtask___VforkTask_0__19____VlefExpr_2) {
                            ++(vlSymsp->__Vcoverage[17744]);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 248)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__21__Vfuncout);
                            this->__Vtask___VforkTask_0__19____VlefCall_3__get_name 
                                = this->__Vtask_get_name__21__Vfuncout;
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 248)
                                          ->__PVT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 248)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__22__Vfuncout);
                            this->__Vtask___VforkTask_0__19____VlefCall_4__get_full_name 
                                = this->__Vtask_get_full_name__22__Vfuncout;
                            VL_NULL_CHECK(this->__PVT__m_cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %@ for component %@ since last event trigger at time %0t : last update time was %0t",0,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_0__19____VlefCall_3__get_name),
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_0__19____VlefCall_4__get_full_name),
                                                                                64,
                                                                                VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 249)
                                                                                ->__PVT__last_trigger,
                                                                                -12,
                                                                                64,
                                                                                VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 249)
                                                                                ->__PVT__last_trigger
                                                                                .at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 249)
                                                                                ->__PVT__obj),
                                                                                -12) , 0U, ""s, 0U, ""s, 0U);
                            ++(vlSymsp->__Vcoverage[17743]);
                        }
                        ++(vlSymsp->__Vcoverage[17745]);
                    }
                    ++(vlSymsp->__Vcoverage[17746]);
                } else {
                    ++(vlSymsp->__Vcoverage[17747]);
                }
                ++(vlSymsp->__Vcoverage[17748]);
            } else if ((2U == this->__PVT__m_mode)) {
                __Vtask___VforkTask_0__19____VlefLogAnd_6 
                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 255)
                       ->__PVT__cnt.size());
                if (__Vtask___VforkTask_0__19____VlefLogAnd_6) {
                    VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 255)->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__24__Vfuncout);
                    __Vtask___VforkTask_0__19____VlefCall_5__objects_triggered 
                        = __Vtask_objects_triggered__24__Vfuncout;
                    __Vtask___VforkTask_0__19____VlefLogAnd_6 
                        = (1U & (~ (0U != __Vtask___VforkTask_0__19____VlefCall_5__objects_triggered)));
                }
                if (__Vtask___VforkTask_0__19____VlefLogAnd_6) {
                    this->__Vtask___VforkTask_0__19__unnamedblk3__DOT__s = ""s;
                    __Vtask___VforkTask_0__19____VlefExpr_7 
                        = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 257)
                           ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx));
                    if (__Vtask___VforkTask_0__19____VlefExpr_7) {
                        __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst = 1U;
                        while (true) {
                            __Vtask___VforkTask_0__19____VlefExpr_8 
                                = __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst;
                            if ((1U & (~ (IData)(__Vtask___VforkTask_0__19____VlefExpr_8)))) {
                                __Vtask___VforkTask_0__19____VlefExpr_8 
                                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 257)
                                       ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx));
                            }
                            if (!(__Vtask___VforkTask_0__19____VlefExpr_8)) break;
                            __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst = 0U;
                            VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 258)->__PVT__obj 
                                = __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx;
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 259)
                                          ->__PVT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 259)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__25__Vfuncout);
                            this->__Vtask___VforkTask_0__19____VlefCall_9__get_full_name 
                                = this->__Vtask_get_full_name__25__Vfuncout;
                            this->__Vtask___VforkTask_0__19__unnamedblk3__DOT__s 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vtask___VforkTask_0__19__unnamedblk3__DOT__s, "\n  "s), this->__Vtask___VforkTask_0__19____VlefCall_9__get_full_name);
                            ++(vlSymsp->__Vcoverage[17749]);
                        }
                        ++(vlSymsp->__Vcoverage[17750]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17751]);
                    }
                    VL_NULL_CHECK(this->__PVT__m_objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 262)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__26__Vfuncout);
                    this->__Vtask___VforkTask_0__19____VlefCall_10__get_name 
                        = this->__Vtask_get_name__26__Vfuncout;
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 261)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %@ on any component since last event trigger at time %0t. The list of registered components is:%@",0,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_0__19____VlefCall_10__get_name),
                                                                                64,
                                                                                VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 262)
                                                                                ->__PVT__last_trigger,
                                                                                -12,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_0__19__unnamedblk3__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                    ++(vlSymsp->__Vcoverage[17752]);
                } else {
                    ++(vlSymsp->__Vcoverage[17753]);
                }
                ++(vlSymsp->__Vcoverage[17754]);
            } else if ((1U == this->__PVT__m_mode)) {
                VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 267)->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__28__Vfuncout);
                __Vtask___VforkTask_0__19____VlefCall_11__objects_triggered 
                    = __Vtask_objects_triggered__28__Vfuncout;
                if (VL_LTS_III(32, 1U, __Vtask___VforkTask_0__19____VlefCall_11__objects_triggered)) {
                    this->__Vtask___VforkTask_0__19__unnamedblk5__DOT__s = ""s;
                    __Vtask___VforkTask_0__19____VlefExpr_12 
                        = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 269)
                           ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx));
                    if (__Vtask___VforkTask_0__19____VlefExpr_12) {
                        __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst = 1U;
                        while (true) {
                            __Vtask___VforkTask_0__19____VlefExpr_13 
                                = __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst;
                            if ((1U & (~ (IData)(__Vtask___VforkTask_0__19____VlefExpr_13)))) {
                                __Vtask___VforkTask_0__19____VlefExpr_13 
                                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 269)
                                       ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx));
                            }
                            if (!(__Vtask___VforkTask_0__19____VlefExpr_13)) break;
                            __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst = 0U;
                            VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 270)->__PVT__obj 
                                = __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx;
                            __Vtask___VforkTask_0__19____VlefExpr_14 
                                = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 271)
                                   ->__PVT__cnt.at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 271)
                                                   ->__PVT__obj));
                            if (__Vtask___VforkTask_0__19____VlefExpr_14) {
                                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 272)
                                              ->__PVT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 272)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__29__Vfuncout);
                                this->__Vtask___VforkTask_0__19____VlefCall_15__get_full_name 
                                    = this->__Vtask_get_full_name__29__Vfuncout;
                                VL_SFORMAT_NX(64,this->__Vtask___VforkTask_0__19__unnamedblk5__DOT__s
                                              ,"%@\n  %@ (updated: %0t)",0,
                                              -1,&(this->__Vtask___VforkTask_0__19__unnamedblk5__DOT__s),
                                              -1,&(this->__Vtask___VforkTask_0__19____VlefCall_15__get_full_name),
                                              64,VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 272)
                                              ->__PVT__last_trigger
                                              .at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 272)
                                                  ->__PVT__obj),
                                              -12);
                                ++(vlSymsp->__Vcoverage[17755]);
                            } else {
                                ++(vlSymsp->__Vcoverage[17756]);
                            }
                            ++(vlSymsp->__Vcoverage[17757]);
                        }
                        ++(vlSymsp->__Vcoverage[17758]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17759]);
                    }
                    VL_NULL_CHECK(this->__PVT__m_objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 275)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__30__Vfuncout);
                    this->__Vtask___VforkTask_0__19____VlefCall_16__get_name 
                        = this->__Vtask_get_name__30__Vfuncout;
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 274)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Recieved update of %@ from more than one component since last event trigger at time %0t. The list of triggered components is:%@",0,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_0__19____VlefCall_16__get_name),
                                                                                64,
                                                                                VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 275)
                                                                                ->__PVT__last_trigger,
                                                                                -12,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_0__19__unnamedblk5__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                    ++(vlSymsp->__Vcoverage[17760]);
                } else {
                    ++(vlSymsp->__Vcoverage[17761]);
                }
                __Vtask___VforkTask_0__19____VlefLogAnd_18 
                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 277)
                       ->__PVT__cnt.size());
                if (__Vtask___VforkTask_0__19____VlefLogAnd_18) {
                    VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 277)->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__32__Vfuncout);
                    __Vtask___VforkTask_0__19____VlefCall_17__objects_triggered 
                        = __Vtask_objects_triggered__32__Vfuncout;
                    __Vtask___VforkTask_0__19____VlefLogAnd_18 
                        = (1U & (~ (0U != __Vtask___VforkTask_0__19____VlefCall_17__objects_triggered)));
                }
                if (__Vtask___VforkTask_0__19____VlefLogAnd_18) {
                    this->__Vtask___VforkTask_0__19__unnamedblk7__DOT__s = ""s;
                    __Vtask___VforkTask_0__19____VlefExpr_19 
                        = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 279)
                           ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx));
                    if (__Vtask___VforkTask_0__19____VlefExpr_19) {
                        __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst = 1U;
                        while (true) {
                            __Vtask___VforkTask_0__19____VlefExpr_20 
                                = __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst;
                            if ((1U & (~ (IData)(__Vtask___VforkTask_0__19____VlefExpr_20)))) {
                                __Vtask___VforkTask_0__19____VlefExpr_20 
                                    = (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 279)
                                       ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx));
                            }
                            if (!(__Vtask___VforkTask_0__19____VlefExpr_20)) break;
                            __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst = 0U;
                            VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 280)->__PVT__obj 
                                = __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx;
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 281)
                                          ->__PVT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 281)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__33__Vfuncout);
                            this->__Vtask___VforkTask_0__19____VlefCall_21__get_full_name 
                                = this->__Vtask_get_full_name__33__Vfuncout;
                            this->__Vtask___VforkTask_0__19__unnamedblk7__DOT__s 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vtask___VforkTask_0__19__unnamedblk7__DOT__s, "\n  "s), this->__Vtask___VforkTask_0__19____VlefCall_21__get_full_name);
                            ++(vlSymsp->__Vcoverage[17762]);
                        }
                        ++(vlSymsp->__Vcoverage[17763]);
                    } else {
                        ++(vlSymsp->__Vcoverage[17764]);
                    }
                    VL_NULL_CHECK(this->__PVT__m_objection, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 284)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__34__Vfuncout);
                    this->__Vtask___VforkTask_0__19____VlefCall_22__get_name 
                        = this->__Vtask_get_name__34__Vfuncout;
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 283)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %@ on any component since last event trigger at time %0t. The list of registered components is:%@",0,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_0__19____VlefCall_22__get_name),
                                                                                64,
                                                                                VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 284)
                                                                                ->__PVT__last_trigger,
                                                                                -12,
                                                                                -1,
                                                                                &(this->__Vtask___VforkTask_0__19__unnamedblk7__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                    ++(vlSymsp->__Vcoverage[17765]);
                } else {
                    ++(vlSymsp->__Vcoverage[17766]);
                }
                ++(vlSymsp->__Vcoverage[17767]);
            }
            ++(vlSymsp->__Vcoverage[17768]);
        } else {
            ++(vlSymsp->__Vcoverage[17769]);
        }
        VL_NULL_CHECK(this->__PVT__m_cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 289)->__VnoInFunc_reset_counts(vlSymsp);
        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 290)->__PVT__last_trigger 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 291)->__PVT__triggered = 1U;
        ++(vlSymsp->__Vcoverage[17770]);
    }
    __Vfork_2__sync.done("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                         234);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_mode = 0;
    __PVT__m_started = 0;
    __PVT__m_added = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::~Vtb_rng_uvm_pkg__03a__03auvm_heartbeat() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_objection:" + VL_TO_STRING(__PVT__m_objection);
    out += ", m_cb:" + VL_TO_STRING(__PVT__m_cb);
    out += ", m_cntxt:" + VL_TO_STRING(__PVT__m_cntxt);
    out += ", m_mode:" + VL_TO_STRING(__PVT__m_mode);
    out += ", m_hblist:" + VL_TO_STRING(__PVT__m_hblist);
    out += ", m_event:" + VL_TO_STRING(__PVT__m_event);
    out += ", m_started:" + VL_TO_STRING(__PVT__m_started);
    out += ", m_stop_event:" + VL_TO_STRING(__PVT__m_stop_event);
    out += ", m_added:" + VL_TO_STRING(__PVT__m_added);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
