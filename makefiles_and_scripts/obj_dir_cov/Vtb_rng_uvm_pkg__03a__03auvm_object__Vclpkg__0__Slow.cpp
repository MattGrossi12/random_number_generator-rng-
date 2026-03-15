// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset(Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg___ctor_var_reset\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_inst_count = 0;
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg___configure_coverage\n"); );
    Vtb_rng__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 240, 27, "", "v_line/uvm_object", "block", "240");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 260, 31, "", "v_line/uvm_object", "block", "260");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 853, 22, "", "v_line/uvm_object", "block", "853,855-856");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 862, 14, "", "v_line/uvm_object", "block", "862-864");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 870, 15, "", "v_line/uvm_object", "block", "870-872");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 879, 3, "", "v_branch/uvm_object", "if", "879-880");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 879, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 878, 15, "", "v_line/uvm_object", "block", "878");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 887, 29, "", "v_line/uvm_object", "block", "887-889");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 896, 14, "", "v_line/uvm_object", "block", "896-897");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 907, 3, "", "v_branch/uvm_object", "if", "907");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 907, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 904, 29, "", "v_line/uvm_object", "block", "904-906,908");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 915, 14, "", "v_line/uvm_object", "block", "915-916");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 923, 17, "", "v_line/uvm_object", "block", "923-924");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 931, 17, "", "v_line/uvm_object", "block", "931-932");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 939, 15, "", "v_line/uvm_object", "block", "939-940");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 948, 3, "", "v_branch/uvm_object", "if", "948");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 948, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 947, 15, "", "v_line/uvm_object", "block", "947,949");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 959, 3, "", "v_branch/uvm_object", "if", "959");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 959, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 960, 3, "", "v_branch/uvm_object", "if", "960-962");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 960, 4, "", "v_branch/uvm_object", "else", "964-965");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 956, 17, "", "v_line/uvm_object", "block", "956-957,968,970");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 978, 17, "", "v_line/uvm_object", "block", "978-979");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1055, 3, "", "v_branch/uvm_object", "if", "1055-1056");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1055, 4, "", "v_branch/uvm_object", "else", "1058,1095-1100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1054, 16, "", "v_line/uvm_object", "block", "1054");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1110, 15, "", "v_line/uvm_object", "block", "1110,1112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1122, 3, "", "v_branch/uvm_object", "if", "1122-1123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1122, 4, "", "v_branch/uvm_object", "else", "1125,1133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1119, 21, "", "v_line/uvm_object", "block", "1119-1121,1126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1138, 6, "", "v_branch/uvm_object", "if", "1138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1138, 7, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1137, 3, "", "v_branch/uvm_object", "if", "1137-1139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1137, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1142, 3, "", "v_branch/uvm_object", "if", "1142-1144");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1142, 4, "", "v_branch/uvm_object", "else", "1147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1149, 2, "", "v_branch/uvm_object", "if", "1149-1150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1149, 3, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1133, 15, "", "v_line/uvm_object", "block", "1133-1135,1152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1159, 15, "", "v_line/uvm_object", "block", "1159-1160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[807]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1169, 3, "", "v_branch/uvm_object", "if", "1169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[808]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1169, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[809]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1170, 3, "", "v_branch/uvm_object", "if", "1170-1171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[810]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1170, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[811]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1167, 15, "", "v_line/uvm_object", "block", "1167,1172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[812]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1180, 15, "", "v_line/uvm_object", "block", "1180,1182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[813]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1189, 15, "", "v_line/uvm_object", "block", "1189,1192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[814]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1200, 15, "", "v_line/uvm_object", "block", "1200-1201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[815]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1209, 3, "", "v_branch/uvm_object", "if", "1209-1210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[816]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1209, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[817]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1211, 3, "", "v_branch/uvm_object", "if", "1211-1212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[818]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1211, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[819]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1208, 15, "", "v_line/uvm_object", "block", "1208,1213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[820]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1221, 14, "", "v_line/uvm_object", "block", "1221,1223-1225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[821]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1231, 14, "", "v_line/uvm_object", "block", "1231,1233-1235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[822]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1242, 14, "", "v_line/uvm_object", "block", "1242,1244-1246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[823]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1252, 14, "", "v_line/uvm_object", "block", "1252,1254-1256");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[824]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1265, 6, "", "v_branch/uvm_object", "if", "1265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[825]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1265, 7, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1264, 3, "", "v_branch/uvm_object", "if", "1264-1265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1264, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1263, 15, "", "v_line/uvm_object", "block", "1263,1266");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1274, 3, "", "v_branch/uvm_object", "if", "1274-1275");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1274, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1276, 3, "", "v_branch/uvm_object", "if", "1276-1277");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1276, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1273, 15, "", "v_line/uvm_object", "block", "1273");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1285, 14, "", "v_line/uvm_object", "block", "1285-1288");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1295, 14, "", "v_line/uvm_object", "block", "1295,1297-1299");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1306, 14, "", "v_line/uvm_object", "block", "1306,1308-1310");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1317, 14, "", "v_line/uvm_object", "block", "1317,1319-1321");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1327, 14, "", "v_line/uvm_object", "block", "1327,1329-1331");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1335, 15, "", "v_line/uvm_object", "block", "1335");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1345, 6, "", "v_branch/uvm_object", "if", "1345");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1345, 7, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1344, 3, "", "v_branch/uvm_object", "if", "1344-1345");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1344, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1343, 15, "", "v_line/uvm_object", "block", "1343,1346");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1355, 3, "", "v_branch/uvm_object", "if", "1355-1356");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1355, 4, "", "v_branch/uvm_object", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1353, 15, "", "v_line/uvm_object", "block", "1353,1358");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1365, 15, "", "v_line/uvm_object", "block", "1365-1366");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1373, 28, "", "v_line/uvm_object", "block", "1373-1374");
}

VL_ATTR_COLD void Vtb_rng_uvm_pkg__03a__03auvm_object___configure_coverage(Vtb_rng_uvm_pkg__03a__03auvm_object* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
