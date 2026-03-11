// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size) {
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::init(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if_mask = 0x000001ffU;
    ++(vlSymsp->__Vcoverage[18810]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
    ++(vlSymsp->__Vcoverage[18811]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_disable_auto_item_recording(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
    ++(vlSymsp->__Vcoverage[18812]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_is_auto_item_recording_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, is_auto_item_recording_enabled__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[18813]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_get_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    ++(vlSymsp->__Vcoverage[18814]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_try_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    ++(vlSymsp->__Vcoverage[18815]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_item_done(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_item_done(vlSymsp, t);
    ++(vlSymsp->__Vcoverage[18816]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_wait_for_sequences(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_wait_for_sequences(vlSymsp);
    ++(vlSymsp->__Vcoverage[18817]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_has_do_available(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_has_do_available\n"); );
    // Body
    has_do_available__Vfuncrtn = 0U;
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_has_do_available(vlSymsp, has_do_available__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[18818]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_put_response(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_put_response(vlSymsp, t);
    ++(vlSymsp->__Vcoverage[18819]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__9__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_get(vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    ++(vlSymsp->__Vcoverage[18820]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__10__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    ++(vlSymsp->__Vcoverage[18821]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::__PVT__m_if, "/home/matheus/tools/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_put(vlSymsp, t);
    ++(vlSymsp->__Vcoverage[18822]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::~Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi110::to_string_middle\n"); );
    // Body
    std::string out;
    out += "print_enabled:" + VL_TO_STRING(__PVT__print_enabled);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz208::to_string_middle();
    return (out);
}
