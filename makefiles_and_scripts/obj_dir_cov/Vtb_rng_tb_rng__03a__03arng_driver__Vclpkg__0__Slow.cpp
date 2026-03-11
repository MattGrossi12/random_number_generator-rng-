// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg___ctor_var_reset(Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg___configure_coverage(Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "../UVM/UVM_driver.sv", 15, 28, "", "v_line/rng_driver", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "../UVM/UVM_driver.sv", 15, 40, "", "v_line/rng_driver", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "../UVM/UVM_driver.sv", 15, 29, "", "v_line/rng_driver", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "../UVM/UVM_driver.sv", 15, 30, "", "v_line/rng_driver", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "../UVM/UVM_driver.sv", 19, 12, "", "v_line/rng_driver", "block", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "../UVM/UVM_driver.sv", 27, 6, "", "v_branch/rng_driver", "if", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "../UVM/UVM_driver.sv", 27, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "../UVM/UVM_driver.sv", 26, 5, "", "v_branch/rng_driver", "if", "26-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "../UVM/UVM_driver.sv", 26, 6, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "../UVM/UVM_driver.sv", 26, 9, "", "v_expr/rng_driver", "(get(this\"\"\"vif\"vif)==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "../UVM/UVM_driver.sv", 26, 9, "", "v_expr/rng_driver", "(get(this\"\"\"vif\"vif)==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "../UVM/UVM_driver.sv", 23, 17, "", "v_line/rng_driver", "block", "23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "../UVM/UVM_driver.sv", 31, 18, "", "v_line/rng_driver", "block", "31-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "../UVM/UVM_driver.sv", 53, 6, "", "v_branch/rng_driver", "if", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "../UVM/UVM_driver.sv", 53, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "../UVM/UVM_driver.sv", 37, 18, "", "v_line/rng_driver", "block", "37-39,41-44,47-48,53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "../UVM/UVM_driver.sv", 79, 6, "", "v_branch/rng_driver", "if", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "../UVM/UVM_driver.sv", 79, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "../UVM/UVM_driver.sv", 57, 18, "", "v_line/rng_driver", "block", "57-60,62-64,67-68,71-74,79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "../UVM/UVM_driver.sv", 91, 6, "", "v_branch/rng_driver", "if", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "../UVM/UVM_driver.sv", 91, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "../UVM/UVM_driver.sv", 100, 6, "", "v_branch/rng_driver", "if", "100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "../UVM/UVM_driver.sv", 100, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "../UVM/UVM_driver.sv", 113, 6, "", "v_branch/rng_driver", "if", "113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "../UVM/UVM_driver.sv", 113, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "../UVM/UVM_driver.sv", 82, 18, "", "v_line/rng_driver", "block", "82-83,85-86,91,94-95,100,103,106,109,113,115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "../UVM/UVM_driver.sv", 131, 6, "", "v_branch/rng_driver", "if", "131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "../UVM/UVM_driver.sv", 131, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "../UVM/UVM_driver.sv", 133, 5, "", "v_line/rng_driver", "block", "133-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "../UVM/UVM_driver.sv", 118, 8, "", "v_line/rng_driver", "block", "118-119,121,123,126-127,131");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_driver___configure_coverage(Vtb_rng_tb_rng__03a__03arng_driver* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
