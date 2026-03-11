// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi67> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi67__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[605]);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_tb_rng__03a__03arng_scoreboard__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "rng_scoreboard"s;
    ++(vlSymsp->__Vcoverage[607]);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi67> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi67__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[606]);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "rng_scoreboard"s;
    ++(vlSymsp->__Vcoverage[608]);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent) {
    Vtb_rng_uvm_pkg__03a__03auvm_scoreboard::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__imp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_analysis_imp__Tz10_TBz136, vlProcess, vlSymsp, "imp"s, 
                              VlClassRef<Vtb_rng_tb_rng__03a__03arng_scoreboard>{this});
    ++(vlSymsp->__Vcoverage[609]);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_build_phase\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__PVT__sample_count = 0ULL;
    this->__PVT__stored_count = 0ULL;
    this->__PVT__dup_count = 0ULL;
    this->__PVT__last_val = 0U;
    this->__PVT__last_val_valid = 0U;
    this->__PVT__seen.clear();
    this->__PVT__seq.clear();
    ++(vlSymsp->__Vcoverage[610]);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_write\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    this->__PVT__sample_count = (1ULL + this->__PVT__sample_count);
    if ((1U & ((~ (IData)(this->__PVT__last_val_valid)) 
               | (val != this->__PVT__last_val)))) {
        this->__PVT__seq.push_back(val);
        this->__PVT__stored_count = (1ULL + this->__PVT__stored_count);
        if (this->__PVT__seen.exists(val)) {
            __VlefExpr_0 = ((IData)(1U) + this->__PVT__seen
                            .at(val));
            this->__PVT__seen.at(val) = __VlefExpr_0;
            this->__PVT__dup_count = (1ULL + this->__PVT__dup_count);
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "RNG_DUP"s, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "RNG_DUP"s, VL_SFORMATF_N_NX("Duplicado real na sequencia: val=%0# total_ocorrencias=%0#",0,
                                                                                32,
                                                                                val,
                                                                                32,
                                                                                this->__PVT__seen
                                                                                .at(val)) , 0U, "../UVM/UVM_scoreboard.sv"s, 0x00000058U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[611]);
            } else {
                ++(vlSymsp->__Vcoverage[612]);
            }
            ++(vlSymsp->__Vcoverage[613]);
        } else {
            this->__PVT__seen.at(val) = 1U;
            ++(vlSymsp->__Vcoverage[614]);
        }
        this->__PVT__last_val = val;
        this->__PVT__last_val_valid = 1U;
        ++(vlSymsp->__Vcoverage[615]);
    } else {
        ++(vlSymsp->__Vcoverage[616]);
    }
    if ((val != this->__PVT__last_val)) {
        ++(vlSymsp->__Vcoverage[617]);
    }
    if ((1U & (~ (IData)(this->__PVT__last_val_valid)))) {
        ++(vlSymsp->__Vcoverage[618]);
    }
    if (((IData)(this->__PVT__last_val_valid) & (val 
                                                 == this->__PVT__last_val))) {
        ++(vlSymsp->__Vcoverage[619]);
    }
    ++(vlSymsp->__Vcoverage[620]);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_report_phase\n"); );
    // Body
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk1__DOT__k;
    unnamedblk1__DOT__k = 0;
    CData/*0:0*/ unnamedblk1__DOT__k__Vfirst;
    unnamedblk1__DOT__k__Vfirst = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__k;
    VlQueue<IData/*31:0*/> keys;
    std::string hist;
    std::string list;
    QData/*63:0*/ uniq;
    keys.clear();
    keys.atDefault() = 0;
    hist = ""s;
    list = ""s;
    uniq = 0ULL;
    Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(vlProcess, vlSymsp, phase);
    keys.clear();
    __VlefExpr_0 = (0U != this->__PVT__seen.first(unnamedblk1__DOT__k));
    if (__VlefExpr_0) {
        unnamedblk1__DOT__k__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk1__DOT__k__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__seen.next(unnamedblk1__DOT__k));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk1__DOT__k__Vfirst = 0U;
            keys.push_back(unnamedblk1__DOT__k);
            ++(vlSymsp->__Vcoverage[624]);
        }
        __VlefExpr_2 = (0U != this->__PVT__seen.next(unnamedblk1__DOT__k));
        if (__VlefExpr_2) {
            ++(vlSymsp->__Vcoverage[621]);
        }
        if (unnamedblk1__DOT__k__Vfirst) {
            ++(vlSymsp->__Vcoverage[622]);
        }
        __VlefExpr_3 = (1U & (~ (IData)(unnamedblk1__DOT__k__Vfirst)));
        if (__VlefExpr_3) {
            __VlefExpr_3 = (0U == this->__PVT__seen.next(unnamedblk1__DOT__k));
        }
        if (__VlefExpr_3) {
            ++(vlSymsp->__Vcoverage[623]);
        }
        ++(vlSymsp->__Vcoverage[625]);
    } else {
        ++(vlSymsp->__Vcoverage[626]);
    }
    keys.sort();
    hist = ""s;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, keys.size())) {
        unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__k = keys.at(unnamedblk2__DOT__i);
        hist = VL_CONCATN_NNN(hist, VL_SFORMATF_N_NX("%0d:%0#",0,
                                                     32,
                                                     unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                     32,
                                                     this->__PVT__seen
                                                     .at(unnamedblk2__DOT__unnamedblk3__DOT__k)) );
        if ((unnamedblk2__DOT__i != (keys.size() - (IData)(1U)))) {
            hist = VL_CONCATN_NNN(hist, ", "s);
            ++(vlSymsp->__Vcoverage[627]);
        } else {
            ++(vlSymsp->__Vcoverage[628]);
        }
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        ++(vlSymsp->__Vcoverage[629]);
    }
    list = ""s;
    if (VL_LTS_III(32, 0U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 1U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(1U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 2U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(2U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 3U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(3U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 4U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(4U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 5U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(5U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 6U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(6U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 7U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(7U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 8U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(8U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 9U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(9U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x0000000aU, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x0000000aU)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x0000000bU, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x0000000bU)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x0000000cU, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x0000000cU)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x0000000dU, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x0000000dU)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x0000000eU, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x0000000eU)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x0000000fU, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x0000000fU)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x00000010U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x00000010U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x00000011U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x00000011U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x00000012U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x00000012U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x00000013U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x00000013U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x00000014U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x00000014U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x00000015U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x00000015U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x00000016U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x00000016U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    list = VL_CONCATN_NNN(list, ", "s);
    ++(vlSymsp->__Vcoverage[632]);
    ++(vlSymsp->__Vcoverage[634]);
    if (VL_LTS_III(32, 0x00000017U, this->__PVT__seq.size())) {
        list = VL_CONCATN_NNN(list, VL_SFORMATF_N_NX("%0#",0,
                                                     32,
                                                     this->__PVT__seq.at(0x00000017U)) );
        ++(vlSymsp->__Vcoverage[630]);
    } else {
        list = VL_CONCATN_NNN(list, "x"s);
        ++(vlSymsp->__Vcoverage[631]);
    }
    ++(vlSymsp->__Vcoverage[633]);
    ++(vlSymsp->__Vcoverage[634]);
    uniq = VL_EXTENDS_QI(64,32, this->__PVT__seen.size());
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "RNG_SCB"s, __VlefCall_4__uvm_report_enabled);
    if ((0U != __VlefCall_4__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_SCB"s, VL_SFORMATF_N_NX("Resumo: requisicoes=%0# armazenados=%0# unicos=%0# duplicados_reais=%0#",0,
                                                                                64,
                                                                                this->__PVT__sample_count,
                                                                                64,
                                                                                this->__PVT__stored_count,
                                                                                64,
                                                                                uniq,
                                                                                64,
                                                                                this->__PVT__dup_count) , 0U, "../UVM/UVM_scoreboard.sv"s, 0x000000a9U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[635]);
    } else {
        ++(vlSymsp->__Vcoverage[636]);
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "RNG_SCB"s, __VlefCall_5__uvm_report_enabled);
    if ((0U != __VlefCall_5__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_SCB"s, VL_SFORMATF_N_NX("Histograma=[%@]",0,
                                                                                -1,
                                                                                &(hist)) , 0U, "../UVM/UVM_scoreboard.sv"s, 0x000000aeU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[637]);
    } else {
        ++(vlSymsp->__Vcoverage[638]);
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_SCB"s, __VlefCall_6__uvm_report_enabled);
    if ((0U != __VlefCall_6__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_SCB"s, VL_SFORMATF_N_NX("Sequencia=[%@]",0,
                                                                                -1,
                                                                                &(list)) , 0x00000064U, "../UVM/UVM_scoreboard.sv"s, 0x000000b3U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[639]);
    } else {
        ++(vlSymsp->__Vcoverage[640]);
    }
    if ((0x0000000000000018ULL != this->__PVT__sample_count)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "RNG_SCB"s, __VlefCall_7__uvm_report_enabled);
        if ((0U != __VlefCall_7__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "RNG_SCB"s, VL_SFORMATF_N_NX("Requisicoes != 24 (requisicoes=%0#). Se o DUT usa outro handshake, ajuste o monitor.",0,
                                                                                64,
                                                                                this->__PVT__sample_count) , 0U, "../UVM/UVM_scoreboard.sv"s, 0x000000baU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[641]);
        } else {
            ++(vlSymsp->__Vcoverage[642]);
        }
        ++(vlSymsp->__Vcoverage[643]);
    } else {
        ++(vlSymsp->__Vcoverage[644]);
    }
    if ((0x00000018U > this->__PVT__seq.size())) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RNG_SCB"s, __VlefCall_8__uvm_report_enabled);
        if ((0U != __VlefCall_8__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNG_SCB"s, VL_SFORMATF_N_NX("Sequencia completada com x: capturados=%0d faltantes=%0#",0,
                                                                                32,
                                                                                this->__PVT__seq.size(),
                                                                                64,
                                                                                (0x0000000000000018ULL 
                                                                                - (QData)((IData)(this->__PVT__seq.size())))) , 0x00000064U, "../UVM/UVM_scoreboard.sv"s, 0x000000c3U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[645]);
        } else {
            ++(vlSymsp->__Vcoverage[646]);
        }
        ++(vlSymsp->__Vcoverage[647]);
    } else {
        ++(vlSymsp->__Vcoverage[648]);
    }
    ++(vlSymsp->__Vcoverage[649]);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_tb_rng__03a__03arng_scoreboard::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__sample_count = 0;
    __PVT__stored_count = 0;
    __PVT__dup_count = 0;
    __PVT__seen.atDefault() = 0;
    __PVT__seq.atDefault() = 0;
    __PVT__last_val = 0;
    __PVT__last_val_valid = 0;
}

Vtb_rng_tb_rng__03a__03arng_scoreboard::~Vtb_rng_tb_rng__03a__03arng_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::~\n"); );
}

std::string Vtb_rng_tb_rng__03a__03arng_scoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_tb_rng__03a__03arng_scoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_rng_tb_rng__03a__03arng_scoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "imp:" + VL_TO_STRING(__PVT__imp);
    out += ", sample_count:" + VL_TO_STRING(__PVT__sample_count);
    out += ", stored_count:" + VL_TO_STRING(__PVT__stored_count);
    out += ", dup_count:" + VL_TO_STRING(__PVT__dup_count);
    out += ", seen:" + VL_TO_STRING(__PVT__seen);
    out += ", seq:" + VL_TO_STRING(__PVT__seq);
    out += ", last_val:" + VL_TO_STRING(__PVT__last_val);
    out += ", last_val_valid:" + VL_TO_STRING(__PVT__last_val_valid);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_scoreboard::to_string_middle();
    return (out);
}
