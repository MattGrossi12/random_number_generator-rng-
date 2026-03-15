// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17788]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 107, 5, "", "v_branch/uvm_cmdline_processor", "if", "107-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17789]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 107, 6, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17790]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 106, 41, "", "v_line/uvm_cmdline_processor", "block", "106,109-110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17791]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 127, 17, "", "v_line/uvm_cmdline_processor", "block", "127-128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17792]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 142, 17, "", "v_line/uvm_cmdline_processor", "block", "142-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17793]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 155, 17, "", "v_line/uvm_cmdline_processor", "block", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17794]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 180, 65, "", "v_expr/uvm_cmdline_processor", "(((match) > 32'sh2)==1 && ((match.getc(32'sh0)) == 8'h2f)==1 && ((match.getc(((match) - 32'sh1))) == 8'h2f)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17795]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 180, 65, "", "v_expr/uvm_cmdline_processor", "(((match.getc(((match) - 32'sh1))) == 8'h2f)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17796]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 180, 65, "", "v_expr/uvm_cmdline_processor", "(((match.getc(32'sh0)) == 8'h2f)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17797]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 180, 65, "", "v_expr/uvm_cmdline_processor", "(((match) > 32'sh2)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17798]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 188, 12, "", "v_branch/uvm_cmdline_processor", "if", "188-189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17799]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 188, 13, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17800]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 188, 40, "", "v_expr/uvm_cmdline_processor", "(((m_argv.at(i)) >= len)==1 && ((m_argv.at(i).substr(32'sh0,(len - 32'sh1))) == match)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17801]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 188, 40, "", "v_expr/uvm_cmdline_processor", "(((m_argv.at(i).substr(32'sh0,(len - 32'sh1))) == match)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17802]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 188, 40, "", "v_expr/uvm_cmdline_processor", "(((m_argv.at(i)) >= len)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17803]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 185, 7, "", "v_line/uvm_cmdline_processor", "elsif", "185-186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17804]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 184, 21, "", "v_line/uvm_cmdline_processor", "block", "184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17805]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 179, 16, "", "v_line/uvm_cmdline_processor", "block", "179-181,183-184,193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17806]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 215, 11, "", "v_branch/uvm_cmdline_processor", "if", "215-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17807]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 215, 12, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17808]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 213, 9, "", "v_branch/uvm_cmdline_processor", "if", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17809]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 213, 10, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17810]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 212, 7, "", "v_branch/uvm_cmdline_processor", "if", "212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17811]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 212, 8, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17812]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 211, 21, "", "v_line/uvm_cmdline_processor", "block", "211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17813]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 208, 16, "", "v_line/uvm_cmdline_processor", "block", "208-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17814]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 252, 9, "", "v_branch/uvm_cmdline_processor", "if", "252-253");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17815]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 252, 10, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17816]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 251, 7, "", "v_branch/uvm_cmdline_processor", "if", "251");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17817]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 251, 8, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17818]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 250, 21, "", "v_line/uvm_cmdline_processor", "block", "250");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17819]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 246, 16, "", "v_line/uvm_cmdline_processor", "block", "246-247,249-250,256");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17820]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 266, 19, "", "v_line/uvm_cmdline_processor", "block", "266-267");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17821]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 275, 20, "", "v_line/uvm_cmdline_processor", "block", "275-276");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17822]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 291, 9, "", "v_branch/uvm_cmdline_processor", "if", "291-292");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17823]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 291, 10, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17824]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 297, 11, "", "v_branch/uvm_cmdline_processor", "if", "297-298");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17825]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 297, 12, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17826]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 294, 9, "", "v_branch/uvm_cmdline_processor", "if", "294-296");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17827]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 294, 10, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17828]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 294, 25, "", "v_expr/uvm_cmdline_processor", "(((s) >= 32'sh4)==1 && ((s.getc(32'sh0)) == 8'h2b)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17829]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 294, 25, "", "v_expr/uvm_cmdline_processor", "(((s) >= 32'sh4)==1 && ((s.getc(32'sh0)) == 8'h2d)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17830]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 294, 25, "", "v_expr/uvm_cmdline_processor", "(((s.getc(32'sh0)) == 8'h2d)==0 && ((s.getc(32'sh0)) == 8'h2b)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17831]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 294, 25, "", "v_expr/uvm_cmdline_processor", "(((s) >= 32'sh4)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17832]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 289, 7, "", "v_branch/uvm_cmdline_processor", "if", "289-290");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17833]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 289, 8, "", "v_branch/uvm_cmdline_processor", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17834]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 301, 15, "", "v_line/uvm_cmdline_processor", "block", "286-288,301");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17835]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 286, 5, "", "v_line/uvm_cmdline_processor", "block", "301");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17836]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 281, 12, "", "v_line/uvm_cmdline_processor", "block", "281-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17837]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 307, 20, "", "v_line/uvm_cmdline_processor", "case", "307");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17838]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 308, 20, "", "v_line/uvm_cmdline_processor", "case", "308");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17839]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 309, 20, "", "v_line/uvm_cmdline_processor", "case", "309");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17840]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 310, 20, "", "v_line/uvm_cmdline_processor", "case", "310");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17841]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 311, 20, "", "v_line/uvm_cmdline_processor", "case", "311");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17842]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 312, 20, "", "v_line/uvm_cmdline_processor", "case", "312");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17843]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 313, 20, "", "v_line/uvm_cmdline_processor", "case", "313");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17844]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 314, 20, "", "v_line/uvm_cmdline_processor", "case", "314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17845]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 315, 20, "", "v_line/uvm_cmdline_processor", "case", "315");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17846]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 316, 20, "", "v_line/uvm_cmdline_processor", "case", "316");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17847]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 317, 20, "", "v_line/uvm_cmdline_processor", "case", "317");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17848]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 318, 20, "", "v_line/uvm_cmdline_processor", "case", "318");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17849]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 319, 7, "", "v_line/uvm_cmdline_processor", "case", "319");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17850]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_cmdline_processor.svh", 305, 16, "", "v_line/uvm_cmdline_processor", "block", "305-306");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
