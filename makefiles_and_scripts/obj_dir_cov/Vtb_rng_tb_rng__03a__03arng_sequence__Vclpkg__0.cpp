// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi64> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[531]);
}

void Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_sequence__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "rng_sequence"s;
    ++(vlSymsp->__Vcoverage[536]);
}

void Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[532]);
}

void Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_sequence> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_tb_rng__03a__03arng_sequence, vlProcess, vlSymsp, "rng_sequence"s);
        ++(vlSymsp->__Vcoverage[533]);
    } else {
        tmp = VL_NEW(Vtb_rng_tb_rng__03a__03arng_sequence, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[534]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[535]);
}

void Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "rng_sequence"s;
    ++(vlSymsp->__Vcoverage[537]);
}

void Vtb_rng_tb_rng__03a__03arng_sequence::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__num_rounds = 0x00000018U;
    ++(vlSymsp->__Vcoverage[538]);
    this->__PVT__seed = 0U;
    ++(vlSymsp->__Vcoverage[539]);
    this->__PVT__use_seed = 0U;
    ++(vlSymsp->__Vcoverage[540]);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[541]);
}

VlCoroutine Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_2__convert2string;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1__DOT__r;
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> tr;
    IData/*31:0*/ s;
    IData/*31:0*/ lo;
    IData/*31:0*/ hi;
    QData/*63:0*/ clk_tog;
    IData/*31:0*/ inter_req_tmp;
    lo = 0U;
    hi = 0U;
    clk_tog = 0;
    inter_req_tmp = 0U;
    s = ((IData)(this->__PVT__use_seed) ? this->__PVT__seed
          : VL_RANDOM_I());
    this->__VnoInFunc_srandom(vlSymsp, s);
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_SEQ"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_SEQ"s, VL_SFORMATF_N_NX("Iniciando rng_sequence: num_rounds=%0# seed=%0#",0,
                                                                                32,
                                                                                this->__PVT__num_rounds,
                                                                                32,
                                                                                s) , 0x00000064U, "../UVM/UVM_sequence.sv"s, 0x00000026U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[544]);
    } else {
        ++(vlSymsp->__Vcoverage[545]);
    }
    unnamedblk1__DOT__r = 0U;
    unnamedblk1__DOT__r = 1U;
    while (VL_LTES_III(32, unnamedblk1__DOT__r, this->__PVT__num_rounds)) {
        if (VL_GTES_III(32, 8U, unnamedblk1__DOT__r)) {
            clk_tog = 3ULL;
            lo = 5U;
            hi = 0x00000064U;
            ++(vlSymsp->__Vcoverage[548]);
        } else if (VL_GTES_III(32, 0x00000010U, unnamedblk1__DOT__r)) {
            clk_tog = 7ULL;
            lo = 0x0000000fU;
            hi = 0x00000096U;
            ++(vlSymsp->__Vcoverage[546]);
        } else {
            clk_tog = 0x000000000000000aULL;
            lo = 0x00000019U;
            hi = 0x000000faU;
            ++(vlSymsp->__Vcoverage[547]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi62__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, VL_SFORMATF_N_NX("tr_r%0d",0,
                                                                                32,
                                                                                unnamedblk1__DOT__r) , VlNull{}, ""s, tr);
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, tr, 0xffffffffU, VlNull{});
        VL_NULL_CHECK(tr, "../UVM/UVM_sequence.sv", 68)->__PVT__round_id 
            = unnamedblk1__DOT__r;
        VL_NULL_CHECK(tr, "../UVM/UVM_sequence.sv", 71)->__PVT__clk_toggle_tu 
            = clk_tog;
        inter_req_tmp = VL_URANDOM_RANGE_I(hi, lo);
        VL_NULL_CHECK(tr, "../UVM/UVM_sequence.sv", 78)->__PVT__inter_req_tu 
            = inter_req_tmp;
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_SEQ_ITEM"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            VL_NULL_CHECK(tr, "../UVM/UVM_sequence.sv", 83)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_SEQ_ITEM"s, VL_SFORMATF_N_NX("Gerado: %@",0,
                                                                                -1,
                                                                                &(__VlefCall_2__convert2string)) , 0x00000064U, "../UVM/UVM_sequence.sv"s, 0x00000053U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[549]);
        } else {
            ++(vlSymsp->__Vcoverage[550]);
        }
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, tr, 0xffffffffU);
        unnamedblk1__DOT__r = ((IData)(1U) + unnamedblk1__DOT__r);
        ++(vlSymsp->__Vcoverage[551]);
    }
    if (this->__PVT__use_seed) {
        ++(vlSymsp->__Vcoverage[542]);
    }
    if ((1U & (~ (IData)(this->__PVT__use_seed)))) {
        ++(vlSymsp->__Vcoverage[543]);
    }
    ++(vlSymsp->__Vcoverage[552]);
    co_return;
}

void Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_tb_rng__03a__03arng_sequence::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_tb_rng__03a__03arng_sequence::~Vtb_rng_tb_rng__03a__03arng_sequence() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::~\n"); );
}

std::string Vtb_rng_tb_rng__03a__03arng_sequence::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_tb_rng__03a__03arng_sequence::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_sequence::to_string_middle\n"); );
    // Body
    std::string out;
    out += "num_rounds:" + VL_TO_STRING(__PVT__num_rounds);
    out += ", seed:" + VL_TO_STRING(__PVT__seed);
    out += ", use_seed:" + VL_TO_STRING(__PVT__use_seed);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126::to_string_middle();
    return (out);
}
