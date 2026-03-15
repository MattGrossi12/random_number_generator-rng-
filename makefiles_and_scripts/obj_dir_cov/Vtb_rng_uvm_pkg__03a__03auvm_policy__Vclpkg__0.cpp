// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_policy::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[9552]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__m_policy_stack.clear();
    ++(vlSymsp->__Vcoverage[9553]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_extension_exists(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> ext_type, CData/*0:0*/ &extension_exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_extension_exists\n"); );
    // Body
    if (this->__PVT__m_extensions.exists(ext_type)) {
        extension_exists__Vfuncrtn = 1U;
        ++(vlSymsp->__Vcoverage[9554]);
    } else {
        extension_exists__Vfuncrtn = 0U;
        ++(vlSymsp->__Vcoverage[9555]);
    }
    ++(vlSymsp->__Vcoverage[9556]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_set_extension(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &set_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_set_extension\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_3__get_object_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_2__get_object_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_1__get_object_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_0__get_object_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> m_set_extension;
    if ((VlNull{} == extension)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NULLEXT"s, "Attempting to set  null extension "s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[9557]);
    } else {
        ++(vlSymsp->__Vcoverage[9558]);
    }
    VL_NULL_CHECK(extension, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_policy.svh", 96)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_0__get_object_type);
    if (this->__PVT__m_extensions.exists(__VlefCall_0__get_object_type)) {
        VL_NULL_CHECK(extension, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_policy.svh", 97)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_1__get_object_type);
        m_set_extension = this->__PVT__m_extensions
            .at(__VlefCall_1__get_object_type);
        VL_NULL_CHECK(extension, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_policy.svh", 98)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_2__get_object_type);
        this->__PVT__m_extensions.at(__VlefCall_2__get_object_type) 
            = extension;
        set_extension__Vfuncrtn = m_set_extension;
    } else {
        VL_NULL_CHECK(extension, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_policy.svh", 103)->__VnoInFunc_get_object_type(vlSymsp, __VlefCall_3__get_object_type);
        this->__PVT__m_extensions.at(__VlefCall_3__get_object_type) 
            = extension;
        set_extension__Vfuncrtn = VlNull{};
    }
    ++(vlSymsp->__Vcoverage[9561]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_extension(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> ext_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &get_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_extension\n"); );
    // Body
    if (this->__PVT__m_extensions.exists(ext_type)) {
        get_extension__Vfuncrtn = this->__PVT__m_extensions
            .at(ext_type);
    } else {
        get_extension__Vfuncrtn = VlNull{};
    }
    ++(vlSymsp->__Vcoverage[9564]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_clear_extension(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> ext_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_clear_extension\n"); );
    // Body
    this->__PVT__m_extensions.erase(ext_type);
    ++(vlSymsp->__Vcoverage[9565]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_clear_extensions(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_clear_extensions\n"); );
    // Body
    this->__PVT__m_extensions.clear();
    ++(vlSymsp->__Vcoverage[9566]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_push_active_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_push_active_object\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__10__verbosity;
    __Vtask_uvm_report_error__10__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__10__line;
    __Vtask_uvm_report_error__10__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__10__report_enabled_checked;
    __Vtask_uvm_report_error__10__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((VlNull{} != obj)) {
        this->__PVT__m_policy_stack.push_front(obj);
        ++(vlSymsp->__Vcoverage[9569]);
    } else {
        this->__Vfunc_uvm_report_enabled__6__id = "UVM_POLICY_PUSHNULL"s;
        __Vfunc_uvm_report_enabled__6__severity = 2U;
        __Vfunc_uvm_report_enabled__6__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), this->__Vfunc_uvm_report_enabled__6__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__10__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__10__context_name = ""s;
            __Vtask_uvm_report_error__10__line = 0x00000097U;
            this->__Vtask_uvm_report_error__10__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_policy.svh"s;
            __Vtask_uvm_report_error__10__verbosity = 0U;
            this->__Vtask_uvm_report_error__10__message = "Attempting to push an null object push_active_object onto the policy stack"s;
            this->__Vtask_uvm_report_error__10__id = "UVM_POLICY_PUSHNULL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__10__id, this->__Vtask_uvm_report_error__10__message, __Vtask_uvm_report_error__10__verbosity, this->__Vtask_uvm_report_error__10__filename, __Vtask_uvm_report_error__10__line, this->__Vtask_uvm_report_error__10__context_name, (IData)(__Vtask_uvm_report_error__10__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[9567]);
        } else {
            ++(vlSymsp->__Vcoverage[9568]);
        }
        ++(vlSymsp->__Vcoverage[9570]);
    }
    ++(vlSymsp->__Vcoverage[9571]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_pop_active_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &pop_active_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_pop_active_object\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__18__verbosity;
    __Vtask_uvm_report_info__18__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__18__line;
    __Vtask_uvm_report_info__18__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__18__report_enabled_checked;
    __Vtask_uvm_report_info__18__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> m_tmp;
    if ((0U != this->__PVT__m_policy_stack.size())) {
        m_tmp = this->__PVT__m_policy_stack.pop_front();
        pop_active_object__Vfuncrtn = m_tmp;
    } else {
        this->__Vfunc_uvm_report_enabled__14__id = "UVM_POLICY_EMPTY_POPACTIVE_OBJECT"s;
        __Vfunc_uvm_report_enabled__14__severity = 0U;
        __Vfunc_uvm_report_enabled__14__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__16__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), this->__Vfunc_uvm_report_enabled__14__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_info__18__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__18__context_name = ""s;
            __Vtask_uvm_report_info__18__line = 0x000000a7U;
            this->__Vtask_uvm_report_info__18__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_policy.svh"s;
            __Vtask_uvm_report_info__18__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__18__message = "Attempting to pop an empty policy stack"s;
            this->__Vtask_uvm_report_info__18__id = "UVM_POLICY_EMPTY_POPACTIVE_OBJECT"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__18__id, this->__Vtask_uvm_report_info__18__message, __Vtask_uvm_report_info__18__verbosity, this->__Vtask_uvm_report_info__18__filename, __Vtask_uvm_report_info__18__line, this->__Vtask_uvm_report_info__18__context_name, (IData)(__Vtask_uvm_report_info__18__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[435]);
            ++(vlSymsp->__Vcoverage[9572]);
        } else {
            ++(vlSymsp->__Vcoverage[9573]);
        }
        ++(vlSymsp->__Vcoverage[9575]);
    }
    ++(vlSymsp->__Vcoverage[9576]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &get_active_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object\n"); );
    // Body
    if ((0U != this->__PVT__m_policy_stack.size())) {
        get_active_object__Vfuncrtn = this->__PVT__m_policy_stack.at(0U);
    } else {
        ++(vlSymsp->__Vcoverage[9578]);
    }
    ++(vlSymsp->__Vcoverage[9579]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_active_object_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object_depth\n"); );
    // Body
    get_active_object_depth__Vfuncrtn = this->__PVT__m_policy_stack.size();
    ++(vlSymsp->__Vcoverage[9580]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_policy::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_policy::~Vtb_rng_uvm_pkg__03a__03auvm_policy() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_policy::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_policy::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_policy::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_extensions:" + VL_TO_STRING(__PVT__m_extensions);
    out += ", m_policy_stack:" + VL_TO_STRING(__PVT__m_policy_stack);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
