// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229> imp) {
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297::init(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_imp = imp;
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297::__PVT__m_if_mask = 0x000001ffU;
    ++(vlSymsp->__Vcoverage[19313]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_imp"s;
    ++(vlSymsp->__Vcoverage[19314]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_disable_auto_item_recording(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
    ++(vlSymsp->__Vcoverage[19315]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_is_auto_item_recording_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19316]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_get_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    ++(vlSymsp->__Vcoverage[19317]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_try_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    ++(vlSymsp->__Vcoverage[19318]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_item_done(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_item_done(vlProcess, vlSymsp, t);
    ++(vlSymsp->__Vcoverage[19319]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_wait_for_sequences(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[19320]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_has_do_available(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[19321]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
    ++(vlSymsp->__Vcoverage[19322]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__9__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    ++(vlSymsp->__Vcoverage[19323]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__10__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    ++(vlSymsp->__Vcoverage[19324]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_put(vlSymsp, t);
    ++(vlSymsp->__Vcoverage[19325]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::~Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297::to_string_middle();
    return (out);
}
