// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_new_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_new_report_message\n"); );
    // Body
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    std::string rand_state;
    rand_state = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 524)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
        ++(vlSymsp->__Vcoverage[11272]);
    } else {
        ++(vlSymsp->__Vcoverage[11273]);
    }
    new_report_message__Vfuncrtn = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, name);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 527)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
        ++(vlSymsp->__Vcoverage[11274]);
    } else {
        ++(vlSymsp->__Vcoverage[11275]);
    }
    ++(vlSymsp->__Vcoverage[11276]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi16> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi16__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[11283]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_report_message"s;
    ++(vlSymsp->__Vcoverage[11288]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT___report_message_element_container 
        = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, "element_container"s);
    ++(vlSymsp->__Vcoverage[11271]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_print\n"); );
    // Locals
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base>> __Vtask_get_elements__12__Vfuncout;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    // Body
    IData/*31:0*/ __VlefCall_2__size;
    std::string __VlefExpr_1;
    IData/*31:0*/ __VlefCond_0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base>> unnamedblk1__DOT__elements;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ l_verbosity;
    l_verbosity = 0U;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 563)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "severity"s, "uvm_severity"s, 2U, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name21
                                                                                [this->__PVT___severity]), 0x2eU);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 565)->__VnoInFunc_print_string(vlProcess, vlSymsp, "id"s, this->__PVT___id, 0x2eU);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 566)->__VnoInFunc_print_string(vlProcess, vlSymsp, "message"s, this->__PVT___message, 0x2eU);
    if (Vtb_rng___024unit::__Venumtab_enum_valid25.at(this->__PVT___verbosity)) {
        l_verbosity = this->__PVT___verbosity;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        __VlefExpr_1 = VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name25
                                          .at(l_verbosity));
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 568)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "verbosity"s, "uvm_verbosity"s, 0x00000020U, __VlefExpr_1, 0x2eU);
        ++(vlSymsp->__Vcoverage[11277]);
    } else {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT___verbosity);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 571)->__VnoInFunc_print_field(vlProcess, vlSymsp, "verbosity"s, __Vtemp_1, 0x00000020U, 0x07000000U, 0x2eU, ""s);
        ++(vlSymsp->__Vcoverage[11278]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 572)->__VnoInFunc_print_string(vlProcess, vlSymsp, "filename"s, this->__PVT___filename, 0x2eU);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT___line);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 573)->__VnoInFunc_print_field(vlProcess, vlSymsp, "line"s, __Vtemp_2, 0x00000020U, 0x03000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 574)->__VnoInFunc_print_string(vlProcess, vlSymsp, "context_name"s, this->__PVT___context_name, 0x2eU);
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 576)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
    if ((0U != __VlefCall_2__size)) {
        unnamedblk1__DOT__elements.clear();
        VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 578)->__VnoInFunc_get_elements(vlSymsp, __Vtask_get_elements__12__Vfuncout);
        unnamedblk1__DOT__elements = __Vtask_get_elements__12__Vfuncout;
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, unnamedblk1__DOT__elements.size())) {
            VL_NULL_CHECK(unnamedblk1__DOT__elements.at(unnamedblk1__DOT__unnamedblk2__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 580)->__VnoInFunc_print(vlProcess, vlSymsp, printer);
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
            ++(vlSymsp->__Vcoverage[11279]);
        }
        ++(vlSymsp->__Vcoverage[11280]);
    } else {
        ++(vlSymsp->__Vcoverage[11281]);
    }
    ++(vlSymsp->__Vcoverage[11282]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi16> __Vfunc_get__14__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi16__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__14__Vfuncout;
    ++(vlSymsp->__Vcoverage[11284]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, "uvm_report_message"s);
        ++(vlSymsp->__Vcoverage[11285]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[11286]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[11287]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_message"s;
    ++(vlSymsp->__Vcoverage[11289]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message;
    {
        Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, report_message);
        if (((! __VlefExpr_0) || (VlNull{} == rhs))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11291]);
        }
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 603)->__VnoInFunc_get_report_object(vlSymsp, this->__PVT___report_object);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 604)->__VnoInFunc_get_report_handler(vlSymsp, this->__PVT___report_handler);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 605)->__VnoInFunc_get_report_server(vlSymsp, this->__PVT___report_server);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 606)->__VnoInFunc_get_context(vlSymsp, this->__PVT___context_name);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 607)->__VnoInFunc_get_file(vlSymsp, this->__PVT___file);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 608)->__VnoInFunc_get_filename(vlSymsp, this->__PVT___filename);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 609)->__VnoInFunc_get_line(vlSymsp, this->__PVT___line);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 610)->__VnoInFunc_get_action(vlSymsp, this->__PVT___action);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 611)->__VnoInFunc_get_severity(vlSymsp, this->__PVT___severity);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 612)->__VnoInFunc_get_id(vlSymsp, this->__PVT___id);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 613)->__VnoInFunc_get_message(vlSymsp, this->__PVT___message);
        VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 614)->__VnoInFunc_get_verbosity(vlSymsp, this->__PVT___verbosity);
        VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 616)->__VnoInFunc_copy(vlProcess, vlSymsp, VL_NULL_CHECK(report_message, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 616)
                                                                                ->__PVT___report_message_element_container, VlNull{});
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11292]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_object\n"); );
    // Body
    get_report_object__Vfuncrtn = this->__PVT___report_object;
    ++(vlSymsp->__Vcoverage[11293]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_object\n"); );
    // Body
    this->__PVT___report_object = ro;
    ++(vlSymsp->__Vcoverage[11294]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_handler(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_handler\n"); );
    // Body
    get_report_handler__Vfuncrtn = this->__PVT___report_handler;
    ++(vlSymsp->__Vcoverage[11295]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_handler(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> rh) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT___report_handler = rh;
    ++(vlSymsp->__Vcoverage[11296]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_server(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_server\n"); );
    // Body
    get_report_server__Vfuncrtn = this->__PVT___report_server;
    ++(vlSymsp->__Vcoverage[11297]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_server(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> rs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_server\n"); );
    // Body
    this->__PVT___report_server = rs;
    ++(vlSymsp->__Vcoverage[11298]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_severity(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_severity\n"); );
    // Body
    get_severity__Vfuncrtn = this->__PVT___severity;
    ++(vlSymsp->__Vcoverage[11299]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_severity(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ sev) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_severity\n"); );
    // Body
    this->__PVT___severity = sev;
    ++(vlSymsp->__Vcoverage[11300]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_id(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_id\n"); );
    // Body
    get_id__Vfuncrtn = this->__PVT___id;
    ++(vlSymsp->__Vcoverage[11301]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_id(Vtb_rng__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_id\n"); );
    // Body
    this->__PVT___id = id;
    ++(vlSymsp->__Vcoverage[11302]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_message(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_message\n"); );
    // Body
    get_message__Vfuncrtn = this->__PVT___message;
    ++(vlSymsp->__Vcoverage[11303]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_message(Vtb_rng__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_message\n"); );
    // Body
    this->__PVT___message = msg;
    ++(vlSymsp->__Vcoverage[11304]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_verbosity(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_verbosity\n"); );
    // Body
    get_verbosity__Vfuncrtn = this->__PVT___verbosity;
    ++(vlSymsp->__Vcoverage[11305]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_verbosity(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ ver) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_verbosity\n"); );
    // Body
    this->__PVT___verbosity = ver;
    ++(vlSymsp->__Vcoverage[11306]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_filename(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_filename__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_filename\n"); );
    // Body
    get_filename__Vfuncrtn = this->__PVT___filename;
    ++(vlSymsp->__Vcoverage[11307]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_filename(Vtb_rng__Syms* __restrict vlSymsp, std::string fname) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_filename\n"); );
    // Body
    this->__PVT___filename = fname;
    ++(vlSymsp->__Vcoverage[11308]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_line(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_line\n"); );
    // Body
    get_line__Vfuncrtn = this->__PVT___line;
    ++(vlSymsp->__Vcoverage[11309]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_line(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ ln) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_line\n"); );
    // Body
    this->__PVT___line = ln;
    ++(vlSymsp->__Vcoverage[11310]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_context(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_context\n"); );
    // Body
    get_context__Vfuncrtn = this->__PVT___context_name;
    ++(vlSymsp->__Vcoverage[11311]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_context(Vtb_rng__Syms* __restrict vlSymsp, std::string cn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_context\n"); );
    // Body
    this->__PVT___context_name = cn;
    ++(vlSymsp->__Vcoverage[11312]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_action(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_action\n"); );
    // Body
    get_action__Vfuncrtn = this->__PVT___action;
    ++(vlSymsp->__Vcoverage[11313]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_action(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ act) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_action\n"); );
    // Body
    this->__PVT___action = act;
    ++(vlSymsp->__Vcoverage[11314]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_file(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_file\n"); );
    // Body
    get_file__Vfuncrtn = this->__PVT___file;
    ++(vlSymsp->__Vcoverage[11315]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_file(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ fl) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_file\n"); );
    // Body
    this->__PVT___file = fl;
    ++(vlSymsp->__Vcoverage[11316]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_element_container(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_element_container\n"); );
    // Body
    get_element_container__Vfuncrtn = this->__PVT___report_message_element_container;
    ++(vlSymsp->__Vcoverage[11317]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_message(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_message\n"); );
    // Body
    this->__PVT___context_name = context_name;
    this->__PVT___filename = filename;
    this->__PVT___line = line;
    this->__PVT___severity = severity;
    this->__PVT___id = id;
    this->__PVT___message = message;
    this->__PVT___verbosity = verbosity;
    ++(vlSymsp->__Vcoverage[11318]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_message\n"); );
    // Body
    VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 889)->__VnoInFunc_record_string(vlProcess, vlSymsp, "message"s, this->__PVT___message);
    ++(vlSymsp->__Vcoverage[11319]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_core_properties\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    // Body
    std::string __VlefExpr_1;
    IData/*31:0*/ __VlefCond_0;
    std::string l_string;
    IData/*31:0*/ l_verbosity;
    l_string = ""s;
    l_verbosity = 0U;
    if ((""s != this->__PVT___context_name)) {
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 900)->__VnoInFunc_record_string(vlProcess, vlSymsp, "context_name"s, this->__PVT___context_name);
        ++(vlSymsp->__Vcoverage[11320]);
    } else {
        ++(vlSymsp->__Vcoverage[11321]);
    }
    VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 901)->__VnoInFunc_record_string(vlProcess, vlSymsp, "filename"s, this->__PVT___filename);
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT___line);
    VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 902)->__VnoInFunc_record_field(vlProcess, vlSymsp, "line"s, __Vtemp_1, 0x00000020U, 0x03000000U);
    VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 903)->__VnoInFunc_record_string(vlProcess, vlSymsp, "severity"s, 
                                                                                VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name21
                                                                                [this->__PVT___severity]));
    if (Vtb_rng___024unit::__Venumtab_enum_valid25.at(this->__PVT___verbosity)) {
        l_verbosity = this->__PVT___verbosity;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        __VlefExpr_1 = VL_CVT_PACK_STR_NN(Vtb_rng___024unit::__Venumtab_enum_name25
                                          .at(l_verbosity));
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 905)->__VnoInFunc_record_string(vlProcess, vlSymsp, "verbosity"s, __VlefExpr_1);
        ++(vlSymsp->__Vcoverage[11322]);
    } else {
        l_string = VL_SFORMATF_N_NX("%0d",0,32,this->__PVT___verbosity) ;
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 908)->__VnoInFunc_record_string(vlProcess, vlSymsp, "verbosity"s, l_string);
        ++(vlSymsp->__Vcoverage[11323]);
    }
    VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 911)->__VnoInFunc_record_string(vlProcess, vlSymsp, "id"s, this->__PVT___id);
    this->__VnoInFunc_m_record_message(vlProcess, vlSymsp, recorder);
    ++(vlSymsp->__Vcoverage[11324]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_record\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    this->__VnoInFunc_m_record_core_properties(vlProcess, vlSymsp, recorder);
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 921)->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
    ++(vlSymsp->__Vcoverage[11325]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_int(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_int\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 943)->__VnoInFunc_add_int(vlSymsp, name, value, size, radix, action);
    ++(vlSymsp->__Vcoverage[11326]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_string(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_string\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 956)->__VnoInFunc_add_string(vlSymsp, name, value, action);
    ++(vlSymsp->__Vcoverage[11327]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_object(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_object\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 969)->__VnoInFunc_add_object(vlSymsp, name, obj, action);
    ++(vlSymsp->__Vcoverage[11328]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT___severity = 0;
    __PVT___verbosity = 0;
    __PVT___line = 0;
    __PVT___action = 0;
    __PVT___file = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_report_message::~Vtb_rng_uvm_pkg__03a__03auvm_report_message() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_message::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_message::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_report_object:" + VL_TO_STRING(__PVT___report_object);
    out += ", _report_handler:" + VL_TO_STRING(__PVT___report_handler);
    out += ", _report_server:" + VL_TO_STRING(__PVT___report_server);
    out += ", _severity:" + VL_TO_STRING(__PVT___severity);
    out += ", _id:" + VL_TO_STRING(__PVT___id);
    out += ", _message:" + VL_TO_STRING(__PVT___message);
    out += ", _verbosity:" + VL_TO_STRING(__PVT___verbosity);
    out += ", _filename:" + VL_TO_STRING(__PVT___filename);
    out += ", _line:" + VL_TO_STRING(__PVT___line);
    out += ", _context_name:" + VL_TO_STRING(__PVT___context_name);
    out += ", _action:" + VL_TO_STRING(__PVT___action);
    out += ", _file:" + VL_TO_STRING(__PVT___file);
    out += ", _report_message_element_container:" + VL_TO_STRING(__PVT___report_message_element_container);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
