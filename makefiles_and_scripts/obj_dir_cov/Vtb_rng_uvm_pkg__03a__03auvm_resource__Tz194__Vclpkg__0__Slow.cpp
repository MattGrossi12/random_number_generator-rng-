// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194> __Vfunc_get_type__0__Vfuncout;
    // Body
    vlSelfRef.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__0__Vfuncout);
    vlSelfRef.__PVT__my_type = __Vfunc_get_type__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[9123]);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9123]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1126, 30, "", "v_line/uvm_resource__Tz194", "block", "1126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9124]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1134, 39, "", "v_line/uvm_resource__Tz194", "block", "1134-1135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9125]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1139, 5, "", "v_branch/uvm_resource__Tz194", "if", "1139,1152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9126]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1139, 6, "", "v_branch/uvm_resource__Tz194", "else", "1140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9127]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1137, 31, "", "v_line/uvm_resource__Tz194", "block", "1137-1138,1141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9128]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1143, 29, "", "v_line/uvm_resource__Tz194", "block", "1143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9129]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1143, 30, "", "v_line/uvm_resource__Tz194", "block", "1143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9130]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1152, 12, "", "v_line/uvm_resource__Tz194", "block", "1152-1153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9131]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1157, 27, "", "v_line/uvm_resource__Tz194", "block", "1157-1158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9132]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1161, 27, "", "v_line/uvm_resource__Tz194", "block", "1161-1162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9133]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1180, 5, "", "v_branch/uvm_resource__Tz194", "if", "1152,1180-1181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9134]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1180, 6, "", "v_branch/uvm_resource__Tz194", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9135]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1179, 29, "", "v_line/uvm_resource__Tz194", "block", "1179,1182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9136]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1193, 30, "", "v_line/uvm_resource__Tz194", "block", "1193-1194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9137]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1330, 14, "", "v_line/uvm_resource__Tz194", "block", "1330-1332");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9138]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1350, 5, "", "v_branch/uvm_resource__Tz194", "if", "1350-1352");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9139]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1350, 6, "", "v_branch/uvm_resource__Tz194", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9140]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1357, 5, "", "v_branch/uvm_resource__Tz194", "if", "1357-1358");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9141]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1357, 6, "", "v_branch/uvm_resource__Tz194", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9142]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1348, 17, "", "v_line/uvm_resource__Tz194", "block", "1348,1360,1363-1364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9143]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1403, 5, "", "v_branch/uvm_resource__Tz194", "if", "1403-1404");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9144]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1403, 6, "", "v_branch/uvm_resource__Tz194", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9145]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1410, 7, "", "v_branch/uvm_resource__Tz194", "if", "1410-1411");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9146]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1410, 8, "", "v_branch/uvm_resource__Tz194", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9147]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1409, 5, "", "v_line/uvm_resource__Tz194", "block", "1409");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9148]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1416, 5, "", "v_branch/uvm_resource__Tz194", "if", "1416-1417");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9149]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1416, 6, "", "v_branch/uvm_resource__Tz194", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9150]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1395, 29, "", "v_line/uvm_resource__Tz194", "block", "1395,1397-1401,1406-1407,1409,1415,1419");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz194___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
