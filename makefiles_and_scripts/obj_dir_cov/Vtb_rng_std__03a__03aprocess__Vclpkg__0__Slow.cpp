// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_std__03a__03aprocess__Vclpkg___ctor_var_reset(Vtb_rng_std__03a__03aprocess__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03aprocess__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_std__03a__03aprocess__Vclpkg___configure_coverage(Vtb_rng_std__03a__03aprocess__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_std__03a__03aprocess__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25451]), first, "/usr/local/share/verilator/include/verilated_std.sv", 142, 29, "", "v_line/process", "block", "142-143,145,147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25452]), first, "/usr/local/share/verilator/include/verilated_std.sv", 150, 29, "", "v_line/process", "block", "150,152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25453]), first, "/usr/local/share/verilator/include/verilated_std.sv", 156, 20, "", "v_line/process", "block", "156,158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25454]), first, "/usr/local/share/verilator/include/verilated_std.sv", 164, 19, "", "v_line/process", "block", "164-165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25455]), first, "/usr/local/share/verilator/include/verilated_std.sv", 172, 19, "", "v_line/process", "block", "172-173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25456]), first, "/usr/local/share/verilator/include/verilated_std.sv", 178, 34, "", "v_expr/process", "((status() == process::KILLED)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25457]), first, "/usr/local/share/verilator/include/verilated_std.sv", 178, 34, "", "v_expr/process", "((status() == process::FINISHED)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25458]), first, "/usr/local/share/verilator/include/verilated_std.sv", 178, 34, "", "v_expr/process", "((status() == process::FINISHED)==0 && (status() == process::KILLED)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25459]), first, "/usr/local/share/verilator/include/verilated_std.sv", 176, 10, "", "v_line/process", "block", "176,178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25460]), first, "/usr/local/share/verilator/include/verilated_std.sv", 184, 7, "", "v_line/process", "block", "184-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25461]), first, "/usr/local/share/verilator/include/verilated_std.sv", 182, 17, "", "v_line/process", "block", "182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25462]), first, "/usr/local/share/verilator/include/verilated_std.sv", 229, 21, "", "v_line/process", "block", "229,231,233-234");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25463]), first, "/usr/local/share/verilator/include/verilated_std.sv", 237, 19, "", "v_line/process", "block", "237-238");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25464]), first, "/usr/local/share/verilator/include/verilated_std.sv", 130, 3, "", "v_line/process", "block", "130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25465]), first, "/usr/local/share/verilator/include/verilated_std.sv", 130, 3, "", "v_line/process", "block", "130");
}

VL_ATTR_COLD void Vtb_rng_std__03a__03aprocess___configure_coverage(Vtb_rng_std__03a__03aprocess* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_std__03a__03aprocess___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
