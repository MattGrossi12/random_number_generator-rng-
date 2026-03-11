// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19978]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 42, 28, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19979]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 42, 40, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19980]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 135, 32, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "135-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19981]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 151, 25, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "151-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19982]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "170-172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19983]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19984]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 164, 15, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "164-168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19985]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 177, 17, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "177-178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19986]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 193, 14, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "193-194,197-198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19987]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 211, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "211-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19988]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 211, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19989]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "215-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19990]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19991]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 7, "", "v_expr/uvm_sequencer__Tz126_TBz126", "(sequence_item_requested==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19992]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 215, 7, "", "v_expr/uvm_sequencer__Tz126_TBz126", "(sequence_item_requested==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19993]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 205, 6, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "205-206,220-222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19994]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 234, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "234-236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19995]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 234, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19996]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 247, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "247-249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19997]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 247, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19998]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "264-268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19999]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20000]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 229, 6, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "229-232,241,244,253-258,261");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20001]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "283-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20002]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "286-288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20003]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 291, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "291-292");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20004]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 291, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20005]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 276, 15, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "276-277,280-281,296");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20006]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 303, 6, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "303-304");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20007]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 312, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "312-313");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20008]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 312, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20009]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 311, 6, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "276,311,315-317");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20010]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 326, 3, "", "v_branch/uvm_sequencer__Tz126_TBz126", "if", "326-327");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20011]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 326, 4, "", "v_branch/uvm_sequencer__Tz126_TBz126", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20012]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 324, 6, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "324,332-333");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20013]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 340, 15, "", "v_line/uvm_sequencer__Tz126_TBz126", "block", "340-341");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
