// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz206> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz206__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[1319]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_obj_str_pool"s;
    ++(vlSymsp->__Vcoverage[1324]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191__Vclpkg::__VnoInFunc_get_global_pool(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191> &get_global_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191__Vclpkg::__VnoInFunc_get_global_pool\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_global_pool)) {
        this->__PVT__m_global_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191, vlProcess, vlSymsp, "global_pool"s);
        ++(vlSymsp->__Vcoverage[1327]);
    } else {
        ++(vlSymsp->__Vcoverage[1328]);
    }
    get_global_pool__Vfuncrtn = this->__PVT__m_global_pool;
    ++(vlSymsp->__Vcoverage[1329]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191__Vclpkg::__VnoInFunc_get_global(Vtb_rng__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_barrier> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191__Vclpkg::__VnoInFunc_get_global\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191> gpool;
    this->__VnoInFunc_get_global_pool(vlSymsp, gpool);
    VL_NULL_CHECK(gpool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 287)->__VnoInFunc_get(vlSymsp, key, get_global__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[1330]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz206> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz206__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[1320]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[1321]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[1322]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[1323]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_obj_str_pool"s;
    ++(vlSymsp->__Vcoverage[1325]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[1326]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_barrier> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_barrier> __VlefCall_0__new;
    if (Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::__PVT__pool.exists(key)) {
        ++(vlSymsp->__Vcoverage[1332]);
    } else {
        __VlefCall_0__new = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_barrier, vlProcess, vlSymsp, key, 0U);
        Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::__PVT__pool.at(key) 
            = __VlefCall_0__new;
        ++(vlSymsp->__Vcoverage[1331]);
    }
    get__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::__PVT__pool
        .at(key);
    ++(vlSymsp->__Vcoverage[1333]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_delete(Vtb_rng__Syms* __restrict vlSymsp, std::string key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__6__verbosity;
    __Vtask_uvm_report_warning__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__line;
    __Vtask_uvm_report_warning__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__6__report_enabled_checked;
    __Vtask_uvm_report_warning__6__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__exists;
    {
        this->__VnoInFunc_exists(vlSymsp, key, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            ++(vlSymsp->__Vcoverage[1335]);
        } else {
            __Vtask_uvm_report_warning__6__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__6__context_name = ""s;
            __Vtask_uvm_report_warning__6__line = 0U;
            this->__Vtask_uvm_report_warning__6__filename = ""s;
            __Vtask_uvm_report_warning__6__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__6__message 
                = VL_SFORMATF_N_NX("delete: key '%@' doesn't exist",0,
                                   -1,&(key)) ;
            this->__Vtask_uvm_report_warning__6__id = "POOLDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__6__id, this->__Vtask_uvm_report_warning__6__message, __Vtask_uvm_report_warning__6__verbosity, this->__Vtask_uvm_report_warning__6__filename, __Vtask_uvm_report_warning__6__line, this->__Vtask_uvm_report_warning__6__context_name, (IData)(__Vtask_uvm_report_warning__6__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[436]);
            goto __Vlabel0;
        }
        Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::__PVT__pool.erase(key);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1336]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_do_print\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string key;
    key = ""s;
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 323)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "pool"s, Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    __VlefExpr_0 = (0U != Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::__PVT__pool.first(key));
    if (__VlefExpr_0) {
        while (true) {
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 326)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("["s, key), "]"s)), Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::__PVT__pool
                                                                                .at(key), 0x5bU);
            ++(vlSymsp->__Vcoverage[1337]);
            __VlefExpr_1 = (0U != Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::__PVT__pool.next(key));
            if (!(__VlefExpr_1)) break;
            ++(vlSymsp->__Vcoverage[1338]);
        }
        ++(vlSymsp->__Vcoverage[1339]);
    } else {
        ++(vlSymsp->__Vcoverage[1340]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 328)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    ++(vlSymsp->__Vcoverage[1341]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::~Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz191::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz2_TBz191::to_string_middle();
    return (out);
}
