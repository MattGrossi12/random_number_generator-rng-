// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi122> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20791]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_item"s;
    ++(vlSymsp->__Vcoverage[20796]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi122> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[20792]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[20793]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[20794]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[20795]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_item"s;
    ++(vlSymsp->__Vcoverage[20797]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__prior = 0xffffffffU;
    ++(vlSymsp->__Vcoverage[20798]);
    /*super.new*/;
    this->__PVT__value.renew(1U);
    ++(vlSymsp->__Vcoverage[20799]);
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__Vvalue_size, 0x0000000000000020ULL, 
                                                                   "__Vvalue_size", 0ULL);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_convert2string\n"); );
    // Body
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefLogAnd_2;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    std::string s;
    std::string value_s;
    convert2string__Vfuncrtn = ""s;
    s = ""s;
    value_s = ""s;
    if ((VlNull{} == this->__PVT__element)) {
        __VlefCall_0__get_full_name = "null"s;
    } else {
        VL_NULL_CHECK(this->__PVT__element, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 187)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("kind="s, Vtb_rng___024unit::__Venumtab_enum_name93
                                                                                [
                                                                                (3U 
                                                                                & this->__PVT__kind)]), " ele_kind="s), Vtb_rng___024unit::__Venumtab_enum_name91
                                                     [
                                                     (3U 
                                                      & this->__PVT__element_kind)]), " ele_name="s), __VlefCall_0__get_full_name);
    __VlefLogAnd_2 = VL_LTS_III(32, 1U, this->__PVT__value.size());
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "RegModel"s, __VlefCall_1__uvm_report_enabled);
        __VlefLogAnd_2 = (0U != __VlefCall_1__uvm_report_enabled);
    }
    if (__VlefLogAnd_2) {
        value_s = "'{"s;
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__value.size())) {
            value_s = VL_CONCATN_NNN(value_s, VL_SFORMATF_N_NX("%0x,",0,
                                                               64,
                                                               this->__PVT__value.at(unnamedblk1__DOT__i)) );
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[20800]);
        }
        value_s = VL_PUTC_N(value_s, (VL_LEN_IN(value_s) 
                                      - (IData)(1U)), 0x7dU);
        ++(vlSymsp->__Vcoverage[20801]);
    } else {
        value_s = VL_SFORMATF_N_NX("%0x",0,64,this->__PVT__value.at(0U)) ;
        ++(vlSymsp->__Vcoverage[20802]);
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, " value="s), value_s);
    if ((2U == this->__PVT__element_kind)) {
        s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX(" offset=%0x",0,
                                               64,this->__PVT__offset) );
        ++(vlSymsp->__Vcoverage[20803]);
    } else {
        ++(vlSymsp->__Vcoverage[20804]);
    }
    if ((VlNull{} == this->__PVT__map)) {
        __VlefCall_3__get_full_name = "null"s;
    } else {
        VL_NULL_CHECK(this->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 201)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(s, " map="s), __VlefCall_3__get_full_name), " path="s), Vtb_rng___024unit::__Venumtab_enum_name85
                       [(3U & this->__PVT__path)]);
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, " status="s), Vtb_rng___024unit::__Venumtab_enum_name83
                       [(3U & this->__PVT__status)]);
    convert2string__Vfuncrtn = s;
    ++(vlSymsp->__Vcoverage[20805]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_do_copy\n"); );
    // Body
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rhs_;
    {
        if ((VlNull{} == rhs)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/NULL"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/NULL"s, "do_copy: rhs argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh"s, 0x000000d7U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[20806]);
            } else {
                ++(vlSymsp->__Vcoverage[20807]);
            }
            ++(vlSymsp->__Vcoverage[20808]);
        } else {
            ++(vlSymsp->__Vcoverage[20809]);
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(rhs, rhs_);
        if (__VlefExpr_1) {
            ++(vlSymsp->__Vcoverage[20813]);
        } else {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "WRONG_TYPE"s, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "WRONG_TYPE"s, "Provided rhs is not of type uvm_reg_item"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh"s, 0x000000daU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[20810]);
            } else {
                ++(vlSymsp->__Vcoverage[20811]);
            }
            goto __Vlabel0;
        }
        Vtb_rng_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        this->__PVT__element_kind = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 222)
            ->__PVT__element_kind;
        this->__PVT__element = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 223)
            ->__PVT__element;
        this->__PVT__kind = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 224)
            ->__PVT__kind;
        this->__PVT__value = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 225)
            ->__PVT__value;
        this->__PVT__offset = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 226)
            ->__PVT__offset;
        this->__PVT__status = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 227)
            ->__PVT__status;
        this->__PVT__local_map = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 228)
            ->__PVT__local_map;
        this->__PVT__map = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 229)
            ->__PVT__map;
        this->__PVT__path = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 230)
            ->__PVT__path;
        this->__PVT__extension = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 231)
            ->__PVT__extension;
        this->__PVT__bd_kind = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 232)
            ->__PVT__bd_kind;
        this->__PVT__parent = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 233)
            ->__PVT__parent;
        this->__PVT__prior = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 234)
            ->__PVT__prior;
        this->__PVT__fname = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 235)
            ->__PVT__fname;
        this->__PVT__lineno = VL_NULL_CHECK(rhs_, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 236)
            ->__PVT__lineno;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[20814]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    ++(vlSymsp->__Vcoverage[20815]);
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___Vresize_constrained_arrays(vlSymsp);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_resize_constrained_array(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_resize_constrained_array\n"); );
    // Body
    this->__PVT__value.resize(this->__Vvalue_size);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_setup_constraint(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_setup_constraint\n"); );
    // Body
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(bvand (__Vbv (bvsgt __Vvalue_size #x00000000)) (__Vbv (bvslt __Vvalue_size #x000003e8)))"s, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 0x00000051U, 
                                                              "  constraint max_values { value.size() > 0 && value.size() < 1000; }");
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (bvsge __Vvalue_size #x00000000))"s, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 0x00000051U, 
                                                              "  constraint max_values { value.size() > 0 && value.size() < 1000; }");
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_max_values_setup_constraint(vlSymsp);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vresize_constrained_arrays(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vresize_constrained_arrays\n"); );
    // Body
    this->__VnoInFunc_max_values_resize_constrained_array(vlSymsp);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1____VBasicRand;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0;
    unnamedblk2_1__DOT____Vrandarr___0 = 0;
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__kind = Vtb_rng___024unit::__Venumvaltab_2
        [(3U & VL_RANDOM_RNG_I(__Vm_rng))];
    unnamedblk2_1__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_1__DOT____Vrandarr___0 < this->__PVT__value.size())) {
        this->__PVT__value.atWrite(unnamedblk2_1__DOT____Vrandarr___0) 
            = VL_RANDOM_RNG_Q(__Vm_rng);
        unnamedblk2_1__DOT____Vrandarr___0 = ((IData)(1U) 
                                              + unnamedblk2_1__DOT____Vrandarr___0);
    }
    this->__PVT__offset = VL_RANDOM_RNG_Q(__Vm_rng);
    if ((VlNull{} != this->__PVT__parent)) {
        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 45)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_0__randomize);
    }
    if ((VlNull{} != this->__PVT__extension)) {
        VL_NULL_CHECK(this->__PVT__extension, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_item.svh", 45)->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_1____VBasicRand);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_1____VBasicRand);
    }
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_item::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__element_kind = 0;
    __PVT__kind = 0;
    __PVT__value.atDefault() = 0;
    __PVT__offset = 0;
    __PVT__status = 0;
    __PVT__path = 0;
    __PVT__lineno = 0;
    __Vvalue_size = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_item::~Vtb_rng_uvm_pkg__03a__03auvm_reg_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "element_kind:" + VL_TO_STRING(__PVT__element_kind);
    out += ", element:" + VL_TO_STRING(__PVT__element);
    out += ", kind:" + VL_TO_STRING(__PVT__kind);
    out += ", value:" + VL_TO_STRING(__PVT__value);
    out += ", offset:" + VL_TO_STRING(__PVT__offset);
    out += ", status:" + VL_TO_STRING(__PVT__status);
    out += ", local_map:" + VL_TO_STRING(__PVT__local_map);
    out += ", map:" + VL_TO_STRING(__PVT__map);
    out += ", path:" + VL_TO_STRING(__PVT__path);
    out += ", parent:" + VL_TO_STRING(__PVT__parent);
    out += ", prior:" + VL_TO_STRING(__PVT__prior);
    out += ", extension:" + VL_TO_STRING(__PVT__extension);
    out += ", bd_kind:" + VL_TO_STRING(__PVT__bd_kind);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", __Vvalue_size:" + VL_TO_STRING(__Vvalue_size);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
