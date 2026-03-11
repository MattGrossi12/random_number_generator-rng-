// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg::__VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195> &m_initialize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg::__VnoInFunc_m_initialize\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base> __Vtask_m_initialize__0__Vfuncout;
    // Body
    if ((VlNull{} == this->__PVT__m_t_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__0__Vfuncout);
        this->__PVT__m_t_inst = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195, vlProcess, vlSymsp);
        this->__PVT__m_tw_cb_q = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, "typewide_queue"s);
        ++(vlSymsp->__Vcoverage[12467]);
    } else {
        ++(vlSymsp->__Vcoverage[12468]);
    }
    m_initialize__Vfuncrtn = this->__PVT__m_t_inst;
    ++(vlSymsp->__Vcoverage[12469]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg::__VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg::__VnoInFunc_m_cb_find\n"); );
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
                ++(vlSymsp->__Vcoverage[12482]);
            }
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
            ++(vlSymsp->__Vcoverage[12483]);
        }
        m_cb_find__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[12484]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg::__VnoInFunc_m_cb_find_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg::__VnoInFunc_m_cb_find_name\n"); );
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
                        ++(vlSymsp->__Vcoverage[12485]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12486]);
                    }
                    m_cb_find_name__Vfuncrtn = 1U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[12488]);
                }
                unnamedblk4__DOT__i = ((IData)(1U) 
                                       + unnamedblk4__DOT__i);
                ++(vlSymsp->__Vcoverage[12489]);
            }
            m_cb_find_name__Vfuncrtn = 0U;
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[12490]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg::__VnoInFunc_display(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj) {
        VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg::__VnoInFunc_display\n"); );
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
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> me;
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
            ++(vlSymsp->__Vcoverage[12531]);
        } else if ((VlNull{} != obj)) {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 340)
                        ->__VnoInFunc_get_type_name(vlSymsp, tname);
            ++(vlSymsp->__Vcoverage[12529]);
        } else {
            tname = "*"s;
            ++(vlSymsp->__Vcoverage[12530]);
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
                ++(vlSymsp->__Vcoverage[12532]);
            } else {
                mode_q.push_back("OFF"s);
                ++(vlSymsp->__Vcoverage[12533]);
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
            ++(vlSymsp->__Vcoverage[12538]);
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
                            ++(vlSymsp->__Vcoverage[12540]);
                        }
                        ++(vlSymsp->__Vcoverage[12541]);
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 361)
                        ->__VnoInFunc_next(vlSymsp, bobj, __Vtask_next__23__Vfuncout);
                        __VlefCall_5__next = __Vtask_next__23__Vfuncout;
                        if (!((0U != __VlefCall_5__next))) break;
                        ++(vlSymsp->__Vcoverage[12542]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[12543]);
            } else {
                ++(vlSymsp->__Vcoverage[12544]);
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
                ++(vlSymsp->__Vcoverage[12545]);
            } else {
                ++(vlSymsp->__Vcoverage[12546]);
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
                            ++(vlSymsp->__Vcoverage[12547]);
                        } else {
                            ++(vlSymsp->__Vcoverage[12548]);
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
                                ++(vlSymsp->__Vcoverage[12549]);
                            } else {
                                mode_q.push_back("OFF"s);
                                ++(vlSymsp->__Vcoverage[12550]);
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
                            ++(vlSymsp->__Vcoverage[12555]);
                        }
                        if (VL_GTS_III(32, max_cb_name, 
                                       VL_LEN_IN(str))) {
                            ++(vlSymsp->__Vcoverage[12551]);
                        }
                        if (VL_LTES_III(32, max_cb_name, 
                                        VL_LEN_IN(str))) {
                            ++(vlSymsp->__Vcoverage[12552]);
                        }
                        if (VL_GTS_III(32, max_inst_name, 
                                       VL_LEN_IN(str))) {
                            ++(vlSymsp->__Vcoverage[12553]);
                        }
                        if (VL_LTES_III(32, max_inst_name, 
                                        VL_LEN_IN(str))) {
                            ++(vlSymsp->__Vcoverage[12554]);
                        }
                        ++(vlSymsp->__Vcoverage[12556]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12557]);
                    }
                    ++(vlSymsp->__Vcoverage[12558]);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 388)
                        ->__VnoInFunc_next(vlSymsp, bobj, __Vtask_next__35__Vfuncout);
                    __VlefCall_13__next = __Vtask_next__35__Vfuncout;
                    if (!((0U != __VlefCall_13__next))) break;
                    ++(vlSymsp->__Vcoverage[12559]);
                }
                ++(vlSymsp->__Vcoverage[12560]);
            } else {
                qs.push_back(VL_SFORMATF_N_NX("No callbacks registered for any instances of type %@\n",0,
                                              -1,&(tname)) );
                ++(vlSymsp->__Vcoverage[12561]);
            }
            ++(vlSymsp->__Vcoverage[12575]);
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
                ++(vlSymsp->__Vcoverage[12562]);
            } else {
                ++(vlSymsp->__Vcoverage[12563]);
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
                    ++(vlSymsp->__Vcoverage[12564]);
                } else {
                    ++(vlSymsp->__Vcoverage[12565]);
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
                        ++(vlSymsp->__Vcoverage[12566]);
                    } else {
                        mode_q.push_back("OFF"s);
                        ++(vlSymsp->__Vcoverage[12567]);
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
                    ++(vlSymsp->__Vcoverage[12572]);
                }
                if (VL_GTS_III(32, max_cb_name, VL_LEN_IN(str))) {
                    ++(vlSymsp->__Vcoverage[12568]);
                }
                if (VL_LTES_III(32, max_cb_name, VL_LEN_IN(str))) {
                    ++(vlSymsp->__Vcoverage[12569]);
                }
                if (VL_GTS_III(32, max_inst_name, VL_LEN_IN(str))) {
                    ++(vlSymsp->__Vcoverage[12570]);
                }
                if (VL_LTES_III(32, max_inst_name, 
                                VL_LEN_IN(str))) {
                    ++(vlSymsp->__Vcoverage[12571]);
                }
                ++(vlSymsp->__Vcoverage[12573]);
            } else {
                ++(vlSymsp->__Vcoverage[12574]);
            }
            ++(vlSymsp->__Vcoverage[12576]);
        }
        if ((0U != cbq.size())) {
            ++(vlSymsp->__Vcoverage[12580]);
        } else {
            if ((VlNull{} == obj)) {
                str = "*"s;
                ++(vlSymsp->__Vcoverage[12577]);
            } else {
                VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 421)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
                ++(vlSymsp->__Vcoverage[12578]);
            }
            qs.push_back(VL_SFORMATF_N_NX("No callbacks registered for instance %@ of type %@\n",0,
                                          -1,&(str),
                                          -1,&(tname)) );
            ++(vlSymsp->__Vcoverage[12579]);
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
            ++(vlSymsp->__Vcoverage[12581]);
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
            ++(vlSymsp->__Vcoverage[12582]);
        } else {
            ++(vlSymsp->__Vcoverage[12583]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 1U;
        if (VL_GTS_III(32, max_cb_name, VL_LEN_IN(str))) {
            ++(vlSymsp->__Vcoverage[12534]);
        }
        if (VL_LTES_III(32, max_cb_name, VL_LEN_IN(str))) {
            ++(vlSymsp->__Vcoverage[12535]);
        }
        if (VL_GTS_III(32, max_inst_name, VL_LEN_IN(str))) {
            ++(vlSymsp->__Vcoverage[12536]);
        }
        if (VL_LTES_III(32, max_inst_name, VL_LEN_IN(str))) {
            ++(vlSymsp->__Vcoverage[12537]);
        }
        ++(vlSymsp->__Vcoverage[12584]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_m_am_i_a(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_m_am_i_a\n"); );
        // Body
        IData/*31:0*/ __VlefExpr_0;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> this_type;
        {
            m_am_i_a__Vfuncrtn = 0U;
            if ((VlNull{} == obj)) {
                m_am_i_a__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[12471]);
            }
            __VlefExpr_0 = VL_CAST_DYNAMIC(obj, this_type);
            m_am_i_a__Vfuncrtn = (1U & __VlefExpr_0);
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[12472]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_m_get_tw_cb_q(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> &m_get_tw_cb_q__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_m_get_tw_cb_q\n"); );
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
                            != VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195>{this}))) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__dt, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 215)
                        ->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, m_get_tw_cb_q__Vfuncrtn);
                        if ((VlNull{} != m_get_tw_cb_q__Vfuncrtn)) {
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[12474]);
                        }
                        ++(vlSymsp->__Vcoverage[12475]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12476]);
                    }
                    unnamedblk1__DOT__i = ((IData)(1U) 
                                           + unnamedblk1__DOT__i);
                    ++(vlSymsp->__Vcoverage[12477]);
                }
                m_get_tw_cb_q__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q;
            } else {
                m_get_tw_cb_q__Vfuncrtn = VlNull{};
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[12480]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_m_add_tw_cbs\n"); );
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
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> me;
        CData/*0:0*/ warned;
        VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q;
        warned = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, cb, __VlefCall_0__m_cb_find);
        if ((0xffffffffU == __VlefCall_0__m_cb_find)) {
            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 254)
                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), "type"s, __VlefCall_2__m_cb_find_name);
            warned = (1U & __VlefCall_2__m_cb_find_name);
            if ((0U == ordering)) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 256)
                        ->__VnoInFunc_push_back(vlSymsp, cb);
                ++(vlSymsp->__Vcoverage[12491]);
            } else {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 258)
                        ->__VnoInFunc_push_front(vlSymsp, cb);
                ++(vlSymsp->__Vcoverage[12492]);
            }
            ++(vlSymsp->__Vcoverage[12493]);
        } else {
            ++(vlSymsp->__Vcoverage[12494]);
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
                        ++(vlSymsp->__Vcoverage[12495]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12496]);
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __VlefCall_5__m_cb_find);
                    if ((0xffffffffU == __VlefCall_5__m_cb_find)) {
                        if (warned) {
                            ++(vlSymsp->__Vcoverage[12498]);
                        } else {
                            VL_NULL_CHECK(cb, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 270)
                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
                            VL_NULL_CHECK(me, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 270)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__get_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, __VlefCall_7__get_full_name)), __Vtask_m_cb_find_name__14__Vfuncout);
                            ++(vlSymsp->__Vcoverage[12497]);
                        }
                        if ((0U == ordering)) {
                            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 273)
                        ->__VnoInFunc_push_back(vlSymsp, cb);
                            ++(vlSymsp->__Vcoverage[12501]);
                        } else {
                            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 275)
                        ->__VnoInFunc_push_front(vlSymsp, cb);
                            ++(vlSymsp->__Vcoverage[12502]);
                        }
                        if ((1U & (~ (IData)(warned)))) {
                            ++(vlSymsp->__Vcoverage[12499]);
                        }
                        if (warned) {
                            ++(vlSymsp->__Vcoverage[12500]);
                        }
                        ++(vlSymsp->__Vcoverage[12503]);
                    } else {
                        ++(vlSymsp->__Vcoverage[12504]);
                    }
                    ++(vlSymsp->__Vcoverage[12505]);
                } else {
                    ++(vlSymsp->__Vcoverage[12506]);
                }
                ++(vlSymsp->__Vcoverage[12507]);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 278)
                        ->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__17__Vfuncout);
                __VlefCall_8__next = __Vtask_next__17__Vfuncout;
                if (!((0U != __VlefCall_8__next))) break;
                ++(vlSymsp->__Vcoverage[12508]);
            }
            ++(vlSymsp->__Vcoverage[12509]);
        } else {
            ++(vlSymsp->__Vcoverage[12510]);
        }
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            cb_pair = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                .at(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk5__DOT__i));
            if ((cb_pair != VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195>{this})) {
                VL_NULL_CHECK(cb_pair, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 283)
                        ->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
                ++(vlSymsp->__Vcoverage[12511]);
            } else {
                ++(vlSymsp->__Vcoverage[12512]);
            }
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
            ++(vlSymsp->__Vcoverage[12513]);
        }
        ++(vlSymsp->__Vcoverage[12514]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_m_delete_tw_cbs\n"); );
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
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, cb, pos);
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 296)
                        ->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
            m_delete_tw_cbs__Vfuncrtn = 1U;
            ++(vlSymsp->__Vcoverage[12515]);
        } else {
            ++(vlSymsp->__Vcoverage[12516]);
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
                    ++(vlSymsp->__Vcoverage[12517]);
                } else {
                    ++(vlSymsp->__Vcoverage[12518]);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, pos);
                if ((0xffffffffU != pos)) {
                    VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 309)
                        ->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
                    m_delete_tw_cbs__Vfuncrtn = 1U;
                    ++(vlSymsp->__Vcoverage[12519]);
                } else {
                    ++(vlSymsp->__Vcoverage[12520]);
                }
                ++(vlSymsp->__Vcoverage[12521]);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 312)
                        ->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__27__Vfuncout);
                __VlefCall_1__next = __Vtask_next__27__Vfuncout;
                if (!((0U != __VlefCall_1__next))) break;
                ++(vlSymsp->__Vcoverage[12522]);
            }
            ++(vlSymsp->__Vcoverage[12523]);
        } else {
            ++(vlSymsp->__Vcoverage[12524]);
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            cb_pair = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                .at(Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk6__DOT__i));
            if ((cb_pair != VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195>{this})) {
                VL_NULL_CHECK(cb_pair, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_callback.svh", 317)
                        ->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, __VlefCall_2__m_delete_tw_cbs);
                m_delete_tw_cbs__Vfuncrtn = ((IData)(m_delete_tw_cbs__Vfuncrtn) 
                                             | (IData)(__VlefCall_2__m_delete_tw_cbs));
                ++(vlSymsp->__Vcoverage[12525]);
            } else {
                ++(vlSymsp->__Vcoverage[12526]);
            }
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
            ++(vlSymsp->__Vcoverage[12527]);
        }
        ++(vlSymsp->__Vcoverage[12528]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
        Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::init(vlProcess, vlSymsp);
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::new\n"); );
        // Body
        _ctor_var_reset(vlSymsp);
        /*super.new*/;
        ++(vlSymsp->__Vcoverage[12585]);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc_randomize\n"); );
        // Body
        IData/*31:0*/ __VlefCall_0____VBasicRand;
        Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & __VlefCall_0____VBasicRand);
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc___Vsetup_constraints\n"); );
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::__VnoInFunc___VBasicRand\n"); );
        // Body
        __VBasicRand__Vfuncrtn = 1U;
    }

    void Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
    }

    Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::~Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195() {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::~\n"); );
    }

    std::string Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::to_string() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::to_string\n"); );
        // Body
        return ("'{"s + to_string_middle() + "}");
    }

    std::string Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::to_string_middle() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::to_string_middle\n"); );
        // Body
        std::string out;
        out += Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base::to_string_middle();
        return (out);
    }
