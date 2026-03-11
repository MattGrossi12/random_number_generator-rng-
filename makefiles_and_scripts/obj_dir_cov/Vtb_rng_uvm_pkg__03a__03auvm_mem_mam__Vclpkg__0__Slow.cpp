// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_mem_mam__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_mam__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_mam__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_mam__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22529]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 113, 29, "", "v_line/uvm_mem_mam", "block", "113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22530]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 586, 23, "", "v_line/uvm_mem_mam", "block", "586,589-591");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22531]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 598, 4, "", "v_branch/uvm_mem_mam", "if", "598-599");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22532]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 598, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22533]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 605, 4, "", "v_branch/uvm_mem_mam", "if", "605-609");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22534]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 605, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22535]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 614, 7, "", "v_branch/uvm_mem_mam", "if", "614-621");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22536]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 614, 8, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22537]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 613, 25, "", "v_line/uvm_mem_mam", "block", "613");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22538]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 595, 26, "", "v_line/uvm_mem_mam", "block", "595-597,601-602,613,625-626");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22539]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 638, 6, "", "v_branch/uvm_mem_mam", "if", "638");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22540]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 638, 7, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22541]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 637, 4, "", "v_branch/uvm_mem_mam", "if", "637-639");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22542]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 637, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22543]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 644, 6, "", "v_branch/uvm_mem_mam", "if", "644");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22544]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 644, 7, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22545]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 642, 4, "", "v_branch/uvm_mem_mam", "if", "642,644-645");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22546]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 642, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22547]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 653, 6, "", "v_branch/uvm_mem_mam", "if", "653");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22548]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 653, 7, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22549]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 651, 4, "", "v_branch/uvm_mem_mam", "if", "651,653-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22550]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 651, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22551]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 658, 6, "", "v_branch/uvm_mem_mam", "if", "658");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22552]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 658, 7, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22553]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 669, 6, "", "v_branch/uvm_mem_mam", "if", "669");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22554]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 669, 7, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22555]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 664, 7, "", "v_branch/uvm_mem_mam", "if", "664-665,669-670");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22556]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 664, 8, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22557]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 674, 7, "", "v_branch/uvm_mem_mam", "if", "674-678");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22558]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 674, 8, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22559]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 663, 25, "", "v_line/uvm_mem_mam", "block", "663");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22560]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 630, 25, "", "v_line/uvm_mem_mam", "block", "630,634-636,648-649,658,663,682-684");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22561]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 694, 4, "", "v_branch/uvm_mem_mam", "if", "694");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22562]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 694, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22563]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 702, 6, "", "v_branch/uvm_mem_mam", "if", "702");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22564]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 702, 7, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22565]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 701, 4, "", "v_branch/uvm_mem_mam", "if", "701-703");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22566]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 701, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22567]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 688, 25, "", "v_line/uvm_mem_mam", "block", "632-633,688,692-693,696-699,706");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22568]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 712, 4, "", "v_branch/uvm_mem_mam", "if", "712");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22569]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 712, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22570]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 715, 7, "", "v_branch/uvm_mem_mam", "if", "715-717");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22571]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 715, 8, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22572]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 714, 25, "", "v_line/uvm_mem_mam", "block", "714");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22573]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 721, 6, "", "v_branch/uvm_mem_mam", "if", "721");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22574]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 721, 7, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22575]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 710, 15, "", "v_line/uvm_mem_mam", "block", "710,714,721");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22576]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 725, 15, "", "v_line/uvm_mem_mam", "block", "725-726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22577]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 732, 25, "", "v_line/uvm_mem_mam", "block", "732-734");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22578]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 730, 17, "", "v_line/uvm_mem_mam", "block", "730-732");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22579]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 740, 4, "", "v_branch/uvm_mem_mam", "if", "740");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22580]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 740, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22581]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 744, 4, "", "v_branch/uvm_mem_mam", "if", "744-745");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22582]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 744, 5, "", "v_branch/uvm_mem_mam", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22583]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 739, 25, "", "v_line/uvm_mem_mam", "block", "739,742,748");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22584]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 752, 18, "", "v_line/uvm_mem_mam", "block", "752-753");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_mam___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_mam* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_mam___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
