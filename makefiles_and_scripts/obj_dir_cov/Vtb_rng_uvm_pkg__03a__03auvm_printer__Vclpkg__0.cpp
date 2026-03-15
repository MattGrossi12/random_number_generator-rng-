// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi9> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi9__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[9898]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_printer"s;
    ++(vlSymsp->__Vcoverage[9900]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, coreservice);
    VL_NULL_CHECK(coreservice, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 904)->__VnoInFunc_set_default_printer(vlSymsp, printer);
    ++(vlSymsp->__Vcoverage[9905]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_default(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, coreservice);
    VL_NULL_CHECK(coreservice, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 910)->__VnoInFunc_get_default_printer(vlProcess, vlSymsp, get_default__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[9906]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_abstract_object_registry__pi9> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi9__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[9899]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_printer"s;
    ++(vlSymsp->__Vcoverage[9901]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_knobs(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs> &get_knobs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_knobs\n"); );
    // Body
    get_knobs__Vfuncrtn = this->__PVT__knobs;
    ++(vlSymsp->__Vcoverage[9902]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_m_get_stack_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_stack_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_m_get_stack_size\n"); );
    // Body
    m_get_stack_size__Vfuncrtn = this->__PVT__m_element_stack.size();
    ++(vlSymsp->__Vcoverage[9903]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_policy::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__knobs = VL_NEW(Vtb_rng_uvm_pkg__03a__03am_uvm_printer_knobs, vlSymsp);
    this->__VnoInFunc_flush(vlProcess, vlSymsp);
    ++(vlSymsp->__Vcoverage[9904]);
}

extern const VlWide<128>/*4095:0*/ Vtb_rng__ConstPool__CONST_h1958c06c_0;

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__6__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__6__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__6__size;
    __Vfunc_uvm_bitstream_to_string__6__size = 0;
    IData/*27:0*/ __Vfunc_uvm_bitstream_to_string__6__radix;
    __Vfunc_uvm_bitstream_to_string__6__radix = 0;
    CData/*7:0*/ __Vfunc_uvm_leaf_scope__7__scope_separator;
    __Vfunc_uvm_leaf_scope__7__scope_separator = 0;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    IData/*31:0*/ __Vilp1;
    // Body
    std::string __VlefCall_0__get_radix_string;
    std::string sz_str;
    std::string val_str;
    val_str = ""s;
    if ((""s == type_name)) {
        if ((0x09000000U == radix)) {
            type_name = "time"s;
            ++(vlSymsp->__Vcoverage[9909]);
        } else if ((0x08000000U == radix)) {
            type_name = "string"s;
            ++(vlSymsp->__Vcoverage[9907]);
        } else {
            type_name = "integral"s;
            ++(vlSymsp->__Vcoverage[9908]);
        }
        ++(vlSymsp->__Vcoverage[9910]);
    } else {
        ++(vlSymsp->__Vcoverage[9911]);
    }
    sz_str = VL_SFORMATF_N_NX("%0d",0,32,size) ;
    if ((0U == radix)) {
        this->__VnoInFunc_get_default_radix(vlSymsp, radix);
        ++(vlSymsp->__Vcoverage[9912]);
    } else {
        ++(vlSymsp->__Vcoverage[9913]);
    }
    this->__VnoInFunc_get_radix_string(vlSymsp, radix, __VlefCall_0__get_radix_string);
    this->__Vfunc_uvm_bitstream_to_string__6__radix_str 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_radix_string);
    __Vfunc_uvm_bitstream_to_string__6__radix = radix;
    __Vfunc_uvm_bitstream_to_string__6__size = size;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vfunc_uvm_bitstream_to_string__6__value[__Vilp1] 
            = value[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    {
        if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__6__radix) 
             & (__Vfunc_uvm_bitstream_to_string__6__value
                [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__6__size 
                                  - (IData)(1U)) >> 5U))] 
                >> (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__6__size 
                                   - (IData)(1U)))))) {
            val_str = VL_SFORMATF_N_NX("%0d",0,4096,
                                       __Vfunc_uvm_bitstream_to_string__6__value.data()) ;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[350]);
        }
        VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, Vtb_rng__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__6__size);
        VL_SUB_W(128, __Vtemp_3, __Vtemp_2, Vtb_rng__ConstPool__CONST_h1958c06c_0);
        __Vfunc_uvm_bitstream_to_string__6__value[0U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[0U] 
               & __Vtemp_3[0U]);
        __Vfunc_uvm_bitstream_to_string__6__value[1U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[1U] 
               & __Vtemp_3[1U]);
        __Vfunc_uvm_bitstream_to_string__6__value[2U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[2U] 
               & __Vtemp_3[2U]);
        __Vfunc_uvm_bitstream_to_string__6__value[3U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[3U] 
               & __Vtemp_3[3U]);
        __Vfunc_uvm_bitstream_to_string__6__value[4U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[4U] 
               & __Vtemp_3[4U]);
        __Vfunc_uvm_bitstream_to_string__6__value[5U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[5U] 
               & __Vtemp_3[5U]);
        __Vfunc_uvm_bitstream_to_string__6__value[6U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[6U] 
               & __Vtemp_3[6U]);
        __Vfunc_uvm_bitstream_to_string__6__value[7U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[7U] 
               & __Vtemp_3[7U]);
        __Vfunc_uvm_bitstream_to_string__6__value[8U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[8U] 
               & __Vtemp_3[8U]);
        __Vfunc_uvm_bitstream_to_string__6__value[9U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[9U] 
               & __Vtemp_3[9U]);
        __Vfunc_uvm_bitstream_to_string__6__value[10U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[10U] 
               & __Vtemp_3[10U]);
        __Vfunc_uvm_bitstream_to_string__6__value[11U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[11U] 
               & __Vtemp_3[11U]);
        __Vfunc_uvm_bitstream_to_string__6__value[12U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[12U] 
               & __Vtemp_3[12U]);
        __Vfunc_uvm_bitstream_to_string__6__value[13U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[13U] 
               & __Vtemp_3[13U]);
        __Vfunc_uvm_bitstream_to_string__6__value[14U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[14U] 
               & __Vtemp_3[14U]);
        __Vfunc_uvm_bitstream_to_string__6__value[15U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[15U] 
               & __Vtemp_3[15U]);
        __Vfunc_uvm_bitstream_to_string__6__value[16U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[16U] 
               & __Vtemp_3[16U]);
        __Vfunc_uvm_bitstream_to_string__6__value[17U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[17U] 
               & __Vtemp_3[17U]);
        __Vfunc_uvm_bitstream_to_string__6__value[18U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[18U] 
               & __Vtemp_3[18U]);
        __Vfunc_uvm_bitstream_to_string__6__value[19U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[19U] 
               & __Vtemp_3[19U]);
        __Vfunc_uvm_bitstream_to_string__6__value[20U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[20U] 
               & __Vtemp_3[20U]);
        __Vfunc_uvm_bitstream_to_string__6__value[21U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[21U] 
               & __Vtemp_3[21U]);
        __Vfunc_uvm_bitstream_to_string__6__value[22U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[22U] 
               & __Vtemp_3[22U]);
        __Vfunc_uvm_bitstream_to_string__6__value[23U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[23U] 
               & __Vtemp_3[23U]);
        __Vfunc_uvm_bitstream_to_string__6__value[24U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[24U] 
               & __Vtemp_3[24U]);
        __Vfunc_uvm_bitstream_to_string__6__value[25U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[25U] 
               & __Vtemp_3[25U]);
        __Vfunc_uvm_bitstream_to_string__6__value[26U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[26U] 
               & __Vtemp_3[26U]);
        __Vfunc_uvm_bitstream_to_string__6__value[27U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[27U] 
               & __Vtemp_3[27U]);
        __Vfunc_uvm_bitstream_to_string__6__value[28U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[28U] 
               & __Vtemp_3[28U]);
        __Vfunc_uvm_bitstream_to_string__6__value[29U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[29U] 
               & __Vtemp_3[29U]);
        __Vfunc_uvm_bitstream_to_string__6__value[30U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[30U] 
               & __Vtemp_3[30U]);
        __Vfunc_uvm_bitstream_to_string__6__value[31U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[31U] 
               & __Vtemp_3[31U]);
        __Vfunc_uvm_bitstream_to_string__6__value[32U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[32U] 
               & __Vtemp_3[32U]);
        __Vfunc_uvm_bitstream_to_string__6__value[33U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[33U] 
               & __Vtemp_3[33U]);
        __Vfunc_uvm_bitstream_to_string__6__value[34U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[34U] 
               & __Vtemp_3[34U]);
        __Vfunc_uvm_bitstream_to_string__6__value[35U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[35U] 
               & __Vtemp_3[35U]);
        __Vfunc_uvm_bitstream_to_string__6__value[36U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[36U] 
               & __Vtemp_3[36U]);
        __Vfunc_uvm_bitstream_to_string__6__value[37U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[37U] 
               & __Vtemp_3[37U]);
        __Vfunc_uvm_bitstream_to_string__6__value[38U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[38U] 
               & __Vtemp_3[38U]);
        __Vfunc_uvm_bitstream_to_string__6__value[39U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[39U] 
               & __Vtemp_3[39U]);
        __Vfunc_uvm_bitstream_to_string__6__value[40U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[40U] 
               & __Vtemp_3[40U]);
        __Vfunc_uvm_bitstream_to_string__6__value[41U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[41U] 
               & __Vtemp_3[41U]);
        __Vfunc_uvm_bitstream_to_string__6__value[42U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[42U] 
               & __Vtemp_3[42U]);
        __Vfunc_uvm_bitstream_to_string__6__value[43U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[43U] 
               & __Vtemp_3[43U]);
        __Vfunc_uvm_bitstream_to_string__6__value[44U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[44U] 
               & __Vtemp_3[44U]);
        __Vfunc_uvm_bitstream_to_string__6__value[45U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[45U] 
               & __Vtemp_3[45U]);
        __Vfunc_uvm_bitstream_to_string__6__value[46U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[46U] 
               & __Vtemp_3[46U]);
        __Vfunc_uvm_bitstream_to_string__6__value[47U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[47U] 
               & __Vtemp_3[47U]);
        __Vfunc_uvm_bitstream_to_string__6__value[48U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[48U] 
               & __Vtemp_3[48U]);
        __Vfunc_uvm_bitstream_to_string__6__value[49U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[49U] 
               & __Vtemp_3[49U]);
        __Vfunc_uvm_bitstream_to_string__6__value[50U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[50U] 
               & __Vtemp_3[50U]);
        __Vfunc_uvm_bitstream_to_string__6__value[51U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[51U] 
               & __Vtemp_3[51U]);
        __Vfunc_uvm_bitstream_to_string__6__value[52U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[52U] 
               & __Vtemp_3[52U]);
        __Vfunc_uvm_bitstream_to_string__6__value[53U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[53U] 
               & __Vtemp_3[53U]);
        __Vfunc_uvm_bitstream_to_string__6__value[54U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[54U] 
               & __Vtemp_3[54U]);
        __Vfunc_uvm_bitstream_to_string__6__value[55U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[55U] 
               & __Vtemp_3[55U]);
        __Vfunc_uvm_bitstream_to_string__6__value[56U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[56U] 
               & __Vtemp_3[56U]);
        __Vfunc_uvm_bitstream_to_string__6__value[57U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[57U] 
               & __Vtemp_3[57U]);
        __Vfunc_uvm_bitstream_to_string__6__value[58U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[58U] 
               & __Vtemp_3[58U]);
        __Vfunc_uvm_bitstream_to_string__6__value[59U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[59U] 
               & __Vtemp_3[59U]);
        __Vfunc_uvm_bitstream_to_string__6__value[60U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[60U] 
               & __Vtemp_3[60U]);
        __Vfunc_uvm_bitstream_to_string__6__value[61U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[61U] 
               & __Vtemp_3[61U]);
        __Vfunc_uvm_bitstream_to_string__6__value[62U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[62U] 
               & __Vtemp_3[62U]);
        __Vfunc_uvm_bitstream_to_string__6__value[63U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[63U] 
               & __Vtemp_3[63U]);
        __Vfunc_uvm_bitstream_to_string__6__value[64U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[64U] 
               & __Vtemp_3[64U]);
        __Vfunc_uvm_bitstream_to_string__6__value[65U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[65U] 
               & __Vtemp_3[65U]);
        __Vfunc_uvm_bitstream_to_string__6__value[66U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[66U] 
               & __Vtemp_3[66U]);
        __Vfunc_uvm_bitstream_to_string__6__value[67U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[67U] 
               & __Vtemp_3[67U]);
        __Vfunc_uvm_bitstream_to_string__6__value[68U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[68U] 
               & __Vtemp_3[68U]);
        __Vfunc_uvm_bitstream_to_string__6__value[69U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[69U] 
               & __Vtemp_3[69U]);
        __Vfunc_uvm_bitstream_to_string__6__value[70U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[70U] 
               & __Vtemp_3[70U]);
        __Vfunc_uvm_bitstream_to_string__6__value[71U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[71U] 
               & __Vtemp_3[71U]);
        __Vfunc_uvm_bitstream_to_string__6__value[72U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[72U] 
               & __Vtemp_3[72U]);
        __Vfunc_uvm_bitstream_to_string__6__value[73U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[73U] 
               & __Vtemp_3[73U]);
        __Vfunc_uvm_bitstream_to_string__6__value[74U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[74U] 
               & __Vtemp_3[74U]);
        __Vfunc_uvm_bitstream_to_string__6__value[75U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[75U] 
               & __Vtemp_3[75U]);
        __Vfunc_uvm_bitstream_to_string__6__value[76U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[76U] 
               & __Vtemp_3[76U]);
        __Vfunc_uvm_bitstream_to_string__6__value[77U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[77U] 
               & __Vtemp_3[77U]);
        __Vfunc_uvm_bitstream_to_string__6__value[78U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[78U] 
               & __Vtemp_3[78U]);
        __Vfunc_uvm_bitstream_to_string__6__value[79U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[79U] 
               & __Vtemp_3[79U]);
        __Vfunc_uvm_bitstream_to_string__6__value[80U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[80U] 
               & __Vtemp_3[80U]);
        __Vfunc_uvm_bitstream_to_string__6__value[81U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[81U] 
               & __Vtemp_3[81U]);
        __Vfunc_uvm_bitstream_to_string__6__value[82U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[82U] 
               & __Vtemp_3[82U]);
        __Vfunc_uvm_bitstream_to_string__6__value[83U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[83U] 
               & __Vtemp_3[83U]);
        __Vfunc_uvm_bitstream_to_string__6__value[84U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[84U] 
               & __Vtemp_3[84U]);
        __Vfunc_uvm_bitstream_to_string__6__value[85U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[85U] 
               & __Vtemp_3[85U]);
        __Vfunc_uvm_bitstream_to_string__6__value[86U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[86U] 
               & __Vtemp_3[86U]);
        __Vfunc_uvm_bitstream_to_string__6__value[87U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[87U] 
               & __Vtemp_3[87U]);
        __Vfunc_uvm_bitstream_to_string__6__value[88U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[88U] 
               & __Vtemp_3[88U]);
        __Vfunc_uvm_bitstream_to_string__6__value[89U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[89U] 
               & __Vtemp_3[89U]);
        __Vfunc_uvm_bitstream_to_string__6__value[90U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[90U] 
               & __Vtemp_3[90U]);
        __Vfunc_uvm_bitstream_to_string__6__value[91U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[91U] 
               & __Vtemp_3[91U]);
        __Vfunc_uvm_bitstream_to_string__6__value[92U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[92U] 
               & __Vtemp_3[92U]);
        __Vfunc_uvm_bitstream_to_string__6__value[93U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[93U] 
               & __Vtemp_3[93U]);
        __Vfunc_uvm_bitstream_to_string__6__value[94U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[94U] 
               & __Vtemp_3[94U]);
        __Vfunc_uvm_bitstream_to_string__6__value[95U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[95U] 
               & __Vtemp_3[95U]);
        __Vfunc_uvm_bitstream_to_string__6__value[96U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[96U] 
               & __Vtemp_3[96U]);
        __Vfunc_uvm_bitstream_to_string__6__value[97U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[97U] 
               & __Vtemp_3[97U]);
        __Vfunc_uvm_bitstream_to_string__6__value[98U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[98U] 
               & __Vtemp_3[98U]);
        __Vfunc_uvm_bitstream_to_string__6__value[99U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[99U] 
               & __Vtemp_3[99U]);
        __Vfunc_uvm_bitstream_to_string__6__value[100U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[100U] 
               & __Vtemp_3[100U]);
        __Vfunc_uvm_bitstream_to_string__6__value[101U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[101U] 
               & __Vtemp_3[101U]);
        __Vfunc_uvm_bitstream_to_string__6__value[102U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[102U] 
               & __Vtemp_3[102U]);
        __Vfunc_uvm_bitstream_to_string__6__value[103U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[103U] 
               & __Vtemp_3[103U]);
        __Vfunc_uvm_bitstream_to_string__6__value[104U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[104U] 
               & __Vtemp_3[104U]);
        __Vfunc_uvm_bitstream_to_string__6__value[105U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[105U] 
               & __Vtemp_3[105U]);
        __Vfunc_uvm_bitstream_to_string__6__value[106U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[106U] 
               & __Vtemp_3[106U]);
        __Vfunc_uvm_bitstream_to_string__6__value[107U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[107U] 
               & __Vtemp_3[107U]);
        __Vfunc_uvm_bitstream_to_string__6__value[108U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[108U] 
               & __Vtemp_3[108U]);
        __Vfunc_uvm_bitstream_to_string__6__value[109U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[109U] 
               & __Vtemp_3[109U]);
        __Vfunc_uvm_bitstream_to_string__6__value[110U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[110U] 
               & __Vtemp_3[110U]);
        __Vfunc_uvm_bitstream_to_string__6__value[111U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[111U] 
               & __Vtemp_3[111U]);
        __Vfunc_uvm_bitstream_to_string__6__value[112U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[112U] 
               & __Vtemp_3[112U]);
        __Vfunc_uvm_bitstream_to_string__6__value[113U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[113U] 
               & __Vtemp_3[113U]);
        __Vfunc_uvm_bitstream_to_string__6__value[114U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[114U] 
               & __Vtemp_3[114U]);
        __Vfunc_uvm_bitstream_to_string__6__value[115U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[115U] 
               & __Vtemp_3[115U]);
        __Vfunc_uvm_bitstream_to_string__6__value[116U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[116U] 
               & __Vtemp_3[116U]);
        __Vfunc_uvm_bitstream_to_string__6__value[117U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[117U] 
               & __Vtemp_3[117U]);
        __Vfunc_uvm_bitstream_to_string__6__value[118U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[118U] 
               & __Vtemp_3[118U]);
        __Vfunc_uvm_bitstream_to_string__6__value[119U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[119U] 
               & __Vtemp_3[119U]);
        __Vfunc_uvm_bitstream_to_string__6__value[120U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[120U] 
               & __Vtemp_3[120U]);
        __Vfunc_uvm_bitstream_to_string__6__value[121U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[121U] 
               & __Vtemp_3[121U]);
        __Vfunc_uvm_bitstream_to_string__6__value[122U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[122U] 
               & __Vtemp_3[122U]);
        __Vfunc_uvm_bitstream_to_string__6__value[123U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[123U] 
               & __Vtemp_3[123U]);
        __Vfunc_uvm_bitstream_to_string__6__value[124U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[124U] 
               & __Vtemp_3[124U]);
        __Vfunc_uvm_bitstream_to_string__6__value[125U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[125U] 
               & __Vtemp_3[125U]);
        __Vfunc_uvm_bitstream_to_string__6__value[126U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[126U] 
               & __Vtemp_3[126U]);
        __Vfunc_uvm_bitstream_to_string__6__value[127U] 
            = (__Vfunc_uvm_bitstream_to_string__6__value[127U] 
               & __Vtemp_3[127U]);
        ++(vlSymsp->__Vcoverage[356]);
        val_str = ((0x01000000U == __Vfunc_uvm_bitstream_to_string__6__radix)
                    ? VL_SFORMATF_N_NX("%0@%0b",0,-1,
                                       &(this->__Vfunc_uvm_bitstream_to_string__6__radix_str),
                                       4096,__Vfunc_uvm_bitstream_to_string__6__value.data()) 
                    : ((0x06000000U == __Vfunc_uvm_bitstream_to_string__6__radix)
                        ? VL_SFORMATF_N_NX("%0@%0o",0,
                                           -1,&(this->__Vfunc_uvm_bitstream_to_string__6__radix_str),
                                           4096,__Vfunc_uvm_bitstream_to_string__6__value.data()) 
                        : ((0x03000000U == __Vfunc_uvm_bitstream_to_string__6__radix)
                            ? VL_SFORMATF_N_NX("%0@%0d",0,
                                               -1,&(this->__Vfunc_uvm_bitstream_to_string__6__radix_str),
                                               4096,
                                               __Vfunc_uvm_bitstream_to_string__6__value.data()) 
                            : ((0x08000000U == __Vfunc_uvm_bitstream_to_string__6__radix)
                                ? VL_SFORMATF_N_NX("%0@%0s",0,
                                                   -1,
                                                   &(this->__Vfunc_uvm_bitstream_to_string__6__radix_str),
                                                   4096,
                                                   __Vfunc_uvm_bitstream_to_string__6__value.data()) 
                                : ((0x09000000U == __Vfunc_uvm_bitstream_to_string__6__radix)
                                    ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                       -1,
                                                       &(this->__Vfunc_uvm_bitstream_to_string__6__radix_str),
                                                       4096,
                                                       __Vfunc_uvm_bitstream_to_string__6__value.data(),
                                                       -12) 
                                    : ((0x02000000U 
                                        == __Vfunc_uvm_bitstream_to_string__6__radix)
                                        ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                           -1,
                                                           &(this->__Vfunc_uvm_bitstream_to_string__6__radix_str),
                                                           4096,
                                                           __Vfunc_uvm_bitstream_to_string__6__value.data()) 
                                        : VL_SFORMATF_N_NX("%0@%0x",0,
                                                           -1,
                                                           &(this->__Vfunc_uvm_bitstream_to_string__6__radix_str),
                                                           4096,
                                                           __Vfunc_uvm_bitstream_to_string__6__value.data()) ))))));
        __Vlabel0: ;
    }
    if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__6__radix) 
         & (__Vfunc_uvm_bitstream_to_string__6__value
            [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__6__size 
                              - (IData)(1U)) >> 5U))] 
            >> (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__6__size 
                               - (IData)(1U)))))) {
        ++(vlSymsp->__Vcoverage[351]);
    }
    if ((1U & (~ (__Vfunc_uvm_bitstream_to_string__6__value
                  [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__6__size 
                                    - (IData)(1U)) 
                                   >> 5U))] >> (0x0000001fU 
                                                & (__Vfunc_uvm_bitstream_to_string__6__size 
                                                   - (IData)(1U))))))) {
        ++(vlSymsp->__Vcoverage[352]);
    }
    if ((0x02000000U != __Vfunc_uvm_bitstream_to_string__6__radix)) {
        ++(vlSymsp->__Vcoverage[353]);
    }
    ++(vlSymsp->__Vcoverage[364]);
    __Vfunc_uvm_leaf_scope__7__scope_separator = scope_separator;
    this->__Vfunc_uvm_leaf_scope__7__full_name = name;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
    if ((0x5bU == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0x5dU;
        ++(vlSymsp->__Vcoverage[328]);
    } else if ((0x28U == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0x29U;
        ++(vlSymsp->__Vcoverage[329]);
    } else if ((0x3cU == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0x3eU;
        ++(vlSymsp->__Vcoverage[330]);
    } else if ((0x7bU == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0x7dU;
        ++(vlSymsp->__Vcoverage[331]);
    } else {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
        ++(vlSymsp->__Vcoverage[332]);
    }
    if (((0U != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
         & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
            != VL_GETC_N(this->__Vfunc_uvm_leaf_scope__7__full_name,
                         (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__7__full_name) 
                          - (IData)(1U)))))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
        ++(vlSymsp->__Vcoverage[333]);
    } else {
        ++(vlSymsp->__Vcoverage[334]);
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
        = (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__7__full_name) 
           - (IData)(1U));
    {
        while (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
            if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__7__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                 == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches);
                ++(vlSymsp->__Vcoverage[342]);
            } else if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__7__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                        == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                       - (IData)(1U));
                if ((1U & ((~ (0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches)) 
                           | (0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))))) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[339]);
                }
                ++(vlSymsp->__Vcoverage[340]);
            } else {
                ++(vlSymsp->__Vcoverage[341]);
            }
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                   - (IData)(1U));
            ++(vlSymsp->__Vcoverage[343]);
        }
        __Vlabel1: ;
    }
    if ((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
        if ((0x2eU != (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))) {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                   - (IData)(1U));
            ++(vlSymsp->__Vcoverage[344]);
        } else {
            ++(vlSymsp->__Vcoverage[345]);
        }
        name = VL_SUBSTR_N(this->__Vfunc_uvm_leaf_scope__7__full_name,
                           ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),
                           (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__7__full_name) 
                            - (IData)(1U)));
        ++(vlSymsp->__Vcoverage[346]);
    } else {
        name = this->__Vfunc_uvm_leaf_scope__7__full_name;
        ++(vlSymsp->__Vcoverage[347]);
    }
    if (((0U != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
         & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
            != VL_GETC_N(this->__Vfunc_uvm_leaf_scope__7__full_name,
                         (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__7__full_name) 
                          - (IData)(1U)))))) {
        ++(vlSymsp->__Vcoverage[335]);
    }
    if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
         == VL_GETC_N(this->__Vfunc_uvm_leaf_scope__7__full_name,
                      (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__7__full_name) 
                       - (IData)(1U))))) {
        ++(vlSymsp->__Vcoverage[336]);
    }
    if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
        ++(vlSymsp->__Vcoverage[337]);
    }
    ++(vlSymsp->__Vcoverage[348]);
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, sz_str, val_str);
    this->__VnoInFunc_pop_element(vlSymsp);
    ++(vlSymsp->__Vcoverage[9914]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field_int(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field_int\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_uvm_integral_to_string__12__value;
    __Vfunc_uvm_integral_to_string__12__value = 0;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__12__size;
    __Vfunc_uvm_integral_to_string__12__size = 0;
    IData/*27:0*/ __Vfunc_uvm_integral_to_string__12__radix;
    __Vfunc_uvm_integral_to_string__12__radix = 0;
    CData/*7:0*/ __Vfunc_uvm_leaf_scope__13__scope_separator;
    __Vfunc_uvm_leaf_scope__13__scope_separator = 0;
    // Body
    std::string __VlefCall_0__get_radix_string;
    std::string sz_str;
    std::string val_str;
    val_str = ""s;
    if ((""s == type_name)) {
        if ((0x09000000U == radix)) {
            type_name = "time"s;
            ++(vlSymsp->__Vcoverage[9917]);
        } else if ((0x08000000U == radix)) {
            type_name = "string"s;
            ++(vlSymsp->__Vcoverage[9915]);
        } else {
            type_name = "integral"s;
            ++(vlSymsp->__Vcoverage[9916]);
        }
        ++(vlSymsp->__Vcoverage[9918]);
    } else {
        ++(vlSymsp->__Vcoverage[9919]);
    }
    sz_str = VL_SFORMATF_N_NX("%0d",0,32,size) ;
    if ((0U == radix)) {
        this->__VnoInFunc_get_default_radix(vlSymsp, radix);
        ++(vlSymsp->__Vcoverage[9920]);
    } else {
        ++(vlSymsp->__Vcoverage[9921]);
    }
    this->__VnoInFunc_get_radix_string(vlSymsp, radix, __VlefCall_0__get_radix_string);
    this->__Vfunc_uvm_integral_to_string__12__radix_str 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_radix_string);
    __Vfunc_uvm_integral_to_string__12__radix = radix;
    __Vfunc_uvm_integral_to_string__12__size = size;
    __Vfunc_uvm_integral_to_string__12__value = value;
    {
        if (((0x02000000U == __Vfunc_uvm_integral_to_string__12__radix) 
             & (IData)((__Vfunc_uvm_integral_to_string__12__value 
                        >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__12__size 
                                           - (IData)(1U))))))) {
            val_str = VL_SFORMATF_N_NX("%0d",0,64,__Vfunc_uvm_integral_to_string__12__value) ;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[366]);
        }
        __Vfunc_uvm_integral_to_string__12__value = 
            (__Vfunc_uvm_integral_to_string__12__value 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vfunc_uvm_integral_to_string__12__size) 
                - 1ULL));
        ++(vlSymsp->__Vcoverage[372]);
        val_str = ((0x01000000U == __Vfunc_uvm_integral_to_string__12__radix)
                    ? VL_SFORMATF_N_NX("%0@%0b",0,-1,
                                       &(this->__Vfunc_uvm_integral_to_string__12__radix_str),
                                       64,__Vfunc_uvm_integral_to_string__12__value) 
                    : ((0x06000000U == __Vfunc_uvm_integral_to_string__12__radix)
                        ? VL_SFORMATF_N_NX("%0@%0o",0,
                                           -1,&(this->__Vfunc_uvm_integral_to_string__12__radix_str),
                                           64,__Vfunc_uvm_integral_to_string__12__value) 
                        : ((0x03000000U == __Vfunc_uvm_integral_to_string__12__radix)
                            ? VL_SFORMATF_N_NX("%0@%0d",0,
                                               -1,&(this->__Vfunc_uvm_integral_to_string__12__radix_str),
                                               64,__Vfunc_uvm_integral_to_string__12__value) 
                            : ((0x08000000U == __Vfunc_uvm_integral_to_string__12__radix)
                                ? VL_SFORMATF_N_NX("%0@%0s",0,
                                                   -1,
                                                   &(this->__Vfunc_uvm_integral_to_string__12__radix_str),
                                                   64,
                                                   __Vfunc_uvm_integral_to_string__12__value) 
                                : ((0x09000000U == __Vfunc_uvm_integral_to_string__12__radix)
                                    ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                       -1,
                                                       &(this->__Vfunc_uvm_integral_to_string__12__radix_str),
                                                       64,
                                                       __Vfunc_uvm_integral_to_string__12__value,
                                                       -12) 
                                    : ((0x02000000U 
                                        == __Vfunc_uvm_integral_to_string__12__radix)
                                        ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                           -1,
                                                           &(this->__Vfunc_uvm_integral_to_string__12__radix_str),
                                                           64,
                                                           __Vfunc_uvm_integral_to_string__12__value) 
                                        : VL_SFORMATF_N_NX("%0@%0x",0,
                                                           -1,
                                                           &(this->__Vfunc_uvm_integral_to_string__12__radix_str),
                                                           64,
                                                           __Vfunc_uvm_integral_to_string__12__value) ))))));
        __Vlabel0: ;
    }
    if (((0x02000000U == __Vfunc_uvm_integral_to_string__12__radix) 
         & (IData)((__Vfunc_uvm_integral_to_string__12__value 
                    >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__12__size 
                                       - (IData)(1U))))))) {
        ++(vlSymsp->__Vcoverage[367]);
    }
    if ((1U & (~ (IData)((__Vfunc_uvm_integral_to_string__12__value 
                          >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__12__size 
                                             - (IData)(1U)))))))) {
        ++(vlSymsp->__Vcoverage[368]);
    }
    if ((0x02000000U != __Vfunc_uvm_integral_to_string__12__radix)) {
        ++(vlSymsp->__Vcoverage[369]);
    }
    ++(vlSymsp->__Vcoverage[380]);
    __Vfunc_uvm_leaf_scope__13__scope_separator = scope_separator;
    this->__Vfunc_uvm_leaf_scope__13__full_name = name;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
    if ((0x5bU == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0x5dU;
        ++(vlSymsp->__Vcoverage[328]);
    } else if ((0x28U == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0x29U;
        ++(vlSymsp->__Vcoverage[329]);
    } else if ((0x3cU == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0x3eU;
        ++(vlSymsp->__Vcoverage[330]);
    } else if ((0x7bU == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0x7dU;
        ++(vlSymsp->__Vcoverage[331]);
    } else {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
        ++(vlSymsp->__Vcoverage[332]);
    }
    if (((0U != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
         & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
            != VL_GETC_N(this->__Vfunc_uvm_leaf_scope__13__full_name,
                         (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__13__full_name) 
                          - (IData)(1U)))))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
        ++(vlSymsp->__Vcoverage[333]);
    } else {
        ++(vlSymsp->__Vcoverage[334]);
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
        = (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__13__full_name) 
           - (IData)(1U));
    {
        while (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
            if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__13__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                 == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches);
                ++(vlSymsp->__Vcoverage[342]);
            } else if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__13__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                        == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                       - (IData)(1U));
                if ((1U & ((~ (0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches)) 
                           | (0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))))) {
                    goto __Vlabel1;
                } else {
                    ++(vlSymsp->__Vcoverage[339]);
                }
                ++(vlSymsp->__Vcoverage[340]);
            } else {
                ++(vlSymsp->__Vcoverage[341]);
            }
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                   - (IData)(1U));
            ++(vlSymsp->__Vcoverage[343]);
        }
        __Vlabel1: ;
    }
    if ((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
        if ((0x2eU != (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))) {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                   - (IData)(1U));
            ++(vlSymsp->__Vcoverage[344]);
        } else {
            ++(vlSymsp->__Vcoverage[345]);
        }
        name = VL_SUBSTR_N(this->__Vfunc_uvm_leaf_scope__13__full_name,
                           ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),
                           (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__13__full_name) 
                            - (IData)(1U)));
        ++(vlSymsp->__Vcoverage[346]);
    } else {
        name = this->__Vfunc_uvm_leaf_scope__13__full_name;
        ++(vlSymsp->__Vcoverage[347]);
    }
    if (((0U != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
         & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
            != VL_GETC_N(this->__Vfunc_uvm_leaf_scope__13__full_name,
                         (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__13__full_name) 
                          - (IData)(1U)))))) {
        ++(vlSymsp->__Vcoverage[335]);
    }
    if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
         == VL_GETC_N(this->__Vfunc_uvm_leaf_scope__13__full_name,
                      (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__13__full_name) 
                       - (IData)(1U))))) {
        ++(vlSymsp->__Vcoverage[336]);
    }
    if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
        ++(vlSymsp->__Vcoverage[337]);
    }
    ++(vlSymsp->__Vcoverage[348]);
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, sz_str, val_str);
    this->__VnoInFunc_pop_element(vlSymsp);
    ++(vlSymsp->__Vcoverage[9922]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    emit__Vfuncrtn = ""s;
    this->__Vfunc_uvm_report_enabled__16__id = "NO_OVERRIDE"s;
    __Vfunc_uvm_report_enabled__16__severity = 2U;
    __Vfunc_uvm_report_enabled__16__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__17__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__18__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), this->__Vfunc_uvm_report_enabled__16__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[432]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_error__20__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__20__context_name = ""s;
        __Vtask_uvm_report_error__20__line = 0x000003e7U;
        this->__Vtask_uvm_report_error__20__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
        __Vtask_uvm_report_error__20__verbosity = 0U;
        this->__Vtask_uvm_report_error__20__message = "emit() method not overridden in printer subtype"s;
        this->__Vtask_uvm_report_error__20__id = "NO_OVERRIDE"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__21__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__22__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__20__id, this->__Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, this->__Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, this->__Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[437]);
        ++(vlSymsp->__Vcoverage[9923]);
    } else {
        ++(vlSymsp->__Vcoverage[9924]);
    }
    emit__Vfuncrtn = ""s;
    ++(vlSymsp->__Vcoverage[9925]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush\n"); );
    // Body
    IData/*31:0*/ unnamedblk41__DOT__i;
    unnamedblk41__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> element;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element>> all_descendent_elements;
    this->__VnoInFunc_get_bottom_element(vlSymsp, element);
    all_descendent_elements.clear();
    this->__VnoInFunc_get_bottom_element(vlSymsp, element);
    if ((VlNull{} != element)) {
        VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1010)->__VnoInFunc_get_children(vlSymsp, all_descendent_elements, 1U);
        unnamedblk41__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk41__DOT__i, all_descendent_elements.size())) {
            this->__PVT__m_recycled_elements.push_back(all_descendent_elements.at(unnamedblk41__DOT__i));
            VL_NULL_CHECK(all_descendent_elements.at(unnamedblk41__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1013)->__VnoInFunc_clear_children(vlSymsp);
            unnamedblk41__DOT__i = ((IData)(1U) + unnamedblk41__DOT__i);
            ++(vlSymsp->__Vcoverage[9926]);
        }
        VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1015)->__VnoInFunc_clear_children(vlSymsp);
        this->__PVT__m_recycled_elements.push_back(element);
        this->__PVT__m_element_stack.clear();
        ++(vlSymsp->__Vcoverage[9927]);
    } else {
        ++(vlSymsp->__Vcoverage[9928]);
    }
    this->__PVT__m_recur_states.clear();
    this->__PVT__m_flushed = 1U;
    ++(vlSymsp->__Vcoverage[9929]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_name_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_name_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1025)->__PVT__identifier 
        = enabled;
    ++(vlSymsp->__Vcoverage[9930]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_name_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_name_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_name_enabled\n"); );
    // Body
    get_name_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1028)
        ->__PVT__identifier;
    ++(vlSymsp->__Vcoverage[9931]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_type_name_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_type_name_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1032)->__PVT__type_name 
        = enabled;
    ++(vlSymsp->__Vcoverage[9932]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_type_name_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name_enabled\n"); );
    // Body
    get_type_name_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1035)
        ->__PVT__type_name;
    ++(vlSymsp->__Vcoverage[9933]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_size_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_size_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1039)->__PVT__size 
        = enabled;
    ++(vlSymsp->__Vcoverage[9934]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_size_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_size_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_size_enabled\n"); );
    // Body
    get_size_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1042)
        ->__PVT__size;
    ++(vlSymsp->__Vcoverage[9935]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_id_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_id_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1046)->__PVT__reference 
        = enabled;
    ++(vlSymsp->__Vcoverage[9936]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_id_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_id_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_id_enabled\n"); );
    // Body
    get_id_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1049)
        ->__PVT__reference;
    ++(vlSymsp->__Vcoverage[9937]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_radix_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_radix_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1053)->__PVT__show_radix 
        = enabled;
    ++(vlSymsp->__Vcoverage[9938]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_radix_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_enabled\n"); );
    // Body
    get_radix_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1056)
        ->__PVT__show_radix;
    ++(vlSymsp->__Vcoverage[9939]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_radix_string(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ radix, std::string prefix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_radix_string\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__33__verbosity;
    __Vtask_uvm_report_warning__33__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__33__line;
    __Vtask_uvm_report_warning__33__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__33__report_enabled_checked;
    __Vtask_uvm_report_warning__33__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((0x02000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1060)->__PVT__dec_radix 
            = prefix;
        ++(vlSymsp->__Vcoverage[9947]);
    } else if ((0x01000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1061)->__PVT__bin_radix 
            = prefix;
        ++(vlSymsp->__Vcoverage[9946]);
    } else if ((0x06000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1062)->__PVT__oct_radix 
            = prefix;
        ++(vlSymsp->__Vcoverage[9945]);
    } else if ((0x03000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1063)->__PVT__unsigned_radix 
            = prefix;
        ++(vlSymsp->__Vcoverage[9944]);
    } else if ((0x07000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1064)->__PVT__hex_radix 
            = prefix;
        ++(vlSymsp->__Vcoverage[9942]);
    } else {
        this->__Vfunc_uvm_report_enabled__29__id = "PRINTER_UNKNOWN_RADIX"s;
        __Vfunc_uvm_report_enabled__29__severity = 1U;
        __Vfunc_uvm_report_enabled__29__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__30__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__31__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), this->__Vfunc_uvm_report_enabled__29__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_warning__33__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__33__context_name = ""s;
            __Vtask_uvm_report_warning__33__line = 0x00000429U;
            this->__Vtask_uvm_report_warning__33__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
            __Vtask_uvm_report_warning__33__verbosity = 0U;
            this->__Vtask_uvm_report_warning__33__message 
                = VL_SFORMATF_N_NX("set_radix_string called with unsupported radix %s",0,
                                   28,radix) ;
            this->__Vtask_uvm_report_warning__33__id = "PRINTER_UNKNOWN_RADIX"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__34__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__35__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__33__id, this->__Vtask_uvm_report_warning__33__message, __Vtask_uvm_report_warning__33__verbosity, this->__Vtask_uvm_report_warning__33__filename, __Vtask_uvm_report_warning__33__line, this->__Vtask_uvm_report_warning__33__context_name, (IData)(__Vtask_uvm_report_warning__33__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[436]);
            ++(vlSymsp->__Vcoverage[9940]);
        } else {
            ++(vlSymsp->__Vcoverage[9941]);
        }
        ++(vlSymsp->__Vcoverage[9943]);
    }
    ++(vlSymsp->__Vcoverage[9948]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_string(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ radix, std::string &get_radix_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_string\n"); );
    // Body
    get_radix_string__Vfuncrtn = ((0x02000000U == radix)
                                   ? VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1068)
                                  ->__PVT__dec_radix
                                   : ((0x01000000U 
                                       == radix) ? VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1069)
                                      ->__PVT__bin_radix
                                       : ((0x06000000U 
                                           == radix)
                                           ? VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1070)
                                          ->__PVT__oct_radix
                                           : ((0x03000000U 
                                               == radix)
                                               ? VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1071)
                                              ->__PVT__unsigned_radix
                                               : ((0x07000000U 
                                                   == radix)
                                                   ? VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1072)
                                                  ->__PVT__hex_radix
                                                   : ""s)))));
    ++(vlSymsp->__Vcoverage[9955]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_default_radix(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_default_radix\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1077)->__PVT__default_radix 
        = radix;
    ++(vlSymsp->__Vcoverage[9956]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_default_radix(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ &get_default_radix__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_default_radix\n"); );
    // Body
    get_default_radix__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1080)
        ->__PVT__default_radix;
    ++(vlSymsp->__Vcoverage[9957]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_root_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_root_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1084)->__PVT__show_root 
        = enabled;
    ++(vlSymsp->__Vcoverage[9958]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_root_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_root_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_root_enabled\n"); );
    // Body
    get_root_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1087)
        ->__PVT__show_root;
    ++(vlSymsp->__Vcoverage[9959]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1091)->__PVT__recursion_policy 
        = policy;
    ++(vlSymsp->__Vcoverage[9960]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1094)
        ->__PVT__recursion_policy;
    ++(vlSymsp->__Vcoverage[9961]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_max_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ depth) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_max_depth\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1098)->__PVT__depth 
        = depth;
    ++(vlSymsp->__Vcoverage[9962]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_max_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_max_depth\n"); );
    // Body
    get_max_depth__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1101)
        ->__PVT__depth;
    ++(vlSymsp->__Vcoverage[9963]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_file(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ fl) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1105)->__PVT__mcd 
        = fl;
    ++(vlSymsp->__Vcoverage[9964]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_file(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_file\n"); );
    // Body
    get_file__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1108)
        ->__PVT__mcd;
    ++(vlSymsp->__Vcoverage[9965]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_line_prefix(Vtb_rng__Syms* __restrict vlSymsp, std::string prefix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_line_prefix\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1112)->__PVT__prefix 
        = prefix;
    ++(vlSymsp->__Vcoverage[9966]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_line_prefix(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_line_prefix__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_line_prefix\n"); );
    // Body
    get_line_prefix__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1115)
        ->__PVT__prefix;
    ++(vlSymsp->__Vcoverage[9967]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_begin_elements(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ elements) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_begin_elements\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1119)->__PVT__begin_elements 
        = elements;
    ++(vlSymsp->__Vcoverage[9968]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_begin_elements(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_begin_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_begin_elements\n"); );
    // Body
    get_begin_elements__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1122)
        ->__PVT__begin_elements;
    ++(vlSymsp->__Vcoverage[9969]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_end_elements(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ elements) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_end_elements\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1126)->__PVT__end_elements 
        = elements;
    ++(vlSymsp->__Vcoverage[9970]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_end_elements(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_end_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_end_elements\n"); );
    // Body
    get_end_elements__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1129)
        ->__PVT__end_elements;
    ++(vlSymsp->__Vcoverage[9971]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_bottom_element(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> &get_bottom_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_bottom_element\n"); );
    // Body
    get_bottom_element__Vfuncrtn = (VL_LTS_III(32, 0U, this->__PVT__m_element_stack.size())
                                     ? this->__PVT__m_element_stack.at(0U)
                                     : VlNull{});
    ++(vlSymsp->__Vcoverage[9974]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_top_element(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> &get_top_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_top_element\n"); );
    // Body
    get_top_element__Vfuncrtn = (VL_LTS_III(32, 0U, this->__PVT__m_element_stack.size())
                                  ? this->__PVT__m_element_stack.atBack(0U)
                                  : VlNull{});
    ++(vlSymsp->__Vcoverage[9977]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_push_element(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string type_name, std::string size, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_push_element\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> element;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> parent;
    this->__VnoInFunc_get_unused_element(vlProcess, vlSymsp, element);
    this->__VnoInFunc_get_top_element(vlSymsp, parent);
    VL_NULL_CHECK(element, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1166)->__VnoInFunc_set(vlSymsp, name, type_name, size, value);
    if ((VlNull{} != parent)) {
        VL_NULL_CHECK(parent, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1167)->__VnoInFunc_add_child(vlSymsp, element);
        ++(vlSymsp->__Vcoverage[9978]);
    } else {
        ++(vlSymsp->__Vcoverage[9979]);
    }
    this->__PVT__m_element_stack.push_back(element);
    ++(vlSymsp->__Vcoverage[9980]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element\n"); );
    // Body
    if (VL_LTS_III(32, 1U, this->__PVT__m_element_stack.size())) {
        std::ignore = this->__PVT__m_element_stack.pop_back();
        ++(vlSymsp->__Vcoverage[9981]);
    } else {
        ++(vlSymsp->__Vcoverage[9982]);
    }
    ++(vlSymsp->__Vcoverage[9983]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_unused_element(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> &get_unused_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_unused_element\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer_element> element;
    if (VL_LTS_III(32, 0U, this->__PVT__m_recycled_elements.size())) {
        element = this->__PVT__m_recycled_elements.pop_back();
        ++(vlSymsp->__Vcoverage[9984]);
    } else {
        element = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_printer_element, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[9985]);
    }
    get_unused_element__Vfuncrtn = element;
    ++(vlSymsp->__Vcoverage[9986]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header\n"); );
    // Body
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, arraytype, VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                size) , "-"s);
    ++(vlSymsp->__Vcoverage[9987]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer\n"); );
    // Body
    this->__VnoInFunc_pop_element(vlSymsp);
    ++(vlSymsp->__Vcoverage[9988]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range\n"); );
    // Body
    {
        if (((0xffffffffU == min) & (0xffffffffU == max))) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9990]);
        }
        if ((0xffffffffU == min)) {
            min = max;
            ++(vlSymsp->__Vcoverage[9994]);
        } else {
            ++(vlSymsp->__Vcoverage[9995]);
        }
        if ((0xffffffffU == max)) {
            max = min;
            ++(vlSymsp->__Vcoverage[9996]);
        } else {
            ++(vlSymsp->__Vcoverage[9997]);
        }
        if (VL_LTS_III(32, max, min)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9999]);
        }
        this->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, "..."s, "..."s, "..."s, "..."s);
        __Vlabel0: ;
    }
    if (((0xffffffffU == min) & (0xffffffffU == max))) {
        ++(vlSymsp->__Vcoverage[9991]);
    }
    if ((0xffffffffU != max)) {
        ++(vlSymsp->__Vcoverage[9992]);
    }
    if ((0xffffffffU != min)) {
        ++(vlSymsp->__Vcoverage[9993]);
    }
    ++(vlSymsp->__Vcoverage[10000]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vfunc_uvm_object_value_str__47__v;
    IData/*31:0*/ __Vfunc_uvm_object_value_str__47____VlefCall_0__get_inst_id;
    __Vfunc_uvm_object_value_str__47____VlefCall_0__get_inst_id = 0;
    IData/*31:0*/ __Vtask_get_inst_id__48__Vfuncout;
    __Vtask_get_inst_id__48__Vfuncout = 0;
    // Body
    std::string __VlefCall_1__uvm_object_value_str;
    std::string __VlefCall_0__get_type_name;
    CData/*0:0*/ __VExpr_h55a7eb7f__0;
    __VExpr_h55a7eb7f__0 = 0;
    if ((""s == name)) {
        name = "<unnamed>"s;
        ++(vlSymsp->__Vcoverage[10001]);
    } else {
        ++(vlSymsp->__Vcoverage[10002]);
    }
    if ((VlNull{} != value)) {
        VL_NULL_CHECK(value, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1245)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    } else {
        __VlefCall_0__get_type_name = "object"s;
    }
    this->__VnoInFunc_get_id_enabled(vlSymsp, __VExpr_h55a7eb7f__0);
    if (__VExpr_h55a7eb7f__0) {
        __Vfunc_uvm_object_value_str__47__v = value;
        {
            if ((VlNull{} == __Vfunc_uvm_object_value_str__47__v)) {
                __VlefCall_1__uvm_object_value_str = "<null>"s;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[326]);
            }
            VL_NULL_CHECK(__Vfunc_uvm_object_value_str__47__v, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 198)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__48__Vfuncout);
            __Vfunc_uvm_object_value_str__47____VlefCall_0__get_inst_id 
                = __Vtask_get_inst_id__48__Vfuncout;
            __VlefCall_1__uvm_object_value_str = VL_SFORMATF_N_NX("%0d",0,
                                                                  32,
                                                                  __Vfunc_uvm_object_value_str__47____VlefCall_0__get_inst_id) ;
            __VlefCall_1__uvm_object_value_str = VL_CONCATN_NNN("@"s, __VlefCall_1__uvm_object_value_str);
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[327]);
    } else {
        __VlefCall_1__uvm_object_value_str = "-"s;
    }
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, 
                                   VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), "-"s, 
                                   VL_CVT_PACK_STR_NN(__VlefCall_1__uvm_object_value_str));
    if (__VExpr_h55a7eb7f__0) {
        ++(vlSymsp->__Vcoverage[10003]);
    }
    if ((1U & (~ (IData)(__VExpr_h55a7eb7f__0)))) {
        ++(vlSymsp->__Vcoverage[10004]);
    }
    ++(vlSymsp->__Vcoverage[10005]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_first_child__57__Vfuncout;
    __Vtask_get_first_child__57__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__60__Vfuncout;
    __Vtask_get_next_child__60__Vfuncout = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__68__Vfuncout;
    // Body
    CData/*0:0*/ __VlefCall_6__user_hook_enabled;
    IData/*31:0*/ __VlefCall_5__get_next_child;
    IData/*31:0*/ __VlefCall_4__get_first_child;
    IData/*31:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__get_active_object_depth;
    IData/*31:0*/ __VlefCall_0__get_max_depth;
    std::string unnamedblk42__DOT__name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> child_comp;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> field_op;
    IData/*27:0*/ recursion_policy;
    recursion_policy = 0U;
    this->__VnoInFunc_get_recursion_policy(vlSymsp, recursion_policy);
    __VlefLogOr_2 = ((VlNull{} == value) | (0x00040000U 
                                            == recursion_policy));
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        this->__VnoInFunc_get_max_depth(vlSymsp, __VlefCall_0__get_max_depth);
        this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_1__get_active_object_depth);
        __VlefLogOr_2 = (__VlefCall_0__get_max_depth 
                         == __VlefCall_1__get_active_object_depth);
    }
    if (__VlefLogOr_2) {
        this->__VnoInFunc_print_object_header(vlProcess, vlSymsp, name, value, scope_separator);
        this->__VnoInFunc_pop_element(vlSymsp);
        ++(vlSymsp->__Vcoverage[10016]);
    } else {
        this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, value);
        this->__PVT__m_recur_states.at(value).at(recursion_policy) = 1U;
        this->__VnoInFunc_print_object_header(vlProcess, vlSymsp, name, value, scope_separator);
        __VlefExpr_3 = VL_CAST_DYNAMIC(value, comp);
        if (__VlefExpr_3) {
            unnamedblk42__DOT__name = ""s;
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1276)->__VnoInFunc_get_first_child(vlSymsp, unnamedblk42__DOT__name, __Vtask_get_first_child__57__Vfuncout);
            __VlefCall_4__get_first_child = __Vtask_get_first_child__57__Vfuncout;
            if ((0U != __VlefCall_4__get_first_child)) {
                while (true) {
                    VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1278)->__VnoInFunc_get_child(vlProcess, vlSymsp, unnamedblk42__DOT__name, child_comp);
                    if (VL_NULL_CHECK(child_comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1279)
                        ->__PVT__print_enabled) {
                        this->__VnoInFunc_print_object(vlProcess, vlSymsp, unnamedblk42__DOT__name, child_comp, 0x2eU);
                        ++(vlSymsp->__Vcoverage[10006]);
                    } else {
                        ++(vlSymsp->__Vcoverage[10007]);
                    }
                    ++(vlSymsp->__Vcoverage[10008]);
                    VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1281)->__VnoInFunc_get_next_child(vlSymsp, unnamedblk42__DOT__name, __Vtask_get_next_child__60__Vfuncout);
                    __VlefCall_5__get_next_child = __Vtask_get_next_child__60__Vfuncout;
                    if (!((0U != __VlefCall_5__get_next_child))) break;
                    ++(vlSymsp->__Vcoverage[10009]);
                }
                ++(vlSymsp->__Vcoverage[10010]);
            } else {
                ++(vlSymsp->__Vcoverage[10011]);
            }
            ++(vlSymsp->__Vcoverage[10012]);
        } else {
            ++(vlSymsp->__Vcoverage[10013]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, field_op);
        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1285)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000010U, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer>{this}, VlNull{});
        VL_NULL_CHECK(value, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1286)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1287)->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __VlefCall_6__user_hook_enabled);
        if (__VlefCall_6__user_hook_enabled) {
            VL_NULL_CHECK(value, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1288)->__VnoInFunc_do_print(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer>{this});
            ++(vlSymsp->__Vcoverage[10014]);
        } else {
            ++(vlSymsp->__Vcoverage[10015]);
        }
        VL_NULL_CHECK(field_op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_printer.svh", 1289)->__VnoInFunc_m_recycle(vlSymsp);
        this->__VnoInFunc_pop_element(vlSymsp);
        this->__PVT__m_recur_states.at(value).at(recursion_policy) = 2U;
        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__68__Vfuncout);
        ++(vlSymsp->__Vcoverage[10017]);
    }
    ++(vlSymsp->__Vcoverage[10018]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_active_object_depth;
    istop__Vfuncrtn = 0U;
    this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_0__get_active_object_depth);
    istop__Vfuncrtn = (0U == __VlefCall_0__get_active_object_depth);
    ++(vlSymsp->__Vcoverage[10019]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic\n"); );
    // Body
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, 
                                   VL_CVT_PACK_STR_NN(
                                                      ((0xfffffffeU 
                                                        == size)
                                                        ? "..."s
                                                        : VL_SFORMATF_N_NX("%0d",0,
                                                                           32,
                                                                           size) )), value);
    this->__VnoInFunc_pop_element(vlSymsp);
    if ((0xfffffffeU == size)) {
        ++(vlSymsp->__Vcoverage[10020]);
    }
    if ((0xfffffffeU != size)) {
        ++(vlSymsp->__Vcoverage[10021]);
    }
    ++(vlSymsp->__Vcoverage[10022]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic_element(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string type_name, std::string size, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic_element\n"); );
    // Body
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, size, value);
    this->__VnoInFunc_pop_element(vlSymsp);
    ++(vlSymsp->__Vcoverage[10023]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time\n"); );
    // Body
    this->__VnoInFunc_print_field_int(vlProcess, vlSymsp, name, value, 0x00000040U, 0x09000000U, (IData)(scope_separator), ""s);
    ++(vlSymsp->__Vcoverage[10024]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string\n"); );
    // Body
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, "string"s, VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                VL_LEN_IN(value)) , 
                                   VL_CVT_PACK_STR_NN(
                                                      ((""s 
                                                        == value)
                                                        ? "\"\""s
                                                        : value)));
    this->__VnoInFunc_pop_element(vlSymsp);
    if ((""s == value)) {
        ++(vlSymsp->__Vcoverage[10025]);
    }
    if ((1U & (~ (""s == value)))) {
        ++(vlSymsp->__Vcoverage[10026]);
    }
    ++(vlSymsp->__Vcoverage[10027]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_object_printed(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value, IData/*27:0*/ recursion, IData/*31:0*/ &object_printed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_object_printed\n"); );
    // Body
    {
        object_printed__Vfuncrtn = 0U;
        if (this->__PVT__m_recur_states.exists(value)) {
            ++(vlSymsp->__Vcoverage[10029]);
        } else {
            object_printed__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (this->__PVT__m_recur_states.at(value).exists(recursion)) {
            object_printed__Vfuncrtn = this->__PVT__m_recur_states
                .at(value).at(recursion);
        } else {
            object_printed__Vfuncrtn = 0U;
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[10032]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_real(Vtb_rng__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, "real"s, "64"s, VL_SFORMATF_N_NX("%f",0,
                                                                                64,
                                                                                value) );
    this->__VnoInFunc_pop_element(vlSymsp);
    ++(vlSymsp->__Vcoverage[10033]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_index_string(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_index_string\n"); );
    // Body
    index_string__Vfuncrtn = VL_SFORMATF_N_NX("%0d",0,
                                              32,index) ;
    index_string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(name, "["s), index_string__Vfuncrtn), "]"s);
    ++(vlSymsp->__Vcoverage[10034]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_printer::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_flushed = 0;
    __PVT__m_recur_states.atDefault().atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_printer::~Vtb_rng_uvm_pkg__03a__03auvm_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_flushed:" + VL_TO_STRING(__PVT__m_flushed);
    out += ", knobs:" + VL_TO_STRING(__PVT__knobs);
    out += ", m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
    out += ", m_element_stack:" + VL_TO_STRING(__PVT__m_element_stack);
    out += ", m_recycled_elements:" + VL_TO_STRING(__PVT__m_recycled_elements);
    out += ", m_string:" + VL_TO_STRING(__PVT__m_string);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
