// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg(Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__print_resources__Vstatic__printer 
        = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, ""s);
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__ri_tab.atDefault().__PVT__precedence = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7848]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 130, 12, "", "v_line/uvm_resource_pool", "block", "130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7849]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 139, 37, "", "v_line/uvm_resource_pool", "block", "139-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7850]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 153, 16, "", "v_line/uvm_resource_pool", "block", "153-154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7851]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 203, 5, "", "v_branch/uvm_resource_pool", "if", "203-205");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7852]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 203, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7853]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 216, 9, "", "v_branch/uvm_resource_pool", "if", "216-218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7854]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 216, 10, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7855]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 214, 7, "", "v_line/uvm_resource_pool", "block", "214-215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7856]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 211, 5, "", "v_branch/uvm_resource_pool", "if", "211-212,214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7857]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 211, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7858]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 223, 5, "", "v_branch/uvm_resource_pool", "if", "223-224");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7859]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 223, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7860]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 234, 5, "", "v_branch/uvm_resource_pool", "if", "234-235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7861]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 234, 6, "", "v_branch/uvm_resource_pool", "else", "237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7862]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 194, 17, "", "v_line/uvm_resource_pool", "block", "194,196-200,210,228,230,233,241-242,245-246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7863]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 259, 17, "", "v_line/uvm_resource_pool", "block", "259-260,264-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7864]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 277, 17, "", "v_line/uvm_resource_pool", "block", "277-278,282-283");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7865]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 295, 17, "", "v_line/uvm_resource_pool", "block", "295-296,300-301");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7866]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 315, 5, "", "v_branch/uvm_resource_pool", "if", "315-316");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7867]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 315, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7868]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 326, 9, "", "v_branch/uvm_resource_pool", "if", "326,328-329");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7869]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 326, 10, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7870]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 324, 7, "", "v_line/uvm_resource_pool", "block", "324-325");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7871]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 321, 5, "", "v_branch/uvm_resource_pool", "if", "321-322,324");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7872]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 321, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7873]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 306, 24, "", "v_line/uvm_resource_pool", "block", "306-307,309-312,320,335-336");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7874]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 354, 9, "", "v_branch/uvm_resource_pool", "if", "354-355");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7875]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 354, 10, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7876]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 353, 7, "", "v_branch/uvm_resource_pool", "if", "353");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7877]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 353, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7878]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 367, 19, "", "v_branch/uvm_resource_pool", "if", "367-369");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7879]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 367, 20, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7880]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 366, 15, "", "v_line/uvm_resource_pool", "block", "366");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7881]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 362, 11, "", "v_branch/uvm_resource_pool", "if", "362-363");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7882]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 362, 12, "", "v_branch/uvm_resource_pool", "else", "364-366");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7883]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 359, 7, "", "v_branch/uvm_resource_pool", "if", "359-360");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7884]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 359, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7885]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 375, 7, "", "v_branch/uvm_resource_pool", "if", "375-376");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7886]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 375, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7887]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 351, 5, "", "v_branch/uvm_resource_pool", "if", "351-352,358");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7888]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 351, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7889]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 347, 25, "", "v_line/uvm_resource_pool", "block", "347-349");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7890]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 391, 5, "", "v_branch/uvm_resource_pool", "if", "391-392");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7891]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 391, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7892]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 391, 8, "", "v_expr/uvm_resource_pool", "(is_auditing()==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7893]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 391, 8, "", "v_expr/uvm_resource_pool", "(is_auditing()==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7894]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 385, 17, "", "v_line/uvm_resource_pool", "block", "385,387,394,396-399,401");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7895]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 420, 18, "", "v_expr/uvm_resource_pool", "(success==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7896]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 420, 18, "", "v_expr/uvm_resource_pool", "(success==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7897]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 415, 25, "", "v_line/uvm_resource_pool", "block", "415-421");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7898]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 423, 6, "", "v_branch/uvm_resource_pool", "if", "423");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7899]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 423, 7, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7900]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 408, 17, "", "v_line/uvm_resource_pool", "block", "408,410-412,414-415,423");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7901]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 470, 2, "", "v_branch/uvm_resource_pool", "if", "470");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7902]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 470, 3, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7903]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 472, 2, "", "v_branch/uvm_resource_pool", "if", "472");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7904]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 472, 3, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7905]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 477, 5, "", "v_branch/uvm_resource_pool", "if", "477-478");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7906]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 477, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7907]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 483, 6, "", "v_branch/uvm_resource_pool", "if", "483");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7908]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 483, 7, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7909]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 482, 5, "", "v_branch/uvm_resource_pool", "if", "482,484");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7910]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 482, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7911]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 493, 7, "", "v_branch/uvm_resource_pool", "if", "493,495");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7912]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 493, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7913]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 489, 5, "", "v_line/uvm_resource_pool", "block", "489-491");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7914]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 456, 41, "", "v_line/uvm_resource_pool", "block", "456,460-464,467-469,471,487-489,498");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7915]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 519, 5, "", "v_branch/uvm_resource_pool", "if", "519-520");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7916]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 519, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7917]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 530, 7, "", "v_branch/uvm_resource_pool", "if", "530-532");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7918]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 530, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7919]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 527, 5, "", "v_line/uvm_resource_pool", "block", "527-529");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7920]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 511, 37, "", "v_line/uvm_resource_pool", "block", "511,513-517,523-524,527,536");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7921]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 557, 7, "", "v_branch/uvm_resource_pool", "if", "557-558");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7922]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 557, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7923]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 554, 5, "", "v_line/uvm_resource_pool", "block", "554-556,559");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7924]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 563, 7, "", "v_line/uvm_resource_pool", "block", "563-565");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7925]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 562, 17, "", "v_line/uvm_resource_pool", "block", "562-563");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7926]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 562, 17, "", "v_branch/uvm_resource_pool", "if", "562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7927]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 562, 18, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7928]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 549, 24, "", "v_line/uvm_resource_pool", "block", "549-552,554,561-562");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7929]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 591, 5, "", "v_branch/uvm_resource_pool", "if", "591-593");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7930]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 591, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7931]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 581, 30, "", "v_line/uvm_resource_pool", "block", "581,586-587,589,596-598");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7932]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 618, 5, "", "v_branch/uvm_resource_pool", "if", "618-619");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7933]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 618, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7934]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 625, 7, "", "v_branch/uvm_resource_pool", "if", "625-626");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7935]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 625, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7936]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 623, 5, "", "v_line/uvm_resource_pool", "block", "623-624");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7937]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 610, 41, "", "v_line/uvm_resource_pool", "block", "610,613-616,622-623,629");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7938]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 647, 5, "", "v_branch/uvm_resource_pool", "if", "647-649");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7939]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 647, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7940]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 639, 30, "", "v_line/uvm_resource_pool", "block", "639,642-643,645,652-654");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7941]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 666, 41, "", "v_line/uvm_resource_pool", "block", "666,669");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7942]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 689, 7, "", "v_branch/uvm_resource_pool", "if", "689-690");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7943]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 689, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7944]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 694, 9, "", "v_branch/uvm_resource_pool", "if", "694-695");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7945]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 694, 10, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7946]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 692, 7, "", "v_line/uvm_resource_pool", "block", "692-693");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7947]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 688, 19, "", "v_line/uvm_resource_pool", "block", "688,691-692");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7948]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 688, 19, "", "v_branch/uvm_resource_pool", "if", "688");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7949]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 688, 20, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7950]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 678, 41, "", "v_line/uvm_resource_pool", "block", "678,680-684,686,688,699");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7951]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 731, 9, "", "v_branch/uvm_resource_pool", "if", "731-732");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7952]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 731, 10, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7953]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 729, 7, "", "v_line/uvm_resource_pool", "block", "729-730");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7954]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 735, 15, "", "v_line/uvm_resource_pool", "block", "727-729,735");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7955]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 727, 5, "", "v_line/uvm_resource_pool", "block", "735");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7956]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 726, 5, "", "v_branch/uvm_resource_pool", "if", "726");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7957]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 726, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7958]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 712, 41, "", "v_line/uvm_resource_pool", "block", "712,714-716,718-719,724,738");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7959]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 773, 7, "", "v_branch/uvm_resource_pool", "if", "773");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7960]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 773, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7961]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 771, 5, "", "v_line/uvm_resource_pool", "block", "771-772");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7962]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 776, 5, "", "v_branch/uvm_resource_pool", "if", "776-779");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7963]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 776, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7964]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 785, 35, "", "v_line/uvm_resource_pool", "case", "785");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7965]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 786, 34, "", "v_line/uvm_resource_pool", "case", "786");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7966]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 761, 23, "", "v_line/uvm_resource_pool", "block", "761,765-766,768-769,771,782,784");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7967]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 806, 5, "", "v_branch/uvm_resource_pool", "if", "806-808");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7968]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 806, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7969]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 812, 5, "", "v_branch/uvm_resource_pool", "if", "812-815");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7970]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 812, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7971]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 799, 17, "", "v_line/uvm_resource_pool", "block", "799,802-804,811,818-819");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7972]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 837, 5, "", "v_branch/uvm_resource_pool", "if", "837-839");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7973]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 837, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7974]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 843, 5, "", "v_branch/uvm_resource_pool", "if", "843-846");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7975]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 843, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7976]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 830, 17, "", "v_line/uvm_resource_pool", "block", "830,833-835,842,849-850");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7977]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 862, 17, "", "v_line/uvm_resource_pool", "block", "862,864-865");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7978]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 870, 24, "", "v_line/uvm_resource_pool", "block", "870-872");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7979]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 876, 32, "", "v_line/uvm_resource_pool", "block", "876-878");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7980]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 891, 5, "", "v_branch/uvm_resource_pool", "if", "891-893");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7981]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 891, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7982]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 902, 9, "", "v_branch/uvm_resource_pool", "if", "902");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7983]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 902, 10, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7984]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 900, 7, "", "v_line/uvm_resource_pool", "block", "900-901");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7985]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 897, 5, "", "v_branch/uvm_resource_pool", "if", "897-898,900");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7986]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 897, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7987]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 906, 5, "", "v_branch/uvm_resource_pool", "if", "906-908");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7988]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 906, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7989]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 883, 25, "", "v_line/uvm_resource_pool", "block", "883,886-889,896,911");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7990]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 923, 5, "", "v_branch/uvm_resource_pool", "if", "923-925");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7991]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 923, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7992]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 934, 9, "", "v_branch/uvm_resource_pool", "if", "934");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7993]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 934, 10, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7994]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 932, 7, "", "v_line/uvm_resource_pool", "block", "932-933");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7995]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 929, 5, "", "v_branch/uvm_resource_pool", "if", "929-930,932");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7996]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 929, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7997]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 938, 5, "", "v_branch/uvm_resource_pool", "if", "938-940");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7998]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 938, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7999]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 916, 33, "", "v_line/uvm_resource_pool", "block", "916,918-921,928,943");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8000]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1024, 26, "", "v_line/uvm_resource_pool", "block", "1024-1030");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8001]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1024, 26, "", "v_branch/uvm_resource_pool", "if", "1024");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8002]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1024, 27, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8003]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1020, 7, "", "v_branch/uvm_resource_pool", "if", "1020-1024,1033");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8004]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1020, 8, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8005]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 998, 5, "", "v_line/uvm_resource_pool", "block", "998-1004,1006-1007,1009,1011-1014,1016,1018,1036");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8006]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 989, 17, "", "v_line/uvm_resource_pool", "block", "989,993-996,998,1039");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8007]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1062, 5, "", "v_branch/uvm_resource_pool", "if", "1062-1066");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8008]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1062, 6, "", "v_branch/uvm_resource_pool", "else", "1068");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8009]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1071, 6, "", "v_branch/uvm_resource_pool", "if", "1071");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8010]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1071, 7, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8011]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1052, 17, "", "v_line/uvm_resource_pool", "block", "1052,1054-1056,1061,1071");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8012]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1087, 5, "", "v_branch/uvm_resource_pool", "if", "1087-1089");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8013]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1087, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8014]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1093, 5, "", "v_branch/uvm_resource_pool", "if", "1093-1094");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8015]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1093, 6, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8016]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1102, 19, "", "v_line/uvm_resource_pool", "block", "1102-1103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8017]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1102, 19, "", "v_branch/uvm_resource_pool", "if", "1102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8018]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1102, 20, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8019]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1108, 6, "", "v_branch/uvm_resource_pool", "if", "1108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8020]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1108, 7, "", "v_branch/uvm_resource_pool", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8021]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1082, 17, "", "v_line/uvm_resource_pool", "block", "1082,1084-1085,1096-1100,1102,1106,1108");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_resource_pool___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_resource_pool* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_resource_pool___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
