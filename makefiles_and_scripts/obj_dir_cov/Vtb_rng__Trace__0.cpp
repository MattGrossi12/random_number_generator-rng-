// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_rng__Syms.h"


void Vtb_rng___024root__trace_chg_0_sub_0(Vtb_rng___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_rng___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_chg_0\n"); );
    // Body
    Vtb_rng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rng___024root*>(voidSelf);
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_rng___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_rng___024root__trace_chg_0_sub_0(Vtb_rng___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_chg_0_sub_0\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__uvm_pkg.__PVT__UVM_UNBOUNDED_CONNECTIONS),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+3,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__data_out),3);
        bufp->chgCData(oldp+4,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_sel__DOT__seed_s),2);
        bufp->chgCData(oldp+5,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter),3);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__req_num));
        bufp->chgCData(oldp+7,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_dp__DOT__next_num),3);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_0),3);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_1),3);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_2),3);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_3),3);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_4),3);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_5),3);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_6),3);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__ram_7),3);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__cache),3);
        bufp->chgBit(oldp+17,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__decx));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec0));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec1));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec2));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec3));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec4));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec5));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec6));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__dec7));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__next_state));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__wr_ff1));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__wr_ff2));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__wr_ff2_d));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__rng_rd__DOT__wr_pulse));
        bufp->chgCData(oldp+31,(vlSymsp->TOP__tb_rng__rif.__PVT__num_to_send_o),3);
    }
    bufp->chgBit(oldp+32,(vlSymsp->TOP__tb_rng.__PVT__clk));
    bufp->chgBit(oldp+33,(vlSymsp->TOP__tb_rng__rif.__PVT__clk_i));
    bufp->chgBit(oldp+34,(vlSymsp->TOP__tb_rng__rif.__PVT__rst_i));
    bufp->chgBit(oldp+35,(vlSymsp->TOP__tb_rng__rif.__PVT__req_num_i));
    bufp->chgBit(oldp+36,(vlSymsp->TOP__tb_rng__rif.__PVT__wr_i));
    bufp->chgBit(oldp+37,(vlSymsp->TOP__tb_rng.__PVT__dut__DOT__req_num));
    bufp->chgIData(oldp+38,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e),32);
    bufp->chgIData(oldp+39,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es),32);
    bufp->chgIData(oldp+40,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s),32);
    bufp->chgIData(oldp+41,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss),32);
    bufp->chgIData(oldp+42,(vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state),32);
    bufp->chgCData(oldp+43,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c),8);
    bufp->chgIData(oldp+44,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos),32);
    bufp->chgBit(oldp+45,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb));
    bufp->chgCData(oldp+46,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte),8);
    bufp->chgIData(oldp+47,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1),32);
    bufp->chgCData(oldp+48,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match),8);
    bufp->chgIData(oldp+49,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),32);
    bufp->chgIData(oldp+50,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches),32);
    bufp->chgIData(oldp+51,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba),32);
    bufp->chgIData(oldp+52,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba),32);
    bufp->chgQData(oldp+53,(vlSymsp->TOP__tb_rng__rif.__PVT__clk_toggle_tu),64);
    bufp->chgBit(oldp+55,(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__process_all_report_catchers__Vstatic__in_catcher));
    bufp->chgBit(oldp+56,(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first));
    bufp->chgBit(oldp+57,(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized));
    bufp->chgBit(oldp+58,(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized));
    bufp->chgBit(oldp+59,(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable));
}

void Vtb_rng___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rng___024root__trace_cleanup\n"); );
    // Body
    Vtb_rng___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rng___024root*>(voidSelf);
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
