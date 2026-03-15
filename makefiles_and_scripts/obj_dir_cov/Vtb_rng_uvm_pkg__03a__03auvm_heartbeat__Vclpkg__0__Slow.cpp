// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17693]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 90, 5, "", "v_branch/uvm_heartbeat", "if", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17694]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 90, 6, "", "v_branch/uvm_heartbeat", "else", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17695]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 83, 12, "", "v_line/uvm_heartbeat", "block", "83-87,93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17696]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 107, 5, "", "v_branch/uvm_heartbeat", "if", "107-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17697]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 107, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17698]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 107, 57, "", "v_expr/uvm_heartbeat", "((mode == uvm_pkg::UVM_ALL_ACTIVE)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17699]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 107, 57, "", "v_expr/uvm_heartbeat", "((mode == uvm_pkg::UVM_ONE_ACTIVE)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17700]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 107, 57, "", "v_expr/uvm_heartbeat", "((mode == uvm_pkg::UVM_ANY_ACTIVE)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17701]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 107, 57, "", "v_expr/uvm_heartbeat", "((mode == uvm_pkg::UVM_ANY_ACTIVE)==0 && (mode == uvm_pkg::UVM_ONE_ACTIVE)==0 && (mode == uvm_pkg::UVM_ALL_ACTIVE)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17702]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 105, 32, "", "v_line/uvm_heartbeat", "block", "105-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17703]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 129, 7, "", "v_branch/uvm_heartbeat", "if", "129-130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17704]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 129, 8, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17705]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 131, 7, "", "v_branch/uvm_heartbeat", "if", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17706]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 131, 8, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17707]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 127, 19, "", "v_line/uvm_heartbeat", "block", "127-128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17708]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 134, 5, "", "v_branch/uvm_heartbeat", "if", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17709]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 134, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17710]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 125, 17, "", "v_line/uvm_heartbeat", "block", "125-127,135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17711]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 149, 5, "", "v_branch/uvm_heartbeat", "if", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17712]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 149, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17713]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 147, 17, "", "v_line/uvm_heartbeat", "block", "147-148,150-151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17714]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 163, 5, "", "v_branch/uvm_heartbeat", "if", "163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17715]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 163, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17716]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 164, 5, "", "v_branch/uvm_heartbeat", "if", "164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17717]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 164, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17718]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 161, 17, "", "v_line/uvm_heartbeat", "block", "161-162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17719]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 178, 5, "", "v_branch/uvm_heartbeat", "if", "178-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17720]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 178, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17721]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 184, 5, "", "v_branch/uvm_heartbeat", "if", "184-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17722]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 184, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17723]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 190, 5, "", "v_branch/uvm_heartbeat", "if", "190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17724]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 190, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17725]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 177, 17, "", "v_line/uvm_heartbeat", "block", "177,191-192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17726]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 202, 17, "", "v_line/uvm_heartbeat", "block", "202-205");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17727]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 209, 5, "", "v_branch/uvm_heartbeat", "if", "209");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17728]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 209, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17729]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 208, 17, "", "v_line/uvm_heartbeat", "block", "208,210-212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17730]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 219, 5, "", "v_branch/uvm_heartbeat", "if", "219");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17731]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 219, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17732]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 220, 5, "", "v_branch/uvm_heartbeat", "if", "220-221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17733]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 220, 6, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17734]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 220, 8, "", "v_expr/uvm_heartbeat", "(m_added==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17735]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 220, 8, "", "v_expr/uvm_heartbeat", "(m_added==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17736]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 217, 17, "", "v_line/uvm_heartbeat", "block", "217-218,222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17737]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 225, 17, "", "v_line/uvm_heartbeat", "block", "225-226");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17738]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 246, 21, "", "v_branch/uvm_heartbeat", "if", "246-249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17739]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 246, 22, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17740]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 244, 36, "", "v_line/uvm_heartbeat", "block", "244-245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17741]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 244, 36, "", "v_branch/uvm_heartbeat", "if", "244");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17742]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 244, 37, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17743]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 242, 29, "", "v_line/uvm_heartbeat", "case", "242-244");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17744]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 257, 38, "", "v_line/uvm_heartbeat", "block", "257-259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17745]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 257, 38, "", "v_branch/uvm_heartbeat", "if", "257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17746]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 257, 39, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17747]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 255, 19, "", "v_branch/uvm_heartbeat", "if", "255-257,261-262");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17748]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 255, 20, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17749]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 253, 29, "", "v_line/uvm_heartbeat", "case", "253-254");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17750]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 271, 23, "", "v_branch/uvm_heartbeat", "if", "271-272");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17751]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 271, 24, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17752]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 269, 38, "", "v_line/uvm_heartbeat", "block", "269-270");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17753]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 269, 38, "", "v_branch/uvm_heartbeat", "if", "269");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17754]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 269, 39, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17755]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 267, 19, "", "v_branch/uvm_heartbeat", "if", "267-269,274-275");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17756]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 267, 20, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17757]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 279, 38, "", "v_line/uvm_heartbeat", "block", "279-281");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17758]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 279, 38, "", "v_branch/uvm_heartbeat", "if", "279");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17759]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 279, 39, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17760]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 277, 19, "", "v_branch/uvm_heartbeat", "if", "277-279,283-284");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17761]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 277, 20, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17762]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 265, 29, "", "v_line/uvm_heartbeat", "case", "265-266");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17763]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 240, 11, "", "v_branch/uvm_heartbeat", "if", "240-241");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17764]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 240, 12, "", "v_branch/uvm_heartbeat", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17765]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 238, 9, "", "v_line/uvm_heartbeat", "block", "238-239,289-291");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17766]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 229, 8, "", "v_line/uvm_heartbeat", "block", "229-234,294,296");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_heartbeat___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_heartbeat* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_heartbeat___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
