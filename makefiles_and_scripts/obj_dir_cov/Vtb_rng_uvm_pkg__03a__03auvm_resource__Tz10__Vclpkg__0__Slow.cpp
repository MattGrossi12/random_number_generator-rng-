// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> __Vfunc_get_type__0__Vfuncout;
    // Body
    vlSelfRef.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__0__Vfuncout);
    vlSelfRef.__PVT__my_type = __Vfunc_get_type__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[8664]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8664]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1126, 30, "", "v_line/uvm_resource__Tz10", "block", "1126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8665]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1134, 39, "", "v_line/uvm_resource__Tz10", "block", "1134-1135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8666]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1139, 5, "", "v_branch/uvm_resource__Tz10", "if", "1139,1152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8667]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1139, 6, "", "v_branch/uvm_resource__Tz10", "else", "1140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8668]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1137, 31, "", "v_line/uvm_resource__Tz10", "block", "1137-1138,1141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8669]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1143, 29, "", "v_line/uvm_resource__Tz10", "block", "1143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8670]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1143, 30, "", "v_line/uvm_resource__Tz10", "block", "1143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8671]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1152, 12, "", "v_line/uvm_resource__Tz10", "block", "1152-1153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8672]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1157, 27, "", "v_line/uvm_resource__Tz10", "block", "1157-1158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8673]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1161, 27, "", "v_line/uvm_resource__Tz10", "block", "1161-1162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8674]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1180, 5, "", "v_branch/uvm_resource__Tz10", "if", "1152,1180-1181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8675]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1180, 6, "", "v_branch/uvm_resource__Tz10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8676]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1179, 29, "", "v_line/uvm_resource__Tz10", "block", "1179,1182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8677]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1193, 30, "", "v_line/uvm_resource__Tz10", "block", "1193-1194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8678]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1330, 14, "", "v_line/uvm_resource__Tz10", "block", "1330-1332");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8679]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1350, 5, "", "v_branch/uvm_resource__Tz10", "if", "1350-1352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8680]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1350, 6, "", "v_branch/uvm_resource__Tz10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8681]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1357, 5, "", "v_branch/uvm_resource__Tz10", "if", "1357-1358");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8682]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1357, 6, "", "v_branch/uvm_resource__Tz10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8683]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1348, 17, "", "v_line/uvm_resource__Tz10", "block", "1348,1360,1363-1364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8684]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1403, 5, "", "v_branch/uvm_resource__Tz10", "if", "1403-1404");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8685]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1403, 6, "", "v_branch/uvm_resource__Tz10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8686]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1410, 7, "", "v_branch/uvm_resource__Tz10", "if", "1410-1411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8687]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1410, 8, "", "v_branch/uvm_resource__Tz10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8688]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1409, 5, "", "v_line/uvm_resource__Tz10", "block", "1409");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8689]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1416, 5, "", "v_branch/uvm_resource__Tz10", "if", "1416-1417");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8690]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1416, 6, "", "v_branch/uvm_resource__Tz10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8691]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1395, 29, "", "v_line/uvm_resource__Tz10", "block", "1395,1397-1401,1406-1407,1409,1415,1419");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
