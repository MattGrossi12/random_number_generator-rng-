// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc____05Fdeferred_init__25__Vfuncout;
    __Vfunc____05Fdeferred_init__25__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc____05Fdeferred_init(vlProcess, vlSymsp, __Vfunc____05Fdeferred_init__25__Vfuncout);
    vlSelfRef.__PVT__m___05Finitialized = __Vfunc____05Fdeferred_init__25__Vfuncout;
    ++(vlSymsp->__Vcoverage[6524]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6495]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 6, "", "v_branch/uvm_registry_common__pi52", "if", "541-542");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6496]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 7, "", "v_branch/uvm_registry_common__pi52", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6497]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 32, "", "v_expr/uvm_registry_common__pi52", "((Tname == \"<unknown>\")==1 && (m__type_aliases.size() != 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6498]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 32, "", "v_expr/uvm_registry_common__pi52", "((m__type_aliases.size() != 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6499]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 32, "", "v_expr/uvm_registry_common__pi52", "((Tname == \"<unknown>\")==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6500]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 540, 26, "", "v_line/uvm_registry_common__pi52", "block", "540,544");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6501]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 547, 27, "", "v_line/uvm_registry_common__pi52", "block", "547-548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6502]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 553, 6, "", "v_branch/uvm_registry_common__pi52", "if", "553-554");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6503]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 553, 7, "", "v_branch/uvm_registry_common__pi52", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6504]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 551, 29, "", "v_line/uvm_registry_common__pi52", "block", "551-552,555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6505]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 560, 5, "", "v_branch/uvm_registry_common__pi52", "if", "560-561");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6506]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 560, 6, "", "v_branch/uvm_registry_common__pi52", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6507]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 563, 5, "", "v_branch/uvm_registry_common__pi52", "if", "563-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6508]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 563, 6, "", "v_branch/uvm_registry_common__pi52", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6509]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 558, 28, "", "v_line/uvm_registry_common__pi52", "block", "558-559,562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6510]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 573, 24, "", "v_line/uvm_registry_common__pi52", "block", "573,575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6511]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 587, 7, "", "v_branch/uvm_registry_common__pi52", "if", "587-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6512]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 587, 8, "", "v_branch/uvm_registry_common__pi52", "else", "590");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6513]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 586, 5, "", "v_branch/uvm_registry_common__pi52", "if", "586");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6514]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 586, 6, "", "v_branch/uvm_registry_common__pi52", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6515]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 580, 24, "", "v_line/uvm_registry_common__pi52", "block", "580,583-584,592");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6516]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 601, 9, "", "v_branch/uvm_registry_common__pi52", "if", "601-602");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6517]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 601, 10, "", "v_branch/uvm_registry_common__pi52", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6518]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 598, 6, "", "v_branch/uvm_registry_common__pi52", "if", "598-600");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6519]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 598, 7, "", "v_branch/uvm_registry_common__pi52", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6520]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 595, 24, "", "v_line/uvm_registry_common__pi52", "block", "595-597");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6521]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 610, 6, "", "v_branch/uvm_registry_common__pi52", "if", "610-611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6522]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 610, 7, "", "v_branch/uvm_registry_common__pi52", "else", "615-616");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6523]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 607, 23, "", "v_line/uvm_registry_common__pi52", "block", "607-608,618");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6524]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 620, 35, "", "v_line/uvm_registry_common__pi52", "block", "620");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6525]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 628, 30, "", "v_line/uvm_registry_common__pi52", "block", "628-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6526]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 622, 25, "", "v_line/uvm_registry_common__pi52", "block", "622-625,628");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6527]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 535, 1, "", "v_line/uvm_registry_common__pi52", "block", "535");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi52___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
