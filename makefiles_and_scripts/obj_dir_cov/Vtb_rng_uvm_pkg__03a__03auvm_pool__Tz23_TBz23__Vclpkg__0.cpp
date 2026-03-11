// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz76> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz76__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[1480]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_pool"s;
    ++(vlSymsp->__Vcoverage[1485]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg::__VnoInFunc_get_global_pool(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> &get_global_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg::__VnoInFunc_get_global_pool\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_global_pool)) {
        this->__PVT__m_global_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, "pool"s);
        ++(vlSymsp->__Vcoverage[1488]);
    } else {
        ++(vlSymsp->__Vcoverage[1489]);
    }
    get_global_pool__Vfuncrtn = this->__PVT__m_global_pool;
    ++(vlSymsp->__Vcoverage[1490]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg::__VnoInFunc_get_global(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ key, CData/*1:0*/ &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23__Vclpkg::__VnoInFunc_get_global\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> gpool;
    get_global__Vfuncrtn = 0U;
    this->__VnoInFunc_get_global_pool(vlSymsp, gpool);
    VL_NULL_CHECK(gpool, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 80)->__VnoInFunc_get(vlSymsp, key, get_global__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[1491]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz76> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz76__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[1481]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[1482]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[1483]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[1484]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_pool"s;
    ++(vlSymsp->__Vcoverage[1486]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[1487]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ key, CData/*1:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_get\n"); );
    // Body
    if (this->__PVT__pool.exists(key)) {
        ++(vlSymsp->__Vcoverage[1493]);
    } else {
        this->__PVT__pool.at((IData)(key)) = 0U;
        ++(vlSymsp->__Vcoverage[1492]);
    }
    get__Vfuncrtn = this->__PVT__pool.at((IData)(key));
    if ((! this->__PVT__pool.exists(key))) {
        ++(vlSymsp->__Vcoverage[1494]);
    }
    if (this->__PVT__pool.exists(key)) {
        ++(vlSymsp->__Vcoverage[1495]);
    }
    ++(vlSymsp->__Vcoverage[1496]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_add(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ key, CData/*1:0*/ item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_add\n"); );
    // Body
    this->__PVT__pool.at((IData)(key)) = item;
    ++(vlSymsp->__Vcoverage[1497]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_num(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__pool.size();
    ++(vlSymsp->__Vcoverage[1498]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_delete(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__5__verbosity;
    __Vtask_uvm_report_warning__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__5__line;
    __Vtask_uvm_report_warning__5__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__5__report_enabled_checked;
    __Vtask_uvm_report_warning__5__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__exists;
    {
        this->__VnoInFunc_exists(vlSymsp, key, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            ++(vlSymsp->__Vcoverage[1500]);
        } else {
            __Vtask_uvm_report_warning__5__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__5__context_name = ""s;
            __Vtask_uvm_report_warning__5__line = 0U;
            this->__Vtask_uvm_report_warning__5__filename = ""s;
            __Vtask_uvm_report_warning__5__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__5__message = "delete: pool key doesn't exist. Ignoring delete request"s;
            this->__Vtask_uvm_report_warning__5__id = "POOLDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__5__id, this->__Vtask_uvm_report_warning__5__message, __Vtask_uvm_report_warning__5__verbosity, this->__Vtask_uvm_report_warning__5__filename, __Vtask_uvm_report_warning__5__line, this->__Vtask_uvm_report_warning__5__context_name, (IData)(__Vtask_uvm_report_warning__5__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            goto __Vlabel0;
        }
        this->__PVT__pool.erase(key);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1501]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_exists(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ key, IData/*31:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_exists\n"); );
    // Body
    exists__Vfuncrtn = this->__PVT__pool.exists(key);
    ++(vlSymsp->__Vcoverage[1502]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_first(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ &key, IData/*31:0*/ &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_first\n"); );
    // Body
    first__Vfuncrtn = 0U;
    first__Vfuncrtn = this->__PVT__pool.first(key);
    ++(vlSymsp->__Vcoverage[1503]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_last(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ &key, IData/*31:0*/ &last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_last\n"); );
    // Body
    last__Vfuncrtn = 0U;
    last__Vfuncrtn = this->__PVT__pool.last(key);
    ++(vlSymsp->__Vcoverage[1504]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_next(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ &key, IData/*31:0*/ &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_next\n"); );
    // Body
    next__Vfuncrtn = 0U;
    next__Vfuncrtn = this->__PVT__pool.next(key);
    ++(vlSymsp->__Vcoverage[1505]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_prev(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ &key, IData/*31:0*/ &prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_prev\n"); );
    // Body
    prev__Vfuncrtn = 0U;
    prev__Vfuncrtn = this->__PVT__pool.prev(key);
    ++(vlSymsp->__Vcoverage[1506]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_do_copy\n"); );
    // Body
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> p;
    {
        Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefLogOr_1 = (VlNull{} == rhs);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, p);
            __VlefLogOr_1 = (! __VlefExpr_0);
        }
        if (__VlefLogOr_1) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[1508]);
        }
        this->__PVT__pool = VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 215)
            ->__PVT__pool;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[1509]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_do_print\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string v;
    IData/*31:0*/ cnt;
    std::string item;
    CData/*1:0*/ key;
    v = ""s;
    cnt = 0U;
    item = ""s;
    key = 0U;
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 223)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "pool"s, this->__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    __VlefExpr_0 = (0U != this->__PVT__pool.first(key));
    if (__VlefExpr_0) {
        while (true) {
            item = VL_SFORMATF_N_NX("%0d",0,32,cnt) ;
            item = VL_CONCATN_NNN(VL_CONCATN_NNN("[-key"s, item), "--]"s);
            VL_SFORMAT_NX(64,v,"%1#",0,2,this->__PVT__pool
                          .at((IData)(key)));
            VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 229)->__VnoInFunc_print_generic(vlProcess, vlSymsp, item, ""s, 0xffffffffU, v, 0x5bU);
            ++(vlSymsp->__Vcoverage[1510]);
            __VlefExpr_1 = (0U != this->__PVT__pool.next(key));
            if (!(__VlefExpr_1)) break;
            ++(vlSymsp->__Vcoverage[1511]);
        }
        ++(vlSymsp->__Vcoverage[1512]);
    } else {
        ++(vlSymsp->__Vcoverage[1513]);
    }
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_pool.svh", 232)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    ++(vlSymsp->__Vcoverage[1514]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pool.atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::~Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz23_TBz23::to_string_middle\n"); );
    // Body
    std::string out;
    out += "pool:" + VL_TO_STRING(__PVT__pool);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
