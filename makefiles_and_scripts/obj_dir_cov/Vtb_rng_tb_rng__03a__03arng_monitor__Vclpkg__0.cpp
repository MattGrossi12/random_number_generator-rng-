// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi66> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[583]);
}

void Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_monitor__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "rng_monitor"s;
    ++(vlSymsp->__Vcoverage[585]);
}

void Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi66> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[584]);
}

void Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "rng_monitor"s;
    ++(vlSymsp->__Vcoverage[586]);
}

void Vtb_rng_tb_rng__03a__03arng_monitor::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_monitor::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__ap = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_analysis_port__Tz10, vlProcess, vlSymsp, "ap"s, 
                             VlClassRef<Vtb_rng_tb_rng__03a__03arng_monitor>{this});
    ++(vlSymsp->__Vcoverage[587]);
}

void Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_build_phase\n"); );
    // Locals
    Vtb_rng_rng_if* __Vfunc_get__4__value;
    __Vfunc_get__4__value = nullptr;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    CData/*0:0*/ __VExpr_h688939c3__0;
    __VExpr_h688939c3__0 = 0;
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    __Vfunc_get__4__value = this->__PVT__vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vtb_rng_tb_rng__03a__03arng_monitor>{this}, ""s, "vif"s, __Vfunc_get__4__value, __VExpr_h688939c3__0);
    this->__PVT__vif = __Vfunc_get__4__value;
    if (__VExpr_h688939c3__0) {
        ++(vlSymsp->__Vcoverage[591]);
    } else {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NOVIF"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOVIF"s, "vif nao encontrado"s, 0U, "../UVM/UVM_monitor.sv"s, 0x00000012U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[588]);
        } else {
            ++(vlSymsp->__Vcoverage[589]);
        }
        ++(vlSymsp->__Vcoverage[590]);
    }
    if ((1U & (~ (IData)(__VExpr_h688939c3__0)))) {
        ++(vlSymsp->__Vcoverage[592]);
    }
    if (__VExpr_h688939c3__0) {
        ++(vlSymsp->__Vcoverage[593]);
    }
    ++(vlSymsp->__Vcoverage[594]);
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_ha926dae2__0;
    __Vtrigprevexpr_ha926dae2__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ sample_idx;
    IData/*31:0*/ val;
    sample_idx = 0U;
    val = 0U;
    co_await Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(vlProcess, vlSymsp, phase);
    sample_idx = 0U;
    if ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 29)
               ->__PVT__rst_i))) {
        CData/*0:0*/ __VdynTrigger_h6cc21d28__0;
        __VdynTrigger_h6cc21d28__0 = 0;
        __VdynTrigger_h6cc21d28__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h6cc21d28__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] tb_rng::rng_monitor.vif.rst_i)", 
                                                         "../UVM/UVM_monitor.sv", 
                                                         29);
            __VdynTrigger_h6cc21d28__0 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 29)
                ->__PVT__rst_i;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h6cc21d28__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] tb_rng::rng_monitor.vif.rst_i)", 
                                                     "../UVM/UVM_monitor.sv", 
                                                     29);
    }
    while (true) {
        {
            CData/*0:0*/ __VdynTrigger_h9b48af40__0;
            __VdynTrigger_h9b48af40__0 = 0;
            __VdynTrigger_h9b48af40__0 = 0U;
            __Vtrigprevexpr_ha926dae2__0 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 32)
                ->__PVT__clk_i;
            while ((1U & (~ (IData)(__VdynTrigger_h9b48af40__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@(posedge tb_rng::rng_monitor.vif.clk_i)", 
                                                             "../UVM/UVM_monitor.sv", 
                                                             32);
                __VdynTrigger_h9b48af40__0 = (VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 32)
                                              ->__PVT__clk_i 
                                              & (~ (IData)(__Vtrigprevexpr_ha926dae2__0)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9b48af40__0);
                __Vtrigprevexpr_ha926dae2__0 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 32)
                    ->__PVT__clk_i;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@(posedge tb_rng::rng_monitor.vif.clk_i)", 
                                                         "../UVM/UVM_monitor.sv", 
                                                         32);
            if (VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 34)
                ->__PVT__rst_i) {
                ++(vlSymsp->__Vcoverage[596]);
            } else {
                goto __Vlabel0;
            }
            if (VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 38)
                ->__PVT__wr_i) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
                this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
                CData/*0:0*/ __VdynTrigger_h07a1b885__0;
                __VdynTrigger_h07a1b885__0 = 0;
                __VdynTrigger_h07a1b885__0 = 0U;
                __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
                while ((1U & (~ (IData)(__VdynTrigger_h07a1b885__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                                 430);
                    __VdynTrigger_h07a1b885__0 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                                  != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h07a1b885__0);
                    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                             "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                             430);
                ++(vlSymsp->__Vcoverage[480]);
                val = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 40)
                    ->__PVT__num_to_send_o;
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_MON"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_MON"s, VL_SFORMATF_N_NX("WRITE_SAMPLE[%0#] t=%0t num_to_send_o=%0#",0,
                                                                                32,
                                                                                sample_idx,
                                                                                64,
                                                                                VL_TIME_UNITED_Q(1),
                                                                                -12,
                                                                                32,
                                                                                val) , 0x00000064U, "../UVM/UVM_monitor.sv"s, 0x0000002bU, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[599]);
                } else {
                    ++(vlSymsp->__Vcoverage[600]);
                }
                VL_NULL_CHECK(this->__PVT__ap, "../UVM/UVM_monitor.sv", 44)->__VnoInFunc_write(vlProcess, vlSymsp, val);
                sample_idx = ((IData)(1U) + sample_idx);
                ++(vlSymsp->__Vcoverage[601]);
            } else {
                ++(vlSymsp->__Vcoverage[602]);
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[603]);
    }
    if ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 34)
               ->__PVT__rst_i))) {
        ++(vlSymsp->__Vcoverage[597]);
    }
    if (VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_monitor.sv", 34)
        ->__PVT__rst_i) {
        ++(vlSymsp->__Vcoverage[598]);
    }
    ++(vlSymsp->__Vcoverage[604]);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                            429);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_hccec5996__0;
        __Vintraval_hccec5996__0 = 0;
        __Vintraval_hccec5996__0 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_run_phase____Vfork_1__0____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_hccec5996__0);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_run_phase____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hccec5996__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_run_phase____Vfork_1__0____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__7;
    __VdynTrigger_h24befa02__7 = 0;
    __VdynTrigger_h24befa02__7 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__7)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h24befa02__7 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__7);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 429);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_hccec5996__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_tb_rng__03a__03arng_monitor::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

Vtb_rng_tb_rng__03a__03arng_monitor::~Vtb_rng_tb_rng__03a__03arng_monitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::~\n"); );
}

std::string Vtb_rng_tb_rng__03a__03arng_monitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_tb_rng__03a__03arng_monitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_monitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", ap:" + VL_TO_STRING(__PVT__ap);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_monitor::to_string_middle();
    return (out);
}
