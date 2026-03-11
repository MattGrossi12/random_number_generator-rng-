// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_uvm_seeding(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_uvm_seeding__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_uvm_seeding\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    get_uvm_seeding__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 864)->__VnoInFunc_get_uvm_seeding(vlSymsp, get_uvm_seeding__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[772]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_set_uvm_seeding(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_set_uvm_seeding\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 872)->__VnoInFunc_set_uvm_seeding(vlSymsp, enable);
    ++(vlSymsp->__Vcoverage[773]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__4__verbosity;
    __Vtask_uvm_report_error__4__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__4__line;
    __Vtask_uvm_report_error__4__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__4__report_enabled_checked;
    __Vtask_uvm_report_error__4__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__4__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__4__context_name = ""s;
    __Vtask_uvm_report_error__4__line = 0U;
    this->__Vtask_uvm_report_error__4__filename = ""s;
    __Vtask_uvm_report_error__4__verbosity = 0U;
    this->__Vtask_uvm_report_error__4__message = "get_type not implemented in derived class."s;
    this->__Vtask_uvm_report_error__4__id = "NOTYPID"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__5__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__6__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__4__id, this->__Vtask_uvm_report_error__4__message, __Vtask_uvm_report_error__4__verbosity, this->__Vtask_uvm_report_error__4__filename, __Vtask_uvm_report_error__4__line, this->__Vtask_uvm_report_error__4__context_name, (IData)(__Vtask_uvm_report_error__4__report_enabled_checked));
    ++(vlSymsp->__Vcoverage[442]);
    get_type__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[777]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_inst_count(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_inst_count\n"); );
    // Body
    get_inst_count__Vfuncrtn = this->__PVT__m_inst_count;
    ++(vlSymsp->__Vcoverage[782]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "<unknown>"s;
    ++(vlSymsp->__Vcoverage[769]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_create\n"); );
    // Body
    create__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[770]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    /*super.new*/;
    __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count);
    this->__PVT__m_inst_id = __Vincrement1;
    this->__PVT__m_leaf_name = name;
    ++(vlSymsp->__Vcoverage[771]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__4____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__4____VlefExpr_4 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__4____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__4____VlefExpr_3 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__4____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__4____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__4____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__6____Vincrement2;
    __Vfunc_uvm_instance_scope__6____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__11__Vfuncout;
    __Vfunc_uvm_oneway_hash__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__11__seed;
    __Vfunc_uvm_oneway_hash__11__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT___byte = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit;
    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
    // Body
    IData/*31:0*/ __VlefCall_3__uvm_create_random_seed;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__get_uvm_seeding;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__VnoInFunc_get_uvm_seeding(vlProcess, vlSymsp, __VlefCall_0__get_uvm_seeding);
    if (__VlefCall_0__get_uvm_seeding) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        this->__Vfunc_uvm_create_random_seed__4__inst_id 
            = VL_CVT_PACK_STR_NN(__VlefCall_2__get_full_name);
        this->__Vfunc_uvm_create_random_seed__4__type_id 
            = VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name);
        if ((""s == this->__Vfunc_uvm_create_random_seed__4__inst_id)) {
            this->__Vfunc_uvm_create_random_seed__4__inst_id = "__global__"s;
            ++(vlSymsp->__Vcoverage[321]);
        } else {
            ++(vlSymsp->__Vcoverage[322]);
        }
        if (vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__4__inst_id)) {
            ++(vlSymsp->__Vcoverage[324]);
        } else {
            __Vfunc_uvm_create_random_seed__4____VlefCall_0__new 
                = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.at(this->__Vfunc_uvm_create_random_seed__4__inst_id) 
                = __Vfunc_uvm_create_random_seed__4____VlefCall_0__new;
            ++(vlSymsp->__Vcoverage[323]);
        }
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
            .at(this->__Vfunc_uvm_create_random_seed__4__inst_id);
        __Vfunc_uvm_instance_scope__6____Vincrement2 = 0U;
        {
            if ((""s != this->__Vfunc_uvm_instance_scope__6__Vfuncout)) {
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[303]);
            }
            VL_SFORMAT_NX(64,this->__Vfunc_uvm_instance_scope__6__Vfuncout
                          ,"%Nuvm_pkg.uvm_instance_scope",0,
                          vlSymsp->name());
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__6__Vfuncout) 
                   - (IData)(1U));
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__6__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
            while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                     & (0x2eU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                    & (0x3aU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
                __Vfunc_uvm_instance_scope__6____Vincrement2 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                       - (IData)(1U));
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                    = __Vfunc_uvm_instance_scope__6____Vincrement2;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                    = VL_GETC_N(this->__Vfunc_uvm_instance_scope__6__Vfuncout,__Vfunc_uvm_instance_scope__6____Vincrement2);
                ++(vlSymsp->__Vcoverage[304]);
            }
            if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
                __Vtask_uvm_report_error__7__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_error__7__context_name = ""s;
                __Vtask_uvm_report_error__7__line = 0U;
                this->__Vtask_uvm_report_error__7__filename = ""s;
                __Vtask_uvm_report_error__7__verbosity = 0U;
                this->__Vtask_uvm_report_error__7__message 
                    = VL_SFORMATF_N_NX("Illegal name %@ in scope string",0,
                                       -1,&(this->__Vfunc_uvm_instance_scope__6__Vfuncout)) ;
                this->__Vtask_uvm_report_error__7__id = "SCPSTR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__8__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__7__id, this->__Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, this->__Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, this->__Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[305]);
            } else {
                ++(vlSymsp->__Vcoverage[306]);
            }
            this->__Vfunc_uvm_instance_scope__6__Vfuncout 
                = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__6__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[307]);
        this->__Vfunc_uvm_create_random_seed__4____VlefCall_1__uvm_instance_scope 
            = this->__Vfunc_uvm_instance_scope__6__Vfuncout;
        this->__Vfunc_uvm_create_random_seed__4__type_id 
            = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__4____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__4__type_id);
        if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 175)
            ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__4__type_id)) {
            ++(vlSymsp->__Vcoverage[326]);
        } else {
            __Vfunc_uvm_oneway_hash__11__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
            this->__Vfunc_uvm_oneway_hash__11__string_in 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__4__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__4__inst_id));
            if ((0U != __Vfunc_uvm_oneway_hash__11__seed)) {
                ++(vlSymsp->__Vcoverage[309]);
            } else {
                __Vfunc_uvm_oneway_hash__11__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
                ++(vlSymsp->__Vcoverage[308]);
            }
            __Vfunc_uvm_oneway_hash__11__Vfuncout = __Vfunc_uvm_oneway_hash__11__seed;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
            __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT___byte = 0U;
            __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT___byte = 0U;
            {
                while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT___byte, 
                                  VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__11__string_in))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                        = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__11__string_in,__Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT___byte);
                    if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                        goto __Vlabel1;
                    } else {
                        ++(vlSymsp->__Vcoverage[311]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                    if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        ++(vlSymsp->__Vcoverage[312]);
                    } else {
                        ++(vlSymsp->__Vcoverage[313]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 1U;
                    ++(vlSymsp->__Vcoverage[318]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                    if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 1U)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        ++(vlSymsp->__Vcoverage[312]);
                    } else {
                        ++(vlSymsp->__Vcoverage[313]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 2U;
                    ++(vlSymsp->__Vcoverage[318]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                    if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 2U)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        ++(vlSymsp->__Vcoverage[312]);
                    } else {
                        ++(vlSymsp->__Vcoverage[313]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 3U;
                    ++(vlSymsp->__Vcoverage[318]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                    if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 3U)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        ++(vlSymsp->__Vcoverage[312]);
                    } else {
                        ++(vlSymsp->__Vcoverage[313]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 4U;
                    ++(vlSymsp->__Vcoverage[318]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                    if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 4U)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        ++(vlSymsp->__Vcoverage[312]);
                    } else {
                        ++(vlSymsp->__Vcoverage[313]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 5U;
                    ++(vlSymsp->__Vcoverage[318]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                    if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 5U)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        ++(vlSymsp->__Vcoverage[312]);
                    } else {
                        ++(vlSymsp->__Vcoverage[313]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 6U;
                    ++(vlSymsp->__Vcoverage[318]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                    if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                               ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                  >> 6U)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        ++(vlSymsp->__Vcoverage[312]);
                    } else {
                        ++(vlSymsp->__Vcoverage[313]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 7U;
                    ++(vlSymsp->__Vcoverage[318]);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x1fU);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                    if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                         ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                            >> 7U))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                            = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                        ++(vlSymsp->__Vcoverage[312]);
                    } else {
                        ++(vlSymsp->__Vcoverage[313]);
                    }
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit = 8U;
                    ++(vlSymsp->__Vcoverage[318]);
                    __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT___byte 
                        = ((IData)(1U) + __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT___byte);
                    ++(vlSymsp->__Vcoverage[319]);
                }
                __Vlabel1: ;
            }
            __Vfunc_uvm_oneway_hash__11__Vfuncout = 
                (__Vfunc_uvm_oneway_hash__11__Vfuncout 
                 + (~ ((((0x0000ff00U & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                         << 8U)) | 
                         (0x000000ffU & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                         >> 8U))) << 0x00000010U) 
                       | ((0x0000ff00U & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                          >> 8U)) | 
                          (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                           >> 0x18U)))));
            if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                 & (~ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                       >> (7U & __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit))))) {
                ++(vlSymsp->__Vcoverage[314]);
            }
            if ((1U & ((~ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb)) 
                       & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                          >> (7U & __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit))))) {
                ++(vlSymsp->__Vcoverage[315]);
            }
            if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                 & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                    >> (7U & __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit)))) {
                ++(vlSymsp->__Vcoverage[316]);
            }
            if ((1U & ((~ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb)) 
                       & (~ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                             >> (7U & __Vfunc_uvm_oneway_hash__11__unnamedblk1__DOT__unnamedblk2__DOT___bit)))))) {
                ++(vlSymsp->__Vcoverage[317]);
            }
            ++(vlSymsp->__Vcoverage[320]);
            __Vfunc_uvm_create_random_seed__4____VlefCall_2__uvm_oneway_hash 
                = __Vfunc_uvm_oneway_hash__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 176)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__4__type_id) 
                = __Vfunc_uvm_create_random_seed__4____VlefCall_2__uvm_oneway_hash;
            ++(vlSymsp->__Vcoverage[325]);
        }
        if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 178)
            ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__4__type_id)) {
            ++(vlSymsp->__Vcoverage[328]);
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 179)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__4__type_id) = 0U;
            ++(vlSymsp->__Vcoverage[327]);
        }
        __Vfunc_uvm_create_random_seed__4____VlefExpr_3 
            = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
               ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__4__type_id) 
               + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
               ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__4__type_id));
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__4__type_id) 
            = __Vfunc_uvm_create_random_seed__4____VlefExpr_3;
        __Vfunc_uvm_create_random_seed__4____VlefExpr_4 
            = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
               ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__4__type_id));
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__4__type_id) 
            = __Vfunc_uvm_create_random_seed__4____VlefExpr_4;
        __VlefCall_3__uvm_create_random_seed = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_misc.svh", 188)
            ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__4__type_id);
        ++(vlSymsp->__Vcoverage[329]);
        this->__VnoInFunc_srandom(vlSymsp, __VlefCall_3__uvm_create_random_seed);
        ++(vlSymsp->__Vcoverage[774]);
    } else {
        ++(vlSymsp->__Vcoverage[775]);
    }
    ++(vlSymsp->__Vcoverage[776]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id\n"); );
    // Body
    get_inst_id__Vfuncrtn = this->__PVT__m_inst_id;
    ++(vlSymsp->__Vcoverage[778]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
        VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 906)->__VnoInFunc_get_factory(vlSymsp, factory);
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        if (("<unknown>"s == __VlefCall_0__get_type_name)) {
            get_object_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[780]);
        }
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 908)->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), get_object_type__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[781]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_leaf_name;
    ++(vlSymsp->__Vcoverage[783]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name\n"); );
    // Body
    get_full_name__Vfuncrtn = ""s;
    this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[784]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name\n"); );
    // Body
    this->__PVT__m_leaf_name = name;
    ++(vlSymsp->__Vcoverage[785]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_print\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_file;
    std::string __VlefCall_0__sprint;
    if ((VlNull{} == printer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, printer);
        ++(vlSymsp->__Vcoverage[786]);
    } else {
        ++(vlSymsp->__Vcoverage[787]);
    }
    this->__VnoInFunc_sprint(vlProcess, vlSymsp, printer, __VlefCall_0__sprint);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 949)->__VnoInFunc_get_file(vlSymsp, __VlefCall_1__get_file);
    VL_FWRITEF_NX(__VlefCall_1__get_file,"%@",0,-1,
                  &(__VlefCall_0__sprint));
    ++(vlSymsp->__Vcoverage[788]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer, std::string &sprint__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint\n"); );
    // Body
    std::string __VlefCall_2__get_full_name;
    CData/*0:0*/ __VlefCall_1__get_root_enabled;
    IData/*31:0*/ __VlefCall_0__get_active_object_depth;
    std::string name;
    sprint__Vfuncrtn = ""s;
    name = ""s;
    if ((VlNull{} == printer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, printer);
        ++(vlSymsp->__Vcoverage[789]);
    } else {
        ++(vlSymsp->__Vcoverage[790]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 960)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_0__get_active_object_depth);
    if ((0U == __VlefCall_0__get_active_object_depth)) {
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 961)->__VnoInFunc_flush(vlProcess, vlSymsp);
        VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 962)->__VnoInFunc_get_root_enabled(vlSymsp, __VlefCall_1__get_root_enabled);
        if (__VlefCall_1__get_root_enabled) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        } else {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_full_name);
        }
        name = __VlefCall_2__get_full_name;
        ++(vlSymsp->__Vcoverage[791]);
    } else {
        this->__VnoInFunc_get_name(vlSymsp, name);
        ++(vlSymsp->__Vcoverage[792]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 968)->__VnoInFunc_print_object(vlProcess, vlSymsp, name, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>{this}, 0x2eU);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 970)->__VnoInFunc_emit(vlProcess, vlSymsp, sprint__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[793]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = ""s;
    ++(vlSymsp->__Vcoverage[794]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> unnamedblk12__DOT__op;
    if ((VlNull{} != rsrc)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, unnamedblk12__DOT__op);
        VL_NULL_CHECK(unnamedblk12__DOT__op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1098)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000800U, VlNull{}, rsrc);
        this->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, unnamedblk12__DOT__op);
        VL_NULL_CHECK(unnamedblk12__DOT__op, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1100)->__VnoInFunc_m_recycle(vlSymsp);
        ++(vlSymsp->__Vcoverage[796]);
    }
    ++(vlSymsp->__Vcoverage[797]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unsupported_set_local(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unsupported_set_local\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[798]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__38__verbosity;
    __Vtask_uvm_report_warning__38__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__38__line;
    __Vtask_uvm_report_warning__38__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__38__report_enabled_checked;
    __Vtask_uvm_report_warning__38__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    // Body
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> tmp;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_create(vlProcess, vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), tmp);
    if ((VlNull{} == tmp)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        __Vtask_uvm_report_warning__38__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__38__context_name = ""s;
        __Vtask_uvm_report_warning__38__line = 0U;
        this->__Vtask_uvm_report_warning__38__filename = ""s;
        __Vtask_uvm_report_warning__38__verbosity = 0U;
        this->__Vtask_uvm_report_warning__38__message 
            = VL_SFORMATF_N_NX("The create method failed for %@,  object cannot be cloned",0,
                               -1,&(__VlefCall_1__get_name)) ;
        this->__Vtask_uvm_report_warning__38__id = "CRFLD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__39__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__40__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__38__id, this->__Vtask_uvm_report_warning__38__message, __Vtask_uvm_report_warning__38__verbosity, this->__Vtask_uvm_report_warning__38__filename, __Vtask_uvm_report_warning__38__line, this->__Vtask_uvm_report_warning__38__context_name, (IData)(__Vtask_uvm_report_warning__38__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[799]);
    } else {
        VL_NULL_CHECK(tmp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1125)->__VnoInFunc_copy(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>{this}, VlNull{});
        ++(vlSymsp->__Vcoverage[800]);
    }
    clone__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[801]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_copier> copier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__verbosity;
    __Vfunc_uvm_report_enabled__43__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__43__severity;
    __Vfunc_uvm_report_enabled__43__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__47__verbosity;
    __Vtask_uvm_report_error__47__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__47__line;
    __Vtask_uvm_report_error__47__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__47__report_enabled_checked;
    __Vtask_uvm_report_error__47__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_1__get_active_object_depth;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_copier> m_copier;
    {
        if ((VlNull{} == rhs)) {
            this->__Vfunc_uvm_report_enabled__43__id = "OBJ/COPY"s;
            __Vfunc_uvm_report_enabled__43__severity = 2U;
            __Vfunc_uvm_report_enabled__43__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__44__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__45__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__43__verbosity, (IData)(__Vfunc_uvm_report_enabled__43__severity), this->__Vfunc_uvm_report_enabled__43__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__47__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__47__context_name = ""s;
                __Vtask_uvm_report_error__47__line = 0x00000472U;
                this->__Vtask_uvm_report_error__47__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh"s;
                __Vtask_uvm_report_error__47__verbosity = 0U;
                this->__Vtask_uvm_report_error__47__message = "Passing a null object to be copied"s;
                this->__Vtask_uvm_report_error__47__id = "OBJ/COPY"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__48__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__49__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__47__id, this->__Vtask_uvm_report_error__47__message, __Vtask_uvm_report_error__47__verbosity, this->__Vtask_uvm_report_error__47__filename, __Vtask_uvm_report_error__47__line, this->__Vtask_uvm_report_error__47__context_name, (IData)(__Vtask_uvm_report_error__47__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[802]);
            } else {
                ++(vlSymsp->__Vcoverage[803]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[805]);
        }
        if ((VlNull{} == copier)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, coreservice);
            VL_NULL_CHECK(coreservice, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1144)->__VnoInFunc_get_default_copier(vlProcess, vlSymsp, m_copier);
            ++(vlSymsp->__Vcoverage[806]);
        } else {
            m_copier = copier;
            ++(vlSymsp->__Vcoverage[807]);
        }
        VL_NULL_CHECK(m_copier, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1149)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_1__get_active_object_depth);
        if ((0U == __VlefCall_1__get_active_object_depth)) {
            VL_NULL_CHECK(m_copier, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1150)->__VnoInFunc_flush(vlProcess, vlSymsp);
            ++(vlSymsp->__Vcoverage[808]);
        } else {
            ++(vlSymsp->__Vcoverage[809]);
        }
        VL_NULL_CHECK(m_copier, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1152)->__VnoInFunc_copy_object(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>{this}, rhs);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[810]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[811]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_compare\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__get_active_object_depth;
    compare__Vfuncrtn = 0U;
    if ((VlNull{} == comparer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_comparer__Vclpkg.__VnoInFunc_get_default(vlSymsp, comparer);
        ++(vlSymsp->__Vcoverage[812]);
    } else {
        ++(vlSymsp->__Vcoverage[813]);
    }
    VL_NULL_CHECK(comparer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1170)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_0__get_active_object_depth);
    if ((0U == __VlefCall_0__get_active_object_depth)) {
        VL_NULL_CHECK(comparer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1171)->__VnoInFunc_flush(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[814]);
    } else {
        ++(vlSymsp->__Vcoverage[815]);
    }
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    VL_NULL_CHECK(comparer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1172)->__VnoInFunc_compare_object(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>{this}, rhs, compare__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[816]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 1U;
    ++(vlSymsp->__Vcoverage[817]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*27:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[818]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[819]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> &packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_pack\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__get_active_object_depth;
    if ((VlNull{} == packer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_packer__Vclpkg.__VnoInFunc_get_default(vlSymsp, packer);
        ++(vlSymsp->__Vcoverage[820]);
    } else {
        ++(vlSymsp->__Vcoverage[821]);
    }
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1211)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_0__get_active_object_depth);
    if ((0U == __VlefCall_0__get_active_object_depth)) {
        VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1212)->__VnoInFunc_flush(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[822]);
    } else {
        ++(vlSymsp->__Vcoverage[823]);
    }
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1213)->__VnoInFunc_pack_object(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>{this});
    ++(vlSymsp->__Vcoverage[824]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__65__packer;
    // Body
    pack__Vfuncrtn = 0U;
    __Vtask_m_pack__65__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__65__packer);
    packer = __Vtask_m_pack__65__packer;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1224)->__VnoInFunc_get_packed_bits(vlSymsp, bitstream);
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1225)->__VnoInFunc_get_packed_size(vlSymsp, pack__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[825]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_bytes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_bytes\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__68__packer;
    // Body
    pack_bytes__Vfuncrtn = 0U;
    __Vtask_m_pack__68__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__68__packer);
    packer = __Vtask_m_pack__68__packer;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1234)->__VnoInFunc_get_packed_bytes(vlSymsp, bytestream);
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1235)->__VnoInFunc_get_packed_size(vlSymsp, pack_bytes__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[826]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_ints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_ints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_ints\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__71__packer;
    // Body
    pack_ints__Vfuncrtn = 0U;
    __Vtask_m_pack__71__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__71__packer);
    packer = __Vtask_m_pack__71__packer;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1245)->__VnoInFunc_get_packed_ints(vlSymsp, intstream);
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1246)->__VnoInFunc_get_packed_size(vlSymsp, pack_ints__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[827]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_longints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &longintstream, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_longints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_longints\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__74__packer;
    // Body
    pack_longints__Vfuncrtn = 0U;
    __Vtask_m_pack__74__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__74__packer);
    packer = __Vtask_m_pack__74__packer;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1255)->__VnoInFunc_get_packed_longints(vlSymsp, longintstream);
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1256)->__VnoInFunc_get_packed_size(vlSymsp, pack_longints__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[828]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__77__verbosity;
    __Vfunc_uvm_report_enabled__77__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__77__severity;
    __Vfunc_uvm_report_enabled__77__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__78__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__79__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__81__verbosity;
    __Vtask_uvm_report_error__81__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__81__line;
    __Vtask_uvm_report_error__81__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__81__report_enabled_checked;
    __Vtask_uvm_report_error__81__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__82__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__83__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((VlNull{} == packer)) {
        this->__Vfunc_uvm_report_enabled__77__id = "UVM/OBJ/PACK/NULL"s;
        __Vfunc_uvm_report_enabled__77__severity = 2U;
        __Vfunc_uvm_report_enabled__77__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__78__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__78__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__79__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__79__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__77__verbosity, (IData)(__Vfunc_uvm_report_enabled__77__severity), this->__Vfunc_uvm_report_enabled__77__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__81__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__81__context_name = ""s;
            __Vtask_uvm_report_error__81__line = 0x000004f1U;
            this->__Vtask_uvm_report_error__81__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh"s;
            __Vtask_uvm_report_error__81__verbosity = 0U;
            this->__Vtask_uvm_report_error__81__message = "uvm_object::do_pack called with null packer!"s;
            this->__Vtask_uvm_report_error__81__id = "UVM/OBJ/PACK/NULL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__82__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__82__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__83__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__83__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__81__id, this->__Vtask_uvm_report_error__81__message, __Vtask_uvm_report_error__81__verbosity, this->__Vtask_uvm_report_error__81__filename, __Vtask_uvm_report_error__81__line, this->__Vtask_uvm_report_error__81__context_name, (IData)(__Vtask_uvm_report_error__81__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[829]);
        } else {
            ++(vlSymsp->__Vcoverage[830]);
        }
        ++(vlSymsp->__Vcoverage[831]);
    } else {
        ++(vlSymsp->__Vcoverage[832]);
    }
    ++(vlSymsp->__Vcoverage[833]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_pre(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> &packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_pre\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__get_active_object_depth;
    if ((VlNull{} == packer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_packer__Vclpkg.__VnoInFunc_get_default(vlSymsp, packer);
        ++(vlSymsp->__Vcoverage[834]);
    } else {
        ++(vlSymsp->__Vcoverage[835]);
    }
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1276)->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_0__get_active_object_depth);
    if ((0U == __VlefCall_0__get_active_object_depth)) {
        VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1277)->__VnoInFunc_flush(vlProcess, vlSymsp);
        ++(vlSymsp->__Vcoverage[836]);
    } else {
        ++(vlSymsp->__Vcoverage[837]);
    }
    ++(vlSymsp->__Vcoverage[838]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_post(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &m_unpack_post__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_post\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_packed_size;
    IData/*31:0*/ size_before_unpack;
    m_unpack_post__Vfuncrtn = 0U;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1286)->__VnoInFunc_get_packed_size(vlSymsp, size_before_unpack);
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1287)->__VnoInFunc_unpack_object(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>{this});
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1288)->__VnoInFunc_get_packed_size(vlSymsp, __VlefCall_0__get_packed_size);
    m_unpack_post__Vfuncrtn = (size_before_unpack - __VlefCall_0__get_packed_size);
    ++(vlSymsp->__Vcoverage[839]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__91__packer;
    // Body
    unpack__Vfuncrtn = 0U;
    __Vtask_m_unpack_pre__91__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__91__packer);
    packer = __Vtask_m_unpack_pre__91__packer;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1298)->__VnoInFunc_set_packed_bits(vlSymsp, bitstream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer, unpack__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[840]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_bytes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_bytes\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__94__packer;
    // Body
    unpack_bytes__Vfuncrtn = 0U;
    __Vtask_m_unpack_pre__94__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__94__packer);
    packer = __Vtask_m_unpack_pre__94__packer;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1309)->__VnoInFunc_set_packed_bytes(vlSymsp, bytestream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer, unpack_bytes__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[841]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_ints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_ints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_ints\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__97__packer;
    // Body
    unpack_ints__Vfuncrtn = 0U;
    __Vtask_m_unpack_pre__97__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__97__packer);
    packer = __Vtask_m_unpack_pre__97__packer;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1320)->__VnoInFunc_set_packed_ints(vlSymsp, intstream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer, unpack_ints__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[842]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_longints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &longintstream, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_longints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_longints\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__100__packer;
    // Body
    unpack_longints__Vfuncrtn = 0U;
    __Vtask_m_unpack_pre__100__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__100__packer);
    packer = __Vtask_m_unpack_pre__100__packer;
    VL_NULL_CHECK(packer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1330)->__VnoInFunc_set_packed_longints(vlSymsp, longintstream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer, unpack_longints__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[843]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[844]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
    __Vfunc_uvm_report_enabled__103__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
    __Vfunc_uvm_report_enabled__103__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__107__verbosity;
    __Vtask_uvm_report_error__107__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__107__line;
    __Vtask_uvm_report_error__107__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__107__report_enabled_checked;
    __Vtask_uvm_report_error__107__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((VlNull{} == packer)) {
        this->__Vfunc_uvm_report_enabled__103__id = "UVM/OBJ/UNPACK/NULL"s;
        __Vfunc_uvm_report_enabled__103__severity = 2U;
        __Vfunc_uvm_report_enabled__103__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__104__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__104__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__105__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), this->__Vfunc_uvm_report_enabled__103__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__107__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__107__context_name = ""s;
            __Vtask_uvm_report_error__107__line = 0x00000541U;
            this->__Vtask_uvm_report_error__107__filename = "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh"s;
            __Vtask_uvm_report_error__107__verbosity = 0U;
            this->__Vtask_uvm_report_error__107__message = "uvm_object::do_unpack called with null packer!"s;
            this->__Vtask_uvm_report_error__107__id = "UVM/OBJ/UNPACK/NULL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__108__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__108__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__109__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__107__id, this->__Vtask_uvm_report_error__107__message, __Vtask_uvm_report_error__107__verbosity, this->__Vtask_uvm_report_error__107__filename, __Vtask_uvm_report_error__107__line, this->__Vtask_uvm_report_error__107__context_name, (IData)(__Vtask_uvm_report_error__107__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[845]);
        } else {
            ++(vlSymsp->__Vcoverage[846]);
        }
        ++(vlSymsp->__Vcoverage[847]);
    } else {
        ++(vlSymsp->__Vcoverage[848]);
    }
    ++(vlSymsp->__Vcoverage[849]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_record(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_record\n"); );
    // Body
    std::string __VlefCall_0__get_name;
    {
        if ((VlNull{} == recorder)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[851]);
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        VL_NULL_CHECK(recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_object.svh", 1358)->__VnoInFunc_record_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>{this});
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[852]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[853]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_get_report_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_get_report_object\n"); );
    // Body
    m_get_report_object__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[854]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_object::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_inst_id = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_object::~Vtb_rng_uvm_pkg__03a__03auvm_object() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_leaf_name:" + VL_TO_STRING(__PVT__m_leaf_name);
    out += ", m_inst_id:" + VL_TO_STRING(__PVT__m_inst_id);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_void::to_string_middle();
    return (out);
}
