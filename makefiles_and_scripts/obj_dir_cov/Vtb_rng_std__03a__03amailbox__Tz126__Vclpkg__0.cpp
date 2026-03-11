// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_std__03a__03amailbox__Tz126::init(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
    ++(vlSymsp->__Vcoverage[25506]);
}

void Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_num(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
    ++(vlSymsp->__Vcoverage[25507]);
}

VlCoroutine Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_put\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h5a89b5e7__0;
    __Vtrigprevexpr_h5a89b5e7__0 = 0;
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_h6c757f6b__0;
            __VdynTrigger_h6c757f6b__0 = 0;
            __VdynTrigger_h6c757f6b__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h6c757f6b__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz126.m_queue.size() < std::mailbox__Tz126.m_bound))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             51);
                __Vtrigprevexpr_h5a89b5e7__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_h6c757f6b__0 = __Vtrigprevexpr_h5a89b5e7__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h6c757f6b__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz126.m_queue.size() < std::mailbox__Tz126.m_bound))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         51);
        }
        ++(vlSymsp->__Vcoverage[25508]);
    }
    this->__PVT__m_queue.push_back(message);
    ++(vlSymsp->__Vcoverage[25509]);
    co_return;
}

void Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_try_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_try_put\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_4;
    IData/*31:0*/ __VlefCall_3__num;
    IData/*31:0*/ __VlefCall_2__num;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_put__Vfuncrtn = 0U;
        __VlefLogOr_1 = (0U == this->__PVT__m_bound);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
            __VlefLogOr_1 = VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_bound);
        }
        if (__VlefLogOr_1) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[25511]);
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    this->__VnoInFunc_num(vlSymsp, __VlefCall_2__num);
    if (VL_LTS_III(32, __VlefCall_2__num, this->__PVT__m_bound)) {
        ++(vlSymsp->__Vcoverage[25512]);
    }
    if ((0U == this->__PVT__m_bound)) {
        ++(vlSymsp->__Vcoverage[25513]);
    }
    __VlefLogAnd_4 = (0U != this->__PVT__m_bound);
    if (__VlefLogAnd_4) {
        this->__VnoInFunc_num(vlSymsp, __VlefCall_3__num);
        __VlefLogAnd_4 = VL_GTES_III(32, __VlefCall_3__num, this->__PVT__m_bound);
    }
    if (__VlefLogAnd_4) {
        ++(vlSymsp->__Vcoverage[25514]);
    }
    ++(vlSymsp->__Vcoverage[25515]);
}

VlCoroutine Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h7b4b1e02__0;
    __Vtrigprevexpr_h7b4b1e02__0 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h8933e78a__0;
            __VdynTrigger_h8933e78a__0 = 0;
            __VdynTrigger_h8933e78a__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h8933e78a__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz126.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             67);
                __Vtrigprevexpr_h7b4b1e02__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h8933e78a__0 = __Vtrigprevexpr_h7b4b1e02__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8933e78a__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz126.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         67);
        }
        ++(vlSymsp->__Vcoverage[25516]);
    }
    message = this->__PVT__m_queue.pop_front();
    ++(vlSymsp->__Vcoverage[25517]);
    co_return;
}

void Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_try_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_try_get\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_get__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[25519]);
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[25520]);
}

VlCoroutine Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_peek(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h7b4b1e02__1;
    __Vtrigprevexpr_h7b4b1e02__1 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h8933e78a__1;
            __VdynTrigger_h8933e78a__1 = 0;
            __VdynTrigger_h8933e78a__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h8933e78a__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz126.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             84);
                __Vtrigprevexpr_h7b4b1e02__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h8933e78a__1 = __Vtrigprevexpr_h7b4b1e02__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8933e78a__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz126.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         84);
        }
        ++(vlSymsp->__Vcoverage[25521]);
    }
    message = this->__PVT__m_queue.at(0U);
    ++(vlSymsp->__Vcoverage[25522]);
    co_return;
}

void Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_try_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::__VnoInFunc_try_peek\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_peek__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[25524]);
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[25525]);
}

void Vtb_rng_std__03a__03amailbox__Tz126::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}

std::string Vtb_rng_std__03a__03amailbox__Tz126::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_std__03a__03amailbox__Tz126::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_std__03a__03amailbox__Tz126::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return (out);
}
