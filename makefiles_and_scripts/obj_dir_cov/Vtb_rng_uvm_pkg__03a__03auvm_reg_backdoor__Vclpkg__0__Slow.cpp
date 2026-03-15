// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__1__Vfuncout;
    __Vfunc_m_register_pair__1__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz197_TBz196__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_reg_backdoor"s, "uvm_reg_cbs"s, __Vfunc_m_register_pair__1__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_reg_cbs = __Vfunc_m_register_pair__1__Vfuncout;
    ++(vlSymsp->__Vcoverage[21116]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21097]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 43, 28, "", "v_line/uvm_reg_backdoor", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21098]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 43, 40, "", "v_line/uvm_reg_backdoor", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21099]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 43, 29, "", "v_line/uvm_reg_backdoor", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21100]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 43, 30, "", "v_line/uvm_reg_backdoor", "block", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21101]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 47, 13, "", "v_line/uvm_reg_backdoor", "block", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21102]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57, 6, "", "v_line/uvm_reg_backdoor", "block", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21103]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 54, 19, "", "v_line/uvm_reg_backdoor", "block", "54-55,57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21104]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 65, 7, "", "v_line/uvm_reg_backdoor", "block", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21105]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67, 6, "", "v_line/uvm_reg_backdoor", "block", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21106]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 63, 19, "", "v_line/uvm_reg_backdoor", "block", "63-65,67-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21107]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77, 6, "", "v_line/uvm_reg_backdoor", "block", "77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21108]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 78, 7, "", "v_line/uvm_reg_backdoor", "block", "78-79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21109]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 74, 19, "", "v_line/uvm_reg_backdoor", "block", "74-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21110]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86, 6, "", "v_line/uvm_reg_backdoor", "block", "86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21111]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 85, 19, "", "v_line/uvm_reg_backdoor", "block", "85-87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21112]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 123, 17, "", "v_line/uvm_reg_backdoor", "block", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21113]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 128, 17, "", "v_line/uvm_reg_backdoor", "block", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21114]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 133, 17, "", "v_line/uvm_reg_backdoor", "block", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21115]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 138, 17, "", "v_line/uvm_reg_backdoor", "block", "138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21116]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 150, 94, "", "v_line/uvm_reg_backdoor", "block", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21117]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 163, 14, "", "v_line/uvm_reg_backdoor", "block", "163-164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21118]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 171, 6, "", "v_branch/uvm_reg_backdoor", "if", "171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21119]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 171, 7, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21120]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 170, 6, "", "v_line/uvm_reg_backdoor", "block", "170-171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21121]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 179, 4, "", "v_branch/uvm_reg_backdoor", "if", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21122]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 179, 5, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21123]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 182, 4, "", "v_branch/uvm_reg_backdoor", "if", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21124]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 182, 5, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21125]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 206, 6, "", "v_branch/uvm_reg_backdoor", "if", "206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21126]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 206, 7, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21127]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 204, 13, "", "v_branch/uvm_reg_backdoor", "if", "204,206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21128]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 204, 14, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21129]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 209, 16, "", "v_branch/uvm_reg_backdoor", "if", "209-210,212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21130]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 209, 17, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21131]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 208, 29, "", "v_line/uvm_reg_backdoor", "block", "208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21132]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 196, 10, "", "v_line/uvm_reg_backdoor", "block", "196-203,208,215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21133]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 177, 15, "", "v_line/uvm_reg_backdoor", "block", "177-178,185-187,192,195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21134]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 225, 4, "", "v_branch/uvm_reg_backdoor", "if", "225,230,233");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21135]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 225, 5, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21136]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 224, 15, "", "v_line/uvm_reg_backdoor", "block", "224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21137]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 240, 14, "", "v_line/uvm_reg_backdoor", "block", "240-241");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21138]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 248, 6, "", "v_branch/uvm_reg_backdoor", "if", "248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21139]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 248, 7, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21140]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 247, 6, "", "v_line/uvm_reg_backdoor", "block", "247-248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21141]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 254, 6, "", "v_line/uvm_reg_backdoor", "block", "254-257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21142]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 264, 6, "", "v_branch/uvm_reg_backdoor", "if", "264");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21143]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 264, 7, "", "v_branch/uvm_reg_backdoor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21144]), first, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 263, 15, "", "v_line/uvm_reg_backdoor", "block", "263-265");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
