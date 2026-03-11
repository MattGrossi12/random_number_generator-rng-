// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__issued1 = 0;
    vlSelf->__PVT__issued2 = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18238]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 44, 49, "", "v_line/uvm_sequence_item", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18239]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 46, 43, "", "v_line/uvm_sequence_item", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18240]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 58, 12, "", "v_line/uvm_sequence_item", "block", "58-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18241]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 62, 19, "", "v_line/uvm_sequence_item", "block", "62-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18242]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 67, 28, "", "v_line/uvm_sequence_item", "block", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18243]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 67, 40, "", "v_line/uvm_sequence_item", "block", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18244]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 72, 17, "", "v_line/uvm_sequence_item", "block", "72-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18245]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 107, 16, "", "v_line/uvm_sequence_item", "block", "107-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18246]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 120, 6, "", "v_branch/uvm_sequence_item", "if", "120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18247]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 120, 7, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18248]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 121, 6, "", "v_branch/uvm_sequence_item", "if", "121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18249]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 121, 7, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18250]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 123, 6, "", "v_branch/uvm_sequence_item", "if", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18251]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 123, 7, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18252]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 117, 17, "", "v_line/uvm_sequence_item", "block", "117,119,122,124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18253]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 132, 17, "", "v_line/uvm_sequence_item", "block", "132-133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18254]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 147, 16, "", "v_line/uvm_sequence_item", "block", "147-148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18255]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 160, 5, "", "v_branch/uvm_sequence_item", "if", "160-161,454-457");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18256]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 160, 6, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18257]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 159, 17, "", "v_line/uvm_sequence_item", "block", "159,163-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18258]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 175, 25, "", "v_line/uvm_sequence_item", "block", "175-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18259]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 186, 31, "", "v_line/uvm_sequence_item", "block", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18260]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 198, 17, "", "v_line/uvm_sequence_item", "block", "198-199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18261]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 210, 30, "", "v_line/uvm_sequence_item", "block", "210-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18262]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 223, 17, "", "v_line/uvm_sequence_item", "block", "223-224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18263]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 238, 5, "", "v_branch/uvm_sequence_item", "if", "238-239");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18264]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 238, 6, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18265]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 243, 5, "", "v_branch/uvm_sequence_item", "if", "243-244");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18266]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 243, 6, "", "v_branch/uvm_sequence_item", "else", "245-246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18267]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 235, 16, "", "v_line/uvm_sequence_item", "block", "235,249");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18268]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 259, 24, "", "v_line/uvm_sequence_item", "block", "259-260");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18269]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 271, 10, "", "v_branch/uvm_sequence_item", "if", "271-272");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18270]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 271, 11, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18271]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 269, 5, "", "v_line/uvm_sequence_item", "elsif", "269-270");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18272]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 273, 5, "", "v_branch/uvm_sequence_item", "if", "273-274");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18273]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 273, 6, "", "v_branch/uvm_sequence_item", "else", "275-276");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18274]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 268, 19, "", "v_line/uvm_sequence_item", "block", "268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18275]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 289, 5, "", "v_branch/uvm_sequence_item", "if", "289-290");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18276]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 289, 6, "", "v_branch/uvm_sequence_item", "else", "292");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18277]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 286, 19, "", "v_line/uvm_sequence_item", "block", "286-288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18278]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 300, 25, "", "v_line/uvm_sequence_item", "block", "300-301");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18279]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 315, 7, "", "v_branch/uvm_sequence_item", "if", "315-317");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18280]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 315, 8, "", "v_branch/uvm_sequence_item", "else", "320");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18281]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 314, 5, "", "v_line/uvm_sequence_item", "block", "314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18282]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 310, 30, "", "v_line/uvm_sequence_item", "block", "310-313");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18283]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 337, 7, "", "v_branch/uvm_sequence_item", "if", "337-339");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18284]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 337, 8, "", "v_branch/uvm_sequence_item", "else", "342");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18285]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 336, 5, "", "v_line/uvm_sequence_item", "block", "336");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18286]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 331, 19, "", "v_line/uvm_sequence_item", "block", "331-335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18287]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 359, 5, "", "v_branch/uvm_sequence_item", "if", "359-361");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18288]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 359, 6, "", "v_branch/uvm_sequence_item", "else", "363");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18289]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 358, 38, "", "v_line/uvm_sequence_item", "block", "358");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18290]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 370, 5, "", "v_branch/uvm_sequence_item", "if", "370-371");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18291]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 370, 6, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18292]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 367, 16, "", "v_line/uvm_sequence_item", "block", "367,369,372");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18293]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 388, 7, "", "v_branch/uvm_sequence_item", "if", "388-389");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18294]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 388, 8, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18295]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 387, 5, "", "v_branch/uvm_sequence_item", "if", "387");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18296]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 387, 6, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18297]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 377, 25, "", "v_line/uvm_sequence_item", "block", "377,386,391-394");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18298]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 401, 25, "", "v_line/uvm_sequence_item", "block", "401,409-410");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18299]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 416, 25, "", "v_line/uvm_sequence_item", "block", "416,424-425");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18300]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 431, 25, "", "v_line/uvm_sequence_item", "block", "431,439-440");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18301]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 451, 25, "", "v_line/uvm_sequence_item", "block", "451,459-460");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18302]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 467, 5, "", "v_branch/uvm_sequence_item", "if", "467-468");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18303]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 467, 6, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18304]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 464, 25, "", "v_line/uvm_sequence_item", "block", "464-466,469");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18305]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 483, 7, "", "v_branch/uvm_sequence_item", "if", "483-485");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18306]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 483, 8, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18307]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 490, 7, "", "v_branch/uvm_sequence_item", "if", "490-491");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18308]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 490, 8, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18309]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 481, 5, "", "v_branch/uvm_sequence_item", "if", "481-482,487-489,493");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18310]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 481, 6, "", "v_branch/uvm_sequence_item", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18311]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 481, 28, "", "v_expr/uvm_sequence_item", "(m_use_sequence_info==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18312]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 481, 28, "", "v_expr/uvm_sequence_item", "(print_sequence_info==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18313]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 481, 28, "", "v_expr/uvm_sequence_item", "(print_sequence_info==0 && m_use_sequence_info==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18314]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 477, 17, "", "v_line/uvm_sequence_item", "block", "477-480");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18315]), first, "/home/matheus/tools/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 42, 1, "", "v_line/uvm_sequence_item", "block", "42");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_sequence_item___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_sequence_item___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
