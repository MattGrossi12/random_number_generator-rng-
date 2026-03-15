// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_resource#(int)"s;
    ++(vlSymsp->__Vcoverage[8669]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    if ((VlNull{} == this->__PVT__my_type)) {
        this->__PVT__my_type = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[8674]);
    } else {
        ++(vlSymsp->__Vcoverage[8675]);
    }
    get_type__Vfuncrtn = this->__PVT__my_type;
    ++(vlSymsp->__Vcoverage[8676]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg::__VnoInFunc_get_highest_precedence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefExpr_4;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> rsrc;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> r;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> tq;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> rp;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, rp);
        VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1403)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((0U == __VlefCall_0__size)) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[8685]);
        }
        tq = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
        rsrc = VlNull{};
        unnamedblk1__DOT__i = 0U;
        unnamedblk1__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1409)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(q, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1410)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, __VlefCall_2__get);
            __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__get, r);
            if (__VlefExpr_3) {
                VL_NULL_CHECK(tq, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_resource.svh", 1411)->__VnoInFunc_push_back(vlSymsp, r);
                ++(vlSymsp->__Vcoverage[8686]);
            } else {
                ++(vlSymsp->__Vcoverage[8687]);
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[8688]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, tq, __Vfunc_get_highest_precedence__8__Vfuncout);
        rb = __Vfunc_get_highest_precedence__8__Vfuncout;
        __VlefExpr_4 = VL_CAST_DYNAMIC(rb, rsrc);
        if (__VlefExpr_4) {
            ++(vlSymsp->__Vcoverage[8690]);
        } else {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[8691]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[8665]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[8666]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[8667]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[8668]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_resource#(int)"s;
    ++(vlSymsp->__Vcoverage[8670]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_resource_base::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[8671]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_m_value_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = "int"s;
    ++(vlSymsp->__Vcoverage[8672]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_m_value_as_string(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_m_value_as_string\n"); );
    // Body
    m_value_as_string__Vfuncrtn = VL_SFORMATF_N_NX("'h%0x",0,
                                                   32,
                                                   this->__PVT__val) ;
    ++(vlSymsp->__Vcoverage[8673]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_get_type_handle\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10> __Vfunc_get_type__4__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz10__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__4__Vfuncout);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__4__Vfuncout;
    ++(vlSymsp->__Vcoverage[8677]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_read\n"); );
    // Body
    read__Vfuncrtn = 0U;
    this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    read__Vfuncrtn = this->__PVT__val;
    ++(vlSymsp->__Vcoverage[8678]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_write(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ t, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__is_read_only;
    {
        this->__VnoInFunc_is_read_only(vlSymsp, __VlefCall_0__is_read_only);
        if (__VlefCall_0__is_read_only) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_error__8__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__8__context_name = ""s;
            __Vtask_uvm_report_error__8__line = 0U;
            this->__Vtask_uvm_report_error__8__filename = ""s;
            __Vtask_uvm_report_error__8__verbosity = 0U;
            this->__Vtask_uvm_report_error__8__message 
                = VL_SFORMATF_N_NX("resource %@ is read only -- cannot modify",0,
                                   -1,&(__VlefCall_1__get_name)) ;
            this->__Vtask_uvm_report_error__8__id = "resource"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__8__id, this->__Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, this->__Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, this->__Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[8680]);
        }
        if ((this->__PVT__val == t)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[8682]);
        }
        this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        this->__PVT__val = t;
        Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[8683]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__val = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::~Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10::to_string_middle\n"); );
    // Body
    std::string out;
    out += "val:" + VL_TO_STRING(__PVT__val);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_resource_base::to_string_middle();
    return (out);
}
