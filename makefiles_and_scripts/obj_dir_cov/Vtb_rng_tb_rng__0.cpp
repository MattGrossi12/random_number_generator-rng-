// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VlCoroutine Vtb_rng_tb_rng___eval_initial__TOP__tb_rng__Vtiming__0(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___eval_initial__TOP__tb_rng__Vtiming__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    while (true) {
        co_await vlSymsp->TOP.__VdlySched.delay(vlSymsp->TOP__tb_rng__rif.__PVT__clk_toggle_tu, 
                                                nullptr, 
                                                "../UVM/../UVM/testbench.sv", 
                                                124);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
        ++(vlSymsp->__Vcoverage[4]);
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__clk)))) {
        ++(vlSymsp->__Vcoverage[2]);
    }
    if (vlSelfRef.__PVT__clk) {
        ++(vlSymsp->__Vcoverage[3]);
    }
    ++(vlSymsp->__Vcoverage[5]);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng___eval_initial__TOP__tb_rng__Vtiming__1(Vtb_rng_tb_rng* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___eval_initial__TOP__tb_rng__Vtiming__1\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("../waveforms/UVM.vcd"s);
    vlSymsp->_traceDumpOpen();
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__2_Vtrigm___PVT__rst_i = 1U;
        }(), vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) = 1U;
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i = 1U;
        }(), vlSymsp->TOP__tb_rng__rif.__PVT__req_num_i) = 0U;
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i = 1U;
        }(), vlSymsp->TOP__tb_rng__rif.__PVT__wr_i) = 0U;
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__5_Vtrigm___PVT__clk_toggle_tu = 1U;
        }(), vlSymsp->TOP__tb_rng__rif.__PVT__clk_toggle_tu) = 3ULL;
    VL_WRITEF_NX("[%0t][TB] clk_toggle_tu inicial=%0t TU (periodo=%0t TU)\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,64,3ULL,
                 -12,64,6ULL,-12);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "vif"s, (&vlSymsp->TOP__tb_rng__rif));
    vlSelfRef.__Vtask_run_test__1__test_name = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__run_test__Vstatic__cs 
        = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__run_test__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 49)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__run_test__Vstatic__top 
        = __Vtask_get_root__3__Vfuncout;
    co_await VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__run_test__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 50)->__VnoInFunc_run_test(vlProcess, vlSymsp, vlSelfRef.__Vtask_run_test__1__test_name);
    ++(vlSymsp->__Vcoverage[435]);
    ++(vlSymsp->__Vcoverage[6]);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__0(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dut__DOT__rng_sel__DOT__seed_s 
        = vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__cache 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache;
    vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__inst__DOT__num_counter 
        = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff2_d 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff2 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff1 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1;
    vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__next_num 
        = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_7 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7;
    vlSelfRef.__Vdly__dut__DOT__data_out = vlSelfRef.__PVT__dut__DOT__data_out;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_6 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_5 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_4 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_3 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_2 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_1 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_0 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0;
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__req_num 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num;
}

void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__1(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__1\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.__PVT__clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.__PVT__clk;
    }
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__0_Vtrigm___PVT__clk_i = 1U;
        }(), vlSymsp->TOP__tb_rng__rif.__PVT__clk_i) 
        = vlSelfRef.__PVT__clk;
    if (((IData)(vlSymsp->TOP__tb_rng__rif.__PVT__clk_i) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__clk_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7, vlSymsp->TOP__tb_rng__rif.__PVT__clk_i, vlSelfRef.dut__DOT____Vtogcov__clk_i);
        vlSelfRef.dut__DOT____Vtogcov__clk_i = vlSymsp->TOP__tb_rng__rif.__PVT__clk_i;
    }
}

void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__2(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__2\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dut__DOT__req_num_again = ((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num) 
                                                | (IData)(vlSelfRef.__PVT__dut__DOT__req_num));
    if (((IData)(vlSelfRef.__PVT__dut__DOT__req_num_again) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__req_num_again))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 31, vlSelfRef.__PVT__dut__DOT__req_num_again, vlSelfRef.dut__DOT____Vtogcov__req_num_again);
        vlSelfRef.dut__DOT____Vtogcov__req_num_again 
            = vlSelfRef.__PVT__dut__DOT__req_num_again;
    }
}

void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__3(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__3\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout;
    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num;
    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num = 0;
    // Body
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        vlSelfRef.__Vdly__dut__DOT__rng_sel__DOT__seed_s 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s)));
        ++(vlSymsp->__Vcoverage[97]);
    } else {
        vlSelfRef.__Vdly__dut__DOT__rng_sel__DOT__seed_s = 0U;
        ++(vlSymsp->__Vcoverage[96]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i)))) {
        ++(vlSymsp->__Vcoverage[98]);
    }
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        ++(vlSymsp->__Vcoverage[99]);
    }
    ++(vlSymsp->__Vcoverage[100]);
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        if (vlSymsp->TOP__tb_rng__rif.__PVT__wr_i) {
            ++(vlSymsp->__Vcoverage[223]);
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__cache 
                = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
        } else {
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__cache 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache;
            ++(vlSymsp->__Vcoverage[224]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__cache = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i)))) {
        ++(vlSymsp->__Vcoverage[226]);
    }
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        ++(vlSymsp->__Vcoverage[227]);
    }
    ++(vlSymsp->__Vcoverage[228]);
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        if (vlSelfRef.__PVT__dut__DOT__req_num) {
            if ((7U == (IData)(vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter))) {
                ++(vlSymsp->__Vcoverage[88]);
                vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__inst__DOT__num_counter = 0U;
            } else {
                vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__inst__DOT__num_counter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter)));
                ++(vlSymsp->__Vcoverage[89]);
            }
            ++(vlSymsp->__Vcoverage[90]);
        } else {
            vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__inst__DOT__num_counter 
                = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
            ++(vlSymsp->__Vcoverage[91]);
        }
    } else {
        vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__inst__DOT__num_counter = 0U;
        ++(vlSymsp->__Vcoverage[92]);
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i)))) {
        ++(vlSymsp->__Vcoverage[93]);
    }
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        ++(vlSymsp->__Vcoverage[94]);
    }
    ++(vlSymsp->__Vcoverage[95]);
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        if (vlSelfRef.__PVT__dut__DOT__req_num) {
            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num 
                = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
            if ((0U == (IData)(vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s))) {
                if ((4U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    if ((2U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 3U;
                            ++(vlSymsp->__Vcoverage[48]);
                        } else {
                            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 4U;
                            ++(vlSymsp->__Vcoverage[47]);
                        }
                    } else if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 2U;
                        ++(vlSymsp->__Vcoverage[46]);
                    } else {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[45]);
                    }
                } else if ((2U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 5U;
                        ++(vlSymsp->__Vcoverage[44]);
                    } else {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 1U;
                        ++(vlSymsp->__Vcoverage[43]);
                    }
                } else if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 6U;
                    ++(vlSymsp->__Vcoverage[42]);
                } else {
                    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 7U;
                    ++(vlSymsp->__Vcoverage[41]);
                }
                ++(vlSymsp->__Vcoverage[50]);
            } else if ((1U == (IData)(vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s))) {
                if ((4U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    if ((2U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 6U;
                            ++(vlSymsp->__Vcoverage[58]);
                        } else {
                            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 2U;
                            ++(vlSymsp->__Vcoverage[57]);
                        }
                    } else if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 4U;
                        ++(vlSymsp->__Vcoverage[56]);
                    } else {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 3U;
                        ++(vlSymsp->__Vcoverage[55]);
                    }
                } else if ((2U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 1U;
                        ++(vlSymsp->__Vcoverage[54]);
                    } else {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 7U;
                        ++(vlSymsp->__Vcoverage[53]);
                    }
                } else if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 0U;
                    ++(vlSymsp->__Vcoverage[52]);
                } else {
                    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 5U;
                    ++(vlSymsp->__Vcoverage[51]);
                }
                ++(vlSymsp->__Vcoverage[60]);
            } else if ((2U == (IData)(vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s))) {
                if ((4U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    if ((2U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 7U;
                            ++(vlSymsp->__Vcoverage[68]);
                        } else {
                            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 6U;
                            ++(vlSymsp->__Vcoverage[67]);
                        }
                    } else if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 4U;
                        ++(vlSymsp->__Vcoverage[66]);
                    } else {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 5U;
                        ++(vlSymsp->__Vcoverage[65]);
                    }
                } else if ((2U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 1U;
                        ++(vlSymsp->__Vcoverage[64]);
                    } else {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[63]);
                    }
                } else if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 3U;
                    ++(vlSymsp->__Vcoverage[62]);
                } else {
                    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 2U;
                    ++(vlSymsp->__Vcoverage[61]);
                }
                ++(vlSymsp->__Vcoverage[70]);
            } else {
                if ((4U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    if ((2U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 7U;
                            ++(vlSymsp->__Vcoverage[78]);
                        } else {
                            __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 4U;
                            ++(vlSymsp->__Vcoverage[77]);
                        }
                    } else if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 5U;
                        ++(vlSymsp->__Vcoverage[76]);
                    } else {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 0U;
                        ++(vlSymsp->__Vcoverage[75]);
                    }
                } else if ((2U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 6U;
                        ++(vlSymsp->__Vcoverage[74]);
                    } else {
                        __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 1U;
                        ++(vlSymsp->__Vcoverage[73]);
                    }
                } else if ((1U & (IData)(__Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__num))) {
                    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 2U;
                    ++(vlSymsp->__Vcoverage[72]);
                } else {
                    __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout = 3U;
                    ++(vlSymsp->__Vcoverage[71]);
                }
                ++(vlSymsp->__Vcoverage[80]);
            }
            ++(vlSymsp->__Vcoverage[81]);
            vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__next_num 
                = __Vfunc_dut__DOT__rng_dp__DOT__num_selector__5__Vfuncout;
            ++(vlSymsp->__Vcoverage[82]);
        } else {
            vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__next_num 
                = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num;
            ++(vlSymsp->__Vcoverage[83]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__next_num = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i)))) {
        ++(vlSymsp->__Vcoverage[85]);
    }
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        ++(vlSymsp->__Vcoverage[86]);
    }
    ++(vlSymsp->__Vcoverage[87]);
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state) 
             & (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse))) {
            ++(vlSymsp->__Vcoverage[229]);
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_7 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__req_num = 0U;
            vlSelfRef.__Vdly__dut__DOT__data_out = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_6 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_5 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_4 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_3 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_2 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_1 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_0 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache;
        } else {
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_0 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_1 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_2 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_3 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_4 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_5 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_6 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6;
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_7 
                = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7;
            vlSelfRef.__Vdly__dut__DOT__data_out = vlSelfRef.__PVT__dut__DOT__data_out;
            ++(vlSymsp->__Vcoverage[230]);
            vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__req_num = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state) 
             & (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse))) {
            ++(vlSymsp->__Vcoverage[231]);
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse)))) {
            ++(vlSymsp->__Vcoverage[232]);
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state)))) {
            ++(vlSymsp->__Vcoverage[233]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_0 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_1 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_2 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_3 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_4 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_5 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_6 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_7 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__req_num = 0U;
        vlSelfRef.__Vdly__dut__DOT__data_out = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i)))) {
        ++(vlSymsp->__Vcoverage[235]);
    }
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        ++(vlSymsp->__Vcoverage[236]);
    }
    ++(vlSymsp->__Vcoverage[237]);
}

void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__4(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__4\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dut__DOT__req_num = ((IData)(vlSymsp->TOP__tb_rng__rif.__PVT__req_num_i) 
                                          | (IData)(vlSelfRef.__PVT__dut__DOT__req_num_again));
    if (vlSelfRef.__PVT__dut__DOT__req_num) {
        ++(vlSymsp->__Vcoverage[238]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num) {
        ++(vlSymsp->__Vcoverage[239]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num)) 
               & (~ (IData)(vlSelfRef.__PVT__dut__DOT__req_num))))) {
        ++(vlSymsp->__Vcoverage[240]);
    }
    ++(vlSymsp->__Vcoverage[241]);
    if (((IData)(vlSelfRef.__PVT__dut__DOT__req_num) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__req_num))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 33, vlSelfRef.__PVT__dut__DOT__req_num, vlSelfRef.dut__DOT____Vtogcov__req_num);
        vlSelfRef.dut__DOT____Vtogcov__req_num = vlSelfRef.__PVT__dut__DOT__req_num;
    }
}

void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__5(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__5\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_pulse 
        = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse;
}

void Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__6(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___act_sequent__TOP__tb_rng__6\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff2_d 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_pulse 
            = ((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2) 
               & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d)));
        if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2) 
             & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d)))) {
            ++(vlSymsp->__Vcoverage[215]);
        }
        if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d) {
            ++(vlSymsp->__Vcoverage[216]);
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2)))) {
            ++(vlSymsp->__Vcoverage[217]);
        }
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff2 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff1 
            = vlSymsp->TOP__tb_rng__rif.__PVT__wr_i;
    } else {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff1 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff2 = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff2_d = 0U;
        vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_pulse = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i)))) {
        ++(vlSymsp->__Vcoverage[220]);
    }
    if (vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) {
        ++(vlSymsp->__Vcoverage[221]);
    }
    ++(vlSymsp->__Vcoverage[222]);
}

void Vtb_rng_tb_rng___nba_sequent__TOP__tb_rng__0(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___nba_sequent__TOP__tb_rng__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num 
        = vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__next_num;
    vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter 
        = vlSelfRef.__Vdly__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
    vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s 
        = vlSelfRef.__Vdly__dut__DOT__rng_sel__DOT__seed_s;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d 
        = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff2_d;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse 
        = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_pulse;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2 
        = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff2;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1 
        = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__wr_ff1;
    vlSelfRef.__PVT__dut__DOT__data_out = vlSelfRef.__Vdly__dut__DOT__data_out;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num 
        = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__req_num;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__cache;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7 = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_7;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6 = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_6;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5 = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_5;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4 = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_4;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3 = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_3;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2 = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_2;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1 = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_1;
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0 = vlSelfRef.__Vdly__dut__DOT__rng_rd__DOT__ram_0;
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_dp__DOT____Vtogcov__next_num))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 35, vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num, vlSelfRef.dut__DOT__rng_dp__DOT____Vtogcov__next_num);
        vlSelfRef.dut__DOT__rng_dp__DOT____Vtogcov__next_num 
            = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__num_i_bar))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 25, vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter, vlSelfRef.dut__DOT____Vtogcov__num_i_bar);
        vlSelfRef.dut__DOT____Vtogcov__num_i_bar = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__seed_bar))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 21, vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s, vlSelfRef.dut__DOT____Vtogcov__seed_bar);
        vlSelfRef.dut__DOT____Vtogcov__seed_bar = vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 182, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2_d);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2_d 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_pulse))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 184, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_pulse);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_pulse 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 180, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 178, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff1);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff1 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__data_out) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__num_to_send_o))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 15, vlSelfRef.__PVT__dut__DOT__data_out, vlSelfRef.dut__DOT____Vtogcov__num_to_send_o);
        vlSelfRef.dut__DOT____Vtogcov__num_to_send_o 
            = vlSelfRef.__PVT__dut__DOT__data_out;
    }
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__1_Vtrigm___PVT__num_to_send_o = 1U;
        }(), vlSymsp->TOP__tb_rng__rif.__PVT__num_to_send_o) 
        = vlSelfRef.__PVT__dut__DOT__data_out;
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__req_num))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 174, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__req_num);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__req_num 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__cache))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 150, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__cache);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__cache 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_7))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 144, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_7);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_7 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_6))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 138, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_6);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_6 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_5))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 132, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_5);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_5 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_4))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 126, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_4);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_4 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_3))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 120, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_3);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_3 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_2))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 114, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_2);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_2 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_1))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 108, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_1);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_1 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_0))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 102, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_0);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_0 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0 = 1U;
        ++(vlSymsp->__Vcoverage[186]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0 = 0U;
        ++(vlSymsp->__Vcoverage[187]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1 = 1U;
        ++(vlSymsp->__Vcoverage[188]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1 = 0U;
        ++(vlSymsp->__Vcoverage[189]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2 = 1U;
        ++(vlSymsp->__Vcoverage[190]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2 = 0U;
        ++(vlSymsp->__Vcoverage[191]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3 = 1U;
        ++(vlSymsp->__Vcoverage[192]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3 = 0U;
        ++(vlSymsp->__Vcoverage[193]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4 = 1U;
        ++(vlSymsp->__Vcoverage[194]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4 = 0U;
        ++(vlSymsp->__Vcoverage[195]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5 = 1U;
        ++(vlSymsp->__Vcoverage[196]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5 = 0U;
        ++(vlSymsp->__Vcoverage[197]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6 = 1U;
        ++(vlSymsp->__Vcoverage[198]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6 = 0U;
        ++(vlSymsp->__Vcoverage[199]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7 = 1U;
        ++(vlSymsp->__Vcoverage[200]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7 = 0U;
        ++(vlSymsp->__Vcoverage[201]);
    }
    vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__decx = 
        ((((((((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0) 
               | (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1)) 
              | (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2)) 
             | (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3)) 
            | (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4)) 
           | (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5)) 
          | (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6)) 
         | (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7));
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7) {
        ++(vlSymsp->__Vcoverage[202]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6) {
        ++(vlSymsp->__Vcoverage[203]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5) {
        ++(vlSymsp->__Vcoverage[204]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4) {
        ++(vlSymsp->__Vcoverage[205]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3) {
        ++(vlSymsp->__Vcoverage[206]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2) {
        ++(vlSymsp->__Vcoverage[207]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1) {
        ++(vlSymsp->__Vcoverage[208]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0) {
        ++(vlSymsp->__Vcoverage[209]);
    }
    if ((1U & ((((((((~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0)) 
                     & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1))) 
                    & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2))) 
                   & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3))) 
                  & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4))) 
                 & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5))) 
                & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6))) 
               & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7))))) {
        ++(vlSymsp->__Vcoverage[210]);
    }
    ++(vlSymsp->__Vcoverage[211]);
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 158, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec0);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec0 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 160, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec1);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec1 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 162, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec2);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec2 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec3))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 164, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec3);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec3 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec4))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 166, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec4);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec4 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec5))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 168, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec5);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec5 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec6))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 170, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec6);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec6 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec7))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 172, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec7);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__dec7 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__decx) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__decx))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 156, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__decx, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__decx);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__decx 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__decx;
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__decx) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state = 0U;
        ++(vlSymsp->__Vcoverage[212]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state = 1U;
        ++(vlSymsp->__Vcoverage[213]);
    }
    ++(vlSymsp->__Vcoverage[214]);
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__next_state))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 176, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__next_state);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__next_state 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state;
    }
}
