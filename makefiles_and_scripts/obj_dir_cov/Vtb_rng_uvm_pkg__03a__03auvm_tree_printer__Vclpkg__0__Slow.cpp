// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_tree_printer__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_tree_printer__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_emit_element__Vstatic__proxy 
        = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy, vlProcess, vlSymsp, "proxy"s);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_tree_printer__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10104]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 544, 32, "", "v_line/uvm_tree_printer", "block", "544");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10105]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 548, 28, "", "v_line/uvm_tree_printer", "block", "548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10106]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 548, 40, "", "v_line/uvm_tree_printer", "block", "548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10107]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 548, 6, "", "v_branch/uvm_tree_printer", "if", "548,1643");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10108]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 548, 7, "", "v_branch/uvm_tree_printer", "else", "548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10109]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 548, 24, "", "v_line/uvm_tree_printer", "block", "548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10110]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 548, 29, "", "v_line/uvm_tree_printer", "block", "548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10111]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 548, 30, "", "v_line/uvm_tree_printer", "block", "548");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10112]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1643, 28, "", "v_line/uvm_tree_printer", "block", "1643-1646");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10113]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1654, 15, "", "v_line/uvm_tree_printer", "block", "1654-1656");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10114]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1658, 14, "", "v_line/uvm_tree_printer", "block", "1658-1660");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10115]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1663, 15, "", "v_line/uvm_tree_printer", "block", "1663-1665");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10116]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1667, 17, "", "v_line/uvm_tree_printer", "block", "1667-1669");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10117]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1672, 15, "", "v_line/uvm_tree_printer", "block", "1672-1673");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10118]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1689, 6, "", "v_branch/uvm_tree_printer", "if", "1689");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10119]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1689, 7, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10120]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1688, 3, "", "v_branch/uvm_tree_printer", "if", "1688-1689");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10121]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1688, 4, "", "v_branch/uvm_tree_printer", "else", "1691");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10122]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1688, 7, "", "v_expr/uvm_tree_printer", "(m_flushed==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10123]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1688, 7, "", "v_expr/uvm_tree_printer", "(m_flushed==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10124]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1694, 32, "", "v_expr/uvm_tree_printer", "((m_newline == \" \")==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10125]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1694, 32, "", "v_expr/uvm_tree_printer", "((m_newline == \"\")==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10126]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1694, 32, "", "v_expr/uvm_tree_printer", "((m_newline == \"\")==0 && (m_newline == \" \")==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10127]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1716, 3, "", "v_branch/uvm_tree_printer", "if", "1716-1717");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10128]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1716, 4, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10129]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1716, 23, "", "v_expr/uvm_tree_printer", "((m_newline == \" \")==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10130]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1716, 23, "", "v_expr/uvm_tree_printer", "((m_newline == \"\")==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10131]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1716, 23, "", "v_expr/uvm_tree_printer", "((m_newline == \"\")==0 && (m_newline == \" \")==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10132]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1681, 17, "", "v_line/uvm_tree_printer", "block", "1681,1683-1686,1693-1694,1705,1719");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10133]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1756, 9, "", "v_branch/uvm_tree_printer", "if", "1756-1757");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10134]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1756, 10, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10135]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1754, 7, "", "v_branch/uvm_tree_printer", "if", "1754-1755");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10136]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1754, 8, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10137]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1765, 9, "", "v_branch/uvm_tree_printer", "if", "1765,1769");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10138]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1765, 10, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10139]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1762, 7, "", "v_line/uvm_tree_printer", "elsif", "1762-1763");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10140]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1762, 33, "", "v_expr/uvm_tree_printer", "(((value_str) > 32'sh0)==1 && ((value_str.getc(32'sh0)) == 8'h40)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10141]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1762, 33, "", "v_expr/uvm_tree_printer", "(((value_str.getc(32'sh0)) == 8'h40)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10142]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1762, 33, "", "v_expr/uvm_tree_printer", "(((value_str) > 32'sh0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10143]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1773, 9, "", "v_branch/uvm_tree_printer", "if", "1773-1774");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10144]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1773, 10, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10145]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1772, 7, "", "v_branch/uvm_tree_printer", "if", "1772");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10146]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1772, 8, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10147]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1777, 7, "", "v_branch/uvm_tree_printer", "if", "1777-1778");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10148]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1777, 8, "", "v_branch/uvm_tree_printer", "else", "1780");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10149]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1783, 33, "", "v_line/uvm_tree_printer", "block", "1783-1784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10150]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1787, 7, "", "v_branch/uvm_tree_printer", "if", "1787-1788");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10151]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1787, 8, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10152]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1722, 17, "", "v_line/uvm_tree_printer", "block", "1722-1726,1744-1749,1751,1761,1783,1791");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10153]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1835, 15, "", "v_line/uvm_tree_printer", "block", "1835,1839");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10154]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1850, 4, "", "v_branch/uvm_tree_printer", "if", "1850-1851");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10155]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1850, 5, "", "v_branch/uvm_tree_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10156]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1843, 27, "", "v_line/uvm_tree_printer", "block", "1843,1853");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_tree_printer___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_tree_printer___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
