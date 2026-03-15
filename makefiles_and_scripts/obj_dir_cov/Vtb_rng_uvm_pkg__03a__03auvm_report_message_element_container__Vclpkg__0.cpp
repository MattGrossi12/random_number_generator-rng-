// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi18> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi18__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[11236]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_report_message_element_container"s;
    ++(vlSymsp->__Vcoverage[11241]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi18> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi18__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[11237]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, "element_container"s);
        ++(vlSymsp->__Vcoverage[11238]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[11239]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[11240]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_message_element_container"s;
    ++(vlSymsp->__Vcoverage[11242]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[11243]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__elements.size();
    ++(vlSymsp->__Vcoverage[11244]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete\n"); );
    // Body
    this->__PVT__elements.erase(index);
    ++(vlSymsp->__Vcoverage[11245]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete_elements(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_delete_elements\n"); );
    // Body
    this->__PVT__elements.clear();
    ++(vlSymsp->__Vcoverage[11246]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_elements(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base>> &get_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_get_elements\n"); );
    // Body
    get_elements__Vfuncrtn = this->__PVT__elements;
    ++(vlSymsp->__Vcoverage[11247]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_int(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_int\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_int_element> urme;
    rand_state = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 364)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
        ++(vlSymsp->__Vcoverage[11248]);
    } else {
        ++(vlSymsp->__Vcoverage[11249]);
    }
    urme = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message_int_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 367)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
        ++(vlSymsp->__Vcoverage[11250]);
    } else {
        ++(vlSymsp->__Vcoverage[11251]);
    }
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 369)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 370)->__VnoInFunc_set_value(vlSymsp, value, size, radix);
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 371)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
    ++(vlSymsp->__Vcoverage[11252]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_string(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_string\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_string_element> urme;
    rand_state = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 391)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
        ++(vlSymsp->__Vcoverage[11253]);
    } else {
        ++(vlSymsp->__Vcoverage[11254]);
    }
    urme = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message_string_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 394)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
        ++(vlSymsp->__Vcoverage[11255]);
    } else {
        ++(vlSymsp->__Vcoverage[11256]);
    }
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 396)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 397)->__VnoInFunc_set_value(vlSymsp, value);
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 398)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
    ++(vlSymsp->__Vcoverage[11257]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_object(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_add_object\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_std__03a__03aprocess> p;
    std::string rand_state;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element> urme;
    rand_state = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 418)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
        ++(vlSymsp->__Vcoverage[11258]);
    } else {
        ++(vlSymsp->__Vcoverage[11259]);
    }
    urme = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_message_object_element, vlSymsp);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 421)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
        ++(vlSymsp->__Vcoverage[11260]);
    } else {
        ++(vlSymsp->__Vcoverage[11261]);
    }
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 423)->__VnoInFunc_set_name(vlSymsp, name);
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 424)->__VnoInFunc_set_value(vlSymsp, obj);
    VL_NULL_CHECK(urme, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 425)->__VnoInFunc_set_action(vlSymsp, action);
    this->__PVT__elements.push_back(urme);
    ++(vlSymsp->__Vcoverage[11262]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_print\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__elements.size())) {
        VL_NULL_CHECK(this->__PVT__elements.at(unnamedblk1__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 432)->__VnoInFunc_print(vlProcess, vlSymsp, printer);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        ++(vlSymsp->__Vcoverage[11263]);
    }
    ++(vlSymsp->__Vcoverage[11264]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_record\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    unnamedblk2__DOT__i = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__elements.size())) {
        VL_NULL_CHECK(this->__PVT__elements.at(unnamedblk2__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 439)->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        ++(vlSymsp->__Vcoverage[11265]);
    }
    ++(vlSymsp->__Vcoverage[11266]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base> __VlefCall_1__clone;
    IData/*31:0*/ __VlefExpr_0;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container> urme_container;
    {
        Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, urme_container);
        if (((! __VlefExpr_0) || (VlNull{} == rhs))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11268]);
        }
        this->__VnoInFunc_delete_elements(vlSymsp);
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, VL_NULL_CHECK(urme_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 452)
                          ->__PVT__elements.size())) {
            VL_NULL_CHECK(VL_NULL_CHECK(urme_container, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 453)
                          ->__PVT__elements.at(unnamedblk3__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_report_message.svh", 453)->__VnoInFunc_clone(vlSymsp, __VlefCall_1__clone);
            this->__PVT__elements.push_back(__VlefCall_1__clone);
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
            ++(vlSymsp->__Vcoverage[11269]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11270]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::~Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_container::to_string_middle\n"); );
    // Body
    std::string out;
    out += "elements:" + VL_TO_STRING(__PVT__elements);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
