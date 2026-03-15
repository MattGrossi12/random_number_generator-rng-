// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ lhs, QData/*63:0*/ rhs, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*0:0*/ &compare_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int\n"); );
    // Body
    QData/*63:0*/ mask;
    std::string msg;
    {
        compare_field_int__Vfuncrtn = 0U;
        mask = 0;
        msg = ""s;
        mask = 0xffffffffffffffffULL;
        mask = VL_SHIFTR_QQI(64,64,32, mask, ((IData)(0x00000040U) 
                                              - size));
        if (((lhs & mask) != (rhs & mask))) {
            if ((0x01000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'b%0b : rhs = 'b%0b",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
                ++(vlSymsp->__Vcoverage[10225]);
            } else if ((0x06000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'o%0o : rhs = 'o%0o",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
                ++(vlSymsp->__Vcoverage[10226]);
            } else if ((0x02000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0# : rhs = %0#",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
                ++(vlSymsp->__Vcoverage[10227]);
            } else if ((0x09000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0t : rhs = %0t",0,
                              -1,&(name),64,(lhs & mask),
                              -12,64,(rhs & mask),-12);
                ++(vlSymsp->__Vcoverage[10228]);
            } else if ((0x08000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0s : rhs = %0s",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
                ++(vlSymsp->__Vcoverage[10229]);
            } else if ((0x0a000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0# : rhs = %0#",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
                ++(vlSymsp->__Vcoverage[10230]);
            } else {
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'h%0x : rhs = 'h%0x",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
                ++(vlSymsp->__Vcoverage[10231]);
            }
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_int__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10233]);
        }
        compare_field_int__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10234]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_real(Vtb_rng__Syms* __restrict vlSymsp, std::string name, double lhs, double rhs, CData/*0:0*/ &compare_field_real__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string msg;
    {
        compare_field_real__Vfuncrtn = 0U;
        msg = ""s;
        if ((lhs != rhs)) {
            VL_SFORMAT_NX(64,msg,"%@: lhs = %g : rhs = %g",0,
                          -1,&(name),64,lhs,64,rhs);
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_real__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10236]);
        }
        compare_field_real__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10237]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_m_current_context(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string &m_current_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_m_current_context\n"); );
    // Body
    std::string unnamedblk1__DOT__full_name;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    {
        m_current_context__Vfuncrtn = ""s;
        if ((0U == this->__PVT__m_object_names.size())) {
            m_current_context__Vfuncrtn = name;
        } else {
            if (((1U == this->__PVT__m_object_names.size()) 
                 & (""s == name))) {
                m_current_context__Vfuncrtn = this->__PVT__m_object_names.at(0U);
                goto __Vlabel0;
            } else {
                unnamedblk1__DOT__full_name = ""s;
                unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, this->__PVT__m_object_names.size())) {
                    if ((unnamedblk1__DOT__unnamedblk2__DOT__i 
                         == (this->__PVT__m_object_names.size() 
                             - (IData)(1U)))) {
                        unnamedblk1__DOT__full_name 
                            = VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i));
                        ++(vlSymsp->__Vcoverage[10238]);
                    } else {
                        unnamedblk1__DOT__full_name 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i)), "."s);
                        ++(vlSymsp->__Vcoverage[10239]);
                    }
                    unnamedblk1__DOT__unnamedblk2__DOT__i 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
                    ++(vlSymsp->__Vcoverage[10240]);
                }
                if ((""s != name)) {
                    m_current_context__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(unnamedblk1__DOT__full_name, "."s), name);
                    goto __Vlabel0;
                } else {
                    m_current_context__Vfuncrtn = unnamedblk1__DOT__full_name;
                    goto __Vlabel0;
                }
                ++(vlSymsp->__Vcoverage[10244]);
            }
            if (((1U == this->__PVT__m_object_names.size()) 
                 & (""s == name))) {
                ++(vlSymsp->__Vcoverage[10245]);
            }
            if ((1U & (~ (""s == name)))) {
                ++(vlSymsp->__Vcoverage[10246]);
            }
            if ((1U != this->__PVT__m_object_names.size())) {
                ++(vlSymsp->__Vcoverage[10247]);
            }
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10249]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, CData/*0:0*/ &compare_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_object_compared__11__ret_val;
    __Vfunc_object_compared__11__ret_val = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__verbosity;
    __Vtask_uvm_report_warning__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__line;
    __Vtask_uvm_report_warning__18__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__18__report_enabled_checked;
    __Vtask_uvm_report_warning__18__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    IData/*31:0*/ __Vfunc_get_result__24__Vfuncout;
    __Vfunc_get_result__24__Vfuncout = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__44__Vfuncout;
    CData/*1:0*/ __Vtask_uvm_report__57__severity;
    __Vtask_uvm_report__57__severity = 0;
    IData/*31:0*/ __Vtask_uvm_report__57__verbosity;
    __Vtask_uvm_report__57__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report__57__line;
    __Vtask_uvm_report__57__line = 0;
    CData/*0:0*/ __Vtask_uvm_report__57__report_enabled_checked;
    __Vtask_uvm_report__57__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_37__get_active_object_depth;
    CData/*0:0*/ __VlefLogAnd_36;
    IData/*31:0*/ __VlefCall_35__get_active_object_depth;
    IData/*31:0*/ __VlefCall_34__get_verbosity;
    IData/*31:0*/ __VlefCond_33;
    IData/*31:0*/ __VlefCall_32__get_inst_id;
    std::string __VlefCall_31__get_name;
    IData/*31:0*/ __VlefCond_30;
    IData/*31:0*/ __VlefCall_29__get_inst_id;
    std::string __VlefCall_28__get_name;
    CData/*0:0*/ __VlefLogAnd_27;
    IData/*31:0*/ __VlefCall_26__get_result;
    IData/*31:0*/ __VlefCall_25__get_show_max;
    IData/*31:0*/ __VlefCall_24__get_show_max;
    IData/*31:0*/ __VlefCall_23__get_result;
    CData/*0:0*/ __VlefLogAnd_22;
    IData/*31:0*/ __VlefCall_21__get_active_object_depth;
    IData/*31:0*/ __VlefCall_20__get_result;
    CData/*0:0*/ __VlefLogAnd_19;
    IData/*31:0*/ __VlefCall_18__get_result;
    IData/*27:0*/ __VlefCall_17__get_recursion_policy;
    CData/*0:0*/ __VlefLogAnd_16;
    IData/*31:0*/ __VlefCall_15__get_result;
    CData/*0:0*/ __VlefCall_14__user_hook_enabled;
    std::string __VlefCall_13__get_name;
    std::string __VlefCall_12__get_name;
    std::string __VlefCall_11__get_type_name;
    std::string __VlefCall_10__get_type_name;
    std::string __VlefCall_9__get_type_name;
    std::string __VlefCall_8__get_type_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_7__get_object_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_6__get_object_type;
    CData/*0:0*/ __VlefCall_5__get_check_type;
    IData/*27:0*/ __VlefCall_4__get_recursion_policy;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*27:0*/ __VlefCall_0__get_recursion_policy;
    std::string unnamedblk3__DOT__msg;
    IData/*31:0*/ old_result;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> field_op;
    IData/*31:0*/ prev_state;
    CData/*0:0*/ ret_val;
    {
        compare_object__Vfuncrtn = 0U;
        old_result = 0U;
        prev_state = 0U;
        ret_val = 1U;
        if ((rhs == lhs)) {
            compare_object__Vfuncrtn = ret_val;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[10251]);
        }
        this->__PVT__m_object_names.push_back(name);
        if (((0x00040000U == this->__PVT__policy) & 
             (lhs != rhs))) {
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            ret_val = 0U;
            ++(vlSymsp->__Vcoverage[10252]);
        } else {
            ++(vlSymsp->__Vcoverage[10253]);
        }
        if (((IData)(ret_val) & ((VlNull{} == rhs) 
                                 | (VlNull{} == lhs)))) {
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            ret_val = 0U;
            ++(vlSymsp->__Vcoverage[10254]);
        } else {
            ++(vlSymsp->__Vcoverage[10255]);
        }
        if (ret_val) {
            this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_0__get_recursion_policy);
            this->__VnoInFunc_object_compared(vlSymsp, lhs, rhs, __VlefCall_0__get_recursion_policy, __Vfunc_object_compared__11__ret_val, prev_state);
            ret_val = __Vfunc_object_compared__11__ret_val;
            if ((0U != prev_state)) {
                this->__Vfunc_uvm_report_enabled__12__id = "UVM/COPIER/LOOP"s;
                __Vfunc_uvm_report_enabled__12__severity = 1U;
                __Vfunc_uvm_report_enabled__12__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__13__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__14__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), this->__Vfunc_uvm_report_enabled__12__id, __VlefCall_1__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 465)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                    VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 465)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __Vtask_uvm_report_warning__18__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__18__context_name = ""s;
                    __Vtask_uvm_report_warning__18__line = 0x000001d1U;
                    this->__Vtask_uvm_report_warning__18__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh"s;
                    __Vtask_uvm_report_warning__18__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__18__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Possible loop when comparing '"s, __VlefCall_2__get_full_name), "' to '"s), __VlefCall_3__get_full_name), "'"s));
                    this->__Vtask_uvm_report_warning__18__id = "UVM/COPIER/LOOP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__18__id, this->__Vtask_uvm_report_warning__18__message, __Vtask_uvm_report_warning__18__verbosity, this->__Vtask_uvm_report_warning__18__filename, __Vtask_uvm_report_warning__18__line, this->__Vtask_uvm_report_warning__18__context_name, (IData)(__Vtask_uvm_report_warning__18__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[10256]);
                } else {
                    ++(vlSymsp->__Vcoverage[10257]);
                }
                ++(vlSymsp->__Vcoverage[10258]);
            } else {
                ++(vlSymsp->__Vcoverage[10259]);
            }
            this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, lhs);
            this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_4__get_recursion_policy);
            this->__PVT__m_recur_states.at(lhs).at(rhs).at(__VlefCall_4__get_recursion_policy) 
                = Vtb_rng_state_info_t__struct__0{.__PVT__state = (IData)(1U), 
                .__PVT__ret_val = (CData)(0U)};
            this->__VnoInFunc_get_result(vlSymsp, __Vfunc_get_result__24__Vfuncout);
            old_result = __Vfunc_get_result__24__Vfuncout;
            this->__VnoInFunc_get_check_type(vlSymsp, __VlefCall_5__get_check_type);
            if (__VlefCall_5__get_check_type) {
                VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 474)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_6__get_object_type);
                VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 474)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_7__get_object_type);
                __VlefCall_5__get_check_type = (__VlefCall_6__get_object_type 
                                                != __VlefCall_7__get_object_type);
            }
            if (__VlefCall_5__get_check_type) {
                VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 475)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 475)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
                if ((__VlefCall_8__get_type_name != __VlefCall_9__get_type_name)) {
                    VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 476)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
                    VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 476)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                    this->__VnoInFunc_print_msg(vlProcess, vlSymsp, 
                                                VL_CVT_PACK_STR_NN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("type: lhs = \""s, __VlefCall_10__get_type_name), "\" : rhs = \""s), __VlefCall_11__get_type_name), "\""s)));
                                ++(vlSymsp->__Vcoverage[10260]);
                            } else {
                                VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 479)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_12__get_name);
                                VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 479)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                                this->__VnoInFunc_print_msg(vlProcess, vlSymsp, 
                                                            VL_CVT_PACK_STR_NN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("get_object_type() for "s, __VlefCall_12__get_name), " does not match get_object_type() for "s), __VlefCall_13__get_name)));
                                ++(vlSymsp->__Vcoverage[10261]);
                            }
                            ++(vlSymsp->__Vcoverage[10262]);
                        } else {
                            ++(vlSymsp->__Vcoverage[10263]);
                        }
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, field_op);
                        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 484)
                                                                                ->__VnoInFunc_set(vlProcess, vlSymsp, 4U, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer>{this}, rhs);
                        VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 485)
                                                                                ->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
                        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 486)
                                                                                ->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __VlefCall_14__user_hook_enabled);
                        if (__VlefCall_14__user_hook_enabled) {
                            VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 487)
                                                                                ->__VnoInFunc_do_compare(vlSymsp, rhs, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer>{this}, ret_val);
                            ++(vlSymsp->__Vcoverage[10264]);
                        } else {
                            ++(vlSymsp->__Vcoverage[10265]);
                        }
                        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 489)
                                                                                ->__VnoInFunc_m_recycle(vlSymsp);
                        __VlefLogAnd_16 = ret_val;
                        if (__VlefLogAnd_16) {
                            this->__VnoInFunc_get_result(vlSymsp, __VlefCall_15__get_result);
                            __VlefLogAnd_16 = (__VlefCall_15__get_result 
                                               > old_result);
                        }
                        if (__VlefLogAnd_16) {
                            ret_val = 0U;
                            ++(vlSymsp->__Vcoverage[10266]);
                        } else {
                            ++(vlSymsp->__Vcoverage[10267]);
                        }
                        this->__VnoInFunc_get_recursion_policy(vlSymsp, __VlefCall_17__get_recursion_policy);
                        this->__PVT__m_recur_states
                                                                                .at(lhs)
                                                                                .at(rhs)
                                                                                .at(__VlefCall_17__get_recursion_policy) 
                            = Vtb_rng_state_info_t__struct__0{
                            .__PVT__state = (IData)(2U), 
                            .__PVT__ret_val = (CData)((IData)(ret_val))};
                        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__44__Vfuncout);
                        __VlefLogAnd_19 = ret_val;
                        if (__VlefLogAnd_19) {
                            this->__VnoInFunc_get_result(vlSymsp, __VlefCall_18__get_result);
                            __VlefLogAnd_19 = (__VlefCall_18__get_result 
                                               > old_result);
                        }
                        if (__VlefLogAnd_19) {
                            ++(vlSymsp->__Vcoverage[10268]);
                        }
                        this->__VnoInFunc_get_result(vlSymsp, __VlefCall_20__get_result);
                        if ((__VlefCall_20__get_result 
                             <= old_result)) {
                            ++(vlSymsp->__Vcoverage[10269]);
                        }
                        if ((1U & (~ (IData)(ret_val)))) {
                            ++(vlSymsp->__Vcoverage[10270]);
                        }
                        ++(vlSymsp->__Vcoverage[10271]);
                    } else {
                        ++(vlSymsp->__Vcoverage[10272]);
                    }
                    std::ignore = this->__PVT__m_object_names.pop_back();
                    __VlefLogAnd_22 = (1U & (~ (IData)(ret_val)));
                    if (__VlefLogAnd_22) {
                        this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_21__get_active_object_depth);
                        __VlefLogAnd_22 = (0U == __VlefCall_21__get_active_object_depth);
                    }
                    if (__VlefLogAnd_22) {
                        unnamedblk3__DOT__msg = ""s;
                        this->__VnoInFunc_get_result(vlSymsp, __VlefCall_23__get_result);
                        if ((0U != __VlefCall_23__get_result)) {
                            this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_24__get_show_max);
                            __VlefLogAnd_27 = (0U != __VlefCall_24__get_show_max);
                            if (__VlefLogAnd_27) {
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_25__get_show_max);
                                this->__VnoInFunc_get_result(vlSymsp, __VlefCall_26__get_result);
                                __VlefLogAnd_27 = (__VlefCall_25__get_show_max 
                                                   < __VlefCall_26__get_result);
                            }
                            if (__VlefLogAnd_27) {
                                VL_SFORMAT_NX(64,unnamedblk3__DOT__msg
                                              ,"%0# Miscompare(s) (%0# shown) for object ",0,
                                              32,this->__PVT__result,
                                              32,this->__PVT__show_max);
                                ++(vlSymsp->__Vcoverage[10273]);
                            } else {
                                VL_SFORMAT_NX(64,unnamedblk3__DOT__msg
                                              ,"%0# Miscompare(s) for object ",0,
                                              32,this->__PVT__result);
                                ++(vlSymsp->__Vcoverage[10274]);
                            }
                            ++(vlSymsp->__Vcoverage[10275]);
                        } else {
                            ++(vlSymsp->__Vcoverage[10276]);
                        }
                        if ((VlNull{} == lhs)) {
                            __VlefCall_28__get_name = "<null>"s;
                        } else {
                            VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 521)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_28__get_name);
                        }
                        if ((VlNull{} == lhs)) {
                            __VlefCond_30 = 0U;
                        } else {
                            VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 522)
                                                                                ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_29__get_inst_id);
                            __VlefCond_30 = __VlefCall_29__get_inst_id;
                        }
                        if ((VlNull{} == rhs)) {
                            __VlefCall_31__get_name = "<null>"s;
                        } else {
                            VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 523)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_31__get_name);
                        }
                        if ((VlNull{} == rhs)) {
                            __VlefCond_33 = 0U;
                        } else {
                            VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 524)
                                                                                ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_32__get_inst_id);
                            __VlefCond_33 = __VlefCall_32__get_inst_id;
                        }
                        this->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_34__get_verbosity);
                        __Vtask_uvm_report__57__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report__57__context_name = ""s;
                        __Vtask_uvm_report__57__line = 0x0000020dU;
                        this->__Vtask_uvm_report__57__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh"s;
                        __Vtask_uvm_report__57__verbosity 
                            = __VlefCall_34__get_verbosity;
                        this->__Vtask_uvm_report__57__message 
                            = VL_SFORMATF_N_NX("%@%@@%0d vs. %@@%0d",0,
                                               -1,&(unnamedblk3__DOT__msg),
                                               -1,&(__VlefCall_28__get_name),
                                               32,__VlefCond_30,
                                               -1,&(__VlefCall_31__get_name),
                                               32,__VlefCond_33) ;
                        this->__Vtask_uvm_report__57__id = "MISCMP"s;
                        __Vtask_uvm_report__57__severity 
                            = this->__PVT__sev;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__58__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs 
                            = __Vfunc_get__58__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 108)
                                                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__59__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top 
                            = __Vtask_get_root__59__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 109)
                                                                                ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__57__severity, this->__Vtask_uvm_report__57__id, this->__Vtask_uvm_report__57__message, __Vtask_uvm_report__57__verbosity, this->__Vtask_uvm_report__57__filename, __Vtask_uvm_report__57__line, this->__Vtask_uvm_report__57__context_name, (IData)(__Vtask_uvm_report__57__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[433]);
                        ++(vlSymsp->__Vcoverage[10277]);
                    } else {
                        ++(vlSymsp->__Vcoverage[10278]);
                    }
                    compare_object__Vfuncrtn = ret_val;
                    __Vlabel0: ;
                }
                __VlefLogAnd_36 = (1U & (~ (IData)(ret_val)));
                if (__VlefLogAnd_36) {
                    this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_35__get_active_object_depth);
                    __VlefLogAnd_36 = (0U == __VlefCall_35__get_active_object_depth);
                }
                if (__VlefLogAnd_36) {
                    ++(vlSymsp->__Vcoverage[10279]);
                }
                this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_37__get_active_object_depth);
                if ((0U != __VlefCall_37__get_active_object_depth)) {
                    ++(vlSymsp->__Vcoverage[10280]);
                }
                if (ret_val) {
                    ++(vlSymsp->__Vcoverage[10281]);
                }
                ++(vlSymsp->__Vcoverage[10282]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string lhs, std::string rhs, CData/*0:0*/ &compare_string__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string\n"); );
                // Body
                std::string msg;
                {
                    compare_string__Vfuncrtn = 0U;
                    msg = ""s;
                    if ((lhs != rhs)) {
                        msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(name, ": lhs = \""s), lhs), "\" : rhs = \""s), rhs), "\""s);
                                        this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
                                        compare_string__Vfuncrtn = 0U;
                                        goto __Vlabel0;
                                    } else {
                                        ++(vlSymsp->__Vcoverage[10284]);
                                    }
                                    compare_string__Vfuncrtn = 1U;
                                    __Vlabel0: ;
                                }
                                ++(vlSymsp->__Vcoverage[10285]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string msg) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg\n"); );
                                // Locals
                                CData/*1:0*/ __Vtask_uvm_report__69__severity;
                                __Vtask_uvm_report__69__severity = 0;
                                IData/*31:0*/ __Vtask_uvm_report__69__verbosity;
                                __Vtask_uvm_report__69__verbosity = 0;
                                IData/*31:0*/ __Vtask_uvm_report__69__line;
                                __Vtask_uvm_report__69__line = 0;
                                CData/*0:0*/ __Vtask_uvm_report__69__report_enabled_checked;
                                __Vtask_uvm_report__69__report_enabled_checked = 0;
                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__70__Vfuncout;
                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__71__Vfuncout;
                                // Body
                                CData/*0:0*/ __VlefLogAnd_11;
                                IData/*31:0*/ __VlefCall_10__get_show_max;
                                IData/*31:0*/ __VlefCall_9__get_result;
                                IData/*31:0*/ __VlefCall_8__get_show_max;
                                IData/*31:0*/ __VlefCall_7__get_show_max;
                                IData/*31:0*/ __VlefCall_6__get_show_max;
                                IData/*31:0*/ __VlefCall_5__get_result;
                                IData/*31:0*/ __VlefCall_4__get_verbosity;
                                CData/*0:0*/ __VlefLogOr_3;
                                IData/*31:0*/ __VlefCall_2__get_show_max;
                                IData/*31:0*/ __VlefCall_1__get_result;
                                IData/*31:0*/ __VlefCall_0__get_show_max;
                                std::string tmp;
                                this->__VnoInFunc_m_current_context(vlSymsp, msg, tmp);
                                this->__PVT__result 
                                    = ((IData)(1U) 
                                       + this->__PVT__result);
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_0__get_show_max);
                                __VlefLogOr_3 = (0U 
                                                 == __VlefCall_0__get_show_max);
                                if ((1U & (~ (IData)(__VlefLogOr_3)))) {
                                    this->__VnoInFunc_get_result(vlSymsp, __VlefCall_1__get_result);
                                    this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_2__get_show_max);
                                    __VlefLogOr_3 = 
                                        (__VlefCall_1__get_result 
                                         <= __VlefCall_2__get_show_max);
                                }
                                if (__VlefLogOr_3) {
                                    msg = VL_CONCATN_NNN("Miscompare for "s, tmp);
                                    this->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_4__get_verbosity);
                                    __Vtask_uvm_report__69__report_enabled_checked = 0U;
                                    this->__Vtask_uvm_report__69__context_name = ""s;
                                    __Vtask_uvm_report__69__line = 0x0000023dU;
                                    this->__Vtask_uvm_report__69__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh"s;
                                    __Vtask_uvm_report__69__verbosity 
                                        = __VlefCall_4__get_verbosity;
                                    this->__Vtask_uvm_report__69__message 
                                        = msg;
                                    this->__Vtask_uvm_report__69__id = "MISCMP"s;
                                    __Vtask_uvm_report__69__severity 
                                        = this->__PVT__sev;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__70__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs 
                                        = __Vfunc_get__70__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 108)
                                                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__71__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top 
                                        = __Vtask_get_root__71__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 109)
                                                                           ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__69__severity, this->__Vtask_uvm_report__69__id, this->__Vtask_uvm_report__69__message, __Vtask_uvm_report__69__verbosity, this->__Vtask_uvm_report__69__filename, __Vtask_uvm_report__69__line, this->__Vtask_uvm_report__69__context_name, (IData)(__Vtask_uvm_report__69__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[433]);
                                    ++(vlSymsp->__Vcoverage[10286]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[10287]);
                                }
                                this->__PVT__miscompares 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__PVT__miscompares, tmp), "\n"s);
                                this->__VnoInFunc_get_result(vlSymsp, __VlefCall_5__get_result);
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_6__get_show_max);
                                if ((__VlefCall_5__get_result 
                                     <= __VlefCall_6__get_show_max)) {
                                    ++(vlSymsp->__Vcoverage[10288]);
                                }
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_7__get_show_max);
                                if ((0U == __VlefCall_7__get_show_max)) {
                                    ++(vlSymsp->__Vcoverage[10289]);
                                }
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_8__get_show_max);
                                __VlefLogAnd_11 = (0U 
                                                   != __VlefCall_8__get_show_max);
                                if (__VlefLogAnd_11) {
                                    this->__VnoInFunc_get_result(vlSymsp, __VlefCall_9__get_result);
                                    this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_10__get_show_max);
                                    __VlefLogAnd_11 
                                        = (__VlefCall_9__get_result 
                                           > __VlefCall_10__get_show_max);
                                }
                                if (__VlefLogAnd_11) {
                                    ++(vlSymsp->__Vcoverage[10290]);
                                }
                                ++(vlSymsp->__Vcoverage[10291]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object\n"); );
                                // Locals
                                CData/*1:0*/ __Vtask_uvm_report__86__severity;
                                __Vtask_uvm_report__86__severity = 0;
                                IData/*31:0*/ __Vtask_uvm_report__86__verbosity;
                                __Vtask_uvm_report__86__verbosity = 0;
                                IData/*31:0*/ __Vtask_uvm_report__86__line;
                                __Vtask_uvm_report__86__line = 0;
                                CData/*0:0*/ __Vtask_uvm_report__86__report_enabled_checked;
                                __Vtask_uvm_report__86__report_enabled_checked = 0;
                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__87__Vfuncout;
                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__88__Vfuncout;
                                // Body
                                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                                CData/*0:0*/ __VlefLogAnd_16;
                                IData/*31:0*/ __VlefCall_15__get_show_max;
                                IData/*31:0*/ __VlefCall_14__get_result;
                                IData/*31:0*/ __VlefCall_13__get_show_max;
                                IData/*31:0*/ __VlefCall_12__get_show_max;
                                IData/*31:0*/ __VlefCall_11__get_show_max;
                                IData/*31:0*/ __VlefCall_10__get_result;
                                IData/*31:0*/ __VlefCall_9__get_verbosity;
                                CData/*0:0*/ __VlefLogOr_8;
                                IData/*31:0*/ __VlefCall_7__get_show_max;
                                IData/*31:0*/ __VlefCall_6__get_result;
                                IData/*31:0*/ __VlefCall_5__get_show_max;
                                IData/*31:0*/ __VlefCond_4;
                                IData/*31:0*/ __VlefCall_3__get_inst_id;
                                IData/*31:0*/ __VlefCond_2;
                                IData/*31:0*/ __VlefCall_1__get_inst_id;
                                std::string __VlefCall_0__m_current_context;
                                std::string tmp;
                                this->__VnoInFunc_m_current_context(vlSymsp, ""s, __VlefCall_0__m_current_context);
                                if ((VlNull{} != lhs)) {
                                    VL_NULL_CHECK(lhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 588)
                                                                           ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
                                    __VlefCond_2 = __VlefCall_1__get_inst_id;
                                } else {
                                    __VlefCond_2 = 0U;
                                }
                                if ((VlNull{} != rhs)) {
                                    VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh", 589)
                                                                           ->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_3__get_inst_id);
                                    __VlefCond_4 = __VlefCall_3__get_inst_id;
                                } else {
                                    __VlefCond_4 = 0U;
                                }
                                tmp = VL_SFORMATF_N_NX("%@: lhs = @%0d : rhs = @%0d",0,
                                                       -1,
                                                       &(__VlefCall_0__m_current_context),
                                                       32,
                                                       __VlefCond_2,
                                                       32,
                                                       __VlefCond_4) ;
                                this->__PVT__result 
                                    = ((IData)(1U) 
                                       + this->__PVT__result);
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_5__get_show_max);
                                __VlefLogOr_8 = (0U 
                                                 == __VlefCall_5__get_show_max);
                                if ((1U & (~ (IData)(__VlefLogOr_8)))) {
                                    this->__VnoInFunc_get_result(vlSymsp, __VlefCall_6__get_result);
                                    this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_7__get_show_max);
                                    __VlefLogOr_8 = 
                                        (__VlefCall_6__get_result 
                                         <= __VlefCall_7__get_show_max);
                                }
                                if (__VlefLogOr_8) {
                                    this->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_9__get_verbosity);
                                    __Vtask_uvm_report__86__report_enabled_checked = 0U;
                                    this->__Vtask_uvm_report__86__context_name = ""s;
                                    __Vtask_uvm_report__86__line = 0x00000257U;
                                    this->__Vtask_uvm_report__86__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_comparer.svh"s;
                                    __Vtask_uvm_report__86__verbosity 
                                        = __VlefCall_9__get_verbosity;
                                    this->__Vtask_uvm_report__86__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Miscompare for "s, tmp));
                                    this->__Vtask_uvm_report__86__id = "MISCMP"s;
                                    __Vtask_uvm_report__86__severity 
                                        = this->__PVT__sev;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__87__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs 
                                        = __Vfunc_get__87__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 108)
                                                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__88__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top 
                                        = __Vtask_get_root__88__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 109)
                                                                           ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__86__severity, this->__Vtask_uvm_report__86__id, this->__Vtask_uvm_report__86__message, __Vtask_uvm_report__86__verbosity, this->__Vtask_uvm_report__86__filename, __Vtask_uvm_report__86__line, this->__Vtask_uvm_report__86__context_name, (IData)(__Vtask_uvm_report__86__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[433]);
                                    ++(vlSymsp->__Vcoverage[10292]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[10293]);
                                }
                                this->__PVT__miscompares 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__PVT__miscompares, tmp), "\n"s);
                                this->__VnoInFunc_get_result(vlSymsp, __VlefCall_10__get_result);
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_11__get_show_max);
                                if ((__VlefCall_10__get_result 
                                     <= __VlefCall_11__get_show_max)) {
                                    ++(vlSymsp->__Vcoverage[10294]);
                                }
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_12__get_show_max);
                                if ((0U == __VlefCall_12__get_show_max)) {
                                    ++(vlSymsp->__Vcoverage[10295]);
                                }
                                this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_13__get_show_max);
                                __VlefLogAnd_16 = (0U 
                                                   != __VlefCall_13__get_show_max);
                                if (__VlefLogAnd_16) {
                                    this->__VnoInFunc_get_result(vlSymsp, __VlefCall_14__get_result);
                                    this->__VnoInFunc_get_show_max(vlSymsp, __VlefCall_15__get_show_max);
                                    __VlefLogAnd_16 
                                        = (__VlefCall_14__get_result 
                                           > __VlefCall_15__get_show_max);
                                }
                                if (__VlefLogAnd_16) {
                                    ++(vlSymsp->__Vcoverage[10296]);
                                }
                                ++(vlSymsp->__Vcoverage[10297]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_flush\n"); );
                                // Body
                                this->__PVT__miscompares = ""s;
                                this->__PVT__check_type = 1U;
                                this->__PVT__result = 0U;
                                this->__PVT__m_recur_states.clear();
                                ++(vlSymsp->__Vcoverage[10298]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_object_compared(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, IData/*27:0*/ recursion, CData/*0:0*/ &ret_val, IData/*31:0*/ &object_compared__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_object_compared\n"); );
                                // Body
                                object_compared__Vfuncrtn = 0U;
                                ret_val = 0U;
                                if (this->__PVT__m_recur_states.exists(lhs)) {
                                    if (this->__PVT__m_recur_states
                                        .at(lhs).exists(rhs)) {
                                        if (this->__PVT__m_recur_states
                                            .at(lhs)
                                            .at(rhs).exists(recursion)) {
                                            if ((2U 
                                                 == this->__PVT__m_recur_states
                                                 .at(lhs)
                                                 .at(rhs)
                                                 .at(recursion)
                                                 .__PVT__state)) {
                                                ret_val 
                                                    = this->__PVT__m_recur_states
                                                    .at(lhs)
                                                    .at(rhs)
                                                    .at(recursion)
                                                    .__PVT__ret_val;
                                                ++(vlSymsp->__Vcoverage[10299]);
                                            } else {
                                                ++(vlSymsp->__Vcoverage[10300]);
                                            }
                                            object_compared__Vfuncrtn 
                                                = this->__PVT__m_recur_states
                                                .at(lhs)
                                                .at(rhs)
                                                .at(recursion)
                                                .__PVT__state;
                                        } else {
                                            object_compared__Vfuncrtn = 0U;
                                        }
                                    } else {
                                        object_compared__Vfuncrtn = 0U;
                                    }
                                } else {
                                    object_compared__Vfuncrtn = 0U;
                                }
                                ++(vlSymsp->__Vcoverage[10305]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_miscompares(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_miscompares__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_miscompares\n"); );
                                // Body
                                get_miscompares__Vfuncrtn 
                                    = this->__PVT__miscompares;
                                ++(vlSymsp->__Vcoverage[10306]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_result(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_result__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_result\n"); );
                                // Body
                                get_result__Vfuncrtn 
                                    = this->__PVT__result;
                                ++(vlSymsp->__Vcoverage[10307]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_result(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ result) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_result\n"); );
                                // Body
                                this->__PVT__result 
                                    = result;
                                ++(vlSymsp->__Vcoverage[10308]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ policy) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_recursion_policy\n"); );
                                // Body
                                this->__PVT__policy 
                                    = policy;
                                ++(vlSymsp->__Vcoverage[10309]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_recursion_policy\n"); );
                                // Body
                                get_recursion_policy__Vfuncrtn 
                                    = this->__PVT__policy;
                                ++(vlSymsp->__Vcoverage[10310]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_check_type(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_check_type\n"); );
                                // Body
                                this->__PVT__check_type 
                                    = enabled;
                                ++(vlSymsp->__Vcoverage[10311]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_check_type(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_type__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_check_type\n"); );
                                // Body
                                get_check_type__Vfuncrtn 
                                    = this->__PVT__check_type;
                                ++(vlSymsp->__Vcoverage[10312]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_show_max(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ show_max) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_show_max\n"); );
                                // Body
                                this->__PVT__show_max 
                                    = show_max;
                                ++(vlSymsp->__Vcoverage[10313]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_show_max(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_show_max__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_show_max\n"); );
                                // Body
                                get_show_max__Vfuncrtn 
                                    = this->__PVT__show_max;
                                ++(vlSymsp->__Vcoverage[10314]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_verbosity(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_verbosity\n"); );
                                // Body
                                this->__PVT__verbosity 
                                    = verbosity;
                                ++(vlSymsp->__Vcoverage[10315]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_verbosity(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_verbosity\n"); );
                                // Body
                                get_verbosity__Vfuncrtn 
                                    = this->__PVT__verbosity;
                                ++(vlSymsp->__Vcoverage[10316]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_severity(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_severity\n"); );
                                // Body
                                this->__PVT__sev = severity;
                                ++(vlSymsp->__Vcoverage[10317]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_severity(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_severity\n"); );
                                // Body
                                get_severity__Vfuncrtn 
                                    = this->__PVT__sev;
                                ++(vlSymsp->__Vcoverage[10318]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_threshold(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ threshold) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_threshold\n"); );
                                // Body
                                this->__PVT__m_threshold 
                                    = threshold;
                                ++(vlSymsp->__Vcoverage[10319]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_threshold(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_threshold\n"); );
                                // Body
                                get_threshold__Vfuncrtn 
                                    = this->__PVT__m_threshold;
                                ++(vlSymsp->__Vcoverage[10320]);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_randomize\n"); );
                                // Body
                                IData/*31:0*/ __VlefCall_0____VBasicRand;
                                Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                                randomize__Vfuncrtn 
                                    = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                                this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
                                randomize__Vfuncrtn 
                                    = (randomize__Vfuncrtn 
                                       & __VlefCall_0____VBasicRand);
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___Vsetup_constraints\n"); );
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___VBasicRand\n"); );
                                // Body
                                __VBasicRand__Vfuncrtn = 1U;
                            }

                            void Vtb_rng_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset\n"); );
                                // Body
                                (void)vlSymsp;  // Prevent unused variable warning
                                __PVT__m_recur_states.atDefault().atDefault().atDefault().__PVT__state = 0;
                                __PVT__m_recur_states.atDefault().atDefault().atDefault().__PVT__ret_val = 0;
                                __PVT__m_threshold = 0;
                                __PVT__depth = 0;
                                __PVT__compare_map.atDefault().atDefault() = 0;
                            }

                            Vtb_rng_uvm_pkg__03a__03auvm_comparer::~Vtb_rng_uvm_pkg__03a__03auvm_comparer() {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::~\n"); );
                            }

                            std::string Vtb_rng_uvm_pkg__03a__03auvm_comparer::to_string() const {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::to_string\n"); );
                                // Body
                                return ("'{"s + to_string_middle() + "}");
                            }

                            std::string Vtb_rng_uvm_pkg__03a__03auvm_comparer::to_string_middle() const {
                                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_comparer::to_string_middle\n"); );
                                // Body
                                std::string out;
                                out += "m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
                                out += ", policy:" + VL_TO_STRING(__PVT__policy);
                                out += ", show_max:" + VL_TO_STRING(__PVT__show_max);
                                out += ", verbosity:" + VL_TO_STRING(__PVT__verbosity);
                                out += ", sev:" + VL_TO_STRING(__PVT__sev);
                                out += ", miscompares:" + VL_TO_STRING(__PVT__miscompares);
                                out += ", check_type:" + VL_TO_STRING(__PVT__check_type);
                                out += ", result:" + VL_TO_STRING(__PVT__result);
                                out += ", m_threshold:" + VL_TO_STRING(__PVT__m_threshold);
                                out += ", m_object_names:" + VL_TO_STRING(__PVT__m_object_names);
                                out += ", depth:" + VL_TO_STRING(__PVT__depth);
                                out += ", compare_map:" + VL_TO_STRING(__PVT__compare_map);
                                out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_policy::to_string_middle();
                                return (out);
                            }
