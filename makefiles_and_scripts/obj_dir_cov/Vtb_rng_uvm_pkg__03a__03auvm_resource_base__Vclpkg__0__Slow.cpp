// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7804]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 254, 12, "", "v_line/uvm_resource_base", "block", "254-257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7805]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 268, 43, "", "v_line/uvm_resource_base", "block", "268");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7806]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 281, 17, "", "v_line/uvm_resource_base", "block", "281-282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7807]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 294, 17, "", "v_line/uvm_resource_base", "block", "294-295");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7808]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 300, 16, "", "v_line/uvm_resource_base", "block", "300-301");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7809]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 318, 8, "", "v_line/uvm_resource_base", "block", "318-320");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7810]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 387, 19, "", "v_line/uvm_resource_base", "block", "387-388");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7811]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 392, 32, "", "v_line/uvm_resource_base", "block", "392");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7812]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 393, 32, "", "v_line/uvm_resource_base", "block", "393");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7813]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 395, 17, "", "v_line/uvm_resource_base", "block", "395-397");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7814]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 449, 5, "", "v_branch/uvm_resource_base", "if", "449-450");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7815]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 449, 6, "", "v_branch/uvm_resource_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7816]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 449, 8, "", "v_expr/uvm_resource_base", "(is_auditing()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7817]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 449, 8, "", "v_expr/uvm_resource_base", "(is_auditing()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7818]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 455, 5, "", "v_branch/uvm_resource_base", "if", "455-456");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7819]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 455, 6, "", "v_branch/uvm_resource_base", "else", "458");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7820]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 461, 5, "", "v_branch/uvm_resource_base", "if", "461-462");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7821]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 461, 6, "", "v_branch/uvm_resource_base", "else", "464");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7822]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 439, 17, "", "v_line/uvm_resource_base", "block", "439,441-442,467-469");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7823]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 494, 9, "", "v_branch/uvm_resource_base", "if", "494-495");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7824]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 494, 10, "", "v_branch/uvm_resource_base", "else", "497");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7825]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 490, 7, "", "v_branch/uvm_resource_base", "if", "490-493,498-500");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7826]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 490, 8, "", "v_branch/uvm_resource_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7827]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 489, 5, "", "v_branch/uvm_resource_base", "if", "489");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7828]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 489, 6, "", "v_branch/uvm_resource_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7829]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 480, 17, "", "v_line/uvm_resource_base", "block", "480,482");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7830]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 520, 5, "", "v_branch/uvm_resource_base", "if", "520-521");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7831]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 520, 6, "", "v_branch/uvm_resource_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7832]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 523, 21, "", "v_expr/uvm_resource_base", "((32'h0 != access.next(i))==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7833]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 523, 21, "", "v_expr/uvm_resource_base", "(i__Vfirst==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7834]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 523, 21, "", "v_expr/uvm_resource_base", "(i__Vfirst==0 && (32'h0 != access.next(i))==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7835]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 523, 21, "", "v_line/uvm_resource_base", "block", "523-530");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7836]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 523, 21, "", "v_branch/uvm_resource_base", "if", "523");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7837]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 523, 22, "", "v_branch/uvm_resource_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7838]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 532, 6, "", "v_branch/uvm_resource_base", "if", "532");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7839]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 532, 7, "", "v_branch/uvm_resource_base", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7840]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 513, 25, "", "v_line/uvm_resource_base", "block", "513,515-518,523,532");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7841]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource_base.svh", 541, 17, "", "v_line/uvm_resource_base", "block", "541-545");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_base___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource_base* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_base___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
