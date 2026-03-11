// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi15> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[9586]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_field_op"s;
    ++(vlSymsp->__Vcoverage[9591]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_m_get_available_op(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> &m_get_available_op__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_m_get_available_op\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> field_op;
    if (VL_LTS_III(32, 0U, this->__PVT__m_recycled_op.size())) {
        field_op = this->__PVT__m_recycled_op.pop_back();
        ++(vlSymsp->__Vcoverage[9855]);
    } else {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_op"s, VlNull{}, ""s, field_op);
        ++(vlSymsp->__Vcoverage[9856]);
    }
    m_get_available_op__Vfuncrtn = field_op;
    ++(vlSymsp->__Vcoverage[9857]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi15> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[9587]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_field_op, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[9588]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_field_op, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[9589]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[9590]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_field_op"s;
    ++(vlSymsp->__Vcoverage[9592]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_is_set = 0U;
    this->__PVT__m_user_hook = 1U;
    ++(vlSymsp->__Vcoverage[9593]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ op_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_policy> policy, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__9__verbosity;
    __Vtask_uvm_report_error__9__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__9__line;
    __Vtask_uvm_report_error__9__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__9__report_enabled_checked;
    __Vtask_uvm_report_error__9__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
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
    // Body
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlQueue<std::string> unnamedblk1__DOT__msg_queue;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    VlQueue<std::string> matching_ops;
    matching_ops.clear();
    matching_ops.atDefault().clear();
    if ((0U != (1U & op_type))) {
        matching_ops.push_back("UVM_COPY"s);
        ++(vlSymsp->__Vcoverage[9594]);
    } else {
        ++(vlSymsp->__Vcoverage[9595]);
    }
    if ((0U != (4U & op_type))) {
        matching_ops.push_back("UVM_COMPARE"s);
        ++(vlSymsp->__Vcoverage[9625]);
    } else {
        ++(vlSymsp->__Vcoverage[9626]);
    }
    if ((0U != (0x00000010U & op_type))) {
        matching_ops.push_back("UVM_PRINT"s);
        ++(vlSymsp->__Vcoverage[9656]);
    } else {
        ++(vlSymsp->__Vcoverage[9657]);
    }
    if ((0U != (0x00000040U & op_type))) {
        matching_ops.push_back("UVM_RECORD"s);
        ++(vlSymsp->__Vcoverage[9687]);
    } else {
        ++(vlSymsp->__Vcoverage[9688]);
    }
    if ((0U != (0x00000100U & op_type))) {
        matching_ops.push_back("UVM_PACK"s);
        ++(vlSymsp->__Vcoverage[9718]);
    } else {
        ++(vlSymsp->__Vcoverage[9719]);
    }
    if ((0U != (0x00000400U & op_type))) {
        matching_ops.push_back("UVM_UNPACK"s);
        ++(vlSymsp->__Vcoverage[9749]);
    } else {
        ++(vlSymsp->__Vcoverage[9750]);
    }
    if ((0U != (0x00000800U & op_type))) {
        matching_ops.push_back("UVM_SET"s);
        ++(vlSymsp->__Vcoverage[9780]);
    } else {
        ++(vlSymsp->__Vcoverage[9781]);
    }
    if (VL_LTS_III(32, 1U, matching_ops.size())) {
        unnamedblk1__DOT__msg_queue.clear();
        unnamedblk1__DOT__msg_queue.atDefault().clear();
        unnamedblk1__DOT__msg_queue.push_back("("s);
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, matching_ops.size())) {
            unnamedblk1__DOT__msg_queue.push_back(matching_ops.at(unnamedblk1__DOT__unnamedblk2__DOT__i));
            if ((unnamedblk1__DOT__unnamedblk2__DOT__i 
                 != (matching_ops.size() - (IData)(1U)))) {
                unnamedblk1__DOT__msg_queue.push_back(","s);
                ++(vlSymsp->__Vcoverage[9811]);
            } else {
                ++(vlSymsp->__Vcoverage[9812]);
            }
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
            ++(vlSymsp->__Vcoverage[9813]);
        }
        unnamedblk1__DOT__msg_queue.push_back(")"s);
        this->__Vfunc_uvm_report_enabled__4__id = "UVM/FIELD_OP/SET_BAD_OP_TYPE"s;
        __Vfunc_uvm_report_enabled__4__severity = 2U;
        __Vfunc_uvm_report_enabled__4__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__5__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__6__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), this->__Vfunc_uvm_report_enabled__4__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__Vfunc_m_uvm_string_queue_join__8__Vfuncout = ""s;
            this->__Vfunc_m_uvm_string_queue_join__8__Vfuncout 
                = VL_CVT_PACK_STR_ND(unnamedblk1__DOT__msg_queue);
            ++(vlSymsp->__Vcoverage[434]);
            __VlefCall_1__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__8__Vfuncout;
            __Vtask_uvm_report_error__9__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__9__context_name = ""s;
            __Vtask_uvm_report_error__9__line = 0x00000058U;
            this->__Vtask_uvm_report_error__9__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__9__verbosity = 0U;
            this->__Vtask_uvm_report_error__9__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("set() was passed op_type matching multiple operations: "s, __VlefCall_1__m_uvm_string_queue_join));
            this->__Vtask_uvm_report_error__9__id = "UVM/FIELD_OP/SET_BAD_OP_TYPE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__9__id, this->__Vtask_uvm_report_error__9__message, __Vtask_uvm_report_error__9__verbosity, this->__Vtask_uvm_report_error__9__filename, __Vtask_uvm_report_error__9__line, this->__Vtask_uvm_report_error__9__context_name, (IData)(__Vtask_uvm_report_error__9__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[9814]);
        } else {
            ++(vlSymsp->__Vcoverage[9815]);
        }
        ++(vlSymsp->__Vcoverage[9816]);
    } else {
        ++(vlSymsp->__Vcoverage[9817]);
    }
    if (this->__PVT__m_is_set) {
        this->__Vfunc_uvm_report_enabled__13__id = "UVM/FIELD_OP/SET"s;
        __Vfunc_uvm_report_enabled__13__severity = 2U;
        __Vfunc_uvm_report_enabled__13__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__14__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_2__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__17__context_name = ""s;
            __Vtask_uvm_report_error__17__line = 0x00000062U;
            this->__Vtask_uvm_report_error__17__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__17__verbosity = 0U;
            this->__Vtask_uvm_report_error__17__message = "Attempting to set values in policy without flushing"s;
            this->__Vtask_uvm_report_error__17__id = "UVM/FIELD_OP/SET"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__17__id, this->__Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, this->__Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, this->__Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[9818]);
        } else {
            ++(vlSymsp->__Vcoverage[9819]);
        }
        ++(vlSymsp->__Vcoverage[9821]);
    } else {
        this->__PVT__m_op_type = op_type;
        this->__PVT__m_policy = policy;
        this->__PVT__m_object = rhs;
        this->__PVT__m_is_set = 1U;
        ++(vlSymsp->__Vcoverage[9820]);
    }
    if ((1U & op_type)) {
        ++(vlSymsp->__Vcoverage[9623]);
    }
    if ((1U & (~ op_type))) {
        ++(vlSymsp->__Vcoverage[9624]);
    }
    if ((4U & op_type)) {
        ++(vlSymsp->__Vcoverage[9652]);
    }
    if ((1U & (~ (op_type >> 2U)))) {
        ++(vlSymsp->__Vcoverage[9655]);
    }
    if ((0x00000010U & op_type)) {
        ++(vlSymsp->__Vcoverage[9681]);
    }
    if ((1U & (~ (op_type >> 4U)))) {
        ++(vlSymsp->__Vcoverage[9686]);
    }
    if ((0x00000040U & op_type)) {
        ++(vlSymsp->__Vcoverage[9710]);
    }
    if ((1U & (~ (op_type >> 6U)))) {
        ++(vlSymsp->__Vcoverage[9717]);
    }
    if ((0x00000100U & op_type)) {
        ++(vlSymsp->__Vcoverage[9739]);
    }
    if ((1U & (~ (op_type >> 8U)))) {
        ++(vlSymsp->__Vcoverage[9748]);
    }
    if ((0x00000400U & op_type)) {
        ++(vlSymsp->__Vcoverage[9768]);
    }
    if ((1U & (~ (op_type >> 0x0000000aU)))) {
        ++(vlSymsp->__Vcoverage[9779]);
    }
    if ((0x00000800U & op_type)) {
        ++(vlSymsp->__Vcoverage[9798]);
    }
    if ((1U & (~ (op_type >> 0x0000000bU)))) {
        ++(vlSymsp->__Vcoverage[9810]);
    }
    ++(vlSymsp->__Vcoverage[9822]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_op_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_name\n"); );
    // Body
    get_op_name__Vfuncrtn = ((1U == this->__PVT__m_op_type)
                              ? "copy"s : ((4U == this->__PVT__m_op_type)
                                            ? "compare"s
                                            : ((0x00000010U 
                                                == this->__PVT__m_op_type)
                                                ? "print"s
                                                : (
                                                   (0x00000040U 
                                                    == this->__PVT__m_op_type)
                                                    ? "record"s
                                                    : 
                                                   ((0x00000100U 
                                                     == this->__PVT__m_op_type)
                                                     ? "pack"s
                                                     : 
                                                    ((0x00000400U 
                                                      == this->__PVT__m_op_type)
                                                      ? "unpack"s
                                                      : 
                                                     ((0x00000800U 
                                                       == this->__PVT__m_op_type)
                                                       ? "set"s
                                                       : ""s)))))));
    ++(vlSymsp->__Vcoverage[9831]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ &get_op_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_type\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__verbosity;
    __Vfunc_uvm_report_enabled__21__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__21__severity;
    __Vfunc_uvm_report_enabled__21__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__25__verbosity;
    __Vtask_uvm_report_error__25__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__25__line;
    __Vtask_uvm_report_error__25__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__25__report_enabled_checked;
    __Vtask_uvm_report_error__25__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    get_op_type__Vfuncrtn = 0U;
    if (this->__PVT__m_is_set) {
        get_op_type__Vfuncrtn = this->__PVT__m_op_type;
    } else {
        this->__Vfunc_uvm_report_enabled__21__id = "UVM/FIELD_OP/GET_OP_TYPE"s;
        __Vfunc_uvm_report_enabled__21__severity = 2U;
        __Vfunc_uvm_report_enabled__21__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__22__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__23__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__21__verbosity, (IData)(__Vfunc_uvm_report_enabled__21__severity), this->__Vfunc_uvm_report_enabled__21__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__25__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__25__context_name = ""s;
            __Vtask_uvm_report_error__25__line = 0x00000078U;
            this->__Vtask_uvm_report_error__25__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__25__verbosity = 0U;
            this->__Vtask_uvm_report_error__25__message = "Calling get_op_type() before calling set() is not allowed"s;
            this->__Vtask_uvm_report_error__25__id = "UVM/FIELD_OP/GET_OP_TYPE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__27__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__25__id, this->__Vtask_uvm_report_error__25__message, __Vtask_uvm_report_error__25__verbosity, this->__Vtask_uvm_report_error__25__filename, __Vtask_uvm_report_error__25__line, this->__Vtask_uvm_report_error__25__context_name, (IData)(__Vtask_uvm_report_error__25__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[9832]);
        } else {
            ++(vlSymsp->__Vcoverage[9833]);
        }
        ++(vlSymsp->__Vcoverage[9835]);
    }
    ++(vlSymsp->__Vcoverage[9836]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_policy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_policy> &get_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_policy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__33__verbosity;
    __Vtask_uvm_report_error__33__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__33__line;
    __Vtask_uvm_report_error__33__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__33__report_enabled_checked;
    __Vtask_uvm_report_error__33__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if (this->__PVT__m_is_set) {
        get_policy__Vfuncrtn = this->__PVT__m_policy;
    } else {
        this->__Vfunc_uvm_report_enabled__29__id = "UVM/FIELD_OP/GET_POLICY"s;
        __Vfunc_uvm_report_enabled__29__severity = 2U;
        __Vfunc_uvm_report_enabled__29__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__30__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__31__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), this->__Vfunc_uvm_report_enabled__29__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__33__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__33__context_name = ""s;
            __Vtask_uvm_report_error__33__line = 0x00000081U;
            this->__Vtask_uvm_report_error__33__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__33__verbosity = 0U;
            this->__Vtask_uvm_report_error__33__message = "Attempting to call get_policy() before calling set() is not allowed"s;
            this->__Vtask_uvm_report_error__33__id = "UVM/FIELD_OP/GET_POLICY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__34__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__35__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__33__id, this->__Vtask_uvm_report_error__33__message, __Vtask_uvm_report_error__33__verbosity, this->__Vtask_uvm_report_error__33__filename, __Vtask_uvm_report_error__33__line, this->__Vtask_uvm_report_error__33__context_name, (IData)(__Vtask_uvm_report_error__33__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[9837]);
        } else {
            ++(vlSymsp->__Vcoverage[9838]);
        }
        ++(vlSymsp->__Vcoverage[9840]);
    }
    ++(vlSymsp->__Vcoverage[9841]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_rhs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_rhs\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__verbosity;
    __Vfunc_uvm_report_enabled__37__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__37__severity;
    __Vfunc_uvm_report_enabled__37__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__41__verbosity;
    __Vtask_uvm_report_error__41__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__41__line;
    __Vtask_uvm_report_error__41__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__41__report_enabled_checked;
    __Vtask_uvm_report_error__41__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if (this->__PVT__m_is_set) {
        get_rhs__Vfuncrtn = this->__PVT__m_object;
    } else {
        this->__Vfunc_uvm_report_enabled__37__id = "UVM/FIELD_OP/GET_RHS"s;
        __Vfunc_uvm_report_enabled__37__severity = 2U;
        __Vfunc_uvm_report_enabled__37__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__38__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__39__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__37__verbosity, (IData)(__Vfunc_uvm_report_enabled__37__severity), this->__Vfunc_uvm_report_enabled__37__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__41__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__41__context_name = ""s;
            __Vtask_uvm_report_error__41__line = 0x00000089U;
            this->__Vtask_uvm_report_error__41__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__41__verbosity = 0U;
            this->__Vtask_uvm_report_error__41__message = "Calling get_rhs() before calling set() is not allowed"s;
            this->__Vtask_uvm_report_error__41__id = "UVM/FIELD_OP/GET_RHS"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__42__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__43__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__41__id, this->__Vtask_uvm_report_error__41__message, __Vtask_uvm_report_error__41__verbosity, this->__Vtask_uvm_report_error__41__filename, __Vtask_uvm_report_error__41__line, this->__Vtask_uvm_report_error__41__context_name, (IData)(__Vtask_uvm_report_error__41__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[9842]);
        } else {
            ++(vlSymsp->__Vcoverage[9843]);
        }
        ++(vlSymsp->__Vcoverage[9845]);
    }
    ++(vlSymsp->__Vcoverage[9846]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_user_hook_enabled(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &user_hook_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_user_hook_enabled\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__verbosity;
    __Vfunc_uvm_report_enabled__45__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__45__severity;
    __Vfunc_uvm_report_enabled__45__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__49__verbosity;
    __Vtask_uvm_report_error__49__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__49__line;
    __Vtask_uvm_report_error__49__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__49__report_enabled_checked;
    __Vtask_uvm_report_error__49__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    user_hook_enabled__Vfuncrtn = 0U;
    if (this->__PVT__m_is_set) {
        user_hook_enabled__Vfuncrtn = this->__PVT__m_user_hook;
    } else {
        this->__Vfunc_uvm_report_enabled__45__id = "UVM/FIELD_OP/GET_USER_HOOK"s;
        __Vfunc_uvm_report_enabled__45__severity = 2U;
        __Vfunc_uvm_report_enabled__45__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__46__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__47__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__45__verbosity, (IData)(__Vfunc_uvm_report_enabled__45__severity), this->__Vfunc_uvm_report_enabled__45__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__49__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__49__context_name = ""s;
            __Vtask_uvm_report_error__49__line = 0x00000091U;
            this->__Vtask_uvm_report_error__49__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__49__verbosity = 0U;
            this->__Vtask_uvm_report_error__49__message = "Attempting to get_user_hook before calling set() is not allowed"s;
            this->__Vtask_uvm_report_error__49__id = "UVM/FIELD_OP/GET_USER_HOOK"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__50__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__49__id, this->__Vtask_uvm_report_error__49__message, __Vtask_uvm_report_error__49__verbosity, this->__Vtask_uvm_report_error__49__filename, __Vtask_uvm_report_error__49__line, this->__Vtask_uvm_report_error__49__context_name, (IData)(__Vtask_uvm_report_error__49__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[9847]);
        } else {
            ++(vlSymsp->__Vcoverage[9848]);
        }
        ++(vlSymsp->__Vcoverage[9850]);
    }
    ++(vlSymsp->__Vcoverage[9851]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_disable_user_hook(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_disable_user_hook\n"); );
    // Body
    this->__PVT__m_user_hook = 0U;
    ++(vlSymsp->__Vcoverage[9852]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_flush(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__m_policy = VlNull{};
    this->__PVT__m_object = VlNull{};
    this->__PVT__m_user_hook = 1U;
    this->__PVT__m_is_set = 0U;
    ++(vlSymsp->__Vcoverage[9853]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_m_recycle(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_m_recycle\n"); );
    // Body
    this->__VnoInFunc_flush(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__PVT__m_recycled_op.push_back(
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op>{this});
    ++(vlSymsp->__Vcoverage[9854]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_field_op::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_user_hook = 0;
    __PVT__m_is_set = 0;
    __PVT__m_op_type = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_field_op::~Vtb_rng_uvm_pkg__03a__03auvm_field_op() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_field_op::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_field_op::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_field_op::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_policy:" + VL_TO_STRING(__PVT__m_policy);
    out += ", m_user_hook:" + VL_TO_STRING(__PVT__m_user_hook);
    out += ", m_object:" + VL_TO_STRING(__PVT__m_object);
    out += ", m_is_set:" + VL_TO_STRING(__PVT__m_is_set);
    out += ", m_op_type:" + VL_TO_STRING(__PVT__m_op_type);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
