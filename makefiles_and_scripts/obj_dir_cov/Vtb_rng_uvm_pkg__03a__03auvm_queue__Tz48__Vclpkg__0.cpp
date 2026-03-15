// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz69> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz69__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[9463]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_queue"s;
    ++(vlSymsp->__Vcoverage[9468]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg::__VnoInFunc_get_global_queue(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> &get_global_queue__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg::__VnoInFunc_get_global_queue\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_global_queue)) {
        this->__PVT__m_global_queue = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, "global_queue"s);
        ++(vlSymsp->__Vcoverage[9471]);
    } else {
        ++(vlSymsp->__Vcoverage[9472]);
    }
    get_global_queue__Vfuncrtn = this->__PVT__m_global_queue;
    ++(vlSymsp->__Vcoverage[9473]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg::__VnoInFunc_get_global(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48__Vclpkg::__VnoInFunc_get_global\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> gqueue;
    this->__VnoInFunc_get_global_queue(vlSymsp, gqueue);
    VL_NULL_CHECK(gqueue, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 82)->__VnoInFunc_get(vlProcess, vlSymsp, index, get_global__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[9474]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz69> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz69__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[9464]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[9465]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[9466]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[9467]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_queue"s;
    ++(vlSymsp->__Vcoverage[9469]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[9470]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_get\n"); );
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
    IData/*31:0*/ __VlefCall_3__size;
    IData/*31:0*/ __VlefCall_2__size;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> default_value;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             || VL_GTS_III(32, 0U, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__6__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__6__context_name = ""s;
            __Vtask_uvm_report_warning__6__line = 0U;
            this->__Vtask_uvm_report_warning__6__filename = ""s;
            __Vtask_uvm_report_warning__6__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__6__message 
                = VL_SFORMATF_N_NX("get: given index out of range for queue of size %0d. Ignoring get request",0,
                                   32,__VlefCall_1__size) ;
            this->__Vtask_uvm_report_warning__6__id = "QUEUEGET"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__6__id, this->__Vtask_uvm_report_warning__6__message, __Vtask_uvm_report_warning__6__verbosity, this->__Vtask_uvm_report_warning__6__filename, __Vtask_uvm_report_warning__6__line, this->__Vtask_uvm_report_warning__6__context_name, (IData)(__Vtask_uvm_report_warning__6__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[436]);
            get__Vfuncrtn = default_value;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9476]);
        }
        get__Vfuncrtn = this->__PVT__queue.at(index);
        __Vlabel0: ;
    }
    if (VL_GTS_III(32, 0U, index)) {
        ++(vlSymsp->__Vcoverage[9477]);
    }
    this->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
    if (VL_GTES_III(32, index, __VlefCall_2__size)) {
        ++(vlSymsp->__Vcoverage[9478]);
    }
    this->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
    if ((VL_LTS_III(32, index, __VlefCall_3__size) 
         && VL_LTES_III(32, 0U, index))) {
        ++(vlSymsp->__Vcoverage[9479]);
    }
    ++(vlSymsp->__Vcoverage[9480]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__queue.size();
    ++(vlSymsp->__Vcoverage[9481]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_insert(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_insert\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__14__verbosity;
    __Vtask_uvm_report_warning__14__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__14__line;
    __Vtask_uvm_report_warning__14__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__14__report_enabled_checked;
    __Vtask_uvm_report_warning__14__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_3__size;
    IData/*31:0*/ __VlefCall_2__size;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             || VL_GTS_III(32, 0U, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__14__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__14__context_name = ""s;
            __Vtask_uvm_report_warning__14__line = 0U;
            this->__Vtask_uvm_report_warning__14__filename = ""s;
            __Vtask_uvm_report_warning__14__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__14__message 
                = VL_SFORMATF_N_NX("insert: given index out of range for queue of size %0d. Ignoring insert request",0,
                                   32,__VlefCall_1__size) ;
            this->__Vtask_uvm_report_warning__14__id = "QUEUEINS"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__14__id, this->__Vtask_uvm_report_warning__14__message, __Vtask_uvm_report_warning__14__verbosity, this->__Vtask_uvm_report_warning__14__filename, __Vtask_uvm_report_warning__14__line, this->__Vtask_uvm_report_warning__14__context_name, (IData)(__Vtask_uvm_report_warning__14__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[436]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9483]);
        }
        this->__PVT__queue.insert(index, item);
        __Vlabel0: ;
    }
    if (VL_GTS_III(32, 0U, index)) {
        ++(vlSymsp->__Vcoverage[9484]);
    }
    this->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
    if (VL_GTES_III(32, index, __VlefCall_2__size)) {
        ++(vlSymsp->__Vcoverage[9485]);
    }
    this->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
    if ((VL_LTS_III(32, index, __VlefCall_3__size) 
         && VL_LTES_III(32, 0U, index))) {
        ++(vlSymsp->__Vcoverage[9486]);
    }
    ++(vlSymsp->__Vcoverage[9487]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_delete(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__22__verbosity;
    __Vtask_uvm_report_warning__22__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__22__line;
    __Vtask_uvm_report_warning__22__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__22__report_enabled_checked;
    __Vtask_uvm_report_warning__22__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_3__size;
    IData/*31:0*/ __VlefCall_2__size;
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             || VL_GTS_III(32, 0xffffffffU, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__22__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__22__context_name = ""s;
            __Vtask_uvm_report_warning__22__line = 0U;
            this->__Vtask_uvm_report_warning__22__filename = ""s;
            __Vtask_uvm_report_warning__22__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__22__message 
                = VL_SFORMATF_N_NX("delete: given index out of range for queue of size %0d. Ignoring delete request",0,
                                   32,__VlefCall_1__size) ;
            this->__Vtask_uvm_report_warning__22__id = "QUEUEDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__22__id, this->__Vtask_uvm_report_warning__22__message, __Vtask_uvm_report_warning__22__verbosity, this->__Vtask_uvm_report_warning__22__filename, __Vtask_uvm_report_warning__22__line, this->__Vtask_uvm_report_warning__22__context_name, (IData)(__Vtask_uvm_report_warning__22__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[436]);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[9489]);
        }
        if ((0xffffffffU == index)) {
            this->__PVT__queue.clear();
            ++(vlSymsp->__Vcoverage[9493]);
        } else {
            this->__PVT__queue.erase(index);
            ++(vlSymsp->__Vcoverage[9494]);
        }
        __Vlabel0: ;
    }
    if (VL_GTS_III(32, 0xffffffffU, index)) {
        ++(vlSymsp->__Vcoverage[9490]);
    }
    this->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
    if (VL_GTES_III(32, index, __VlefCall_2__size)) {
        ++(vlSymsp->__Vcoverage[9491]);
    }
    this->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
    if ((VL_LTS_III(32, index, __VlefCall_3__size) 
         && VL_LTES_III(32, 0xffffffffU, index))) {
        ++(vlSymsp->__Vcoverage[9492]);
    }
    ++(vlSymsp->__Vcoverage[9495]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_pop_front(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> &pop_front__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_pop_front\n"); );
    // Body
    pop_front__Vfuncrtn = this->__PVT__queue.pop_front();
    ++(vlSymsp->__Vcoverage[9496]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_pop_back(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> &pop_back__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_pop_back\n"); );
    // Body
    pop_back__Vfuncrtn = this->__PVT__queue.pop_back();
    ++(vlSymsp->__Vcoverage[9497]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_push_front(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_push_front\n"); );
    // Body
    this->__PVT__queue.push_front(item);
    ++(vlSymsp->__Vcoverage[9498]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_push_back(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_push_back\n"); );
    // Body
    this->__PVT__queue.push_back(item);
    ++(vlSymsp->__Vcoverage[9499]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_wait_until_not_empty(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_wait_until_not_empty\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hfcd4e360__0;
    __Vtrigprevexpr_hfcd4e360__0 = 0;
    // Body
    VL_KEEP_THIS;
    if (VL_GTES_III(32, 0U, this->__PVT__queue.size())) {
        CData/*0:0*/ __VdynTrigger_h071ab204__0;
        __VdynTrigger_h071ab204__0 = 0;
        __VdynTrigger_h071ab204__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h071ab204__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < uvm_pkg::uvm_queue__Tz48.queue.size()))", 
                                                         "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 
                                                         196);
            __Vtrigprevexpr_hfcd4e360__0 = VL_LTS_III(32, 0U, this->__PVT__queue.size());
            __VdynTrigger_h071ab204__0 = __Vtrigprevexpr_hfcd4e360__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h071ab204__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < uvm_pkg::uvm_queue__Tz48.queue.size()))", 
                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 
                                                     196);
    }
    ++(vlSymsp->__Vcoverage[9500]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_do_copy\n"); );
    // Body
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> p;
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
            ++(vlSymsp->__Vcoverage[9502]);
        }
        this->__PVT__queue = VL_NULL_CHECK(p, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_queue.svh", 204)
            ->__PVT__queue;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[9503]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__queue);
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("%@",0,
                                                -1,
                                                &(__Vtemp_1)) ;
    ++(vlSymsp->__Vcoverage[9504]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::~Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48::to_string_middle\n"); );
    // Body
    std::string out;
    out += "queue:" + VL_TO_STRING(__PVT__queue);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
