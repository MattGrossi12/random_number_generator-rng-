// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_tb_rng__03a__03arng_test__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi70> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_test__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi70__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[664]);
}

void Vtb_rng_tb_rng__03a__03arng_test__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_test__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "rng_test"s;
    ++(vlSymsp->__Vcoverage[666]);
}

void Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi70> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi70__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[665]);
}

void Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "rng_test"s;
    ++(vlSymsp->__Vcoverage[667]);
}

void Vtb_rng_tb_rng__03a__03arng_test::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_test::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[668]);
}

void Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_build_phase\n"); );
    // Locals
    Vtb_rng_rng_if* __Vfunc_get__4__value;
    __Vfunc_get__4__value = nullptr;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    CData/*0:0*/ __VExpr_hc7dd6385__0;
    __VExpr_hc7dd6385__0 = 0;
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi69__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                VlClassRef<Vtb_rng_tb_rng__03a__03arng_test>{this}, ""s, this->__PVT__env);
    __Vfunc_get__4__value = this->__PVT__vif;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vtb_rng_tb_rng__03a__03arng_test>{this}, ""s, "vif"s, __Vfunc_get__4__value, __VExpr_hc7dd6385__0);
    this->__PVT__vif = __Vfunc_get__4__value;
    if (__VExpr_hc7dd6385__0) {
        ++(vlSymsp->__Vcoverage[672]);
    } else {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NOVIF"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOVIF"s, "vif nao encontrado no test"s, 0U, "../UVM/../UVM/testbench.sv"s, 0x0000004cU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[669]);
        } else {
            ++(vlSymsp->__Vcoverage[670]);
        }
        ++(vlSymsp->__Vcoverage[671]);
    }
    if ((1U & (~ (IData)(__VExpr_hc7dd6385__0)))) {
        ++(vlSymsp->__Vcoverage[673]);
    }
    if (__VExpr_hc7dd6385__0) {
        ++(vlSymsp->__Vcoverage[674]);
    }
    ++(vlSymsp->__Vcoverage[675]);
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_apply_reset(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_apply_reset\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__2_Vtrigm___PVT__rst_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/../UVM/testbench.sv", 82)
     ->__PVT__rst_i) = 0U;
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__3_Vtrigm___PVT__req_num_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/../UVM/testbench.sv", 83)
     ->__PVT__req_num_i) = 0U;
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__4_Vtrigm___PVT__wr_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/../UVM/testbench.sv", 84)
     ->__PVT__wr_i) = 0U;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_TEST"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_TEST"s, VL_SFORMATF_N_NX("Reset assert em t=%0t",0,
                                                                                64,
                                                                                VL_TIME_UNITED_Q(1),
                                                                                -12) , 0x00000064U, "../UVM/../UVM/testbench.sv"s, 0x00000056U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[676]);
    } else {
        ++(vlSymsp->__Vcoverage[677]);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000019ULL, 
                                            vlProcess, 
                                            "../UVM/../UVM/testbench.sv", 
                                            87);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__2_Vtrigm___PVT__rst_i = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/../UVM/testbench.sv", 88)
     ->__PVT__rst_i) = 1U;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_TEST"s, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_TEST"s, VL_SFORMATF_N_NX("Reset deassert em t=%0t",0,
                                                                                64,
                                                                                VL_TIME_UNITED_Q(1),
                                                                                -12) , 0x00000064U, "../UVM/../UVM/testbench.sv"s, 0x00000059U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[678]);
    } else {
        ++(vlSymsp->__Vcoverage[679]);
    }
    ++(vlSymsp->__Vcoverage[680]);
    co_return;
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_run_phase\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_sequence> seq;
    co_await Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(phase, "../UVM/../UVM/testbench.sv", 96)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_tb_rng__03a__03arng_test>{this}, ""s, 1U);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h7b4084d7__5_Vtrigm___PVT__clk_toggle_tu = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "../UVM/../UVM/testbench.sv", 99)
     ->__PVT__clk_toggle_tu) = 3ULL;
    co_await this->__VnoInFunc_apply_reset(vlProcess, vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi64__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seq"s, VlNull{}, ""s, seq);
    co_await VL_NULL_CHECK(seq, "../UVM/../UVM/testbench.sv", 104)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env, "../UVM/../UVM/testbench.sv", 104)
                                                                                ->__PVT__agent, "../UVM/../UVM/testbench.sv", 104)
                                                                                ->__PVT__sequencer, VlNull{}, 0xffffffffU, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                            vlProcess, 
                                            "../UVM/../UVM/testbench.sv", 
                                            107);
    VL_NULL_CHECK(phase, "../UVM/../UVM/testbench.sv", 108)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_tb_rng__03a__03arng_test>{this}, ""s, 1U);
    ++(vlSymsp->__Vcoverage[681]);
    co_return;
}

void Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_tb_rng__03a__03arng_test::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

Vtb_rng_tb_rng__03a__03arng_test::~Vtb_rng_tb_rng__03a__03arng_test() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::~\n"); );
}

std::string Vtb_rng_tb_rng__03a__03arng_test::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_tb_rng__03a__03arng_test::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_rng_tb_rng__03a__03arng_test::to_string_middle\n"); );
    // Body
    std::string out;
    out += "env:" + VL_TO_STRING(__PVT__env);
    out += ", vif:" + VL_TO_STRING(__PVT__vif);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
