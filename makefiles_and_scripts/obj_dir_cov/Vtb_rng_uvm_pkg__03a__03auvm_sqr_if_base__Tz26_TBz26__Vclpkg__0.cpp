// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_get_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_get_next_item\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__0__verbosity;
    __Vtask_uvm_report_error__0__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__0__line;
    __Vtask_uvm_report_error__0__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__0__report_enabled_checked;
    __Vtask_uvm_report_error__0__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__0__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__0__context_name = ""s;
    __Vtask_uvm_report_error__0__line = 0U;
    this->__Vtask_uvm_report_error__0__filename = ""s;
    __Vtask_uvm_report_error__0__verbosity = 0U;
    this->__Vtask_uvm_report_error__0__message = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__0__id = "get_next_item"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__0__id, this->__Vtask_uvm_report_error__0__message, __Vtask_uvm_report_error__0__verbosity, this->__Vtask_uvm_report_error__0__filename, __Vtask_uvm_report_error__0__line, this->__Vtask_uvm_report_error__0__context_name, (IData)(__Vtask_uvm_report_error__0__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18034]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_try_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_try_next_item\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__4__verbosity;
    __Vtask_uvm_report_error__4__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__4__line;
    __Vtask_uvm_report_error__4__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__4__report_enabled_checked;
    __Vtask_uvm_report_error__4__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__4__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__4__context_name = ""s;
    __Vtask_uvm_report_error__4__line = 0U;
    this->__Vtask_uvm_report_error__4__filename = ""s;
    __Vtask_uvm_report_error__4__verbosity = 0U;
    this->__Vtask_uvm_report_error__4__message = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__4__id = "try_next_item"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__5__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__6__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__4__id, this->__Vtask_uvm_report_error__4__message, __Vtask_uvm_report_error__4__verbosity, this->__Vtask_uvm_report_error__4__filename, __Vtask_uvm_report_error__4__line, this->__Vtask_uvm_report_error__4__context_name, (IData)(__Vtask_uvm_report_error__4__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18035]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_item_done(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_item_done\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__8__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__8__context_name = ""s;
    __Vtask_uvm_report_error__8__line = 0U;
    this->__Vtask_uvm_report_error__8__filename = ""s;
    __Vtask_uvm_report_error__8__verbosity = 0U;
    this->__Vtask_uvm_report_error__8__message = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__8__id = "item_done"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__9__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__10__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__8__id, this->__Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, this->__Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, this->__Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18036]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_wait_for_sequences(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__12__verbosity;
    __Vtask_uvm_report_error__12__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__12__line;
    __Vtask_uvm_report_error__12__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__12__report_enabled_checked;
    __Vtask_uvm_report_error__12__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__12__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__12__context_name = ""s;
    __Vtask_uvm_report_error__12__line = 0U;
    this->__Vtask_uvm_report_error__12__filename = ""s;
    __Vtask_uvm_report_error__12__verbosity = 0U;
    this->__Vtask_uvm_report_error__12__message = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__12__id = "wait_for_sequences"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__13__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__14__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__12__id, this->__Vtask_uvm_report_error__12__message, __Vtask_uvm_report_error__12__verbosity, this->__Vtask_uvm_report_error__12__filename, __Vtask_uvm_report_error__12__line, this->__Vtask_uvm_report_error__12__context_name, (IData)(__Vtask_uvm_report_error__12__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18037]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_has_do_available(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_has_do_available\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__16__verbosity;
    __Vtask_uvm_report_error__16__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__16__line;
    __Vtask_uvm_report_error__16__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__16__report_enabled_checked;
    __Vtask_uvm_report_error__16__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    has_do_available__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__16__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__16__context_name = ""s;
    __Vtask_uvm_report_error__16__line = 0U;
    this->__Vtask_uvm_report_error__16__filename = ""s;
    __Vtask_uvm_report_error__16__verbosity = 0U;
    this->__Vtask_uvm_report_error__16__message = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__16__id = "has_do_available"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__17__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__18__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__16__id, this->__Vtask_uvm_report_error__16__message, __Vtask_uvm_report_error__16__verbosity, this->__Vtask_uvm_report_error__16__filename, __Vtask_uvm_report_error__16__line, this->__Vtask_uvm_report_error__16__context_name, (IData)(__Vtask_uvm_report_error__16__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    has_do_available__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[18038]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__20__context_name = ""s;
    __Vtask_uvm_report_error__20__line = 0U;
    this->__Vtask_uvm_report_error__20__filename = ""s;
    __Vtask_uvm_report_error__20__verbosity = 0U;
    this->__Vtask_uvm_report_error__20__message = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__20__id = "get"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__21__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__22__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__20__id, this->__Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, this->__Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, this->__Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18039]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__24__verbosity;
    __Vtask_uvm_report_error__24__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__24__line;
    __Vtask_uvm_report_error__24__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__24__report_enabled_checked;
    __Vtask_uvm_report_error__24__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__24__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__24__context_name = ""s;
    __Vtask_uvm_report_error__24__line = 0U;
    this->__Vtask_uvm_report_error__24__filename = ""s;
    __Vtask_uvm_report_error__24__verbosity = 0U;
    this->__Vtask_uvm_report_error__24__message = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__24__id = "peek"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__25__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__26__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__24__id, this->__Vtask_uvm_report_error__24__message, __Vtask_uvm_report_error__24__verbosity, this->__Vtask_uvm_report_error__24__filename, __Vtask_uvm_report_error__24__line, this->__Vtask_uvm_report_error__24__context_name, (IData)(__Vtask_uvm_report_error__24__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18040]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_put\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__28__verbosity;
    __Vtask_uvm_report_error__28__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__28__line;
    __Vtask_uvm_report_error__28__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__28__report_enabled_checked;
    __Vtask_uvm_report_error__28__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__28__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__28__context_name = ""s;
    __Vtask_uvm_report_error__28__line = 0U;
    this->__Vtask_uvm_report_error__28__filename = ""s;
    __Vtask_uvm_report_error__28__verbosity = 0U;
    this->__Vtask_uvm_report_error__28__message = "Sequencer interface task not implemented"s;
    this->__Vtask_uvm_report_error__28__id = "put"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__29__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__30__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__28__id, this->__Vtask_uvm_report_error__28__message, __Vtask_uvm_report_error__28__verbosity, this->__Vtask_uvm_report_error__28__filename, __Vtask_uvm_report_error__28__line, this->__Vtask_uvm_report_error__28__context_name, (IData)(__Vtask_uvm_report_error__28__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18041]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_put_response(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_put_response\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__32__verbosity;
    __Vtask_uvm_report_error__32__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__32__line;
    __Vtask_uvm_report_error__32__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__32__report_enabled_checked;
    __Vtask_uvm_report_error__32__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__32__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__32__context_name = ""s;
    __Vtask_uvm_report_error__32__line = 0U;
    this->__Vtask_uvm_report_error__32__filename = ""s;
    __Vtask_uvm_report_error__32__verbosity = 0U;
    this->__Vtask_uvm_report_error__32__message = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__32__id = "put_response"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__33__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__34__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__32__id, this->__Vtask_uvm_report_error__32__message, __Vtask_uvm_report_error__32__verbosity, this->__Vtask_uvm_report_error__32__filename, __Vtask_uvm_report_error__32__line, this->__Vtask_uvm_report_error__32__context_name, (IData)(__Vtask_uvm_report_error__32__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18042]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_disable_auto_item_recording(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_disable_auto_item_recording\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__36__verbosity;
    __Vtask_uvm_report_error__36__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__36__line;
    __Vtask_uvm_report_error__36__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__36__report_enabled_checked;
    __Vtask_uvm_report_error__36__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__36__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__36__context_name = ""s;
    __Vtask_uvm_report_error__36__line = 0U;
    this->__Vtask_uvm_report_error__36__filename = ""s;
    __Vtask_uvm_report_error__36__verbosity = 0U;
    this->__Vtask_uvm_report_error__36__message = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__36__id = "disable_auto_item_recording"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__37__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__38__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__36__id, this->__Vtask_uvm_report_error__36__message, __Vtask_uvm_report_error__36__verbosity, this->__Vtask_uvm_report_error__36__filename, __Vtask_uvm_report_error__36__line, this->__Vtask_uvm_report_error__36__context_name, (IData)(__Vtask_uvm_report_error__36__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    ++(vlSymsp->__Vcoverage[18043]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_is_auto_item_recording_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__40__verbosity;
    __Vtask_uvm_report_error__40__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__40__line;
    __Vtask_uvm_report_error__40__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__40__report_enabled_checked;
    __Vtask_uvm_report_error__40__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__41__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    __Vtask_uvm_report_error__40__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__40__context_name = ""s;
    __Vtask_uvm_report_error__40__line = 0U;
    this->__Vtask_uvm_report_error__40__filename = ""s;
    __Vtask_uvm_report_error__40__verbosity = 0U;
    this->__Vtask_uvm_report_error__40__message = "Sequencer interface function not implemented"s;
    this->__Vtask_uvm_report_error__40__id = "is_auto_item_recording_enabled"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__41__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__42__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__40__id, this->__Vtask_uvm_report_error__40__message, __Vtask_uvm_report_error__40__verbosity, this->__Vtask_uvm_report_error__40__filename, __Vtask_uvm_report_error__40__line, this->__Vtask_uvm_report_error__40__context_name, (IData)(__Vtask_uvm_report_error__40__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[18044]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[18045]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::~Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26::to_string_middle\n"); );
    // Body
    return (""s);
}
