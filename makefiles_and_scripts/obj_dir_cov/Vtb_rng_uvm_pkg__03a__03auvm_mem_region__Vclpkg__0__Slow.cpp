// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_region__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_mem_region__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_region__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_region__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_region__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem_region__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22580]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 531, 26, "", "v_line/uvm_mem_region", "block", "531,536-541");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22581]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 545, 21, "", "v_line/uvm_mem_region", "block", "545-546");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22582]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 550, 21, "", "v_line/uvm_mem_region", "block", "550-551");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22583]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 555, 23, "", "v_line/uvm_mem_region", "block", "555-556");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22584]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 560, 23, "", "v_line/uvm_mem_region", "block", "560-561");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22585]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 565, 17, "", "v_line/uvm_mem_region", "block", "565-567");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22586]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 571, 15, "", "v_line/uvm_mem_region", "block", "571-572");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22587]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 576, 18, "", "v_line/uvm_mem_region", "block", "576-577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22588]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 581, 19, "", "v_line/uvm_mem_region", "block", "581-582");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22589]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 773, 6, "", "v_branch/uvm_mem_region", "if", "773");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22590]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 773, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22591]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 772, 4, "", "v_branch/uvm_mem_region", "if", "772-775");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22592]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 772, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22593]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 781, 6, "", "v_branch/uvm_mem_region", "if", "781");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22594]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 781, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22595]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 778, 4, "", "v_branch/uvm_mem_region", "if", "778,781-783");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22596]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 778, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22597]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 757, 6, "", "v_line/uvm_mem_region", "block", "757,768-770,786-787");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22598]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 806, 6, "", "v_branch/uvm_mem_region", "if", "806");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22599]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 806, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22600]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 805, 4, "", "v_branch/uvm_mem_region", "if", "805-808");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22601]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 805, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22602]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 814, 6, "", "v_branch/uvm_mem_region", "if", "814");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22603]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 814, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22604]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 811, 4, "", "v_branch/uvm_mem_region", "if", "811,814-816");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22605]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 811, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22606]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 791, 6, "", "v_line/uvm_mem_region", "block", "791,793,801-803,819-820");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22607]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 839, 6, "", "v_branch/uvm_mem_region", "if", "839");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22608]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 839, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22609]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 838, 4, "", "v_branch/uvm_mem_region", "if", "838-841");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22610]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 838, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22611]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 847, 6, "", "v_branch/uvm_mem_region", "if", "847");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22612]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 847, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22613]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 844, 4, "", "v_branch/uvm_mem_region", "if", "844,847-849");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22614]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 844, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22615]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 824, 6, "", "v_line/uvm_mem_region", "block", "824,834-836,852-853");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22616]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 873, 6, "", "v_branch/uvm_mem_region", "if", "873");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22617]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 873, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22618]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 872, 4, "", "v_branch/uvm_mem_region", "if", "872-875");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22619]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 872, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22620]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 881, 6, "", "v_branch/uvm_mem_region", "if", "881");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22621]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 881, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22622]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 878, 4, "", "v_branch/uvm_mem_region", "if", "878,881-883");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22623]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 878, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22624]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 858, 6, "", "v_line/uvm_mem_region", "block", "858,860,868-870,886-887");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22625]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 904, 6, "", "v_branch/uvm_mem_region", "if", "904");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22626]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 904, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22627]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 903, 4, "", "v_branch/uvm_mem_region", "if", "903-906");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22628]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 903, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22629]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 912, 6, "", "v_branch/uvm_mem_region", "if", "912");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22630]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 912, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22631]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 909, 4, "", "v_branch/uvm_mem_region", "if", "909,912-914");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22632]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 909, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22633]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 892, 6, "", "v_line/uvm_mem_region", "block", "892,899-901,917");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22634]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 933, 6, "", "v_branch/uvm_mem_region", "if", "933");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22635]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 933, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22636]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 932, 4, "", "v_branch/uvm_mem_region", "if", "932-935");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22637]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 932, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22638]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 941, 6, "", "v_branch/uvm_mem_region", "if", "941");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22639]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 941, 7, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22640]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 938, 4, "", "v_branch/uvm_mem_region", "if", "938,941-943");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22641]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 938, 5, "", "v_branch/uvm_mem_region", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22642]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 921, 6, "", "v_line/uvm_mem_region", "block", "921,923,928-930,946");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_mem_region___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_mem_region* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem_region___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
