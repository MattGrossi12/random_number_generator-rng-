// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi197> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi197__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[25040]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_hdl_paths_seq"s;
    ++(vlSymsp->__Vcoverage[25045]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi197> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi197__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[25041]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s);
        ++(vlSymsp->__Vcoverage[25042]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[25043]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[25044]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_hdl_paths_seq"s;
    ++(vlSymsp->__Vcoverage[25046]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_execute_op\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(vlProcess, vlSymsp, op);
    this->__VnoInFunc____05Fm_uvm_execute_field_op(vlProcess, vlSymsp, op);
    ++(vlSymsp->__Vcoverage[25047]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_execute_field_op\n"); );
    // Locals
    CData/*0:0*/ __Vtask_compare_field_int__20__Vfuncout;
    __Vtask_compare_field_int__20__Vfuncout = 0;
    CData/*0:0*/ __Vtask_compare_string__27__Vfuncout;
    __Vtask_compare_string__27__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__62__Vfuncout;
    __Vtask_read__62__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    IData/*31:0*/ __VlefExpr_51;
    std::string __VlefCall_50__get_full_name;
    IData/*31:0*/ __VlefCall_49__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_48;
    IData/*31:0*/ __VlefExpr_47;
    VlWide<128>/*4095:0*/ __VlefCall_46__read;
    IData/*31:0*/ __VlefExpr_45;
    QData/*63:0*/ __VlefCall_44__read;
    IData/*31:0*/ __VlefExpr_43;
    CData/*0:0*/ __VlefLogOr_42;
    IData/*31:0*/ __VlefCall_41__get_max_depth;
    IData/*31:0*/ __VlefCall_40__get_active_object_depth;
    IData/*31:0*/ __VlefCall_39__get_max_depth;
    CData/*0:0*/ __VlefCall_38__use_record_attribute;
    CData/*0:0*/ __VlefCall_37__is_open;
    CData/*0:0*/ __VlefCall_36__use_record_attribute;
    CData/*0:0*/ __VlefCall_35__is_open;
    CData/*0:0*/ __VlefCall_34__use_record_attribute;
    CData/*0:0*/ __VlefCall_33__is_open;
    CData/*0:0*/ __VlefCall_32__use_record_attribute;
    CData/*0:0*/ __VlefCall_31__is_open;
    std::string __VlefCall_30__unpack_string;
    QData/*63:0*/ __VlefCall_29__unpack_field_int;
    CData/*0:0*/ __VlefLogOr_28;
    IData/*31:0*/ __VlefCall_27__get_threshold;
    IData/*31:0*/ __VlefCall_26__get_result;
    IData/*31:0*/ __VlefCall_25__get_threshold;
    CData/*0:0*/ __VlefLogOr_24;
    IData/*31:0*/ __VlefCall_23__get_threshold;
    IData/*31:0*/ __VlefCall_22__get_result;
    IData/*31:0*/ __VlefCall_21__get_threshold;
    CData/*0:0*/ __VlefLogOr_20;
    IData/*31:0*/ __VlefCall_19__get_threshold;
    IData/*31:0*/ __VlefCall_18__get_result;
    IData/*31:0*/ __VlefCall_17__get_threshold;
    CData/*0:0*/ __VlefLogOr_16;
    IData/*31:0*/ __VlefCall_15__get_threshold;
    IData/*31:0*/ __VlefCall_14__get_result;
    IData/*31:0*/ __VlefCall_13__get_threshold;
    IData/*31:0*/ __VlefExpr_12;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_policy> __VlefCall_11__get_policy;
    IData/*31:0*/ __VlefExpr_10;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_policy> __VlefCall_9__get_policy;
    IData/*31:0*/ __VlefExpr_8;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_policy> __VlefCall_7__get_policy;
    IData/*31:0*/ __VlefExpr_6;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_policy> __VlefCall_5__get_policy;
    IData/*31:0*/ __VlefExpr_4;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_policy> __VlefCall_3__get_policy;
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __VlefCall_1__get_rhs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __VlefCall_0__get_rhs;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__sz___05F;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__i;
    unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk6__DOT__i;
    unnamedblk4__DOT__unnamedblk6__DOT__i = 0;
    std::string unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk8__DOT__i;
    std::string unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk10__DOT__i;
    std::string unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F;
    IData/*31:0*/ unnamedblk12__DOT_____05Ftmp_max;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index;
    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index;
    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz9> unnamedblk17__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> unnamedblk18__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_> unnamedblk19__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> unnamedblk20__DOT_____05Ftmp_rsrc___05F;
    std::string unnamedblk21__DOT__local_name___05F;
    std::string unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F;
    IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F;
    IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F;
    std::string unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz2> unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F;
    IData/*27:0*/ local_op_type___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> local_rhs___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> local_rsrc___05F;
    std::string local_rsrc_name___05F;
    CData/*0:0*/ local_success___05F;
    IData/*31:0*/ local_size___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> ___05Flocal_printer___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> ___05Flocal_comparer___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> ___05Flocal_recorder___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> ___05Flocal_packer___05F;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_copier> ___05Flocal_copier___05F;
    {
        local_op_type___05F = 0U;
        local_rsrc_name___05F = ""s;
        local_success___05F = 0U;
        local_size___05F = 0U;
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __VlefCall_0__get_rhs);
        std::ignore = VL_CAST_DYNAMIC(__VlefCall_0__get_rhs, local_rhs___05F);
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __VlefCall_1__get_rhs);
        __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get_rhs, local_rsrc___05F);
        if ((__VlefExpr_2 && (VlNull{} != local_rsrc___05F))) {
            VL_NULL_CHECK(local_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_name(vlSymsp, local_rsrc_name___05F);
            ++(vlSymsp->__Vcoverage[25048]);
        } else {
            ++(vlSymsp->__Vcoverage[25049]);
        }
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_op_type(vlProcess, vlSymsp, local_op_type___05F);
        if ((0x00000010U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_3__get_policy);
            __VlefExpr_4 = VL_CAST_DYNAMIC(__VlefCall_3__get_policy, ___05Flocal_printer___05F);
            if (VL_UNLIKELY(((! __VlefExpr_4)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
            ++(vlSymsp->__Vcoverage[25050]);
        } else if ((4U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[25052]);
            }
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_5__get_policy);
            __VlefExpr_6 = VL_CAST_DYNAMIC(__VlefCall_5__get_policy, ___05Flocal_comparer___05F);
            if (VL_UNLIKELY(((! __VlefExpr_6)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
            ++(vlSymsp->__Vcoverage[25053]);
        } else if ((0x00000040U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_7__get_policy);
            __VlefExpr_8 = VL_CAST_DYNAMIC(__VlefCall_7__get_policy, ___05Flocal_recorder___05F);
            if (VL_UNLIKELY(((! __VlefExpr_8)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
            ++(vlSymsp->__Vcoverage[25054]);
        } else if (((0x00000100U == local_op_type___05F) 
                    || (0x00000400U == local_op_type___05F))) {
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_9__get_policy);
            __VlefExpr_10 = VL_CAST_DYNAMIC(__VlefCall_9__get_policy, ___05Flocal_packer___05F);
            if (VL_UNLIKELY(((! __VlefExpr_10)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
            ++(vlSymsp->__Vcoverage[25055]);
        } else if ((1U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[25057]);
            }
            VL_NULL_CHECK(___05Flocal_op___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_policy(vlProcess, vlSymsp, __VlefCall_11__get_policy);
            __VlefExpr_12 = VL_CAST_DYNAMIC(__VlefCall_11__get_policy, ___05Flocal_copier___05F);
            if (VL_UNLIKELY(((! __VlefExpr_12)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
            ++(vlSymsp->__Vcoverage[25058]);
        } else if ((0x00000800U == local_op_type___05F)) {
            if ((VlNull{} == local_rsrc___05F)) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[25060]);
            }
            ++(vlSymsp->__Vcoverage[25061]);
        } else {
            goto __Vlabel0;
        }
        if ((1U == local_op_type___05F)) {
            this->__PVT__abstractions = VL_NULL_CHECK(local_rhs___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                ->__PVT__abstractions;
            ++(vlSymsp->__Vcoverage[25063]);
            ++(vlSymsp->__Vcoverage[25094]);
        } else if ((4U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_13__get_threshold);
            __VlefLogOr_16 = (1U & (~ (0U != __VlefCall_13__get_threshold)));
            if ((1U & (~ (IData)(__VlefLogOr_16)))) {
                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_result(vlSymsp, __VlefCall_14__get_result);
                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_15__get_threshold);
                __VlefLogOr_16 = (__VlefCall_14__get_result 
                                  < __VlefCall_15__get_threshold);
            }
            if (__VlefLogOr_16) {
                if ((this->__PVT__abstractions != VL_NULL_CHECK(local_rhs___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                     ->__PVT__abstractions)) {
                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_17__get_threshold);
                    __VlefLogOr_20 = (1U & (~ (0U != __VlefCall_17__get_threshold)));
                    if ((1U & (~ (IData)(__VlefLogOr_20)))) {
                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_result(vlSymsp, __VlefCall_18__get_result);
                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_19__get_threshold);
                        __VlefLogOr_20 = (__VlefCall_18__get_result 
                                          < __VlefCall_19__get_threshold);
                    }
                    if (__VlefLogOr_20) {
                        if ((this->__PVT__abstractions.size() 
                             != VL_NULL_CHECK(local_rhs___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__PVT__abstractions.size())) {
                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_compare_field_int(vlProcess, vlSymsp, "abstractions.size()"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 
                                                                                VL_EXTENDS_QI(64,32, VL_NULL_CHECK(local_rhs___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                                                ->__PVT__abstractions.size()), 0x00000020U, 0x02000000U, __Vtask_compare_field_int__20__Vfuncout);
                            ++(vlSymsp->__Vcoverage[25095]);
                            ++(vlSymsp->__Vcoverage[25097]);
                        } else {
                            ++(vlSymsp->__Vcoverage[25098]);
                        }
                        ++(vlSymsp->__Vcoverage[25099]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25100]);
                    }
                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_21__get_threshold);
                    __VlefLogOr_24 = (1U & (~ (0U != __VlefCall_21__get_threshold)));
                    if ((1U & (~ (IData)(__VlefLogOr_24)))) {
                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_result(vlSymsp, __VlefCall_22__get_result);
                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_23__get_threshold);
                        __VlefLogOr_24 = (__VlefCall_22__get_result 
                                          < __VlefCall_23__get_threshold);
                    }
                    if (__VlefLogOr_24) {
                        if ((this->__PVT__abstractions 
                             != VL_NULL_CHECK(local_rhs___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__PVT__abstractions)) {
                            unnamedblk1__DOT__i = 0U;
                            while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__abstractions.size())) {
                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_25__get_threshold);
                                __VlefLogOr_28 = (1U 
                                                  & (~ 
                                                     (0U 
                                                      != __VlefCall_25__get_threshold)));
                                if ((1U & (~ (IData)(__VlefLogOr_28)))) {
                                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_result(vlSymsp, __VlefCall_26__get_result);
                                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_threshold(vlSymsp, __VlefCall_27__get_threshold);
                                    __VlefLogOr_28 
                                        = (__VlefCall_26__get_result 
                                           < __VlefCall_27__get_threshold);
                                }
                                if (__VlefLogOr_28) {
                                    if ((this->__PVT__abstractions.at(unnamedblk1__DOT__i) 
                                         != VL_NULL_CHECK(local_rhs___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                         ->__PVT__abstractions.at(unnamedblk1__DOT__i))) {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_compare_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                                                                32,
                                                                                unnamedblk1__DOT__i) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__i)), 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(local_rhs___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                                                ->__PVT__abstractions.at(unnamedblk1__DOT__i)), __Vtask_compare_string__27__Vfuncout);
                                        ++(vlSymsp->__Vcoverage[25101]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[25102]);
                                    }
                                    ++(vlSymsp->__Vcoverage[25103]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[25104]);
                                }
                                unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + unnamedblk1__DOT__i);
                                ++(vlSymsp->__Vcoverage[25105]);
                            }
                            ++(vlSymsp->__Vcoverage[25106]);
                        } else {
                            ++(vlSymsp->__Vcoverage[25107]);
                        }
                        ++(vlSymsp->__Vcoverage[25108]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25109]);
                    }
                    ++(vlSymsp->__Vcoverage[25110]);
                } else {
                    ++(vlSymsp->__Vcoverage[25111]);
                }
                ++(vlSymsp->__Vcoverage[25112]);
            } else {
                ++(vlSymsp->__Vcoverage[25113]);
            }
            ++(vlSymsp->__Vcoverage[25114]);
            ++(vlSymsp->__Vcoverage[25145]);
        } else if ((0x00000100U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_packer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_pack_field_int(vlSymsp, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 0x00000020U);
            unnamedblk2__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__abstractions.size())) {
                VL_NULL_CHECK(___05Flocal_packer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_pack_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk2__DOT__i)));
                unnamedblk2__DOT__i = ((IData)(1U) 
                                       + unnamedblk2__DOT__i);
                ++(vlSymsp->__Vcoverage[25146]);
            }
            ++(vlSymsp->__Vcoverage[25147]);
            ++(vlSymsp->__Vcoverage[25178]);
        } else if ((0x00000400U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_packer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000020U, __VlefCall_29__unpack_field_int);
            local_size___05F = (IData)(__VlefCall_29__unpack_field_int);
            if (VL_GTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                this->__PVT__abstractions = this->__PVT__abstractions.slice(0U, 
                                                                            (local_size___05F 
                                                                             - (IData)(1U)));
                ++(vlSymsp->__Vcoverage[25180]);
            } else {
                while (VL_LTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                    this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(local_size___05F));
                    ++(vlSymsp->__Vcoverage[25179]);
                }
                ++(vlSymsp->__Vcoverage[25181]);
            }
            unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__abstractions.size())) {
                VL_NULL_CHECK(___05Flocal_packer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_unpack_string(vlProcess, vlSymsp, __VlefCall_30__unpack_string);
                this->__PVT__abstractions.atWriteAppend(unnamedblk3__DOT__i) 
                    = __VlefCall_30__unpack_string;
                unnamedblk3__DOT__i = ((IData)(1U) 
                                       + unnamedblk3__DOT__i);
                ++(vlSymsp->__Vcoverage[25182]);
            }
            ++(vlSymsp->__Vcoverage[25183]);
            ++(vlSymsp->__Vcoverage[25214]);
        } else if ((0x00000040U == local_op_type___05F)) {
            unnamedblk4__DOT__sz___05F = 0U;
            unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__i, this->__PVT__abstractions.size())) {
                unnamedblk4__DOT__sz___05F = unnamedblk4__DOT__unnamedblk5__DOT__i;
                unnamedblk4__DOT__unnamedblk5__DOT__i 
                    = ((IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__i);
                ++(vlSymsp->__Vcoverage[25215]);
            }
            if ((0U == unnamedblk4__DOT__sz___05F)) {
                __VlefCall_31__is_open = (VlNull{} 
                                          != ___05Flocal_recorder___05F);
                if (__VlefCall_31__is_open) {
                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_is_open(vlSymsp, __VlefCall_31__is_open);
                }
                if (__VlefCall_31__is_open) {
                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_32__use_record_attribute);
                    if (__VlefCall_32__use_record_attribute) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "abstractions"s, "0"s, ""s);
                        ++(vlSymsp->__Vcoverage[25218]);
                    } else {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "abstractions"s, 0ULL, 0x00000020U, 0x02000000U);
                        ++(vlSymsp->__Vcoverage[25217]);
                    }
                    ++(vlSymsp->__Vcoverage[25219]);
                } else {
                    ++(vlSymsp->__Vcoverage[25220]);
                }
                ++(vlSymsp->__Vcoverage[25238]);
            } else if (VL_GTS_III(32, 0x0000000aU, unnamedblk4__DOT__sz___05F)) {
                unnamedblk4__DOT__unnamedblk6__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk6__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk6__DOT__i) ;
                    __VlefCall_33__is_open = (VlNull{} 
                                              != ___05Flocal_recorder___05F);
                    if (__VlefCall_33__is_open) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_is_open(vlSymsp, __VlefCall_33__is_open);
                    }
                    if (__VlefCall_33__is_open) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_34__use_record_attribute);
                        if (__VlefCall_34__use_record_attribute) {
                            __Vtemp_1 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk6__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , ""s);
                            ++(vlSymsp->__Vcoverage[25221]);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk6__DOT__i)));
                            ++(vlSymsp->__Vcoverage[25222]);
                        }
                        ++(vlSymsp->__Vcoverage[25223]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25224]);
                    }
                    unnamedblk4__DOT__unnamedblk6__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk6__DOT__i);
                    ++(vlSymsp->__Vcoverage[25225]);
                }
                ++(vlSymsp->__Vcoverage[25236]);
            } else {
                unnamedblk4__DOT__unnamedblk8__DOT__i = 0U;
                unnamedblk4__DOT__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, unnamedblk4__DOT__unnamedblk8__DOT__i)) {
                    unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk8__DOT__i) ;
                    __VlefCall_35__is_open = (VlNull{} 
                                              != ___05Flocal_recorder___05F);
                    if (__VlefCall_35__is_open) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_is_open(vlSymsp, __VlefCall_35__is_open);
                    }
                    if (__VlefCall_35__is_open) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_36__use_record_attribute);
                        if (__VlefCall_36__use_record_attribute) {
                            __Vtemp_2 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk8__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , ""s);
                            ++(vlSymsp->__Vcoverage[25226]);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk8__DOT__i)));
                            ++(vlSymsp->__Vcoverage[25227]);
                        }
                        ++(vlSymsp->__Vcoverage[25228]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25229]);
                    }
                    unnamedblk4__DOT__unnamedblk8__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk8__DOT__i);
                    ++(vlSymsp->__Vcoverage[25230]);
                }
                unnamedblk4__DOT__unnamedblk10__DOT__i = 0U;
                unnamedblk4__DOT__unnamedblk10__DOT__i 
                    = (unnamedblk4__DOT__sz___05F - (IData)(5U));
                while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk10__DOT__i, unnamedblk4__DOT__sz___05F)) {
                    unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk10__DOT__i) ;
                    __VlefCall_37__is_open = (VlNull{} 
                                              != ___05Flocal_recorder___05F);
                    if (__VlefCall_37__is_open) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_is_open(vlSymsp, __VlefCall_37__is_open);
                    }
                    if (__VlefCall_37__is_open) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_38__use_record_attribute);
                        if (__VlefCall_38__use_record_attribute) {
                            __Vtemp_3 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk10__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_3)) , ""s);
                            ++(vlSymsp->__Vcoverage[25231]);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk10__DOT__i)));
                            ++(vlSymsp->__Vcoverage[25232]);
                        }
                        ++(vlSymsp->__Vcoverage[25233]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25234]);
                    }
                    unnamedblk4__DOT__unnamedblk10__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk10__DOT__i);
                    ++(vlSymsp->__Vcoverage[25235]);
                }
                ++(vlSymsp->__Vcoverage[25237]);
            }
            ++(vlSymsp->__Vcoverage[25239]);
            ++(vlSymsp->__Vcoverage[25270]);
        } else if ((0x00000010U == local_op_type___05F)) {
            unnamedblk12__DOT_____05Ftmp_max = ((IData)(1U) 
                                                + (this->__PVT__abstractions.size() 
                                                   - (IData)(1U)));
            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "abstractions"s, unnamedblk12__DOT_____05Ftmp_max, "queue(string)"s, 0x2eU);
            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_max_depth(vlSymsp, __VlefCall_39__get_max_depth);
            __VlefLogOr_42 = (0xffffffffU == __VlefCall_39__get_max_depth);
            if ((1U & (~ (IData)(__VlefLogOr_42)))) {
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_40__get_active_object_depth);
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_max_depth(vlSymsp, __VlefCall_41__get_max_depth);
                __VlefLogOr_42 = (__VlefCall_40__get_active_object_depth 
                                  < ((IData)(1U) + __VlefCall_41__get_max_depth));
            }
            if (__VlefLogOr_42) {
                unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements = 0U;
                unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements = 0U;
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_begin_elements(vlSymsp, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements);
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_end_elements(vlSymsp, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements);
                if (((0xffffffffU == unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements) 
                     | (0xffffffffU == unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements))) {
                    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index = 0U;
                    while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index, this->__PVT__abstractions.size())) {
                        VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index)), 0x2eU);
                        unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index 
                            = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index);
                        ++(vlSymsp->__Vcoverage[25271]);
                    }
                    ++(vlSymsp->__Vcoverage[25282]);
                } else {
                    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr = 0U;
                    {
                        unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index = 0U;
                        while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index, this->__PVT__abstractions.size())) {
                            if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements)) {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index)), 0x2eU);
                                ++(vlSymsp->__Vcoverage[25272]);
                            } else {
                                goto __Vlabel1;
                            }
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr);
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index);
                            ++(vlSymsp->__Vcoverage[25274]);
                        }
                        __Vlabel1: ;
                    }
                    if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT_____05Ftmp_max)) {
                        if (VL_GTS_III(32, (unnamedblk12__DOT_____05Ftmp_max 
                                            - unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements), unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr)) {
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = (unnamedblk12__DOT_____05Ftmp_max 
                                   - unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements);
                            ++(vlSymsp->__Vcoverage[25275]);
                        } else {
                            ++(vlSymsp->__Vcoverage[25276]);
                        }
                        if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements)) {
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements;
                            ++(vlSymsp->__Vcoverage[25277]);
                        } else {
                            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_range(vlProcess, vlSymsp, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements, 
                                                                                (unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                                                                - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[25278]);
                        }
                        while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT_____05Ftmp_max)) {
                            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr)), 0x2eU);
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr);
                            ++(vlSymsp->__Vcoverage[25279]);
                        }
                        ++(vlSymsp->__Vcoverage[25280]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25281]);
                    }
                    ++(vlSymsp->__Vcoverage[25283]);
                }
                if ((0xffffffffU == unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements)) {
                    ++(vlSymsp->__Vcoverage[25284]);
                }
                if ((0xffffffffU == unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements)) {
                    ++(vlSymsp->__Vcoverage[25285]);
                }
                if (((0xffffffffU != unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements) 
                     & (0xffffffffU != unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements))) {
                    ++(vlSymsp->__Vcoverage[25286]);
                }
                ++(vlSymsp->__Vcoverage[25287]);
            } else {
                ++(vlSymsp->__Vcoverage[25288]);
            }
            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_footer(vlSymsp, unnamedblk12__DOT_____05Ftmp_max);
            ++(vlSymsp->__Vcoverage[25289]);
            ++(vlSymsp->__Vcoverage[25320]);
        } else if ((0x00000800U == local_op_type___05F)) {
            if (("abstractions"s == local_rsrc_name___05F)) {
                __VlefExpr_43 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk17__DOT_____05Ftmp_rsrc___05F);
                local_success___05F = (1U & __VlefExpr_43);
                if (local_success___05F) {
                    VL_NULL_CHECK(unnamedblk17__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __VlefCall_44__read);
                    local_size___05F = (IData)(__VlefCall_44__read);
                    ++(vlSymsp->__Vcoverage[25321]);
                } else {
                    ++(vlSymsp->__Vcoverage[25322]);
                }
                if (local_success___05F) {
                    ++(vlSymsp->__Vcoverage[25326]);
                } else {
                    __VlefExpr_45 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk18__DOT_____05Ftmp_rsrc___05F);
                    local_success___05F = (1U & __VlefExpr_45);
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk18__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __VlefCall_46__read);
                        local_size___05F = __VlefCall_46__read[0U];
                        ++(vlSymsp->__Vcoverage[25323]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25324]);
                    }
                    ++(vlSymsp->__Vcoverage[25325]);
                }
                if (local_success___05F) {
                    ++(vlSymsp->__Vcoverage[25332]);
                } else {
                    __VlefExpr_47 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk19__DOT_____05Ftmp_rsrc___05F);
                    local_success___05F = (1U & __VlefExpr_47);
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk19__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, local_size___05F);
                        ++(vlSymsp->__Vcoverage[25329]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25330]);
                    }
                    ++(vlSymsp->__Vcoverage[25331]);
                }
                if (local_success___05F) {
                    ++(vlSymsp->__Vcoverage[25338]);
                } else {
                    __VlefExpr_48 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk20__DOT_____05Ftmp_rsrc___05F);
                    local_success___05F = (1U & __VlefExpr_48);
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk20__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__62__Vfuncout);
                        local_size___05F = __Vtask_read__62__Vfuncout;
                        ++(vlSymsp->__Vcoverage[25335]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25336]);
                    }
                    ++(vlSymsp->__Vcoverage[25337]);
                }
                if (local_success___05F) {
                    if (VL_GTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                        this->__PVT__abstractions = this->__PVT__abstractions.slice(0U, 
                                                                                (local_size___05F 
                                                                                - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[25342]);
                    } else {
                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                            this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(local_size___05F));
                            ++(vlSymsp->__Vcoverage[25341]);
                        }
                        ++(vlSymsp->__Vcoverage[25343]);
                    }
                    ++(vlSymsp->__Vcoverage[25344]);
                } else {
                    ++(vlSymsp->__Vcoverage[25345]);
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    ++(vlSymsp->__Vcoverage[25327]);
                }
                if (local_success___05F) {
                    ++(vlSymsp->__Vcoverage[25328]);
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    ++(vlSymsp->__Vcoverage[25333]);
                }
                if (local_success___05F) {
                    ++(vlSymsp->__Vcoverage[25334]);
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    ++(vlSymsp->__Vcoverage[25339]);
                }
                if (local_success___05F) {
                    ++(vlSymsp->__Vcoverage[25340]);
                }
                ++(vlSymsp->__Vcoverage[25363]);
            } else {
                unnamedblk21__DOT__local_name___05F = "abstractions["s;
                if ((((0U != VL_LEN_IN(local_rsrc_name___05F)) 
                      & (0x5dU == VL_GETC_N(local_rsrc_name___05F,
                                            (VL_LEN_IN(local_rsrc_name___05F) 
                                             - (IData)(1U))))) 
                     & (VL_SUBSTR_N(local_rsrc_name___05F,0U,
                                    (VL_LEN_IN(unnamedblk21__DOT__local_name___05F) 
                                     - (IData)(1U))) 
                        == unnamedblk21__DOT__local_name___05F))) {
                    unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F 
                        = VL_SUBSTR_N(local_rsrc_name___05F,
                                      VL_LEN_IN(unnamedblk21__DOT__local_name___05F),
                                      (VL_LEN_IN(local_rsrc_name___05F) 
                                       - (IData)(2U)));
                    unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F = 0U;
                    unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F 
                        = VL_SSCANF_INNX(64,unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F,"%#",0,
                                         32,&(unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)) ;
                    if (VL_LTS_III(32, 0U, unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F)) {
                        if (VL_GTS_III(32, 0U, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)) {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM/FIELDS/QDA_IDX"s, __VlefCall_49__uvm_report_enabled);
                            if ((0U != __VlefCall_49__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_50__get_full_name);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/FIELDS/QDA_IDX"s, VL_SFORMATF_N_NX("Index '%0d' is not valid for field '%@.abstractions' of size '%0d'",0,
                                                                                32,
                                                                                unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F,
                                                                                -1,
                                                                                &(__VlefCall_50__get_full_name),
                                                                                32,
                                                                                this->__PVT__abstractions.size()) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x0000003bU, ""s, 1U);
                                ++(vlSymsp->__Vcoverage[25346]);
                            } else {
                                ++(vlSymsp->__Vcoverage[25347]);
                            }
                            ++(vlSymsp->__Vcoverage[25357]);
                        } else {
                            unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F = ""s;
                            __VlefExpr_51 = VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F);
                            local_success___05F = (1U 
                                                   & __VlefExpr_51);
                            if (local_success___05F) {
                                VL_NULL_CHECK(unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F);
                                ++(vlSymsp->__Vcoverage[25348]);
                            } else {
                                ++(vlSymsp->__Vcoverage[25349]);
                            }
                            if (local_success___05F) {
                                if (VL_GTES_III(32, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F, this->__PVT__abstractions.size())) {
                                    if (VL_GTS_III(32, this->__PVT__abstractions.size(), 
                                                   ((IData)(1U) 
                                                    + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F))) {
                                        this->__PVT__abstractions 
                                            = this->__PVT__abstractions.slice(0U, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F);
                                        ++(vlSymsp->__Vcoverage[25351]);
                                    } else {
                                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), 
                                                          ((IData)(1U) 
                                                           + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F))) {
                                            this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)));
                                            ++(vlSymsp->__Vcoverage[25350]);
                                        }
                                        ++(vlSymsp->__Vcoverage[25352]);
                                    }
                                    ++(vlSymsp->__Vcoverage[25353]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[25354]);
                                }
                                this->__PVT__abstractions.atWriteAppend(unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F) 
                                    = unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F;
                                ++(vlSymsp->__Vcoverage[25355]);
                            } else {
                                ++(vlSymsp->__Vcoverage[25356]);
                            }
                            ++(vlSymsp->__Vcoverage[25358]);
                        }
                        ++(vlSymsp->__Vcoverage[25359]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25360]);
                    }
                    ++(vlSymsp->__Vcoverage[25361]);
                } else {
                    ++(vlSymsp->__Vcoverage[25362]);
                }
                ++(vlSymsp->__Vcoverage[25364]);
            }
            ++(vlSymsp->__Vcoverage[25365]);
            ++(vlSymsp->__Vcoverage[25396]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[25065]);
    ++(vlSymsp->__Vcoverage[25116]);
    ++(vlSymsp->__Vcoverage[25149]);
    ++(vlSymsp->__Vcoverage[25185]);
    ++(vlSymsp->__Vcoverage[25241]);
    ++(vlSymsp->__Vcoverage[25291]);
    ++(vlSymsp->__Vcoverage[25367]);
    ++(vlSymsp->__Vcoverage[25397]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[25398]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk25__DOT__i;
    unnamedblk25__DOT__i = 0;
    {
        if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, "Register model handle is null"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[25400]);
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 76)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("checking HDL paths for all registers/memories in "s, __VlefCall_1__get_full_name)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x0000004cU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[25401]);
        } else {
            ++(vlSymsp->__Vcoverage[25402]);
        }
        if ((0U == this->__PVT__abstractions.size())) {
            this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, ""s);
            ++(vlSymsp->__Vcoverage[25404]);
        } else {
            unnamedblk25__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk25__DOT__i, this->__PVT__abstractions.size())) {
                this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::__PVT__model, 
                                           VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk25__DOT__i)));
                unnamedblk25__DOT__i = ((IData)(1U) 
                                        + unnamedblk25__DOT__i);
                ++(vlSymsp->__Vcoverage[25403]);
            }
            ++(vlSymsp->__Vcoverage[25405]);
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, "HDL path validation completed "s, 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000055U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[25406]);
        } else {
            ++(vlSymsp->__Vcoverage[25407]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[25408]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[25409]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block\n"); );
    // Body
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk26__DOT__i;
    unnamedblk26__DOT__i = 0;
    IData/*31:0*/ unnamedblk27__DOT__i;
    unnamedblk27__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> unnamedblk28__DOT__blks;
    IData/*31:0*/ unnamedblk28__DOT__unnamedblk29__DOT__i;
    unnamedblk28__DOT__unnamedblk29__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> mems;
    regs.clear();
    mems.clear();
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 104)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Validating HDL paths in "s, __VlefCall_1__get_full_name), " for "s), 
                                                                                ((""s 
                                                                                == kind)
                                                                                 ? "default"s
                                                                                 : kind)), " design abstraction"s)), 0x000000c8U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000068U, ""s, 1U);
        if ((""s == kind)) {
            ++(vlSymsp->__Vcoverage[25410]);
        }
        if ((1U & (~ (""s == kind)))) {
            ++(vlSymsp->__Vcoverage[25411]);
        }
        ++(vlSymsp->__Vcoverage[25412]);
    } else {
        ++(vlSymsp->__Vcoverage[25413]);
    }
    VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 107)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk26__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk26__DOT__i, regs.size())) {
        this->__VnoInFunc_check_reg(vlProcess, vlSymsp, regs.at(unnamedblk26__DOT__i), kind);
        unnamedblk26__DOT__i = ((IData)(1U) + unnamedblk26__DOT__i);
        ++(vlSymsp->__Vcoverage[25414]);
    }
    VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 111)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
    unnamedblk27__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk27__DOT__i, mems.size())) {
        this->__VnoInFunc_check_mem(vlProcess, vlSymsp, mems.at(unnamedblk27__DOT__i), kind);
        unnamedblk27__DOT__i = ((IData)(1U) + unnamedblk27__DOT__i);
        ++(vlSymsp->__Vcoverage[25415]);
    }
    unnamedblk28__DOT__blks.clear();
    VL_NULL_CHECK(blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 118)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk28__DOT__blks, 1U);
    unnamedblk28__DOT__unnamedblk29__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk28__DOT__unnamedblk29__DOT__i, unnamedblk28__DOT__blks.size())) {
        this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk28__DOT__blks.at(unnamedblk28__DOT__unnamedblk29__DOT__i), kind);
        unnamedblk28__DOT__unnamedblk29__DOT__i = ((IData)(1U) 
                                                   + unnamedblk28__DOT__unnamedblk29__DOT__i);
        ++(vlSymsp->__Vcoverage[25416]);
    }
    ++(vlSymsp->__Vcoverage[25417]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> r, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg\n"); );
    // Body
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_hdl_check_path;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk30__DOT__p;
    unnamedblk30__DOT__p = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk30__DOT__unnamedblk31__DOT__path;
    IData/*31:0*/ unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j;
    unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j = 0;
    std::string unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        paths.clear();
        VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 131)->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if (__VlefCall_0__has_hdl_path) {
            ++(vlSymsp->__Vcoverage[25419]);
        } else {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 134)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[25421]);
        }
        unnamedblk30__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk30__DOT__p, paths.size())) {
            unnamedblk30__DOT__unnamedblk31__DOT__path 
                = paths.at(unnamedblk30__DOT__p);
            unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j, VL_NULL_CHECK(unnamedblk30__DOT__unnamedblk31__DOT__path, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 139)
                              ->__PVT__slices.size())) {
                unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk30__DOT__unnamedblk31__DOT__path, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 140)
                    ->__PVT__slices.at(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j)
                    .__PVT__path;
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                __VlefCall_1__uvm_hdl_read = 0U;
                ++(vlSymsp->__Vcoverage[247]);
                if ((0U != __VlefCall_1__uvm_hdl_read)) {
                    ++(vlSymsp->__Vcoverage[25425]);
                } else {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 145)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%@\" for register \"%@\" is not readable",0,
                                                                                -1,
                                                                                &(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_),
                                                                                -1,
                                                                                &(__VlefCall_3__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000091U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[25422]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25423]);
                    }
                    ++(vlSymsp->__Vcoverage[25424]);
                }
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_CHECK_PATH"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                __VlefCall_4__uvm_hdl_check_path = 0U;
                ++(vlSymsp->__Vcoverage[242]);
                if ((0U != __VlefCall_4__uvm_hdl_check_path)) {
                    ++(vlSymsp->__Vcoverage[25429]);
                } else {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_5__uvm_report_enabled);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        VL_NULL_CHECK(r, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 149)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%@\" for register \"%@\" is not accessible",0,
                                                                                -1,
                                                                                &(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_),
                                                                                -1,
                                                                                &(__VlefCall_6__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000095U, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[25426]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25427]);
                    }
                    ++(vlSymsp->__Vcoverage[25428]);
                }
                unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j 
                    = ((IData)(1U) + unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j);
                ++(vlSymsp->__Vcoverage[25430]);
            }
            unnamedblk30__DOT__p = ((IData)(1U) + unnamedblk30__DOT__p);
            ++(vlSymsp->__Vcoverage[25431]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[25432]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> m, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem\n"); );
    // Body
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_check_path;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk34__DOT__p;
    unnamedblk34__DOT__p = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk34__DOT__unnamedblk35__DOT__path;
    IData/*31:0*/ unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j;
    unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j = 0;
    std::string unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        paths.clear();
        VL_NULL_CHECK(m, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 160)->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if (__VlefCall_0__has_hdl_path) {
            ++(vlSymsp->__Vcoverage[25434]);
        } else {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(m, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 163)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[25436]);
        }
        unnamedblk34__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk34__DOT__p, paths.size())) {
            unnamedblk34__DOT__unnamedblk35__DOT__path 
                = paths.at(unnamedblk34__DOT__p);
            unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j, VL_NULL_CHECK(unnamedblk34__DOT__unnamedblk35__DOT__path, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 168)
                              ->__PVT__slices.size())) {
                unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk34__DOT__unnamedblk35__DOT__path, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 170)
                    ->__PVT__slices.at(unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j)
                    .__PVT__path;
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_CHECK_PATH"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                __VlefCall_1__uvm_hdl_check_path = 0U;
                ++(vlSymsp->__Vcoverage[242]);
                if ((0U != __VlefCall_1__uvm_hdl_check_path)) {
                    ++(vlSymsp->__Vcoverage[25440]);
                } else {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        VL_NULL_CHECK(m, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 174)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%@\" for memory \"%@\" is not accessible",0,
                                                                                -1,
                                                                                &(unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_),
                                                                                -1,
                                                                                &(__VlefCall_3__get_full_name)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x000000aeU, ""s, 1U);
                        ++(vlSymsp->__Vcoverage[25437]);
                    } else {
                        ++(vlSymsp->__Vcoverage[25438]);
                    }
                    ++(vlSymsp->__Vcoverage[25439]);
                }
                unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j 
                    = ((IData)(1U) + unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j);
                ++(vlSymsp->__Vcoverage[25441]);
            }
            unnamedblk34__DOT__p = ((IData)(1U) + unnamedblk34__DOT__p);
            ++(vlSymsp->__Vcoverage[25442]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[25443]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::~Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "abstractions:" + VL_TO_STRING(__PVT__abstractions);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328::to_string_middle();
    return (out);
}
