// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg::__VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198> &m_initialize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg::__VnoInFunc_m_initialize\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base> __Vtask_m_initialize__0__Vfuncout;
    // Body
    if ((VlNull{} == this->__PVT__m_t_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__0__Vfuncout);
        this->__PVT__m_t_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198, vlProcess, vlSymsp);
        this->__PVT__m_tw_cb_q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, "typewide_queue"s);
        ++(vlSymsp->__Vcoverage[12925]);
    } else {
        ++(vlSymsp->__Vcoverage[12926]);
    }
    m_initialize__Vfuncrtn = this->__PVT__m_t_inst;
    ++(vlSymsp->__Vcoverage[12927]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg::__VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg::__VnoInFunc_m_cb_find\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk3__DOT__i;
    {
        m_cb_find__Vfuncrtn = 0U;
        unnamedblk3__DOT__i = 0U;
        unnamedblk3__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 227)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk3__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 228)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__i, __VlefCall_1__get);
            if ((__VlefCall_1__get == cb)) {
                m_cb_find__Vfuncrtn = unnamedblk3__DOT__i;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[12940]);
            }
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
            ++(vlSymsp->__Vcoverage[12941]);
        }
        m_cb_find__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[12942]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg::__VnoInFunc_m_cb_find_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg::__VnoInFunc_m_cb_find_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__verbosity;
    __Vfunc_uvm_report_enabled__8__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__8__severity;
    __Vfunc_uvm_report_enabled__8__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__12__verbosity;
    __Vtask_uvm_report_warning__12__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__12__line;
    __Vtask_uvm_report_warning__12__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__12__report_enabled_checked;
    __Vtask_uvm_report_warning__12__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk4__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb;
    {
        m_cb_find_name__Vfuncrtn = 0U;
        unnamedblk4__DOT__i = 0U;
        unnamedblk4__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 235)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk4__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 236)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk4__DOT__i, cb);
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 237)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            if ((__VlefCall_1__get_name == name)) {
                this->__Vfunc_uvm_report_enabled__8__id = "UVM/CB/NAM/SAM"s;
                __Vfunc_uvm_report_enabled__8__severity = 1U;
                __Vfunc_uvm_report_enabled__8__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), this->__Vfunc_uvm_report_enabled__8__id, __VlefCall_2__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_2__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__12__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__12__context_name = ""s;
                    __Vtask_uvm_report_warning__12__line = 0x000000efU;
                    this->__Vtask_uvm_report_warning__12__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh"s;
                    __Vtask_uvm_report_warning__12__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__12__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN("A callback named \""s, name), "\" is already registered with "s), where));
                        this->__Vtask_uvm_report_warning__12__id = "UVM/CB/NAM/SAM"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__13__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__14__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__12__id, this->__Vtask_uvm_report_warning__12__message, __Vtask_uvm_report_warning__12__verbosity, this->__Vtask_uvm_report_warning__12__filename, __Vtask_uvm_report_warning__12__line, this->__Vtask_uvm_report_warning__12__context_name, (IData)(__Vtask_uvm_report_warning__12__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[441]);
                        ++(vlSymsp->__Vcoverage[12943]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12944]);
                    }
                    m_cb_find_name__Vfuncrtn = 1U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[12946]);
                }
                unnamedblk4__DOT__i = ((IData)(1U) 
                                       + unnamedblk4__DOT__i);
                ++(vlSymsp->__Vcoverage[12947]);
            }
            m_cb_find_name__Vfuncrtn = 0U;
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[12948]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg::__VnoInFunc_display(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> obj) {
        VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg::__VnoInFunc_display\n"); );
        // Locals
        IData/*31:0*/ __Vtask_first__22__Vfuncout;
        __Vtask_first__22__Vfuncout = 0;
        IData/*31:0*/ __Vtask_next__23__Vfuncout;
        __Vtask_next__23__Vfuncout = 0;
        IData/*31:0*/ __Vtask_next__35__Vfuncout;
        __Vtask_next__35__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
        __Vfunc_uvm_report_enabled__51__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
        __Vfunc_uvm_report_enabled__51__severity = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__56__verbosity;
        __Vtask_uvm_report_info__56__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__56__line;
        __Vtask_uvm_report_info__56__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__56__report_enabled_checked;
        __Vtask_uvm_report_info__56__report_enabled_checked = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
        std::string __Vtemp_1;
        std::string __Vtemp_2;
        std::string __Vtemp_3;
        std::string __Vtemp_4;
        std::string __Vtemp_5;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string __VlefCall_24__m_uvm_string_queue_join;
        IData/*31:0*/ __VlefCall_23__uvm_report_enabled;
        CData/*0:0*/ __VlefCall_22__is_enabled;
        std::string __VlefCall_21__get_full_name;
        std::string __VlefCall_20__get_name;
        IData/*31:0*/ __VlefCall_19__size;
        IData/*31:0*/ __VlefCall_18__exists;
        std::string __VlefCall_17__get_full_name;
        CData/*0:0*/ __VlefLogOr_16;
        IData/*31:0*/ __VlefCall_15__size;
        IData/*31:0*/ __VlefCall_14__exists;
        IData/*31:0*/ __VlefCall_13__next;
        CData/*0:0*/ __VlefCall_12__is_enabled;
        std::string __VlefCall_11__get_full_name;
        std::string __VlefCall_10__get_name;
        IData/*31:0*/ __VlefCall_9__size;
        IData/*31:0*/ __VlefExpr_8;
        CData/*0:0*/ __VlefLogOr_7;
        IData/*31:0*/ __VlefCall_6__size;
        IData/*31:0*/ __VlefCall_5__next;
        IData/*31:0*/ __VlefExpr_4;
        IData/*31:0*/ __VlefCall_3__first;
        CData/*0:0*/ __VlefCall_2__is_enabled;
        std::string __VlefCall_1__get_name;
        IData/*31:0*/ __VlefCall_0__size;
        IData/*31:0*/ unnamedblk7__DOT__i;
        IData/*31:0*/ unnamedblk8__DOT__i;
        IData/*31:0*/ unnamedblk9__DOT__i;
        IData/*31:0*/ unnamedblk10__DOT__i;
        unnamedblk10__DOT__i = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> me;
        VlQueue<std::string> cbq;
        VlQueue<std::string> inst_q;
        VlQueue<std::string> mode_q;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb;
        std::string blanks;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> bobj;
        VlQueue<std::string> qs;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
        std::string tname;
        std::string str;
        IData/*31:0*/ max_cb_name;
        IData/*31:0*/ max_inst_name;
        cbq.clear();
        cbq.atDefault().clear();
        inst_q.clear();
        inst_q.atDefault().clear();
        mode_q.clear();
        mode_q.atDefault().clear();
        blanks = "                             "s;
        bobj = obj;
        qs.clear();
        qs.atDefault().clear();
        tname = ""s;
        str = ""s;
        max_cb_name = 0U;
        max_inst_name = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 0U;
        if ((""s != this->__PVT__m_typename)) {
            tname = this->__PVT__m_typename;
            ++(vlSymsp->__Vcoverage[12989]);
        } else if ((VlNull{} != obj)) {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 340)
                        ->__VnoInFunc_get_type_name(vlSymsp, tname);
            ++(vlSymsp->__Vcoverage[12987]);
        } else {
            tname = "*"s;
            ++(vlSymsp->__Vcoverage[12988]);
        }
        q = this->__PVT__m_tw_cb_q;
        unnamedblk7__DOT__i = 0U;
        unnamedblk7__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 344)
                        ->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, unnamedblk7__DOT__i, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 345)
                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk7__DOT__i, cb);
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 346)
                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            cbq.push_back(__VlefCall_1__get_name);
            inst_q.push_back("(*)"s);
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 348)
                        ->__VnoInFunc_is_enabled(vlSymsp, __VlefCall_2__is_enabled);
            if (__VlefCall_2__is_enabled) {
                mode_q.push_back("ON"s);
                ++(vlSymsp->__Vcoverage[12990]);
            } else {
                mode_q.push_back("OFF"s);
                ++(vlSymsp->__Vcoverage[12991]);
            }
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 351)
                        ->__VnoInFunc_get_name(vlSymsp, str);
            max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                      VL_LEN_IN(str))
                            ? max_cb_name : VL_LEN_IN(str));
            str = "(*)"s;
            max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                        VL_LEN_IN(str))
                              ? max_inst_name : VL_LEN_IN(str));
            unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
            ++(vlSymsp->__Vcoverage[12996]);
        }
        if ((VlNull{} == obj)) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 358)
                        ->__VnoInFunc_first(vlSymsp, bobj, __Vtask_first__22__Vfuncout);
            __VlefCall_3__first = __Vtask_first__22__Vfuncout;
            if ((0U != __VlefCall_3__first)) {
                {
                    while (true) {
                        __VlefExpr_4 = VL_CAST_DYNAMIC(bobj, me);
                        if (__VlefExpr_4) {
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[12998]);
                        }
                        ++(vlSymsp->__Vcoverage[12999]);
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 361)
                        ->__VnoInFunc_next(vlSymsp, bobj, __Vtask_next__23__Vfuncout);
                        __VlefCall_5__next = __Vtask_next__23__Vfuncout;
                        if (!((0U != __VlefCall_5__next))) break;
                        ++(vlSymsp->__Vcoverage[13000]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[13001]);
            } else {
                ++(vlSymsp->__Vcoverage[13002]);
            }
            __VlefLogOr_7 = (VlNull{} != me);
            if ((1U & (~ (IData)(__VlefLogOr_7)))) {
                VL_NULL_CHECK(this->__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 363)
                        ->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
                __VlefLogOr_7 = (0U != __VlefCall_6__size);
            }
            if (__VlefLogOr_7) {
                qs.push_back(VL_SFORMATF_N_NX("Registered callbacks for all instances of %@\n",0,
                                              -1,&(tname)) );
                qs.push_back("---------------------------------------------------------------\n"s);
                ++(vlSymsp->__Vcoverage[13003]);
            } else {
                ++(vlSymsp->__Vcoverage[13004]);
            }
            if ((VlNull{} != me)) {
                while (true) {
                    __VlefExpr_8 = VL_CAST_DYNAMIC(bobj, me);
                    if (__VlefExpr_8) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 370)
                        ->__VnoInFunc_get(vlSymsp, bobj, q);
                        if ((VlNull{} == q)) {
                            q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 373)
                        ->__VnoInFunc_add(vlSymsp, bobj, q);
                            ++(vlSymsp->__Vcoverage[13005]);
                        } else {
                            ++(vlSymsp->__Vcoverage[13006]);
                        }
                        unnamedblk8__DOT__i = 0U;
                        unnamedblk8__DOT__i = 0U;
                        while (true) {
                            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 375)
                        ->__VnoInFunc_size(vlSymsp, __VlefCall_9__size);
                            if (!(VL_LTS_III(32, unnamedblk8__DOT__i, __VlefCall_9__size))) break;
                            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 376)
                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk8__DOT__i, cb);
                            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 377)
                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                            cbq.push_back(__VlefCall_10__get_name);
                            VL_NULL_CHECK(bobj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 378)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                            inst_q.push_back(__VlefCall_11__get_full_name);
                            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 379)
                        ->__VnoInFunc_is_enabled(vlSymsp, __VlefCall_12__is_enabled);
                            if (__VlefCall_12__is_enabled) {
                                mode_q.push_back("ON"s);
                                ++(vlSymsp->__Vcoverage[13007]);
                            } else {
                                mode_q.push_back("OFF"s);
                                ++(vlSymsp->__Vcoverage[13008]);
                            }
                            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 382)
                        ->__VnoInFunc_get_name(vlSymsp, str);
                            max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                                      VL_LEN_IN(str))
                                            ? max_cb_name
                                            : VL_LEN_IN(str));
                            VL_NULL_CHECK(bobj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 384)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
                            max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                                        VL_LEN_IN(str))
                                              ? max_inst_name
                                              : VL_LEN_IN(str));
                            unnamedblk8__DOT__i = ((IData)(1U) 
                                                   + unnamedblk8__DOT__i);
                            ++(vlSymsp->__Vcoverage[13013]);
                        }
                        if (VL_GTS_III(32, max_cb_name, 
                                       VL_LEN_IN(str))) {
                            ++(vlSymsp->__Vcoverage[13009]);
                        }
                        if (VL_LTES_III(32, max_cb_name, 
                                        VL_LEN_IN(str))) {
                            ++(vlSymsp->__Vcoverage[13010]);
                        }
                        if (VL_GTS_III(32, max_inst_name, 
                                       VL_LEN_IN(str))) {
                            ++(vlSymsp->__Vcoverage[13011]);
                        }
                        if (VL_LTES_III(32, max_inst_name, 
                                        VL_LEN_IN(str))) {
                            ++(vlSymsp->__Vcoverage[13012]);
                        }
                        ++(vlSymsp->__Vcoverage[13014]);
                    } else {
                        ++(vlSymsp->__Vcoverage[13015]);
                    }
                    ++(vlSymsp->__Vcoverage[13016]);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 388)
                        ->__VnoInFunc_next(vlSymsp, bobj, __Vtask_next__35__Vfuncout);
                    __VlefCall_13__next = __Vtask_next__35__Vfuncout;
                    if (!((0U != __VlefCall_13__next))) break;
                    ++(vlSymsp->__Vcoverage[13017]);
                }
                ++(vlSymsp->__Vcoverage[13018]);
            } else {
                qs.push_back(VL_SFORMATF_N_NX("No callbacks registered for any instances of type %@\n",0,
                                              -1,&(tname)) );
                ++(vlSymsp->__Vcoverage[13019]);
            }
            ++(vlSymsp->__Vcoverage[13033]);
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 395)
                        ->__VnoInFunc_exists(vlSymsp, bobj, __VlefCall_14__exists);
            __VlefLogOr_16 = (0U != __VlefCall_14__exists);
            if ((1U & (~ (IData)(__VlefLogOr_16)))) {
                VL_NULL_CHECK(this->__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 395)
                        ->__VnoInFunc_size(vlSymsp, __VlefCall_15__size);
                __VlefLogOr_16 = (0U != __VlefCall_15__size);
            }
            if (__VlefLogOr_16) {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 396)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                qs.push_back(VL_SFORMATF_N_NX("Registered callbacks for instance %@ of %@\n",0,
                                              -1,&(__VlefCall_17__get_full_name),
                                              -1,&(tname)) );
                qs.push_back("---------------------------------------------------------------\n"s);
                ++(vlSymsp->__Vcoverage[13020]);
            } else {
                ++(vlSymsp->__Vcoverage[13021]);
            }
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 399)
                        ->__VnoInFunc_exists(vlSymsp, bobj, __VlefCall_18__exists);
            if ((0U != __VlefCall_18__exists)) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 400)
                        ->__VnoInFunc_get(vlSymsp, bobj, q);
                if ((VlNull{} == q)) {
                    q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 403)
                        ->__VnoInFunc_add(vlSymsp, bobj, q);
                    ++(vlSymsp->__Vcoverage[13022]);
                } else {
                    ++(vlSymsp->__Vcoverage[13023]);
                }
                unnamedblk9__DOT__i = 0U;
                unnamedblk9__DOT__i = 0U;
                while (true) {
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 405)
                        ->__VnoInFunc_size(vlSymsp, __VlefCall_19__size);
                    if (!(VL_LTS_III(32, unnamedblk9__DOT__i, __VlefCall_19__size))) break;
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 406)
                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__i, cb);
                    VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 407)
                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_20__get_name);
                    cbq.push_back(__VlefCall_20__get_name);
                    VL_NULL_CHECK(bobj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 408)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                    inst_q.push_back(__VlefCall_21__get_full_name);
                    VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 409)
                        ->__VnoInFunc_is_enabled(vlSymsp, __VlefCall_22__is_enabled);
                    if (__VlefCall_22__is_enabled) {
                        mode_q.push_back("ON"s);
                        ++(vlSymsp->__Vcoverage[13024]);
                    } else {
                        mode_q.push_back("OFF"s);
                        ++(vlSymsp->__Vcoverage[13025]);
                    }
                    VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 412)
                        ->__VnoInFunc_get_name(vlSymsp, str);
                    max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                              VL_LEN_IN(str))
                                    ? max_cb_name : 
                                   VL_LEN_IN(str));
                    VL_NULL_CHECK(bobj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 414)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
                    max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                                VL_LEN_IN(str))
                                      ? max_inst_name
                                      : VL_LEN_IN(str));
                    unnamedblk9__DOT__i = ((IData)(1U) 
                                           + unnamedblk9__DOT__i);
                    ++(vlSymsp->__Vcoverage[13030]);
                }
                if (VL_GTS_III(32, max_cb_name, VL_LEN_IN(str))) {
                    ++(vlSymsp->__Vcoverage[13026]);
                }
                if (VL_LTES_III(32, max_cb_name, VL_LEN_IN(str))) {
                    ++(vlSymsp->__Vcoverage[13027]);
                }
                if (VL_GTS_III(32, max_inst_name, VL_LEN_IN(str))) {
                    ++(vlSymsp->__Vcoverage[13028]);
                }
                if (VL_LTES_III(32, max_inst_name, 
                                VL_LEN_IN(str))) {
                    ++(vlSymsp->__Vcoverage[13029]);
                }
                ++(vlSymsp->__Vcoverage[13031]);
            } else {
                ++(vlSymsp->__Vcoverage[13032]);
            }
            ++(vlSymsp->__Vcoverage[13034]);
        }
        if ((0U != cbq.size())) {
            ++(vlSymsp->__Vcoverage[13038]);
        } else {
            if ((VlNull{} == obj)) {
                str = "*"s;
                ++(vlSymsp->__Vcoverage[13035]);
            } else {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 421)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
                ++(vlSymsp->__Vcoverage[13036]);
            }
            qs.push_back(VL_SFORMATF_N_NX("No callbacks registered for instance %@ of type %@\n",0,
                                          -1,&(str),
                                          -1,&(tname)) );
            ++(vlSymsp->__Vcoverage[13037]);
        }
        unnamedblk10__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk10__DOT__i, cbq.size())) {
            __Vtemp_1 = cbq.at(unnamedblk10__DOT__i);
            __Vtemp_2 = VL_SUBSTR_N(blanks,0U,((max_cb_name 
                                                - VL_LEN_IN(cbq.at(unnamedblk10__DOT__i))) 
                                               - (IData)(1U)));
            __Vtemp_3 = inst_q.at(unnamedblk10__DOT__i);
            __Vtemp_4 = VL_SUBSTR_N(blanks,0U,((max_inst_name 
                                                - VL_LEN_IN(inst_q.at(unnamedblk10__DOT__i))) 
                                               - (IData)(1U)));
            __Vtemp_5 = mode_q.at(unnamedblk10__DOT__i);
            qs.push_back(VL_SFORMATF_N_NX("%@  %@ %@ on %@  %@\n",0,
                                          -1,&(__Vtemp_1),
                                          -1,&(__Vtemp_2),
                                          -1,&(__Vtemp_3),
                                          -1,&(__Vtemp_4),
                                          -1,&(__Vtemp_5)) );
            unnamedblk10__DOT__i = ((IData)(1U) + unnamedblk10__DOT__i);
            ++(vlSymsp->__Vcoverage[13039]);
        }
        this->__Vfunc_uvm_report_enabled__51__id = "UVM/CB/DISPLAY"s;
        __Vfunc_uvm_report_enabled__51__severity = 0U;
        __Vfunc_uvm_report_enabled__51__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__52__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__53__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), this->__Vfunc_uvm_report_enabled__51__id, __VlefCall_23__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_23__uvm_report_enabled)) {
            this->__Vfunc_m_uvm_string_queue_join__55__Vfuncout = ""s;
            this->__Vfunc_m_uvm_string_queue_join__55__Vfuncout 
                = VL_CVT_PACK_STR_ND(qs);
            ++(vlSymsp->__Vcoverage[434]);
            __VlefCall_24__m_uvm_string_queue_join 
                = this->__Vfunc_m_uvm_string_queue_join__55__Vfuncout;
            __Vtask_uvm_report_info__56__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__56__context_name = ""s;
            __Vtask_uvm_report_info__56__line = 0x000001acU;
            this->__Vtask_uvm_report_info__56__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh"s;
            __Vtask_uvm_report_info__56__verbosity = 0U;
            this->__Vtask_uvm_report_info__56__message 
                = VL_CVT_PACK_STR_NN(__VlefCall_24__m_uvm_string_queue_join);
            this->__Vtask_uvm_report_info__56__id = "UVM/CB/DISPLAY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__57__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__56__id, this->__Vtask_uvm_report_info__56__message, __Vtask_uvm_report_info__56__verbosity, this->__Vtask_uvm_report_info__56__filename, __Vtask_uvm_report_info__56__line, this->__Vtask_uvm_report_info__56__context_name, (IData)(__Vtask_uvm_report_info__56__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[13040]);
        } else {
            ++(vlSymsp->__Vcoverage[13041]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 1U;
        if (VL_GTS_III(32, max_cb_name, VL_LEN_IN(str))) {
            ++(vlSymsp->__Vcoverage[12992]);
        }
        if (VL_LTES_III(32, max_cb_name, VL_LEN_IN(str))) {
            ++(vlSymsp->__Vcoverage[12993]);
        }
        if (VL_GTS_III(32, max_inst_name, VL_LEN_IN(str))) {
            ++(vlSymsp->__Vcoverage[12994]);
        }
        if (VL_LTES_III(32, max_inst_name, VL_LEN_IN(str))) {
            ++(vlSymsp->__Vcoverage[12995]);
        }
        ++(vlSymsp->__Vcoverage[13042]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_m_am_i_a(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_m_am_i_a\n"); );
        // Body
        IData/*31:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> this_type;
        {
            m_am_i_a__Vfuncrtn = 0U;
            if ((VlNull{} == obj)) {
                m_am_i_a__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[12929]);
            }
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, this_type);
            m_am_i_a__Vfuncrtn = (1U & __VlefExpr_0);
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[12930]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_m_get_tw_cb_q(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> &m_get_tw_cb_q__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_m_get_tw_cb_q\n"); );
        // Body
        CData/*0:0*/ __VlefCall_0__m_am_i_a;
        IData/*31:0*/ unnamedblk1__DOT__i;
        unnamedblk1__DOT__i = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base> unnamedblk1__DOT__unnamedblk2__DOT__dt;
        {
            this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __VlefCall_0__m_am_i_a);
            if (__VlefCall_0__m_am_i_a) {
                unnamedblk1__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__i, Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
                    unnamedblk1__DOT__unnamedblk2__DOT__dt 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                        .at(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk1__DOT__i));
                    if (((VlNull{} != unnamedblk1__DOT__unnamedblk2__DOT__dt) 
                         & (unnamedblk1__DOT__unnamedblk2__DOT__dt 
                            != VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198>{this}))) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__dt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 215)
                        ->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, m_get_tw_cb_q__Vfuncrtn);
                        if ((VlNull{} != m_get_tw_cb_q__Vfuncrtn)) {
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[12932]);
                        }
                        ++(vlSymsp->__Vcoverage[12933]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12934]);
                    }
                    unnamedblk1__DOT__i = ((IData)(1U) 
                                           + unnamedblk1__DOT__i);
                    ++(vlSymsp->__Vcoverage[12935]);
                }
                m_get_tw_cb_q__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__PVT__m_tw_cb_q;
            } else {
                m_get_tw_cb_q__Vfuncrtn = VlNull{};
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[12938]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_m_add_tw_cbs\n"); );
        // Locals
        IData/*31:0*/ __Vtask_first__7__Vfuncout;
        __Vtask_first__7__Vfuncout = 0;
        IData/*31:0*/ __Vtask_m_cb_find_name__14__Vfuncout;
        __Vtask_m_cb_find_name__14__Vfuncout = 0;
        IData/*31:0*/ __Vtask_next__17__Vfuncout;
        __Vtask_next__17__Vfuncout = 0;
        // Body
        IData/*31:0*/ __VlefCall_8__next;
        std::string __VlefCall_7__get_full_name;
        std::string __VlefCall_6__get_name;
        IData/*31:0*/ __VlefCall_5__m_cb_find;
        IData/*31:0*/ __VlefExpr_4;
        IData/*31:0*/ __VlefCall_3__first;
        IData/*31:0*/ __VlefCall_2__m_cb_find_name;
        std::string __VlefCall_1__get_name;
        IData/*31:0*/ __VlefCall_0__m_cb_find;
        IData/*31:0*/ unnamedblk5__DOT__i;
        unnamedblk5__DOT__i = 0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base> cb_pair;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> me;
        CData/*0:0*/ warned;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
        warned = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__PVT__m_tw_cb_q, cb, __VlefCall_0__m_cb_find);
        if ((0xffffffffU == __VlefCall_0__m_cb_find)) {
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 254)
                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__PVT__m_tw_cb_q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), "type"s, __VlefCall_2__m_cb_find_name);
            warned = (1U & __VlefCall_2__m_cb_find_name);
            if ((0U == ordering)) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 256)
                        ->__VnoInFunc_push_back(vlSymsp, cb);
                ++(vlSymsp->__Vcoverage[12949]);
            } else {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 258)
                        ->__VnoInFunc_push_front(vlSymsp, cb);
                ++(vlSymsp->__Vcoverage[12950]);
            }
            ++(vlSymsp->__Vcoverage[12951]);
        } else {
            ++(vlSymsp->__Vcoverage[12952]);
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 260)
                        ->__VnoInFunc_first(vlSymsp, obj, __Vtask_first__7__Vfuncout);
        __VlefCall_3__first = __Vtask_first__7__Vfuncout;
        if ((0U != __VlefCall_3__first)) {
            while (true) {
                __VlefExpr_4 = VL_CAST_DYNAMIC(obj, me);
                if (__VlefExpr_4) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 263)
                        ->__VnoInFunc_get(vlSymsp, obj, q);
                    if ((VlNull{} == q)) {
                        q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 266)
                        ->__VnoInFunc_add(vlSymsp, obj, q);
                        ++(vlSymsp->__Vcoverage[12953]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12954]);
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __VlefCall_5__m_cb_find);
                    if ((0xffffffffU == __VlefCall_5__m_cb_find)) {
                        if (warned) {
                            ++(vlSymsp->__Vcoverage[12956]);
                        } else {
                            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 270)
                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                            VL_NULL_CHECK(me, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 270)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__get_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, __VlefCall_7__get_full_name)), __Vtask_m_cb_find_name__14__Vfuncout);
                            ++(vlSymsp->__Vcoverage[12955]);
                        }
                        if ((0U == ordering)) {
                            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 273)
                        ->__VnoInFunc_push_back(vlSymsp, cb);
                            ++(vlSymsp->__Vcoverage[12959]);
                        } else {
                            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 275)
                        ->__VnoInFunc_push_front(vlSymsp, cb);
                            ++(vlSymsp->__Vcoverage[12960]);
                        }
                        if ((1U & (~ (IData)(warned)))) {
                            ++(vlSymsp->__Vcoverage[12957]);
                        }
                        if (warned) {
                            ++(vlSymsp->__Vcoverage[12958]);
                        }
                        ++(vlSymsp->__Vcoverage[12961]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12962]);
                    }
                    ++(vlSymsp->__Vcoverage[12963]);
                } else {
                    ++(vlSymsp->__Vcoverage[12964]);
                }
                ++(vlSymsp->__Vcoverage[12965]);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 278)
                        ->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__17__Vfuncout);
                __VlefCall_8__next = __Vtask_next__17__Vfuncout;
                if (!((0U != __VlefCall_8__next))) break;
                ++(vlSymsp->__Vcoverage[12966]);
            }
            ++(vlSymsp->__Vcoverage[12967]);
        } else {
            ++(vlSymsp->__Vcoverage[12968]);
        }
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            cb_pair = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                .at(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk5__DOT__i));
            if ((cb_pair != VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198>{this})) {
                VL_NULL_CHECK(cb_pair, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 283)
                        ->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
                ++(vlSymsp->__Vcoverage[12969]);
            } else {
                ++(vlSymsp->__Vcoverage[12970]);
            }
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
            ++(vlSymsp->__Vcoverage[12971]);
        }
        ++(vlSymsp->__Vcoverage[12972]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_m_delete_tw_cbs\n"); );
        // Locals
        IData/*31:0*/ __Vtask_first__21__Vfuncout;
        __Vtask_first__21__Vfuncout = 0;
        IData/*31:0*/ __Vtask_next__27__Vfuncout;
        __Vtask_next__27__Vfuncout = 0;
        // Body
        CData/*0:0*/ __VlefCall_2__m_delete_tw_cbs;
        IData/*31:0*/ __VlefCall_1__next;
        IData/*31:0*/ __VlefCall_0__first;
        IData/*31:0*/ unnamedblk6__DOT__i;
        unnamedblk6__DOT__i = 0;
        m_delete_tw_cbs__Vfuncrtn = 0U;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base> cb_pair;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
        IData/*31:0*/ pos;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__PVT__m_tw_cb_q, cb, pos);
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 296)
                        ->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
            m_delete_tw_cbs__Vfuncrtn = 1U;
            ++(vlSymsp->__Vcoverage[12973]);
        } else {
            ++(vlSymsp->__Vcoverage[12974]);
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 300)
                        ->__VnoInFunc_first(vlSymsp, obj, __Vtask_first__21__Vfuncout);
        __VlefCall_0__first = __Vtask_first__21__Vfuncout;
        if ((0U != __VlefCall_0__first)) {
            while (true) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 302)
                        ->__VnoInFunc_get(vlSymsp, obj, q);
                if ((VlNull{} == q)) {
                    q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 305)
                        ->__VnoInFunc_add(vlSymsp, obj, q);
                    ++(vlSymsp->__Vcoverage[12975]);
                } else {
                    ++(vlSymsp->__Vcoverage[12976]);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz198__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, pos);
                if ((0xffffffffU != pos)) {
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 309)
                        ->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
                    m_delete_tw_cbs__Vfuncrtn = 1U;
                    ++(vlSymsp->__Vcoverage[12977]);
                } else {
                    ++(vlSymsp->__Vcoverage[12978]);
                }
                ++(vlSymsp->__Vcoverage[12979]);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 312)
                        ->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__27__Vfuncout);
                __VlefCall_1__next = __Vtask_next__27__Vfuncout;
                if (!((0U != __VlefCall_1__next))) break;
                ++(vlSymsp->__Vcoverage[12980]);
            }
            ++(vlSymsp->__Vcoverage[12981]);
        } else {
            ++(vlSymsp->__Vcoverage[12982]);
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            cb_pair = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                .at(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk6__DOT__i));
            if ((cb_pair != VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198>{this})) {
                VL_NULL_CHECK(cb_pair, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 317)
                        ->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, __VlefCall_2__m_delete_tw_cbs);
                m_delete_tw_cbs__Vfuncrtn = ((IData)(m_delete_tw_cbs__Vfuncrtn) 
                                             | (IData)(__VlefCall_2__m_delete_tw_cbs));
                ++(vlSymsp->__Vcoverage[12983]);
            } else {
                ++(vlSymsp->__Vcoverage[12984]);
            }
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
            ++(vlSymsp->__Vcoverage[12985]);
        }
        ++(vlSymsp->__Vcoverage[12986]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
        Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::init(vlProcess, vlSymsp);
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::new\n"); );
        // Body
        _ctor_var_reset(vlSymsp);
        /*super.new*/;
        ++(vlSymsp->__Vcoverage[13043]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc_randomize\n"); );
        // Body
        IData/*31:0*/ __VlefCall_0____VBasicRand;
        Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & __VlefCall_0____VBasicRand);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc___Vsetup_constraints\n"); );
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::__VnoInFunc___VBasicRand\n"); );
        // Body
        __VBasicRand__Vfuncrtn = 1U;
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
    }

    Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::~Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198() {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::~\n"); );
    }

    std::string Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::to_string() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::to_string\n"); );
        // Body
        return ("'{"s + to_string_middle() + "}");
    }

    std::string Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::to_string_middle() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz198::to_string_middle\n"); );
        // Body
        std::string out;
        out += Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::to_string_middle();
        return (out);
    }
