// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__emit__Vstatic__dash = ""s;
    vlSelfRef.__PVT__m_emit_element__Vstatic__proxy 
        = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_printer_element_proxy, vlProcess, vlSymsp, "proxy"s);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_table_printer__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10058]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 461, 28, "", "v_line/uvm_table_printer", "block", "461");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10059]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 461, 40, "", "v_line/uvm_table_printer", "block", "461");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10060]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 461, 6, "", "v_branch/uvm_table_printer", "if", "461,1472");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10061]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 461, 7, "", "v_branch/uvm_table_printer", "else", "461");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10062]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 461, 24, "", "v_line/uvm_table_printer", "block", "461");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10063]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 461, 29, "", "v_line/uvm_table_printer", "block", "461");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10064]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 461, 30, "", "v_line/uvm_table_printer", "block", "461");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10065]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 510, 28, "", "v_line/uvm_table_printer", "block", "510");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10066]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 511, 28, "", "v_line/uvm_table_printer", "block", "511");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10067]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 512, 28, "", "v_line/uvm_table_printer", "block", "512");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10068]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 513, 29, "", "v_line/uvm_table_printer", "block", "513");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10069]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1472, 29, "", "v_line/uvm_table_printer", "block", "1472-1473");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10070]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1494, 4, "", "v_branch/uvm_table_printer", "if", "1494");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10071]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1494, 5, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10072]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1495, 4, "", "v_branch/uvm_table_printer", "if", "1495");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10073]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1495, 5, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10074]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1496, 4, "", "v_branch/uvm_table_printer", "if", "1496");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10075]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1496, 5, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10076]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1497, 4, "", "v_branch/uvm_table_printer", "if", "1497");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10077]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1497, 5, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10078]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1477, 15, "", "v_line/uvm_table_printer", "block", "1477-1484,1486,1488-1492,1499");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10079]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1516, 6, "", "v_branch/uvm_table_printer", "if", "1516");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10080]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1516, 7, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10081]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1515, 3, "", "v_branch/uvm_table_printer", "if", "1515-1516");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10082]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1515, 4, "", "v_branch/uvm_table_printer", "else", "1518");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10083]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1515, 7, "", "v_expr/uvm_table_printer", "(m_flushed==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10084]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1515, 7, "", "v_expr/uvm_table_printer", "(m_flushed==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10085]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1529, 4, "", "v_branch/uvm_table_printer", "if", "1529-1531");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10086]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1529, 5, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10087]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1549, 5, "", "v_branch/uvm_table_printer", "if", "1549-1551");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10088]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1549, 6, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10089]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1553, 5, "", "v_branch/uvm_table_printer", "if", "1553-1555");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10090]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1553, 6, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10091]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1557, 5, "", "v_branch/uvm_table_printer", "if", "1557-1559");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10092]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1557, 6, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10093]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1506, 17, "", "v_line/uvm_table_printer", "block", "1506,1508-1511,1513,1519,1521-1524,1526-1528,1545-1548,1561-1562,1564,1567,1577-1578,1581");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10094]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1618, 7, "", "v_branch/uvm_table_printer", "if", "1618-1620");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10095]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1618, 8, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10096]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1621, 7, "", "v_branch/uvm_table_printer", "if", "1621-1622");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10097]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1621, 8, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10098]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1623, 7, "", "v_branch/uvm_table_printer", "if", "1623-1624");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10099]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1623, 8, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10100]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1628, 29, "", "v_line/uvm_table_printer", "block", "1628-1629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10101]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1584, 17, "", "v_line/uvm_table_printer", "block", "1584-1588,1606,1608-1617,1625,1627-1628,1631");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10102]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1794, 15, "", "v_line/uvm_table_printer", "block", "1794,1798");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10103]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1809, 4, "", "v_branch/uvm_table_printer", "if", "1809-1810");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10104]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1809, 5, "", "v_branch/uvm_table_printer", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10105]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1802, 28, "", "v_line/uvm_table_printer", "block", "1802,1812");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10106]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1816, 15, "", "v_line/uvm_table_printer", "block", "1816-1818");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10107]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1820, 14, "", "v_line/uvm_table_printer", "block", "1820-1822");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10108]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1825, 15, "", "v_line/uvm_table_printer", "block", "1825-1830");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_table_printer___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_table_printer* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_table_printer___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
