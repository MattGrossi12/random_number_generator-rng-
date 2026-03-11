// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20196]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 42, 28, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20197]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 42, 40, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20198]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 135, 32, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "135-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20199]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 151, 25, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "151-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20200]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "170-172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20201]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20202]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 164, 15, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "164-168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20203]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 177, 17, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "177-178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20204]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 193, 14, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "193-194,197-198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20205]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 211, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "211-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20206]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 211, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20207]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "215-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20208]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20209]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 7, "", "v_expr/uvm_sequencer__Tz229_TBz229", "(sequence_item_requested==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20210]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 7, "", "v_expr/uvm_sequencer__Tz229_TBz229", "(sequence_item_requested==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20211]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 205, 6, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "205-206,220-222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20212]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 234, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "234-236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20213]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 234, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20214]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 247, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "247-249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20215]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 247, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20216]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "264-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20217]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20218]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 229, 6, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "229-232,241,244,253-258,261");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20219]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "283-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20220]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "286-288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20221]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 291, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "291-292");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20222]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 291, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20223]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 276, 15, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "276-277,280-281,296");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20224]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 303, 6, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "303-304");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20225]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 312, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "312-313");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20226]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 312, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20227]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 311, 6, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "276,311,315-317");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20228]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 326, 3, "", "v_branch/uvm_sequencer__Tz229_TBz229", "if", "326-327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20229]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 326, 4, "", "v_branch/uvm_sequencer__Tz229_TBz229", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20230]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 324, 6, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "324,332-333");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20231]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 340, 15, "", "v_line/uvm_sequencer__Tz229_TBz229", "block", "340-341");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
