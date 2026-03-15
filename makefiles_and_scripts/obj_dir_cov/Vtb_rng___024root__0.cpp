// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng___eval_initial__TOP__tb_rng(Vtb_rng_tb_rng* vlSelf);
VlCoroutine Vtb_rng_tb_rng___eval_initial__TOP__tb_rng__Vtiming__0(Vtb_rng_tb_rng* vlSelf);
VlCoroutine Vtb_rng_tb_rng___eval_initial__TOP__tb_rng__Vtiming__1(Vtb_rng_tb_rng* vlSelf, VlProcessRef vlProcess);

void Vtb_rng___024root___eval_initial(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_initial\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_rng_tb_rng___eval_initial__TOP__tb_rng((&vlSymsp->TOP__tb_rng));
    Vtb_rng_tb_rng___eval_initial__TOP__tb_rng__Vtiming__0((&vlSymsp->TOP__tb_rng));
    Vtb_rng_tb_rng___eval_initial__TOP__tb_rng__Vtiming__1((&vlSymsp->TOP__tb_rng), std::make_shared<VlProcess>());
}

void Vtb_rng___024root___eval_triggers_vec__ico(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_triggers_vec__ico\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__5_Vtrigm___PVT__clk_toggle_tu)) 
                                        << 6U));
    vlSelfRef.__VvifTrigger_h7b4084d7__5_Vtrigm___PVT__clk_toggle_tu = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i)) 
                                        << 5U));
    vlSelfRef.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i)) 
                                        << 4U));
    vlSelfRef.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__2_Vtrigm___PVT__rst_i)) 
                                        << 3U));
    vlSelfRef.__VvifTrigger_h7b4084d7__2_Vtrigm___PVT__rst_i = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__1_Vtrigm___PVT__num_to_send_o)) 
                                        << 2U));
    vlSelfRef.__VvifTrigger_h7b4084d7__1_Vtrigm___PVT__num_to_send_o = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__0_Vtrigm___PVT__clk_i)) 
                                        << 1U));
    vlSelfRef.__VvifTrigger_h7b4084d7__0_Vtrigm___PVT__clk_i = 0U;
}

bool Vtb_rng___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rng___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_rng___024root___eval_phase__ico(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_phase__ico\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_rng___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rng___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_rng___024root___eval_triggers_ext__act(Vtb_rng___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 3> &latched) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_triggers_ext__act\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VactTrigPreLoopCounter;
    // Body
    __VactTrigPreLoopCounter = 0U;
    do {
        vlSelfRef.__VactTriggered[((IData)(3U) + __VactTrigPreLoopCounter)] 
            = (vlSelfRef.__VactTriggered[__VactTrigPreLoopCounter] 
               & (~ latched[__VactTrigPreLoopCounter]));
        __VactTrigPreLoopCounter = ((IData)(1U) + __VactTrigPreLoopCounter);
    } while ((1U > __VactTrigPreLoopCounter));
}

void Vtb_rng___024root___eval_triggers_vec__act(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_triggers_vec__act\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0ebb1ce0__0;
    __Vtrigprevexpr_h0ebb1ce0__0 = 0;
    // Body
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__5_Vtrigm___PVT__clk_toggle_tu)) 
                                        << 5U));
    vlSelfRef.__VvifTrigger_h7b4084d7__5_Vtrigm___PVT__clk_toggle_tu = 0U;
    vlSelfRef.__VactTriggered[2U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i)) 
                                        << 4U));
    vlSelfRef.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i = 0U;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i)) 
                                        << 3U));
    vlSelfRef.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i = 0U;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__2_Vtrigm___PVT__rst_i)) 
                                        << 2U));
    vlSelfRef.__VvifTrigger_h7b4084d7__2_Vtrigm___PVT__rst_i = 0U;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__1_Vtrigm___PVT__num_to_send_o)) 
                                        << 1U));
    vlSelfRef.__VvifTrigger_h7b4084d7__1_Vtrigm___PVT__num_to_send_o = 0U;
    vlSelfRef.__VactTriggered[2U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered[2U]) 
                                     | (IData)((IData)(vlSelfRef.__VvifTrigger_h7b4084d7__0_Vtrigm___PVT__clk_i)));
    vlSelfRef.__VvifTrigger_h7b4084d7__0_Vtrigm___PVT__clk_i = 0U;
    __Vtrigprevexpr_h0ebb1ce0__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rng__rif____PVT__rst_i__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__tb_rng__rif.__PVT__clk_i) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rng__rif____PVT__clk_i__0))))));
    vlSelfRef.__VactTriggered[1U] = VL_EXTEND_QI(64,4, 
                                                 ((((IData)(__Vtrigprevexpr_h0ebb1ce0__0) 
                                                    != (IData)(vlSelfRef.__Vtrigprevexpr_h0ebb1ce0__1)) 
                                                   << 2U) 
                                                  | ((vlSelfRef.__VdynSched.evaluate() 
                                                      << 1U) 
                                                     | vlSelfRef.__VdlySched.awaitingCurrentTime())));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rng__rif____PVT__clk_i__0 
        = vlSymsp->TOP__tb_rng__rif.__PVT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rng__rif____PVT__rst_i__0 
        = vlSymsp->TOP__tb_rng__rif.__PVT__rst_i;
    vlSelfRef.__Vtrigprevexpr_h0ebb1ce0__1 = __Vtrigprevexpr_h0ebb1ce0__0;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vtb_rng___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((3U > n));
    return (0U);
}

void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__0(Vtb_rng_tb_rng* vlSelf);
void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__1(Vtb_rng_tb_rng* vlSelf);
void Vtb_rng_rng_if___act_sequent__TOP__tb_rng__rif__0(Vtb_rng_rng_if* vlSelf);
void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__2(Vtb_rng_tb_rng* vlSelf);
void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__3(Vtb_rng_tb_rng* vlSelf);
void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__4(Vtb_rng_tb_rng* vlSelf);

void Vtb_rng___024root___eval_act(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_act\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__0((&vlSymsp->TOP__tb_rng));
    }
    if ((1ULL & vlSelfRef.__VactTriggered[1U])) {
        Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__1((&vlSymsp->TOP__tb_rng));
        Vtb_rng_rng_if___act_sequent__TOP__tb_rng__rif__0((&vlSymsp->TOP__tb_rng__rif));
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__2((&vlSymsp->TOP__tb_rng));
    }
    if ((3ULL & vlSelfRef.__VactTriggered[3U])) {
        Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__3((&vlSymsp->TOP__tb_rng));
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__4((&vlSymsp->TOP__tb_rng));
    }
}

void Vtb_rng_tb_rng___nba_sequent__TOP__tb_rng__0(Vtb_rng_tb_rng* vlSelf);
void Vtb_rng_tb_rng___nba_comb__TOP__tb_rng__0(Vtb_rng_tb_rng* vlSelf);
void Vtb_rng_rng_if___nba_comb__TOP__tb_rng__rif__0(Vtb_rng_rng_if* vlSelf);

void Vtb_rng___024root___eval_nba(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_nba\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_rng_tb_rng___nba_sequent__TOP__tb_rng__0((&vlSymsp->TOP__tb_rng));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (((0x000000000000003fULL & vlSelfRef.__VnbaTriggered[2U]) 
         | (3ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        Vtb_rng_tb_rng___nba_comb__TOP__tb_rng__0((&vlSymsp->TOP__tb_rng));
        Vtb_rng_rng_if___nba_comb__TOP__tb_rng__rif__0((&vlSymsp->TOP__tb_rng__rif));
    }
}

void Vtb_rng___024root___timing_ready(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___timing_ready\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VtrigSched_h968c0d65__0.ready("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void Vtb_rng___024root___timing_resume(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___timing_resume\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h968c0d65__0.moveToResumeQueue(
                                                          "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    vlSelfRef.__VdynSched.resume();
    vlSelfRef.__VtrigSched_h968c0d65__0.resume("@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    if ((1ULL & vlSelfRef.__VactTriggered[1U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_rng___024root___trigger_orInto__act_vec_ext(VlUnpacked<QData/*63:0*/, 4> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___trigger_orInto__act_vec_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U >= n));
}

void Vtb_rng___024root___trigger_orInto__act_ext_vec(VlUnpacked<QData/*63:0*/, 3> &out, const VlUnpacked<QData/*63:0*/, 4> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___trigger_orInto__act_ext_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rng___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 4> &ext, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_rng___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 4> &in);

bool Vtb_rng___024root___eval_phase__act(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_phase__act\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_rng___024root___eval_triggers_vec__act(vlSelf);
    Vtb_rng___024root___timing_ready(vlSelf);
    Vtb_rng___024root___trigger_orInto__act_vec_ext(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
    Vtb_rng___024root___eval_triggers_ext__act(vlSelf, vlSelfRef.__VnbaTriggered);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rng___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_rng___024root___trigger_orInto__act_ext_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_rng___024root___trigger_anySet__act_ext(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_rng___024root___timing_resume(vlSelf);
        Vtb_rng___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_rng___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 4> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___trigger_anySet__act_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((4U > n));
    return (0U);
}

bool Vtb_rng___024root___eval_phase__inact(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_phase__inact\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        vlSelfRef.__VdlySched.resumeZeroDelay();
    }
    return (__VinactExecute);
}

void Vtb_rng___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 3> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((3U > n));
}

bool Vtb_rng___024root___eval_phase__nba(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_phase__nba\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_rng___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_rng___024root___eval_nba(vlSelf);
        Vtb_rng___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rng___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 3> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_rng___024root___eval(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_rng___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../UVM/../UVM/testbench.sv", 23, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtb_rng___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_rng___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../UVM/../UVM/testbench.sv", 23, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("../UVM/../UVM/testbench.sv", 23, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_rng___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("../UVM/../UVM/testbench.sv", 23, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_rng___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_rng___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_rng___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_rng___024root____VbeforeTrig_h968c0d65__0(Vtb_rng___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root____VbeforeTrig_h968c0d65__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 3> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h0ebb1ce0__0;
    __Vtrigprevexpr_h0ebb1ce0__0 = 0;
    // Body
    __Vtrigprevexpr_h0ebb1ce0__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    __VTmp[0U] = 0ULL;
    __VTmp[1U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h0ebb1ce0__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h0ebb1ce0__1)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr_h0ebb1ce0__1 = __Vtrigprevexpr_h0ebb1ce0__0;
    if ((4ULL & __VTmp[1U])) {
        vlSelfRef.__VtrigSched_h968c0d65__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[1U] = (vlSelfRef.__VactTriggeredAcc[1U] 
                                        | __VTmp[1U]);
}

#ifdef VL_DEBUG
void Vtb_rng___024root___eval_debug_assertions(Vtb_rng___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root___eval_debug_assertions\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
