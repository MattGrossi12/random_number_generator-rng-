// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20496]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_library.svh", 349, 28, "", "v_line/uvm_sequence_library_cfg", "block", "349");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20497]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_library.svh", 349, 40, "", "v_line/uvm_sequence_library_cfg", "block", "349");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20498]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_library.svh", 349, 6, "", "v_branch/uvm_sequence_library_cfg", "if", "349,353-356");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20499]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_library.svh", 349, 7, "", "v_branch/uvm_sequence_library_cfg", "else", "349,354-356");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20500]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_library.svh", 349, 24, "", "v_line/uvm_sequence_library_cfg", "block", "349");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20501]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_library.svh", 349, 29, "", "v_line/uvm_sequence_library_cfg", "block", "349");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20502]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_library.svh", 349, 30, "", "v_line/uvm_sequence_library_cfg", "block", "349");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20503]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_library.svh", 353, 12, "", "v_line/uvm_sequence_library_cfg", "block", "353,357-360");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_library_cfg___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
