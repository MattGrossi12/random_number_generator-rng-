// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi65> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[548]);
}

void Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "rng_driver"s;
    ++(vlSymsp->__Vcoverage[550]);
}

void Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi65> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[549]);
}

void Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "rng_driver"s;
    ++(vlSymsp->__Vcoverage[551]);
}

void Vtb_rng_tb_rng__03a__03arng_driver::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[552]);
}

void Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_build_phase\n"); );
    // Locals
    Vtb_rng_rng_if* __Vfunc_get__3__value;
    __Vfunc_get__3__value = nullptr;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    CData/*0:0*/ __VExpr_ha83f89c7__0;
    __VExpr_ha83f89c7__0 = 0;
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    __Vfunc_get__3__value = this->__PVT__vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vtb_rng_tb_rng__03a__03arng_driver>{this}, ""s, "vif"s, __Vfunc_get__3__value, __VExpr_ha83f89c7__0);
    this->__PVT__vif = __Vfunc_get__3__value;
    if (__VExpr_ha83f89c7__0) {
        ++(vlSymsp->__Vcoverage[556]);
    } else {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NOVIF"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOVIF"s, "vif nao encontrado"s, 0U, "../UVM/UVM_driver.sv"s, 0x00000014U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[553]);
        } else {
            ++(vlSymsp->__Vcoverage[554]);
        }
        ++(vlSymsp->__Vcoverage[555]);
    }
    if ((1U & (~ (IData)(__VExpr_ha83f89c7__0)))) {
        ++(vlSymsp->__Vcoverage[557]);
    }
    if (__VExpr_ha83f89c7__0) {
        ++(vlSymsp->__Vcoverage[558]);
    }
    ++(vlSymsp->__Vcoverage[559]);
}

void Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_drive_idle(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_drive_idle\n"); );
    // Body
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    this->__VnoInFunc_drive_idle____Vfork_1__0(vlSymsp, 0U);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h89b329dd__0;
    __Vintraval_h89b329dd__0 = 0;
    __Vintraval_h89b329dd__0 = 0U;
    this->__VnoInFunc_drive_idle____Vfork_2__0(vlSymsp, __Vintraval_h89b329dd__0);
    ++(vlSymsp->__Vcoverage[560]);
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_drive_idle____Vfork_2__0(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h89b329dd__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_drive_idle____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__1;
    __VdynTrigger_h24befa02__1 = 0;
    __VdynTrigger_h24befa02__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     31);
        __VdynTrigger_h24befa02__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     31);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 31);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 31)
     ->__PVT__wr_i) = __Vintraval_h89b329dd__0;
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_drive_idle____Vfork_1__0(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5eef67f4__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_drive_idle____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__0;
    __VdynTrigger_h24befa02__0 = 0;
    __VdynTrigger_h24befa02__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     27);
        __VdynTrigger_h24befa02__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     27);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 27);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 27)
     ->__PVT__req_num_i) = __Vintraval_h5eef67f4__0;
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_request_number(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ round_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_request_number\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h9c61cdb3__1;
    __Vtrigprevexpr_h9c61cdb3__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h9c61cdb3__0;
    __Vtrigprevexpr_h9c61cdb3__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ t_on;
    QData/*63:0*/ t_off;
    t_on = 0;
    t_off = 0;
    CData/*0:0*/ __VdynTrigger_haa8d97dd__0;
    __VdynTrigger_haa8d97dd__0 = 0;
    __VdynTrigger_haa8d97dd__0 = 0U;
    __Vtrigprevexpr_h9c61cdb3__0 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 40)
        ->__PVT__clk_i;
    while ((1U & (~ (IData)(__VdynTrigger_haa8d97dd__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     40);
        __VdynTrigger_haa8d97dd__0 = ((~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 40)
                                       ->__PVT__clk_i) 
                                      & (IData)(__Vtrigprevexpr_h9c61cdb3__0));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_haa8d97dd__0);
        __Vtrigprevexpr_h9c61cdb3__0 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 40)
            ->__PVT__clk_i;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 40);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h5ef0e5e1__0;
    __Vintraval_h5ef0e5e1__0 = 0;
    __Vintraval_h5ef0e5e1__0 = 1U;
    this->__VnoInFunc_request_number____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h5ef0e5e1__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h89b329dd__1;
    __Vintraval_h89b329dd__1 = 0;
    __Vintraval_h89b329dd__1 = 0U;
    this->__VnoInFunc_request_number____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h89b329dd__1);
    t_on = VL_TIME_UNITED_Q(1);
    CData/*0:0*/ __VdynTrigger_haa8d97dd__1;
    __VdynTrigger_haa8d97dd__1 = 0;
    __VdynTrigger_haa8d97dd__1 = 0U;
    __Vtrigprevexpr_h9c61cdb3__1 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 54)
        ->__PVT__clk_i;
    while ((1U & (~ (IData)(__VdynTrigger_haa8d97dd__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     54);
        __VdynTrigger_haa8d97dd__1 = ((~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 54)
                                       ->__PVT__clk_i) 
                                      & (IData)(__Vtrigprevexpr_h9c61cdb3__1));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_haa8d97dd__1);
        __Vtrigprevexpr_h9c61cdb3__1 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 54)
            ->__PVT__clk_i;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 54);
    t_off = VL_TIME_UNITED_Q(1);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_DRV"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_DRV"s, VL_SFORMATF_N_NX("round=%0# REQ_WINDOW req_num_i=1 de %0t ate %0t (dur=%0tTU)",0,
                                                                                32,
                                                                                round_id,
                                                                                64,
                                                                                t_on,
                                                                                -12,
                                                                                64,
                                                                                t_off,
                                                                                -12,
                                                                                64,
                                                                                (t_off 
                                                                                - t_on),
                                                                                -12) , 0x00000064U, "../UVM/UVM_driver.sv"s, 0x00000040U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[561]);
    } else {
        ++(vlSymsp->__Vcoverage[562]);
    }
    ++(vlSymsp->__Vcoverage[563]);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_request_number____Vfork_4__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h89b329dd__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_request_number____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__3;
    __VdynTrigger_h24befa02__3 = 0;
    __VdynTrigger_h24befa02__3 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     47);
        __VdynTrigger_h24befa02__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     47);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 47);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 47)
     ->__PVT__wr_i) = __Vintraval_h89b329dd__1;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_request_number____Vfork_3__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5ef0e5e1__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_request_number____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__2;
    __VdynTrigger_h24befa02__2 = 0;
    __VdynTrigger_h24befa02__2 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     44);
        __VdynTrigger_h24befa02__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     44);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 44);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 44)
     ->__PVT__req_num_i) = __Vintraval_h5ef0e5e1__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_accept_number(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ round_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_accept_number\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h9c61cdb3__4;
    __Vtrigprevexpr_h9c61cdb3__4 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h9c61cdb3__3;
    __Vtrigprevexpr_h9c61cdb3__3 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h9c61cdb3__2;
    __Vtrigprevexpr_h9c61cdb3__2 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ t_wr_on;
    QData/*63:0*/ t_wr_posedge;
    QData/*63:0*/ t_both_off;
    t_wr_on = 0;
    t_wr_posedge = 0;
    t_both_off = 0;
    CData/*0:0*/ __VdynTrigger_haa8d97dd__2;
    __VdynTrigger_haa8d97dd__2 = 0;
    __VdynTrigger_haa8d97dd__2 = 0U;
    __Vtrigprevexpr_h9c61cdb3__2 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 74)
        ->__PVT__clk_i;
    while ((1U & (~ (IData)(__VdynTrigger_haa8d97dd__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     74);
        __VdynTrigger_haa8d97dd__2 = ((~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 74)
                                       ->__PVT__clk_i) 
                                      & (IData)(__Vtrigprevexpr_h9c61cdb3__2));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_haa8d97dd__2);
        __Vtrigprevexpr_h9c61cdb3__2 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 74)
            ->__PVT__clk_i;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 74);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h89849fca__0;
    __Vintraval_h89849fca__0 = 0;
    __Vintraval_h89849fca__0 = 1U;
    this->__VnoInFunc_accept_number____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h89849fca__0);
    t_wr_on = VL_TIME_UNITED_Q(1);
    CData/*0:0*/ __VdynTrigger_haa8d9923__0;
    __VdynTrigger_haa8d9923__0 = 0;
    __VdynTrigger_haa8d9923__0 = 0U;
    __Vtrigprevexpr_h9c61cdb3__3 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 85)
        ->__PVT__clk_i;
    while ((1U & (~ (IData)(__VdynTrigger_haa8d9923__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(posedge tb_rng::rng_driver.vif.clk_i)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     85);
        __VdynTrigger_haa8d9923__0 = (VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 85)
                                      ->__PVT__clk_i 
                                      & (~ (IData)(__Vtrigprevexpr_h9c61cdb3__3)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_haa8d9923__0);
        __Vtrigprevexpr_h9c61cdb3__3 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 85)
            ->__PVT__clk_i;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(posedge tb_rng::rng_driver.vif.clk_i)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 85);
    t_wr_posedge = VL_TIME_UNITED_Q(1);
    CData/*0:0*/ __VdynTrigger_haa8d97dd__3;
    __VdynTrigger_haa8d97dd__3 = 0;
    __VdynTrigger_haa8d97dd__3 = 0U;
    __Vtrigprevexpr_h9c61cdb3__4 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 92)
        ->__PVT__clk_i;
    while ((1U & (~ (IData)(__VdynTrigger_haa8d97dd__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     92);
        __VdynTrigger_haa8d97dd__3 = ((~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 92)
                                       ->__PVT__clk_i) 
                                      & (IData)(__Vtrigprevexpr_h9c61cdb3__4));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_haa8d97dd__3);
        __Vtrigprevexpr_h9c61cdb3__4 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 92)
            ->__PVT__clk_i;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 92);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h5eef67f4__1;
    __Vintraval_h5eef67f4__1 = 0;
    __Vintraval_h5eef67f4__1 = 0U;
    this->__VnoInFunc_accept_number____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h5eef67f4__1);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h89b329dd__2;
    __Vintraval_h89b329dd__2 = 0;
    __Vintraval_h89b329dd__2 = 0U;
    this->__VnoInFunc_accept_number____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h89b329dd__2);
    t_both_off = VL_TIME_UNITED_Q(1);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_DRV"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_DRV"s, VL_SFORMATF_N_NX("round=%0# ACCEPT_WINDOW wr_i=1 em %0t | write_edge=%0t | ambos baixam em %0t",0,
                                                                                32,
                                                                                round_id,
                                                                                64,
                                                                                t_wr_on,
                                                                                -12,
                                                                                64,
                                                                                t_wr_posedge,
                                                                                -12,
                                                                                64,
                                                                                t_both_off,
                                                                                -12) , 0x00000064U, "../UVM/UVM_driver.sv"s, 0x0000006cU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[564]);
    } else {
        ++(vlSymsp->__Vcoverage[565]);
    }
    ++(vlSymsp->__Vcoverage[566]);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_accept_number____Vfork_7__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h89b329dd__2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_accept_number____Vfork_7__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__6;
    __VdynTrigger_h24befa02__6 = 0;
    __VdynTrigger_h24befa02__6 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__6)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     98);
        __VdynTrigger_h24befa02__6 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__6);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     98);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 98);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 98)
     ->__PVT__wr_i) = __Vintraval_h89b329dd__2;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_accept_number____Vfork_6__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5eef67f4__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_accept_number____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__5;
    __VdynTrigger_h24befa02__5 = 0;
    __VdynTrigger_h24befa02__5 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__5)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     95);
        __VdynTrigger_h24befa02__5 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__5);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     95);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 95);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 95)
     ->__PVT__req_num_i) = __Vintraval_h5eef67f4__1;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_accept_number____Vfork_5__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h89849fca__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_accept_number____Vfork_5__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__4;
    __VdynTrigger_h24befa02__4 = 0;
    __VdynTrigger_h24befa02__4 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     78);
        __VdynTrigger_h24befa02__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     78);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 78);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 78)
     ->__PVT__wr_i) = __Vintraval_h89849fca__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_drive_one_use(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> tr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_drive_one_use\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h9c61cdb3__5;
    __Vtrigprevexpr_h9c61cdb3__5 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    QData/*63:0*/ t_start;
    t_start = 0;
    this->__VnoInFunc_drive_idle(vlSymsp);
    t_start = VL_TIME_UNITED_Q(1);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_DRV"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_DRV"s, VL_SFORMATF_N_NX("BEGIN round=%0# clk_toggle=%0tTU(period=%0tTU) inter_req=%0#TU t=%0t",0,
                                                                                32,
                                                                                VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 126)
                                                                                ->__PVT__round_id,
                                                                                64,
                                                                                VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 126)
                                                                                ->__PVT__clk_toggle_tu,
                                                                                -12,
                                                                                64,
                                                                                VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 126)
                                                                                ->__PVT__clk_toggle_tu, 1U),
                                                                                -12,
                                                                                32,
                                                                                VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 126)
                                                                                ->__PVT__inter_req_tu,
                                                                                64,
                                                                                t_start,
                                                                                -12) , 0x00000064U, "../UVM/UVM_driver.sv"s, 0x0000007eU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[567]);
    } else {
        ++(vlSymsp->__Vcoverage[568]);
    }
    CData/*0:0*/ __VdynTrigger_haa8d97dd__4;
    __VdynTrigger_haa8d97dd__4 = 0;
    __VdynTrigger_haa8d97dd__4 = 0U;
    __Vtrigprevexpr_h9c61cdb3__5 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 130)
        ->__PVT__clk_i;
    while ((1U & (~ (IData)(__VdynTrigger_haa8d97dd__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     130);
        __VdynTrigger_haa8d97dd__4 = ((~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 130)
                                       ->__PVT__clk_i) 
                                      & (IData)(__Vtrigprevexpr_h9c61cdb3__5));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_haa8d97dd__4);
        __Vtrigprevexpr_h9c61cdb3__5 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 130)
            ->__PVT__clk_i;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(negedge tb_rng::rng_driver.vif.clk_i)", 
                                                 "../UVM/UVM_driver.sv", 
                                                 130);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__5_Vtrigm___PVT__clk_toggle_tu = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 134)
     ->__PVT__clk_toggle_tu) = VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 134)
        ->__PVT__clk_toggle_tu;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_DRV"s, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_DRV"s, VL_SFORMATF_N_NX("round=%0# clock atualizado: clk_toggle_tu=%0tTU (periodo=%0tTU)",0,
                                                                                32,
                                                                                VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 141)
                                                                                ->__PVT__round_id,
                                                                                64,
                                                                                VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 141)
                                                                                ->__PVT__clk_toggle_tu,
                                                                                -12,
                                                                                64,
                                                                                VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 141)
                                                                                ->__PVT__clk_toggle_tu, 1U),
                                                                                -12) , 0x00000064U, "../UVM/UVM_driver.sv"s, 0x0000008dU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[569]);
    } else {
        ++(vlSymsp->__Vcoverage[570]);
    }
    co_await vlSymsp->TOP.__VdlySched.delay((QData)((IData)(VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 145)
                                                            ->__PVT__inter_req_tu)), 
                                            vlProcess, 
                                            "../UVM/UVM_driver.sv", 
                                            145);
    co_await this->__VnoInFunc_request_number(vlProcess, vlSymsp, VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 149)
                                              ->__PVT__round_id);
    co_await this->__VnoInFunc_accept_number(vlProcess, vlSymsp, VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 153)
                                             ->__PVT__round_id);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_DRV"s, __VlefCall_2__uvm_report_enabled);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_DRV"s, VL_SFORMATF_N_NX("END round=%0# t=%0t",0,
                                                                                32,
                                                                                VL_NULL_CHECK(tr, "../UVM/UVM_driver.sv", 158)
                                                                                ->__PVT__round_id,
                                                                                64,
                                                                                VL_TIME_UNITED_Q(1),
                                                                                -12) , 0x00000064U, "../UVM/UVM_driver.sv"s, 0x0000009eU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[571]);
    } else {
        ++(vlSymsp->__Vcoverage[572]);
    }
    this->__VnoInFunc_drive_idle(vlSymsp);
    ++(vlSymsp->__Vcoverage[573]);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_run_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h66064b9d__0;
    __Vtrigprevexpr_h66064b9d__0 = 0;
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> __Vtask_get_next_item__24__t;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> tr;
    co_await Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(vlProcess, vlSymsp, phase);
    this->__VnoInFunc_drive_idle(vlSymsp);
    if (VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 176)
        ->__PVT__rst_i) {
        CData/*0:0*/ __VdynTrigger_h5fe91d45__0;
        __VdynTrigger_h5fe91d45__0 = 0;
        __VdynTrigger_h5fe91d45__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h5fe91d45__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (~ tb_rng::rng_driver.vif.rst_i))", 
                                                         "../UVM/UVM_driver.sv", 
                                                         176);
            __Vtrigprevexpr_h66064b9d__0 = (1U & (~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 176)
                                                  ->__PVT__rst_i));
            __VdynTrigger_h5fe91d45__0 = __Vtrigprevexpr_h66064b9d__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5fe91d45__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (~ tb_rng::rng_driver.vif.rst_i))", 
                                                     "../UVM/UVM_driver.sv", 
                                                     176);
    }
    if ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 180)
               ->__PVT__rst_i))) {
        CData/*0:0*/ __VdynTrigger_hfc770897__0;
        __VdynTrigger_hfc770897__0 = 0;
        __VdynTrigger_hfc770897__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hfc770897__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] tb_rng::rng_driver.vif.rst_i)", 
                                                         "../UVM/UVM_driver.sv", 
                                                         180);
            __VdynTrigger_hfc770897__0 = VL_NULL_CHECK(this->__PVT__vif, "../UVM/UVM_driver.sv", 180)
                ->__PVT__rst_i;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfc770897__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] tb_rng::rng_driver.vif.rst_i)", 
                                                     "../UVM/UVM_driver.sv", 
                                                     180);
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_DRV"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_DRV"s, VL_SFORMATF_N_NX("Reset liberado em t=%0t. Iniciando rodadas.",0,
                                                                                64,
                                                                                VL_TIME_UNITED_Q(1),
                                                                                -12) , 0x00000064U, "../UVM/UVM_driver.sv"s, 0x000000b9U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[574]);
    } else {
        ++(vlSymsp->__Vcoverage[575]);
    }
    while (true) {
        co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "../UVM/UVM_driver.sv", 189)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__24__t);
        tr = __Vtask_get_next_item__24__t;
        co_await this->__VnoInFunc_drive_one_use(vlProcess, vlSymsp, tr);
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "../UVM/UVM_driver.sv", 195)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
        ++(vlSymsp->__Vcoverage[576]);
    }
    ++(vlSymsp->__Vcoverage[577]);
    co_return;
}

void Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_tb_rng__03a__03arng_driver::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

Vtb_rng_tb_rng__03a__03arng_driver::~Vtb_rng_tb_rng__03a__03arng_driver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::~\n"); );
}

std::string Vtb_rng_tb_rng__03a__03arng_driver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_tb_rng__03a__03arng_driver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string_middle();
    return (out);
}
