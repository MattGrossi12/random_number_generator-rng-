// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer___Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_sequencer___Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer___Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer___Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequencer___Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer___Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20014]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 42, 28, "", "v_line/uvm_sequencer_", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20015]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 42, 40, "", "v_line/uvm_sequencer_", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20016]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 135, 32, "", "v_line/uvm_sequencer_", "block", "135-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20017]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 151, 25, "", "v_line/uvm_sequencer_", "block", "151-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20018]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170, 3, "", "v_branch/uvm_sequencer_", "if", "170-172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20019]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20020]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 164, 15, "", "v_line/uvm_sequencer_", "block", "164-168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20021]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 177, 17, "", "v_line/uvm_sequencer_", "block", "177-178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20022]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 193, 14, "", "v_line/uvm_sequencer_", "block", "193-194,197-198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20023]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 211, 3, "", "v_branch/uvm_sequencer_", "if", "211-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20024]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 211, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20025]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 3, "", "v_branch/uvm_sequencer_", "if", "215-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20026]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20027]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 7, "", "v_expr/uvm_sequencer_", "(sequence_item_requested==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20028]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 7, "", "v_expr/uvm_sequencer_", "(sequence_item_requested==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20029]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 205, 6, "", "v_line/uvm_sequencer_", "block", "205-206,220-222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20030]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 234, 3, "", "v_branch/uvm_sequencer_", "if", "234-236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20031]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 234, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20032]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 247, 3, "", "v_branch/uvm_sequencer_", "if", "247-249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20033]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 247, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20034]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264, 3, "", "v_branch/uvm_sequencer_", "if", "264-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20035]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20036]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 229, 6, "", "v_line/uvm_sequencer_", "block", "229-232,241,244,253-258,261");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20037]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283, 3, "", "v_branch/uvm_sequencer_", "if", "283-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20038]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283, 4, "", "v_branch/uvm_sequencer_", "else", "286-288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20039]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 291, 3, "", "v_branch/uvm_sequencer_", "if", "291-292");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20040]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 291, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20041]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 276, 15, "", "v_line/uvm_sequencer_", "block", "276-277,280-281,296");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20042]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 303, 6, "", "v_line/uvm_sequencer_", "block", "303-304");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20043]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 312, 3, "", "v_branch/uvm_sequencer_", "if", "312-313");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20044]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 312, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20045]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 311, 6, "", "v_line/uvm_sequencer_", "block", "276,311,315-317");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20046]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 326, 3, "", "v_branch/uvm_sequencer_", "if", "326-327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20047]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 326, 4, "", "v_branch/uvm_sequencer_", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20048]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 324, 6, "", "v_line/uvm_sequencer_", "block", "324,332-333");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20049]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 340, 15, "", "v_line/uvm_sequencer_", "block", "340-341");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer____configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequencer_* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer____configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
