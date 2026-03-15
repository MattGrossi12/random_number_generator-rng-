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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "../UVM/UVM_driver.sv", 2, 28, "", "v_line/rng_driver", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "../UVM/UVM_driver.sv", 2, 40, "", "v_line/rng_driver", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "../UVM/UVM_driver.sv", 2, 29, "", "v_line/rng_driver", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "../UVM/UVM_driver.sv", 2, 30, "", "v_line/rng_driver", "block", "2");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "../UVM/UVM_driver.sv", 8, 14, "", "v_line/rng_driver", "block", "8,10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "../UVM/UVM_driver.sv", 20, 6, "", "v_branch/rng_driver", "if", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "../UVM/UVM_driver.sv", 20, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "../UVM/UVM_driver.sv", 19, 9, "", "v_branch/rng_driver", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "../UVM/UVM_driver.sv", 19, 10, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "../UVM/UVM_driver.sv", 19, 13, "", "v_expr/rng_driver", "(get(this\"\"\"vif\"vif)==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "../UVM/UVM_driver.sv", 19, 13, "", "v_expr/rng_driver", "(get(this\"\"\"vif\"vif)==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "../UVM/UVM_driver.sv", 13, 19, "", "v_line/rng_driver", "block", "13,15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "../UVM/UVM_driver.sv", 24, 20, "", "v_line/rng_driver", "block", "24,27,31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "../UVM/UVM_driver.sv", 64, 6, "", "v_branch/rng_driver", "if", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "../UVM/UVM_driver.sv", 64, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "../UVM/UVM_driver.sv", 34, 20, "", "v_line/rng_driver", "block", "34-36,40,44,47,50,54,57,64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "../UVM/UVM_driver.sv", 108, 6, "", "v_branch/rng_driver", "if", "108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "../UVM/UVM_driver.sv", 108, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "../UVM/UVM_driver.sv", 67, 20, "", "v_line/rng_driver", "block", "67-70,74,78,81,85,88,92,95,98,101,108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "../UVM/UVM_driver.sv", 126, 6, "", "v_branch/rng_driver", "if", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "../UVM/UVM_driver.sv", 126, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "../UVM/UVM_driver.sv", 141, 6, "", "v_branch/rng_driver", "if", "141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "../UVM/UVM_driver.sv", 141, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "../UVM/UVM_driver.sv", 158, 6, "", "v_branch/rng_driver", "if", "158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "../UVM/UVM_driver.sv", 158, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "../UVM/UVM_driver.sv", 111, 20, "", "v_line/rng_driver", "block", "111-112,116,120,126,130,134,141,145,149,153,158,161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "../UVM/UVM_driver.sv", 185, 6, "", "v_branch/rng_driver", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "../UVM/UVM_driver.sv", 185, 7, "", "v_branch/rng_driver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "../UVM/UVM_driver.sv", 187, 9, "", "v_line/rng_driver", "block", "187,189,192,195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "../UVM/UVM_driver.sv", 164, 10, "", "v_line/rng_driver", "block", "164-165,168,172,176,180,185");
}

VL_ATTR_COLD void Vtb_rng_tb_rng__03a__03arng_driver___configure_coverage(Vtb_rng_tb_rng__03a__03arng_driver* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtb_rng_tb_rng__03a__03arng_driver___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
