// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18169]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 42, 39, "", "v_line/uvm_agent", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18170]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 45, 28, "", "v_line/uvm_agent", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18171]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 45, 40, "", "v_line/uvm_agent", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18172]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 45, 29, "", "v_line/uvm_agent", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18173]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 45, 30, "", "v_line/uvm_agent", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18174]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 60, 12, "", "v_line/uvm_agent", "block", "60-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18175]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18176]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18177]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18178]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18179]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 5, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18180]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 6, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18181]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 29, "", "v_expr/uvm_agent", "(__tmp_success_val__==1 && from_name(__tmp_string_val____tmp_val__)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18182]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 29, "", "v_expr/uvm_agent", "(from_name(__tmp_string_val____tmp_val__)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18183]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 29, "", "v_expr/uvm_agent", "(__tmp_success_val__==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18184]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18185]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18186]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(found==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18187]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(found==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18188]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18189]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18190]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18191]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18192]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18193]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18194]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18195]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18196]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(__tmp_success_val__==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18197]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(__tmp_success_val__==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18198]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18199]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18200]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18201]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18202]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(__tmp_success_val__==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18203]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(__tmp_success_val__==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18204]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18205]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18206]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18207]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18208]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(__tmp_success_val__==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18209]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(__tmp_success_val__==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18210]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18211]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18212]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(__tmp_success_val__==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18213]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(__tmp_success_val__==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18214]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 6, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18215]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18216]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 3, "", "v_branch/uvm_agent", "if", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18217]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 4, "", "v_branch/uvm_agent", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18218]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(found==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18219]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83, 7, "", "v_expr/uvm_agent", "(found==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18220]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 77, 6, "", "v_line/uvm_agent", "block", "77-78,83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18221]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 64, 17, "", "v_line/uvm_agent", "block", "64-68,70,74-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18222]), first, "/home/matheus/tools/1800.2-2017-1.0/src/comps/uvm_agent.svh", 97, 44, "", "v_line/uvm_agent", "block", "97-98");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_agent___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_agent* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_agent___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
