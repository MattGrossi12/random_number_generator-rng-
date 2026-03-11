// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_get_value(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &get_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_get_value\n"); );
    // Body
    get_value__Vfuncrtn = this->__PVT___val;
    ++(vlSymsp->__Vcoverage[11234]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_set_value(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_set_value\n"); );
    // Body
    this->__PVT___val = value;
    ++(vlSymsp->__Vcoverage[11235]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_print\n"); );
    // Body
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 258)->__VnoInFunc_print_object(vlProcess, vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val, 0x2eU);
    ++(vlSymsp->__Vcoverage[11236]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_record\n"); );
    // Body
    VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 262)->__VnoInFunc_record_object(vlProcess, vlSymsp, Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name, this->__PVT___val);
    ++(vlSymsp->__Vcoverage[11237]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_copy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element> _rhs;
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, _rhs);
    if (VL_UNLIKELY(((! __VlefExpr_0)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_report_message.svh:267: Assertion failed in %Nuvm_pkg.uvm_report_message_object_element.do_copy: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 267, "");
    }
    Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___name 
        = VL_NULL_CHECK(_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 268)
        ->__PVT___name;
    this->__PVT___val = VL_NULL_CHECK(_rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 269)
        ->__PVT___val;
    Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base::__PVT___action 
        = VL_NULL_CHECK(rhs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 270)
        ->__PVT___action;
    ++(vlSymsp->__Vcoverage[11238]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_clone(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::__VnoInFunc_do_clone\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element> tmp;
    tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element, vlSymsp);
    VL_NULL_CHECK(tmp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 275)->__VnoInFunc_copy(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element>{this});
    do_clone__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[11239]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::init(Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[11240]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::~Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_val:" + VL_TO_STRING(__PVT___val);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base::to_string_middle();
    return (out);
}
