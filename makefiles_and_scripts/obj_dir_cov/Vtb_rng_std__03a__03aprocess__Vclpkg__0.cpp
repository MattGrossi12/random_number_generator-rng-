// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    p = VL_NEW(Vtb_rng_std__03a__03aprocess, vlSymsp);

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:145:7
    VL_NULL_CHECK(p, "/usr/local/share/verilator/include/verilated_std.sv", 145)->__PVT__m_process = vlProcess;
    self__Vfuncrtn = p;
    ++(vlSymsp->__Vcoverage[25446]);
}

void Vtb_rng_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
    // Body
    while (VL_LTS_III(32, 0U, processQueue.size())) {
        VL_NULL_CHECK(processQueue.pop_back(), "/usr/local/share/verilator/include/verilated_std.sv", 185)->__VnoInFunc_kill(vlSymsp);
        ++(vlSymsp->__Vcoverage[25455]);
    }
    ++(vlSymsp->__Vcoverage[25456]);
}

void Vtb_rng_std__03a__03aprocess::__VnoInFunc_set_status(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:152:7
    this->__PVT__m_process->state(s);
    ++(vlSymsp->__Vcoverage[25447]);
}

void Vtb_rng_std__03a__03aprocess::__VnoInFunc_status(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 0U;
    status__Vfuncrtn = 
// $cpure expression at /usr/local/share/verilator/include/verilated_std.sv:158:21
this->__PVT__m_process->state()
    ;
    ++(vlSymsp->__Vcoverage[25448]);
}

void Vtb_rng_std__03a__03aprocess::__VnoInFunc_kill(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
    ++(vlSymsp->__Vcoverage[25449]);
}

void Vtb_rng_std__03a__03aprocess::__VnoInFunc_suspend(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:169: Assertion failed in %Nstd.process.suspend: std::process::suspend() not supported\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("/usr/local/share/verilator/include/verilated_std.sv", 169, "");
}

void Vtb_rng_std__03a__03aprocess::__VnoInFunc_resume(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
    ++(vlSymsp->__Vcoverage[25450]);
}

VlCoroutine Vtb_rng_std__03a__03aprocess::__VnoInFunc_await(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefLogAnd_7;
    IData/*31:0*/ __VlefCall_6__status;
    IData/*31:0*/ __VlefCall_5__status;
    IData/*31:0*/ __VlefCall_4__status;
    IData/*31:0*/ __VlefCall_3__status;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    this->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
    __VlefLogOr_2 = (0U == __VlefCall_0__status);
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        this->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
        __VlefLogOr_2 = (4U == __VlefCall_1__status);
    }
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        CData/*0:0*/ __VdynTrigger_hda959865__0;
        __VdynTrigger_hda959865__0 = 0;
        __VdynTrigger_hda959865__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hda959865__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] std::process.__VlefLogOr_2)", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         178);
            __VdynTrigger_hda959865__0 = __VlefLogOr_2;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hda959865__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] std::process.__VlefLogOr_2)", 
                                                     "/usr/local/share/verilator/include/verilated_std.sv", 
                                                     178);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_3__status);
    if ((4U == __VlefCall_3__status)) {
        ++(vlSymsp->__Vcoverage[25451]);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_4__status);
    if ((0U == __VlefCall_4__status)) {
        ++(vlSymsp->__Vcoverage[25452]);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_5__status);
    __VlefLogAnd_7 = (0U != __VlefCall_5__status);
    if (__VlefLogAnd_7) {
        this->__VnoInFunc_status(vlSymsp, __VlefCall_6__status);
        __VlefLogAnd_7 = (4U != __VlefCall_6__status);
    }
    if (__VlefLogAnd_7) {
        ++(vlSymsp->__Vcoverage[25453]);
    }
    ++(vlSymsp->__Vcoverage[25454]);
    co_return;
}

void Vtb_rng_std__03a__03aprocess::__VnoInFunc_get_randstate(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /usr/local/share/verilator/include/verilated_std.sv:231:26
0
    );

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:233:7
    s = this->__PVT__m_process->randstate();
    get_randstate__Vfuncrtn = s;
    ++(vlSymsp->__Vcoverage[25457]);
}

void Vtb_rng_std__03a__03aprocess::__VnoInFunc_set_randstate(Vtb_rng__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:238:7
    this->__PVT__m_process->randstate(s);
    ++(vlSymsp->__Vcoverage[25458]);
}

void Vtb_rng_std__03a__03aprocess::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[25459]);
}

void Vtb_rng_std__03a__03aprocess::__VnoInFunc_srandom(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ seed) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::__VnoInFunc_srandom\n"); );
    // Body
    __Vm_rng.srandom(seed);
    ++(vlSymsp->__Vcoverage[25460]);
}

void Vtb_rng_std__03a__03aprocess::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vtb_rng_std__03a__03aprocess::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_std__03a__03aprocess::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_process:" + VL_TO_STRING(__PVT__m_process);
    return (out);
}
