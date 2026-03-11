// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

std::string VL_TO_STRING(const Vtb_rng_m_inst_typename_alias_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_default_factory__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{orig:" + VL_TO_STRING(obj.__PVT__orig);
    out += ", alias_type_name:" + VL_TO_STRING(obj.__PVT__alias_type_name);
    out += ", full_inst_path:" + VL_TO_STRING(obj.__PVT__full_inst_path);
    out += "}";
    return (out);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::init(Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_factory::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[887]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_register(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_register\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__6__verbosity;
    __Vtask_uvm_report_warning__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__line;
    __Vtask_uvm_report_warning__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__6__report_enabled_checked;
    __Vtask_uvm_report_warning__6__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__14__verbosity;
    __Vtask_uvm_report_warning__14__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__14__line;
    __Vtask_uvm_report_warning__14__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__14__report_enabled_checked;
    __Vtask_uvm_report_warning__14__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    // Body
    CData/*0:0*/ __VlefCall_13__m_matches_type_pair;
    std::string __VlefCall_12__get_type_name;
    CData/*0:0*/ __VlefCall_11__m_matches_type_pair;
    std::string __VlefCall_10__get_type_name;
    std::string __VlefCall_9__get_type_name;
    CData/*0:0*/ __VlefLogAnd_8;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_type_name;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_type_name;
    CData/*0:0*/ __VlefLogAnd_2;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>> unnamedblk13__DOT__overrides;
    IData/*31:0*/ unnamedblk13__DOT__unnamedblk14__DOT__index;
    unnamedblk13__DOT__unnamedblk14__DOT__index = 0;
    if ((VlNull{} == obj)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NULLWR"s, "Attempting to register a null object with the factory"s, 0U, ""s, 0U, ""s, 0U);
        ++(vlSymsp->__Vcoverage[888]);
    } else {
        ++(vlSymsp->__Vcoverage[889]);
    }
    VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1042)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    __VlefLogAnd_2 = (""s != __VlefCall_0__get_type_name);
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1042)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        __VlefLogAnd_2 = ("<unknown>"s != __VlefCall_1__get_type_name);
    }
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1043)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        if (this->__PVT__m_type_names.exists(__VlefCall_3__get_type_name)) {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1044)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            __Vtask_uvm_report_warning__6__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__6__context_name = ""s;
            __Vtask_uvm_report_warning__6__line = 0U;
            this->__Vtask_uvm_report_warning__6__filename = ""s;
            __Vtask_uvm_report_warning__6__verbosity = 0U;
            this->__Vtask_uvm_report_warning__6__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN("Type name '"s, __VlefCall_4__get_type_name), "' already registered with factory. No string-based lookup "s), "support for multiple types with the same type name."s));
            this->__Vtask_uvm_report_warning__6__id = "TPRGED"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__6__id, this->__Vtask_uvm_report_warning__6__message, __Vtask_uvm_report_warning__6__verbosity, this->__Vtask_uvm_report_warning__6__filename, __Vtask_uvm_report_warning__6__line, this->__Vtask_uvm_report_warning__6__context_name, (IData)(__Vtask_uvm_report_warning__6__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[890]);
        } else {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1048)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
            this->__PVT__m_type_names.at(__VlefCall_5__get_type_name) 
                = obj;
            ++(vlSymsp->__Vcoverage[891]);
        }
        ++(vlSymsp->__Vcoverage[892]);
    } else {
        ++(vlSymsp->__Vcoverage[893]);
    }
    if (this->__PVT__m_types.exists(obj)) {
        VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1052)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
        __VlefLogAnd_8 = (""s != __VlefCall_6__get_type_name);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1052)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
            __VlefLogAnd_8 = ("<unknown>"s != __VlefCall_7__get_type_name);
        }
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1053)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
            __Vtask_uvm_report_warning__14__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__14__context_name = ""s;
            __Vtask_uvm_report_warning__14__line = 0U;
            this->__Vtask_uvm_report_warning__14__filename = ""s;
            __Vtask_uvm_report_warning__14__verbosity = 0U;
            this->__Vtask_uvm_report_warning__14__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Object type '"s, __VlefCall_9__get_type_name), "' already registered with factory. "s));
            this->__Vtask_uvm_report_warning__14__id = "TPRGED"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__14__id, this->__Vtask_uvm_report_warning__14__message, __Vtask_uvm_report_warning__14__verbosity, this->__Vtask_uvm_report_warning__14__filename, __Vtask_uvm_report_warning__14__line, this->__Vtask_uvm_report_warning__14__context_name, (IData)(__Vtask_uvm_report_warning__14__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[894]);
        } else {
            ++(vlSymsp->__Vcoverage[895]);
        }
        ++(vlSymsp->__Vcoverage[901]);
    } else {
        unnamedblk13__DOT__overrides.clear();
        this->__PVT__m_types.at(obj) = 1U;
        unnamedblk13__DOT__overrides = VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>>::consCC(this->__PVT__m_inst_overrides, 
                                                                                this->__PVT__m_type_overrides);
        unnamedblk13__DOT__unnamedblk14__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk13__DOT__unnamedblk14__DOT__index, unnamedblk13__DOT__overrides.size())) {
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1067)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
            this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk13__DOT__overrides.at(unnamedblk13__DOT__unnamedblk14__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1065)
                                                  ->__PVT__orig, VlNull{}, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name), __VlefCall_11__m_matches_type_pair);
            if (__VlefCall_11__m_matches_type_pair) {
                VL_NULL_CHECK(unnamedblk13__DOT__overrides.atWriteAppend(unnamedblk13__DOT__unnamedblk14__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1068)->__PVT__orig.__PVT__m_type 
                    = obj;
                ++(vlSymsp->__Vcoverage[896]);
            } else {
                ++(vlSymsp->__Vcoverage[897]);
            }
            VL_NULL_CHECK(obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1072)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
            this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk13__DOT__overrides.at(unnamedblk13__DOT__unnamedblk14__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1070)
                                                  ->__PVT__ovrd, VlNull{}, 
                                                  VL_CVT_PACK_STR_NN(__VlefCall_12__get_type_name), __VlefCall_13__m_matches_type_pair);
            if (__VlefCall_13__m_matches_type_pair) {
                VL_NULL_CHECK(unnamedblk13__DOT__overrides.atWriteAppend(unnamedblk13__DOT__unnamedblk14__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1073)->__PVT__ovrd.__PVT__m_type 
                    = obj;
                ++(vlSymsp->__Vcoverage[898]);
            } else {
                ++(vlSymsp->__Vcoverage[899]);
            }
            unnamedblk13__DOT__unnamedblk14__DOT__index 
                = ((IData)(1U) + unnamedblk13__DOT__unnamedblk14__DOT__index);
            ++(vlSymsp->__Vcoverage[900]);
        }
        ++(vlSymsp->__Vcoverage[902]);
    }
    ++(vlSymsp->__Vcoverage[903]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__24__verbosity;
    __Vtask_uvm_report_warning__24__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__24__line;
    __Vtask_uvm_report_warning__24__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__24__report_enabled_checked;
    __Vtask_uvm_report_warning__24__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__29__verbosity;
    __Vtask_uvm_report_warning__29__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__29__line;
    __Vtask_uvm_report_warning__29__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__29__report_enabled_checked;
    __Vtask_uvm_report_warning__29__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__38__verbosity;
    __Vtask_uvm_report_info__38__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__38__line;
    __Vtask_uvm_report_info__38__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__38__report_enabled_checked;
    __Vtask_uvm_report_info__38__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__43__verbosity;
    __Vtask_uvm_report_info__43__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__43__line;
    __Vtask_uvm_report_info__43__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__43__report_enabled_checked;
    __Vtask_uvm_report_info__43__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_11__get_type_name;
    std::string __VlefCall_10__get_type_name;
    std::string __VlefCall_9__get_type_name;
    std::string __VlefCall_8__get_type_name;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_type_name;
    CData/*0:0*/ __VlefCall_5__m_matches_type_override;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_type_name;
    CData/*0:0*/ __VlefLogOr_2;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk15__DOT__index;
    unnamedblk15__DOT__index = 0;
    std::string unnamedblk15__DOT__unnamedblk16__DOT__msg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> unnamedblk17__DOT__override;
    CData/*0:0*/ replaced;
    {
        replaced = 0U;
        if ((original_type == override_type)) {
            VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1091)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            __VlefLogOr_2 = (""s == __VlefCall_0__get_type_name);
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1091)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
                __VlefLogOr_2 = ("<unknown>"s == __VlefCall_1__get_type_name);
            }
            if (__VlefLogOr_2) {
                __Vtask_uvm_report_warning__24__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__24__context_name = ""s;
                __Vtask_uvm_report_warning__24__line = 0U;
                this->__Vtask_uvm_report_warning__24__filename = ""s;
                __Vtask_uvm_report_warning__24__verbosity = 0U;
                this->__Vtask_uvm_report_warning__24__message = "Original and override type arguments are identical"s;
                this->__Vtask_uvm_report_warning__24__id = "TYPDUP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__25__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__26__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__24__id, this->__Vtask_uvm_report_warning__24__message, __Vtask_uvm_report_warning__24__verbosity, this->__Vtask_uvm_report_warning__24__filename, __Vtask_uvm_report_warning__24__line, this->__Vtask_uvm_report_warning__24__context_name, (IData)(__Vtask_uvm_report_warning__24__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[904]);
            } else {
                VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1097)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
                __Vtask_uvm_report_warning__29__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__29__context_name = ""s;
                __Vtask_uvm_report_warning__29__line = 0U;
                this->__Vtask_uvm_report_warning__29__filename = ""s;
                __Vtask_uvm_report_warning__29__verbosity = 0U;
                this->__Vtask_uvm_report_warning__29__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Original and override type arguments are identical: "s, __VlefCall_3__get_type_name));
                this->__Vtask_uvm_report_warning__29__id = "TYPDUP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__30__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__29__id, this->__Vtask_uvm_report_warning__29__message, __Vtask_uvm_report_warning__29__verbosity, this->__Vtask_uvm_report_warning__29__filename, __Vtask_uvm_report_warning__29__line, this->__Vtask_uvm_report_warning__29__context_name, (IData)(__Vtask_uvm_report_warning__29__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[905]);
            }
            ++(vlSymsp->__Vcoverage[906]);
        } else {
            ++(vlSymsp->__Vcoverage[907]);
        }
        if (this->__PVT__m_types.exists(original_type)) {
            ++(vlSymsp->__Vcoverage[909]);
        } else {
            this->__VnoInFunc_register(vlProcess, vlSymsp, original_type);
            ++(vlSymsp->__Vcoverage[908]);
        }
        if (this->__PVT__m_types.exists(override_type)) {
            ++(vlSymsp->__Vcoverage[911]);
        } else {
            this->__VnoInFunc_register(vlProcess, vlSymsp, override_type);
            ++(vlSymsp->__Vcoverage[910]);
        }
        {
            unnamedblk15__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk15__DOT__index, this->__PVT__m_type_overrides.size())) {
                VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1112)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
                this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk15__DOT__index), original_type, 
                                                          VL_CVT_PACK_STR_NN(__VlefCall_4__get_type_name), ""s, 1U, 0U, __VlefCall_5__m_matches_type_override);
                if (__VlefCall_5__m_matches_type_override) {
                    unnamedblk15__DOT__unnamedblk16__DOT__msg = ""s;
                    VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1114)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                    unnamedblk15__DOT__unnamedblk16__DOT__msg 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Original object type '"s, __VlefCall_6__get_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk15__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1116)
                                                        ->__PVT__ovrd
                                                        .__PVT__m_type_name), "'"s);
                    if (replace) {
                        ++(vlSymsp->__Vcoverage[913]);
                    } else {
                        unnamedblk15__DOT__unnamedblk16__DOT__msg 
                            = VL_CONCATN_NNN(unnamedblk15__DOT__unnamedblk16__DOT__msg, ".  Set 'replace' argument to replace the existing entry."s);
                        __Vtask_uvm_report_info__38__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report_info__38__context_name = ""s;
                        __Vtask_uvm_report_info__38__line = 0U;
                        this->__Vtask_uvm_report_info__38__filename = ""s;
                        __Vtask_uvm_report_info__38__verbosity = 0x000000c8U;
                        this->__Vtask_uvm_report_info__38__message 
                            = unnamedblk15__DOT__unnamedblk16__DOT__msg;
                        this->__Vtask_uvm_report_info__38__id = "TPREGD"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__39__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__40__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__38__id, this->__Vtask_uvm_report_info__38__message, __Vtask_uvm_report_info__38__verbosity, this->__Vtask_uvm_report_info__38__filename, __Vtask_uvm_report_info__38__line, this->__Vtask_uvm_report_info__38__context_name, (IData)(__Vtask_uvm_report_info__38__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[440]);
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(override_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1123)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
                    unnamedblk15__DOT__unnamedblk16__DOT__msg 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(unnamedblk15__DOT__unnamedblk16__DOT__msg, ".  Replacing with override to produce type '"s), __VlefCall_7__get_type_name), "'."s);
                    __Vtask_uvm_report_info__43__report_enabled_checked = 0U;
                    this->__Vtask_uvm_report_info__43__context_name = ""s;
                    __Vtask_uvm_report_info__43__line = 0U;
                    this->__Vtask_uvm_report_info__43__filename = ""s;
                    __Vtask_uvm_report_info__43__verbosity = 0x000000c8U;
                    this->__Vtask_uvm_report_info__43__message 
                        = unnamedblk15__DOT__unnamedblk16__DOT__msg;
                    this->__Vtask_uvm_report_info__43__id = "TPREGR"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__44__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__45__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__43__id, this->__Vtask_uvm_report_info__43__message, __Vtask_uvm_report_info__43__verbosity, this->__Vtask_uvm_report_info__43__filename, __Vtask_uvm_report_info__43__line, this->__Vtask_uvm_report_info__43__context_name, (IData)(__Vtask_uvm_report_info__43__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    replaced = 1U;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1126)->__PVT__orig.__PVT__m_type 
                        = original_type;
                    VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1127)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1127)->__PVT__orig.__PVT__m_type_name 
                        = __VlefCall_8__get_type_name;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1128)->__PVT__ovrd.__PVT__m_type 
                        = override_type;
                    VL_NULL_CHECK(override_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1129)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1129)->__PVT__ovrd.__PVT__m_type_name 
                        = __VlefCall_9__get_type_name;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk15__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1130)->__PVT__replace 
                        = replace;
                    if ((1U & (~ (IData)(replace)))) {
                        ++(vlSymsp->__Vcoverage[914]);
                    }
                    if (replace) {
                        ++(vlSymsp->__Vcoverage[915]);
                    }
                    ++(vlSymsp->__Vcoverage[918]);
                } else if ((VlNull{} == VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk15__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1132)
                            ->__PVT__orig.__PVT__m_type)) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[917]);
                }
                unnamedblk15__DOT__index = ((IData)(1U) 
                                            + unnamedblk15__DOT__index);
                ++(vlSymsp->__Vcoverage[919]);
            }
            __Vlabel1: ;
        }
        if (replaced) {
            ++(vlSymsp->__Vcoverage[921]);
        } else {
            VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1144)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
            VL_NULL_CHECK(override_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1146)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
            unnamedblk17__DOT__override = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_factory_override, vlSymsp, ""s, 
                                                 VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name), original_type, override_type, 
                                                 VL_CVT_PACK_STR_NN(__VlefCall_11__get_type_name), (IData)(replace));
            this->__PVT__m_type_overrides.push_front(unnamedblk17__DOT__override);
            ++(vlSymsp->__Vcoverage[920]);
        }
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(replaced)))) {
        ++(vlSymsp->__Vcoverage[922]);
    }
    if (replaced) {
        ++(vlSymsp->__Vcoverage[923]);
    }
    ++(vlSymsp->__Vcoverage[924]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__52__verbosity;
    __Vtask_uvm_report_warning__52__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__52__line;
    __Vtask_uvm_report_warning__52__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__52__report_enabled_checked;
    __Vtask_uvm_report_warning__52__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__53__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__54__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__57__verbosity;
    __Vtask_uvm_report_info__57__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__57__line;
    __Vtask_uvm_report_info__57__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__57__report_enabled_checked;
    __Vtask_uvm_report_info__57__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__61__verbosity;
    __Vtask_uvm_report_info__61__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__61__line;
    __Vtask_uvm_report_info__61__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__61__report_enabled_checked;
    __Vtask_uvm_report_info__61__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__62__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__63__Vfuncout;
    // Body
    CData/*0:0*/ __VlefCall_0__m_matches_type_override;
    IData/*31:0*/ unnamedblk18__DOT__index;
    unnamedblk18__DOT__index = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> unnamedblk19__DOT__override;
    CData/*0:0*/ replaced;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type;
    {
        replaced = 0U;
        if (this->__PVT__m_type_names.exists(original_type_name)) {
            original_type = this->__PVT__m_type_names
                .at(original_type_name);
            ++(vlSymsp->__Vcoverage[925]);
        } else {
            ++(vlSymsp->__Vcoverage[926]);
        }
        if (this->__PVT__m_type_names.exists(override_type_name)) {
            override_type = this->__PVT__m_type_names
                .at(override_type_name);
            ++(vlSymsp->__Vcoverage[927]);
        } else {
            ++(vlSymsp->__Vcoverage[928]);
        }
        if ((original_type_name == override_type_name)) {
            __Vtask_uvm_report_warning__52__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__52__context_name = ""s;
            __Vtask_uvm_report_warning__52__line = 0U;
            this->__Vtask_uvm_report_warning__52__filename = ""s;
            __Vtask_uvm_report_warning__52__verbosity = 0U;
            this->__Vtask_uvm_report_warning__52__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Requested and actual type name  arguments are identical: "s, original_type_name), ". Ignoring this override."s));
            this->__Vtask_uvm_report_warning__52__id = "TYPDUP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__53__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__53__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__54__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__54__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__52__id, this->__Vtask_uvm_report_warning__52__message, __Vtask_uvm_report_warning__52__verbosity, this->__Vtask_uvm_report_warning__52__filename, __Vtask_uvm_report_warning__52__line, this->__Vtask_uvm_report_warning__52__context_name, (IData)(__Vtask_uvm_report_warning__52__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[930]);
        }
        {
            unnamedblk18__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk18__DOT__index, this->__PVT__m_type_overrides.size())) {
                this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), original_type, original_type_name, ""s, 1U, 0U, __VlefCall_0__m_matches_type_override);
                if (__VlefCall_0__m_matches_type_override) {
                    if (replace) {
                        ++(vlSymsp->__Vcoverage[932]);
                    } else {
                        __Vtask_uvm_report_info__57__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report_info__57__context_name = ""s;
                        __Vtask_uvm_report_info__57__line = 0U;
                        this->__Vtask_uvm_report_info__57__filename = ""s;
                        __Vtask_uvm_report_info__57__verbosity = 0x000000c8U;
                        this->__Vtask_uvm_report_info__57__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Original type '"s, original_type_name), "'/'"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1196)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1197)
                                                                               ->__PVT__ovrd
                                                                               .__PVT__m_type_name), "'.  Set 'replace' argument to replace the existing entry."s));
                        this->__Vtask_uvm_report_info__57__id = "TPREGD"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__58__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__58__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__59__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__59__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__57__id, this->__Vtask_uvm_report_info__57__message, __Vtask_uvm_report_info__57__verbosity, this->__Vtask_uvm_report_info__57__filename, __Vtask_uvm_report_info__57__line, this->__Vtask_uvm_report_info__57__context_name, (IData)(__Vtask_uvm_report_info__57__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[440]);
                        goto __Vlabel0;
                    }
                    __Vtask_uvm_report_info__61__report_enabled_checked = 0U;
                    this->__Vtask_uvm_report_info__61__context_name = ""s;
                    __Vtask_uvm_report_info__61__line = 0U;
                    this->__Vtask_uvm_report_info__61__filename = ""s;
                    __Vtask_uvm_report_info__61__verbosity = 0x000000c8U;
                    this->__Vtask_uvm_report_info__61__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Original object type '"s, original_type_name), "'/'"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1201)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1202)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), "'.  Replacing with override to produce type '"s), override_type_name), "'."s));
                    this->__Vtask_uvm_report_info__61__id = "TPREGR"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__62__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__63__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__63__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__61__id, this->__Vtask_uvm_report_info__61__message, __Vtask_uvm_report_info__61__verbosity, this->__Vtask_uvm_report_info__61__filename, __Vtask_uvm_report_info__61__line, this->__Vtask_uvm_report_info__61__context_name, (IData)(__Vtask_uvm_report_info__61__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[440]);
                    replaced = 1U;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk18__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1205)->__PVT__ovrd.__PVT__m_type 
                        = override_type;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk18__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1206)->__PVT__ovrd.__PVT__m_type_name 
                        = override_type_name;
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk18__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1207)->__PVT__replace 
                        = replace;
                    if ((1U & (~ (IData)(replace)))) {
                        ++(vlSymsp->__Vcoverage[933]);
                    }
                    if (replace) {
                        ++(vlSymsp->__Vcoverage[934]);
                    }
                    ++(vlSymsp->__Vcoverage[937]);
                } else if (((VlNull{} == VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk18__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1209)
                             ->__PVT__orig.__PVT__m_type) 
                            || (VlNull{} == original_type))) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[936]);
                }
                unnamedblk18__DOT__index = ((IData)(1U) 
                                            + unnamedblk18__DOT__index);
                ++(vlSymsp->__Vcoverage[938]);
            }
            __Vlabel1: ;
        }
        if ((VlNull{} == original_type)) {
            this->__PVT__m_lookup_strs.at(original_type_name) = 1U;
            ++(vlSymsp->__Vcoverage[939]);
        } else {
            ++(vlSymsp->__Vcoverage[940]);
        }
        if (replaced) {
            ++(vlSymsp->__Vcoverage[942]);
        } else {
            unnamedblk19__DOT__override = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_factory_override, vlSymsp, ""s, original_type_name, original_type, override_type, override_type_name, (IData)(replace));
            this->__PVT__m_type_overrides.push_front(unnamedblk19__DOT__override);
            ++(vlSymsp->__Vcoverage[941]);
        }
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(replaced)))) {
        ++(vlSymsp->__Vcoverage[943]);
    }
    if (replaced) {
        ++(vlSymsp->__Vcoverage[944]);
    }
    ++(vlSymsp->__Vcoverage[945]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string original_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string override_type_name, std::string full_inst_path, CData/*0:0*/ &check_inst_override_exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_check_inst_override_exists\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__66__verbosity;
    __Vtask_uvm_report_info__66__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__66__line;
    __Vtask_uvm_report_info__66__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__66__report_enabled_checked;
    __Vtask_uvm_report_info__66__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk20__DOT__i;
    unnamedblk20__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    {
        check_inst_override_exists__Vfuncrtn = 0U;
        unnamedblk20__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk20__DOT__i, this->__PVT__m_inst_overrides.size())) {
            __SYM__override = this->__PVT__m_inst_overrides.at(unnamedblk20__DOT__i);
            if ((((((VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1249)
                     ->__PVT__full_inst_path == full_inst_path) 
                    && (VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1250)
                        ->__PVT__orig.__PVT__m_type 
                        == original_type)) && (VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1251)
                                               ->__PVT__orig
                                               .__PVT__m_type_name 
                                               == original_type_name)) 
                  && (VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1252)
                      ->__PVT__ovrd.__PVT__m_type == override_type)) 
                 && (VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1253)
                     ->__PVT__ovrd.__PVT__m_type_name 
                     == override_type_name))) {
                __Vtask_uvm_report_info__66__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_info__66__context_name = ""s;
                __Vtask_uvm_report_info__66__line = 0U;
                this->__Vtask_uvm_report_info__66__filename = ""s;
                __Vtask_uvm_report_info__66__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__66__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Instance override for '"s, original_type_name), "' already exists: override type '"s), override_type_name), "' with full_inst_path '"s), full_inst_path), "'"s));
                this->__Vtask_uvm_report_info__66__id = "DUPOVRD"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__67__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__68__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__66__id, this->__Vtask_uvm_report_info__66__message, __Vtask_uvm_report_info__66__verbosity, this->__Vtask_uvm_report_info__66__filename, __Vtask_uvm_report_info__66__line, this->__Vtask_uvm_report_info__66__context_name, (IData)(__Vtask_uvm_report_info__66__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                check_inst_override_exists__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[947]);
            }
            unnamedblk20__DOT__i = ((IData)(1U) + unnamedblk20__DOT__i);
            ++(vlSymsp->__Vcoverage[948]);
        }
        check_inst_override_exists__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[949]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_type_name;
    CData/*0:0*/ __VlefCall_2__check_inst_override_exists;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    {
        if (this->__PVT__m_types.exists(original_type)) {
            ++(vlSymsp->__Vcoverage[951]);
        } else {
            this->__VnoInFunc_register(vlProcess, vlSymsp, original_type);
            ++(vlSymsp->__Vcoverage[950]);
        }
        if (this->__PVT__m_types.exists(override_type)) {
            ++(vlSymsp->__Vcoverage[953]);
        } else {
            this->__VnoInFunc_register(vlProcess, vlSymsp, override_type);
            ++(vlSymsp->__Vcoverage[952]);
        }
        VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1281)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        VL_NULL_CHECK(override_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1283)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_check_inst_override_exists(vlProcess, vlSymsp, original_type, 
                                                     VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), override_type, 
                                                     VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), full_inst_path, __VlefCall_2__check_inst_override_exists);
        if (__VlefCall_2__check_inst_override_exists) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[955]);
        }
        VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1292)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        VL_NULL_CHECK(override_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1294)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
        __SYM__override = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_factory_override, vlSymsp, full_inst_path, 
                                 VL_CVT_PACK_STR_NN(__VlefCall_3__get_type_name), original_type, override_type, 
                                 VL_CVT_PACK_STR_NN(__VlefCall_4__get_type_name), 0U);
        this->__PVT__m_inst_overrides.push_back(__SYM__override);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[956]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_name\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__check_inst_override_exists;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type;
    {
        if (this->__PVT__m_type_names.exists(original_type_name)) {
            original_type = this->__PVT__m_type_names
                .at(original_type_name);
            ++(vlSymsp->__Vcoverage[957]);
        } else {
            ++(vlSymsp->__Vcoverage[958]);
        }
        if (this->__PVT__m_type_names.exists(override_type_name)) {
            override_type = this->__PVT__m_type_names
                .at(override_type_name);
            ++(vlSymsp->__Vcoverage[959]);
        } else {
            ++(vlSymsp->__Vcoverage[960]);
        }
        if ((VlNull{} == original_type)) {
            this->__PVT__m_lookup_strs.at(original_type_name) = 1U;
            ++(vlSymsp->__Vcoverage[961]);
        } else {
            ++(vlSymsp->__Vcoverage[962]);
        }
        __SYM__override = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_factory_override, vlSymsp, full_inst_path, original_type_name, original_type, override_type, override_type_name, 0U);
        this->__VnoInFunc_check_inst_override_exists(vlProcess, vlSymsp, original_type, original_type_name, override_type, override_type_name, full_inst_path, __VlefCall_0__check_inst_override_exists);
        if (__VlefCall_0__check_inst_override_exists) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[964]);
        }
        this->__PVT__m_inst_overrides.push_back(__SYM__override);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[965]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_alias\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__84__verbosity;
    __Vtask_uvm_report_warning__84__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__84__line;
    __Vtask_uvm_report_warning__84__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__84__report_enabled_checked;
    __Vtask_uvm_report_warning__84__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__85__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__86__Vfuncout;
    // Body
    std::string __VlefCall_3__get_type_name;
    CData/*0:0*/ __VlefCall_2__m_matches_type_pair;
    CData/*0:0*/ __VlefCall_1__m_matches_type_pair;
    CData/*0:0*/ __VlefCall_0__is_type_registered;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>> unnamedblk21__DOT__overrides;
    IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__index;
    unnamedblk21__DOT__unnamedblk22__DOT__index = 0;
    this->__VnoInFunc_is_type_registered(vlSymsp, original_type, __VlefCall_0__is_type_registered);
    if (__VlefCall_0__is_type_registered) {
        if (this->__PVT__m_type_names.exists(alias_type_name)) {
            ++(vlSymsp->__Vcoverage[972]);
        } else {
            unnamedblk21__DOT__overrides.clear();
            this->__PVT__m_type_names.at(alias_type_name) 
                = original_type;
            unnamedblk21__DOT__overrides = VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>>::consCC(this->__PVT__m_inst_overrides, 
                                                                                this->__PVT__m_type_overrides);
            unnamedblk21__DOT__unnamedblk22__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk21__DOT__unnamedblk22__DOT__index, unnamedblk21__DOT__overrides.size())) {
                this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk21__DOT__overrides.at(unnamedblk21__DOT__unnamedblk22__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1366)
                                                      ->__PVT__orig, VlNull{}, alias_type_name, __VlefCall_1__m_matches_type_pair);
                if (__VlefCall_1__m_matches_type_pair) {
                    VL_NULL_CHECK(unnamedblk21__DOT__overrides.atWriteAppend(unnamedblk21__DOT__unnamedblk22__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1369)->__PVT__orig.__PVT__m_type 
                        = original_type;
                    ++(vlSymsp->__Vcoverage[966]);
                } else {
                    ++(vlSymsp->__Vcoverage[967]);
                }
                this->__VnoInFunc_m_matches_type_pair(vlSymsp, VL_NULL_CHECK(unnamedblk21__DOT__overrides.at(unnamedblk21__DOT__unnamedblk22__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1371)
                                                      ->__PVT__ovrd, VlNull{}, alias_type_name, __VlefCall_2__m_matches_type_pair);
                if (__VlefCall_2__m_matches_type_pair) {
                    VL_NULL_CHECK(unnamedblk21__DOT__overrides.atWriteAppend(unnamedblk21__DOT__unnamedblk22__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1374)->__PVT__ovrd.__PVT__m_type 
                        = original_type;
                    ++(vlSymsp->__Vcoverage[968]);
                } else {
                    ++(vlSymsp->__Vcoverage[969]);
                }
                unnamedblk21__DOT__unnamedblk22__DOT__index 
                    = ((IData)(1U) + unnamedblk21__DOT__unnamedblk22__DOT__index);
                ++(vlSymsp->__Vcoverage[970]);
            }
            ++(vlSymsp->__Vcoverage[971]);
        }
        ++(vlSymsp->__Vcoverage[974]);
    } else {
        VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1357)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        __Vtask_uvm_report_warning__84__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__84__context_name = ""s;
        __Vtask_uvm_report_warning__84__line = 0U;
        this->__Vtask_uvm_report_warning__84__filename = ""s;
        __Vtask_uvm_report_warning__84__verbosity = 0U;
        this->__Vtask_uvm_report_warning__84__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("Cannot define alias of type '"s, __VlefCall_3__get_type_name), "' because it is not registered with the factory."s));
        this->__Vtask_uvm_report_warning__84__id = "BDTYP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__85__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__85__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__86__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__86__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__84__id, this->__Vtask_uvm_report_warning__84__message, __Vtask_uvm_report_warning__84__verbosity, this->__Vtask_uvm_report_warning__84__filename, __Vtask_uvm_report_warning__84__line, this->__Vtask_uvm_report_warning__84__context_name, (IData)(__Vtask_uvm_report_warning__84__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[973]);
    }
    ++(vlSymsp->__Vcoverage[975]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_alias(Vtb_rng__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_alias\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__90__verbosity;
    __Vtask_uvm_report_warning__90__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__90__line;
    __Vtask_uvm_report_warning__90__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__90__report_enabled_checked;
    __Vtask_uvm_report_warning__90__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__is_type_registered;
    std::string original_type_name;
    Vtb_rng_m_inst_typename_alias_t__struct__0 orig_type_alias_per_inst;
    original_type_name = ""s;
    orig_type_alias_per_inst.__PVT__orig.__PVT__m_type_name.clear();
    orig_type_alias_per_inst.__PVT__alias_type_name.clear();
    orig_type_alias_per_inst.__PVT__full_inst_path.clear();
    VL_NULL_CHECK(original_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1390)->__VnoInFunc_get_type_name(vlSymsp, original_type_name);
    this->__VnoInFunc_is_type_registered(vlSymsp, original_type, __VlefCall_0__is_type_registered);
    if (__VlefCall_0__is_type_registered) {
        orig_type_alias_per_inst.__PVT__alias_type_name 
            = alias_type_name;
        orig_type_alias_per_inst.__PVT__full_inst_path 
            = full_inst_path;
        orig_type_alias_per_inst.__PVT__orig.__PVT__m_type_name 
            = original_type_name;
        orig_type_alias_per_inst.__PVT__orig.__PVT__m_type 
            = original_type;
        this->__PVT__m_inst_aliases.push_back(orig_type_alias_per_inst);
        ++(vlSymsp->__Vcoverage[977]);
    } else {
        __Vtask_uvm_report_warning__90__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__90__context_name = ""s;
        __Vtask_uvm_report_warning__90__line = 0U;
        this->__Vtask_uvm_report_warning__90__filename = ""s;
        __Vtask_uvm_report_warning__90__verbosity = 0U;
        this->__Vtask_uvm_report_warning__90__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("Cannot define alias of type '"s, original_type_name), "' because it is not registered with the factory."s));
        this->__Vtask_uvm_report_warning__90__id = "BDTYP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__91__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__92__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__90__id, this->__Vtask_uvm_report_warning__90__message, __Vtask_uvm_report_warning__90__verbosity, this->__Vtask_uvm_report_warning__90__filename, __Vtask_uvm_report_warning__90__line, this->__Vtask_uvm_report_warning__90__context_name, (IData)(__Vtask_uvm_report_warning__90__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[976]);
    }
    ++(vlSymsp->__Vcoverage[978]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__96__verbosity;
    __Vtask_uvm_report_warning__96__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__96__line;
    __Vtask_uvm_report_warning__96__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__96__report_enabled_checked;
    __Vtask_uvm_report_warning__96__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__97__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__98__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    std::string inst_path;
    {
        inst_path = ""s;
        if ((""s == parent_inst_path)) {
            inst_path = name;
            ++(vlSymsp->__Vcoverage[981]);
        } else if ((""s != name)) {
            inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(parent_inst_path, "."s), name);
            ++(vlSymsp->__Vcoverage[979]);
        } else {
            inst_path = parent_inst_path;
            ++(vlSymsp->__Vcoverage[980]);
        }
        this->__PVT__m_override_info.clear();
        this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, inst_path, wrapper);
        if ((VlNull{} == wrapper)) {
            this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, requested_type_name, inst_path, wrapper);
            if ((VlNull{} == wrapper)) {
                __Vtask_uvm_report_warning__96__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__96__context_name = ""s;
                __Vtask_uvm_report_warning__96__line = 0U;
                this->__Vtask_uvm_report_warning__96__filename = ""s;
                __Vtask_uvm_report_warning__96__verbosity = 0U;
                this->__Vtask_uvm_report_warning__96__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot create an object of type '"s, requested_type_name), "' because it is not registered with the factory."s));
                this->__Vtask_uvm_report_warning__96__id = "BDTYP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__97__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__97__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__98__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__98__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__96__id, this->__Vtask_uvm_report_warning__96__message, __Vtask_uvm_report_warning__96__verbosity, this->__Vtask_uvm_report_warning__96__filename, __Vtask_uvm_report_warning__96__line, this->__Vtask_uvm_report_warning__96__context_name, (IData)(__Vtask_uvm_report_warning__96__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                create_object_by_name__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[983]);
            }
            ++(vlSymsp->__Vcoverage[984]);
        } else {
            ++(vlSymsp->__Vcoverage[985]);
        }
        VL_NULL_CHECK(wrapper, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1439)->__VnoInFunc_create_object(vlProcess, vlSymsp, name, create_object_by_name__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[986]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_type\n"); );
    // Body
    std::string full_inst_path;
    full_inst_path = ""s;
    if ((""s == parent_inst_path)) {
        full_inst_path = name;
        ++(vlSymsp->__Vcoverage[989]);
    } else if ((""s != name)) {
        full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(parent_inst_path, "."s), name);
        ++(vlSymsp->__Vcoverage[987]);
    } else {
        full_inst_path = parent_inst_path;
        ++(vlSymsp->__Vcoverage[988]);
    }
    this->__PVT__m_override_info.clear();
    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, requested_type);
    VL_NULL_CHECK(requested_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1464)->__VnoInFunc_create_object(vlProcess, vlSymsp, name, create_object_by_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[990]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_name_registered(Vtb_rng__Syms* __restrict vlSymsp, std::string type_name, CData/*0:0*/ &is_type_name_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_name_registered\n"); );
    // Body
    is_type_name_registered__Vfuncrtn = (1U & this->__PVT__m_type_names.exists(type_name));
    ++(vlSymsp->__Vcoverage[991]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_registered(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> obj, CData/*0:0*/ &is_type_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_is_type_registered\n"); );
    // Body
    is_type_registered__Vfuncrtn = (1U & this->__PVT__m_types.exists(obj));
    ++(vlSymsp->__Vcoverage[992]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__104__verbosity;
    __Vtask_uvm_report_warning__104__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__104__line;
    __Vtask_uvm_report_warning__104__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__104__report_enabled_checked;
    __Vtask_uvm_report_warning__104__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    std::string inst_path;
    {
        inst_path = ""s;
        if ((""s == parent_inst_path)) {
            inst_path = name;
            ++(vlSymsp->__Vcoverage[995]);
        } else if ((""s != name)) {
            inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(parent_inst_path, "."s), name);
            ++(vlSymsp->__Vcoverage[993]);
        } else {
            inst_path = parent_inst_path;
            ++(vlSymsp->__Vcoverage[994]);
        }
        this->__PVT__m_override_info.clear();
        this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, inst_path, wrapper);
        if ((VlNull{} == wrapper)) {
            if (this->__PVT__m_type_names.exists(requested_type_name)) {
                ++(vlSymsp->__Vcoverage[997]);
            } else {
                __Vtask_uvm_report_warning__104__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__104__context_name = ""s;
                __Vtask_uvm_report_warning__104__line = 0U;
                this->__Vtask_uvm_report_warning__104__filename = ""s;
                __Vtask_uvm_report_warning__104__verbosity = 0U;
                this->__Vtask_uvm_report_warning__104__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot create a component of type '"s, requested_type_name), "' because it is not registered with the factory."s));
                this->__Vtask_uvm_report_warning__104__id = "BDTYP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__105__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__106__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__104__id, this->__Vtask_uvm_report_warning__104__message, __Vtask_uvm_report_warning__104__verbosity, this->__Vtask_uvm_report_warning__104__filename, __Vtask_uvm_report_warning__104__line, this->__Vtask_uvm_report_warning__104__context_name, (IData)(__Vtask_uvm_report_warning__104__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                create_component_by_name__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            wrapper = this->__PVT__m_type_names.at(requested_type_name);
            ++(vlSymsp->__Vcoverage[998]);
        } else {
            ++(vlSymsp->__Vcoverage[999]);
        }
        VL_NULL_CHECK(wrapper, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1514)->__VnoInFunc_create_component(vlProcess, vlSymsp, name, parent, create_component_by_name__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1000]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_type\n"); );
    // Body
    std::string full_inst_path;
    full_inst_path = ""s;
    if ((""s == parent_inst_path)) {
        full_inst_path = name;
        ++(vlSymsp->__Vcoverage[1003]);
    } else if ((""s != name)) {
        full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(parent_inst_path, "."s), name);
        ++(vlSymsp->__Vcoverage[1001]);
    } else {
        full_inst_path = parent_inst_path;
        ++(vlSymsp->__Vcoverage[1002]);
    }
    this->__PVT__m_override_info.clear();
    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, requested_type);
    VL_NULL_CHECK(requested_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1539)->__VnoInFunc_create_component(vlProcess, vlSymsp, name, parent, create_component_by_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[1004]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_wrapper_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__112__verbosity;
    __Vtask_uvm_report_warning__112__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__112__line;
    __Vtask_uvm_report_warning__112__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__112__report_enabled_checked;
    __Vtask_uvm_report_warning__112__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__113__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__114__Vfuncout;
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    {
        this->__VnoInFunc_m_resolve_type_name(vlSymsp, type_name, wrapper);
        if ((VlNull{} != wrapper)) {
            find_wrapper_by_name__Vfuncrtn = wrapper;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[1006]);
        }
        __Vtask_uvm_report_warning__112__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__112__context_name = ""s;
        __Vtask_uvm_report_warning__112__line = 0U;
        this->__Vtask_uvm_report_warning__112__filename = ""s;
        __Vtask_uvm_report_warning__112__verbosity = 0U;
        this->__Vtask_uvm_report_warning__112__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("find_wrapper_by_name: Type name '"s, type_name), "' not registered with the factory."s));
        this->__Vtask_uvm_report_warning__112__id = "UnknownTypeName"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__113__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__113__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__114__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__114__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__112__id, this->__Vtask_uvm_report_warning__112__message, __Vtask_uvm_report_warning__112__verbosity, this->__Vtask_uvm_report_warning__112__filename, __Vtask_uvm_report_warning__112__line, this->__Vtask_uvm_report_warning__112__context_name, (IData)(__Vtask_uvm_report_warning__112__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1007]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__123__verbosity;
    __Vtask_uvm_report_error__123__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__123__line;
    __Vtask_uvm_report_error__123__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__123__report_enabled_checked;
    __Vtask_uvm_report_error__123__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__124__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__125__Vfuncout;
    // Body
    CData/*0:0*/ __VlefCall_2__m_matches_type_override;
    CData/*0:0*/ __VlefCall_1__m_matches_type_override;
    CData/*0:0*/ __VlefCall_0__m_matches_inst_override;
    IData/*31:0*/ unnamedblk23__DOT__i;
    unnamedblk23__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>> unnamedblk24__DOT__matched_overrides;
    IData/*31:0*/ unnamedblk24__DOT__unnamedblk25__DOT__index;
    unnamedblk24__DOT__unnamedblk25__DOT__index = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk26__DOT__override;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> rtype;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> lindex;
    {
        this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, requested_type_name, full_inst_path, rtype);
        if ((""s != full_inst_path)) {
            {
                unnamedblk23__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk23__DOT__i, this->__PVT__m_inst_overrides.size())) {
                    this->__VnoInFunc_m_matches_inst_override(vlSymsp, this->__PVT__m_inst_overrides.at(unnamedblk23__DOT__i), rtype, requested_type_name, full_inst_path, __VlefCall_0__m_matches_inst_override);
                    if (__VlefCall_0__m_matches_inst_override) {
                        this->__PVT__m_override_info.push_back(this->__PVT__m_inst_overrides.at(unnamedblk23__DOT__i));
                        if ((VlNull{} == lindex)) {
                            lindex = this->__PVT__m_inst_overrides.at(unnamedblk23__DOT__i);
                            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                                ++(vlSymsp->__Vcoverage[1009]);
                            } else {
                                goto __Vlabel1;
                            }
                            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                                ++(vlSymsp->__Vcoverage[1010]);
                            }
                            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                                ++(vlSymsp->__Vcoverage[1011]);
                            }
                            ++(vlSymsp->__Vcoverage[1012]);
                        } else {
                            ++(vlSymsp->__Vcoverage[1013]);
                        }
                        ++(vlSymsp->__Vcoverage[1014]);
                    } else {
                        ++(vlSymsp->__Vcoverage[1015]);
                    }
                    unnamedblk23__DOT__i = ((IData)(1U) 
                                            + unnamedblk23__DOT__i);
                    ++(vlSymsp->__Vcoverage[1016]);
                }
                __Vlabel1: ;
            }
            ++(vlSymsp->__Vcoverage[1017]);
        } else {
            ++(vlSymsp->__Vcoverage[1018]);
        }
        if (((VlNull{} == lindex) | (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) {
            unnamedblk24__DOT__matched_overrides.clear();
            {
                unnamedblk24__DOT__unnamedblk25__DOT__index = 0U;
                while (VL_LTS_III(32, unnamedblk24__DOT__unnamedblk25__DOT__index, this->__PVT__m_type_overrides.size())) {
                    this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk24__DOT__unnamedblk25__DOT__index), rtype, requested_type_name, full_inst_path, 1U, 1U, __VlefCall_1__m_matches_type_override);
                    if (__VlefCall_1__m_matches_type_override) {
                        unnamedblk24__DOT__matched_overrides.push_back(this->__PVT__m_type_overrides.at(unnamedblk24__DOT__unnamedblk25__DOT__index));
                        if (((VlNull{} == lindex) || 
                             (1U & (~ VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1599)
                                    ->__PVT__replace)))) {
                            lindex = this->__PVT__m_type_overrides.at(unnamedblk24__DOT__unnamedblk25__DOT__index);
                            if (((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) 
                                 && VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1606)
                                 ->__PVT__replace)) {
                                goto __Vlabel2;
                            } else {
                                ++(vlSymsp->__Vcoverage[1020]);
                            }
                            ++(vlSymsp->__Vcoverage[1021]);
                        } else {
                            ++(vlSymsp->__Vcoverage[1022]);
                        }
                        ++(vlSymsp->__Vcoverage[1023]);
                    } else {
                        ++(vlSymsp->__Vcoverage[1024]);
                    }
                    unnamedblk24__DOT__unnamedblk25__DOT__index 
                        = ((IData)(1U) + unnamedblk24__DOT__unnamedblk25__DOT__index);
                    ++(vlSymsp->__Vcoverage[1025]);
                }
                __Vlabel2: ;
            }
            if ((0U != unnamedblk24__DOT__matched_overrides.size())) {
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    this->__PVT__m_override_info = 
                        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>>::consCC(unnamedblk24__DOT__matched_overrides, 
                                                                                this->__PVT__m_override_info);
                    ++(vlSymsp->__Vcoverage[1026]);
                } else {
                    this->__PVT__m_override_info.push_back(unnamedblk24__DOT__matched_overrides.atBack(0U));
                    ++(vlSymsp->__Vcoverage[1027]);
                }
                ++(vlSymsp->__Vcoverage[1028]);
            } else {
                ++(vlSymsp->__Vcoverage[1029]);
            }
            ++(vlSymsp->__Vcoverage[1030]);
        } else {
            ++(vlSymsp->__Vcoverage[1031]);
        }
        if ((VlNull{} != lindex)) {
            unnamedblk26__DOT__override = VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1623)
                ->__PVT__ovrd.__PVT__m_type;
            VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1625)->__PVT__used 
                = ((IData)(1U) + VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1625)
                   ->__PVT__used);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1627)->__PVT__selected = 1U;
                ++(vlSymsp->__Vcoverage[1032]);
            } else {
                ++(vlSymsp->__Vcoverage[1033]);
            }
            this->__VnoInFunc_m_matches_type_override(vlSymsp, lindex, rtype, requested_type_name, full_inst_path, 0U, 1U, __VlefCall_2__m_matches_type_override);
            if (__VlefCall_2__m_matches_type_override) {
                if ((VlNull{} == unnamedblk26__DOT__override)) {
                    this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1644)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), full_inst_path, unnamedblk26__DOT__override);
                    ++(vlSymsp->__Vcoverage[1036]);
                } else {
                    ++(vlSymsp->__Vcoverage[1037]);
                }
            } else {
                if ((VlNull{} == unnamedblk26__DOT__override)) {
                    this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, 
                                                            VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1637)
                                                                               ->__PVT__ovrd
                                                                               .__PVT__m_type_name), full_inst_path, unnamedblk26__DOT__override);
                    ++(vlSymsp->__Vcoverage[1034]);
                } else {
                    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, unnamedblk26__DOT__override, full_inst_path, unnamedblk26__DOT__override);
                    ++(vlSymsp->__Vcoverage[1035]);
                }
                ++(vlSymsp->__Vcoverage[1038]);
            }
            if ((VlNull{} == unnamedblk26__DOT__override)) {
                __Vtask_uvm_report_error__123__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_error__123__context_name = ""s;
                __Vtask_uvm_report_error__123__line = 0U;
                this->__Vtask_uvm_report_error__123__filename = ""s;
                __Vtask_uvm_report_error__123__verbosity = 0U;
                this->__Vtask_uvm_report_error__123__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot resolve override for original type '"s, VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1648)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' because the override type '"s), VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1649)
                                                                       ->__PVT__ovrd
                                                                       .__PVT__m_type_name), "' is not registered with the factory."s));
                this->__Vtask_uvm_report_error__123__id = "TYPNTF"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__124__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__124__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__125__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__125__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__123__id, this->__Vtask_uvm_report_error__123__message, __Vtask_uvm_report_error__123__verbosity, this->__Vtask_uvm_report_error__123__filename, __Vtask_uvm_report_error__123__line, this->__Vtask_uvm_report_error__123__context_name, (IData)(__Vtask_uvm_report_error__123__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[1039]);
            } else {
                ++(vlSymsp->__Vcoverage[1040]);
            }
            find_override_by_name__Vfuncrtn = unnamedblk26__DOT__override;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[1042]);
        }
        find_override_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1043]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__127__verbosity;
    __Vtask_uvm_report_error__127__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__127__line;
    __Vtask_uvm_report_error__127__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__127__report_enabled_checked;
    __Vtask_uvm_report_error__127__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__128__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__129__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__141__verbosity;
    __Vtask_uvm_report_error__141__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__141__line;
    __Vtask_uvm_report_error__141__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__141__report_enabled_checked;
    __Vtask_uvm_report_error__141__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__142__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__143__Vfuncout;
    // Body
    CData/*0:0*/ __VlefCall_5__m_matches_type_override;
    std::string __VlefCall_4__get_type_name;
    CData/*0:0*/ __VlefCall_3__m_matches_type_override;
    std::string __VlefCall_2__get_type_name;
    CData/*0:0*/ __VlefCall_1__m_matches_inst_override;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk27__DOT__index;
    unnamedblk27__DOT__index = 0;
    IData/*31:0*/ unnamedblk28__DOT__i;
    unnamedblk28__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>> unnamedblk29__DOT__matched_overrides;
    IData/*31:0*/ unnamedblk29__DOT__unnamedblk30__DOT__index;
    unnamedblk29__DOT__unnamedblk30__DOT__index = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk31__DOT__override;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> lindex;
    {
        unnamedblk27__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk27__DOT__index, this->__PVT__m_override_info.size())) {
            if ((VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk27__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1674)
                 ->__PVT__orig.__PVT__m_type == requested_type)) {
                __Vtask_uvm_report_error__127__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_error__127__context_name = ""s;
                __Vtask_uvm_report_error__127__line = 0U;
                this->__Vtask_uvm_report_error__127__filename = ""s;
                __Vtask_uvm_report_error__127__verbosity = 0U;
                this->__Vtask_uvm_report_error__127__message = "Recursive loop detected while finding override."s;
                this->__Vtask_uvm_report_error__127__id = "OVRDLOOP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__128__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__128__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__129__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__129__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__127__id, this->__Vtask_uvm_report_error__127__message, __Vtask_uvm_report_error__127__verbosity, this->__Vtask_uvm_report_error__127__filename, __Vtask_uvm_report_error__127__line, this->__Vtask_uvm_report_error__127__context_name, (IData)(__Vtask_uvm_report_error__127__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                VL_NULL_CHECK(this->__PVT__m_override_info.atWriteAppend(unnamedblk27__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1676)->__PVT__used 
                    = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk27__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1676)
                       ->__PVT__used);
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    ++(vlSymsp->__Vcoverage[1045]);
                } else {
                    this->__VnoInFunc_debug_create_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, ""s);
                    ++(vlSymsp->__Vcoverage[1044]);
                }
                find_override_by_type__Vfuncrtn = requested_type;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[1049]);
            }
            unnamedblk27__DOT__index = ((IData)(1U) 
                                        + unnamedblk27__DOT__index);
            ++(vlSymsp->__Vcoverage[1050]);
        }
        if ((""s != full_inst_path)) {
            {
                unnamedblk28__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk28__DOT__i, this->__PVT__m_inst_overrides.size())) {
                    VL_NULL_CHECK(requested_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1688)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                    this->__VnoInFunc_m_matches_inst_override(vlSymsp, this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i), requested_type, 
                                                              VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), full_inst_path, __VlefCall_1__m_matches_inst_override);
                    if (__VlefCall_1__m_matches_inst_override) {
                        this->__PVT__m_override_info.push_back(this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i));
                        if ((VlNull{} == lindex)) {
                            lindex = this->__PVT__m_inst_overrides.at(unnamedblk28__DOT__i);
                            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                                ++(vlSymsp->__Vcoverage[1052]);
                            } else {
                                goto __Vlabel1;
                            }
                            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                                ++(vlSymsp->__Vcoverage[1053]);
                            }
                            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                                ++(vlSymsp->__Vcoverage[1054]);
                            }
                            ++(vlSymsp->__Vcoverage[1055]);
                        } else {
                            ++(vlSymsp->__Vcoverage[1056]);
                        }
                        ++(vlSymsp->__Vcoverage[1057]);
                    } else {
                        ++(vlSymsp->__Vcoverage[1058]);
                    }
                    unnamedblk28__DOT__i = ((IData)(1U) 
                                            + unnamedblk28__DOT__i);
                    ++(vlSymsp->__Vcoverage[1059]);
                }
                __Vlabel1: ;
            }
            ++(vlSymsp->__Vcoverage[1060]);
        } else {
            ++(vlSymsp->__Vcoverage[1061]);
        }
        if (((VlNull{} == lindex) | (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) {
            unnamedblk29__DOT__matched_overrides.clear();
            {
                unnamedblk29__DOT__unnamedblk30__DOT__index = 0U;
                while (VL_LTS_III(32, unnamedblk29__DOT__unnamedblk30__DOT__index, this->__PVT__m_type_overrides.size())) {
                    VL_NULL_CHECK(requested_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1707)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                    this->__VnoInFunc_m_matches_type_override(vlSymsp, this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index), requested_type, 
                                                              VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), full_inst_path, 1U, 1U, __VlefCall_3__m_matches_type_override);
                    if (__VlefCall_3__m_matches_type_override) {
                        unnamedblk29__DOT__matched_overrides.push_back(this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index));
                        if (((VlNull{} == lindex) || 
                             (1U & (~ VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1711)
                                    ->__PVT__replace)))) {
                            lindex = this->__PVT__m_type_overrides.at(unnamedblk29__DOT__unnamedblk30__DOT__index);
                            if (((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass))) 
                                 && VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1718)
                                 ->__PVT__replace)) {
                                goto __Vlabel2;
                            } else {
                                ++(vlSymsp->__Vcoverage[1063]);
                            }
                            ++(vlSymsp->__Vcoverage[1064]);
                        } else {
                            ++(vlSymsp->__Vcoverage[1065]);
                        }
                        ++(vlSymsp->__Vcoverage[1066]);
                    } else {
                        ++(vlSymsp->__Vcoverage[1067]);
                    }
                    unnamedblk29__DOT__unnamedblk30__DOT__index 
                        = ((IData)(1U) + unnamedblk29__DOT__unnamedblk30__DOT__index);
                    ++(vlSymsp->__Vcoverage[1068]);
                }
                __Vlabel2: ;
            }
            if ((0U != unnamedblk29__DOT__matched_overrides.size())) {
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    this->__PVT__m_override_info = 
                        VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>>::consCC(unnamedblk29__DOT__matched_overrides, 
                                                                                this->__PVT__m_override_info);
                    ++(vlSymsp->__Vcoverage[1069]);
                } else {
                    this->__PVT__m_override_info.push_back(unnamedblk29__DOT__matched_overrides.atBack(0U));
                    ++(vlSymsp->__Vcoverage[1070]);
                }
                ++(vlSymsp->__Vcoverage[1071]);
            } else {
                ++(vlSymsp->__Vcoverage[1072]);
            }
            ++(vlSymsp->__Vcoverage[1073]);
        } else {
            ++(vlSymsp->__Vcoverage[1074]);
        }
        if ((VlNull{} != lindex)) {
            unnamedblk31__DOT__override = VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1735)
                ->__PVT__ovrd.__PVT__m_type;
            VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1737)->__PVT__used 
                = ((IData)(1U) + VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1737)
                   ->__PVT__used);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1739)->__PVT__selected = 1U;
                ++(vlSymsp->__Vcoverage[1075]);
            } else {
                ++(vlSymsp->__Vcoverage[1076]);
            }
            VL_NULL_CHECK(requested_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1744)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            this->__VnoInFunc_m_matches_type_override(vlSymsp, lindex, requested_type, 
                                                      VL_CVT_PACK_STR_NN(__VlefCall_4__get_type_name), full_inst_path, 0U, 1U, __VlefCall_5__m_matches_type_override);
            if (__VlefCall_5__m_matches_type_override) {
                if ((VlNull{} == unnamedblk31__DOT__override)) {
                    this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1756)
                                                                                ->__PVT__ovrd
                                                                                .__PVT__m_type_name), full_inst_path, unnamedblk31__DOT__override);
                    ++(vlSymsp->__Vcoverage[1079]);
                } else {
                    ++(vlSymsp->__Vcoverage[1080]);
                }
            } else {
                if ((VlNull{} == unnamedblk31__DOT__override)) {
                    this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, 
                                                            VL_CVT_PACK_STR_NN(VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1749)
                                                                               ->__PVT__ovrd
                                                                               .__PVT__m_type_name), full_inst_path, unnamedblk31__DOT__override);
                    ++(vlSymsp->__Vcoverage[1077]);
                } else {
                    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, unnamedblk31__DOT__override, full_inst_path, unnamedblk31__DOT__override);
                    ++(vlSymsp->__Vcoverage[1078]);
                }
                ++(vlSymsp->__Vcoverage[1081]);
            }
            if ((VlNull{} == unnamedblk31__DOT__override)) {
                __Vtask_uvm_report_error__141__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_error__141__context_name = ""s;
                __Vtask_uvm_report_error__141__line = 0U;
                this->__Vtask_uvm_report_error__141__filename = ""s;
                __Vtask_uvm_report_error__141__verbosity = 0U;
                this->__Vtask_uvm_report_error__141__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot resolve override for original type '"s, VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1760)
                                                                                ->__PVT__orig
                                                                                .__PVT__m_type_name), "' because the override type '"s), VL_NULL_CHECK(lindex, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1761)
                                                                       ->__PVT__ovrd
                                                                       .__PVT__m_type_name), "' is not registered with the factory."s));
                this->__Vtask_uvm_report_error__141__id = "TYPNTF"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__142__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__142__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__143__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__143__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__141__id, this->__Vtask_uvm_report_error__141__message, __Vtask_uvm_report_error__141__verbosity, this->__Vtask_uvm_report_error__141__filename, __Vtask_uvm_report_error__141__line, this->__Vtask_uvm_report_error__141__context_name, (IData)(__Vtask_uvm_report_error__141__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[1082]);
            } else {
                ++(vlSymsp->__Vcoverage[1083]);
            }
            find_override_by_type__Vfuncrtn = unnamedblk31__DOT__override;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[1085]);
        }
        find_override_by_type__Vfuncrtn = requested_type;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1086]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_print(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ all_types) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_print\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__146____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__146____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__148__Vfuncout;
    __Vfunc_uvm_re_match__148__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__148____Vincrement1;
    __Vfunc_uvm_re_match__148____Vincrement1 = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__verbosity;
    __Vfunc_uvm_report_enabled__151__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__151__severity;
    __Vfunc_uvm_report_enabled__151__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__152__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__153__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__156__verbosity;
    __Vtask_uvm_report_info__156__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__156__line;
    __Vtask_uvm_report_info__156__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__156__report_enabled_checked;
    __Vtask_uvm_report_info__156__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__157__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__158__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    std::string __Vtemp_14;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    std::string __Vtemp_17;
    std::string __Vtemp_18;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_8__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_6;
    std::string __VlefCall_5__get_type_name;
    CData/*0:0*/ __VlefLogAnd_4;
    std::string __VlefCall_3__get_type_name;
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk32__DOT__max1;
    IData/*31:0*/ unnamedblk32__DOT__max2;
    IData/*31:0*/ unnamedblk32__DOT__max3;
    std::string unnamedblk32__DOT__dash;
    std::string unnamedblk32__DOT__space;
    IData/*31:0*/ unnamedblk32__DOT__unnamedblk33__DOT__j;
    unnamedblk32__DOT__unnamedblk33__DOT__j = 0;
    IData/*31:0*/ unnamedblk32__DOT__unnamedblk34__DOT__j;
    unnamedblk32__DOT__unnamedblk34__DOT__j = 0;
    IData/*31:0*/ unnamedblk32__DOT__unnamedblk35__DOT__i;
    unnamedblk32__DOT__unnamedblk35__DOT__i = 0;
    IData/*31:0*/ unnamedblk32__DOT__unnamedblk36__DOT__index;
    CData/*0:0*/ unnamedblk37__DOT__banner;
    std::string key;
    VlQueue<std::string> qs;
    key = ""s;
    qs.clear();
    qs.atDefault().clear();
    qs.push_back("\n#### Factory Configuration (*)\n\n"s);
    if ((1U & ((~ (0U != this->__PVT__m_type_overrides.size())) 
               & (~ (0U != this->__PVT__m_inst_overrides.size()))))) {
        qs.push_back("  No instance or type overrides are registered with this factory\n"s);
        ++(vlSymsp->__Vcoverage[1121]);
    } else {
        unnamedblk32__DOT__max1 = 0U;
        unnamedblk32__DOT__max2 = 0U;
        unnamedblk32__DOT__max3 = 0U;
        unnamedblk32__DOT__dash = "---------------------------------------------------------------------------------------------------"s;
        unnamedblk32__DOT__space = "                                                                                                   "s;
        if ((0U != this->__PVT__m_inst_overrides.size())) {
            unnamedblk32__DOT__unnamedblk33__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk32__DOT__unnamedblk33__DOT__j, this->__PVT__m_inst_overrides.size())) {
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1796)
                                             ->__PVT__orig
                                             .__PVT__m_type_name), unnamedblk32__DOT__max1)) {
                    unnamedblk32__DOT__max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1797)
                                                        ->__PVT__orig
                                                        .__PVT__m_type_name);
                    ++(vlSymsp->__Vcoverage[1087]);
                } else {
                    ++(vlSymsp->__Vcoverage[1088]);
                }
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1798)
                                             ->__PVT__full_inst_path), unnamedblk32__DOT__max2)) {
                    unnamedblk32__DOT__max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1799)
                                                        ->__PVT__full_inst_path);
                    ++(vlSymsp->__Vcoverage[1089]);
                } else {
                    ++(vlSymsp->__Vcoverage[1090]);
                }
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1800)
                                             ->__PVT__ovrd
                                             .__PVT__m_type_name), unnamedblk32__DOT__max3)) {
                    unnamedblk32__DOT__max3 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk33__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1801)
                                                        ->__PVT__ovrd
                                                        .__PVT__m_type_name);
                    ++(vlSymsp->__Vcoverage[1091]);
                } else {
                    ++(vlSymsp->__Vcoverage[1092]);
                }
                unnamedblk32__DOT__unnamedblk33__DOT__j 
                    = ((IData)(1U) + unnamedblk32__DOT__unnamedblk33__DOT__j);
                ++(vlSymsp->__Vcoverage[1093]);
            }
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk32__DOT__max1)) {
                unnamedblk32__DOT__max1 = 0x0000000eU;
                ++(vlSymsp->__Vcoverage[1094]);
            } else {
                ++(vlSymsp->__Vcoverage[1095]);
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max2)) {
                unnamedblk32__DOT__max2 = 0x0000000dU;
                ++(vlSymsp->__Vcoverage[1096]);
            } else {
                ++(vlSymsp->__Vcoverage[1097]);
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max3)) {
                unnamedblk32__DOT__max3 = 0x0000000dU;
                ++(vlSymsp->__Vcoverage[1098]);
            } else {
                ++(vlSymsp->__Vcoverage[1099]);
            }
            qs.push_back("Instance Overrides:\n\n"s);
            __Vtemp_1 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                    (unnamedblk32__DOT__max1 
                                     - (IData)(0x0000000eU)));
            __Vtemp_2 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                    (unnamedblk32__DOT__max2 
                                     - (IData)(0x0000000dU)));
            __Vtemp_3 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                    (unnamedblk32__DOT__max3 
                                     - (IData)(0x0000000dU)));
            qs.push_back(VL_SFORMATF_N_NX("  Requested Type%0@  Override Path%0@  Override Type%0@\n",0,
                                          -1,&(__Vtemp_1),
                                          -1,&(__Vtemp_2),
                                          -1,&(__Vtemp_3)) );
            __Vtemp_4 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max1);
            __Vtemp_5 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max2);
            __Vtemp_6 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max3);
            qs.push_back(VL_SFORMATF_N_NX("  %0@  %0@  %0@\n",0,
                                          -1,&(__Vtemp_4),
                                          -1,&(__Vtemp_5),
                                          -1,&(__Vtemp_6)) );
            unnamedblk32__DOT__unnamedblk34__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk32__DOT__unnamedblk34__DOT__j, this->__PVT__m_inst_overrides.size())) {
                __Vtemp_7 = VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1816)
                    ->__PVT__orig.__PVT__m_type_name;
                __Vtemp_8 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                        (unnamedblk32__DOT__max1 
                                         - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1817)
                                                     ->__PVT__orig
                                                     .__PVT__m_type_name)));
                __Vtemp_9 = VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1818)
                    ->__PVT__full_inst_path;
                __Vtemp_10 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                         (unnamedblk32__DOT__max2 
                                          - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1819)
                                                      ->__PVT__full_inst_path)));
                qs.push_back(VL_SFORMATF_N_NX("  %0@%0@  %0@%0@",0,
                                              -1,&(__Vtemp_7),
                                              -1,&(__Vtemp_8),
                                              -1,&(__Vtemp_9),
                                              -1,&(__Vtemp_10)) );
                __Vtemp_11 = VL_NULL_CHECK(this->__PVT__m_inst_overrides.at(unnamedblk32__DOT__unnamedblk34__DOT__j), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1820)
                    ->__PVT__ovrd.__PVT__m_type_name;
                qs.push_back(VL_SFORMATF_N_NX("  %0@\n",0,
                                              -1,&(__Vtemp_11)) );
                unnamedblk32__DOT__unnamedblk34__DOT__j 
                    = ((IData)(1U) + unnamedblk32__DOT__unnamedblk34__DOT__j);
                ++(vlSymsp->__Vcoverage[1100]);
            }
            ++(vlSymsp->__Vcoverage[1102]);
        } else {
            qs.push_back("No instance overrides are registered with this factory\n"s);
            ++(vlSymsp->__Vcoverage[1101]);
        }
        if ((0U != this->__PVT__m_type_overrides.size())) {
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk32__DOT__max1)) {
                unnamedblk32__DOT__max1 = 0x0000000eU;
                ++(vlSymsp->__Vcoverage[1103]);
            } else {
                ++(vlSymsp->__Vcoverage[1104]);
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max2)) {
                unnamedblk32__DOT__max2 = 0x0000000dU;
                ++(vlSymsp->__Vcoverage[1105]);
            } else {
                ++(vlSymsp->__Vcoverage[1106]);
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max3)) {
                unnamedblk32__DOT__max3 = 0x0000000dU;
                ++(vlSymsp->__Vcoverage[1107]);
            } else {
                ++(vlSymsp->__Vcoverage[1108]);
            }
            unnamedblk32__DOT__unnamedblk35__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk32__DOT__unnamedblk35__DOT__i, this->__PVT__m_type_overrides.size())) {
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk35__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1834)
                                             ->__PVT__orig
                                             .__PVT__m_type_name), unnamedblk32__DOT__max1)) {
                    unnamedblk32__DOT__max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk35__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1835)
                                                        ->__PVT__orig
                                                        .__PVT__m_type_name);
                    ++(vlSymsp->__Vcoverage[1109]);
                } else {
                    ++(vlSymsp->__Vcoverage[1110]);
                }
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk35__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1836)
                                             ->__PVT__ovrd
                                             .__PVT__m_type_name), unnamedblk32__DOT__max2)) {
                    unnamedblk32__DOT__max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk35__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1837)
                                                        ->__PVT__ovrd
                                                        .__PVT__m_type_name);
                    ++(vlSymsp->__Vcoverage[1111]);
                } else {
                    ++(vlSymsp->__Vcoverage[1112]);
                }
                unnamedblk32__DOT__unnamedblk35__DOT__i 
                    = ((IData)(1U) + unnamedblk32__DOT__unnamedblk35__DOT__i);
                ++(vlSymsp->__Vcoverage[1113]);
            }
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk32__DOT__max1)) {
                unnamedblk32__DOT__max1 = 0x0000000eU;
                ++(vlSymsp->__Vcoverage[1114]);
            } else {
                ++(vlSymsp->__Vcoverage[1115]);
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk32__DOT__max2)) {
                unnamedblk32__DOT__max2 = 0x0000000dU;
                ++(vlSymsp->__Vcoverage[1116]);
            } else {
                ++(vlSymsp->__Vcoverage[1117]);
            }
            qs.push_back("\nType Overrides:\n\n"s);
            __Vtemp_12 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                     (unnamedblk32__DOT__max1 
                                      - (IData)(0x0000000eU)));
            __Vtemp_13 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                     (unnamedblk32__DOT__max2 
                                      - (IData)(0x0000000dU)));
            qs.push_back(VL_SFORMATF_N_NX("  Requested Type%0@  Override Type%0@\n",0,
                                          -1,&(__Vtemp_12),
                                          -1,&(__Vtemp_13)) );
            __Vtemp_14 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max1);
            __Vtemp_15 = VL_SUBSTR_N(unnamedblk32__DOT__dash,1U,unnamedblk32__DOT__max2);
            qs.push_back(VL_SFORMATF_N_NX("  %0@  %0@\n",0,
                                          -1,&(__Vtemp_14),
                                          -1,&(__Vtemp_15)) );
            unnamedblk32__DOT__unnamedblk36__DOT__index 
                = (this->__PVT__m_type_overrides.size() 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, unnamedblk32__DOT__unnamedblk36__DOT__index)) {
                __Vtemp_16 = VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk36__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1848)
                    ->__PVT__orig.__PVT__m_type_name;
                __Vtemp_17 = VL_SUBSTR_N(unnamedblk32__DOT__space,1U,
                                         (unnamedblk32__DOT__max1 
                                          - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk36__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1849)
                                                      ->__PVT__orig
                                                      .__PVT__m_type_name)));
                __Vtemp_18 = VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk32__DOT__unnamedblk36__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1850)
                    ->__PVT__ovrd.__PVT__m_type_name;
                qs.push_back(VL_SFORMATF_N_NX("  %0@%0@  %0@\n",0,
                                              -1,&(__Vtemp_16),
                                              -1,&(__Vtemp_17),
                                              -1,&(__Vtemp_18)) );
                unnamedblk32__DOT__unnamedblk36__DOT__index 
                    = (unnamedblk32__DOT__unnamedblk36__DOT__index 
                       - (IData)(1U));
                ++(vlSymsp->__Vcoverage[1118]);
            }
            ++(vlSymsp->__Vcoverage[1120]);
        } else {
            qs.push_back("\nNo type overrides are registered with this factory\n"s);
            ++(vlSymsp->__Vcoverage[1119]);
        }
        ++(vlSymsp->__Vcoverage[1122]);
    }
    __VlefExpr_0 = VL_LTES_III(32, 1U, all_types);
    if (__VlefExpr_0) {
        __VlefExpr_0 = (0U != this->__PVT__m_type_names.first(key));
    }
    if (__VlefExpr_0) {
        unnamedblk37__DOT__banner = 0U;
        qs.push_back(VL_SFORMATF_N_NX("\nAll types registered with the factory: %0d total\n",0,
                                      32,this->__PVT__m_types.size()) );
        while (true) {
            __VlefCall_2__uvm_is_match = VL_GTS_III(32, 2U, all_types);
            if (__VlefCall_2__uvm_is_match) {
                VL_NULL_CHECK(this->__PVT__m_type_names
                              .at(key), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1861)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
                this->__Vfunc_uvm_is_match__146__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name);
                this->__Vfunc_uvm_is_match__146__expr = "uvm_*"s;
                this->__Vfunc_uvm_glob_to_re__147__glob 
                    = this->__Vfunc_uvm_is_match__146__expr;
                this->__Vfunc_uvm_glob_to_re__147__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__147__glob;
                ++(vlSymsp->__Vcoverage[283]);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__147__Vfuncout;
                this->__Vfunc_uvm_re_match__148__str 
                    = this->__Vfunc_uvm_is_match__146__str;
                this->__Vfunc_uvm_re_match__148__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__148____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__148__re))) {
                        __Vfunc_uvm_re_match__148__Vfuncout = 0U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[255]);
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,0U))) {
                        this->__Vfunc_uvm_re_match__148__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__148__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__148__re) 
                                           - (IData)(1U)));
                        ++(vlSymsp->__Vcoverage[256]);
                    } else {
                        ++(vlSymsp->__Vcoverage[257]);
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__148__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__148__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__148__Vfuncout = 1U;
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
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__148__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__148__re))) {
                                __Vfunc_uvm_re_match__148__Vfuncout = 0U;
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
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  == VL_GETC_N(this->__Vfunc_uvm_re_match__148__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                ++(vlSymsp->__Vcoverage[269]);
                            } else {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match__148____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__148____Vincrement1;
                                ++(vlSymsp->__Vcoverage[270]);
                            }
                            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                ++(vlSymsp->__Vcoverage[271]);
                            }
                            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__148__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                ++(vlSymsp->__Vcoverage[272]);
                            }
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__148__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                ++(vlSymsp->__Vcoverage[273]);
                            }
                        }
                        ++(vlSymsp->__Vcoverage[275]);
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__148__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        ++(vlSymsp->__Vcoverage[279]);
                    }
                    __Vfunc_uvm_re_match__148__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__148__re))
                            ? 0U : 1U);
                    __Vlabel0: ;
                }
                if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                      != VL_LEN_IN(this->__Vfunc_uvm_re_match__148__str)) 
                     & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[258]);
                }
                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[259]);
                }
                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__148__str))) {
                    ++(vlSymsp->__Vcoverage[260]);
                }
                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                      != VL_GETC_N(this->__Vfunc_uvm_re_match__148__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[263]);
                }
                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[264]);
                }
                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                     == VL_GETC_N(this->__Vfunc_uvm_re_match__148__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                    ++(vlSymsp->__Vcoverage[265]);
                }
                if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__148__re)) 
                     & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    ++(vlSymsp->__Vcoverage[276]);
                }
                if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__148__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                    ++(vlSymsp->__Vcoverage[277]);
                }
                if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                VL_LEN_IN(this->__Vfunc_uvm_re_match__148__re))) {
                    ++(vlSymsp->__Vcoverage[278]);
                }
                ++(vlSymsp->__Vcoverage[282]);
                __Vfunc_uvm_is_match__146____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__148__Vfuncout;
                __VlefCall_2__uvm_is_match = (0U == __Vfunc_uvm_is_match__146____VlefCall_0__uvm_re_match);
                ++(vlSymsp->__Vcoverage[462]);
            }
            __VlefLogAnd_4 = (1U & (~ (IData)(__VlefCall_2__uvm_is_match)));
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(this->__PVT__m_type_names
                              .at(key), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1862)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
                __VlefLogAnd_4 = (key == __VlefCall_3__get_type_name);
            }
            if (__VlefLogAnd_4) {
                if (unnamedblk37__DOT__banner) {
                    ++(vlSymsp->__Vcoverage[1124]);
                } else {
                    qs.push_back("  Type Name\n"s);
                    qs.push_back("  ---------\n"s);
                    unnamedblk37__DOT__banner = 1U;
                    ++(vlSymsp->__Vcoverage[1123]);
                }
                VL_NULL_CHECK(this->__PVT__m_type_names
                              .at(key), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1868)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
                qs.push_back(VL_SFORMATF_N_NX("  %@\n",0,
                                              -1,&(__VlefCall_5__get_type_name)) );
                if ((1U & (~ (IData)(unnamedblk37__DOT__banner)))) {
                    ++(vlSymsp->__Vcoverage[1125]);
                }
                if (unnamedblk37__DOT__banner) {
                    ++(vlSymsp->__Vcoverage[1126]);
                }
                ++(vlSymsp->__Vcoverage[1127]);
            } else {
                ++(vlSymsp->__Vcoverage[1128]);
            }
            ++(vlSymsp->__Vcoverage[1129]);
            __VlefExpr_6 = (0U != this->__PVT__m_type_names.next(key));
            if (!(__VlefExpr_6)) break;
            ++(vlSymsp->__Vcoverage[1130]);
        }
        ++(vlSymsp->__Vcoverage[1131]);
    } else {
        ++(vlSymsp->__Vcoverage[1132]);
    }
    qs.push_back("(*) Types with no associated type name will be printed as <unknown>\n\n####\n\n"s);
    this->__Vfunc_uvm_report_enabled__151__id = "UVM/FACTORY/PRINT"s;
    __Vfunc_uvm_report_enabled__151__severity = 0U;
    __Vfunc_uvm_report_enabled__151__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__152__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__152__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__153__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__153__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__151__verbosity, (IData)(__Vfunc_uvm_report_enabled__151__severity), this->__Vfunc_uvm_report_enabled__151__id, __VlefCall_7__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_7__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__155__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__155__Vfuncout 
            = VL_CVT_PACK_STR_ND(qs);
        ++(vlSymsp->__Vcoverage[434]);
        __VlefCall_8__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__155__Vfuncout;
        __Vtask_uvm_report_info__156__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__156__context_name = ""s;
        __Vtask_uvm_report_info__156__line = 0x00000753U;
        this->__Vtask_uvm_report_info__156__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh"s;
        __Vtask_uvm_report_info__156__verbosity = 0U;
        this->__Vtask_uvm_report_info__156__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_8__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__156__id = "UVM/FACTORY/PRINT"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__157__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__157__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__158__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__158__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__156__id, this->__Vtask_uvm_report_info__156__message, __Vtask_uvm_report_info__156__verbosity, this->__Vtask_uvm_report_info__156__filename, __Vtask_uvm_report_info__156__line, this->__Vtask_uvm_report_info__156__context_name, (IData)(__Vtask_uvm_report_info__156__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[1133]);
    } else {
        ++(vlSymsp->__Vcoverage[1134]);
    }
    ++(vlSymsp->__Vcoverage[1135]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_debug_create(vlProcess, vlSymsp, requested_type_name, VlNull{}, parent_inst_path, name);
    ++(vlSymsp->__Vcoverage[1136]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_type\n"); );
    // Body
    this->__VnoInFunc_m_debug_create(vlProcess, vlSymsp, ""s, requested_type, parent_inst_path, name);
    ++(vlSymsp->__Vcoverage[1137]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_create\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__162__verbosity;
    __Vtask_uvm_report_warning__162__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__162__line;
    __Vtask_uvm_report_warning__162__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__162__report_enabled_checked;
    __Vtask_uvm_report_warning__162__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__163__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__164__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk38__DOT__index;
    unnamedblk38__DOT__index = 0;
    std::string full_inst_path;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> result;
    {
        full_inst_path = ""s;
        if ((""s == parent_inst_path)) {
            full_inst_path = name;
            ++(vlSymsp->__Vcoverage[1140]);
        } else if ((""s != name)) {
            full_inst_path = VL_CONCATN_NNN(VL_CONCATN_NNN(parent_inst_path, "."s), name);
            ++(vlSymsp->__Vcoverage[1138]);
        } else {
            full_inst_path = parent_inst_path;
            ++(vlSymsp->__Vcoverage[1139]);
        }
        this->__PVT__m_override_info.clear();
        if ((VlNull{} == requested_type)) {
            if (((! this->__PVT__m_type_names.exists(requested_type_name)) 
                 & (! this->__PVT__m_lookup_strs.exists(requested_type_name)))) {
                __Vtask_uvm_report_warning__162__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__162__context_name = ""s;
                __Vtask_uvm_report_warning__162__line = 0U;
                this->__Vtask_uvm_report_warning__162__filename = ""s;
                __Vtask_uvm_report_warning__162__verbosity = 0U;
                this->__Vtask_uvm_report_warning__162__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("The factory does not recognize '"s, requested_type_name), "' as a registered type."s));
                this->__Vtask_uvm_report_warning__162__id = "Factory Warning"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__163__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__163__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__164__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__164__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__162__id, this->__Vtask_uvm_report_warning__162__message, __Vtask_uvm_report_warning__162__verbosity, this->__Vtask_uvm_report_warning__162__filename, __Vtask_uvm_report_warning__162__line, this->__Vtask_uvm_report_warning__162__context_name, (IData)(__Vtask_uvm_report_warning__162__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[1142]);
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 1U;
            this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, full_inst_path, result);
            ++(vlSymsp->__Vcoverage[1147]);
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 1U;
            if (this->__PVT__m_types.exists(requested_type)) {
                ++(vlSymsp->__Vcoverage[1144]);
            } else {
                this->__VnoInFunc_register(vlProcess, vlSymsp, requested_type);
                ++(vlSymsp->__Vcoverage[1143]);
            }
            this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, result);
            if ((""s == requested_type_name)) {
                VL_NULL_CHECK(requested_type, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1936)->__VnoInFunc_get_type_name(vlSymsp, requested_type_name);
                ++(vlSymsp->__Vcoverage[1145]);
            } else {
                ++(vlSymsp->__Vcoverage[1146]);
            }
            ++(vlSymsp->__Vcoverage[1148]);
        }
        this->__VnoInFunc_m_debug_display(vlProcess, vlSymsp, requested_type_name, result, full_inst_path);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 0U;
        unnamedblk38__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk38__DOT__index, this->__PVT__m_override_info.size())) {
            VL_NULL_CHECK(this->__PVT__m_override_info.atWriteAppend(unnamedblk38__DOT__index), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1943)->__PVT__selected = 0U;
            unnamedblk38__DOT__index = ((IData)(1U) 
                                        + unnamedblk38__DOT__index);
            ++(vlSymsp->__Vcoverage[1149]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1150]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_display(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> result, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_display\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__172__verbosity;
    __Vfunc_uvm_report_enabled__172__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__172__severity;
    __Vfunc_uvm_report_enabled__172__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__173__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__174__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__177__verbosity;
    __Vtask_uvm_report_info__177__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__177__line;
    __Vtask_uvm_report_info__177__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__177__report_enabled_checked;
    __Vtask_uvm_report_info__177__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__178__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__179__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    // Body
    std::string __VlefCall_2__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk39__DOT__i;
    unnamedblk39__DOT__i = 0;
    IData/*31:0*/ unnamedblk40__DOT__i;
    unnamedblk40__DOT__i = 0;
    IData/*31:0*/ max1;
    IData/*31:0*/ max2;
    IData/*31:0*/ max3;
    std::string dash;
    std::string space;
    VlQueue<std::string> qs;
    max1 = 0U;
    max2 = 0U;
    max3 = 0U;
    dash = "---------------------------------------------------------------------------------------------------"s;
    space = "                                                                                                   "s;
    qs.clear();
    qs.atDefault().clear();
    qs.push_back("\n#### Factory Override Information (*)\n\n"s);
    qs.push_back(VL_SFORMATF_N_NX("Given a request for an object of type '%@' with an instance\npath of '%@' the factory encountered\n\n",0,
                                  -1,&(requested_type_name),
                                  -1,&(full_inst_path)) );
    if ((0U == this->__PVT__m_override_info.size())) {
        qs.push_back("no relevant overrides.\n\n"s);
        ++(vlSymsp->__Vcoverage[1167]);
    } else {
        qs.push_back("the following relevant overrides. An 'x' next to a match indicates a\nmatch that was ignored.\n\n"s);
        unnamedblk39__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk39__DOT__i, this->__PVT__m_override_info.size())) {
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1972)
                                         ->__PVT__orig
                                         .__PVT__m_type_name), max1)) {
                max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1973)
                                 ->__PVT__orig.__PVT__m_type_name);
                ++(vlSymsp->__Vcoverage[1151]);
            } else {
                ++(vlSymsp->__Vcoverage[1152]);
            }
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1974)
                                         ->__PVT__full_inst_path), max2)) {
                max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1975)
                                 ->__PVT__full_inst_path);
                ++(vlSymsp->__Vcoverage[1153]);
            } else {
                ++(vlSymsp->__Vcoverage[1154]);
            }
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1976)
                                         ->__PVT__ovrd
                                         .__PVT__m_type_name), max3)) {
                max3 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk39__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1977)
                                 ->__PVT__ovrd.__PVT__m_type_name);
                ++(vlSymsp->__Vcoverage[1155]);
            } else {
                ++(vlSymsp->__Vcoverage[1156]);
            }
            unnamedblk39__DOT__i = ((IData)(1U) + unnamedblk39__DOT__i);
            ++(vlSymsp->__Vcoverage[1157]);
        }
        if (VL_GTS_III(32, 0x0000000dU, max1)) {
            max1 = 0x0000000dU;
            ++(vlSymsp->__Vcoverage[1158]);
        } else {
            ++(vlSymsp->__Vcoverage[1159]);
        }
        if (VL_GTS_III(32, 0x0000000dU, max2)) {
            max2 = 0x0000000dU;
            ++(vlSymsp->__Vcoverage[1160]);
        } else {
            ++(vlSymsp->__Vcoverage[1161]);
        }
        if (VL_GTS_III(32, 0x0000000dU, max3)) {
            max3 = 0x0000000dU;
            ++(vlSymsp->__Vcoverage[1162]);
        } else {
            ++(vlSymsp->__Vcoverage[1163]);
        }
        __Vtemp_1 = VL_SUBSTR_N(space,1U,(max1 - (IData)(0x0000000dU)));
        __Vtemp_2 = VL_SUBSTR_N(space,1U,(max2 - (IData)(0x0000000dU)));
        __Vtemp_3 = VL_SUBSTR_N(space,1U,(max3 - (IData)(0x0000000dU)));
        qs.push_back(VL_SFORMATF_N_NX("Original Type%0@  Instance Path%0@  Override Type%0@\n",0,
                                      -1,&(__Vtemp_1),
                                      -1,&(__Vtemp_2),
                                      -1,&(__Vtemp_3)) );
        __Vtemp_4 = VL_SUBSTR_N(dash,1U,max1);
        __Vtemp_5 = VL_SUBSTR_N(dash,1U,max2);
        __Vtemp_6 = VL_SUBSTR_N(dash,1U,max3);
        qs.push_back(VL_SFORMATF_N_NX("  %0@  %0@  %0@\n",0,
                                      -1,&(__Vtemp_4),
                                      -1,&(__Vtemp_5),
                                      -1,&(__Vtemp_6)) );
        unnamedblk40__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk40__DOT__i, this->__PVT__m_override_info.size())) {
            __Vtemp_7 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1994)
                ->__PVT__orig.__PVT__m_type_name;
            __Vtemp_8 = VL_SUBSTR_N(space,1U,(max1 
                                              - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1995)
                                                          ->__PVT__orig
                                                          .__PVT__m_type_name)));
            qs.push_back(VL_SFORMATF_N_NX("%s%0@%0@\n",0,
                                          16,(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1993)
                                              ->__PVT__selected
                                               ? 0x2020U
                                               : 0x7820U),
                                          -1,&(__Vtemp_7),
                                          -1,&(__Vtemp_8)) );
            __Vtemp_9 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1996)
                ->__PVT__full_inst_path;
            __Vtemp_10 = VL_SUBSTR_N(space,1U,(max2 
                                               - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1997)
                                                           ->__PVT__full_inst_path)));
            qs.push_back(VL_SFORMATF_N_NX("  %0@%0@",0,
                                          -1,&(__Vtemp_9),
                                          -1,&(__Vtemp_10)) );
            __Vtemp_11 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1998)
                ->__PVT__ovrd.__PVT__m_type_name;
            __Vtemp_12 = VL_SUBSTR_N(space,1U,(max3 
                                               - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 1999)
                                                           ->__PVT__ovrd
                                                           .__PVT__m_type_name)));
            qs.push_back(VL_SFORMATF_N_NX("  %0@%0@",0,
                                          -1,&(__Vtemp_11),
                                          -1,&(__Vtemp_12)) );
            if (("*"s == VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk40__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2000)
                 ->__PVT__full_inst_path)) {
                qs.push_back("  <type override>"s);
                ++(vlSymsp->__Vcoverage[1164]);
            } else {
                qs.push_back("\n"s);
                ++(vlSymsp->__Vcoverage[1165]);
            }
            unnamedblk40__DOT__i = ((IData)(1U) + unnamedblk40__DOT__i);
            ++(vlSymsp->__Vcoverage[1166]);
        }
        qs.push_back("\n"s);
        ++(vlSymsp->__Vcoverage[1168]);
    }
    qs.push_back("Result:\n\n"s);
    if ((VlNull{} == result)) {
        __VlefCall_0__get_type_name = requested_type_name;
    } else {
        VL_NULL_CHECK(result, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2011)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    }
    qs.push_back(VL_SFORMATF_N_NX("  The factory will produce an object of type '%0@'\n",0,
                                  -1,&(__VlefCall_0__get_type_name)) );
    qs.push_back("\n(*) Types with no associated type name will be printed as <unknown>\n\n####\n\n"s);
    this->__Vfunc_uvm_report_enabled__172__id = "UVM/FACTORY/DUMP"s;
    __Vfunc_uvm_report_enabled__172__severity = 0U;
    __Vfunc_uvm_report_enabled__172__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__173__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__173__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__174__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__174__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__172__verbosity, (IData)(__Vfunc_uvm_report_enabled__172__severity), this->__Vfunc_uvm_report_enabled__172__id, __VlefCall_1__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__176__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__176__Vfuncout 
            = VL_CVT_PACK_STR_ND(qs);
        ++(vlSymsp->__Vcoverage[434]);
        __VlefCall_2__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__176__Vfuncout;
        __Vtask_uvm_report_info__177__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__177__context_name = ""s;
        __Vtask_uvm_report_info__177__line = 0x000007dfU;
        this->__Vtask_uvm_report_info__177__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh"s;
        __Vtask_uvm_report_info__177__verbosity = 0U;
        this->__Vtask_uvm_report_info__177__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_2__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__177__id = "UVM/FACTORY/DUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__178__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__178__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__179__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__179__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__177__id, this->__Vtask_uvm_report_info__177__message, __Vtask_uvm_report_info__177__verbosity, this->__Vtask_uvm_report_info__177__filename, __Vtask_uvm_report_info__177__line, this->__Vtask_uvm_report_info__177__context_name, (IData)(__Vtask_uvm_report_info__177__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[440]);
        ++(vlSymsp->__Vcoverage[1169]);
    } else {
        ++(vlSymsp->__Vcoverage[1170]);
    }
    ++(vlSymsp->__Vcoverage[1171]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    wrapper = VlNull{};
    if (this->__PVT__m_type_names.exists(requested_type_name)) {
        wrapper = this->__PVT__m_type_names.at(requested_type_name);
        ++(vlSymsp->__Vcoverage[1172]);
    } else {
        ++(vlSymsp->__Vcoverage[1173]);
    }
    m_resolve_type_name__Vfuncrtn = wrapper;
    ++(vlSymsp->__Vcoverage[1174]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name_by_inst(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name_by_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_resolve_type_name_by_inst\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_uvm_is_match__181__Vfuncout;
    __Vfunc_uvm_is_match__181__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__181____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__181____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__183__Vfuncout;
    __Vfunc_uvm_re_match__183__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__183____Vincrement1;
    __Vfunc_uvm_re_match__183____Vincrement1 = 0;
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    VlQueue<Vtb_rng_m_inst_typename_alias_t__struct__0> type_alias_inst;
    wrapper = VlNull{};
    type_alias_inst = this->__PVT__m_inst_aliases.find(
                                                       [&](
                                                           IData/*31:0*/ i__DOT__index, 
                                                           Vtb_rng_m_inst_typename_alias_t__struct__0 i) -> 
                                                       CData/*31:0*/ {
            return (((i.__PVT__alias_type_name == requested_type_name) 
                     && ([&]() {
                            this->__Vfunc_uvm_is_match__181__str 
                                = full_inst_path;
                            this->__Vfunc_uvm_is_match__181__expr 
                                = VL_CVT_PACK_STR_NN(
                                                     i
                                                     .__PVT__full_inst_path);
                            this->__Vfunc_uvm_glob_to_re__182__glob 
                                = this->__Vfunc_uvm_is_match__181__expr;
                            this->__Vfunc_uvm_glob_to_re__182__Vfuncout 
                                = this->__Vfunc_uvm_glob_to_re__182__glob;
                            ++(vlSymsp->__Vcoverage[283]);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                = this->__Vfunc_uvm_glob_to_re__182__Vfuncout;
                            this->__Vfunc_uvm_re_match__183__str 
                                = this->__Vfunc_uvm_is_match__181__str;
                            this->__Vfunc_uvm_re_match__183__re 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                            __Vfunc_uvm_re_match__183____Vincrement1 = 0U;
                            {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__183__re))) {
                                    __Vfunc_uvm_re_match__183__Vfuncout = 0U;
                                    goto __Vlabel0;
                                } else {
                                    ++(vlSymsp->__Vcoverage[255]);
                                }
                                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,0U))) {
                                    this->__Vfunc_uvm_re_match__183__re 
                                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__183__re,1U,
                                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__183__re) 
                                                       - (IData)(1U)));
                                    ++(vlSymsp->__Vcoverage[256]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[257]);
                                }
                                while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__183__str)) 
                                        & (0x2aU != 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                          != VL_GETC_N(this->__Vfunc_uvm_re_match__183__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                         & (0x3fU != 
                                            VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                        __Vfunc_uvm_re_match__183__Vfuncout = 1U;
                                        goto __Vlabel0;
                                    } else {
                                        ++(vlSymsp->__Vcoverage[262]);
                                    }
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                    ++(vlSymsp->__Vcoverage[266]);
                                }
                                while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__183__str))) {
                                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                            = ((IData)(1U) 
                                               + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__183__re))) {
                                            __Vfunc_uvm_re_match__183__Vfuncout = 0U;
                                            goto __Vlabel0;
                                        } else {
                                            ++(vlSymsp->__Vcoverage[268]);
                                        }
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                            = ((IData)(1U) 
                                               + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                        ++(vlSymsp->__Vcoverage[274]);
                                    } else {
                                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                              == VL_GETC_N(this->__Vfunc_uvm_re_match__183__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                             | (0x3fU 
                                                == 
                                                VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            ++(vlSymsp->__Vcoverage[269]);
                                        } else {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                            __Vfunc_uvm_re_match__183____Vincrement1 
                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                = __Vfunc_uvm_re_match__183____Vincrement1;
                                            ++(vlSymsp->__Vcoverage[270]);
                                        }
                                        if ((0x3fU 
                                             == VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                            ++(vlSymsp->__Vcoverage[271]);
                                        }
                                        if ((VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                             == VL_GETC_N(this->__Vfunc_uvm_re_match__183__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                            ++(vlSymsp->__Vcoverage[272]);
                                        }
                                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                              != VL_GETC_N(this->__Vfunc_uvm_re_match__183__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                             & (0x3fU 
                                                != 
                                                VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                            ++(vlSymsp->__Vcoverage[273]);
                                        }
                                    }
                                    ++(vlSymsp->__Vcoverage[275]);
                                }
                                while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__183__re)) 
                                        & (0x2aU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    ++(vlSymsp->__Vcoverage[279]);
                                }
                                __Vfunc_uvm_re_match__183__Vfuncout 
                                    = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__183__re))
                                        ? 0U : 1U);
                                __Vlabel0: ;
                            }
                            if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                  != VL_LEN_IN(this->__Vfunc_uvm_re_match__183__str)) 
                                 & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                ++(vlSymsp->__Vcoverage[258]);
                            }
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                ++(vlSymsp->__Vcoverage[259]);
                            }
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__183__str))) {
                                ++(vlSymsp->__Vcoverage[260]);
                            }
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__183__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                ++(vlSymsp->__Vcoverage[263]);
                            }
                            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                ++(vlSymsp->__Vcoverage[264]);
                            }
                            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__183__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                ++(vlSymsp->__Vcoverage[265]);
                            }
                            if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                            VL_LEN_IN(this->__Vfunc_uvm_re_match__183__re)) 
                                 & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                ++(vlSymsp->__Vcoverage[276]);
                            }
                            if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__183__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                ++(vlSymsp->__Vcoverage[277]);
                            }
                            if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                            VL_LEN_IN(this->__Vfunc_uvm_re_match__183__re))) {
                                ++(vlSymsp->__Vcoverage[278]);
                            }
                            ++(vlSymsp->__Vcoverage[282]);
                            __Vfunc_uvm_is_match__181____VlefCall_0__uvm_re_match 
                                = __Vfunc_uvm_re_match__183__Vfuncout;
                            __Vfunc_uvm_is_match__181__Vfuncout 
                                = (0U == __Vfunc_uvm_is_match__181____VlefCall_0__uvm_re_match);
                            ++(vlSymsp->__Vcoverage[462]);
                        }(), (IData)(__Vfunc_uvm_is_match__181__Vfuncout))));
        }
    );
    if (VL_LTS_III(32, 0U, type_alias_inst.size())) {
        wrapper = type_alias_inst.at(0U).__PVT__orig
            .__PVT__m_type;
        ++(vlSymsp->__Vcoverage[1175]);
    } else {
        this->__VnoInFunc_m_resolve_type_name(vlSymsp, requested_type_name, wrapper);
        ++(vlSymsp->__Vcoverage[1176]);
    }
    m_resolve_type_name_by_inst__Vfuncrtn = wrapper;
    ++(vlSymsp->__Vcoverage[1177]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_pair(Vtb_rng__Syms* __restrict vlSymsp, Vtb_rng_m_uvm_factory_type_pair_t__struct__0 match_type_pair, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, CData/*0:0*/ &m_matches_type_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_pair\n"); );
    // Body
    m_matches_type_pair__Vfuncrtn = (((VlNull{} != match_type_pair
                                       .__PVT__m_type) 
                                      & (match_type_pair
                                         .__PVT__m_type 
                                         == requested_type)) 
                                     | ((("<unknown>"s 
                                          != match_type_pair
                                          .__PVT__m_type_name) 
                                         & (""s != match_type_pair
                                            .__PVT__m_type_name)) 
                                        & (match_type_pair
                                           .__PVT__m_type_name 
                                           == requested_type_name)));
    ++(vlSymsp->__Vcoverage[1178]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_inst_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ &m_matches_inst_override__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_inst_override\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__187____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__187____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__189__Vfuncout;
    __Vfunc_uvm_re_match__189__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__189____Vincrement1;
    __Vfunc_uvm_re_match__189____Vincrement1 = 0;
    // Body
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    CData/*0:0*/ __VlefCall_1__m_matches_type_pair;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_0__m_resolve_type_name_by_inst;
    Vtb_rng_m_uvm_factory_type_pair_t__struct__0 match_type_pair;
    {
        m_matches_inst_override__Vfuncrtn = 0U;
        match_type_pair = VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2068)
            ->__PVT__orig;
        if ((VlNull{} == match_type_pair.__PVT__m_type)) {
            this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(match_type_pair
                                                                             .__PVT__m_type_name), full_inst_path, __VlefCall_0__m_resolve_type_name_by_inst);
            match_type_pair.__PVT__m_type = __VlefCall_0__m_resolve_type_name_by_inst;
            ++(vlSymsp->__Vcoverage[1179]);
        } else {
            ++(vlSymsp->__Vcoverage[1180]);
        }
        this->__VnoInFunc_m_matches_type_pair(vlSymsp, match_type_pair, requested_type, requested_type_name, __VlefCall_1__m_matches_type_pair);
        if (__VlefCall_1__m_matches_type_pair) {
            if (VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2075)
                ->__PVT__has_wildcard) {
                __VlefCall_2__uvm_is_match = ("*"s 
                                              == VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2076)
                                              ->__PVT__full_inst_path);
                if ((1U & (~ (IData)(__VlefCall_2__uvm_is_match)))) {
                    this->__Vfunc_uvm_is_match__187__str 
                        = full_inst_path;
                    this->__Vfunc_uvm_is_match__187__expr 
                        = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2077)
                                             ->__PVT__full_inst_path);
                    this->__Vfunc_uvm_glob_to_re__188__glob 
                        = this->__Vfunc_uvm_is_match__187__expr;
                    this->__Vfunc_uvm_glob_to_re__188__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__188__glob;
                    ++(vlSymsp->__Vcoverage[283]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__188__Vfuncout;
                    this->__Vfunc_uvm_re_match__189__str 
                        = this->__Vfunc_uvm_is_match__187__str;
                    this->__Vfunc_uvm_re_match__189__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__189____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__189__re))) {
                            __Vfunc_uvm_re_match__189__Vfuncout = 0U;
                            goto __Vlabel1;
                        } else {
                            ++(vlSymsp->__Vcoverage[255]);
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,0U))) {
                            this->__Vfunc_uvm_re_match__189__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__189__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__189__re) 
                                               - (IData)(1U)));
                            ++(vlSymsp->__Vcoverage[256]);
                        } else {
                            ++(vlSymsp->__Vcoverage[257]);
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__189__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__189__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__189__Vfuncout = 1U;
                                goto __Vlabel1;
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
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__189__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__189__re))) {
                                    __Vfunc_uvm_re_match__189__Vfuncout = 0U;
                                    goto __Vlabel1;
                                } else {
                                    ++(vlSymsp->__Vcoverage[268]);
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                ++(vlSymsp->__Vcoverage[274]);
                            } else {
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      == VL_GETC_N(this->__Vfunc_uvm_re_match__189__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                    ++(vlSymsp->__Vcoverage[269]);
                                } else {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                    __Vfunc_uvm_re_match__189____Vincrement1 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = __Vfunc_uvm_re_match__189____Vincrement1;
                                    ++(vlSymsp->__Vcoverage[270]);
                                }
                                if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                    ++(vlSymsp->__Vcoverage[271]);
                                }
                                if ((VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__189__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                                    ++(vlSymsp->__Vcoverage[272]);
                                }
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      != VL_GETC_N(this->__Vfunc_uvm_re_match__189__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    ++(vlSymsp->__Vcoverage[273]);
                                }
                            }
                            ++(vlSymsp->__Vcoverage[275]);
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__189__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            ++(vlSymsp->__Vcoverage[279]);
                        }
                        __Vfunc_uvm_re_match__189__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__189__re))
                                ? 0U : 1U);
                        __Vlabel1: ;
                    }
                    if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                          != VL_LEN_IN(this->__Vfunc_uvm_re_match__189__str)) 
                         & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[258]);
                    }
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[259]);
                    }
                    if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__189__str))) {
                        ++(vlSymsp->__Vcoverage[260]);
                    }
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__189__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[263]);
                    }
                    if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[264]);
                    }
                    if ((VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                         == VL_GETC_N(this->__Vfunc_uvm_re_match__189__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                        ++(vlSymsp->__Vcoverage[265]);
                    }
                    if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__189__re)) 
                         & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        ++(vlSymsp->__Vcoverage[276]);
                    }
                    if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__189__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        ++(vlSymsp->__Vcoverage[277]);
                    }
                    if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                    VL_LEN_IN(this->__Vfunc_uvm_re_match__189__re))) {
                        ++(vlSymsp->__Vcoverage[278]);
                    }
                    ++(vlSymsp->__Vcoverage[282]);
                    __Vfunc_uvm_is_match__187____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__189__Vfuncout;
                    __VlefCall_2__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__187____VlefCall_0__uvm_re_match);
                    ++(vlSymsp->__Vcoverage[462]);
                }
                m_matches_inst_override__Vfuncrtn = __VlefCall_2__uvm_is_match;
                goto __Vlabel0;
            } else {
                m_matches_inst_override__Vfuncrtn = 
                    (VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2080)
                     ->__PVT__full_inst_path == full_inst_path);
                goto __Vlabel0;
            }
            ++(vlSymsp->__Vcoverage[1183]);
        } else {
            ++(vlSymsp->__Vcoverage[1184]);
        }
        m_matches_inst_override__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1185]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ match_original_type, CData/*0:0*/ resolve_null_type_by_inst, CData/*0:0*/ &m_matches_type_override__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_matches_type_override\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_1__m_resolve_type_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __VlefCall_0__m_resolve_type_name_by_inst;
    Vtb_rng_m_uvm_factory_type_pair_t__struct__0 match_type_pair;
    m_matches_type_override__Vfuncrtn = 0U;
    match_type_pair = ((IData)(match_original_type)
                        ? VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2095)
                       ->__PVT__orig : VL_NULL_CHECK(__SYM__override, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_factory.svh", 2095)
                       ->__PVT__ovrd);
    if ((VlNull{} == match_type_pair.__PVT__m_type)) {
        if (resolve_null_type_by_inst) {
            this->__VnoInFunc_m_resolve_type_name_by_inst(vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(match_type_pair
                                                                             .__PVT__m_type_name), full_inst_path, __VlefCall_0__m_resolve_type_name_by_inst);
            match_type_pair.__PVT__m_type = __VlefCall_0__m_resolve_type_name_by_inst;
            ++(vlSymsp->__Vcoverage[1188]);
        } else {
            this->__VnoInFunc_m_resolve_type_name(vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(match_type_pair
                                                                     .__PVT__m_type_name), __VlefCall_1__m_resolve_type_name);
            match_type_pair.__PVT__m_type = __VlefCall_1__m_resolve_type_name;
            ++(vlSymsp->__Vcoverage[1189]);
        }
        ++(vlSymsp->__Vcoverage[1190]);
    } else {
        ++(vlSymsp->__Vcoverage[1191]);
    }
    this->__VnoInFunc_m_matches_type_pair(vlSymsp, match_type_pair, requested_type, requested_type_name, m_matches_type_override__Vfuncrtn);
    if (match_original_type) {
        ++(vlSymsp->__Vcoverage[1186]);
    }
    if ((1U & (~ (IData)(match_original_type)))) {
        ++(vlSymsp->__Vcoverage[1187]);
    }
    ++(vlSymsp->__Vcoverage[1192]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_default_factory::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_types.atDefault() = 0;
    __PVT__m_lookup_strs.atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_default_factory::~Vtb_rng_uvm_pkg__03a__03auvm_default_factory() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_default_factory::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_default_factory::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_default_factory::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_types:" + VL_TO_STRING(__PVT__m_types);
    out += ", m_lookup_strs:" + VL_TO_STRING(__PVT__m_lookup_strs);
    out += ", m_type_names:" + VL_TO_STRING(__PVT__m_type_names);
    out += ", m_inst_aliases:" + VL_TO_STRING(__PVT__m_inst_aliases);
    out += ", m_type_overrides:" + VL_TO_STRING(__PVT__m_type_overrides);
    out += ", m_inst_overrides:" + VL_TO_STRING(__PVT__m_inst_overrides);
    out += ", m_override_info:" + VL_TO_STRING(__PVT__m_override_info);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_factory::to_string_middle();
    return (out);
}
