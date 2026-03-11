// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg::__VnoInFunc_check(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5>> &strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg::__VnoInFunc_check\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__5__verbosity;
    __Vtask_uvm_report_info__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__5__line;
    __Vtask_uvm_report_info__5__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__5__report_enabled_checked;
    __Vtask_uvm_report_info__5__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__14__verbosity;
    __Vtask_uvm_report_info__14__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__14__line;
    __Vtask_uvm_report_info__14__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__14__report_enabled_checked;
    __Vtask_uvm_report_info__14__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    // Body
    std::string __VlefCall_4__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string unnamedblk1__DOT__key;
    CData/*0:0*/ unnamedblk1__DOT__key__Vfirst;
    unnamedblk1__DOT__key__Vfirst = 0;
    VlQueue<std::string> unnamedblk2__DOT__q;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i;
    unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ distance;
    IData/*31:0*/ min;
    VlQueue<std::string> min_key;
    {
        check__Vfuncrtn = 0U;
        distance = 0U;
        min = 0U;
        min_key.clear();
        min_key.atDefault().clear();
        if (strtab.exists(s)) {
            check__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[8699]);
        }
        min = this->__PVT__max;
        __VlefExpr_0 = (0U != strtab.first(unnamedblk1__DOT__key));
        if (__VlefExpr_0) {
            unnamedblk1__DOT__key__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk1__DOT__key__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != strtab.next(unnamedblk1__DOT__key));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk1__DOT__key__Vfirst = 0U;
                {
                    this->__VnoInFunc_levenshtein_distance(vlSymsp, unnamedblk1__DOT__key, s, distance);
                    if (VL_GTS_III(32, 0U, distance)) {
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[8701]);
                    }
                    if ((distance < min)) {
                        min = distance;
                        min_key.clear();
                        min_key.push_back(unnamedblk1__DOT__key);
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[8703]);
                    }
                    if ((distance == min)) {
                        min_key.push_back(unnamedblk1__DOT__key);
                        ++(vlSymsp->__Vcoverage[8704]);
                    } else {
                        ++(vlSymsp->__Vcoverage[8705]);
                    }
                    __Vlabel1: ;
                }
                ++(vlSymsp->__Vcoverage[8706]);
            }
            ++(vlSymsp->__Vcoverage[8707]);
        } else {
            ++(vlSymsp->__Vcoverage[8708]);
        }
        if ((min == this->__PVT__max)) {
            this->__Vfunc_uvm_report_enabled__1__id = "UVM/CONFIGDB/SPELLCHK"s;
            __Vfunc_uvm_report_enabled__1__severity = 0U;
            __Vfunc_uvm_report_enabled__1__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__2__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__3__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_info__5__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__5__context_name = ""s;
                __Vtask_uvm_report_info__5__line = 0x0000006eU;
                this->__Vtask_uvm_report_info__5__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_spell_chkr.svh"s;
                __Vtask_uvm_report_info__5__verbosity = 0U;
                this->__Vtask_uvm_report_info__5__message 
                    = VL_SFORMATF_N_NX("%@ not located, no alternatives to suggest",0,
                                       -1,&(s)) ;
                this->__Vtask_uvm_report_info__5__id = "UVM/CONFIGDB/SPELLCHK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__6__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__7__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__5__id, this->__Vtask_uvm_report_info__5__message, __Vtask_uvm_report_info__5__verbosity, this->__Vtask_uvm_report_info__5__filename, __Vtask_uvm_report_info__5__line, this->__Vtask_uvm_report_info__5__context_name, (IData)(__Vtask_uvm_report_info__5__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[8709]);
            } else {
                ++(vlSymsp->__Vcoverage[8710]);
            }
            ++(vlSymsp->__Vcoverage[8716]);
        } else {
            unnamedblk2__DOT__q.clear();
            unnamedblk2__DOT__q.atDefault().clear();
            unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__i, min_key.size())) {
                unnamedblk2__DOT__q.push_back(min_key.at(unnamedblk2__DOT__unnamedblk3__DOT__i));
                unnamedblk2__DOT__q.push_back("|"s);
                unnamedblk2__DOT__unnamedblk3__DOT__i 
                    = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__i);
                ++(vlSymsp->__Vcoverage[8711]);
            }
            if ((0U != unnamedblk2__DOT__q.size())) {
                std::ignore = unnamedblk2__DOT__q.pop_back();
                ++(vlSymsp->__Vcoverage[8712]);
            } else {
                ++(vlSymsp->__Vcoverage[8713]);
            }
            this->__Vfunc_uvm_report_enabled__9__id = "UVM/CONFIGDB/SPELLCHK"s;
            __Vfunc_uvm_report_enabled__9__severity = 0U;
            __Vfunc_uvm_report_enabled__9__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), this->__Vfunc_uvm_report_enabled__9__id, __VlefCall_3__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__Vfunc_m_uvm_string_queue_join__13__Vfuncout = ""s;
                this->__Vfunc_m_uvm_string_queue_join__13__Vfuncout 
                    = VL_CVT_PACK_STR_ND(unnamedblk2__DOT__q);
                ++(vlSymsp->__Vcoverage[434]);
                __VlefCall_4__m_uvm_string_queue_join 
                    = this->__Vfunc_m_uvm_string_queue_join__13__Vfuncout;
                __Vtask_uvm_report_info__14__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__14__context_name = ""s;
                __Vtask_uvm_report_info__14__line = 0x0000007cU;
                this->__Vtask_uvm_report_info__14__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_spell_chkr.svh"s;
                __Vtask_uvm_report_info__14__verbosity = 0U;
                this->__Vtask_uvm_report_info__14__message 
                    = VL_SFORMATF_N_NX("%@ not located, did you mean %@",0,
                                       -1,&(s),-1,&(__VlefCall_4__m_uvm_string_queue_join)) ;
                this->__Vtask_uvm_report_info__14__id = "UVM/CONFIGDB/SPELLCHK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__14__id, this->__Vtask_uvm_report_info__14__message, __Vtask_uvm_report_info__14__verbosity, this->__Vtask_uvm_report_info__14__filename, __Vtask_uvm_report_info__14__line, this->__Vtask_uvm_report_info__14__context_name, (IData)(__Vtask_uvm_report_info__14__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[8714]);
            } else {
                ++(vlSymsp->__Vcoverage[8715]);
            }
            ++(vlSymsp->__Vcoverage[8717]);
        }
        check__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[8718]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg::__VnoInFunc_levenshtein_distance(Vtb_rng__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg::__VnoInFunc_levenshtein_distance\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__minimum;
    IData/*31:0*/ k;
    IData/*31:0*/ i;
    IData/*31:0*/ j;
    IData/*31:0*/ n;
    IData/*31:0*/ m;
    IData/*31:0*/ cost;
    IData/*31:0*/ distance;
    VlQueue<IData/*31:0*/> d;
    {
        levenshtein_distance__Vfuncrtn = 0U;
        k = 0U;
        i = 0U;
        j = 0U;
        n = 0U;
        m = 0U;
        cost = 0U;
        distance = 0U;
        d.clear();
        d.atDefault() = 0;
        n = ((IData)(1U) + VL_LEN_IN(s));
        m = ((IData)(1U) + VL_LEN_IN(t));
        if (((1U == n) | (1U == m))) {
            levenshtein_distance__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[8720]);
        }
        d.renew(VL_MULS_III(32, m, n));
        k = 0U;
        while (VL_LTS_III(32, k, n)) {
            d.atWrite(k) = k;
            k = ((IData)(1U) + k);
            ++(vlSymsp->__Vcoverage[8724]);
        }
        k = 0U;
        while (VL_LTS_III(32, k, m)) {
            d.atWrite((k * n)) = k;
            k = ((IData)(1U) + k);
            ++(vlSymsp->__Vcoverage[8725]);
        }
        i = 1U;
        while (VL_LTS_III(32, i, n)) {
            j = 1U;
            while (VL_LTS_III(32, j, m)) {
                cost = (VL_GETC_N(s,(i - (IData)(1U))) 
                        != VL_GETC_N(t,(j - (IData)(1U))));
                this->__VnoInFunc_minimum(vlSymsp, 
                                          ((IData)(1U) 
                                           + d.at((
                                                   ((j 
                                                     - (IData)(1U)) 
                                                    * n) 
                                                   + i))), 
                                          ((IData)(1U) 
                                           + d.at((
                                                   ((j 
                                                     * n) 
                                                    + i) 
                                                   - (IData)(1U)))), 
                                          (d.at((((
                                                   (j 
                                                    - (IData)(1U)) 
                                                   * n) 
                                                  + i) 
                                                 - (IData)(1U))) 
                                           + cost), __VlefCall_0__minimum);
                d.atWrite(((j * n) + i)) = __VlefCall_0__minimum;
                j = ((IData)(1U) + j);
                ++(vlSymsp->__Vcoverage[8728]);
            }
            i = ((IData)(1U) + i);
            ++(vlSymsp->__Vcoverage[8729]);
        }
        distance = d.at(((n * m) - (IData)(1U)));
        levenshtein_distance__Vfuncrtn = distance;
        __Vlabel0: ;
    }
    if ((1U == m)) {
        ++(vlSymsp->__Vcoverage[8721]);
    }
    if ((1U == n)) {
        ++(vlSymsp->__Vcoverage[8722]);
    }
    if (((1U != n) & (1U != m))) {
        ++(vlSymsp->__Vcoverage[8723]);
    }
    if ((VL_GETC_N(s,(i - (IData)(1U))) != VL_GETC_N(t,
                                                     (j 
                                                      - (IData)(1U))))) {
        ++(vlSymsp->__Vcoverage[8726]);
    }
    if ((VL_GETC_N(s,(i - (IData)(1U))) == VL_GETC_N(t,
                                                     (j 
                                                      - (IData)(1U))))) {
        ++(vlSymsp->__Vcoverage[8727]);
    }
    ++(vlSymsp->__Vcoverage[8730]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg::__VnoInFunc_minimum(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg::__VnoInFunc_minimum\n"); );
    // Body
    IData/*31:0*/ min;
    min = a;
    if (VL_LTS_III(32, b, min)) {
        min = b;
        ++(vlSymsp->__Vcoverage[8731]);
    } else {
        ++(vlSymsp->__Vcoverage[8732]);
    }
    if (VL_LTS_III(32, c, min)) {
        min = c;
        ++(vlSymsp->__Vcoverage[8733]);
    } else {
        ++(vlSymsp->__Vcoverage[8734]);
    }
    minimum__Vfuncrtn = min;
    ++(vlSymsp->__Vcoverage[8735]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11::init(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[8736]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11::to_string_middle\n"); );
    // Body
    return (""s);
}
