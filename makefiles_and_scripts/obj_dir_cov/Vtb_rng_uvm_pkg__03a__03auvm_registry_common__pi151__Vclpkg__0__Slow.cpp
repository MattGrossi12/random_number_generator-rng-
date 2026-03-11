// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc____05Fdeferred_init__25__Vfuncout;
    __Vfunc____05Fdeferred_init__25__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc____05Fdeferred_init(vlProcess, vlSymsp, __Vfunc____05Fdeferred_init__25__Vfuncout);
    vlSelfRef.__PVT__m___05Finitialized = __Vfunc____05Fdeferred_init__25__Vfuncout;
    ++(vlSymsp->__Vcoverage[6767]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6738]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 6, "", "v_branch/uvm_registry_common__pi151", "if", "541-542");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6739]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 7, "", "v_branch/uvm_registry_common__pi151", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6740]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 32, "", "v_expr/uvm_registry_common__pi151", "((Tname == \"<unknown>\")==1 && (m__type_aliases.size() != 32'sh0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6741]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 32, "", "v_expr/uvm_registry_common__pi151", "((m__type_aliases.size() != 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6742]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 541, 32, "", "v_expr/uvm_registry_common__pi151", "((Tname == \"<unknown>\")==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6743]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 540, 26, "", "v_line/uvm_registry_common__pi151", "block", "540,544");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6744]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 547, 27, "", "v_line/uvm_registry_common__pi151", "block", "547-548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6745]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 553, 6, "", "v_branch/uvm_registry_common__pi151", "if", "553-554");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6746]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 553, 7, "", "v_branch/uvm_registry_common__pi151", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6747]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 551, 29, "", "v_line/uvm_registry_common__pi151", "block", "551-552,555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6748]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 560, 5, "", "v_branch/uvm_registry_common__pi151", "if", "560-561");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6749]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 560, 6, "", "v_branch/uvm_registry_common__pi151", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6750]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 563, 5, "", "v_branch/uvm_registry_common__pi151", "if", "563-569");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6751]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 563, 6, "", "v_branch/uvm_registry_common__pi151", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6752]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 558, 28, "", "v_line/uvm_registry_common__pi151", "block", "558-559,562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6753]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 573, 24, "", "v_line/uvm_registry_common__pi151", "block", "573,575,577");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6754]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 587, 7, "", "v_branch/uvm_registry_common__pi151", "if", "587-588");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6755]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 587, 8, "", "v_branch/uvm_registry_common__pi151", "else", "590");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6756]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 586, 5, "", "v_branch/uvm_registry_common__pi151", "if", "586");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6757]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 586, 6, "", "v_branch/uvm_registry_common__pi151", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6758]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 580, 24, "", "v_line/uvm_registry_common__pi151", "block", "580,583-584,592");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6759]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 601, 9, "", "v_branch/uvm_registry_common__pi151", "if", "601-602");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6760]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 601, 10, "", "v_branch/uvm_registry_common__pi151", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6761]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 598, 6, "", "v_branch/uvm_registry_common__pi151", "if", "598-600");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6762]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 598, 7, "", "v_branch/uvm_registry_common__pi151", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6763]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 595, 24, "", "v_line/uvm_registry_common__pi151", "block", "595-597");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6764]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 610, 6, "", "v_branch/uvm_registry_common__pi151", "if", "610-611");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6765]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 610, 7, "", "v_branch/uvm_registry_common__pi151", "else", "615-616");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6766]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 607, 23, "", "v_line/uvm_registry_common__pi151", "block", "607-608,618");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6767]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 620, 35, "", "v_line/uvm_registry_common__pi151", "block", "620");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6768]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 628, 30, "", "v_line/uvm_registry_common__pi151", "block", "628-629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6769]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 622, 25, "", "v_line/uvm_registry_common__pi151", "block", "622-625,628");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6770]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_registry.svh", 535, 1, "", "v_line/uvm_registry_common__pi151", "block", "535");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_rng_uvm_pkg__03a__03auvm_registry_common__pi151___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
