// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ &value, CData/*0:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> __Vfunc_get_highest_precedence__8__Vfuncout;
    // Body
    CData/*0:0*/ __VlefCall_3__is_tracing;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> __VlefCall_2__get_type;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> r;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        get__Vfuncrtn = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        if ((VlNull{} == cntxt)) {
            VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 96)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
            cntxt = __Vtask_get_root__2__Vfuncout;
            ++(vlSymsp->__Vcoverage[8476]);
        } else {
            ++(vlSymsp->__Vcoverage[8477]);
        }
        if ((""s == inst_name)) {
            VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 98)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
            ++(vlSymsp->__Vcoverage[8480]);
        } else {
            VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 99)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            if ((""s != __VlefCall_0__get_full_name)) {
                VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 100)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
                ++(vlSymsp->__Vcoverage[8478]);
            } else {
                ++(vlSymsp->__Vcoverage[8479]);
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __VlefCall_2__get_type);
        VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 102)->__VnoInFunc_lookup_regex_names(vlProcess, vlSymsp, inst_name, field_name, __VlefCall_2__get_type, rq);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, rq, __Vfunc_get_highest_precedence__8__Vfuncout);
        r = __Vfunc_get_highest_precedence__8__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db_options__Vclpkg.__VnoInFunc_is_tracing(vlProcess, vlSymsp, __VlefCall_3__is_tracing);
        if (__VlefCall_3__is_tracing) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg.__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "CFGDB/GET"s, "Configuration"s, "read"s, inst_name, field_name, cntxt, r);
            ++(vlSymsp->__Vcoverage[8481]);
        } else {
            ++(vlSymsp->__Vcoverage[8482]);
        }
        if ((VlNull{} == r)) {
            get__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[8484]);
        }
        VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 111)->__VnoInFunc_read(vlProcess, vlSymsp, cntxt, value);
        get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[8485]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__35____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__35____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__37__Vfuncout;
    __Vfunc_uvm_re_match__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__37____Vincrement1;
    __Vfunc_uvm_re_match__37____Vincrement1 = 0;
    // Body
    CData/*0:0*/ __VlefCall_10__is_tracing;
    CData/*0:0*/ __VlefCall_9__uvm_is_match;
    IData/*31:0*/ __VlefCall_8__size;
    IData/*31:0*/ __VlefCall_7__get_depth;
    IData/*31:0*/ __VlefCall_6__get_resource_pool_default_precedence;
    CData/*0:0*/ __VlefLogAnd_5;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__exists;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz61> __VlefCall_2__new;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_waiter> unnamedblk1__DOT__w;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> curr_phase;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> r;
    std::string lookup;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz61> pool;
    std::string rstate;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    IData/*31:0*/ precedence;
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    lookup = ""s;
    rstate = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 161)->__VnoInFunc_get_resource_pool(vlSymsp, rp);
    precedence = 0U;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 167)->__VnoInFunc_get_randstate(vlSymsp, rstate);
        ++(vlSymsp->__Vcoverage[8486]);
    } else {
        ++(vlSymsp->__Vcoverage[8487]);
    }
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 169)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    curr_phase = VL_NULL_CHECK(top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 171)
        ->__PVT__m_current_phase;
    if ((VlNull{} == cntxt)) {
        cntxt = top;
        ++(vlSymsp->__Vcoverage[8488]);
    } else {
        ++(vlSymsp->__Vcoverage[8489]);
    }
    if ((""s == inst_name)) {
        VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 176)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
        ++(vlSymsp->__Vcoverage[8492]);
    } else {
        VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 177)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        if ((""s != __VlefCall_0__get_full_name)) {
            VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 178)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
            ++(vlSymsp->__Vcoverage[8490]);
        } else {
            ++(vlSymsp->__Vcoverage[8491]);
        }
    }
    if (this->__PVT__m_rsc.exists(cntxt)) {
        ++(vlSymsp->__Vcoverage[8494]);
    } else {
        __VlefCall_2__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz61, vlProcess, vlSymsp, ""s);
        this->__PVT__m_rsc.at(cntxt) = __VlefCall_2__new;
        ++(vlSymsp->__Vcoverage[8493]);
    }
    pool = this->__PVT__m_rsc.at(cntxt);
    lookup = VL_CONCATN_NNN(VL_CONCATN_NNN(inst_name, "__M_UVM__"s), field_name);
    VL_NULL_CHECK(pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 191)->__VnoInFunc_exists(vlSymsp, lookup, __VlefCall_3__exists);
    if ((0U != __VlefCall_3__exists)) {
        VL_NULL_CHECK(pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 197)->__VnoInFunc_get(vlSymsp, lookup, r);
        ++(vlSymsp->__Vcoverage[8496]);
    } else {
        r = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, field_name);
        VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 193)->__VnoInFunc_set_scope(vlProcess, vlSymsp, r, inst_name);
        VL_NULL_CHECK(pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 194)->__VnoInFunc_add(vlSymsp, lookup, r);
        ++(vlSymsp->__Vcoverage[8495]);
    }
    __VlefLogAnd_5 = (VlNull{} != curr_phase);
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(curr_phase, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 201)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        __VlefLogAnd_5 = ("build"s == __VlefCall_4__get_name);
    }
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 202)->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, __VlefCall_6__get_resource_pool_default_precedence);
        VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 202)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_7__get_depth);
        precedence = (__VlefCall_6__get_resource_pool_default_precedence 
                      - __VlefCall_7__get_depth);
        ++(vlSymsp->__Vcoverage[8497]);
    } else {
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 204)->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, precedence);
        ++(vlSymsp->__Vcoverage[8498]);
    }
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 206)->__VnoInFunc_set_precedence(vlProcess, vlSymsp, r, precedence);
    VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 207)->__VnoInFunc_write(vlProcess, vlSymsp, value, cntxt);
    VL_NULL_CHECK(rp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 209)->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, r, 0U);
    if (this->__PVT__m_waiters.exists(field_name)) {
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 214)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
            if (!(VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, __VlefCall_8__size))) break;
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 215)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__i, unnamedblk1__DOT__w);
            this->__Vfunc_uvm_is_match__35__str = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk1__DOT__w, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 216)
                                                                     ->__PVT__inst_name);
            this->__Vfunc_uvm_is_match__35__expr = inst_name;
            this->__Vfunc_uvm_glob_to_re__36__glob 
                = this->__Vfunc_uvm_is_match__35__expr;
            this->__Vfunc_uvm_glob_to_re__36__Vfuncout 
                = this->__Vfunc_uvm_glob_to_re__36__glob;
            ++(vlSymsp->__Vcoverage[278]);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                = this->__Vfunc_uvm_glob_to_re__36__Vfuncout;
            this->__Vfunc_uvm_re_match__37__str = this->__Vfunc_uvm_is_match__35__str;
            this->__Vfunc_uvm_re_match__37__re = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
            __Vfunc_uvm_re_match__37____Vincrement1 = 0U;
            {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__37__re))) {
                    __Vfunc_uvm_re_match__37__Vfuncout = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[250]);
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,0U))) {
                    this->__Vfunc_uvm_re_match__37__re 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__37__re,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__37__re) 
                                       - (IData)(1U)));
                    ++(vlSymsp->__Vcoverage[251]);
                } else {
                    ++(vlSymsp->__Vcoverage[252]);
                }
                while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__37__str)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__37__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__37__Vfuncout = 1U;
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
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__37__str))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__37__re))) {
                            __Vfunc_uvm_re_match__37__Vfuncout = 0U;
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
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              == VL_GETC_N(this->__Vfunc_uvm_re_match__37__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[264]);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__37____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__37____Vincrement1;
                            ++(vlSymsp->__Vcoverage[265]);
                        }
                        if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            ++(vlSymsp->__Vcoverage[266]);
                        }
                        if ((VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                             == VL_GETC_N(this->__Vfunc_uvm_re_match__37__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                            ++(vlSymsp->__Vcoverage[267]);
                        }
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__37__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            ++(vlSymsp->__Vcoverage[268]);
                        }
                    }
                    ++(vlSymsp->__Vcoverage[270]);
                }
                while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__37__re)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    ++(vlSymsp->__Vcoverage[274]);
                }
                __Vfunc_uvm_re_match__37__Vfuncout 
                    = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__37__re))
                        ? 0U : 1U);
                __Vlabel0: ;
            }
            if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                  != VL_LEN_IN(this->__Vfunc_uvm_re_match__37__str)) 
                 & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[253]);
            }
            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[254]);
            }
            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__37__str))) {
                ++(vlSymsp->__Vcoverage[255]);
            }
            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                  != VL_GETC_N(this->__Vfunc_uvm_re_match__37__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[258]);
            }
            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[259]);
            }
            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                 == VL_GETC_N(this->__Vfunc_uvm_re_match__37__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                ++(vlSymsp->__Vcoverage[260]);
            }
            if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                            VL_LEN_IN(this->__Vfunc_uvm_re_match__37__re)) 
                 & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[271]);
            }
            if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[272]);
            }
            if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                            VL_LEN_IN(this->__Vfunc_uvm_re_match__37__re))) {
                ++(vlSymsp->__Vcoverage[273]);
            }
            ++(vlSymsp->__Vcoverage[277]);
            __Vfunc_uvm_is_match__35____VlefCall_0__uvm_re_match 
                = __Vfunc_uvm_re_match__37__Vfuncout;
            __VlefCall_9__uvm_is_match = (0U == __Vfunc_uvm_is_match__35____VlefCall_0__uvm_re_match);
            ++(vlSymsp->__Vcoverage[457]);
            if (__VlefCall_9__uvm_is_match) {
                vlSymsp->fireEvent(VL_NULL_CHECK(unnamedblk1__DOT__w, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 217)
                                   ->__PVT__trigger);
                ++(vlSymsp->__Vcoverage[8499]);
            } else {
                ++(vlSymsp->__Vcoverage[8500]);
            }
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
            ++(vlSymsp->__Vcoverage[8501]);
        }
        ++(vlSymsp->__Vcoverage[8502]);
    } else {
        ++(vlSymsp->__Vcoverage[8503]);
    }
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 222)->__VnoInFunc_set_randstate(vlSymsp, rstate);
        ++(vlSymsp->__Vcoverage[8504]);
    } else {
        ++(vlSymsp->__Vcoverage[8505]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db_options__Vclpkg.__VnoInFunc_is_tracing(vlProcess, vlSymsp, __VlefCall_10__is_tracing);
    if (__VlefCall_10__is_tracing) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg.__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "CFGDB/SET"s, "Configuration"s, "set"s, inst_name, field_name, cntxt, r);
        ++(vlSymsp->__Vcoverage[8506]);
    } else {
        ++(vlSymsp->__Vcoverage[8507]);
    }
    ++(vlSymsp->__Vcoverage[8508]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg::__VnoInFunc_exists(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg::__VnoInFunc_exists\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    exists__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 247)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
        cntxt = __Vtask_get_root__42__Vfuncout;
        ++(vlSymsp->__Vcoverage[8509]);
    } else {
        ++(vlSymsp->__Vcoverage[8510]);
    }
    if ((""s == inst_name)) {
        VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 249)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
        ++(vlSymsp->__Vcoverage[8513]);
    } else {
        VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 250)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        if ((""s != __VlefCall_0__get_full_name)) {
            VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 251)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
            ++(vlSymsp->__Vcoverage[8511]);
        } else {
            ++(vlSymsp->__Vcoverage[8512]);
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg.__VnoInFunc_get_by_name(vlSymsp, inst_name, field_name, (IData)(spell_chk), __VlefCall_2__get_by_name);
    exists__Vfuncrtn = (VlNull{} != __VlefCall_2__get_by_name);
    ++(vlSymsp->__Vcoverage[8514]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg::__VnoInFunc_wait_modified(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg::__VnoInFunc_wait_modified\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__50__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_waiter> __VlefCall_4__get;
    IData/*31:0*/ __VlefCall_3__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz4> __VlefCall_2__new;
    std::string __VlefCall_1__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __VlefCall_0__get_root;
    IData/*31:0*/ unnamedblk3__DOT__i;
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    std::string rstate;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_waiter> waiter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 267)->__VnoInFunc_get_randstate(vlSymsp, rstate);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 272)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__50__Vfuncout);
        cntxt = __Vtask_get_root__50__Vfuncout;
        ++(vlSymsp->__Vcoverage[8515]);
    } else {
        ++(vlSymsp->__Vcoverage[8516]);
    }
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 273)->__VnoInFunc_get_root(vlProcess, vlSymsp, __VlefCall_0__get_root);
    if ((cntxt != __VlefCall_0__get_root)) {
        if ((""s != inst_name)) {
            VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 275)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
            ++(vlSymsp->__Vcoverage[8517]);
        } else {
            VL_NULL_CHECK(cntxt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 277)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
            ++(vlSymsp->__Vcoverage[8518]);
        }
        ++(vlSymsp->__Vcoverage[8519]);
    } else {
        ++(vlSymsp->__Vcoverage[8520]);
    }
    waiter = VL_NEW(Vtb_rng_uvm_pkg__03a__03am_uvm_waiter, vlSymsp, inst_name, field_name);
    if (this->__PVT__m_waiters.exists(field_name)) {
        ++(vlSymsp->__Vcoverage[8522]);
    } else {
        __VlefCall_2__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz4, vlProcess, vlSymsp, ""s);
        this->__PVT__m_waiters.at(field_name) = __VlefCall_2__new;
        ++(vlSymsp->__Vcoverage[8521]);
    }
    VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 284)->__VnoInFunc_push_back(vlSymsp, waiter);
    VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 286)->__VnoInFunc_set_randstate(vlSymsp, rstate);
    CData/*0:0*/ __VdynTrigger_h2edff5b5__0;
    __VdynTrigger_h2edff5b5__0 = 0;
    __VdynTrigger_h2edff5b5__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h2edff5b5__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_config_db__Tz8__Vclpkg.waiter.trigger)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 
                                                     289);
        __VdynTrigger_h2edff5b5__0 = ((VlNull{} != waiter) 
                                      && VL_NULL_CHECK(waiter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 289)
                                      ->__PVT__trigger.isFired());
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2edff5b5__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_config_db__Tz8__Vclpkg.waiter.trigger)", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 
                                                     289);
        if ((VlNull{} != waiter)) {
            VL_NULL_CHECK(waiter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 289)->__PVT__trigger.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_config_db__Tz8__Vclpkg.waiter.trigger)", 
                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 
                                                 289);
    unnamedblk3__DOT__i = 0U;
    unnamedblk3__DOT__i = 0U;
    {
        while (true) {
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 292)->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
            if (!(VL_LTS_III(32, unnamedblk3__DOT__i, __VlefCall_3__size))) break;
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 293)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__i, __VlefCall_4__get);
            if ((__VlefCall_4__get == waiter)) {
                VL_NULL_CHECK(this->__PVT__m_waiters
                              .at(field_name), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_config_db.svh", 294)->__VnoInFunc_delete(vlSymsp, unnamedblk3__DOT__i);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[8524]);
            }
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
            ++(vlSymsp->__Vcoverage[8525]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[8526]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::init(Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[8527]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::~Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_config_db__Tz8::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz8::to_string_middle();
    return (out);
}
