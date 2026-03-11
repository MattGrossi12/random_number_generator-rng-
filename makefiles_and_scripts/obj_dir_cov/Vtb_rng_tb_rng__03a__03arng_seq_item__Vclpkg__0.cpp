// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi62> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[516]);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_seq_item__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "rng_seq_item"s;
    ++(vlSymsp->__Vcoverage[521]);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[517]);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_tb_rng__03a__03arng_seq_item, vlProcess, vlSymsp, "rng_seq_item"s);
        ++(vlSymsp->__Vcoverage[518]);
    } else {
        tmp = VL_NEW(Vtb_rng_tb_rng__03a__03arng_seq_item, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[519]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[520]);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "rng_seq_item"s;
    ++(vlSymsp->__Vcoverage[522]);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[523]);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("round=%0# clk_toggle=%0tTU(period=%0tTU) inter_req=%0#TU",0,
                                                32,
                                                this->__PVT__round_id,
                                                64,
                                                this->__PVT__clk_toggle_tu,
                                                -12,
                                                64,
                                                VL_SHIFTL_QQI(64,64,32, this->__PVT__clk_toggle_tu, 1U),
                                                -12,
                                                32,
                                                this->__PVT__inter_req_tu) ;
    ++(vlSymsp->__Vcoverage[524]);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    ++(vlSymsp->__Vcoverage[525]);
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__inter_req_tu = VL_RANDOM_RNG_I(__Vm_rng);
}

void Vtb_rng_tb_rng__03a__03arng_seq_item::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__round_id = 0;
    __PVT__clk_toggle_tu = VL_SCOPED_RAND_RESET_Q(64, 8971211081315385712ULL, 12359473872160730601ull);
    __PVT__inter_req_tu = 0;
}

Vtb_rng_tb_rng__03a__03arng_seq_item::~Vtb_rng_tb_rng__03a__03arng_seq_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::~\n"); );
}

std::string Vtb_rng_tb_rng__03a__03arng_seq_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_tb_rng__03a__03arng_seq_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_seq_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "round_id:" + VL_TO_STRING(__PVT__round_id);
    out += ", clk_toggle_tu:" + VL_TO_STRING(__PVT__clk_toggle_tu);
    out += ", inter_req_tu:" + VL_TO_STRING(__PVT__inter_req_tu);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
