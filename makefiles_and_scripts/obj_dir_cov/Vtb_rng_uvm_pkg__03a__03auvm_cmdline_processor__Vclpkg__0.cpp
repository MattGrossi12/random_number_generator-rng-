// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_inst)) {
        this->__PVT__m_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor, vlProcess, vlSymsp, "uvm_cmdline_proc"s);
        ++(vlSymsp->__Vcoverage[17788]);
    } else {
        ++(vlSymsp->__Vcoverage[17789]);
    }
    get_inst__Vfuncrtn = this->__PVT__m_inst;
    ++(vlSymsp->__Vcoverage[17790]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args\n"); );
    // Body
    args = this->__PVT__m_argv;
    ++(vlSymsp->__Vcoverage[17791]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_plusargs(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_plusargs\n"); );
    // Body
    args = this->__PVT__m_plus_argv;
    ++(vlSymsp->__Vcoverage[17792]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_uvm_args(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_uvm_args\n"); );
    // Body
    args = this->__PVT__m_uvm_argv;
    ++(vlSymsp->__Vcoverage[17793]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches(Vtb_rng__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__0____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__0____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__2__Vfuncout;
    __Vfunc_uvm_re_match__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__2____Vincrement1;
    __Vfunc_uvm_re_match__2____Vincrement1 = 0;
    // Body
    CData/*0:0*/ __VlefCall_0__uvm_is_match;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    CData/*0:0*/ match_is_regex;
    IData/*31:0*/ len;
    match_is_regex = ((VL_LTS_III(32, 2U, VL_LEN_IN(match)) 
                       & (0x2fU == VL_GETC_N(match,0U))) 
                      & (0x2fU == VL_GETC_N(match,(
                                                   VL_LEN_IN(match) 
                                                   - (IData)(1U)))));
    len = VL_LEN_IN(match);
    args.clear();
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_argv.size())) {
        __VlefCall_0__uvm_is_match = match_is_regex;
        if (__VlefCall_0__uvm_is_match) {
            this->__Vfunc_uvm_is_match__0__str = VL_CVT_PACK_STR_NN(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
            this->__Vfunc_uvm_is_match__0__expr = match;
            this->__Vfunc_uvm_glob_to_re__1__glob = this->__Vfunc_uvm_is_match__0__expr;
            this->__Vfunc_uvm_glob_to_re__1__Vfuncout 
                = this->__Vfunc_uvm_glob_to_re__1__glob;
            ++(vlSymsp->__Vcoverage[278]);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                = this->__Vfunc_uvm_glob_to_re__1__Vfuncout;
            this->__Vfunc_uvm_re_match__2__str = this->__Vfunc_uvm_is_match__0__str;
            this->__Vfunc_uvm_re_match__2__re = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
            __Vfunc_uvm_re_match__2____Vincrement1 = 0U;
            {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__2__re))) {
                    __Vfunc_uvm_re_match__2__Vfuncout = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[250]);
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,0U))) {
                    this->__Vfunc_uvm_re_match__2__re 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__2__re,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__2__re) 
                                       - (IData)(1U)));
                    ++(vlSymsp->__Vcoverage[251]);
                } else {
                    ++(vlSymsp->__Vcoverage[252]);
                }
                while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__2__str)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__2__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__2__Vfuncout = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[257]);
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    ++(vlSymsp->__Vcoverage[261]);
                }
                while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__2__str))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__2__re))) {
                            __Vfunc_uvm_re_match__2__Vfuncout = 0U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[263]);
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        ++(vlSymsp->__Vcoverage[269]);
                    } else {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              == VL_GETC_N(this->__Vfunc_uvm_re_match__2__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[264]);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__2____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__2____Vincrement1;
                            ++(vlSymsp->__Vcoverage[265]);
                        }
                        if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            ++(vlSymsp->__Vcoverage[266]);
                        }
                        if ((VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                             == VL_GETC_N(this->__Vfunc_uvm_re_match__2__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                            ++(vlSymsp->__Vcoverage[267]);
                        }
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__2__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            ++(vlSymsp->__Vcoverage[268]);
                        }
                    }
                    ++(vlSymsp->__Vcoverage[270]);
                }
                while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__2__re)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    ++(vlSymsp->__Vcoverage[274]);
                }
                __Vfunc_uvm_re_match__2__Vfuncout = 
                    ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                      == VL_LEN_IN(this->__Vfunc_uvm_re_match__2__re))
                      ? 0U : 1U);
                __Vlabel0: ;
            }
            if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                  != VL_LEN_IN(this->__Vfunc_uvm_re_match__2__str)) 
                 & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[253]);
            }
            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[254]);
            }
            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__2__str))) {
                ++(vlSymsp->__Vcoverage[255]);
            }
            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                  != VL_GETC_N(this->__Vfunc_uvm_re_match__2__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[258]);
            }
            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[259]);
            }
            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                 == VL_GETC_N(this->__Vfunc_uvm_re_match__2__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                ++(vlSymsp->__Vcoverage[260]);
            }
            if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                            VL_LEN_IN(this->__Vfunc_uvm_re_match__2__re)) 
                 & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[271]);
            }
            if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[272]);
            }
            if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                            VL_LEN_IN(this->__Vfunc_uvm_re_match__2__re))) {
                ++(vlSymsp->__Vcoverage[273]);
            }
            ++(vlSymsp->__Vcoverage[277]);
            __Vfunc_uvm_is_match__0____VlefCall_0__uvm_re_match 
                = __Vfunc_uvm_re_match__2__Vfuncout;
            __VlefCall_0__uvm_is_match = (0U == __Vfunc_uvm_is_match__0____VlefCall_0__uvm_re_match);
            ++(vlSymsp->__Vcoverage[457]);
        }
        if (__VlefCall_0__uvm_is_match) {
            args.push_back(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
            ++(vlSymsp->__Vcoverage[17803]);
        } else {
            if ((VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)), len) 
                 & (VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk1__DOT__i),0U,
                                (len - (IData)(1U))) 
                    == match))) {
                args.push_back(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
                ++(vlSymsp->__Vcoverage[17798]);
            } else {
                ++(vlSymsp->__Vcoverage[17799]);
            }
            if ((VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)), len) 
                 & (VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk1__DOT__i),0U,
                                (len - (IData)(1U))) 
                    == match))) {
                ++(vlSymsp->__Vcoverage[17800]);
            }
            if ((1U & (~ (VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk1__DOT__i),0U,
                                      (len - (IData)(1U))) 
                          == match)))) {
                ++(vlSymsp->__Vcoverage[17801]);
            }
            if (VL_LTS_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)), len)) {
                ++(vlSymsp->__Vcoverage[17802]);
            }
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        ++(vlSymsp->__Vcoverage[17804]);
    }
    get_arg_matches__Vfuncrtn = args.size();
    if (((VL_LTS_III(32, 2U, VL_LEN_IN(match)) & (0x2fU 
                                                  == 
                                                  VL_GETC_N(match,0U))) 
         & (0x2fU == VL_GETC_N(match,(VL_LEN_IN(match) 
                                      - (IData)(1U)))))) {
        ++(vlSymsp->__Vcoverage[17794]);
    }
    if ((0x2fU != VL_GETC_N(match,(VL_LEN_IN(match) 
                                   - (IData)(1U))))) {
        ++(vlSymsp->__Vcoverage[17795]);
    }
    if ((0x2fU != VL_GETC_N(match,0U))) {
        ++(vlSymsp->__Vcoverage[17796]);
    }
    if (VL_GTES_III(32, 2U, VL_LEN_IN(match))) {
        ++(vlSymsp->__Vcoverage[17797]);
    }
    ++(vlSymsp->__Vcoverage[17805]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value(Vtb_rng__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ chars;
    chars = VL_LEN_IN(match);
    get_arg_value__Vfuncrtn = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),0U,
                             (chars - (IData)(1U))) 
                 == match)) {
                get_arg_value__Vfuncrtn = ((IData)(1U) 
                                           + get_arg_value__Vfuncrtn);
                if ((1U == get_arg_value__Vfuncrtn)) {
                    value = VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),chars,
                                        (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)) 
                                         - (IData)(1U)));
                    ++(vlSymsp->__Vcoverage[17806]);
                } else {
                    ++(vlSymsp->__Vcoverage[17807]);
                }
                ++(vlSymsp->__Vcoverage[17808]);
            } else {
                ++(vlSymsp->__Vcoverage[17809]);
            }
            ++(vlSymsp->__Vcoverage[17810]);
        } else {
            ++(vlSymsp->__Vcoverage[17811]);
        }
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        ++(vlSymsp->__Vcoverage[17812]);
    }
    ++(vlSymsp->__Vcoverage[17813]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values(Vtb_rng__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values\n"); );
    // Body
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ chars;
    chars = VL_LEN_IN(match);
    values.clear();
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk3__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk3__DOT__i),0U,
                             (chars - (IData)(1U))) 
                 == match)) {
                values.push_back(VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk3__DOT__i),chars,
                                             (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk3__DOT__i)) 
                                              - (IData)(1U))));
                ++(vlSymsp->__Vcoverage[17814]);
            } else {
                ++(vlSymsp->__Vcoverage[17815]);
            }
            ++(vlSymsp->__Vcoverage[17816]);
        } else {
            ++(vlSymsp->__Vcoverage[17817]);
        }
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        ++(vlSymsp->__Vcoverage[17818]);
    }
    get_arg_values__Vfuncrtn = values.size();
    ++(vlSymsp->__Vcoverage[17819]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_name\n"); );
    // Body
    get_tool_name__Vfuncrtn = "?"s;
    ++(vlSymsp->__Vcoverage[244]);
    ++(vlSymsp->__Vcoverage[17820]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_version(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_version\n"); );
    // Body
    get_tool_version__Vfuncrtn = "?"s;
    ++(vlSymsp->__Vcoverage[245]);
    ++(vlSymsp->__Vcoverage[17821]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[243]);
    ++(vlSymsp->__Vcoverage[17833]);
    ++(vlSymsp->__Vcoverage[17834]);
    ++(vlSymsp->__Vcoverage[17836]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_m_convert_verb(Vtb_rng__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_m_convert_verb\n"); );
    // Body
    m_convert_verb__Vfuncrtn = 0U;
    verb_enum = 0U;
    if ((((((((("NONE"s == verb_str) | ("UVM_NONE"s 
                                        == verb_str)) 
              | ("LOW"s == verb_str)) | ("UVM_LOW"s 
                                         == verb_str)) 
            | ("MEDIUM"s == verb_str)) | ("UVM_MEDIUM"s 
                                          == verb_str)) 
          | ("HIGH"s == verb_str)) | ("UVM_HIGH"s == verb_str))) {
        if (("NONE"s == verb_str)) {
            verb_enum = 0U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("UVM_NONE"s == verb_str)) {
            verb_enum = 0U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("LOW"s == verb_str)) {
            verb_enum = 0x00000064U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("UVM_LOW"s == verb_str)) {
            verb_enum = 0x00000064U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("MEDIUM"s == verb_str)) {
            verb_enum = 0x000000c8U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("UVM_MEDIUM"s == verb_str)) {
            verb_enum = 0x000000c8U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("HIGH"s == verb_str)) {
            verb_enum = 0x0000012cU;
            m_convert_verb__Vfuncrtn = 1U;
        } else {
            verb_enum = 0x0000012cU;
            m_convert_verb__Vfuncrtn = 1U;
        }
    } else if (("FULL"s == verb_str)) {
        verb_enum = 0x00000190U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("UVM_FULL"s == verb_str)) {
        verb_enum = 0x00000190U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("DEBUG"s == verb_str)) {
        verb_enum = 0x000001f4U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("UVM_DEBUG"s == verb_str)) {
        verb_enum = 0x000001f4U;
        m_convert_verb__Vfuncrtn = 1U;
    } else {
        m_convert_verb__Vfuncrtn = 0U;
    }
    ++(vlSymsp->__Vcoverage[17850]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::~Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_argv:" + VL_TO_STRING(__PVT__m_argv);
    out += ", m_plus_argv:" + VL_TO_STRING(__PVT__m_plus_argv);
    out += ", m_uvm_argv:" + VL_TO_STRING(__PVT__m_uvm_argv);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_report_object::to_string_middle();
    return (out);
}
