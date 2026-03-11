// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi119> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi119__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[23988]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_block"s;
    ++(vlSymsp->__Vcoverage[23993]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_check_data_width(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_check_data_width\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        check_data_width__Vfuncrtn = 0U;
        if ((0x00000040U >= width)) {
            check_data_width__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[24027]);
        }
        this->__Vfunc_uvm_report_enabled__1__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__1__severity = 3U;
        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Register model requires that UVM_REG_DATA_WIDTH be defined as %0# or greater. Currently defined as 64",0,
                                                                                32,
                                                                                width) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s, 0x000003e7U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[24028]);
        } else {
            ++(vlSymsp->__Vcoverage[24029]);
        }
        check_data_width__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[24030]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> &blks) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk624__DOT__blk;
    CData/*0:0*/ unnamedblk624__DOT__blk__Vfirst;
    unnamedblk624__DOT__blk__Vfirst = 0;
    __VlefExpr_0 = (0U != this->__PVT__m_roots.first(unnamedblk624__DOT__blk));
    if (__VlefExpr_0) {
        unnamedblk624__DOT__blk__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk624__DOT__blk__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_roots.next(unnamedblk624__DOT__blk));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk624__DOT__blk__Vfirst = 0U;
            blks.push_back(unnamedblk624__DOT__blk);
            ++(vlSymsp->__Vcoverage[24161]);
        }
        ++(vlSymsp->__Vcoverage[24162]);
    } else {
        ++(vlSymsp->__Vcoverage[24163]);
    }
    ++(vlSymsp->__Vcoverage[24164]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_blocks(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_blocks\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__10____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__10____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__12__Vfuncout;
    __Vfunc_uvm_re_match__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__12____Vincrement1;
    __Vfunc_uvm_re_match__12____Vincrement1 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk625__DOT__idx;
    unnamedblk625__DOT__idx = 0;
    IData/*31:0*/ unnamedblk626__DOT__idx;
    unnamedblk626__DOT__idx = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> r;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> b;
    find_blocks__Vfuncrtn = 0U;
    r.clear();
    b.clear();
    if ((VlNull{} != root)) {
        VL_NULL_CHECK(root, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1307)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), name);
        b = VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>>::consVC(root, 
                                                                                VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>>{});
        ++(vlSymsp->__Vcoverage[24165]);
    } else {
        this->__VnoInFunc_get_root_blocks(vlSymsp, b);
        ++(vlSymsp->__Vcoverage[24166]);
    }
    unnamedblk625__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk625__DOT__idx, b.size())) {
        r.push_back(b.at(unnamedblk625__DOT__idx));
        VL_NULL_CHECK(b.at(unnamedblk625__DOT__idx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1314)->__VnoInFunc_get_blocks(vlSymsp, r, 1U);
        unnamedblk625__DOT__idx = ((IData)(1U) + unnamedblk625__DOT__idx);
        ++(vlSymsp->__Vcoverage[24167]);
    }
    blks.clear();
    unnamedblk626__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk626__DOT__idx, r.size())) {
        VL_NULL_CHECK(r.at(unnamedblk626__DOT__idx), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1320)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__Vfunc_uvm_is_match__10__str = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
        this->__Vfunc_uvm_is_match__10__expr = name;
        this->__Vfunc_uvm_glob_to_re__11__glob = this->__Vfunc_uvm_is_match__10__expr;
        this->__Vfunc_uvm_glob_to_re__11__Vfuncout 
            = this->__Vfunc_uvm_glob_to_re__11__glob;
        ++(vlSymsp->__Vcoverage[283]);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
            = this->__Vfunc_uvm_glob_to_re__11__Vfuncout;
        this->__Vfunc_uvm_re_match__12__str = this->__Vfunc_uvm_is_match__10__str;
        this->__Vfunc_uvm_re_match__12__re = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
        __Vfunc_uvm_re_match__12____Vincrement1 = 0U;
        {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
            if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__12__re))) {
                __Vfunc_uvm_re_match__12__Vfuncout = 0U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[255]);
            }
            if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,0U))) {
                this->__Vfunc_uvm_re_match__12__re 
                    = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__12__re,1U,
                                  (VL_LEN_IN(this->__Vfunc_uvm_re_match__12__re) 
                                   - (IData)(1U)));
                ++(vlSymsp->__Vcoverage[256]);
            } else {
                ++(vlSymsp->__Vcoverage[257]);
            }
            while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                     != VL_LEN_IN(this->__Vfunc_uvm_re_match__12__str)) 
                    & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                      != VL_GETC_N(this->__Vfunc_uvm_re_match__12__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    __Vfunc_uvm_re_match__12__Vfuncout = 1U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[262]);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                ++(vlSymsp->__Vcoverage[266]);
            }
            while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    != VL_LEN_IN(this->__Vfunc_uvm_re_match__12__str))) {
                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__12__re))) {
                        __Vfunc_uvm_re_match__12__Vfuncout = 0U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[268]);
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    ++(vlSymsp->__Vcoverage[274]);
                } else {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          == VL_GETC_N(this->__Vfunc_uvm_re_match__12__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        ++(vlSymsp->__Vcoverage[269]);
                    } else {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match__12____Vincrement1 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match__12____Vincrement1;
                        ++(vlSymsp->__Vcoverage[270]);
                    }
                    if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[271]);
                    }
                    if ((VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                         == VL_GETC_N(this->__Vfunc_uvm_re_match__12__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                        ++(vlSymsp->__Vcoverage[272]);
                    }
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__12__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[273]);
                    }
                }
                ++(vlSymsp->__Vcoverage[275]);
            }
            while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                               VL_LEN_IN(this->__Vfunc_uvm_re_match__12__re)) 
                    & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                ++(vlSymsp->__Vcoverage[279]);
            }
            __Vfunc_uvm_re_match__12__Vfuncout = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                   == 
                                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__12__re))
                                                   ? 0U
                                                   : 1U);
            __Vlabel0: ;
        }
        if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
              != VL_LEN_IN(this->__Vfunc_uvm_re_match__12__str)) 
             & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            ++(vlSymsp->__Vcoverage[258]);
        }
        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
            ++(vlSymsp->__Vcoverage[259]);
        }
        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
             == VL_LEN_IN(this->__Vfunc_uvm_re_match__12__str))) {
            ++(vlSymsp->__Vcoverage[260]);
        }
        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
              != VL_GETC_N(this->__Vfunc_uvm_re_match__12__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            ++(vlSymsp->__Vcoverage[263]);
        }
        if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
            ++(vlSymsp->__Vcoverage[264]);
        }
        if ((VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
             == VL_GETC_N(this->__Vfunc_uvm_re_match__12__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
            ++(vlSymsp->__Vcoverage[265]);
        }
        if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                        VL_LEN_IN(this->__Vfunc_uvm_re_match__12__re)) 
             & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            ++(vlSymsp->__Vcoverage[276]);
        }
        if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
            ++(vlSymsp->__Vcoverage[277]);
        }
        if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                        VL_LEN_IN(this->__Vfunc_uvm_re_match__12__re))) {
            ++(vlSymsp->__Vcoverage[278]);
        }
        ++(vlSymsp->__Vcoverage[282]);
        __Vfunc_uvm_is_match__10____VlefCall_0__uvm_re_match 
            = __Vfunc_uvm_re_match__12__Vfuncout;
        __VlefCall_2__uvm_is_match = (0U == __Vfunc_uvm_is_match__10____VlefCall_0__uvm_re_match);
        ++(vlSymsp->__Vcoverage[462]);
        if (__VlefCall_2__uvm_is_match) {
            blks.push_back(r.at(unnamedblk626__DOT__idx));
            ++(vlSymsp->__Vcoverage[24168]);
        } else {
            ++(vlSymsp->__Vcoverage[24169]);
        }
        unnamedblk626__DOT__idx = ((IData)(1U) + unnamedblk626__DOT__idx);
        ++(vlSymsp->__Vcoverage[24170]);
    }
    find_blocks__Vfuncrtn = blks.size();
    ++(vlSymsp->__Vcoverage[24171]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_block(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_block\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_find_blocks__13__Vfuncout;
    __Vfunc_find_blocks__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__verbosity;
    __Vtask_uvm_report_warning__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__line;
    __Vtask_uvm_report_warning__18__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__18__report_enabled_checked;
    __Vtask_uvm_report_warning__18__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__find_blocks;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> blks;
    {
        blks.clear();
        this->__VnoInFunc_find_blocks(vlSymsp, name, blks, root, accessor, __Vfunc_find_blocks__13__Vfuncout);
        __VlefCall_0__find_blocks = __Vfunc_find_blocks__13__Vfuncout;
        if ((0U != __VlefCall_0__find_blocks)) {
            ++(vlSymsp->__Vcoverage[24173]);
        } else {
            find_block__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 1U, blks.size())) {
            this->__Vfunc_uvm_report_enabled__14__id = "MRTH1BLK"s;
            __Vfunc_uvm_report_enabled__14__severity = 1U;
            __Vfunc_uvm_report_enabled__14__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), this->__Vfunc_uvm_report_enabled__14__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__18__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__18__context_name = ""s;
                __Vtask_uvm_report_warning__18__line = 0x0000053dU;
                this->__Vtask_uvm_report_warning__18__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__18__verbosity = 0U;
                this->__Vtask_uvm_report_warning__18__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("More than one block matched the name \""s, name), "\"."s));
                    this->__Vtask_uvm_report_warning__18__id = "MRTH1BLK"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__18__id, this->__Vtask_uvm_report_warning__18__message, __Vtask_uvm_report_warning__18__verbosity, this->__Vtask_uvm_report_warning__18__filename, __Vtask_uvm_report_warning__18__line, this->__Vtask_uvm_report_warning__18__context_name, (IData)(__Vtask_uvm_report_warning__18__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[441]);
                    ++(vlSymsp->__Vcoverage[24174]);
                } else {
                    ++(vlSymsp->__Vcoverage[24175]);
                }
                ++(vlSymsp->__Vcoverage[24176]);
            } else {
                ++(vlSymsp->__Vcoverage[24177]);
            }
            find_block__Vfuncrtn = blks.at(0U);
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24178]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_object_type\n"); );
        // Locals
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi119> __Vfunc_get__0__Vfuncout;
        // Body
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi119__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
        get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
        ++(vlSymsp->__Vcoverage[23989]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create\n"); );
        // Body
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> tmp;
        if ((""s == name)) {
            tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_block, vlProcess, vlSymsp, ""s, 0U);
            ++(vlSymsp->__Vcoverage[23990]);
        } else {
            tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_block, vlProcess, vlSymsp, name, 0U);
            ++(vlSymsp->__Vcoverage[23991]);
        }
        create__Vfuncrtn = tmp;
        ++(vlSymsp->__Vcoverage[23992]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_type_name\n"); );
        // Body
        get_type_name__Vfuncrtn = "uvm_reg_block"s;
        ++(vlSymsp->__Vcoverage[23994]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unlock_model(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unlock_model\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk1__DOT__blk_;
        CData/*0:0*/ unnamedblk1__DOT__blk___Vfirst;
        unnamedblk1__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk2__DOT__b;
        CData/*0:0*/ unnamedblk2__DOT__b__Vfirst;
        unnamedblk2__DOT__b__Vfirst = 0;
        VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>, CData/*0:0*/> s;
        s = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.clear();
        __VlefExpr_0 = (0U != this->__PVT__blks.first(unnamedblk1__DOT__blk_));
        if (__VlefExpr_0) {
            unnamedblk1__DOT__blk___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk1__DOT__blk___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__blks.next(unnamedblk1__DOT__blk_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk1__DOT__blk___Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk1__DOT__blk_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 206)
                    ->__VnoInFunc_unlock_model(vlSymsp);
                ++(vlSymsp->__Vcoverage[23997]);
            }
            ++(vlSymsp->__Vcoverage[23998]);
        } else {
            ++(vlSymsp->__Vcoverage[23999]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots 
            = s;
        __VlefExpr_2 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.first(unnamedblk2__DOT__b));
        if (__VlefExpr_2) {
            unnamedblk2__DOT__b__Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk2__DOT__b__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.next(unnamedblk2__DOT__b));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk2__DOT__b__Vfirst = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots
                    .at(unnamedblk2__DOT__b) = 0U;
                ++(vlSymsp->__Vcoverage[24000]);
            }
            ++(vlSymsp->__Vcoverage[24001]);
        } else {
            ++(vlSymsp->__Vcoverage[24002]);
        }
        this->__PVT__locked = 0U;
        ++(vlSymsp->__Vcoverage[24003]);
    }

    VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_wait_for_lock(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_wait_for_lock\n"); );
        // Body
        VL_KEEP_THIS;
        CData/*0:0*/ __VdynTrigger_h84a942d1__0;
        __VdynTrigger_h84a942d1__0 = 0;
        __VdynTrigger_h84a942d1__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h84a942d1__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_reg_block.m_uvm_lock_model_complete)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 
                                                         216);
            __VdynTrigger_h84a942d1__0 = this->__PVT__m_uvm_lock_model_complete.isFired();
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h84a942d1__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_reg_block.m_uvm_lock_model_complete)", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 
                                                         216);
            this->__PVT__m_uvm_lock_model_complete.clearFired();
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([event] uvm_pkg::uvm_reg_block.m_uvm_lock_model_complete)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 
                                                     216);
        ++(vlSymsp->__Vcoverage[24004]);
        co_return;
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample\n"); );
        // Body
        ++(vlSymsp->__Vcoverage[24005]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_lock(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ v) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_lock\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk3__DOT__idx;
        CData/*0:0*/ unnamedblk3__DOT__idx__Vfirst;
        unnamedblk3__DOT__idx__Vfirst = 0;
        this->__PVT__locked = v;
        __VlefExpr_0 = (0U != this->__PVT__blks.first(unnamedblk3__DOT__idx));
        if (__VlefExpr_0) {
            unnamedblk3__DOT__idx__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk3__DOT__idx__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__blks.next(unnamedblk3__DOT__idx));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk3__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk3__DOT__idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 966)
                    ->__VnoInFunc_set_lock(vlSymsp, v);
                ++(vlSymsp->__Vcoverage[24006]);
            }
            ++(vlSymsp->__Vcoverage[24007]);
        } else {
            ++(vlSymsp->__Vcoverage[24008]);
        }
        ++(vlSymsp->__Vcoverage[24009]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unregister(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> m) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unregister\n"); );
        // Body
        CData/*0:0*/ __VlefCall_8__is_in_map;
        CData/*0:0*/ __VlefExpr_7;
        CData/*0:0*/ __VlefExpr_6;
        CData/*0:0*/ __VlefCall_5__is_in_map;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefCall_2__is_in_map;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk4__DOT__idx;
        CData/*0:0*/ unnamedblk4__DOT__idx__Vfirst;
        unnamedblk4__DOT__idx__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk5__DOT__idx;
        CData/*0:0*/ unnamedblk5__DOT__idx__Vfirst;
        unnamedblk5__DOT__idx__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk6__DOT__idx;
        CData/*0:0*/ unnamedblk6__DOT__idx__Vfirst;
        unnamedblk6__DOT__idx__Vfirst = 0;
        __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk4__DOT__idx));
        if (__VlefExpr_0) {
            unnamedblk4__DOT__idx__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk4__DOT__idx__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk4__DOT__idx));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk4__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk4__DOT__idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 972)
                    ->__VnoInFunc_is_in_map(vlSymsp, m, __VlefCall_2__is_in_map);
                if (__VlefCall_2__is_in_map) {
                    this->__PVT__regs.erase(unnamedblk4__DOT__idx);
                    ++(vlSymsp->__Vcoverage[24010]);
                } else {
                    ++(vlSymsp->__Vcoverage[24011]);
                }
                ++(vlSymsp->__Vcoverage[24012]);
            }
            ++(vlSymsp->__Vcoverage[24013]);
        } else {
            ++(vlSymsp->__Vcoverage[24014]);
        }
        __VlefExpr_3 = (0U != this->__PVT__mems.first(unnamedblk5__DOT__idx));
        if (__VlefExpr_3) {
            unnamedblk5__DOT__idx__Vfirst = 1U;
            while (true) {
                __VlefExpr_4 = unnamedblk5__DOT__idx__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_4)))) {
                    __VlefExpr_4 = (0U != this->__PVT__mems.next(unnamedblk5__DOT__idx));
                }
                if (!(__VlefExpr_4)) break;
                unnamedblk5__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk5__DOT__idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 976)
                    ->__VnoInFunc_is_in_map(vlSymsp, m, __VlefCall_5__is_in_map);
                if (__VlefCall_5__is_in_map) {
                    this->__PVT__mems.erase(unnamedblk5__DOT__idx);
                    ++(vlSymsp->__Vcoverage[24015]);
                } else {
                    ++(vlSymsp->__Vcoverage[24016]);
                }
                ++(vlSymsp->__Vcoverage[24017]);
            }
            ++(vlSymsp->__Vcoverage[24018]);
        } else {
            ++(vlSymsp->__Vcoverage[24019]);
        }
        __VlefExpr_6 = (0U != this->__PVT__vregs.first(unnamedblk6__DOT__idx));
        if (__VlefExpr_6) {
            unnamedblk6__DOT__idx__Vfirst = 1U;
            while (true) {
                __VlefExpr_7 = unnamedblk6__DOT__idx__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_7)))) {
                    __VlefExpr_7 = (0U != this->__PVT__vregs.next(unnamedblk6__DOT__idx));
                }
                if (!(__VlefExpr_7)) break;
                unnamedblk6__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk6__DOT__idx, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 980)
                    ->__VnoInFunc_is_in_map(vlSymsp, m, __VlefCall_8__is_in_map);
                if (__VlefCall_8__is_in_map) {
                    this->__PVT__vregs.erase(unnamedblk6__DOT__idx);
                    ++(vlSymsp->__Vcoverage[24020]);
                } else {
                    ++(vlSymsp->__Vcoverage[24021]);
                }
                ++(vlSymsp->__Vcoverage[24022]);
            }
            ++(vlSymsp->__Vcoverage[24023]);
        } else {
            ++(vlSymsp->__Vcoverage[24024]);
        }
        this->__PVT__maps.erase(m);
        ++(vlSymsp->__Vcoverage[24025]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage) {
        Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::new\n"); );
        // Body
        _ctor_var_reset(vlSymsp);
        this->__PVT__default_path = 3U;
        ++(vlSymsp->__Vcoverage[23995]);
        this->__PVT__default_hdl_path = "RTL"s;
        ++(vlSymsp->__Vcoverage[23996]);
        IData/*31:0*/ __VlefExpr_0;
        /*super.new*/;
        this->__PVT__hdl_paths_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz224, vlProcess, vlSymsp, "hdl_paths"s);
        this->__PVT__has_cover = has_coverage;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots
                    .at(VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>{this}) = 0U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names.exists(name)) {
            __VlefExpr_0 = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                            .at(name));
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                    .at(name) = __VlefExpr_0;
            ++(vlSymsp->__Vcoverage[24031]);
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                    .at(name) = 1U;
            ++(vlSymsp->__Vcoverage[24032]);
        }
        ++(vlSymsp->__Vcoverage[24033]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_configure\n"); );
        // Body
        this->__PVT__parent = parent;
        if ((VlNull{} != parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1025)
                    ->__VnoInFunc_add_block(vlSymsp, 
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>{this});
            ++(vlSymsp->__Vcoverage[24034]);
        } else {
            ++(vlSymsp->__Vcoverage[24035]);
        }
        this->__VnoInFunc_add_hdl_path(vlSymsp, hdl_path, "RTL"s);
        ++(vlSymsp->__Vcoverage[24036]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_block\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
        __Vfunc_uvm_report_enabled__13__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
        __Vfunc_uvm_report_enabled__13__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__17__verbosity;
        __Vtask_uvm_report_error__17__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__17__line;
        __Vtask_uvm_report_error__17__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__17__report_enabled_checked;
        __Vtask_uvm_report_error__17__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__21__verbosity;
        __Vfunc_uvm_report_enabled__21__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__21__severity;
        __Vfunc_uvm_report_enabled__21__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__27__verbosity;
        __Vtask_uvm_report_error__27__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__27__line;
        __Vtask_uvm_report_error__27__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__27__report_enabled_checked;
        __Vtask_uvm_report_error__27__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __VlefExpr_5;
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__is_locked;
        std::string unnamedblk596__DOT__name;
        IData/*31:0*/ __Vincrement1;
        __Vincrement1 = 0;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                this->__Vfunc_uvm_report_enabled__13__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__13__severity = 2U;
                __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__14__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__17__context_name = ""s;
                    __Vtask_uvm_report_error__17__line = 0x0000040aU;
                    this->__Vtask_uvm_report_error__17__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__17__verbosity = 0U;
                    this->__Vtask_uvm_report_error__17__message = "Cannot add subblock to locked block model"s;
                    this->__Vtask_uvm_report_error__17__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__18__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__17__id, this->__Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, this->__Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, this->__Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24037]);
                } else {
                    ++(vlSymsp->__Vcoverage[24038]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24040]);
            }
            if (this->__PVT__blks.exists(blk)) {
                this->__Vfunc_uvm_report_enabled__21__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__21__severity = 2U;
                __Vfunc_uvm_report_enabled__21__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__22__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__23__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__21__verbosity, (IData)(__Vfunc_uvm_report_enabled__21__severity), this->__Vfunc_uvm_report_enabled__21__id, __VlefCall_2__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1039)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__27__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__27__context_name = ""s;
                    __Vtask_uvm_report_error__27__line = 0x0000040fU;
                    this->__Vtask_uvm_report_error__27__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__27__verbosity = 0U;
                    this->__Vtask_uvm_report_error__27__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Subblock '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s));
                    this->__Vtask_uvm_report_error__27__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__28__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__28__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__29__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__27__id, this->__Vtask_uvm_report_error__27__message, __Vtask_uvm_report_error__27__verbosity, this->__Vtask_uvm_report_error__27__filename, __Vtask_uvm_report_error__27__line, this->__Vtask_uvm_report_error__27__context_name, (IData)(__Vtask_uvm_report_error__27__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24041]);
                } else {
                    ++(vlSymsp->__Vcoverage[24042]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24044]);
            }
            __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__blks.at(blk) = __Vincrement1;
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.exists(blk)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.erase(blk);
                ++(vlSymsp->__Vcoverage[24045]);
            } else {
                ++(vlSymsp->__Vcoverage[24046]);
            }
            VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1046)
                    ->__VnoInFunc_get_name(vlSymsp, unnamedblk596__DOT__name);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names.exists(unnamedblk596__DOT__name)) {
                __VlefExpr_5 = (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                                .at(unnamedblk596__DOT__name) 
                                - (IData)(1U));
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                    .at(unnamedblk596__DOT__name) = __VlefExpr_5;
                ++(vlSymsp->__Vcoverage[24047]);
            } else {
                ++(vlSymsp->__Vcoverage[24048]);
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24049]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_reg\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
        __Vfunc_uvm_report_enabled__33__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
        __Vfunc_uvm_report_enabled__33__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__37__verbosity;
        __Vtask_uvm_report_error__37__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__37__line;
        __Vtask_uvm_report_error__37__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__37__report_enabled_checked;
        __Vtask_uvm_report_error__37__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
        __Vfunc_uvm_report_enabled__41__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
        __Vfunc_uvm_report_enabled__41__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__47__verbosity;
        __Vtask_uvm_report_error__47__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__47__line;
        __Vtask_uvm_report_error__47__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__47__report_enabled_checked;
        __Vtask_uvm_report_error__47__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__is_locked;
        IData/*31:0*/ __Vincrement2;
        __Vincrement2 = 0;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                this->__Vfunc_uvm_report_enabled__33__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__33__severity = 2U;
                __Vfunc_uvm_report_enabled__33__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), this->__Vfunc_uvm_report_enabled__33__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__37__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__37__context_name = ""s;
                    __Vtask_uvm_report_error__37__line = 0x00000420U;
                    this->__Vtask_uvm_report_error__37__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__37__verbosity = 0U;
                    this->__Vtask_uvm_report_error__37__message = "Cannot add register to locked block model"s;
                    this->__Vtask_uvm_report_error__37__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__38__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__39__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__37__id, this->__Vtask_uvm_report_error__37__message, __Vtask_uvm_report_error__37__verbosity, this->__Vtask_uvm_report_error__37__filename, __Vtask_uvm_report_error__37__line, this->__Vtask_uvm_report_error__37__context_name, (IData)(__Vtask_uvm_report_error__37__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24050]);
                } else {
                    ++(vlSymsp->__Vcoverage[24051]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24053]);
            }
            if (this->__PVT__regs.exists(rg)) {
                this->__Vfunc_uvm_report_enabled__41__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__41__severity = 2U;
                __Vfunc_uvm_report_enabled__41__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__42__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__43__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), this->__Vfunc_uvm_report_enabled__41__id, __VlefCall_2__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1062)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__47__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__47__context_name = ""s;
                    __Vtask_uvm_report_error__47__line = 0x00000426U;
                    this->__Vtask_uvm_report_error__47__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__47__verbosity = 0U;
                    this->__Vtask_uvm_report_error__47__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s));
                    this->__Vtask_uvm_report_error__47__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__48__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__49__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__47__id, this->__Vtask_uvm_report_error__47__message, __Vtask_uvm_report_error__47__verbosity, this->__Vtask_uvm_report_error__47__filename, __Vtask_uvm_report_error__47__line, this->__Vtask_uvm_report_error__47__context_name, (IData)(__Vtask_uvm_report_error__47__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24054]);
                } else {
                    ++(vlSymsp->__Vcoverage[24055]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24057]);
            }
            __Vincrement2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__regs.at(rg) = __Vincrement2;
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24058]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_vreg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> vreg) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_vreg\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__52__verbosity;
        __Vfunc_uvm_report_enabled__52__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__52__severity;
        __Vfunc_uvm_report_enabled__52__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__53__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__54__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__56__verbosity;
        __Vtask_uvm_report_error__56__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__56__line;
        __Vtask_uvm_report_error__56__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__56__report_enabled_checked;
        __Vtask_uvm_report_error__56__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
        __Vfunc_uvm_report_enabled__60__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
        __Vfunc_uvm_report_enabled__60__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__66__verbosity;
        __Vtask_uvm_report_error__66__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__66__line;
        __Vtask_uvm_report_error__66__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__66__report_enabled_checked;
        __Vtask_uvm_report_error__66__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__is_locked;
        IData/*31:0*/ __Vincrement3;
        __Vincrement3 = 0;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                this->__Vfunc_uvm_report_enabled__52__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__52__severity = 2U;
                __Vfunc_uvm_report_enabled__52__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__53__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__53__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__54__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__54__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__52__verbosity, (IData)(__Vfunc_uvm_report_enabled__52__severity), this->__Vfunc_uvm_report_enabled__52__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__56__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__56__context_name = ""s;
                    __Vtask_uvm_report_error__56__line = 0x00000432U;
                    this->__Vtask_uvm_report_error__56__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__56__verbosity = 0U;
                    this->__Vtask_uvm_report_error__56__message = "Cannot add virtual register to locked block model"s;
                    this->__Vtask_uvm_report_error__56__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__57__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__58__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__56__id, this->__Vtask_uvm_report_error__56__message, __Vtask_uvm_report_error__56__verbosity, this->__Vtask_uvm_report_error__56__filename, __Vtask_uvm_report_error__56__line, this->__Vtask_uvm_report_error__56__context_name, (IData)(__Vtask_uvm_report_error__56__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24059]);
                } else {
                    ++(vlSymsp->__Vcoverage[24060]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24062]);
            }
            if (this->__PVT__vregs.exists(vreg)) {
                this->__Vfunc_uvm_report_enabled__60__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__60__severity = 2U;
                __Vfunc_uvm_report_enabled__60__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__61__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__62__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), this->__Vfunc_uvm_report_enabled__60__id, __VlefCall_2__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    VL_NULL_CHECK(vreg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1080)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__66__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__66__context_name = ""s;
                    __Vtask_uvm_report_error__66__line = 0x00000438U;
                    this->__Vtask_uvm_report_error__66__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__66__verbosity = 0U;
                    this->__Vtask_uvm_report_error__66__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Virtual register '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s));
                    this->__Vtask_uvm_report_error__66__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__67__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__68__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__66__id, this->__Vtask_uvm_report_error__66__message, __Vtask_uvm_report_error__66__verbosity, this->__Vtask_uvm_report_error__66__filename, __Vtask_uvm_report_error__66__line, this->__Vtask_uvm_report_error__66__context_name, (IData)(__Vtask_uvm_report_error__66__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24063]);
                } else {
                    ++(vlSymsp->__Vcoverage[24064]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24066]);
            }
            __Vincrement3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__vregs.at(vreg) = __Vincrement3;
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24067]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_mem(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_mem\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__71__verbosity;
        __Vfunc_uvm_report_enabled__71__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__71__severity;
        __Vfunc_uvm_report_enabled__71__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__75__verbosity;
        __Vtask_uvm_report_error__75__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__75__line;
        __Vtask_uvm_report_error__75__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__75__report_enabled_checked;
        __Vtask_uvm_report_error__75__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__79__verbosity;
        __Vfunc_uvm_report_enabled__79__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__79__severity;
        __Vfunc_uvm_report_enabled__79__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__85__verbosity;
        __Vtask_uvm_report_error__85__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__85__line;
        __Vtask_uvm_report_error__85__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__85__report_enabled_checked;
        __Vtask_uvm_report_error__85__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_4__get_name;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__is_locked;
        IData/*31:0*/ __Vincrement4;
        __Vincrement4 = 0;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                this->__Vfunc_uvm_report_enabled__71__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__71__severity = 2U;
                __Vfunc_uvm_report_enabled__71__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__72__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__73__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__71__verbosity, (IData)(__Vfunc_uvm_report_enabled__71__severity), this->__Vfunc_uvm_report_enabled__71__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__75__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__75__context_name = ""s;
                    __Vtask_uvm_report_error__75__line = 0x00000443U;
                    this->__Vtask_uvm_report_error__75__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__75__verbosity = 0U;
                    this->__Vtask_uvm_report_error__75__message = "Cannot add memory to locked block model"s;
                    this->__Vtask_uvm_report_error__75__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__76__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__76__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__77__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__75__id, this->__Vtask_uvm_report_error__75__message, __Vtask_uvm_report_error__75__verbosity, this->__Vtask_uvm_report_error__75__filename, __Vtask_uvm_report_error__75__line, this->__Vtask_uvm_report_error__75__context_name, (IData)(__Vtask_uvm_report_error__75__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24068]);
                } else {
                    ++(vlSymsp->__Vcoverage[24069]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24071]);
            }
            if (this->__PVT__mems.exists(mem)) {
                this->__Vfunc_uvm_report_enabled__79__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__79__severity = 2U;
                __Vfunc_uvm_report_enabled__79__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__80__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__80__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__81__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__79__verbosity, (IData)(__Vfunc_uvm_report_enabled__79__severity), this->__Vfunc_uvm_report_enabled__79__id, __VlefCall_2__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1097)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                    __Vtask_uvm_report_error__85__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__85__context_name = ""s;
                    __Vtask_uvm_report_error__85__line = 0x00000449U;
                    this->__Vtask_uvm_report_error__85__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__85__verbosity = 0U;
                    this->__Vtask_uvm_report_error__85__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_3__get_name), "' has already been registered with block '"s), __VlefCall_4__get_name), "'"s));
                    this->__Vtask_uvm_report_error__85__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__86__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__87__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__85__id, this->__Vtask_uvm_report_error__85__message, __Vtask_uvm_report_error__85__verbosity, this->__Vtask_uvm_report_error__85__filename, __Vtask_uvm_report_error__85__line, this->__Vtask_uvm_report_error__85__context_name, (IData)(__Vtask_uvm_report_error__85__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24072]);
                } else {
                    ++(vlSymsp->__Vcoverage[24073]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24075]);
            }
            __Vincrement4 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__mems.at(mem) = __Vincrement4;
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24076]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_parent\n"); );
        // Body
        if ((VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>{this} 
             != parent)) {
            this->__PVT__parent = parent;
            ++(vlSymsp->__Vcoverage[24077]);
        } else {
            ++(vlSymsp->__Vcoverage[24078]);
        }
        ++(vlSymsp->__Vcoverage[24079]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked\n"); );
        // Body
        is_locked__Vfuncrtn = this->__PVT__locked;
        ++(vlSymsp->__Vcoverage[24080]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_lock_model(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_lock_model\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_get_max_size__93__Vfuncout;
        __Vfunc_get_max_size__93__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__95__Vfuncout;
        __Vfunc_get_max_size__95__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__97__Vfuncout;
        __Vfunc_get_max_size__97__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
        __Vfunc_uvm_report_enabled__98__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
        __Vfunc_uvm_report_enabled__98__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__105__verbosity;
        __Vfunc_uvm_report_enabled__105__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__105__severity;
        __Vfunc_uvm_report_enabled__105__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__111__verbosity;
        __Vtask_uvm_report_error__111__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__111__line;
        __Vtask_uvm_report_error__111__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__111__report_enabled_checked;
        __Vtask_uvm_report_error__111__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__112__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__113__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_14__get_name;
        std::string __VlefCall_13__get_name;
        IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
        CData/*0:0*/ __VlefExpr_11;
        std::string __VlefCall_10__get_name;
        IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_8__get_max_size;
        IData/*31:0*/ __VlefCall_7__get_max_size;
        CData/*0:0*/ __VlefExpr_6;
        CData/*0:0*/ __VlefExpr_5;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefCall_0__is_locked;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk597__DOT__rg_;
        CData/*0:0*/ unnamedblk597__DOT__rg___Vfirst;
        unnamedblk597__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk597__DOT__unnamedblk598__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk599__DOT__mem_;
        CData/*0:0*/ unnamedblk599__DOT__mem___Vfirst;
        unnamedblk599__DOT__mem___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk599__DOT__unnamedblk600__DOT__mem;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk601__DOT__blk_;
        CData/*0:0*/ unnamedblk601__DOT__blk___Vfirst;
        unnamedblk601__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk601__DOT__unnamedblk602__DOT__blk;
        IData/*31:0*/ unnamedblk603__DOT__max_size;
        {
            this->__VnoInFunc_is_locked(vlSymsp, __VlefCall_0__is_locked);
            if (__VlefCall_0__is_locked) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24082]);
            }
            this->__PVT__locked = 1U;
            __VlefExpr_1 = (0U != this->__PVT__regs.first(unnamedblk597__DOT__rg_));
            if (__VlefExpr_1) {
                unnamedblk597__DOT__rg___Vfirst = 1U;
                while (true) {
                    __VlefExpr_2 = unnamedblk597__DOT__rg___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_2)))) {
                        __VlefExpr_2 = (0U != this->__PVT__regs.next(unnamedblk597__DOT__rg_));
                    }
                    if (!(__VlefExpr_2)) break;
                    unnamedblk597__DOT__rg___Vfirst = 0U;
                    unnamedblk597__DOT__unnamedblk598__DOT__rg 
                        = unnamedblk597__DOT__rg_;
                    VL_NULL_CHECK(unnamedblk597__DOT__unnamedblk598__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1130)
                    ->__VnoInFunc_Xlock_modelX(vlSymsp);
                    ++(vlSymsp->__Vcoverage[24083]);
                }
                ++(vlSymsp->__Vcoverage[24084]);
            } else {
                ++(vlSymsp->__Vcoverage[24085]);
            }
            __VlefExpr_3 = (0U != this->__PVT__mems.first(unnamedblk599__DOT__mem_));
            if (__VlefExpr_3) {
                unnamedblk599__DOT__mem___Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk599__DOT__mem___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__mems.next(unnamedblk599__DOT__mem_));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk599__DOT__mem___Vfirst = 0U;
                    unnamedblk599__DOT__unnamedblk600__DOT__mem 
                        = unnamedblk599__DOT__mem_;
                    VL_NULL_CHECK(unnamedblk599__DOT__unnamedblk600__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1135)
                    ->__VnoInFunc_Xlock_modelX(vlSymsp);
                    ++(vlSymsp->__Vcoverage[24086]);
                }
                ++(vlSymsp->__Vcoverage[24087]);
            } else {
                ++(vlSymsp->__Vcoverage[24088]);
            }
            __VlefExpr_5 = (0U != this->__PVT__blks.first(unnamedblk601__DOT__blk_));
            if (__VlefExpr_5) {
                unnamedblk601__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_6 = unnamedblk601__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_6)))) {
                        __VlefExpr_6 = (0U != this->__PVT__blks.next(unnamedblk601__DOT__blk_));
                    }
                    if (!(__VlefExpr_6)) break;
                    unnamedblk601__DOT__blk___Vfirst = 0U;
                    unnamedblk601__DOT__unnamedblk602__DOT__blk 
                        = unnamedblk601__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk601__DOT__unnamedblk602__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1140)
                    ->__VnoInFunc_lock_model(vlSymsp);
                    ++(vlSymsp->__Vcoverage[24089]);
                }
                ++(vlSymsp->__Vcoverage[24090]);
            } else {
                ++(vlSymsp->__Vcoverage[24091]);
            }
            if ((VlNull{} == this->__PVT__parent)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__93__Vfuncout);
                unnamedblk603__DOT__max_size = __Vfunc_get_max_size__93__Vfuncout;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __VlefCall_7__get_max_size);
                if ((__VlefCall_7__get_max_size > unnamedblk603__DOT__max_size)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__95__Vfuncout);
                    unnamedblk603__DOT__max_size = __Vfunc_get_max_size__95__Vfuncout;
                    ++(vlSymsp->__Vcoverage[24092]);
                } else {
                    ++(vlSymsp->__Vcoverage[24093]);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __VlefCall_8__get_max_size);
                if ((__VlefCall_8__get_max_size > unnamedblk603__DOT__max_size)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__97__Vfuncout);
                    unnamedblk603__DOT__max_size = __Vfunc_get_max_size__97__Vfuncout;
                    ++(vlSymsp->__Vcoverage[24094]);
                } else {
                    ++(vlSymsp->__Vcoverage[24095]);
                }
                if (VL_LTS_III(32, 0x00000040U, unnamedblk603__DOT__max_size)) {
                    this->__Vfunc_uvm_report_enabled__98__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__98__severity = 3U;
                    __Vfunc_uvm_report_enabled__98__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__99__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__100__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), this->__Vfunc_uvm_report_enabled__98__id, __VlefCall_9__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_9__uvm_report_enabled)) {
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Register model requires that UVM_REG_DATA_WIDTH be defined as %0d or greater. Currently defined as 64",0,
                                                                                32,
                                                                                unnamedblk603__DOT__max_size) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s, 0x00000481U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[24096]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24097]);
                    }
                    ++(vlSymsp->__Vcoverage[24098]);
                } else {
                    ++(vlSymsp->__Vcoverage[24099]);
                }
                this->__VnoInFunc_Xinit_address_mapsX(vlSymsp);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                __VlefExpr_11 = (1U < vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                                 .at(__VlefCall_10__get_name));
                if (__VlefExpr_11) {
                    this->__Vfunc_uvm_report_enabled__105__id = "UVM/REG/DUPLROOT"s;
                    __Vfunc_uvm_report_enabled__105__severity = 2U;
                    __Vfunc_uvm_report_enabled__105__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__106__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__107__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__105__verbosity, (IData)(__Vfunc_uvm_report_enabled__105__severity), this->__Vfunc_uvm_report_enabled__105__id, __VlefCall_12__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_12__uvm_report_enabled)) {
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
                        __Vtask_uvm_report_error__111__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__111__context_name = ""s;
                        __Vtask_uvm_report_error__111__line = 0x0000048aU;
                        this->__Vtask_uvm_report_error__111__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                        __Vtask_uvm_report_error__111__verbosity = 0U;
                        this->__Vtask_uvm_report_error__111__message 
                            = VL_SFORMATF_N_NX("There are %0# root register models named \"%@\". The names of the root register models have to be unique",0,
                                               32,vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                                               .at(__VlefCall_13__get_name),
                                               -1,&(__VlefCall_14__get_name)) ;
                        this->__Vtask_uvm_report_error__111__id = "UVM/REG/DUPLROOT"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__112__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__112__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__113__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__113__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__111__id, this->__Vtask_uvm_report_error__111__message, __Vtask_uvm_report_error__111__verbosity, this->__Vtask_uvm_report_error__111__filename, __Vtask_uvm_report_error__111__line, this->__Vtask_uvm_report_error__111__context_name, (IData)(__Vtask_uvm_report_error__111__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[442]);
                        ++(vlSymsp->__Vcoverage[24100]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24101]);
                    }
                    ++(vlSymsp->__Vcoverage[24102]);
                } else {
                    ++(vlSymsp->__Vcoverage[24103]);
                }
                vlSymsp->fireEvent(this->__PVT__m_uvm_lock_model_complete);
                ++(vlSymsp->__Vcoverage[24104]);
            } else {
                ++(vlSymsp->__Vcoverage[24105]);
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24106]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name\n"); );
        // Body
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_full_name;
        {
            get_full_name__Vfuncrtn = ""s;
            if ((VlNull{} == this->__PVT__parent)) {
                this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24108]);
            }
            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1179)
                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24109]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk604__DOT__rg_;
        CData/*0:0*/ unnamedblk604__DOT__rg___Vfirst;
        unnamedblk604__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk604__DOT__unnamedblk605__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk606__DOT__blk_;
        CData/*0:0*/ unnamedblk606__DOT__blk___Vfirst;
        unnamedblk606__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk606__DOT__unnamedblk607__DOT__blk;
        __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk604__DOT__rg_));
        if (__VlefExpr_0) {
            unnamedblk604__DOT__rg___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk604__DOT__rg___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk604__DOT__rg_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk604__DOT__rg___Vfirst = 0U;
                unnamedblk604__DOT__unnamedblk605__DOT__rg 
                    = unnamedblk604__DOT__rg_;
                VL_NULL_CHECK(unnamedblk604__DOT__unnamedblk605__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1191)
                    ->__VnoInFunc_get_fields(vlSymsp, fields);
                ++(vlSymsp->__Vcoverage[24110]);
            }
            ++(vlSymsp->__Vcoverage[24111]);
        } else {
            ++(vlSymsp->__Vcoverage[24112]);
        }
        if ((1U == hier)) {
            __VlefExpr_2 = (0U != this->__PVT__blks.first(unnamedblk606__DOT__blk_));
            if (__VlefExpr_2) {
                unnamedblk606__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_3 = unnamedblk606__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_3)))) {
                        __VlefExpr_3 = (0U != this->__PVT__blks.next(unnamedblk606__DOT__blk_));
                    }
                    if (!(__VlefExpr_3)) break;
                    unnamedblk606__DOT__blk___Vfirst = 0U;
                    unnamedblk606__DOT__unnamedblk607__DOT__blk 
                        = unnamedblk606__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk606__DOT__unnamedblk607__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1198)
                    ->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
                    ++(vlSymsp->__Vcoverage[24113]);
                }
                ++(vlSymsp->__Vcoverage[24114]);
            } else {
                ++(vlSymsp->__Vcoverage[24115]);
            }
            ++(vlSymsp->__Vcoverage[24116]);
        } else {
            ++(vlSymsp->__Vcoverage[24117]);
        }
        ++(vlSymsp->__Vcoverage[24118]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_fields\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk608__DOT__vreg_;
        CData/*0:0*/ unnamedblk608__DOT__vreg___Vfirst;
        unnamedblk608__DOT__vreg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk608__DOT__unnamedblk609__DOT__vreg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk610__DOT__blk_;
        CData/*0:0*/ unnamedblk610__DOT__blk___Vfirst;
        unnamedblk610__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk610__DOT__unnamedblk611__DOT__blk;
        __VlefExpr_0 = (0U != this->__PVT__vregs.first(unnamedblk608__DOT__vreg_));
        if (__VlefExpr_0) {
            unnamedblk608__DOT__vreg___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk608__DOT__vreg___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__vregs.next(unnamedblk608__DOT__vreg_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk608__DOT__vreg___Vfirst = 0U;
                unnamedblk608__DOT__unnamedblk609__DOT__vreg 
                    = unnamedblk608__DOT__vreg_;
                VL_NULL_CHECK(unnamedblk608__DOT__unnamedblk609__DOT__vreg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1211)
                    ->__VnoInFunc_get_fields(vlSymsp, fields);
                ++(vlSymsp->__Vcoverage[24119]);
            }
            ++(vlSymsp->__Vcoverage[24120]);
        } else {
            ++(vlSymsp->__Vcoverage[24121]);
        }
        if ((1U == hier)) {
            __VlefExpr_2 = (0U != this->__PVT__blks.first(unnamedblk610__DOT__blk_));
            if (__VlefExpr_2) {
                unnamedblk610__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_3 = unnamedblk610__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_3)))) {
                        __VlefExpr_3 = (0U != this->__PVT__blks.next(unnamedblk610__DOT__blk_));
                    }
                    if (!(__VlefExpr_3)) break;
                    unnamedblk610__DOT__blk___Vfirst = 0U;
                    unnamedblk610__DOT__unnamedblk611__DOT__blk 
                        = unnamedblk610__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk610__DOT__unnamedblk611__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1217)
                    ->__VnoInFunc_get_virtual_fields(vlSymsp, fields, 1U);
                    ++(vlSymsp->__Vcoverage[24122]);
                }
                ++(vlSymsp->__Vcoverage[24123]);
            } else {
                ++(vlSymsp->__Vcoverage[24124]);
            }
            ++(vlSymsp->__Vcoverage[24125]);
        } else {
            ++(vlSymsp->__Vcoverage[24126]);
        }
        ++(vlSymsp->__Vcoverage[24127]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk612__DOT__rg;
        CData/*0:0*/ unnamedblk612__DOT__rg__Vfirst;
        unnamedblk612__DOT__rg__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk613__DOT__blk_;
        CData/*0:0*/ unnamedblk613__DOT__blk___Vfirst;
        unnamedblk613__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk613__DOT__unnamedblk614__DOT__blk;
        __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk612__DOT__rg));
        if (__VlefExpr_0) {
            unnamedblk612__DOT__rg__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk612__DOT__rg__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk612__DOT__rg));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk612__DOT__rg__Vfirst = 0U;
                regs.push_back(unnamedblk612__DOT__rg);
                ++(vlSymsp->__Vcoverage[24128]);
            }
            ++(vlSymsp->__Vcoverage[24129]);
        } else {
            ++(vlSymsp->__Vcoverage[24130]);
        }
        if ((1U == hier)) {
            __VlefExpr_2 = (0U != this->__PVT__blks.first(unnamedblk613__DOT__blk_));
            if (__VlefExpr_2) {
                unnamedblk613__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_3 = unnamedblk613__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_3)))) {
                        __VlefExpr_3 = (0U != this->__PVT__blks.next(unnamedblk613__DOT__blk_));
                    }
                    if (!(__VlefExpr_3)) break;
                    unnamedblk613__DOT__blk___Vfirst = 0U;
                    unnamedblk613__DOT__unnamedblk614__DOT__blk 
                        = unnamedblk613__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk613__DOT__unnamedblk614__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1232)
                    ->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
                    ++(vlSymsp->__Vcoverage[24131]);
                }
                ++(vlSymsp->__Vcoverage[24132]);
            } else {
                ++(vlSymsp->__Vcoverage[24133]);
            }
            ++(vlSymsp->__Vcoverage[24134]);
        } else {
            ++(vlSymsp->__Vcoverage[24135]);
        }
        ++(vlSymsp->__Vcoverage[24136]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk615__DOT__rg;
        CData/*0:0*/ unnamedblk615__DOT__rg__Vfirst;
        unnamedblk615__DOT__rg__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__blk_;
        CData/*0:0*/ unnamedblk616__DOT__blk___Vfirst;
        unnamedblk616__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__unnamedblk617__DOT__blk;
        __VlefExpr_0 = (0U != this->__PVT__vregs.first(unnamedblk615__DOT__rg));
        if (__VlefExpr_0) {
            unnamedblk615__DOT__rg__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk615__DOT__rg__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__vregs.next(unnamedblk615__DOT__rg));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk615__DOT__rg__Vfirst = 0U;
                regs.push_back(unnamedblk615__DOT__rg);
                ++(vlSymsp->__Vcoverage[24137]);
            }
            ++(vlSymsp->__Vcoverage[24138]);
        } else {
            ++(vlSymsp->__Vcoverage[24139]);
        }
        if ((1U == hier)) {
            __VlefExpr_2 = (0U != this->__PVT__blks.first(unnamedblk616__DOT__blk_));
            if (__VlefExpr_2) {
                unnamedblk616__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_3 = unnamedblk616__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_3)))) {
                        __VlefExpr_3 = (0U != this->__PVT__blks.next(unnamedblk616__DOT__blk_));
                    }
                    if (!(__VlefExpr_3)) break;
                    unnamedblk616__DOT__blk___Vfirst = 0U;
                    unnamedblk616__DOT__unnamedblk617__DOT__blk 
                        = unnamedblk616__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk616__DOT__unnamedblk617__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1248)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, regs, 1U);
                    ++(vlSymsp->__Vcoverage[24140]);
                }
                ++(vlSymsp->__Vcoverage[24141]);
            } else {
                ++(vlSymsp->__Vcoverage[24142]);
            }
            ++(vlSymsp->__Vcoverage[24143]);
        } else {
            ++(vlSymsp->__Vcoverage[24144]);
        }
        ++(vlSymsp->__Vcoverage[24145]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk618__DOT__mem_;
        CData/*0:0*/ unnamedblk618__DOT__mem___Vfirst;
        unnamedblk618__DOT__mem___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk618__DOT__unnamedblk619__DOT__mem;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__blk_;
        CData/*0:0*/ unnamedblk620__DOT__blk___Vfirst;
        unnamedblk620__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__unnamedblk621__DOT__blk;
        __VlefExpr_0 = (0U != this->__PVT__mems.first(unnamedblk618__DOT__mem_));
        if (__VlefExpr_0) {
            unnamedblk618__DOT__mem___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk618__DOT__mem___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__mems.next(unnamedblk618__DOT__mem_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk618__DOT__mem___Vfirst = 0U;
                unnamedblk618__DOT__unnamedblk619__DOT__mem 
                    = unnamedblk618__DOT__mem_;
                mems.push_back(unnamedblk618__DOT__unnamedblk619__DOT__mem);
                ++(vlSymsp->__Vcoverage[24146]);
            }
            ++(vlSymsp->__Vcoverage[24147]);
        } else {
            ++(vlSymsp->__Vcoverage[24148]);
        }
        if ((1U == hier)) {
            __VlefExpr_2 = (0U != this->__PVT__blks.first(unnamedblk620__DOT__blk_));
            if (__VlefExpr_2) {
                unnamedblk620__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_3 = unnamedblk620__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_3)))) {
                        __VlefExpr_3 = (0U != this->__PVT__blks.next(unnamedblk620__DOT__blk_));
                    }
                    if (!(__VlefExpr_3)) break;
                    unnamedblk620__DOT__blk___Vfirst = 0U;
                    unnamedblk620__DOT__unnamedblk621__DOT__blk 
                        = unnamedblk620__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk620__DOT__unnamedblk621__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1266)
                    ->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
                    ++(vlSymsp->__Vcoverage[24149]);
                }
                ++(vlSymsp->__Vcoverage[24150]);
            } else {
                ++(vlSymsp->__Vcoverage[24151]);
            }
            ++(vlSymsp->__Vcoverage[24152]);
        } else {
            ++(vlSymsp->__Vcoverage[24153]);
        }
        ++(vlSymsp->__Vcoverage[24154]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk622__DOT__blk_;
        CData/*0:0*/ unnamedblk622__DOT__blk___Vfirst;
        unnamedblk622__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk622__DOT__unnamedblk623__DOT__blk;
        __VlefExpr_0 = (0U != this->__PVT__blks.first(unnamedblk622__DOT__blk_));
        if (__VlefExpr_0) {
            unnamedblk622__DOT__blk___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk622__DOT__blk___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__blks.next(unnamedblk622__DOT__blk_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk622__DOT__blk___Vfirst = 0U;
                unnamedblk622__DOT__unnamedblk623__DOT__blk 
                    = unnamedblk622__DOT__blk_;
                blks.push_back(unnamedblk622__DOT__unnamedblk623__DOT__blk);
                if ((1U == hier)) {
                    VL_NULL_CHECK(unnamedblk622__DOT__unnamedblk623__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1281)
                    ->__VnoInFunc_get_blocks(vlSymsp, blks, 1U);
                    ++(vlSymsp->__Vcoverage[24155]);
                } else {
                    ++(vlSymsp->__Vcoverage[24156]);
                }
                ++(vlSymsp->__Vcoverage[24157]);
            }
            ++(vlSymsp->__Vcoverage[24158]);
        } else {
            ++(vlSymsp->__Vcoverage[24159]);
        }
        ++(vlSymsp->__Vcoverage[24160]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk627__DOT__map;
        CData/*0:0*/ unnamedblk627__DOT__map__Vfirst;
        unnamedblk627__DOT__map__Vfirst = 0;
        __VlefExpr_0 = (0U != this->__PVT__maps.first(unnamedblk627__DOT__map));
        if (__VlefExpr_0) {
            unnamedblk627__DOT__map__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk627__DOT__map__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__maps.next(unnamedblk627__DOT__map));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk627__DOT__map__Vfirst = 0U;
                maps.push_back(unnamedblk627__DOT__map);
                ++(vlSymsp->__Vcoverage[24179]);
            }
            ++(vlSymsp->__Vcoverage[24180]);
        } else {
            ++(vlSymsp->__Vcoverage[24181]);
        }
        ++(vlSymsp->__Vcoverage[24182]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent\n"); );
        // Body
        get_parent__Vfuncrtn = this->__PVT__parent;
        ++(vlSymsp->__Vcoverage[24183]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_block_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_block_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__130__verbosity;
        __Vfunc_uvm_report_enabled__130__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__130__severity;
        __Vfunc_uvm_report_enabled__130__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__131__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__132__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__135__verbosity;
        __Vtask_uvm_report_warning__135__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__135__line;
        __Vtask_uvm_report_warning__135__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__135__report_enabled_checked;
        __Vtask_uvm_report_warning__135__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__136__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__137__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_8__get_full_name;
        IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
        std::string __VlefCall_6__get_name;
        CData/*0:0*/ __VlefExpr_5;
        CData/*0:0*/ __VlefExpr_4;
        std::string __VlefCall_3__get_name;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        std::string __VlefCall_0__get_name;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__blk_;
        CData/*0:0*/ unnamedblk628__DOT__blk___Vfirst;
        unnamedblk628__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__unnamedblk629__DOT__blk;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk630__DOT__blk_;
        CData/*0:0*/ unnamedblk630__DOT__blk___Vfirst;
        unnamedblk630__DOT__blk___Vfirst = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> unnamedblk630__DOT__unnamedblk631__DOT__subblks;
        IData/*31:0*/ unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j;
        unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j = 0;
        {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_block_by_name__Vfuncrtn = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>{this};
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24185]);
            }
            __VlefExpr_1 = (0U != this->__PVT__blks.first(unnamedblk628__DOT__blk_));
            if (__VlefExpr_1) {
                unnamedblk628__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_2 = unnamedblk628__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_2)))) {
                        __VlefExpr_2 = (0U != this->__PVT__blks.next(unnamedblk628__DOT__blk_));
                    }
                    if (!(__VlefExpr_2)) break;
                    unnamedblk628__DOT__blk___Vfirst = 0U;
                    unnamedblk628__DOT__unnamedblk629__DOT__blk 
                        = unnamedblk628__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk628__DOT__unnamedblk629__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1380)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                    if ((__VlefCall_3__get_name == name)) {
                        get_block_by_name__Vfuncrtn 
                            = unnamedblk628__DOT__unnamedblk629__DOT__blk;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[24187]);
                    }
                    ++(vlSymsp->__Vcoverage[24188]);
                }
                ++(vlSymsp->__Vcoverage[24189]);
            } else {
                ++(vlSymsp->__Vcoverage[24190]);
            }
            __VlefExpr_4 = (0U != this->__PVT__blks.first(unnamedblk630__DOT__blk_));
            if (__VlefExpr_4) {
                unnamedblk630__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_5 = unnamedblk630__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_5)))) {
                        __VlefExpr_5 = (0U != this->__PVT__blks.next(unnamedblk630__DOT__blk_));
                    }
                    if (!(__VlefExpr_5)) break;
                    unnamedblk630__DOT__blk___Vfirst = 0U;
                    unnamedblk630__DOT__unnamedblk631__DOT__subblks.clear();
                    VL_NULL_CHECK(unnamedblk630__DOT__blk_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1387)
                    ->__VnoInFunc_get_blocks(vlSymsp, unnamedblk630__DOT__unnamedblk631__DOT__subblks, 1U);
                    unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j, unnamedblk630__DOT__unnamedblk631__DOT__subblks.size())) {
                        VL_NULL_CHECK(unnamedblk630__DOT__unnamedblk631__DOT__subblks.at(unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1390)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                        if ((__VlefCall_6__get_name 
                             == name)) {
                            get_block_by_name__Vfuncrtn 
                                = unnamedblk630__DOT__unnamedblk631__DOT__subblks.at(unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j);
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[24192]);
                        }
                        unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j 
                            = ((IData)(1U) + unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j);
                        ++(vlSymsp->__Vcoverage[24193]);
                    }
                    ++(vlSymsp->__Vcoverage[24194]);
                }
                ++(vlSymsp->__Vcoverage[24195]);
            } else {
                ++(vlSymsp->__Vcoverage[24196]);
            }
            this->__Vfunc_uvm_report_enabled__130__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__130__severity = 1U;
            __Vfunc_uvm_report_enabled__130__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__131__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__131__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__132__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__132__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__130__verbosity, (IData)(__Vfunc_uvm_report_enabled__130__severity), this->__Vfunc_uvm_report_enabled__130__id, __VlefCall_7__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                __Vtask_uvm_report_warning__135__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__135__context_name = ""s;
                __Vtask_uvm_report_warning__135__line = 0x00000573U;
                this->__Vtask_uvm_report_warning__135__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__135__verbosity = 0U;
                this->__Vtask_uvm_report_warning__135__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate block '"s, name), "' in block '"s), __VlefCall_8__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__135__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__136__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__136__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__137__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__137__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__135__id, this->__Vtask_uvm_report_warning__135__message, __Vtask_uvm_report_warning__135__verbosity, this->__Vtask_uvm_report_warning__135__filename, __Vtask_uvm_report_warning__135__line, this->__Vtask_uvm_report_warning__135__context_name, (IData)(__Vtask_uvm_report_warning__135__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24197]);
            } else {
                ++(vlSymsp->__Vcoverage[24198]);
            }
            get_block_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24199]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_reg_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_reg_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__142__verbosity;
        __Vfunc_uvm_report_enabled__142__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__142__severity;
        __Vfunc_uvm_report_enabled__142__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__143__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__144__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__147__verbosity;
        __Vtask_uvm_report_warning__147__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__147__line;
        __Vtask_uvm_report_warning__147__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__147__report_enabled_checked;
        __Vtask_uvm_report_warning__147__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__148__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__149__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_7__get_full_name;
        IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
        std::string __VlefCall_5__get_name;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        std::string __VlefCall_2__get_name;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk633__DOT__rg_;
        CData/*0:0*/ unnamedblk633__DOT__rg___Vfirst;
        unnamedblk633__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk633__DOT__unnamedblk634__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk635__DOT__blk_;
        CData/*0:0*/ unnamedblk635__DOT__blk___Vfirst;
        unnamedblk635__DOT__blk___Vfirst = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> unnamedblk635__DOT__unnamedblk636__DOT__subregs;
        IData/*31:0*/ unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j;
        unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0;
        {
            __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk633__DOT__rg_));
            if (__VlefExpr_0) {
                unnamedblk633__DOT__rg___Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk633__DOT__rg___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk633__DOT__rg_));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk633__DOT__rg___Vfirst = 0U;
                    unnamedblk633__DOT__unnamedblk634__DOT__rg 
                        = unnamedblk633__DOT__rg_;
                    VL_NULL_CHECK(unnamedblk633__DOT__unnamedblk634__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1407)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    if ((__VlefCall_2__get_name == name)) {
                        get_reg_by_name__Vfuncrtn = unnamedblk633__DOT__unnamedblk634__DOT__rg;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[24201]);
                    }
                    ++(vlSymsp->__Vcoverage[24202]);
                }
                ++(vlSymsp->__Vcoverage[24203]);
            } else {
                ++(vlSymsp->__Vcoverage[24204]);
            }
            __VlefExpr_3 = (0U != this->__PVT__blks.first(unnamedblk635__DOT__blk_));
            if (__VlefExpr_3) {
                unnamedblk635__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk635__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__blks.next(unnamedblk635__DOT__blk_));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk635__DOT__blk___Vfirst = 0U;
                    unnamedblk635__DOT__unnamedblk636__DOT__subregs.clear();
                    VL_NULL_CHECK(unnamedblk635__DOT__blk_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1414)
                    ->__VnoInFunc_get_registers(vlSymsp, unnamedblk635__DOT__unnamedblk636__DOT__subregs, 1U);
                    unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j, unnamedblk635__DOT__unnamedblk636__DOT__subregs.size())) {
                        VL_NULL_CHECK(unnamedblk635__DOT__unnamedblk636__DOT__subregs.at(unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1417)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        if ((__VlefCall_5__get_name 
                             == name)) {
                            get_reg_by_name__Vfuncrtn 
                                = unnamedblk635__DOT__unnamedblk636__DOT__subregs.at(unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[24206]);
                        }
                        unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j 
                            = ((IData)(1U) + unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                        ++(vlSymsp->__Vcoverage[24207]);
                    }
                    ++(vlSymsp->__Vcoverage[24208]);
                }
                ++(vlSymsp->__Vcoverage[24209]);
            } else {
                ++(vlSymsp->__Vcoverage[24210]);
            }
            this->__Vfunc_uvm_report_enabled__142__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__142__severity = 1U;
            __Vfunc_uvm_report_enabled__142__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__143__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__143__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__144__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__144__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__142__verbosity, (IData)(__Vfunc_uvm_report_enabled__142__severity), this->__Vfunc_uvm_report_enabled__142__id, __VlefCall_6__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_warning__147__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__147__context_name = ""s;
                __Vtask_uvm_report_warning__147__line = 0x0000058eU;
                this->__Vtask_uvm_report_warning__147__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__147__verbosity = 0U;
                this->__Vtask_uvm_report_warning__147__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate register '"s, name), "' in block '"s), __VlefCall_7__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__147__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__148__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__148__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__149__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__149__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__147__id, this->__Vtask_uvm_report_warning__147__message, __Vtask_uvm_report_warning__147__verbosity, this->__Vtask_uvm_report_warning__147__filename, __Vtask_uvm_report_warning__147__line, this->__Vtask_uvm_report_warning__147__context_name, (IData)(__Vtask_uvm_report_warning__147__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24211]);
            } else {
                ++(vlSymsp->__Vcoverage[24212]);
            }
            get_reg_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24213]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vreg_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vreg_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__154__verbosity;
        __Vfunc_uvm_report_enabled__154__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__154__severity;
        __Vfunc_uvm_report_enabled__154__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__155__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__156__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__159__verbosity;
        __Vtask_uvm_report_warning__159__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__159__line;
        __Vtask_uvm_report_warning__159__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__159__report_enabled_checked;
        __Vtask_uvm_report_warning__159__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__160__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__161__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_7__get_full_name;
        IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
        std::string __VlefCall_5__get_name;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        std::string __VlefCall_2__get_name;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk638__DOT__rg_;
        CData/*0:0*/ unnamedblk638__DOT__rg___Vfirst;
        unnamedblk638__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk638__DOT__unnamedblk639__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk640__DOT__blk_;
        CData/*0:0*/ unnamedblk640__DOT__blk___Vfirst;
        unnamedblk640__DOT__blk___Vfirst = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> unnamedblk640__DOT__unnamedblk641__DOT__subvregs;
        IData/*31:0*/ unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j;
        unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j = 0;
        {
            __VlefExpr_0 = (0U != this->__PVT__vregs.first(unnamedblk638__DOT__rg_));
            if (__VlefExpr_0) {
                unnamedblk638__DOT__rg___Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk638__DOT__rg___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__vregs.next(unnamedblk638__DOT__rg_));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk638__DOT__rg___Vfirst = 0U;
                    unnamedblk638__DOT__unnamedblk639__DOT__rg 
                        = unnamedblk638__DOT__rg_;
                    VL_NULL_CHECK(unnamedblk638__DOT__unnamedblk639__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1434)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    if ((__VlefCall_2__get_name == name)) {
                        get_vreg_by_name__Vfuncrtn 
                            = unnamedblk638__DOT__unnamedblk639__DOT__rg;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[24215]);
                    }
                    ++(vlSymsp->__Vcoverage[24216]);
                }
                ++(vlSymsp->__Vcoverage[24217]);
            } else {
                ++(vlSymsp->__Vcoverage[24218]);
            }
            __VlefExpr_3 = (0U != this->__PVT__blks.first(unnamedblk640__DOT__blk_));
            if (__VlefExpr_3) {
                unnamedblk640__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk640__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__blks.next(unnamedblk640__DOT__blk_));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk640__DOT__blk___Vfirst = 0U;
                    unnamedblk640__DOT__unnamedblk641__DOT__subvregs.clear();
                    VL_NULL_CHECK(unnamedblk640__DOT__blk_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1441)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, unnamedblk640__DOT__unnamedblk641__DOT__subvregs, 1U);
                    unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j, unnamedblk640__DOT__unnamedblk641__DOT__subvregs.size())) {
                        VL_NULL_CHECK(unnamedblk640__DOT__unnamedblk641__DOT__subvregs.at(unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1444)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        if ((__VlefCall_5__get_name 
                             == name)) {
                            get_vreg_by_name__Vfuncrtn 
                                = unnamedblk640__DOT__unnamedblk641__DOT__subvregs.at(unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j);
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[24220]);
                        }
                        unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j 
                            = ((IData)(1U) + unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j);
                        ++(vlSymsp->__Vcoverage[24221]);
                    }
                    ++(vlSymsp->__Vcoverage[24222]);
                }
                ++(vlSymsp->__Vcoverage[24223]);
            } else {
                ++(vlSymsp->__Vcoverage[24224]);
            }
            this->__Vfunc_uvm_report_enabled__154__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__154__severity = 1U;
            __Vfunc_uvm_report_enabled__154__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__155__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__155__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__156__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__156__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__154__verbosity, (IData)(__Vfunc_uvm_report_enabled__154__severity), this->__Vfunc_uvm_report_enabled__154__id, __VlefCall_6__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_warning__159__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__159__context_name = ""s;
                __Vtask_uvm_report_warning__159__line = 0x000005a9U;
                this->__Vtask_uvm_report_warning__159__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__159__verbosity = 0U;
                this->__Vtask_uvm_report_warning__159__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate virtual register '"s, name), "' in block '"s), __VlefCall_7__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__159__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__160__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__160__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__161__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__161__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__159__id, this->__Vtask_uvm_report_warning__159__message, __Vtask_uvm_report_warning__159__verbosity, this->__Vtask_uvm_report_warning__159__filename, __Vtask_uvm_report_warning__159__line, this->__Vtask_uvm_report_warning__159__context_name, (IData)(__Vtask_uvm_report_warning__159__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24225]);
            } else {
                ++(vlSymsp->__Vcoverage[24226]);
            }
            get_vreg_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24227]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_mem_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_mem_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__166__verbosity;
        __Vfunc_uvm_report_enabled__166__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__166__severity;
        __Vfunc_uvm_report_enabled__166__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__167__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__168__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__171__verbosity;
        __Vtask_uvm_report_warning__171__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__171__line;
        __Vtask_uvm_report_warning__171__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__171__report_enabled_checked;
        __Vtask_uvm_report_warning__171__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__172__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__173__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_7__get_full_name;
        IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
        std::string __VlefCall_5__get_name;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        std::string __VlefCall_2__get_name;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk643__DOT__mem_;
        CData/*0:0*/ unnamedblk643__DOT__mem___Vfirst;
        unnamedblk643__DOT__mem___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk643__DOT__unnamedblk644__DOT__mem;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk645__DOT__blk_;
        CData/*0:0*/ unnamedblk645__DOT__blk___Vfirst;
        unnamedblk645__DOT__blk___Vfirst = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> unnamedblk645__DOT__unnamedblk646__DOT__submems;
        IData/*31:0*/ unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j;
        unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j = 0;
        {
            __VlefExpr_0 = (0U != this->__PVT__mems.first(unnamedblk643__DOT__mem_));
            if (__VlefExpr_0) {
                unnamedblk643__DOT__mem___Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk643__DOT__mem___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__mems.next(unnamedblk643__DOT__mem_));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk643__DOT__mem___Vfirst = 0U;
                    unnamedblk643__DOT__unnamedblk644__DOT__mem 
                        = unnamedblk643__DOT__mem_;
                    VL_NULL_CHECK(unnamedblk643__DOT__unnamedblk644__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1461)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    if ((__VlefCall_2__get_name == name)) {
                        get_mem_by_name__Vfuncrtn = unnamedblk643__DOT__unnamedblk644__DOT__mem;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[24229]);
                    }
                    ++(vlSymsp->__Vcoverage[24230]);
                }
                ++(vlSymsp->__Vcoverage[24231]);
            } else {
                ++(vlSymsp->__Vcoverage[24232]);
            }
            __VlefExpr_3 = (0U != this->__PVT__blks.first(unnamedblk645__DOT__blk_));
            if (__VlefExpr_3) {
                unnamedblk645__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk645__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__blks.next(unnamedblk645__DOT__blk_));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk645__DOT__blk___Vfirst = 0U;
                    unnamedblk645__DOT__unnamedblk646__DOT__submems.clear();
                    VL_NULL_CHECK(unnamedblk645__DOT__blk_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1468)
                    ->__VnoInFunc_get_memories(vlSymsp, unnamedblk645__DOT__unnamedblk646__DOT__submems, 1U);
                    unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j, unnamedblk645__DOT__unnamedblk646__DOT__submems.size())) {
                        VL_NULL_CHECK(unnamedblk645__DOT__unnamedblk646__DOT__submems.at(unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1471)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                        if ((__VlefCall_5__get_name 
                             == name)) {
                            get_mem_by_name__Vfuncrtn 
                                = unnamedblk645__DOT__unnamedblk646__DOT__submems.at(unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j);
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[24234]);
                        }
                        unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j 
                            = ((IData)(1U) + unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j);
                        ++(vlSymsp->__Vcoverage[24235]);
                    }
                    ++(vlSymsp->__Vcoverage[24236]);
                }
                ++(vlSymsp->__Vcoverage[24237]);
            } else {
                ++(vlSymsp->__Vcoverage[24238]);
            }
            this->__Vfunc_uvm_report_enabled__166__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__166__severity = 1U;
            __Vfunc_uvm_report_enabled__166__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__167__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__167__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__168__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__168__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__166__verbosity, (IData)(__Vfunc_uvm_report_enabled__166__severity), this->__Vfunc_uvm_report_enabled__166__id, __VlefCall_6__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_warning__171__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__171__context_name = ""s;
                __Vtask_uvm_report_warning__171__line = 0x000005c4U;
                this->__Vtask_uvm_report_warning__171__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__171__verbosity = 0U;
                this->__Vtask_uvm_report_warning__171__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate memory '"s, name), "' in block '"s), __VlefCall_7__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__171__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__172__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__172__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__173__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__173__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__171__id, this->__Vtask_uvm_report_warning__171__message, __Vtask_uvm_report_warning__171__verbosity, this->__Vtask_uvm_report_warning__171__filename, __Vtask_uvm_report_warning__171__line, this->__Vtask_uvm_report_warning__171__context_name, (IData)(__Vtask_uvm_report_warning__171__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24239]);
            } else {
                ++(vlSymsp->__Vcoverage[24240]);
            }
            get_mem_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24241]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_field_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_field_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__180__verbosity;
        __Vfunc_uvm_report_enabled__180__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__180__severity;
        __Vfunc_uvm_report_enabled__180__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__181__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__182__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__185__verbosity;
        __Vtask_uvm_report_warning__185__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__185__line;
        __Vtask_uvm_report_warning__185__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__185__report_enabled_checked;
        __Vtask_uvm_report_warning__185__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__186__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__187__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_7__get_full_name;
        IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
        std::string __VlefCall_5__get_name;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        std::string __VlefCall_2__get_name;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk648__DOT__rg_;
        CData/*0:0*/ unnamedblk648__DOT__rg___Vfirst;
        unnamedblk648__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk648__DOT__unnamedblk649__DOT__rg;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> unnamedblk648__DOT__unnamedblk649__DOT__fields;
        IData/*31:0*/ unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i;
        unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk651__DOT__blk_;
        CData/*0:0*/ unnamedblk651__DOT__blk___Vfirst;
        unnamedblk651__DOT__blk___Vfirst = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> unnamedblk651__DOT__unnamedblk652__DOT__subregs;
        IData/*31:0*/ unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j;
        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields;
        IData/*31:0*/ unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i;
        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i = 0;
        {
            __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk648__DOT__rg_));
            if (__VlefExpr_0) {
                unnamedblk648__DOT__rg___Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk648__DOT__rg___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk648__DOT__rg_));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk648__DOT__rg___Vfirst = 0U;
                    unnamedblk648__DOT__unnamedblk649__DOT__rg 
                        = unnamedblk648__DOT__rg_;
                    unnamedblk648__DOT__unnamedblk649__DOT__fields.clear();
                    VL_NULL_CHECK(unnamedblk648__DOT__unnamedblk649__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1490)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk648__DOT__unnamedblk649__DOT__fields);
                    unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i, unnamedblk648__DOT__unnamedblk649__DOT__fields.size())) {
                        VL_NULL_CHECK(unnamedblk648__DOT__unnamedblk649__DOT__fields.at(unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1492)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                        if ((__VlefCall_2__get_name 
                             == name)) {
                            get_field_by_name__Vfuncrtn 
                                = unnamedblk648__DOT__unnamedblk649__DOT__fields.at(unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i);
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[24243]);
                        }
                        unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i 
                            = ((IData)(1U) + unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i);
                        ++(vlSymsp->__Vcoverage[24244]);
                    }
                    ++(vlSymsp->__Vcoverage[24245]);
                }
                ++(vlSymsp->__Vcoverage[24246]);
            } else {
                ++(vlSymsp->__Vcoverage[24247]);
            }
            __VlefExpr_3 = (0U != this->__PVT__blks.first(unnamedblk651__DOT__blk_));
            if (__VlefExpr_3) {
                unnamedblk651__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk651__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__blks.next(unnamedblk651__DOT__blk_));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk651__DOT__blk___Vfirst = 0U;
                    unnamedblk651__DOT__unnamedblk652__DOT__subregs.clear();
                    VL_NULL_CHECK(unnamedblk651__DOT__blk_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1499)
                    ->__VnoInFunc_get_registers(vlSymsp, unnamedblk651__DOT__unnamedblk652__DOT__subregs, 1U);
                    unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j, unnamedblk651__DOT__unnamedblk652__DOT__subregs.size())) {
                        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.clear();
                        VL_NULL_CHECK(unnamedblk651__DOT__unnamedblk652__DOT__subregs.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1503)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields);
                        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.size())) {
                            VL_NULL_CHECK(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1505)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                            if ((__VlefCall_5__get_name 
                                 == name)) {
                                get_field_by_name__Vfuncrtn 
                                    = unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i);
                                goto __Vlabel0;
                            } else {
                                ++(vlSymsp->__Vcoverage[24249]);
                            }
                            unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i 
                                = ((IData)(1U) + unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i);
                            ++(vlSymsp->__Vcoverage[24250]);
                        }
                        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j 
                            = ((IData)(1U) + unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j);
                        ++(vlSymsp->__Vcoverage[24251]);
                    }
                    ++(vlSymsp->__Vcoverage[24252]);
                }
                ++(vlSymsp->__Vcoverage[24253]);
            } else {
                ++(vlSymsp->__Vcoverage[24254]);
            }
            this->__Vfunc_uvm_report_enabled__180__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__180__severity = 1U;
            __Vfunc_uvm_report_enabled__180__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__181__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__181__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__182__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__182__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__180__verbosity, (IData)(__Vfunc_uvm_report_enabled__180__severity), this->__Vfunc_uvm_report_enabled__180__id, __VlefCall_6__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_warning__185__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__185__context_name = ""s;
                __Vtask_uvm_report_warning__185__line = 0x000005e7U;
                this->__Vtask_uvm_report_warning__185__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__185__verbosity = 0U;
                this->__Vtask_uvm_report_warning__185__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate field '"s, name), "' in block '"s), __VlefCall_7__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__185__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__186__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__186__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__187__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__187__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__185__id, this->__Vtask_uvm_report_warning__185__message, __Vtask_uvm_report_warning__185__verbosity, this->__Vtask_uvm_report_warning__185__filename, __Vtask_uvm_report_warning__185__line, this->__Vtask_uvm_report_warning__185__context_name, (IData)(__Vtask_uvm_report_warning__185__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24255]);
            } else {
                ++(vlSymsp->__Vcoverage[24256]);
            }
            get_field_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24257]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vfield_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vfield_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__194__verbosity;
        __Vfunc_uvm_report_enabled__194__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__194__severity;
        __Vfunc_uvm_report_enabled__194__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__195__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__196__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__199__verbosity;
        __Vtask_uvm_report_warning__199__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__199__line;
        __Vtask_uvm_report_warning__199__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__199__report_enabled_checked;
        __Vtask_uvm_report_warning__199__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__200__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__201__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_7__get_full_name;
        IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
        std::string __VlefCall_5__get_name;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        std::string __VlefCall_2__get_name;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk656__DOT__rg_;
        CData/*0:0*/ unnamedblk656__DOT__rg___Vfirst;
        unnamedblk656__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk656__DOT__unnamedblk657__DOT__rg;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> unnamedblk656__DOT__unnamedblk657__DOT__fields;
        IData/*31:0*/ unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i;
        unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk659__DOT__blk_;
        CData/*0:0*/ unnamedblk659__DOT__blk___Vfirst;
        unnamedblk659__DOT__blk___Vfirst = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> unnamedblk659__DOT__unnamedblk660__DOT__subvregs;
        IData/*31:0*/ unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j;
        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields;
        IData/*31:0*/ unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i;
        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i = 0;
        {
            __VlefExpr_0 = (0U != this->__PVT__vregs.first(unnamedblk656__DOT__rg_));
            if (__VlefExpr_0) {
                unnamedblk656__DOT__rg___Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk656__DOT__rg___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__vregs.next(unnamedblk656__DOT__rg_));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk656__DOT__rg___Vfirst = 0U;
                    unnamedblk656__DOT__unnamedblk657__DOT__rg 
                        = unnamedblk656__DOT__rg_;
                    unnamedblk656__DOT__unnamedblk657__DOT__fields.clear();
                    VL_NULL_CHECK(unnamedblk656__DOT__unnamedblk657__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1526)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk656__DOT__unnamedblk657__DOT__fields);
                    unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i, unnamedblk656__DOT__unnamedblk657__DOT__fields.size())) {
                        VL_NULL_CHECK(unnamedblk656__DOT__unnamedblk657__DOT__fields.at(unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1528)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                        if ((__VlefCall_2__get_name 
                             == name)) {
                            get_vfield_by_name__Vfuncrtn 
                                = unnamedblk656__DOT__unnamedblk657__DOT__fields.at(unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i);
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[24259]);
                        }
                        unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i 
                            = ((IData)(1U) + unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i);
                        ++(vlSymsp->__Vcoverage[24260]);
                    }
                    ++(vlSymsp->__Vcoverage[24261]);
                }
                ++(vlSymsp->__Vcoverage[24262]);
            } else {
                ++(vlSymsp->__Vcoverage[24263]);
            }
            __VlefExpr_3 = (0U != this->__PVT__blks.first(unnamedblk659__DOT__blk_));
            if (__VlefExpr_3) {
                unnamedblk659__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk659__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__blks.next(unnamedblk659__DOT__blk_));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk659__DOT__blk___Vfirst = 0U;
                    unnamedblk659__DOT__unnamedblk660__DOT__subvregs.clear();
                    VL_NULL_CHECK(unnamedblk659__DOT__blk_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1535)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, unnamedblk659__DOT__unnamedblk660__DOT__subvregs, 1U);
                    unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j, unnamedblk659__DOT__unnamedblk660__DOT__subvregs.size())) {
                        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.clear();
                        VL_NULL_CHECK(unnamedblk659__DOT__unnamedblk660__DOT__subvregs.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1539)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields);
                        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.size())) {
                            VL_NULL_CHECK(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1541)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                            if ((__VlefCall_5__get_name 
                                 == name)) {
                                get_vfield_by_name__Vfuncrtn 
                                    = unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i);
                                goto __Vlabel0;
                            } else {
                                ++(vlSymsp->__Vcoverage[24265]);
                            }
                            unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i 
                                = ((IData)(1U) + unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i);
                            ++(vlSymsp->__Vcoverage[24266]);
                        }
                        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j 
                            = ((IData)(1U) + unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j);
                        ++(vlSymsp->__Vcoverage[24267]);
                    }
                    ++(vlSymsp->__Vcoverage[24268]);
                }
                ++(vlSymsp->__Vcoverage[24269]);
            } else {
                ++(vlSymsp->__Vcoverage[24270]);
            }
            this->__Vfunc_uvm_report_enabled__194__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__194__severity = 1U;
            __Vfunc_uvm_report_enabled__194__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__195__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__195__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__196__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__196__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__194__verbosity, (IData)(__Vfunc_uvm_report_enabled__194__severity), this->__Vfunc_uvm_report_enabled__194__id, __VlefCall_6__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_6__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtask_uvm_report_warning__199__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__199__context_name = ""s;
                __Vtask_uvm_report_warning__199__line = 0x0000060bU;
                this->__Vtask_uvm_report_warning__199__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__199__verbosity = 0U;
                this->__Vtask_uvm_report_warning__199__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate virtual field '"s, name), "' in block '"s), __VlefCall_7__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__199__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__200__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__201__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__201__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__199__id, this->__Vtask_uvm_report_warning__199__message, __Vtask_uvm_report_warning__199__verbosity, this->__Vtask_uvm_report_warning__199__filename, __Vtask_uvm_report_warning__199__line, this->__Vtask_uvm_report_warning__199__context_name, (IData)(__Vtask_uvm_report_warning__199__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24271]);
            } else {
                ++(vlSymsp->__Vcoverage[24272]);
            }
            get_vfield_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24273]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage\n"); );
        // Locals
        IData/*31:0*/ __Vtask_set_coverage__203__Vfuncout;
        __Vtask_set_coverage__203__Vfuncout = 0;
        IData/*31:0*/ __Vtask_set_coverage__204__Vfuncout;
        __Vtask_set_coverage__204__Vfuncout = 0;
        IData/*31:0*/ __Vtask_set_coverage__205__Vfuncout;
        __Vtask_set_coverage__205__Vfuncout = 0;
        // Body
        CData/*0:0*/ __VlefExpr_5;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk664__DOT__rg_;
        CData/*0:0*/ unnamedblk664__DOT__rg___Vfirst;
        unnamedblk664__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk664__DOT__unnamedblk665__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk666__DOT__mem_;
        CData/*0:0*/ unnamedblk666__DOT__mem___Vfirst;
        unnamedblk666__DOT__mem___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk666__DOT__unnamedblk667__DOT__mem;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk668__DOT__blk_;
        CData/*0:0*/ unnamedblk668__DOT__blk___Vfirst;
        unnamedblk668__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk668__DOT__unnamedblk669__DOT__blk;
        set_coverage__Vfuncrtn = 0U;
        this->__PVT__cover_on = (this->__PVT__has_cover 
                                 & is_on);
        __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk664__DOT__rg_));
        if (__VlefExpr_0) {
            unnamedblk664__DOT__rg___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk664__DOT__rg___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk664__DOT__rg_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk664__DOT__rg___Vfirst = 0U;
                unnamedblk664__DOT__unnamedblk665__DOT__rg 
                    = unnamedblk664__DOT__rg_;
                VL_NULL_CHECK(unnamedblk664__DOT__unnamedblk665__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1566)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__203__Vfuncout);
                ++(vlSymsp->__Vcoverage[24274]);
            }
            ++(vlSymsp->__Vcoverage[24275]);
        } else {
            ++(vlSymsp->__Vcoverage[24276]);
        }
        __VlefExpr_2 = (0U != this->__PVT__mems.first(unnamedblk666__DOT__mem_));
        if (__VlefExpr_2) {
            unnamedblk666__DOT__mem___Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk666__DOT__mem___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__mems.next(unnamedblk666__DOT__mem_));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk666__DOT__mem___Vfirst = 0U;
                unnamedblk666__DOT__unnamedblk667__DOT__mem 
                    = unnamedblk666__DOT__mem_;
                VL_NULL_CHECK(unnamedblk666__DOT__unnamedblk667__DOT__mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1571)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__204__Vfuncout);
                ++(vlSymsp->__Vcoverage[24277]);
            }
            ++(vlSymsp->__Vcoverage[24278]);
        } else {
            ++(vlSymsp->__Vcoverage[24279]);
        }
        __VlefExpr_4 = (0U != this->__PVT__blks.first(unnamedblk668__DOT__blk_));
        if (__VlefExpr_4) {
            unnamedblk668__DOT__blk___Vfirst = 1U;
            while (true) {
                __VlefExpr_5 = unnamedblk668__DOT__blk___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_5)))) {
                    __VlefExpr_5 = (0U != this->__PVT__blks.next(unnamedblk668__DOT__blk_));
                }
                if (!(__VlefExpr_5)) break;
                unnamedblk668__DOT__blk___Vfirst = 0U;
                unnamedblk668__DOT__unnamedblk669__DOT__blk 
                    = unnamedblk668__DOT__blk_;
                VL_NULL_CHECK(unnamedblk668__DOT__unnamedblk669__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1576)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__205__Vfuncout);
                ++(vlSymsp->__Vcoverage[24280]);
            }
            ++(vlSymsp->__Vcoverage[24281]);
        } else {
            ++(vlSymsp->__Vcoverage[24282]);
        }
        set_coverage__Vfuncrtn = this->__PVT__cover_on;
        ++(vlSymsp->__Vcoverage[24283]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk670__DOT__rg_;
        CData/*0:0*/ unnamedblk670__DOT__rg___Vfirst;
        unnamedblk670__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk670__DOT__unnamedblk671__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk672__DOT__blk_;
        CData/*0:0*/ unnamedblk672__DOT__blk___Vfirst;
        unnamedblk672__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk672__DOT__unnamedblk673__DOT__blk;
        __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk670__DOT__rg_));
        if (__VlefExpr_0) {
            unnamedblk670__DOT__rg___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk670__DOT__rg___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk670__DOT__rg_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk670__DOT__rg___Vfirst = 0U;
                unnamedblk670__DOT__unnamedblk671__DOT__rg 
                    = unnamedblk670__DOT__rg_;
                VL_NULL_CHECK(unnamedblk670__DOT__unnamedblk671__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1588)
                    ->__VnoInFunc_sample_values(vlSymsp);
                ++(vlSymsp->__Vcoverage[24284]);
            }
            ++(vlSymsp->__Vcoverage[24285]);
        } else {
            ++(vlSymsp->__Vcoverage[24286]);
        }
        __VlefExpr_2 = (0U != this->__PVT__blks.first(unnamedblk672__DOT__blk_));
        if (__VlefExpr_2) {
            unnamedblk672__DOT__blk___Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk672__DOT__blk___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__blks.next(unnamedblk672__DOT__blk_));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk672__DOT__blk___Vfirst = 0U;
                unnamedblk672__DOT__unnamedblk673__DOT__blk 
                    = unnamedblk672__DOT__blk_;
                VL_NULL_CHECK(unnamedblk672__DOT__unnamedblk673__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1593)
                    ->__VnoInFunc_sample_values(vlSymsp);
                ++(vlSymsp->__Vcoverage[24287]);
            }
            ++(vlSymsp->__Vcoverage[24288]);
        } else {
            ++(vlSymsp->__Vcoverage[24289]);
        }
        ++(vlSymsp->__Vcoverage[24290]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX\n"); );
        // Body
        this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
        if ((VlNull{} != this->__PVT__parent)) {
            ++(vlSymsp->__Vcoverage[24291]);
        } else {
            ++(vlSymsp->__Vcoverage[24292]);
        }
        ++(vlSymsp->__Vcoverage[24293]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_build_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_build_coverage\n"); );
        // Locals
        CData/*0:0*/ __Vtask_read_by_name__210__Vfuncout;
        __Vtask_read_by_name__210__Vfuncout = 0;
        IData/*31:0*/ __Vtask_read_by_name__210__val;
        __Vtask_read_by_name__210__val = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_0__get_full_name;
        build_coverage__Vfuncrtn = 0U;
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        __Vtask_read_by_name__210__val = build_coverage__Vfuncrtn;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz194__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__210__val, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>{this}, __Vtask_read_by_name__210__Vfuncout);
        build_coverage__Vfuncrtn = __Vtask_read_by_name__210__val;
        build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                    & models);
        ++(vlSymsp->__Vcoverage[24294]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_coverage\n"); );
        // Body
        this->__PVT__has_cover = (this->__PVT__has_cover 
                                  | models);
        ++(vlSymsp->__Vcoverage[24295]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_coverage\n"); );
        // Body
        has_coverage__Vfuncrtn = ((this->__PVT__has_cover 
                                   & models) == models);
        ++(vlSymsp->__Vcoverage[24296]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_coverage\n"); );
        // Body
        CData/*0:0*/ __VlefCall_0__has_coverage;
        {
            get_coverage__Vfuncrtn = 0U;
            this->__VnoInFunc_has_coverage(vlSymsp, is_on, __VlefCall_0__has_coverage);
            if (__VlefCall_0__has_coverage) {
                ++(vlSymsp->__Vcoverage[24298]);
            } else {
                get_coverage__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            get_coverage__Vfuncrtn = ((this->__PVT__cover_on 
                                       & is_on) == is_on);
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24299]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk674__DOT__rg_;
        CData/*0:0*/ unnamedblk674__DOT__rg___Vfirst;
        unnamedblk674__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk674__DOT__unnamedblk675__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk676__DOT__blk_;
        CData/*0:0*/ unnamedblk676__DOT__blk___Vfirst;
        unnamedblk676__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk676__DOT__unnamedblk677__DOT__blk;
        __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk674__DOT__rg_));
        if (__VlefExpr_0) {
            unnamedblk674__DOT__rg___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk674__DOT__rg___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk674__DOT__rg_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk674__DOT__rg___Vfirst = 0U;
                unnamedblk674__DOT__unnamedblk675__DOT__rg 
                    = unnamedblk674__DOT__rg_;
                VL_NULL_CHECK(unnamedblk674__DOT__unnamedblk675__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1653)
                    ->__VnoInFunc_reset(vlSymsp, kind);
                ++(vlSymsp->__Vcoverage[24300]);
            }
            ++(vlSymsp->__Vcoverage[24301]);
        } else {
            ++(vlSymsp->__Vcoverage[24302]);
        }
        __VlefExpr_2 = (0U != this->__PVT__blks.first(unnamedblk676__DOT__blk_));
        if (__VlefExpr_2) {
            unnamedblk676__DOT__blk___Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk676__DOT__blk___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__blks.next(unnamedblk676__DOT__blk_));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk676__DOT__blk___Vfirst = 0U;
                unnamedblk676__DOT__unnamedblk677__DOT__blk 
                    = unnamedblk676__DOT__blk_;
                VL_NULL_CHECK(unnamedblk676__DOT__unnamedblk677__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1658)
                    ->__VnoInFunc_reset(vlSymsp, kind);
                ++(vlSymsp->__Vcoverage[24303]);
            }
            ++(vlSymsp->__Vcoverage[24304]);
        } else {
            ++(vlSymsp->__Vcoverage[24305]);
        }
        ++(vlSymsp->__Vcoverage[24306]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update\n"); );
        // Body
        CData/*0:0*/ __VlefCall_5__needs_update;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefCall_2__needs_update;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk678__DOT__rg_;
        CData/*0:0*/ unnamedblk678__DOT__rg___Vfirst;
        unnamedblk678__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk678__DOT__unnamedblk679__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk680__DOT__blk_;
        CData/*0:0*/ unnamedblk680__DOT__blk___Vfirst;
        unnamedblk680__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk680__DOT__unnamedblk681__DOT__blk;
        {
            needs_update__Vfuncrtn = 0U;
            needs_update__Vfuncrtn = 0U;
            __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk678__DOT__rg_));
            if (__VlefExpr_0) {
                unnamedblk678__DOT__rg___Vfirst = 1U;
                while (true) {
                    __VlefExpr_1 = unnamedblk678__DOT__rg___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_1)))) {
                        __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk678__DOT__rg_));
                    }
                    if (!(__VlefExpr_1)) break;
                    unnamedblk678__DOT__rg___Vfirst = 0U;
                    unnamedblk678__DOT__unnamedblk679__DOT__rg 
                        = unnamedblk678__DOT__rg_;
                    VL_NULL_CHECK(unnamedblk678__DOT__unnamedblk679__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1670)
                    ->__VnoInFunc_needs_update(vlSymsp, __VlefCall_2__needs_update);
                    if (__VlefCall_2__needs_update) {
                        needs_update__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[24308]);
                    }
                    ++(vlSymsp->__Vcoverage[24309]);
                }
                ++(vlSymsp->__Vcoverage[24310]);
            } else {
                ++(vlSymsp->__Vcoverage[24311]);
            }
            __VlefExpr_3 = (0U != this->__PVT__blks.first(unnamedblk680__DOT__blk_));
            if (__VlefExpr_3) {
                unnamedblk680__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_4 = unnamedblk680__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_4)))) {
                        __VlefExpr_4 = (0U != this->__PVT__blks.next(unnamedblk680__DOT__blk_));
                    }
                    if (!(__VlefExpr_4)) break;
                    unnamedblk680__DOT__blk___Vfirst = 0U;
                    unnamedblk680__DOT__unnamedblk681__DOT__blk 
                        = unnamedblk680__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk680__DOT__unnamedblk681__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1675)
                    ->__VnoInFunc_needs_update(vlSymsp, __VlefCall_5__needs_update);
                    if (__VlefCall_5__needs_update) {
                        needs_update__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[24313]);
                    }
                    ++(vlSymsp->__Vcoverage[24314]);
                }
                ++(vlSymsp->__Vcoverage[24315]);
            } else {
                ++(vlSymsp->__Vcoverage[24316]);
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24317]);
    }

    VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__217__verbosity;
        __Vfunc_uvm_report_enabled__217__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__217__severity;
        __Vfunc_uvm_report_enabled__217__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__218__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__219__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__222__verbosity;
        __Vtask_uvm_report_info__222__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__222__line;
        __Vtask_uvm_report_info__222__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__222__report_enabled_checked;
        __Vtask_uvm_report_info__222__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__223__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__224__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__226__verbosity;
        __Vfunc_uvm_report_enabled__226__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__226__severity;
        __Vfunc_uvm_report_enabled__226__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__227__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__228__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__231__verbosity;
        __Vtask_uvm_report_info__231__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__231__line;
        __Vtask_uvm_report_info__231__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__231__report_enabled_checked;
        __Vtask_uvm_report_info__231__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
        IData/*31:0*/ __Vtask_update__236__status;
        __Vtask_update__236__status = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__237__verbosity;
        __Vfunc_uvm_report_enabled__237__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__237__severity;
        __Vfunc_uvm_report_enabled__237__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__238__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__239__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__242__verbosity;
        __Vtask_uvm_report_error__242__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__242__line;
        __Vtask_uvm_report_error__242__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__242__report_enabled_checked;
        __Vtask_uvm_report_error__242__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__243__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__244__Vfuncout;
        IData/*31:0*/ __Vtask_update__246__status;
        __Vtask_update__246__status = 0;
        std::string __Vtemp_1;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        CData/*0:0*/ __VlefExpr_10;
        CData/*0:0*/ __VlefExpr_9;
        std::string __VlefCall_8__get_full_name;
        IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_6__needs_update;
        CData/*0:0*/ __VlefExpr_5;
        CData/*0:0*/ __VlefExpr_4;
        std::string __VlefCall_3__get_name;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        std::string __VlefCall_1__get_name;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk682__DOT__rg_;
        CData/*0:0*/ unnamedblk682__DOT__rg___Vfirst;
        unnamedblk682__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk682__DOT__unnamedblk683__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk684__DOT__blk_;
        CData/*0:0*/ unnamedblk684__DOT__blk___Vfirst;
        unnamedblk684__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk684__DOT__unnamedblk685__DOT__blk;
        CData/*0:0*/ __VExpr_hcc4de6d4__0;
        __VExpr_hcc4de6d4__0 = 0;
        {
            status = 0U;
            status = 0U;
            this->__VnoInFunc_needs_update(vlSymsp, __VExpr_hcc4de6d4__0);
            if (__VExpr_hcc4de6d4__0) {
                ++(vlSymsp->__Vcoverage[24321]);
            } else {
                this->__Vfunc_uvm_report_enabled__217__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__217__severity = 0U;
                __Vfunc_uvm_report_enabled__217__verbosity = 0x0000012cU;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__218__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__218__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__219__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__219__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__217__verbosity, (IData)(__Vfunc_uvm_report_enabled__217__severity), this->__Vfunc_uvm_report_enabled__217__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    __Vtask_uvm_report_info__222__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__222__context_name = ""s;
                    __Vtask_uvm_report_info__222__line = 0x0000069eU;
                    this->__Vtask_uvm_report_info__222__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_info__222__verbosity = 0x0000012cU;
                    this->__Vtask_uvm_report_info__222__message 
                        = VL_SFORMATF_N_NX("%@:%0d - RegModel block %@ does not need updating",0,
                                           -1,&(fname),
                                           32,lineno,
                                           -1,&(__VlefCall_1__get_name)) ;
                    this->__Vtask_uvm_report_info__222__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__223__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__223__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__224__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__224__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                    ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__222__id, this->__Vtask_uvm_report_info__222__message, __Vtask_uvm_report_info__222__verbosity, this->__Vtask_uvm_report_info__222__filename, __Vtask_uvm_report_info__222__line, this->__Vtask_uvm_report_info__222__context_name, (IData)(__Vtask_uvm_report_info__222__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    ++(vlSymsp->__Vcoverage[24318]);
                } else {
                    ++(vlSymsp->__Vcoverage[24319]);
                }
                goto __Vlabel0;
            }
            this->__Vfunc_uvm_report_enabled__226__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__226__severity = 0U;
            __Vfunc_uvm_report_enabled__226__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__227__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__227__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__228__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__228__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__226__verbosity, (IData)(__Vfunc_uvm_report_enabled__226__severity), this->__Vfunc_uvm_report_enabled__226__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                __Vtask_uvm_report_info__231__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__231__context_name = ""s;
                __Vtask_uvm_report_info__231__line = 0x000006a3U;
                this->__Vtask_uvm_report_info__231__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_info__231__verbosity = 0x0000012cU;
                __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name85
                    [(3U & path)];
                this->__Vtask_uvm_report_info__231__message 
                    = VL_SFORMATF_N_NX("%@:%0d - Updating model block %@ with %@ path",0,
                                       -1,&(fname),
                                       32,lineno,-1,
                                       &(__VlefCall_3__get_name),
                                       -1,&(__Vtemp_1)) ;
                this->__Vtask_uvm_report_info__231__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__232__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__233__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                    ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__231__id, this->__Vtask_uvm_report_info__231__message, __Vtask_uvm_report_info__231__verbosity, this->__Vtask_uvm_report_info__231__filename, __Vtask_uvm_report_info__231__line, this->__Vtask_uvm_report_info__231__context_name, (IData)(__Vtask_uvm_report_info__231__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[24324]);
            } else {
                ++(vlSymsp->__Vcoverage[24325]);
            }
            __VlefExpr_4 = (0U != this->__PVT__regs.first(unnamedblk682__DOT__rg_));
            if (__VlefExpr_4) {
                unnamedblk682__DOT__rg___Vfirst = 1U;
                while (true) {
                    __VlefExpr_5 = unnamedblk682__DOT__rg___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_5)))) {
                        __VlefExpr_5 = (0U != this->__PVT__regs.next(unnamedblk682__DOT__rg_));
                    }
                    if (!(__VlefExpr_5)) break;
                    unnamedblk682__DOT__rg___Vfirst = 0U;
                    unnamedblk682__DOT__unnamedblk683__DOT__rg 
                        = unnamedblk682__DOT__rg_;
                    VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1703)
                    ->__VnoInFunc_needs_update(vlSymsp, __VlefCall_6__needs_update);
                    if (__VlefCall_6__needs_update) {
                        co_await VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1704)
                    ->__VnoInFunc_update(vlSymsp, __Vtask_update__236__status, path, VlNull{}, parent, prior, extension, ""s, 0U);
                        status = __Vtask_update__236__status;
                        if (((0U != status) & (2U != status))) {
                            this->__Vfunc_uvm_report_enabled__237__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__237__severity = 2U;
                            __Vfunc_uvm_report_enabled__237__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__238__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__238__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__239__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__239__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__237__verbosity, (IData)(__Vfunc_uvm_report_enabled__237__severity), this->__Vfunc_uvm_report_enabled__237__id, __VlefCall_7__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[437]);
                            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                                VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1707)
                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                                __Vtask_uvm_report_error__242__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__242__context_name = ""s;
                                __Vtask_uvm_report_error__242__line = 0x000006abU;
                                this->__Vtask_uvm_report_error__242__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                                __Vtask_uvm_report_error__242__verbosity = 0U;
                                this->__Vtask_uvm_report_error__242__message 
                                    = VL_SFORMATF_N_NX("Register \"%@\" could not be updated",0,
                                                       -1,
                                                       &(__VlefCall_8__get_full_name)) ;
                                this->__Vtask_uvm_report_error__242__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__243__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__243__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__244__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__244__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__242__id, this->__Vtask_uvm_report_error__242__message, __Vtask_uvm_report_error__242__verbosity, this->__Vtask_uvm_report_error__242__filename, __Vtask_uvm_report_error__242__line, this->__Vtask_uvm_report_error__242__context_name, (IData)(__Vtask_uvm_report_error__242__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[442]);
                                ++(vlSymsp->__Vcoverage[24326]);
                            } else {
                                ++(vlSymsp->__Vcoverage[24327]);
                            }
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[24329]);
                        }
                        if (((0U != status) & (2U != status))) {
                            ++(vlSymsp->__Vcoverage[24330]);
                        }
                        if ((2U == status)) {
                            ++(vlSymsp->__Vcoverage[24331]);
                        }
                        if ((0U == status)) {
                            ++(vlSymsp->__Vcoverage[24332]);
                        }
                        ++(vlSymsp->__Vcoverage[24333]);
                    } else {
                        ++(vlSymsp->__Vcoverage[24334]);
                    }
                    ++(vlSymsp->__Vcoverage[24335]);
                }
                ++(vlSymsp->__Vcoverage[24336]);
            } else {
                ++(vlSymsp->__Vcoverage[24337]);
            }
            __VlefExpr_9 = (0U != this->__PVT__blks.first(unnamedblk684__DOT__blk_));
            if (__VlefExpr_9) {
                unnamedblk684__DOT__blk___Vfirst = 1U;
                while (true) {
                    __VlefExpr_10 = unnamedblk684__DOT__blk___Vfirst;
                    if ((1U & (~ (IData)(__VlefExpr_10)))) {
                        __VlefExpr_10 = (0U != this->__PVT__blks.next(unnamedblk684__DOT__blk_));
                    }
                    if (!(__VlefExpr_10)) break;
                    unnamedblk684__DOT__blk___Vfirst = 0U;
                    unnamedblk684__DOT__unnamedblk685__DOT__blk 
                        = unnamedblk684__DOT__blk_;
                    co_await VL_NULL_CHECK(unnamedblk684__DOT__unnamedblk685__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1715)
                    ->__VnoInFunc_update(vlSymsp, __Vtask_update__246__status, path, parent, prior, extension, fname, lineno);
                    status = __Vtask_update__246__status;
                    ++(vlSymsp->__Vcoverage[24338]);
                }
                ++(vlSymsp->__Vcoverage[24339]);
            } else {
                ++(vlSymsp->__Vcoverage[24340]);
            }
            __Vlabel0: ;
        }
        if ((1U & (~ (IData)(__VExpr_hcc4de6d4__0)))) {
            ++(vlSymsp->__Vcoverage[24322]);
        }
        if (__VExpr_hcc4de6d4__0) {
            ++(vlSymsp->__Vcoverage[24323]);
        }
        ++(vlSymsp->__Vcoverage[24341]);
        co_return;
    }

    VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror\n"); );
        // Locals
        IData/*31:0*/ __Vtask_mirror__247__status;
        __Vtask_mirror__247__status = 0;
        IData/*31:0*/ __Vtask_mirror__248__status;
        __Vtask_mirror__248__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        CData/*0:0*/ __VlefExpr_3;
        CData/*0:0*/ __VlefExpr_2;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk686__DOT__rg_;
        CData/*0:0*/ unnamedblk686__DOT__rg___Vfirst;
        unnamedblk686__DOT__rg___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk686__DOT__unnamedblk687__DOT__rg;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk688__DOT__blk_;
        CData/*0:0*/ unnamedblk688__DOT__blk___Vfirst;
        unnamedblk688__DOT__blk___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk688__DOT__unnamedblk689__DOT__blk;
        status = 0U;
        __VlefExpr_0 = (0U != this->__PVT__regs.first(unnamedblk686__DOT__rg_));
        if (__VlefExpr_0) {
            unnamedblk686__DOT__rg___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk686__DOT__rg___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__regs.next(unnamedblk686__DOT__rg_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk686__DOT__rg___Vfirst = 0U;
                unnamedblk686__DOT__unnamedblk687__DOT__rg 
                    = unnamedblk686__DOT__rg_;
                co_await VL_NULL_CHECK(unnamedblk686__DOT__unnamedblk687__DOT__rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1734)
                    ->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__247__status, check, path, VlNull{}, parent, prior, extension, fname, lineno);
                status = __Vtask_mirror__247__status;
                if (((0U != status) & (2U != status))) {
                    ++(vlSymsp->__Vcoverage[24342]);
                } else {
                    ++(vlSymsp->__Vcoverage[24343]);
                }
                ++(vlSymsp->__Vcoverage[24347]);
            }
            if (((0U != status) & (2U != status))) {
                ++(vlSymsp->__Vcoverage[24344]);
            }
            if ((2U == status)) {
                ++(vlSymsp->__Vcoverage[24345]);
            }
            if ((0U == status)) {
                ++(vlSymsp->__Vcoverage[24346]);
            }
            ++(vlSymsp->__Vcoverage[24348]);
        } else {
            ++(vlSymsp->__Vcoverage[24349]);
        }
        __VlefExpr_2 = (0U != this->__PVT__blks.first(unnamedblk688__DOT__blk_));
        if (__VlefExpr_2) {
            unnamedblk688__DOT__blk___Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk688__DOT__blk___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__blks.next(unnamedblk688__DOT__blk_));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk688__DOT__blk___Vfirst = 0U;
                unnamedblk688__DOT__unnamedblk689__DOT__blk 
                    = unnamedblk688__DOT__blk_;
                co_await VL_NULL_CHECK(unnamedblk688__DOT__unnamedblk689__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1744)
                    ->__VnoInFunc_mirror(vlSymsp, __Vtask_mirror__248__status, check, path, parent, prior, extension, fname, lineno);
                status = __Vtask_mirror__248__status;
                if (((0U != status) & (2U != status))) {
                    ++(vlSymsp->__Vcoverage[24350]);
                } else {
                    ++(vlSymsp->__Vcoverage[24351]);
                }
                ++(vlSymsp->__Vcoverage[24355]);
            }
            if (((0U != status) & (2U != status))) {
                ++(vlSymsp->__Vcoverage[24352]);
            }
            if ((2U == status)) {
                ++(vlSymsp->__Vcoverage[24353]);
            }
            if ((0U == status)) {
                ++(vlSymsp->__Vcoverage[24354]);
            }
            ++(vlSymsp->__Vcoverage[24356]);
        } else {
            ++(vlSymsp->__Vcoverage[24357]);
        }
        ++(vlSymsp->__Vcoverage[24358]);
        co_return;
    }

    VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_reg_by_name(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_reg_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vtask_write__250__status;
        __Vtask_write__250__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_reg_by_name(vlSymsp, name, rg);
        if ((VlNull{} != rg)) {
            co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1772)
                    ->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__250__status, data, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_write__250__status;
            ++(vlSymsp->__Vcoverage[24359]);
        } else {
            ++(vlSymsp->__Vcoverage[24360]);
        }
        ++(vlSymsp->__Vcoverage[24361]);
        co_return;
    }

    VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_reg_by_name(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_reg_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vtask_read__252__status;
        __Vtask_read__252__status = 0;
        QData/*63:0*/ __Vtask_read__252__value;
        __Vtask_read__252__value = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg;
        data = 0ULL;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_reg_by_name(vlSymsp, name, rg);
        if ((VlNull{} != rg)) {
            co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1796)
                    ->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__252__status, __Vtask_read__252__value, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_read__252__status;
            data = __Vtask_read__252__value;
            ++(vlSymsp->__Vcoverage[24362]);
        } else {
            ++(vlSymsp->__Vcoverage[24363]);
        }
        ++(vlSymsp->__Vcoverage[24364]);
        co_return;
    }

    VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_mem_by_name(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_mem_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vtask_write__254__status;
        __Vtask_write__254__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_mem_by_name(vlSymsp, name, mem);
        if ((VlNull{} != mem)) {
            co_await VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1820)
                    ->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__254__status, offset, data, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_write__254__status;
            ++(vlSymsp->__Vcoverage[24365]);
        } else {
            ++(vlSymsp->__Vcoverage[24366]);
        }
        ++(vlSymsp->__Vcoverage[24367]);
        co_return;
    }

    VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_mem_by_name(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_mem_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vtask_read__256__status;
        __Vtask_read__256__status = 0;
        QData/*63:0*/ __Vtask_read__256__value;
        __Vtask_read__256__value = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem;
        data = 0ULL;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_mem_by_name(vlSymsp, name, mem);
        if ((VlNull{} != mem)) {
            co_await VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1844)
                    ->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__256__status, offset, __Vtask_read__256__value, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_read__256__status;
            data = __Vtask_read__256__value;
            ++(vlSymsp->__Vcoverage[24368]);
        } else {
            ++(vlSymsp->__Vcoverage[24369]);
        }
        ++(vlSymsp->__Vcoverage[24370]);
        co_return;
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_readmemh(Vtb_rng__Syms* __restrict vlSymsp, std::string filename) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_readmemh\n"); );
        // Body
        ++(vlSymsp->__Vcoverage[24371]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_writememh(Vtb_rng__Syms* __restrict vlSymsp, std::string filename) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_writememh\n"); );
        // Body
        ++(vlSymsp->__Vcoverage[24372]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create_map(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create_map\n"); );
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_0__get_full_name;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map;
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi121__Vclpkg.__VnoInFunc_create(vlSymsp, name, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), map);
        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1877)
                    ->__VnoInFunc_configure(vlSymsp, 
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>{this}, base_addr, n_bytes, endian, (IData)(byte_addressing));
        this->__VnoInFunc_add_map(vlSymsp, map);
        create_map__Vfuncrtn = map;
        ++(vlSymsp->__Vcoverage[24373]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_map\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__261__verbosity;
        __Vfunc_uvm_report_enabled__261__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__261__severity;
        __Vfunc_uvm_report_enabled__261__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__262__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__263__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__265__verbosity;
        __Vtask_uvm_report_error__265__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__265__line;
        __Vtask_uvm_report_error__265__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__265__report_enabled_checked;
        __Vtask_uvm_report_error__265__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__266__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__267__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__269__verbosity;
        __Vfunc_uvm_report_enabled__269__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__269__severity;
        __Vfunc_uvm_report_enabled__269__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__270__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__271__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__275__verbosity;
        __Vtask_uvm_report_error__275__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__275__line;
        __Vtask_uvm_report_error__275__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__275__report_enabled_checked;
        __Vtask_uvm_report_error__275__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__276__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__277__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_3__get_full_name;
        std::string __VlefCall_2__get_name;
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        {
            if (this->__PVT__locked) {
                this->__Vfunc_uvm_report_enabled__261__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__261__severity = 2U;
                __Vfunc_uvm_report_enabled__261__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__262__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__262__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__263__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__263__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__261__verbosity, (IData)(__Vfunc_uvm_report_enabled__261__severity), this->__Vfunc_uvm_report_enabled__261__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__265__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__265__context_name = ""s;
                    __Vtask_uvm_report_error__265__line = 0x00000762U;
                    this->__Vtask_uvm_report_error__265__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__265__verbosity = 0U;
                    this->__Vtask_uvm_report_error__265__message = "Cannot add map to locked model"s;
                    this->__Vtask_uvm_report_error__265__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__266__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__266__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__267__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__267__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__265__id, this->__Vtask_uvm_report_error__265__message, __Vtask_uvm_report_error__265__verbosity, this->__Vtask_uvm_report_error__265__filename, __Vtask_uvm_report_error__265__line, this->__Vtask_uvm_report_error__265__context_name, (IData)(__Vtask_uvm_report_error__265__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24374]);
                } else {
                    ++(vlSymsp->__Vcoverage[24375]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24377]);
            }
            if (this->__PVT__maps.exists(map)) {
                this->__Vfunc_uvm_report_enabled__269__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__269__severity = 2U;
                __Vfunc_uvm_report_enabled__269__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__270__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__270__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__271__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__271__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__269__verbosity, (IData)(__Vfunc_uvm_report_enabled__269__severity), this->__Vfunc_uvm_report_enabled__269__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1896)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_error__275__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__275__context_name = ""s;
                    __Vtask_uvm_report_error__275__line = 0x00000768U;
                    this->__Vtask_uvm_report_error__275__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__275__verbosity = 0U;
                    this->__Vtask_uvm_report_error__275__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, __VlefCall_2__get_name), "' already exists in '"s), __VlefCall_3__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__275__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__276__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__276__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__277__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__277__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__275__id, this->__Vtask_uvm_report_error__275__message, __Vtask_uvm_report_error__275__verbosity, this->__Vtask_uvm_report_error__275__filename, __Vtask_uvm_report_error__275__line, this->__Vtask_uvm_report_error__275__context_name, (IData)(__Vtask_uvm_report_error__275__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24378]);
                } else {
                    ++(vlSymsp->__Vcoverage[24379]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24381]);
            }
            this->__PVT__maps.at(map) = 1U;
            if ((1U == this->__PVT__maps.size())) {
                this->__PVT__default_map = map;
                ++(vlSymsp->__Vcoverage[24382]);
            } else {
                ++(vlSymsp->__Vcoverage[24383]);
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24384]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_map_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_map_by_name\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__283__verbosity;
        __Vfunc_uvm_report_enabled__283__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__283__severity;
        __Vfunc_uvm_report_enabled__283__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__284__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__285__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__287__verbosity;
        __Vtask_uvm_report_warning__287__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__287__line;
        __Vtask_uvm_report_warning__287__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__287__report_enabled_checked;
        __Vtask_uvm_report_warning__287__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__288__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__289__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        std::string __VlefCall_1__get_name;
        std::string __VlefCall_0__get_name;
        IData/*31:0*/ unnamedblk690__DOT__i;
        unnamedblk690__DOT__i = 0;
        IData/*31:0*/ unnamedblk691__DOT__i;
        unnamedblk691__DOT__i = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> unnamedblk691__DOT__unnamedblk692__DOT__submaps;
        IData/*31:0*/ unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j;
        unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j = 0;
        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> maps;
        {
            maps.clear();
            this->__VnoInFunc_get_maps(vlSymsp, maps);
            unnamedblk690__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk690__DOT__i, maps.size())) {
                VL_NULL_CHECK(maps.at(unnamedblk690__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1915)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                if ((__VlefCall_0__get_name == name)) {
                    get_map_by_name__Vfuncrtn = maps.at(unnamedblk690__DOT__i);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[24386]);
                }
                unnamedblk690__DOT__i = ((IData)(1U) 
                                         + unnamedblk690__DOT__i);
                ++(vlSymsp->__Vcoverage[24387]);
            }
            unnamedblk691__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk691__DOT__i, maps.size())) {
                unnamedblk691__DOT__unnamedblk692__DOT__submaps.clear();
                VL_NULL_CHECK(maps.at(unnamedblk691__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1920)
                    ->__VnoInFunc_get_submaps(vlSymsp, unnamedblk691__DOT__unnamedblk692__DOT__submaps, 1U);
                unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j, unnamedblk691__DOT__unnamedblk692__DOT__submaps.size())) {
                    VL_NULL_CHECK(unnamedblk691__DOT__unnamedblk692__DOT__submaps.at(unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1923)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                    if ((__VlefCall_1__get_name == name)) {
                        get_map_by_name__Vfuncrtn = unnamedblk691__DOT__unnamedblk692__DOT__submaps.at(unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[24389]);
                    }
                    unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j 
                        = ((IData)(1U) + unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j);
                    ++(vlSymsp->__Vcoverage[24390]);
                }
                unnamedblk691__DOT__i = ((IData)(1U) 
                                         + unnamedblk691__DOT__i);
                ++(vlSymsp->__Vcoverage[24391]);
            }
            this->__Vfunc_uvm_report_enabled__283__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__283__severity = 1U;
            __Vfunc_uvm_report_enabled__283__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__284__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__284__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__285__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__285__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__283__verbosity, (IData)(__Vfunc_uvm_report_enabled__283__severity), this->__Vfunc_uvm_report_enabled__283__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__287__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__287__context_name = ""s;
                __Vtask_uvm_report_warning__287__line = 0x00000788U;
                this->__Vtask_uvm_report_warning__287__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__287__verbosity = 0U;
                this->__Vtask_uvm_report_warning__287__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Map with name '"s, name), "' does not exist in block"s));
                this->__Vtask_uvm_report_warning__287__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__288__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__288__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__289__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__289__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__287__id, this->__Vtask_uvm_report_warning__287__message, __Vtask_uvm_report_warning__287__verbosity, this->__Vtask_uvm_report_warning__287__filename, __Vtask_uvm_report_warning__287__line, this->__Vtask_uvm_report_warning__287__context_name, (IData)(__Vtask_uvm_report_warning__287__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24392]);
            } else {
                ++(vlSymsp->__Vcoverage[24393]);
            }
            get_map_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24394]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_map\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__291__verbosity;
        __Vfunc_uvm_report_enabled__291__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__291__severity;
        __Vfunc_uvm_report_enabled__291__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__292__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__293__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__296__verbosity;
        __Vtask_uvm_report_warning__296__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__296__line;
        __Vtask_uvm_report_warning__296__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__296__report_enabled_checked;
        __Vtask_uvm_report_warning__296__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__297__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__298__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_1__get_full_name;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        if (this->__PVT__maps.exists(map)) {
            ++(vlSymsp->__Vcoverage[24398]);
        } else {
            this->__Vfunc_uvm_report_enabled__291__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__291__severity = 1U;
            __Vfunc_uvm_report_enabled__291__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__292__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__292__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__293__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__293__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__291__verbosity, (IData)(__Vfunc_uvm_report_enabled__291__severity), this->__Vfunc_uvm_report_enabled__291__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1937)
                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__296__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__296__context_name = ""s;
                __Vtask_uvm_report_warning__296__line = 0x00000791U;
                this->__Vtask_uvm_report_warning__296__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__296__verbosity = 0U;
                this->__Vtask_uvm_report_warning__296__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Map '"s, __VlefCall_1__get_full_name), "' does not exist in block"s));
                this->__Vtask_uvm_report_warning__296__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__297__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__297__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__298__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__298__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__296__id, this->__Vtask_uvm_report_warning__296__message, __Vtask_uvm_report_warning__296__verbosity, this->__Vtask_uvm_report_warning__296__filename, __Vtask_uvm_report_warning__296__line, this->__Vtask_uvm_report_warning__296__context_name, (IData)(__Vtask_uvm_report_warning__296__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24395]);
            } else {
                ++(vlSymsp->__Vcoverage[24396]);
            }
            ++(vlSymsp->__Vcoverage[24397]);
        }
        this->__PVT__default_map = map;
        ++(vlSymsp->__Vcoverage[24399]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map\n"); );
        // Body
        get_default_map__Vfuncrtn = this->__PVT__default_map;
        ++(vlSymsp->__Vcoverage[24400]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_door(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_door__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_door\n"); );
        // Body
        {
            get_default_door__Vfuncrtn = 0U;
            if ((3U != this->__PVT__default_path)) {
                get_default_door__Vfuncrtn = this->__PVT__default_path;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24402]);
            }
            if ((VlNull{} != this->__PVT__parent)) {
                VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1962)
                    ->__VnoInFunc_get_default_door(vlSymsp, get_default_door__Vfuncrtn);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24404]);
            }
            get_default_door__Vfuncrtn = 0U;
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24405]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_door(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ door) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_door\n"); );
        // Body
        this->__PVT__default_path = door;
        ++(vlSymsp->__Vcoverage[24406]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_Xinit_address_mapsX(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_Xinit_address_mapsX\n"); );
        // Body
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk694__DOT__map_;
        CData/*0:0*/ unnamedblk694__DOT__map___Vfirst;
        unnamedblk694__DOT__map___Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk694__DOT__unnamedblk695__DOT__map;
        __VlefExpr_0 = (0U != this->__PVT__maps.first(unnamedblk694__DOT__map_));
        if (__VlefExpr_0) {
            unnamedblk694__DOT__map___Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk694__DOT__map___Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__maps.next(unnamedblk694__DOT__map_));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk694__DOT__map___Vfirst = 0U;
                unnamedblk694__DOT__unnamedblk695__DOT__map 
                    = unnamedblk694__DOT__map_;
                VL_NULL_CHECK(unnamedblk694__DOT__unnamedblk695__DOT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1981)
                    ->__VnoInFunc_Xinit_address_mapX(vlSymsp);
                ++(vlSymsp->__Vcoverage[24407]);
            }
            ++(vlSymsp->__Vcoverage[24408]);
        } else {
            ++(vlSymsp->__Vcoverage[24409]);
        }
        ++(vlSymsp->__Vcoverage[24410]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_backdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_backdoor\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__303__verbosity;
        __Vfunc_uvm_report_enabled__303__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__303__severity;
        __Vfunc_uvm_report_enabled__303__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__304__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__305__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__307__verbosity;
        __Vtask_uvm_report_warning__307__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__307__line;
        __Vtask_uvm_report_warning__307__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__307__report_enabled_checked;
        __Vtask_uvm_report_warning__307__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__308__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__309__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_0__has_update_threads;
        VL_NULL_CHECK(bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1996)
                    ->__PVT__fname = fname;
        VL_NULL_CHECK(bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1997)
                    ->__PVT__lineno = lineno;
        __VlefCall_0__has_update_threads = (VlNull{} 
                                            != this->__PVT__backdoor);
        if (__VlefCall_0__has_update_threads) {
            VL_NULL_CHECK(this->__PVT__backdoor, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1999)
                    ->__VnoInFunc_has_update_threads(vlSymsp, __VlefCall_0__has_update_threads);
        }
        if (__VlefCall_0__has_update_threads) {
            this->__Vfunc_uvm_report_enabled__303__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__303__severity = 1U;
            __Vfunc_uvm_report_enabled__303__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__304__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__304__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__305__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__305__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__303__verbosity, (IData)(__Vfunc_uvm_report_enabled__303__severity), this->__Vfunc_uvm_report_enabled__303__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__307__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__307__context_name = ""s;
                __Vtask_uvm_report_warning__307__line = 0x000007d0U;
                this->__Vtask_uvm_report_warning__307__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__307__verbosity = 0U;
                this->__Vtask_uvm_report_warning__307__message = "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts."s;
                this->__Vtask_uvm_report_warning__307__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__308__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__308__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__309__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__309__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__307__id, this->__Vtask_uvm_report_warning__307__message, __Vtask_uvm_report_warning__307__verbosity, this->__Vtask_uvm_report_warning__307__filename, __Vtask_uvm_report_warning__307__line, this->__Vtask_uvm_report_warning__307__context_name, (IData)(__Vtask_uvm_report_warning__307__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[24411]);
            } else {
                ++(vlSymsp->__Vcoverage[24412]);
            }
            ++(vlSymsp->__Vcoverage[24413]);
        } else {
            ++(vlSymsp->__Vcoverage[24414]);
        }
        this->__PVT__backdoor = bkdr;
        ++(vlSymsp->__Vcoverage[24415]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor\n"); );
        // Body
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk696__DOT__blk;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk696__DOT__unnamedblk697__DOT__bkdr;
        {
            if (inherited) {
                this->__VnoInFunc_get_parent(vlSymsp, unnamedblk696__DOT__blk);
                while ((VlNull{} != unnamedblk696__DOT__blk)) {
                    VL_NULL_CHECK(unnamedblk696__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2012)
                    ->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk696__DOT__unnamedblk697__DOT__bkdr);
                    if ((VlNull{} != unnamedblk696__DOT__unnamedblk697__DOT__bkdr)) {
                        get_backdoor__Vfuncrtn = unnamedblk696__DOT__unnamedblk697__DOT__bkdr;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[24417]);
                    }
                    VL_NULL_CHECK(unnamedblk696__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2015)
                    ->__VnoInFunc_get_parent(vlSymsp, unnamedblk696__DOT__blk);
                    ++(vlSymsp->__Vcoverage[24418]);
                }
                ++(vlSymsp->__Vcoverage[24419]);
            } else {
                ++(vlSymsp->__Vcoverage[24420]);
            }
            get_backdoor__Vfuncrtn = this->__PVT__backdoor;
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24421]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clear_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clear_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__317__verbosity;
        __Vfunc_uvm_report_enabled__317__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__317__severity;
        __Vfunc_uvm_report_enabled__317__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__318__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__319__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__321__verbosity;
        __Vtask_uvm_report_warning__321__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__321__line;
        __Vtask_uvm_report_warning__321__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__321__report_enabled_checked;
        __Vtask_uvm_report_warning__321__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_0__exists;
        {
            if (("ALL"s == kind)) {
                this->__PVT__hdl_paths_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz224, vlProcess, vlSymsp, "hdl_paths"s);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24423]);
            }
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                ++(vlSymsp->__Vcoverage[24424]);
            } else {
                ++(vlSymsp->__Vcoverage[24425]);
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2035)
                    ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                ++(vlSymsp->__Vcoverage[24429]);
            } else {
                this->__Vfunc_uvm_report_enabled__317__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__317__severity = 1U;
                __Vfunc_uvm_report_enabled__317__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__318__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__318__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__319__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__319__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__317__verbosity, (IData)(__Vfunc_uvm_report_enabled__317__severity), this->__Vfunc_uvm_report_enabled__317__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__321__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__321__context_name = ""s;
                    __Vtask_uvm_report_warning__321__line = 0x000007f4U;
                    this->__Vtask_uvm_report_warning__321__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_warning__321__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__321__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                    this->__Vtask_uvm_report_warning__321__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__322__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__323__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__321__id, this->__Vtask_uvm_report_warning__321__message, __Vtask_uvm_report_warning__321__verbosity, this->__Vtask_uvm_report_warning__321__filename, __Vtask_uvm_report_warning__321__line, this->__Vtask_uvm_report_warning__321__context_name, (IData)(__Vtask_uvm_report_warning__321__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[441]);
                    ++(vlSymsp->__Vcoverage[24426]);
                } else {
                    ++(vlSymsp->__Vcoverage[24427]);
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2040)
                    ->__VnoInFunc_delete(vlSymsp, kind);
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24430]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string path, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_hdl_path\n"); );
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2> paths;
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2050)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
        VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2052)
                    ->__VnoInFunc_push_back(vlSymsp, path);
        ++(vlSymsp->__Vcoverage[24431]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path\n"); );
        // Body
        IData/*31:0*/ __VlefCall_0__exists;
        has_hdl_path__Vfuncrtn = 0U;
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            ++(vlSymsp->__Vcoverage[24432]);
        } else {
            ++(vlSymsp->__Vcoverage[24433]);
        }
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2063)
                    ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
        has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
        ++(vlSymsp->__Vcoverage[24434]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__332__verbosity;
        __Vfunc_uvm_report_enabled__332__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__332__severity;
        __Vfunc_uvm_report_enabled__332__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__333__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__334__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__336__verbosity;
        __Vtask_uvm_report_error__336__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__336__line;
        __Vtask_uvm_report_error__336__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__336__report_enabled_checked;
        __Vtask_uvm_report_error__336__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__337__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__338__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_2__get;
        IData/*31:0*/ __VlefCall_1__size;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        IData/*31:0*/ unnamedblk698__DOT__i;
        CData/*0:0*/ __VExpr_h4ca396ee__0;
        __VExpr_h4ca396ee__0 = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2> hdl_paths;
        {
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                ++(vlSymsp->__Vcoverage[24435]);
            } else {
                ++(vlSymsp->__Vcoverage[24436]);
            }
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VExpr_h4ca396ee__0);
            if (__VExpr_h4ca396ee__0) {
                ++(vlSymsp->__Vcoverage[24440]);
            } else {
                this->__Vfunc_uvm_report_enabled__332__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__332__severity = 2U;
                __Vfunc_uvm_report_enabled__332__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__333__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__333__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__334__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__334__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__332__verbosity, (IData)(__Vfunc_uvm_report_enabled__332__severity), this->__Vfunc_uvm_report_enabled__332__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__336__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__336__context_name = ""s;
                    __Vtask_uvm_report_error__336__line = 0x0000081dU;
                    this->__Vtask_uvm_report_error__336__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__336__verbosity = 0U;
                    this->__Vtask_uvm_report_error__336__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s));
                    this->__Vtask_uvm_report_error__336__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__337__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__337__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__338__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__338__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__336__id, this->__Vtask_uvm_report_error__336__message, __Vtask_uvm_report_error__336__verbosity, this->__Vtask_uvm_report_error__336__filename, __Vtask_uvm_report_error__336__line, this->__Vtask_uvm_report_error__336__context_name, (IData)(__Vtask_uvm_report_error__336__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24437]);
                } else {
                    ++(vlSymsp->__Vcoverage[24438]);
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2081)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
            unnamedblk698__DOT__i = 0U;
            unnamedblk698__DOT__i = 0U;
            while (true) {
                VL_NULL_CHECK(hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2083)
                    ->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                if (!(VL_LTS_III(32, unnamedblk698__DOT__i, __VlefCall_1__size))) break;
                VL_NULL_CHECK(hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2084)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk698__DOT__i, __VlefCall_2__get);
                paths.push_back(__VlefCall_2__get);
                unnamedblk698__DOT__i = ((IData)(1U) 
                                         + unnamedblk698__DOT__i);
                ++(vlSymsp->__Vcoverage[24443]);
            }
            __Vlabel0: ;
        }
        if ((1U & (~ (IData)(__VExpr_h4ca396ee__0)))) {
            ++(vlSymsp->__Vcoverage[24441]);
        }
        if (__VExpr_h4ca396ee__0) {
            ++(vlSymsp->__Vcoverage[24442]);
        }
        ++(vlSymsp->__Vcoverage[24444]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__346__verbosity;
        __Vfunc_uvm_report_enabled__346__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__346__severity;
        __Vfunc_uvm_report_enabled__346__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__347__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__348__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__350__verbosity;
        __Vtask_uvm_report_error__350__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__350__line;
        __Vtask_uvm_report_error__350__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__350__report_enabled_checked;
        __Vtask_uvm_report_error__350__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__351__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__352__Vfuncout;
        // Body
        IData/*31:0*/ __VlefCall_3__size;
        IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefCall_0__is_hdl_path_root;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2> unnamedblk699__DOT__hdl_paths;
        VlQueue<std::string> unnamedblk699__DOT__parent_paths;
        IData/*31:0*/ unnamedblk699__DOT__unnamedblk700__DOT__i;
        std::string unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path;
        IData/*31:0*/ unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j;
        unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j = 0;
        CData/*0:0*/ __VExpr_h4ca396ee__0;
        __VExpr_h4ca396ee__0 = 0;
        {
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                ++(vlSymsp->__Vcoverage[24445]);
            } else {
                ++(vlSymsp->__Vcoverage[24446]);
            }
            paths.clear();
            this->__VnoInFunc_is_hdl_path_root(vlSymsp, kind, __VlefCall_0__is_hdl_path_root);
            if (__VlefCall_0__is_hdl_path_root) {
                __VlefExpr_1 = (""s != this->__PVT__root_hdl_paths
                                .at(kind));
                if (__VlefExpr_1) {
                    paths.push_back(this->__PVT__root_hdl_paths
                                    .at(kind));
                    ++(vlSymsp->__Vcoverage[24447]);
                } else {
                    ++(vlSymsp->__Vcoverage[24448]);
                }
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24450]);
            }
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VExpr_h4ca396ee__0);
            if (__VExpr_h4ca396ee__0) {
                ++(vlSymsp->__Vcoverage[24454]);
            } else {
                this->__Vfunc_uvm_report_enabled__346__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__346__severity = 2U;
                __Vfunc_uvm_report_enabled__346__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__347__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__347__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__348__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__348__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__346__verbosity, (IData)(__Vfunc_uvm_report_enabled__346__severity), this->__Vfunc_uvm_report_enabled__346__id, __VlefCall_2__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__350__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__350__context_name = ""s;
                    __Vtask_uvm_report_error__350__line = 0x0000083aU;
                    this->__Vtask_uvm_report_error__350__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__350__verbosity = 0U;
                    this->__Vtask_uvm_report_error__350__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s));
                    this->__Vtask_uvm_report_error__350__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__351__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__351__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__352__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__352__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__350__id, this->__Vtask_uvm_report_error__350__message, __Vtask_uvm_report_error__350__verbosity, this->__Vtask_uvm_report_error__350__filename, __Vtask_uvm_report_error__350__line, this->__Vtask_uvm_report_error__350__context_name, (IData)(__Vtask_uvm_report_error__350__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24451]);
                } else {
                    ++(vlSymsp->__Vcoverage[24452]);
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2111)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk699__DOT__hdl_paths);
            unnamedblk699__DOT__parent_paths.clear();
            unnamedblk699__DOT__parent_paths.atDefault().clear();
            if ((VlNull{} != this->__PVT__parent)) {
                VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2115)
                    ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk699__DOT__parent_paths, kind, separator);
                ++(vlSymsp->__Vcoverage[24457]);
            } else {
                ++(vlSymsp->__Vcoverage[24458]);
            }
            unnamedblk699__DOT__unnamedblk700__DOT__i = 0U;
            unnamedblk699__DOT__unnamedblk700__DOT__i = 0U;
            while (true) {
                VL_NULL_CHECK(unnamedblk699__DOT__hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2117)
                    ->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
                if (!(VL_LTS_III(32, unnamedblk699__DOT__unnamedblk700__DOT__i, __VlefCall_3__size))) break;
                {
                    VL_NULL_CHECK(unnamedblk699__DOT__hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2118)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk699__DOT__unnamedblk700__DOT__i, unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path);
                    if ((0U == unnamedblk699__DOT__parent_paths.size())) {
                        if ((""s != unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path)) {
                            paths.push_back(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path);
                            ++(vlSymsp->__Vcoverage[24459]);
                        } else {
                            ++(vlSymsp->__Vcoverage[24460]);
                        }
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[24462]);
                    }
                    unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j, unnamedblk699__DOT__parent_paths.size())) {
                        if ((""s == unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path)) {
                            paths.push_back(unnamedblk699__DOT__parent_paths.at(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j));
                            ++(vlSymsp->__Vcoverage[24463]);
                        } else {
                            paths.push_back(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk699__DOT__parent_paths.at(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j), separator), unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path));
                            ++(vlSymsp->__Vcoverage[24464]);
                        }
                        unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j 
                            = ((IData)(1U) + unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j);
                        ++(vlSymsp->__Vcoverage[24465]);
                    }
                    __Vlabel1: ;
                }
                unnamedblk699__DOT__unnamedblk700__DOT__i 
                    = ((IData)(1U) + unnamedblk699__DOT__unnamedblk700__DOT__i);
                ++(vlSymsp->__Vcoverage[24466]);
            }
            __Vlabel0: ;
        }
        if ((1U & (~ (IData)(__VExpr_h4ca396ee__0)))) {
            ++(vlSymsp->__Vcoverage[24455]);
        }
        if (__VExpr_h4ca396ee__0) {
            ++(vlSymsp->__Vcoverage[24456]);
        }
        ++(vlSymsp->__Vcoverage[24467]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path\n"); );
        // Body
        {
            get_default_hdl_path__Vfuncrtn = ""s;
            if (((""s == this->__PVT__default_hdl_path) 
                 & (VlNull{} != this->__PVT__parent))) {
                VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2143)
                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[24469]);
            }
            get_default_hdl_path__Vfuncrtn = this->__PVT__default_hdl_path;
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[24470]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__359__verbosity;
        __Vfunc_uvm_report_enabled__359__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__359__severity;
        __Vfunc_uvm_report_enabled__359__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__360__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__361__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_error__363__verbosity;
        __Vtask_uvm_report_error__363__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_error__363__line;
        __Vtask_uvm_report_error__363__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_error__363__report_enabled_checked;
        __Vtask_uvm_report_error__363__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__364__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__365__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        if ((""s == kind)) {
            if ((VlNull{} == this->__PVT__parent)) {
                this->__Vfunc_uvm_report_enabled__359__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__359__severity = 2U;
                __Vfunc_uvm_report_enabled__359__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__360__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__360__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__361__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__361__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__359__verbosity, (IData)(__Vfunc_uvm_report_enabled__359__severity), this->__Vfunc_uvm_report_enabled__359__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_error__363__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__363__context_name = ""s;
                    __Vtask_uvm_report_error__363__line = 0x0000086bU;
                    this->__Vtask_uvm_report_error__363__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__363__verbosity = 0U;
                    this->__Vtask_uvm_report_error__363__message = "Block has no parent. Must specify a valid HDL abstraction (kind)"s;
                    this->__Vtask_uvm_report_error__363__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__364__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__364__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__365__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__365__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__363__id, this->__Vtask_uvm_report_error__363__message, __Vtask_uvm_report_error__363__verbosity, this->__Vtask_uvm_report_error__363__filename, __Vtask_uvm_report_error__363__line, this->__Vtask_uvm_report_error__363__context_name, (IData)(__Vtask_uvm_report_error__363__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[24471]);
                } else {
                    ++(vlSymsp->__Vcoverage[24472]);
                }
                ++(vlSymsp->__Vcoverage[24473]);
            } else {
                ++(vlSymsp->__Vcoverage[24474]);
            }
            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2157)
                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            ++(vlSymsp->__Vcoverage[24475]);
        } else {
            ++(vlSymsp->__Vcoverage[24476]);
        }
        this->__PVT__default_hdl_path = kind;
        ++(vlSymsp->__Vcoverage[24477]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_hdl_path_root(Vtb_rng__Syms* __restrict vlSymsp, std::string path, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_hdl_path_root\n"); );
        // Body
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            ++(vlSymsp->__Vcoverage[24478]);
        } else {
            ++(vlSymsp->__Vcoverage[24479]);
        }
        this->__PVT__root_hdl_paths.at(kind) = path;
        ++(vlSymsp->__Vcoverage[24480]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root\n"); );
        // Body
        is_hdl_path_root__Vfuncrtn = 0U;
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            ++(vlSymsp->__Vcoverage[24481]);
        } else {
            ++(vlSymsp->__Vcoverage[24482]);
        }
        is_hdl_path_root__Vfuncrtn = (1U & this->__PVT__root_hdl_paths.exists(kind));
        ++(vlSymsp->__Vcoverage[24483]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print\n"); );
        // Body
        std::string __VlefCall_14__get_name;
        CData/*0:0*/ __VlefExpr_13;
        CData/*0:0*/ __VlefExpr_12;
        std::string __VlefCall_11__get_name;
        CData/*0:0*/ __VlefExpr_10;
        CData/*0:0*/ __VlefExpr_9;
        std::string __VlefCall_8__get_name;
        CData/*0:0*/ __VlefExpr_7;
        CData/*0:0*/ __VlefExpr_6;
        std::string __VlefCall_5__get_name;
        CData/*0:0*/ __VlefExpr_4;
        CData/*0:0*/ __VlefExpr_3;
        std::string __VlefCall_2__get_name;
        CData/*0:0*/ __VlefExpr_1;
        CData/*0:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk703__DOT__i;
        CData/*0:0*/ unnamedblk703__DOT__i__Vfirst;
        unnamedblk703__DOT__i__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk703__DOT__unnamedblk704__DOT__b;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk703__DOT__unnamedblk704__DOT__obj;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk705__DOT__i;
        CData/*0:0*/ unnamedblk705__DOT__i__Vfirst;
        unnamedblk705__DOT__i__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> unnamedblk705__DOT__unnamedblk706__DOT__r;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk705__DOT__unnamedblk706__DOT__obj;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk707__DOT__i;
        CData/*0:0*/ unnamedblk707__DOT__i__Vfirst;
        unnamedblk707__DOT__i__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk707__DOT__unnamedblk708__DOT__r;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk707__DOT__unnamedblk708__DOT__obj;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk709__DOT__i;
        CData/*0:0*/ unnamedblk709__DOT__i__Vfirst;
        unnamedblk709__DOT__i__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> unnamedblk709__DOT__unnamedblk710__DOT__m;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk709__DOT__unnamedblk710__DOT__obj;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk711__DOT__i;
        CData/*0:0*/ unnamedblk711__DOT__i__Vfirst;
        unnamedblk711__DOT__i__Vfirst = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk711__DOT__unnamedblk712__DOT__m;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> unnamedblk711__DOT__unnamedblk712__DOT__obj;
        Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
        __VlefExpr_0 = (0U != this->__PVT__blks.first(unnamedblk703__DOT__i));
        if (__VlefExpr_0) {
            unnamedblk703__DOT__i__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk703__DOT__i__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__blks.next(unnamedblk703__DOT__i));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk703__DOT__i__Vfirst = 0U;
                unnamedblk703__DOT__unnamedblk704__DOT__b 
                    = unnamedblk703__DOT__i;
                unnamedblk703__DOT__unnamedblk704__DOT__obj 
                    = unnamedblk703__DOT__unnamedblk704__DOT__b;
                VL_NULL_CHECK(unnamedblk703__DOT__unnamedblk704__DOT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2195)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2195)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), unnamedblk703__DOT__unnamedblk704__DOT__obj, 0x2eU);
                ++(vlSymsp->__Vcoverage[24484]);
            }
            ++(vlSymsp->__Vcoverage[24485]);
        } else {
            ++(vlSymsp->__Vcoverage[24486]);
        }
        __VlefExpr_3 = (0U != this->__PVT__regs.first(unnamedblk705__DOT__i));
        if (__VlefExpr_3) {
            unnamedblk705__DOT__i__Vfirst = 1U;
            while (true) {
                __VlefExpr_4 = unnamedblk705__DOT__i__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_4)))) {
                    __VlefExpr_4 = (0U != this->__PVT__regs.next(unnamedblk705__DOT__i));
                }
                if (!(__VlefExpr_4)) break;
                unnamedblk705__DOT__i__Vfirst = 0U;
                unnamedblk705__DOT__unnamedblk706__DOT__r 
                    = unnamedblk705__DOT__i;
                unnamedblk705__DOT__unnamedblk706__DOT__obj 
                    = unnamedblk705__DOT__unnamedblk706__DOT__r;
                VL_NULL_CHECK(unnamedblk705__DOT__unnamedblk706__DOT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2201)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2201)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_5__get_name), unnamedblk705__DOT__unnamedblk706__DOT__obj, 0x2eU);
                ++(vlSymsp->__Vcoverage[24487]);
            }
            ++(vlSymsp->__Vcoverage[24488]);
        } else {
            ++(vlSymsp->__Vcoverage[24489]);
        }
        __VlefExpr_6 = (0U != this->__PVT__vregs.first(unnamedblk707__DOT__i));
        if (__VlefExpr_6) {
            unnamedblk707__DOT__i__Vfirst = 1U;
            while (true) {
                __VlefExpr_7 = unnamedblk707__DOT__i__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_7)))) {
                    __VlefExpr_7 = (0U != this->__PVT__vregs.next(unnamedblk707__DOT__i));
                }
                if (!(__VlefExpr_7)) break;
                unnamedblk707__DOT__i__Vfirst = 0U;
                unnamedblk707__DOT__unnamedblk708__DOT__r 
                    = unnamedblk707__DOT__i;
                unnamedblk707__DOT__unnamedblk708__DOT__obj 
                    = unnamedblk707__DOT__unnamedblk708__DOT__r;
                VL_NULL_CHECK(unnamedblk707__DOT__unnamedblk708__DOT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2207)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2207)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_8__get_name), unnamedblk707__DOT__unnamedblk708__DOT__obj, 0x2eU);
                ++(vlSymsp->__Vcoverage[24490]);
            }
            ++(vlSymsp->__Vcoverage[24491]);
        } else {
            ++(vlSymsp->__Vcoverage[24492]);
        }
        __VlefExpr_9 = (0U != this->__PVT__mems.first(unnamedblk709__DOT__i));
        if (__VlefExpr_9) {
            unnamedblk709__DOT__i__Vfirst = 1U;
            while (true) {
                __VlefExpr_10 = unnamedblk709__DOT__i__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_10)))) {
                    __VlefExpr_10 = (0U != this->__PVT__mems.next(unnamedblk709__DOT__i));
                }
                if (!(__VlefExpr_10)) break;
                unnamedblk709__DOT__i__Vfirst = 0U;
                unnamedblk709__DOT__unnamedblk710__DOT__m 
                    = unnamedblk709__DOT__i;
                unnamedblk709__DOT__unnamedblk710__DOT__obj 
                    = unnamedblk709__DOT__unnamedblk710__DOT__m;
                VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2213)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2213)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_11__get_name), unnamedblk709__DOT__unnamedblk710__DOT__obj, 0x2eU);
                ++(vlSymsp->__Vcoverage[24493]);
            }
            ++(vlSymsp->__Vcoverage[24494]);
        } else {
            ++(vlSymsp->__Vcoverage[24495]);
        }
        __VlefExpr_12 = (0U != this->__PVT__maps.first(unnamedblk711__DOT__i));
        if (__VlefExpr_12) {
            unnamedblk711__DOT__i__Vfirst = 1U;
            while (true) {
                __VlefExpr_13 = unnamedblk711__DOT__i__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_13)))) {
                    __VlefExpr_13 = (0U != this->__PVT__maps.next(unnamedblk711__DOT__i));
                }
                if (!(__VlefExpr_13)) break;
                unnamedblk711__DOT__i__Vfirst = 0U;
                unnamedblk711__DOT__unnamedblk712__DOT__m 
                    = unnamedblk711__DOT__i;
                unnamedblk711__DOT__unnamedblk712__DOT__obj 
                    = unnamedblk711__DOT__unnamedblk712__DOT__m;
                VL_NULL_CHECK(unnamedblk711__DOT__unnamedblk712__DOT__obj, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2219)
                    ->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
                VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2219)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(__VlefCall_14__get_name), unnamedblk711__DOT__unnamedblk712__DOT__obj, 0x2eU);
                ++(vlSymsp->__Vcoverage[24496]);
            }
            ++(vlSymsp->__Vcoverage[24497]);
        } else {
            ++(vlSymsp->__Vcoverage[24498]);
        }
        ++(vlSymsp->__Vcoverage[24499]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__381__verbosity;
        __Vfunc_uvm_report_enabled__381__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__381__severity;
        __Vfunc_uvm_report_enabled__381__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__382__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__383__Vfuncout;
        // Body
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__381__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__381__severity = 3U;
        __Vfunc_uvm_report_enabled__381__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__382__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__382__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__383__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__383__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__381__verbosity, (IData)(__Vfunc_uvm_report_enabled__381__severity), this->__Vfunc_uvm_report_enabled__381__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel blocks cannot be cloned"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s, 0x000008b5U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[24500]);
        } else {
            ++(vlSymsp->__Vcoverage[24501]);
        }
        clone__Vfuncrtn = VlNull{};
        ++(vlSymsp->__Vcoverage[24502]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__386__verbosity;
        __Vfunc_uvm_report_enabled__386__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__386__severity;
        __Vfunc_uvm_report_enabled__386__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__387__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__388__Vfuncout;
        // Body
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__386__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__386__severity = 3U;
        __Vfunc_uvm_report_enabled__386__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__387__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__387__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__388__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__388__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__386__verbosity, (IData)(__Vfunc_uvm_report_enabled__386__severity), this->__Vfunc_uvm_report_enabled__386__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel blocks cannot be copied"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s, 0x000008bcU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[24503]);
        } else {
            ++(vlSymsp->__Vcoverage[24504]);
        }
        ++(vlSymsp->__Vcoverage[24505]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__391__verbosity;
        __Vfunc_uvm_report_enabled__391__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__391__severity;
        __Vfunc_uvm_report_enabled__391__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__392__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__393__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__395__verbosity;
        __Vtask_uvm_report_warning__395__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__395__line;
        __Vtask_uvm_report_warning__395__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__395__report_enabled_checked;
        __Vtask_uvm_report_warning__395__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__396__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__397__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        do_compare__Vfuncrtn = 0U;
        this->__Vfunc_uvm_report_enabled__391__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__391__severity = 1U;
        __Vfunc_uvm_report_enabled__391__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__392__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__392__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__393__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__393__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__391__verbosity, (IData)(__Vfunc_uvm_report_enabled__391__severity), this->__Vfunc_uvm_report_enabled__391__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_warning__395__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__395__context_name = ""s;
            __Vtask_uvm_report_warning__395__line = 0x000008c4U;
            this->__Vtask_uvm_report_warning__395__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__395__verbosity = 0U;
            this->__Vtask_uvm_report_warning__395__message = "RegModel blocks cannot be compared"s;
            this->__Vtask_uvm_report_warning__395__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__396__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__396__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__397__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__397__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__395__id, this->__Vtask_uvm_report_warning__395__message, __Vtask_uvm_report_warning__395__verbosity, this->__Vtask_uvm_report_warning__395__filename, __Vtask_uvm_report_warning__395__line, this->__Vtask_uvm_report_warning__395__context_name, (IData)(__Vtask_uvm_report_warning__395__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[24506]);
        } else {
            ++(vlSymsp->__Vcoverage[24507]);
        }
        do_compare__Vfuncrtn = 0U;
        ++(vlSymsp->__Vcoverage[24508]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__399__verbosity;
        __Vfunc_uvm_report_enabled__399__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__399__severity;
        __Vfunc_uvm_report_enabled__399__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__400__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__401__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__403__verbosity;
        __Vtask_uvm_report_warning__403__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__403__line;
        __Vtask_uvm_report_warning__403__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__403__report_enabled_checked;
        __Vtask_uvm_report_warning__403__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__404__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__405__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__399__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__399__severity = 1U;
        __Vfunc_uvm_report_enabled__399__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__400__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__400__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__401__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__401__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__399__verbosity, (IData)(__Vfunc_uvm_report_enabled__399__severity), this->__Vfunc_uvm_report_enabled__399__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_warning__403__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__403__context_name = ""s;
            __Vtask_uvm_report_warning__403__line = 0x000008ccU;
            this->__Vtask_uvm_report_warning__403__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__403__verbosity = 0U;
            this->__Vtask_uvm_report_warning__403__message = "RegModel blocks cannot be packed"s;
            this->__Vtask_uvm_report_warning__403__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__404__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__405__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__405__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__403__id, this->__Vtask_uvm_report_warning__403__message, __Vtask_uvm_report_warning__403__verbosity, this->__Vtask_uvm_report_warning__403__filename, __Vtask_uvm_report_warning__403__line, this->__Vtask_uvm_report_warning__403__context_name, (IData)(__Vtask_uvm_report_warning__403__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[24509]);
        } else {
            ++(vlSymsp->__Vcoverage[24510]);
        }
        ++(vlSymsp->__Vcoverage[24511]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__407__verbosity;
        __Vfunc_uvm_report_enabled__407__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__407__severity;
        __Vfunc_uvm_report_enabled__407__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__408__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__409__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_warning__411__verbosity;
        __Vtask_uvm_report_warning__411__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_warning__411__line;
        __Vtask_uvm_report_warning__411__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_warning__411__report_enabled_checked;
        __Vtask_uvm_report_warning__411__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__412__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__413__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__407__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__407__severity = 1U;
        __Vfunc_uvm_report_enabled__407__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__408__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__408__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__409__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__409__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__407__verbosity, (IData)(__Vfunc_uvm_report_enabled__407__severity), this->__Vfunc_uvm_report_enabled__407__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_warning__411__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__411__context_name = ""s;
            __Vtask_uvm_report_warning__411__line = 0x000008d3U;
            this->__Vtask_uvm_report_warning__411__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__411__verbosity = 0U;
            this->__Vtask_uvm_report_warning__411__message = "RegModel blocks cannot be unpacked"s;
            this->__Vtask_uvm_report_warning__411__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__412__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__412__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__413__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__413__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__411__id, this->__Vtask_uvm_report_warning__411__message, __Vtask_uvm_report_warning__411__verbosity, this->__Vtask_uvm_report_warning__411__filename, __Vtask_uvm_report_warning__411__line, this->__Vtask_uvm_report_warning__411__context_name, (IData)(__Vtask_uvm_report_warning__411__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[24512]);
        } else {
            ++(vlSymsp->__Vcoverage[24513]);
        }
        ++(vlSymsp->__Vcoverage[24514]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string\n"); );
        // Body
        convert2string__Vfuncrtn = ""s;
        ++(vlSymsp->__Vcoverage[24515]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize\n"); );
        // Body
        IData/*31:0*/ __VlefCall_0____VBasicRand;
        Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & __VlefCall_0____VBasicRand);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vsetup_constraints\n"); );
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___VBasicRand\n"); );
        // Body
        __VBasicRand__Vfuncrtn = 1U;
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
        __PVT__blks.atDefault() = 0;
        __PVT__regs.atDefault() = 0;
        __PVT__vregs.atDefault() = 0;
        __PVT__mems.atDefault() = 0;
        __PVT__maps.atDefault() = 0;
        __PVT__locked = 0;
        __PVT__has_cover = 0;
        __PVT__cover_on = 0;
        __PVT__lineno = 0;
    }

    Vtb_rng_uvm_pkg__03a__03auvm_reg_block::~Vtb_rng_uvm_pkg__03a__03auvm_reg_block() {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::~\n"); );
    }

    std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_block::to_string() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::to_string\n"); );
        // Body
        return ("'{"s + to_string_middle() + "}");
    }

    std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_block::to_string_middle() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_block::to_string_middle\n"); );
        // Body
        std::string out;
        out += "parent:" + VL_TO_STRING(__PVT__parent);
        out += ", blks:" + VL_TO_STRING(__PVT__blks);
        out += ", regs:" + VL_TO_STRING(__PVT__regs);
        out += ", vregs:" + VL_TO_STRING(__PVT__vregs);
        out += ", mems:" + VL_TO_STRING(__PVT__mems);
        out += ", maps:" + VL_TO_STRING(__PVT__maps);
        out += ", default_path:" + VL_TO_STRING(__PVT__default_path);
        out += ", default_hdl_path:" + VL_TO_STRING(__PVT__default_hdl_path);
        out += ", backdoor:" + VL_TO_STRING(__PVT__backdoor);
        out += ", hdl_paths_pool:" + VL_TO_STRING(__PVT__hdl_paths_pool);
        out += ", root_hdl_paths:" + VL_TO_STRING(__PVT__root_hdl_paths);
        out += ", locked:" + VL_TO_STRING(__PVT__locked);
        out += ", has_cover:" + VL_TO_STRING(__PVT__has_cover);
        out += ", cover_on:" + VL_TO_STRING(__PVT__cover_on);
        out += ", fname:" + VL_TO_STRING(__PVT__fname);
        out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
        out += ", m_uvm_lock_model_complete:" + VL_TO_STRING(__PVT__m_uvm_lock_model_complete);
        out += ", default_map:" + VL_TO_STRING(__PVT__default_map);
        out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
        return (out);
    }
