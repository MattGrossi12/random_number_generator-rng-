// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_rh_init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_rh_init\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> __VlefCall_1__create;
    std::string __VlefCall_0__get_name;
    if (this->__PVT__m_rh_set) {
        ++(vlSymsp->__Vcoverage[15680]);
    } else {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), VlNull{}, ""s, __VlefCall_1__create);
        this->__VnoInFunc_set_report_handler(vlSymsp, __VlefCall_1__create);
        ++(vlSymsp->__Vcoverage[15679]);
    }
    if ((1U & (~ (IData)(this->__PVT__m_rh_set)))) {
        ++(vlSymsp->__Vcoverage[15681]);
    }
    if (this->__PVT__m_rh_set) {
        ++(vlSymsp->__Vcoverage[15682]);
    }
    ++(vlSymsp->__Vcoverage[15683]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[15684]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_report_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_report_object\n"); );
    // Body
    uvm_get_report_object__Vfuncrtn = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object>{this};
    ++(vlSymsp->__Vcoverage[15685]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    {
        uvm_report_enabled__Vfuncrtn = 0U;
        this->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, severity, id, __VlefCall_0__get_report_verbosity_level);
        if (VL_LTS_III(32, __VlefCall_0__get_report_verbosity_level, verbosity)) {
            uvm_report_enabled__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[15687]);
        }
        uvm_report_enabled__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[15688]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if (((0U == (IData)(severity)) & (~ (IData)(report_enabled_checked)))) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, verbosity, (IData)(severity), id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                ++(vlSymsp->__Vcoverage[15690]);
            } else {
                goto __Vlabel0;
            }
            ++(vlSymsp->__Vcoverage[15691]);
        } else {
            ++(vlSymsp->__Vcoverage[15692]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 158)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, filename, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
    if (((0U == (IData)(severity)) & (~ (IData)(report_enabled_checked)))) {
        ++(vlSymsp->__Vcoverage[15693]);
    }
    if (report_enabled_checked) {
        ++(vlSymsp->__Vcoverage[15694]);
    }
    if ((0U != (IData)(severity))) {
        ++(vlSymsp->__Vcoverage[15695]);
    }
    ++(vlSymsp->__Vcoverage[15696]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
    ++(vlSymsp->__Vcoverage[15697]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
    ++(vlSymsp->__Vcoverage[15698]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
    ++(vlSymsp->__Vcoverage[15699]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
    ++(vlSymsp->__Vcoverage[15700]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_process_report_message\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 270)->__VnoInFunc_set_report_object(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object>{this});
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 271)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
    ++(vlSymsp->__Vcoverage[15701]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level\n"); );
    // Body
    get_report_verbosity_level__Vfuncrtn = 0U;
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 290)->__VnoInFunc_get_verbosity_level(vlSymsp, severity, id, get_report_verbosity_level__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[15702]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_max_verbosity_level(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_report_max_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_max_verbosity_level\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    get_report_max_verbosity_level__Vfuncrtn = 0U;
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    get_report_max_verbosity_level__Vfuncrtn = VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 303)
        ->__PVT__m_max_verbosity_level;
    ++(vlSymsp->__Vcoverage[15703]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 316)->__VnoInFunc_set_verbosity_level(vlSymsp, verbosity_level);
    ++(vlSymsp->__Vcoverage[15704]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 323)->__VnoInFunc_set_id_verbosity(vlSymsp, id, verbosity);
    ++(vlSymsp->__Vcoverage[15705]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_verbosity(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_verbosity\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 343)->__VnoInFunc_set_severity_id_verbosity(vlSymsp, severity, id, verbosity);
    ++(vlSymsp->__Vcoverage[15706]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action\n"); );
    // Body
    get_report_action__Vfuncrtn = 0U;
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 360)->__VnoInFunc_get_action(vlSymsp, severity, id, get_report_action__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[15707]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 369)->__VnoInFunc_set_severity_action(vlSymsp, severity, action);
    ++(vlSymsp->__Vcoverage[15708]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 376)->__VnoInFunc_set_id_action(vlSymsp, id, action);
    ++(vlSymsp->__Vcoverage[15709]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 394)->__VnoInFunc_set_severity_id_action(vlProcess, vlSymsp, severity, id, action);
    ++(vlSymsp->__Vcoverage[15710]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle\n"); );
    // Body
    get_report_file_handle__Vfuncrtn = 0U;
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 411)->__VnoInFunc_get_file_handle(vlSymsp, severity, id, get_report_file_handle__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[15711]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_default_file(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_default_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 420)->__VnoInFunc_set_default_file(vlSymsp, file);
    ++(vlSymsp->__Vcoverage[15712]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file(Vtb_rng__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 428)->__VnoInFunc_set_id_file(vlSymsp, id, file);
    ++(vlSymsp->__Vcoverage[15713]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_file(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 435)->__VnoInFunc_set_severity_file(vlSymsp, severity, file);
    ++(vlSymsp->__Vcoverage[15714]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_file(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 458)->__VnoInFunc_set_severity_id_file(vlSymsp, severity, id, file);
    ++(vlSymsp->__Vcoverage[15715]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 472)->__VnoInFunc_set_severity_override(vlSymsp, cur_severity, (IData)(new_severity));
    ++(vlSymsp->__Vcoverage[15716]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override\n"); );
    // Body
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 481)->__VnoInFunc_set_severity_id_override(vlProcess, vlSymsp, cur_severity, id, (IData)(new_severity));
    ++(vlSymsp->__Vcoverage[15717]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> handler) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT__m_rh = handler;
    this->__PVT__m_rh_set = 1U;
    ++(vlSymsp->__Vcoverage[15718]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_handler(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_handler\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    get_report_handler__Vfuncrtn = this->__PVT__m_rh;
    ++(vlSymsp->__Vcoverage[15719]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_reset_report_handler(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_reset_report_handler\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_m_rh_init(vlProcess, vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_object.svh", 521)->__VnoInFunc_initialize(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[15720]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_rh_set = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_report_object::~Vtb_rng_uvm_pkg__03a__03auvm_report_object() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_rh:" + VL_TO_STRING(__PVT__m_rh);
    out += ", m_rh_set:" + VL_TO_STRING(__PVT__m_rh_set);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
