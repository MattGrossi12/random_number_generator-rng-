// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_resource#(logic[4095:0])"s;
    ++(vlSymsp->__Vcoverage[8613]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    if ((VlNull{} == this->__PVT__my_type)) {
        this->__PVT__my_type = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[8618]);
    } else {
        ++(vlSymsp->__Vcoverage[8619]);
    }
    get_type__Vfuncrtn = this->__PVT__my_type;
    ++(vlSymsp->__Vcoverage[8620]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__8__Vfuncout;
    // Body
    IData/*31:0*/ __VlefExpr_4;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> r;
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
            ++(vlSymsp->__Vcoverage[8629]);
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
                ++(vlSymsp->__Vcoverage[8630]);
            } else {
                ++(vlSymsp->__Vcoverage[8631]);
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
            ++(vlSymsp->__Vcoverage[8632]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, tq, __Vfunc_get_highest_precedence__8__Vfuncout);
        rb = __Vfunc_get_highest_precedence__8__Vfuncout;
        __VlefExpr_4 = VL_CAST_DYNAMIC(rb, rsrc);
        if (__VlefExpr_4) {
            ++(vlSymsp->__Vcoverage[8634]);
        } else {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[8635]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[8609]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[8610]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[8611]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[8612]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_resource#(logic[4095:0])"s;
    ++(vlSymsp->__Vcoverage[8614]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_resource_base::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[8615]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_m_value_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = "logic[4095:0]"s;
    ++(vlSymsp->__Vcoverage[8616]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_m_value_as_string(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_m_value_as_string\n"); );
    // Body
    m_value_as_string__Vfuncrtn = VL_SFORMATF_N_NX("'h%0x",0,
                                                   4096,
                                                   this->__PVT__val.data()) ;
    ++(vlSymsp->__Vcoverage[8617]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_type_handle\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8> __Vfunc_get_type__4__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__4__Vfuncout);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__4__Vfuncout;
    ++(vlSymsp->__Vcoverage[8621]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, VlWide<128>/*4095:0*/ &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    VL_ZERO_W(4096, read__Vfuncrtn);
    this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        read__Vfuncrtn[__Vilp1] = this->__PVT__val[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    ++(vlSymsp->__Vcoverage[8622]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ t, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vdeeptemp_h9b1dc53a__0;
    // Body
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
            ++(vlSymsp->__Vcoverage[8624]);
        }
        __Vdeeptemp_h9b1dc53a__0 = ((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((this->__PVT__val[0U] 
                                                                                ^ t[0U]) 
                                                                                | (this->__PVT__val[1U] 
                                                                                ^ t[1U])) 
                                                                                | (this->__PVT__val[2U] 
                                                                                ^ t[2U])) 
                                                                                | (this->__PVT__val[3U] 
                                                                                ^ t[3U])) 
                                                                                | (this->__PVT__val[4U] 
                                                                                ^ t[4U])) 
                                                                                | (this->__PVT__val[5U] 
                                                                                ^ t[5U])) 
                                                                                | (this->__PVT__val[6U] 
                                                                                ^ t[6U])) 
                                                                                | (this->__PVT__val[7U] 
                                                                                ^ t[7U])) 
                                                                                | (this->__PVT__val[8U] 
                                                                                ^ t[8U])) 
                                                                                | (this->__PVT__val[9U] 
                                                                                ^ t[9U])) 
                                                                                | (this->__PVT__val[10U] 
                                                                                ^ t[10U])) 
                                                                                | (this->__PVT__val[11U] 
                                                                                ^ t[11U])) 
                                                                                | (this->__PVT__val[12U] 
                                                                                ^ t[12U])) 
                                                                                | (this->__PVT__val[13U] 
                                                                                ^ t[13U])) 
                                                                                | (this->__PVT__val[14U] 
                                                                                ^ t[14U])) 
                                                                                | (this->__PVT__val[15U] 
                                                                                ^ t[15U])) 
                                                                                | (this->__PVT__val[16U] 
                                                                                ^ t[16U])) 
                                                                                | (this->__PVT__val[17U] 
                                                                                ^ t[17U])) 
                                                                                | (this->__PVT__val[18U] 
                                                                                ^ t[18U])) 
                                                                                | (this->__PVT__val[19U] 
                                                                                ^ t[19U])) 
                                                                                | (this->__PVT__val[20U] 
                                                                                ^ t[20U])) 
                                                                                | (this->__PVT__val[21U] 
                                                                                ^ t[21U])) 
                                                                                | (this->__PVT__val[22U] 
                                                                                ^ t[22U])) 
                                                                                | (this->__PVT__val[23U] 
                                                                                ^ t[23U])) 
                                                                                | (this->__PVT__val[24U] 
                                                                                ^ t[24U])) 
                                                                                | (this->__PVT__val[25U] 
                                                                                ^ t[25U])) 
                                                                                | (this->__PVT__val[26U] 
                                                                                ^ t[26U])) 
                                                                                | (this->__PVT__val[27U] 
                                                                                ^ t[27U])) 
                                                                                | (this->__PVT__val[28U] 
                                                                                ^ t[28U])) 
                                                                                | (this->__PVT__val[29U] 
                                                                                ^ t[29U])) 
                                                                                | (this->__PVT__val[30U] 
                                                                                ^ t[30U])) 
                                                                                | (this->__PVT__val[31U] 
                                                                                ^ t[31U])) 
                                                                                | (this->__PVT__val[32U] 
                                                                                ^ t[32U])) 
                                                                                | (this->__PVT__val[33U] 
                                                                                ^ t[33U])) 
                                                                                | (this->__PVT__val[34U] 
                                                                                ^ t[34U])) 
                                                                                | (this->__PVT__val[35U] 
                                                                                ^ t[35U])) 
                                                                                | (this->__PVT__val[36U] 
                                                                                ^ t[36U])) 
                                                                                | (this->__PVT__val[37U] 
                                                                                ^ t[37U])) 
                                                                                | (this->__PVT__val[38U] 
                                                                                ^ t[38U])) 
                                                                                | (this->__PVT__val[39U] 
                                                                                ^ t[39U])) 
                                                                                | (this->__PVT__val[40U] 
                                                                                ^ t[40U])) 
                                                                                | (this->__PVT__val[41U] 
                                                                                ^ t[41U])) 
                                                                                | (this->__PVT__val[42U] 
                                                                                ^ t[42U])) 
                                                                                | (this->__PVT__val[43U] 
                                                                                ^ t[43U])) 
                                                                                | (this->__PVT__val[44U] 
                                                                                ^ t[44U])) 
                                                                                | (this->__PVT__val[45U] 
                                                                                ^ t[45U])) 
                                                                                | (this->__PVT__val[46U] 
                                                                                ^ t[46U])) 
                                                                                | (this->__PVT__val[47U] 
                                                                                ^ t[47U])) 
                                                                                | (this->__PVT__val[48U] 
                                                                                ^ t[48U])) 
                                                                                | (this->__PVT__val[49U] 
                                                                                ^ t[49U])) 
                                                                                | (this->__PVT__val[50U] 
                                                                                ^ t[50U])) 
                                                                                | (this->__PVT__val[51U] 
                                                                                ^ t[51U])) 
                                                                                | (this->__PVT__val[52U] 
                                                                                ^ t[52U])) 
                                                                                | (this->__PVT__val[53U] 
                                                                                ^ t[53U])) 
                                                                                | (this->__PVT__val[54U] 
                                                                                ^ t[54U])) 
                                                                                | (this->__PVT__val[55U] 
                                                                                ^ t[55U])) 
                                                                                | (this->__PVT__val[56U] 
                                                                                ^ t[56U])) 
                                                                                | (this->__PVT__val[57U] 
                                                                                ^ t[57U])) 
                                                                                | (this->__PVT__val[58U] 
                                                                                ^ t[58U])) 
                                                                                | (this->__PVT__val[59U] 
                                                                                ^ t[59U])) 
                                                                                | (this->__PVT__val[60U] 
                                                                                ^ t[60U])) 
                                                                                | (this->__PVT__val[61U] 
                                                                                ^ t[61U])) 
                                                                                | (this->__PVT__val[62U] 
                                                                                ^ t[62U])) 
                                                                                | (this->__PVT__val[63U] 
                                                                                ^ t[63U])) 
                                                                                | (this->__PVT__val[64U] 
                                                                                ^ t[64U])) 
                                                                                | (this->__PVT__val[65U] 
                                                                                ^ t[65U])) 
                                                                                | (this->__PVT__val[66U] 
                                                                                ^ t[66U])) 
                                                                                | (this->__PVT__val[67U] 
                                                                                ^ t[67U])) 
                                                                                | (this->__PVT__val[68U] 
                                                                                ^ t[68U])) 
                                                                                | (this->__PVT__val[69U] 
                                                                                ^ t[69U])) 
                                                                                | (this->__PVT__val[70U] 
                                                                                ^ t[70U])) 
                                                                                | (this->__PVT__val[71U] 
                                                                                ^ t[71U])) 
                                                                                | (this->__PVT__val[72U] 
                                                                                ^ t[72U])) 
                                                                                | (this->__PVT__val[73U] 
                                                                                ^ t[73U])) 
                                                                                | (this->__PVT__val[74U] 
                                                                                ^ t[74U])) 
                                                                               | (this->__PVT__val[75U] 
                                                                                ^ t[75U])) 
                                                                              | (this->__PVT__val[76U] 
                                                                                ^ t[76U])) 
                                                                             | (this->__PVT__val[77U] 
                                                                                ^ t[77U])) 
                                                                            | (this->__PVT__val[78U] 
                                                                               ^ t[78U])) 
                                                                           | (this->__PVT__val[79U] 
                                                                              ^ t[79U])) 
                                                                          | (this->__PVT__val[80U] 
                                                                             ^ t[80U])) 
                                                                         | (this->__PVT__val[81U] 
                                                                            ^ t[81U])) 
                                                                        | (this->__PVT__val[82U] 
                                                                           ^ t[82U])) 
                                                                       | (this->__PVT__val[83U] 
                                                                          ^ t[83U])) 
                                                                      | (this->__PVT__val[84U] 
                                                                         ^ t[84U])) 
                                                                     | (this->__PVT__val[85U] 
                                                                        ^ t[85U])) 
                                                                    | (this->__PVT__val[86U] 
                                                                       ^ t[86U])) 
                                                                   | (this->__PVT__val[87U] 
                                                                      ^ t[87U])) 
                                                                  | (this->__PVT__val[88U] 
                                                                     ^ t[88U])) 
                                                                 | (this->__PVT__val[89U] 
                                                                    ^ t[89U])) 
                                                                | (this->__PVT__val[90U] 
                                                                   ^ t[90U])) 
                                                               | (this->__PVT__val[91U] 
                                                                  ^ t[91U])) 
                                                              | (this->__PVT__val[92U] 
                                                                 ^ t[92U])) 
                                                             | (this->__PVT__val[93U] 
                                                                ^ t[93U])) 
                                                            | (this->__PVT__val[94U] 
                                                               ^ t[94U])) 
                                                           | (this->__PVT__val[95U] 
                                                              ^ t[95U])) 
                                                          | (this->__PVT__val[96U] 
                                                             ^ t[96U])) 
                                                         | (this->__PVT__val[97U] 
                                                            ^ t[97U])) 
                                                        | (this->__PVT__val[98U] 
                                                           ^ t[98U])) 
                                                       | (this->__PVT__val[99U] 
                                                          ^ t[99U])) 
                                                      | (this->__PVT__val[100U] 
                                                         ^ t[100U])) 
                                                     | (this->__PVT__val[101U] 
                                                        ^ t[101U])) 
                                                    | (this->__PVT__val[102U] 
                                                       ^ t[102U])) 
                                                   | (this->__PVT__val[103U] 
                                                      ^ t[103U])) 
                                                  | (this->__PVT__val[104U] 
                                                     ^ t[104U])) 
                                                 | (this->__PVT__val[105U] 
                                                    ^ t[105U])) 
                                                | (this->__PVT__val[106U] 
                                                   ^ t[106U])) 
                                               | (this->__PVT__val[107U] 
                                                  ^ t[107U])) 
                                              | (this->__PVT__val[108U] 
                                                 ^ t[108U])) 
                                             | (this->__PVT__val[109U] 
                                                ^ t[109U])) 
                                            | (this->__PVT__val[110U] 
                                               ^ t[110U])) 
                                           | (this->__PVT__val[111U] 
                                              ^ t[111U])) 
                                          | (this->__PVT__val[112U] 
                                             ^ t[112U])) 
                                         | (this->__PVT__val[113U] 
                                            ^ t[113U])) 
                                        | (this->__PVT__val[114U] 
                                           ^ t[114U])) 
                                       | (this->__PVT__val[115U] 
                                          ^ t[115U])) 
                                      | (this->__PVT__val[116U] 
                                         ^ t[116U])) 
                                     | (this->__PVT__val[117U] 
                                        ^ t[117U])) 
                                    | (this->__PVT__val[118U] 
                                       ^ t[118U]));
        if ((0U == (((((((((__Vdeeptemp_h9b1dc53a__0 
                            | (this->__PVT__val[119U] 
                               ^ t[119U])) | (this->__PVT__val[120U] 
                                              ^ t[120U])) 
                          | (this->__PVT__val[121U] 
                             ^ t[121U])) | (this->__PVT__val[122U] 
                                            ^ t[122U])) 
                        | (this->__PVT__val[123U] ^ t[123U])) 
                       | (this->__PVT__val[124U] ^ t[124U])) 
                      | (this->__PVT__val[125U] ^ t[125U])) 
                     | (this->__PVT__val[126U] ^ t[126U])) 
                    | (this->__PVT__val[127U] ^ t[127U])))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[8626]);
        }
        this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000007fU)) {
            this->__PVT__val[__Vilp1] = t[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        Vtb_rng_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[8627]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    VL_SCOPED_RAND_RESET_W(4096, __PVT__val, 5204624782258430644ULL, 14157650751545541461ull);
}

Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::~Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8::to_string_middle\n"); );
    // Body
    std::string out;
    out += "val:" + VL_TO_STRING_W(128, __PVT__val);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_resource_base::to_string_middle();
    return (out);
}
