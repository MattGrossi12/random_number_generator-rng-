// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_rng__Syms.h"


VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__tb_rng__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__tb_rng__03a__03arng_scoreboard__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_component__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_root__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_rng", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_rng___024root__trace_init_sub__TOP__tb_rng__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "tb_rng::rng_scoreboard__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_rng___024root__trace_init_sub__TOP__tb_rng__03a__03arng_scoreboard__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uvm_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uvm_pkg::uvm_component__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_component__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uvm_pkg::uvm_phase__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uvm_pkg::uvm_report_catcher__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uvm_pkg::uvm_root__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_root__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__tb_rng__rif__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__tb_rng__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__tb_rng__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+32,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"RNG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"T_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"T_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"SEED_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"SD_T_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"T_COUNT_WID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"req_num_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"num_to_send_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"seed_bar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"num_i_bar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"req_num_again",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"req_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_PUSH_PREFIX(tracep, "rng_dp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"T_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"T_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"SEED_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"SD_T_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"T_COUNT_WID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"req_num_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"seed_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"num_to_send_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"SEND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"num_to_send",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"next_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"seed1_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"seed2_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"seed3_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"seed4_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"seed1_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"seed1_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"seed1_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"seed1_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"seed1_04",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"seed1_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"seed1_06",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"seed1_07",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"position_s1_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"position_s1_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"position_s1_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"position_s1_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"position_s1_04",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"position_s1_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"position_s1_06",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"position_s1_07",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"position_s2_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"position_s2_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"position_s2_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"position_s2_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"position_s2_04",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"position_s2_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"position_s2_06",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"position_s2_07",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"position_s3_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"position_s3_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"position_s3_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"position_s3_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"position_s3_04",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"position_s3_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"position_s3_06",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"position_s3_07",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"position_s4_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"position_s4_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"position_s4_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"position_s4_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"position_s4_04",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"position_s4_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"position_s4_06",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"position_s4_07",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_PUSH_PREFIX(tracep, "inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"T_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"T_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"SEED_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"SD_T_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"T_COUNT_WID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"req_num_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"next_num_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"num_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rng_rd", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"T_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"T_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"SEED_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"SD_T_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"T_COUNT_WID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"req_num_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"req_new_num_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"request_new_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"approve_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"ram_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"ram_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"ram_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"ram_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"ram_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"ram_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"ram_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"ram_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"decx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"dec0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"dec1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"dec2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+20,0,"dec3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"dec4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"dec5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"dec6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"dec7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"req_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"wr_ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"wr_ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"wr_ff2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"wr_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rng_sel", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"T_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"T_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"SEED_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"SD_T_TOT_NUMB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"COUNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"T_COUNT_WID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"seed_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"seed_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"seed_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"seed_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"seed_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"seed_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rif", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    Vtb_rng___024root__trace_init_sub__TOP__tb_rng__rif__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+84,0,"UVM_HDL_MAX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"uvm_re_match__Vstatic__e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"uvm_re_match__Vstatic__es",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"uvm_re_match__Vstatic__s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"uvm_re_match__Vstatic__ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"UVM_STREAMBITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"UVM_FIELD_FLAG_RESERVED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"UVM_RADIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"UVM_RECURSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"UVM_MACRO_NUMFLAGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"UVM_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"UVM_ALL_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"UVM_FLAGS_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"UVM_FLAGS_OFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"UVM_COPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"UVM_NOCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"UVM_COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"UVM_NOCOMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"UVM_PRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"UVM_NOPRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"UVM_RECORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"UVM_NORECORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"UVM_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"UVM_NOPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"UVM_UNPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"UVM_NOUNPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"UVM_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"UVM_NOSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"UVM_NODEFPRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"UVM_MACRO_EXTRAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"UVM_FLAGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"UVM_CHECK_FIELDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"UVM_END_DATA_EXTRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"UVM_START_FUNCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"UVM_END_FUNCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, 27,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"UVM_STDIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"UVM_STDOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"UVM_STDERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"m_uvm_core_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"UVM_CORE_POST_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"uvm_global_random_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"uvm_instance_scope__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"uvm_instance_scope__Vstatic__pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"UVM_STR_CRC_POLYNOMIAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"uvm_oneway_hash__Vstatic__msb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"uvm_oneway_hash__Vstatic__current_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"uvm_oneway_hash__Vstatic__crc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"uvm_leaf_scope__Vstatic__bracket_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"uvm_leaf_scope__Vstatic__pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"uvm_leaf_scope__Vstatic__bmatches",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"uvm_get_array_index_int__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"uvm_get_array_index_string__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"UVM_LINE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"UVM_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+120,0,"UVM_SMALL_STRING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+121,0,"UVM_LARGE_STRING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"uvm_wait_for_nba_region__Vstatic__nba",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"uvm_wait_for_nba_region__Vstatic__next_nba",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"UVM_UNBOUNDED_CONNECTIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__tb_rng__rif__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__tb_rng__rif__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+61,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"rst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"req_num_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"wr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"num_to_send_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_QUAD(tracep,c+54,0,"clk_toggle_tu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::TIME, 63,0);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__tb_rng__03a__03arng_scoreboard__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__tb_rng__03a__03arng_scoreboard__Vclpkg__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_QUAD(tracep,c+122,0,"EXPECTED_REQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LONGINT, 63,0);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+56,0,"process_all_report_catchers__Vstatic__in_catcher",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+2,0,"m_print_successors__Vstatic__level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_component__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_component__Vclpkg__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+57,0,"m_set_cl_verb__Vstatic__first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"m_set_cl_action__Vstatic__initialized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"m_set_cl_sev__Vstatic__initialized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_root__Vclpkg__0(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_sub__TOP__uvm_pkg__03a__03auvm_root__Vclpkg__0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+60,0,"set_timeout__Vstatic__m_uvm_timeout_overridable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_init_top(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_init_top\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_rng___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_rng___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_rng___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_rng___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_rng___024root__trace_register(Vtb_rng___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_register\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_rng___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_rng___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_rng___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_rng___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_const_0_sub_0(Vtb_rng___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_rng___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_const_0\n"); );
    // Body
    Vtb_rng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rng___024root*>(voidSelf);
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_rng___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_const_0_sub_0(Vtb_rng___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_const_0_sub_0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+61,(3U),32);
    bufp->fullIData(oldp+62,(0x00000048U),32);
    bufp->fullIData(oldp+63,(0x00000047U),32);
    bufp->fullIData(oldp+64,(3U),32);
    bufp->fullIData(oldp+65,(2U),32);
    bufp->fullIData(oldp+66,(0x00000020U),32);
    bufp->fullIData(oldp+67,(0x0000001fU),32);
    bufp->fullIData(oldp+68,(5U),32);
    bufp->fullIData(oldp+69,(4U),32);
    bufp->fullIData(oldp+70,(0U),32);
    bufp->fullIData(oldp+71,(1U),32);
    bufp->fullCData(oldp+72,(0U),2);
    bufp->fullCData(oldp+73,(1U),2);
    bufp->fullCData(oldp+74,(2U),2);
    bufp->fullCData(oldp+75,(3U),2);
    bufp->fullCData(oldp+76,(0U),3);
    bufp->fullCData(oldp+77,(1U),3);
    bufp->fullCData(oldp+78,(2U),3);
    bufp->fullCData(oldp+79,(3U),3);
    bufp->fullCData(oldp+80,(4U),3);
    bufp->fullCData(oldp+81,(5U),3);
    bufp->fullCData(oldp+82,(6U),3);
    bufp->fullCData(oldp+83,(7U),3);
    bufp->fullIData(oldp+84,(0x00000400U),32);
    bufp->fullIData(oldp+85,(0x00001000U),32);
    bufp->fullIData(oldp+86,(0x0000001cU),32);
    bufp->fullIData(oldp+87,(0x0f000000U),32);
    bufp->fullIData(oldp+88,(0x00070000U),28);
    bufp->fullIData(oldp+89,(0x00000013U),28);
    bufp->fullIData(oldp+90,(0x00000555U),28);
    bufp->fullIData(oldp+91,(0x00000155U),28);
    bufp->fullIData(oldp+92,(0U),28);
    bufp->fullIData(oldp+93,(1U),28);
    bufp->fullIData(oldp+94,(2U),28);
    bufp->fullIData(oldp+95,(4U),28);
    bufp->fullIData(oldp+96,(8U),28);
    bufp->fullIData(oldp+97,(0x00000010U),28);
    bufp->fullIData(oldp+98,(0x00000020U),28);
    bufp->fullIData(oldp+99,(0x00000040U),28);
    bufp->fullIData(oldp+100,(0x00000080U),28);
    bufp->fullIData(oldp+101,(0x00000100U),28);
    bufp->fullIData(oldp+102,(0x00000200U),28);
    bufp->fullIData(oldp+103,(0x00000400U),28);
    bufp->fullIData(oldp+104,(0x00000800U),28);
    bufp->fullIData(oldp+105,(0x00001000U),28);
    bufp->fullIData(oldp+106,(0x00008000U),28);
    bufp->fullIData(oldp+107,(0x00080000U),28);
    bufp->fullIData(oldp+108,(0x00080001U),28);
    bufp->fullIData(oldp+109,(0x00080002U),28);
    bufp->fullIData(oldp+110,(0x00080003U),28);
    bufp->fullIData(oldp+111,(0x00080004U),28);
    bufp->fullIData(oldp+112,(0x00080005U),28);
    bufp->fullIData(oldp+113,(0x80000000U),32);
    bufp->fullIData(oldp+114,(0x80000001U),32);
    bufp->fullIData(oldp+115,(0x80000002U),32);
    bufp->fullIData(oldp+116,(3U),32);
    bufp->fullIData(oldp+117,(0x04c11db6U),32);
    bufp->fullIData(oldp+118,(0U),32);
    bufp->fullIData(oldp+119,(0x00000078U),32);
    bufp->fullIData(oldp+120,(0x000003bfU),32);
    bufp->fullIData(oldp+121,(0x0001c1ffU),32);
    bufp->fullQData(oldp+122,(0x0000000000000018ULL),64);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_full_0_sub_0(Vtb_rng___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_rng___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_full_0\n"); );
    // Body
    Vtb_rng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rng___024root*>(voidSelf);
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_rng___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_rng___024root__trace_full_0_sub_0(Vtb_rng___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_full_0_sub_0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed),32);
    bufp->fullIData(oldp+1,(vlSymsp->TOP__uvm_pkg.__PVT__UVM_UNBOUNDED_CONNECTIONS),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level),32);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__data_out),3);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_sel__DOT__seed_s),2);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter),3);
    bufp->fullCData(oldp+6,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_dp__DOT__next_num),3);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_0),3);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_1),3);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_2),3);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_3),3);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_4),3);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_5),3);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_6),3);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_7),3);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__cache),3);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__decx));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec0));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec1));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec2));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec3));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec4));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec5));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec6));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec7));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__req_num));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__next_state));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__wr_ff1));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__wr_ff2));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__wr_pulse));
    bufp->fullCData(oldp+31,(vlSymsp->TOP__tb_rng__rif.__PVT__num_to_send_o),3);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__tb_rng.__PVT__clk));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__tb_rng__rif.__PVT__clk_i));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__tb_rng__rif.__PVT__req_num_i));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__tb_rng__rif.__PVT__wr_i));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__req_num_again));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__req_num));
    bufp->fullIData(oldp+39,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es),32);
    bufp->fullIData(oldp+41,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s),32);
    bufp->fullIData(oldp+42,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss),32);
    bufp->fullIData(oldp+43,(vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state),32);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c),8);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos),32);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb));
    bufp->fullCData(oldp+47,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte),8);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1),32);
    bufp->fullCData(oldp+49,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match),8);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),32);
    bufp->fullIData(oldp+51,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches),32);
    bufp->fullIData(oldp+52,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba),32);
    bufp->fullQData(oldp+54,(vlSymsp->TOP__tb_rng__rif.__PVT__clk_toggle_tu),64);
    bufp->fullBit(oldp+56,(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__process_all_report_catchers__Vstatic__in_catcher));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable));
}
