// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng___eval_initial__TOP__tb_rng(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___eval_initial__TOP__tb_rng\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    ++(vlSymsp->__Vcoverage[101]);
    ++(vlSymsp->__Vcoverage[236]);
}

VL_ATTR_COLD void Vtb_rng_tb_rng___stl_sequent__TOP__tb_rng__0(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___stl_sequent__TOP__tb_rng__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.__PVT__clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.__PVT__clk;
    }
    if (((IData)(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__rst_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 9, vlSymsp->TOP__tb_rng__rif.__PVT__rst_i, vlSelfRef.dut__DOT____Vtogcov__rst_i);
        vlSelfRef.dut__DOT____Vtogcov__rst_i = vlSymsp->TOP__tb_rng__rif.__PVT__rst_i;
    }
    if (((IData)(vlSymsp->TOP__tb_rng__rif.__PVT__req_num_i) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__req_num_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 11, vlSymsp->TOP__tb_rng__rif.__PVT__req_num_i, vlSelfRef.dut__DOT____Vtogcov__req_num_i);
        vlSelfRef.dut__DOT____Vtogcov__req_num_i = vlSymsp->TOP__tb_rng__rif.__PVT__req_num_i;
    }
    if (((IData)(vlSymsp->TOP__tb_rng__rif.__PVT__wr_i) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__wr_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 13, vlSymsp->TOP__tb_rng__rif.__PVT__wr_i, vlSelfRef.dut__DOT____Vtogcov__wr_i);
        vlSelfRef.dut__DOT____Vtogcov__wr_i = vlSymsp->TOP__tb_rng__rif.__PVT__wr_i;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__data_out) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__num_to_send_o))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 15, vlSelfRef.__PVT__dut__DOT__data_out, vlSelfRef.dut__DOT____Vtogcov__num_to_send_o);
        vlSelfRef.dut__DOT____Vtogcov__num_to_send_o 
            = vlSelfRef.__PVT__dut__DOT__data_out;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__seed_bar))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 21, vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s, vlSelfRef.dut__DOT____Vtogcov__seed_bar);
        vlSelfRef.dut__DOT____Vtogcov__seed_bar = vlSelfRef.__PVT__dut__DOT__rng_sel__DOT__seed_s;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__num_i_bar))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 25, vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter, vlSelfRef.dut__DOT____Vtogcov__num_i_bar);
        vlSelfRef.dut__DOT____Vtogcov__num_i_bar = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__req_num_again))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 31, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num, vlSelfRef.dut__DOT____Vtogcov__req_num_again);
        vlSelfRef.dut__DOT____Vtogcov__req_num_again 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_dp__DOT____Vtogcov__next_num))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 35, vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num, vlSelfRef.dut__DOT__rng_dp__DOT____Vtogcov__next_num);
        vlSelfRef.dut__DOT__rng_dp__DOT____Vtogcov__next_num 
            = vlSelfRef.__PVT__dut__DOT__rng_dp__DOT__next_num;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_0))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 102, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_0);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_0 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_1))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 108, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_1);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_1 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_2))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 114, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_2);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_2 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_3))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 120, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_3);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_3 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_4))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 126, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_4);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_4 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_5))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 132, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_5);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_5 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_6))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 138, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_6);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_6 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_7))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 144, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_7);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__ram_7 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__cache))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 150, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__cache);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__cache 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 176, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff1);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff1 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff1;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 178, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2_d))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 180, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2_d);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2_d 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d;
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_pulse))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 182, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_pulse);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__wr_pulse 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__wr_pulse;
    }
    vlSelfRef.__PVT__dut__DOT__req_num = ((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__req_num) 
                                          | (IData)(vlSymsp->TOP__tb_rng__rif.__PVT__req_num_i));
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__1_Vtrigm___PVT__num_to_send_o = 1U;
        }(), vlSymsp->TOP__tb_rng__rif.__PVT__num_to_send_o) 
        = vlSelfRef.__PVT__dut__DOT__data_out;
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__0_Vtrigm___PVT__clk_i = 1U;
        }(), vlSymsp->TOP__tb_rng__rif.__PVT__clk_i) 
        = vlSelfRef.__PVT__clk;
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_0))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0 = 1U;
        ++(vlSymsp->__Vcoverage[184]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0 = 0U;
        ++(vlSymsp->__Vcoverage[185]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_1))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1 = 1U;
        ++(vlSymsp->__Vcoverage[186]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1 = 0U;
        ++(vlSymsp->__Vcoverage[187]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_2))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2 = 1U;
        ++(vlSymsp->__Vcoverage[188]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2 = 0U;
        ++(vlSymsp->__Vcoverage[189]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_3))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3 = 1U;
        ++(vlSymsp->__Vcoverage[190]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3 = 0U;
        ++(vlSymsp->__Vcoverage[191]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_4))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4 = 1U;
        ++(vlSymsp->__Vcoverage[192]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4 = 0U;
        ++(vlSymsp->__Vcoverage[193]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_5))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5 = 1U;
        ++(vlSymsp->__Vcoverage[194]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5 = 0U;
        ++(vlSymsp->__Vcoverage[195]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_6))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6 = 1U;
        ++(vlSymsp->__Vcoverage[196]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6 = 0U;
        ++(vlSymsp->__Vcoverage[197]);
    }
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__cache) 
         == (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__ram_7))) {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7 = 1U;
        ++(vlSymsp->__Vcoverage[198]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7 = 0U;
        ++(vlSymsp->__Vcoverage[199]);
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
        ++(vlSymsp->__Vcoverage[200]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6) {
        ++(vlSymsp->__Vcoverage[201]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5) {
        ++(vlSymsp->__Vcoverage[202]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4) {
        ++(vlSymsp->__Vcoverage[203]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3) {
        ++(vlSymsp->__Vcoverage[204]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2) {
        ++(vlSymsp->__Vcoverage[205]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1) {
        ++(vlSymsp->__Vcoverage[206]);
    }
    if (vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0) {
        ++(vlSymsp->__Vcoverage[207]);
    }
    if ((1U & ((((((((~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec0)) 
                     & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec1))) 
                    & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec2))) 
                   & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec3))) 
                  & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec4))) 
                 & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec5))) 
                & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec6))) 
               & (~ (IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__dec7))))) {
        ++(vlSymsp->__Vcoverage[208]);
    }
    ++(vlSymsp->__Vcoverage[209]);
    if (((IData)(vlSelfRef.__PVT__dut__DOT__req_num) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__req_num))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 33, vlSelfRef.__PVT__dut__DOT__req_num, vlSelfRef.dut__DOT____Vtogcov__req_num);
        vlSelfRef.dut__DOT____Vtogcov__req_num = vlSelfRef.__PVT__dut__DOT__req_num;
    }
    if (((IData)(vlSymsp->TOP__tb_rng__rif.__PVT__clk_i) 
         ^ (IData)(vlSelfRef.dut__DOT____Vtogcov__clk_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 7, vlSymsp->TOP__tb_rng__rif.__PVT__clk_i, vlSelfRef.dut__DOT____Vtogcov__clk_i);
        vlSelfRef.dut__DOT____Vtogcov__clk_i = vlSymsp->TOP__tb_rng__rif.__PVT__clk_i;
    }
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
        ++(vlSymsp->__Vcoverage[210]);
    } else {
        vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state = 1U;
        ++(vlSymsp->__Vcoverage[211]);
    }
    ++(vlSymsp->__Vcoverage[212]);
    if (((IData)(vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state) 
         ^ (IData)(vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__next_state))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 174, vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state, vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__next_state);
        vlSelfRef.dut__DOT__rng_rd__DOT____Vtogcov__next_state 
            = vlSelfRef.__PVT__dut__DOT__rng_rd__DOT__next_state;
    }
}

VL_ATTR_COLD void Vtb_rng_tb_rng___ctor_var_reset(Vtb_rng_tb_rng* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__Vtogcov__clk = 0;
    vlSelf->__PVT__dut__DOT__req_num = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18147336848129975744ull);
    vlSelf->__PVT__dut__DOT__data_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3702778893979843113ull);
    vlSelf->dut__DOT____Vtogcov__clk_i = 0;
    vlSelf->dut__DOT____Vtogcov__rst_i = 0;
    vlSelf->dut__DOT____Vtogcov__req_num_i = 0;
    vlSelf->dut__DOT____Vtogcov__wr_i = 0;
    vlSelf->dut__DOT____Vtogcov__num_to_send_o = 0;
    vlSelf->dut__DOT____Vtogcov__seed_bar = 0;
    vlSelf->dut__DOT____Vtogcov__num_i_bar = 0;
    vlSelf->dut__DOT____Vtogcov__req_num_again = 0;
    vlSelf->dut__DOT____Vtogcov__req_num = 0;
    vlSelf->__PVT__dut__DOT__rng_dp__DOT__next_num = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16026786268970531521ull);
    vlSelf->dut__DOT__rng_dp__DOT____Vtogcov__next_num = 0;
    vlSelf->__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1837988623992842404ull);
    vlSelf->__PVT__dut__DOT__rng_sel__DOT__seed_s = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16061996729762142336ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__ram_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15865891506584914841ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__ram_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18427321220714354601ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__ram_2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15016154307297205024ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__ram_3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1296752407901370846ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__ram_4 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2472001084814454001ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__ram_5 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12244439641187524554ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__ram_6 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2788731125721570054ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__ram_7 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 866193113527900487ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__cache = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 926734450626688011ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__decx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3766517256209111336ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__dec0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16311738657840147279ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__dec1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6733049682956599757ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__dec2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10804469309503746860ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__dec3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3227129094504746458ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__dec4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 945877637966707002ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__dec5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7120070453460761451ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__dec6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9084900211557665534ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__dec7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6308012148340992197ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__req_num = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4255741331530786180ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14988073789589819909ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__wr_ff1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 980045115877778500ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__wr_ff2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14031499706283943529ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17445170103545808396ull);
    vlSelf->__PVT__dut__DOT__rng_rd__DOT__wr_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5118978496984234436ull);
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__ram_0 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__ram_1 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__ram_2 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__ram_3 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__ram_4 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__ram_5 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__ram_6 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__ram_7 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__cache = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__decx = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__dec0 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__dec1 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__dec2 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__dec3 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__dec4 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__dec5 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__dec6 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__dec7 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__next_state = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__wr_ff1 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2 = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2_d = 0;
    vlSelf->dut__DOT__rng_rd__DOT____Vtogcov__wr_pulse = 0;
    vlSelf->__Vdly__dut__DOT__rng_dp__DOT__next_num = 0;
    vlSelf->__Vdly__dut__DOT__rng_dp__DOT__inst__DOT__num_counter = 0;
    vlSelf->__Vdly__dut__DOT__rng_sel__DOT__seed_s = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__wr_ff2_d = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__wr_pulse = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__wr_ff2 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__wr_ff1 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__cache = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__ram_7 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__req_num = 0;
    vlSelf->__Vdly__dut__DOT__data_out = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__ram_6 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__ram_5 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__ram_4 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__ram_3 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__ram_2 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__ram_1 = 0;
    vlSelf->__Vdly__dut__DOT__rng_rd__DOT__ram_0 = 0;
}

VL_ATTR_COLD void Vtb_rng_tb_rng___configure_coverage(Vtb_rng_tb_rng* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_rng_tb_rng___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "../UVM/../UVM/testbench.sv", 139, 11, "", "v_toggle/tb_rng", "clk");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../UVM/../UVM/testbench.sv", 153, 40, "", "v_expr/tb_rng", "(clk==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../UVM/../UVM/testbench.sv", 153, 40, "", "v_expr/tb_rng", "(clk==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../UVM/../UVM/testbench.sv", 150, 9, "", "v_line/tb_rng", "block", "150,153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../UVM/../UVM/testbench.sv", 145, 5, "", "v_line/tb_rng", "block", "145,148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../UVM/../UVM/testbench.sv", 167, 5, "", "v_line/tb_rng", "block", "167,170,174,178,182,186,190,194-195,199,203");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[7]), first, "../UVM/../src/rng_top.v", 33, 11, ".dut", "v_toggle/rng_top", "clk_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[9]), first, "../UVM/../src/rng_top.v", 35, 11, ".dut", "v_toggle/rng_top", "rst_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[11]), first, "../UVM/../src/rng_top.v", 36, 11, ".dut", "v_toggle/rng_top", "req_num_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[13]), first, "../UVM/../src/rng_top.v", 37, 11, ".dut", "v_toggle/rng_top", "wr_i");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[15]), first, "../UVM/../src/rng_top.v", 38, 24, ".dut", "v_toggle/rng_top", "num_to_send_o");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[21]), first, "../UVM/../src/rng_top.v", 42, 16, ".dut", "v_toggle/rng_top", "seed_bar");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[25]), first, "../UVM/../src/rng_top.v", 44, 22, ".dut", "v_toggle/rng_top", "num_i_bar");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[31]), first, "../UVM/../src/rng_top.v", 46, 10, ".dut", "v_toggle/rng_top", "req_num_again");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[33]), first, "../UVM/../src/rng_top.v", 48, 10, ".dut", "v_toggle/rng_top", "req_num");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[15]), first, "../UVM/../src/rng_top.v", 50, 22, ".dut", "v_toggle/rng_top", "data_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[7]), first, "../UVM/../src/rng_data_path.v", 34, 11, ".dut.rng_dp", "v_toggle/rng_data_path__pi1", "clk_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[9]), first, "../UVM/../src/rng_data_path.v", 35, 11, ".dut.rng_dp", "v_toggle/rng_data_path__pi1", "rst_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[33]), first, "../UVM/../src/rng_data_path.v", 36, 11, ".dut.rng_dp", "v_toggle/rng_data_path__pi1", "req_num_i");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[21]), first, "../UVM/../src/rng_data_path.v", 37, 17, ".dut.rng_dp", "v_toggle/rng_data_path__pi1", "seed_sel_i");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[25]), first, "../UVM/../src/rng_data_path.v", 38, 24, ".dut.rng_dp", "v_toggle/rng_data_path__pi1", "num_to_send_o");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[25]), first, "../UVM/../src/rng_data_path.v", 47, 18, ".dut.rng_dp", "v_toggle/rng_data_path__pi1", "num_to_send");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[35]), first, "../UVM/../src/rng_data_path.v", 56, 11, ".dut.rng_dp", "v_toggle/rng_data_path__pi1", "next_num");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../UVM/../src/rng_data_path.v", 74, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../UVM/../src/rng_data_path.v", 75, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../UVM/../src/rng_data_path.v", 76, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../UVM/../src/rng_data_path.v", 77, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../UVM/../src/rng_data_path.v", 78, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../UVM/../src/rng_data_path.v", 79, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../UVM/../src/rng_data_path.v", 80, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../UVM/../src/rng_data_path.v", 81, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../UVM/../src/rng_data_path.v", 82, 21, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../UVM/../src/rng_data_path.v", 72, 22, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "72-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../UVM/../src/rng_data_path.v", 91, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../UVM/../src/rng_data_path.v", 92, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../UVM/../src/rng_data_path.v", 93, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../UVM/../src/rng_data_path.v", 94, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../UVM/../src/rng_data_path.v", 95, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../UVM/../src/rng_data_path.v", 96, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../UVM/../src/rng_data_path.v", 97, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../UVM/../src/rng_data_path.v", 98, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../UVM/../src/rng_data_path.v", 99, 21, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../UVM/../src/rng_data_path.v", 89, 22, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../UVM/../src/rng_data_path.v", 108, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../UVM/../src/rng_data_path.v", 109, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../UVM/../src/rng_data_path.v", 110, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../UVM/../src/rng_data_path.v", 111, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../UVM/../src/rng_data_path.v", 112, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../UVM/../src/rng_data_path.v", 113, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../UVM/../src/rng_data_path.v", 114, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../UVM/../src/rng_data_path.v", 115, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../UVM/../src/rng_data_path.v", 116, 21, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../UVM/../src/rng_data_path.v", 106, 22, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "106-107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../UVM/../src/rng_data_path.v", 125, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../UVM/../src/rng_data_path.v", 126, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../UVM/../src/rng_data_path.v", 127, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../UVM/../src/rng_data_path.v", 128, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../UVM/../src/rng_data_path.v", 129, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../UVM/../src/rng_data_path.v", 130, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../UVM/../src/rng_data_path.v", 131, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../UVM/../src/rng_data_path.v", 132, 25, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../UVM/../src/rng_data_path.v", 133, 21, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../UVM/../src/rng_data_path.v", 123, 13, ".dut.rng_dp", "v_line/rng_data_path__pi1", "case", "123-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../UVM/../src/rng_data_path.v", 64, 22, ".dut.rng_dp", "v_line/rng_data_path__pi1", "block", "64,66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../UVM/../src/rng_data_path.v", 148, 9, ".dut.rng_dp", "v_line/rng_data_path__pi1", "if", "148-150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../UVM/../src/rng_data_path.v", 148, 10, ".dut.rng_dp", "v_line/rng_data_path__pi1", "else", "153-154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../UVM/../src/rng_data_path.v", 143, 9, ".dut.rng_dp", "v_line/rng_data_path__pi1", "elsif", "143-145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../UVM/../src/rng_data_path.v", 143, 12, ".dut.rng_dp", "v_expr/rng_data_path__pi1", "(rst_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../UVM/../src/rng_data_path.v", 143, 12, ".dut.rng_dp", "v_expr/rng_data_path__pi1", "(rst_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../UVM/../src/rng_data_path.v", 141, 1, ".dut.rng_dp", "v_line/rng_data_path__pi1", "block", "141-142");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[7]), first, "../UVM/../src/rng_data_path_counter.v", 34, 23, ".dut.rng_dp.inst", "v_toggle/rng_data_path_counter", "clk_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[9]), first, "../UVM/../src/rng_data_path_counter.v", 35, 23, ".dut.rng_dp.inst", "v_toggle/rng_data_path_counter", "rst_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[33]), first, "../UVM/../src/rng_data_path_counter.v", 36, 23, ".dut.rng_dp.inst", "v_toggle/rng_data_path_counter", "req_num_i");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[25]), first, "../UVM/../src/rng_data_path_counter.v", 37, 29, ".dut.rng_dp.inst", "v_toggle/rng_data_path_counter", "next_num_o");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[25]), first, "../UVM/../src/rng_data_path_counter.v", 40, 17, ".dut.rng_dp.inst", "v_toggle/rng_data_path_counter", "num_counter");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../UVM/../src/rng_data_path_counter.v", 52, 17, ".dut.rng_dp.inst", "v_branch/rng_data_path_counter", "if", "52-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../UVM/../src/rng_data_path_counter.v", 52, 18, ".dut.rng_dp.inst", "v_branch/rng_data_path_counter", "else", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../UVM/../src/rng_data_path_counter.v", 50, 9, ".dut.rng_dp.inst", "v_line/rng_data_path_counter", "if", "50-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../UVM/../src/rng_data_path_counter.v", 50, 10, ".dut.rng_dp.inst", "v_line/rng_data_path_counter", "else", "62-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../UVM/../src/rng_data_path_counter.v", 46, 5, ".dut.rng_dp.inst", "v_line/rng_data_path_counter", "elsif", "46-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../UVM/../src/rng_data_path_counter.v", 46, 8, ".dut.rng_dp.inst", "v_expr/rng_data_path_counter", "(rst_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../UVM/../src/rng_data_path_counter.v", 46, 8, ".dut.rng_dp.inst", "v_expr/rng_data_path_counter", "(rst_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../UVM/../src/rng_data_path_counter.v", 44, 1, ".dut.rng_dp.inst", "v_line/rng_data_path_counter", "block", "44-45");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[7]), first, "../UVM/../src/rng_selector.v", 34, 11, ".dut.rng_sel", "v_toggle/rng_selector__T47_TB2_SB1f_TC4", "clk_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[9]), first, "../UVM/../src/rng_selector.v", 35, 11, ".dut.rng_sel", "v_toggle/rng_selector__T47_TB2_SB1f_TC4", "rst_i");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[21]), first, "../UVM/../src/rng_selector.v", 36, 22, ".dut.rng_sel", "v_toggle/rng_selector__T47_TB2_SB1f_TC4", "seed_sel_o");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[21]), first, "../UVM/../src/rng_selector.v", 39, 11, ".dut.rng_sel", "v_toggle/rng_selector__T47_TB2_SB1f_TC4", "seed_s");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../UVM/../src/rng_selector.v", 48, 9, ".dut.rng_sel", "v_branch/rng_selector__T47_TB2_SB1f_TC4", "if", "48-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../UVM/../src/rng_selector.v", 48, 10, ".dut.rng_sel", "v_branch/rng_selector__T47_TB2_SB1f_TC4", "else", "53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../UVM/../src/rng_selector.v", 48, 12, ".dut.rng_sel", "v_expr/rng_selector__T47_TB2_SB1f_TC4", "(rst_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../UVM/../src/rng_selector.v", 48, 12, ".dut.rng_sel", "v_expr/rng_selector__T47_TB2_SB1f_TC4", "(rst_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../UVM/../src/rng_selector.v", 46, 1, ".dut.rng_sel", "v_line/rng_selector__T47_TB2_SB1f_TC4", "block", "46-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../UVM/../src/rng_selector.v", 58, 1, ".dut.rng_sel", "v_line/rng_selector__T47_TB2_SB1f_TC4", "block", "58-60");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[7]), first, "../UVM/../src/rng_hs_dup_detector.v", 14, 29, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "clk_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[9]), first, "../UVM/../src/rng_hs_dup_detector.v", 15, 29, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "rst_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[33]), first, "../UVM/../src/rng_hs_dup_detector.v", 16, 29, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "req_num_i");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[25]), first, "../UVM/../src/rng_hs_dup_detector.v", 17, 29, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "data_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[13]), first, "../UVM/../src/rng_hs_dup_detector.v", 18, 29, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "wr_i");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[15]), first, "../UVM/../src/rng_hs_dup_detector.v", 20, 29, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "data_o");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[31]), first, "../UVM/../src/rng_hs_dup_detector.v", 21, 29, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "req_new_num_o");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[102]), first, "../UVM/../src/rng_hs_dup_detector.v", 29, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "ram_0");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[108]), first, "../UVM/../src/rng_hs_dup_detector.v", 30, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "ram_1");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[114]), first, "../UVM/../src/rng_hs_dup_detector.v", 31, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "ram_2");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[120]), first, "../UVM/../src/rng_hs_dup_detector.v", 32, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "ram_3");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[126]), first, "../UVM/../src/rng_hs_dup_detector.v", 33, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "ram_4");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[132]), first, "../UVM/../src/rng_hs_dup_detector.v", 34, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "ram_5");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[138]), first, "../UVM/../src/rng_hs_dup_detector.v", 35, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "ram_6");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[144]), first, "../UVM/../src/rng_hs_dup_detector.v", 36, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "ram_7");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[150]), first, "../UVM/../src/rng_hs_dup_detector.v", 39, 17, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "cache");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[156]), first, "../UVM/../src/rng_hs_dup_detector.v", 42, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "decx");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[158]), first, "../UVM/../src/rng_hs_dup_detector.v", 43, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "dec0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[160]), first, "../UVM/../src/rng_hs_dup_detector.v", 44, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "dec1");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[162]), first, "../UVM/../src/rng_hs_dup_detector.v", 45, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "dec2");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[164]), first, "../UVM/../src/rng_hs_dup_detector.v", 46, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "dec3");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[166]), first, "../UVM/../src/rng_hs_dup_detector.v", 47, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "dec4");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[168]), first, "../UVM/../src/rng_hs_dup_detector.v", 48, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "dec5");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[170]), first, "../UVM/../src/rng_hs_dup_detector.v", 49, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "dec6");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[172]), first, "../UVM/../src/rng_hs_dup_detector.v", 50, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "dec7");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[31]), first, "../UVM/../src/rng_hs_dup_detector.v", 53, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "req_num");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[174]), first, "../UVM/../src/rng_hs_dup_detector.v", 56, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "next_state");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[176]), first, "../UVM/../src/rng_hs_dup_detector.v", 59, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "wr_ff1");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[178]), first, "../UVM/../src/rng_hs_dup_detector.v", 59, 13, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "wr_ff2");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[180]), first, "../UVM/../src/rng_hs_dup_detector.v", 59, 21, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "wr_ff2_d");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[182]), first, "../UVM/../src/rng_hs_dup_detector.v", 60, 5, ".dut.rng_rd", "v_toggle/rng_hs_dup_detector__pi2", "wr_pulse");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../UVM/../src/rng_hs_dup_detector.v", 66, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "66-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../UVM/../src/rng_hs_dup_detector.v", 66, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../UVM/../src/rng_hs_dup_detector.v", 76, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "76-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../UVM/../src/rng_hs_dup_detector.v", 76, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../UVM/../src/rng_hs_dup_detector.v", 86, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "86-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../UVM/../src/rng_hs_dup_detector.v", 86, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "91-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../UVM/../src/rng_hs_dup_detector.v", 96, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "96-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../UVM/../src/rng_hs_dup_detector.v", 96, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../UVM/../src/rng_hs_dup_detector.v", 106, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "106-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../UVM/../src/rng_hs_dup_detector.v", 106, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "111-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../UVM/../src/rng_hs_dup_detector.v", 116, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "116-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../UVM/../src/rng_hs_dup_detector.v", 116, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "121-122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../UVM/../src/rng_hs_dup_detector.v", 126, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "126-128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../UVM/../src/rng_hs_dup_detector.v", 126, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../UVM/../src/rng_hs_dup_detector.v", 136, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "136-138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../UVM/../src/rng_hs_dup_detector.v", 136, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "141-142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec7==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec6==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec5==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec4==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec3==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec2==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec1==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec0==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../UVM/../src/rng_hs_dup_detector.v", 146, 66, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(dec0==0 && dec1==0 && dec2==0 && dec3==0 && dec4==0 && dec5==0 && dec6==0 && dec7==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../UVM/../src/rng_hs_dup_detector.v", 63, 1, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "block", "63-64,146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../UVM/../src/rng_hs_dup_detector.v", 152, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "152-154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../UVM/../src/rng_hs_dup_detector.v", 152, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "157-158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../UVM/../src/rng_hs_dup_detector.v", 150, 1, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "block", "150-151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../UVM/../src/rng_hs_dup_detector.v", 177, 29, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(wr_ff2==1 && wr_ff2_d==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../UVM/../src/rng_hs_dup_detector.v", 177, 29, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(wr_ff2_d==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../UVM/../src/rng_hs_dup_detector.v", 177, 29, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(wr_ff2==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../UVM/../src/rng_hs_dup_detector.v", 165, 5, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "if", "165-170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../UVM/../src/rng_hs_dup_detector.v", 165, 6, ".dut.rng_rd", "v_branch/rng_hs_dup_detector__pi2", "else", "171-174,177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../UVM/../src/rng_hs_dup_detector.v", 165, 9, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(rst_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../UVM/../src/rng_hs_dup_detector.v", 165, 9, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(rst_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../UVM/../src/rng_hs_dup_detector.v", 163, 1, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "block", "163-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../UVM/../src/rng_hs_dup_detector.v", 189, 9, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "if", "189-191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../UVM/../src/rng_hs_dup_detector.v", 189, 10, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "else", "194-195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../UVM/../src/rng_hs_dup_detector.v", 183, 5, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "elsif", "183-184,186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../UVM/../src/rng_hs_dup_detector.v", 183, 8, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(rst_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../UVM/../src/rng_hs_dup_detector.v", 183, 8, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(rst_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../UVM/../src/rng_hs_dup_detector.v", 181, 1, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "block", "181-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../UVM/../src/rng_hs_dup_detector.v", 221, 9, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "if", "221-222,224-231,234,237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../UVM/../src/rng_hs_dup_detector.v", 221, 10, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "else", "240,242-249,252,255");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../UVM/../src/rng_hs_dup_detector.v", 221, 43, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "((next_state == approve_number)==1 && wr_pulse==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../UVM/../src/rng_hs_dup_detector.v", 221, 43, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(wr_pulse==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../UVM/../src/rng_hs_dup_detector.v", 221, 43, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "((next_state == approve_number)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../UVM/../src/rng_hs_dup_detector.v", 202, 5, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "elsif", "202-203,205-212,215,218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../UVM/../src/rng_hs_dup_detector.v", 202, 8, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(rst_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../UVM/../src/rng_hs_dup_detector.v", 202, 8, ".dut.rng_rd", "v_expr/rng_hs_dup_detector__pi2", "(rst_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../UVM/../src/rng_hs_dup_detector.v", 200, 1, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "block", "200-201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../UVM/../src/rng_hs_dup_detector.v", 259, 1, ".dut.rng_rd", "v_line/rng_hs_dup_detector__pi2", "block", "259-261");
}
