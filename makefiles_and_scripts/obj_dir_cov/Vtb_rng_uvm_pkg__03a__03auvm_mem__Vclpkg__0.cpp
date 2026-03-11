// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
    ++(vlSymsp->__Vcoverage[23096]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22942]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22943]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22944]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22945]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[22946]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
    ++(vlSymsp->__Vcoverage[22947]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    this->__PVT__m_locked = 0U;
    if ((0U == n_bits)) {
        this->__Vfunc_uvm_report_enabled__2__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__2__severity = 2U;
        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__4__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__7__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__7__context_name = ""s;
            __Vtask_uvm_report_error__7__line = 0x00000219U;
            this->__Vtask_uvm_report_error__7__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_error__7__verbosity = 0U;
            this->__Vtask_uvm_report_error__7__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' cannot have 0 bits"s));
            this->__Vtask_uvm_report_error__7__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__7__id, this->__Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, this->__Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, this->__Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[22948]);
        } else {
            ++(vlSymsp->__Vcoverage[22949]);
        }
        n_bits = 1U;
        ++(vlSymsp->__Vcoverage[22950]);
    } else {
        ++(vlSymsp->__Vcoverage[22951]);
    }
    this->__PVT__m_size = size;
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_backdoor = VlNull{};
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz213, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size 
            = n_bits;
        ++(vlSymsp->__Vcoverage[22952]);
    } else {
        ++(vlSymsp->__Vcoverage[22953]);
    }
    ++(vlSymsp->__Vcoverage[22954]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__verbosity;
    __Vfunc_uvm_report_enabled__17__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__17__severity;
    __Vfunc_uvm_report_enabled__17__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__22__verbosity;
    __Vtask_uvm_report_error__22__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__22__line;
    __Vtask_uvm_report_error__22__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__22__report_enabled_checked;
    __Vtask_uvm_report_error__22__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_cfg> unnamedblk427__DOT__cfg;
    if ((VlNull{} == parent)) {
        this->__Vfunc_uvm_report_enabled__12__id = "REG/NULL_PARENT"s;
        __Vfunc_uvm_report_enabled__12__severity = 3U;
        __Vfunc_uvm_report_enabled__12__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__13__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__14__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), this->__Vfunc_uvm_report_enabled__12__id, __VlefCall_0__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/NULL_PARENT"s, "configure: parent argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x0000022fU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[22955]);
        } else {
            ++(vlSymsp->__Vcoverage[22956]);
        }
        ++(vlSymsp->__Vcoverage[22957]);
    } else {
        ++(vlSymsp->__Vcoverage[22958]);
    }
    this->__PVT__m_parent = parent;
    if ((("RW"s != this->__PVT__m_access) & ("RO"s 
                                             != this->__PVT__m_access))) {
        this->__Vfunc_uvm_report_enabled__17__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__17__severity = 2U;
        __Vfunc_uvm_report_enabled__17__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__18__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__19__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), this->__Vfunc_uvm_report_enabled__17__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_error__22__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__22__context_name = ""s;
            __Vtask_uvm_report_error__22__line = 0x00000234U;
            this->__Vtask_uvm_report_error__22__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_error__22__verbosity = 0U;
            this->__Vtask_uvm_report_error__22__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Memory '"s, __VlefCall_2__get_full_name), "' can only be RW or RO"s));
            this->__Vtask_uvm_report_error__22__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__22__id, this->__Vtask_uvm_report_error__22__message, __Vtask_uvm_report_error__22__verbosity, this->__Vtask_uvm_report_error__22__filename, __Vtask_uvm_report_error__22__line, this->__Vtask_uvm_report_error__22__context_name, (IData)(__Vtask_uvm_report_error__22__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[442]);
            ++(vlSymsp->__Vcoverage[22959]);
        } else {
            ++(vlSymsp->__Vcoverage[22960]);
        }
        this->__PVT__m_access = "RW"s;
        ++(vlSymsp->__Vcoverage[22961]);
    } else {
        ++(vlSymsp->__Vcoverage[22962]);
    }
    unnamedblk427__DOT__cfg = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_cfg, vlSymsp);
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 571)->__PVT__n_bytes 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (this->__PVT__m_n_bits 
                                                  - (IData)(1U)), 3U));
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 572)->__PVT__start_offset = 0ULL;
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 573)->__PVT__end_offset 
        = (this->__PVT__m_size - 1ULL);
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 575)->__PVT__mode = 0U;
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 576)->__PVT__locality = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    this->__PVT__mam = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_mem_mam, vlSymsp, 
                              VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), unnamedblk427__DOT__cfg, 
                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this});
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 581)->__VnoInFunc_add_mem(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this});
    if ((""s != hdl_path)) {
        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
        ++(vlSymsp->__Vcoverage[22966]);
    } else {
        ++(vlSymsp->__Vcoverage[22967]);
    }
    if ((("RW"s != this->__PVT__m_access) & ("RO"s 
                                             != this->__PVT__m_access))) {
        ++(vlSymsp->__Vcoverage[22963]);
    }
    if ((1U & (~ ("RO"s != this->__PVT__m_access)))) {
        ++(vlSymsp->__Vcoverage[22964]);
    }
    if ((1U & (~ ("RW"s != this->__PVT__m_access)))) {
        ++(vlSymsp->__Vcoverage[22965]);
    }
    ++(vlSymsp->__Vcoverage[22968]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__verbosity;
    __Vfunc_uvm_report_enabled__31__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__31__severity;
    __Vfunc_uvm_report_enabled__31__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__36__verbosity;
    __Vtask_uvm_report_error__36__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__36__line;
    __Vtask_uvm_report_error__36__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__36__report_enabled_checked;
    __Vtask_uvm_report_error__36__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
             & (VlNull{} == map))) {
            this->__Vfunc_uvm_report_enabled__31__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__31__severity = 2U;
            __Vfunc_uvm_report_enabled__31__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__32__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__33__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__31__verbosity, (IData)(__Vfunc_uvm_report_enabled__31__severity), this->__Vfunc_uvm_report_enabled__31__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__36__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__36__context_name = ""s;
                __Vtask_uvm_report_error__36__line = 0x00000255U;
                this->__Vtask_uvm_report_error__36__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__36__verbosity = 0U;
                this->__Vtask_uvm_report_error__36__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("set_offset requires a non-null map when memory '"s, __VlefCall_1__get_full_name), "' belongs to more than one map."s));
                this->__Vtask_uvm_report_error__36__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__37__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__38__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__36__id, this->__Vtask_uvm_report_error__36__message, __Vtask_uvm_report_error__36__verbosity, this->__Vtask_uvm_report_error__36__filename, __Vtask_uvm_report_error__36__line, this->__Vtask_uvm_report_error__36__context_name, (IData)(__Vtask_uvm_report_error__36__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[22969]);
            } else {
                ++(vlSymsp->__Vcoverage[22970]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22972]);
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22974]);
        }
        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 606)->__VnoInFunc_m_set_mem_offset(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this}, offset, (IData)(unmapped));
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22975]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map\n"); );
    // Body
    this->__PVT__m_maps.at(map) = 1U;
    ++(vlSymsp->__Vcoverage[22976]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    this->__PVT__m_locked = 1U;
    ++(vlSymsp->__Vcoverage[22977]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name\n"); );
    // Body
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__m_parent)) {
            this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22979]);
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 630)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22980]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__m_parent;
    ++(vlSymsp->__Vcoverage[22981]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps\n"); );
    // Body
    get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
    ++(vlSymsp->__Vcoverage[22982]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk428__DOT__map;
    CData/*0:0*/ unnamedblk428__DOT__map__Vfirst;
    unnamedblk428__DOT__map__Vfirst = 0;
    __VlefExpr_0 = (0U != this->__PVT__m_maps.first(unnamedblk428__DOT__map));
    if (__VlefExpr_0) {
        unnamedblk428__DOT__map__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk428__DOT__map__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_maps.next(unnamedblk428__DOT__map));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk428__DOT__map__Vfirst = 0U;
            maps.push_back(unnamedblk428__DOT__map);
            ++(vlSymsp->__Vcoverage[22983]);
        }
        ++(vlSymsp->__Vcoverage[22984]);
    } else {
        ++(vlSymsp->__Vcoverage[22985]);
    }
    ++(vlSymsp->__Vcoverage[22986]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk429__DOT__l;
    CData/*0:0*/ unnamedblk429__DOT__l__Vfirst;
    unnamedblk429__DOT__l__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk429__DOT__unnamedblk430__DOT__local_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk429__DOT__unnamedblk430__DOT__parent_map;
    {
        is_in_map__Vfuncrtn = 0U;
        if (this->__PVT__m_maps.exists(map)) {
            is_in_map__Vfuncrtn = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22988]);
        }
        __VlefExpr_0 = (0U != this->__PVT__m_maps.first(unnamedblk429__DOT__l));
        if (__VlefExpr_0) {
            unnamedblk429__DOT__l__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk429__DOT__l__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__m_maps.next(unnamedblk429__DOT__l));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk429__DOT__l__Vfirst = 0U;
                unnamedblk429__DOT__unnamedblk430__DOT__local_map 
                    = unnamedblk429__DOT__l;
                VL_NULL_CHECK(unnamedblk429__DOT__unnamedblk430__DOT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 664)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk429__DOT__unnamedblk430__DOT__parent_map);
                while ((VlNull{} != unnamedblk429__DOT__unnamedblk430__DOT__parent_map)) {
                    if ((unnamedblk429__DOT__unnamedblk430__DOT__parent_map 
                         == map)) {
                        is_in_map__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22990]);
                    }
                    VL_NULL_CHECK(unnamedblk429__DOT__unnamedblk430__DOT__parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 669)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk429__DOT__unnamedblk430__DOT__parent_map);
                    ++(vlSymsp->__Vcoverage[22991]);
                }
                ++(vlSymsp->__Vcoverage[22992]);
            }
            ++(vlSymsp->__Vcoverage[22993]);
        } else {
            ++(vlSymsp->__Vcoverage[22994]);
        }
        is_in_map__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[22995]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
    __Vfunc_uvm_report_enabled__50__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
    __Vfunc_uvm_report_enabled__50__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__56__verbosity;
    __Vtask_uvm_report_warning__56__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__56__line;
    __Vtask_uvm_report_warning__56__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__56__report_enabled_checked;
    __Vtask_uvm_report_warning__56__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    // Body
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk431__DOT__l;
    CData/*0:0*/ unnamedblk431__DOT__l__Vfirst;
    unnamedblk431__DOT__l__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk431__DOT__unnamedblk432__DOT__local_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk431__DOT__unnamedblk432__DOT__parent_map;
    {
        if ((VlNull{} == map)) {
            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, get_local_map__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22997]);
        }
        if (this->__PVT__m_maps.exists(map)) {
            get_local_map__Vfuncrtn = map;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[22999]);
        }
        __VlefExpr_0 = (0U != this->__PVT__m_maps.first(unnamedblk431__DOT__l));
        if (__VlefExpr_0) {
            unnamedblk431__DOT__l__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk431__DOT__l__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__m_maps.next(unnamedblk431__DOT__l));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk431__DOT__l__Vfirst = 0U;
                unnamedblk431__DOT__unnamedblk432__DOT__local_map 
                    = unnamedblk431__DOT__l;
                VL_NULL_CHECK(unnamedblk431__DOT__unnamedblk432__DOT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 685)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk431__DOT__unnamedblk432__DOT__parent_map);
                while ((VlNull{} != unnamedblk431__DOT__unnamedblk432__DOT__parent_map)) {
                    if ((unnamedblk431__DOT__unnamedblk432__DOT__parent_map 
                         == map)) {
                        get_local_map__Vfuncrtn = unnamedblk431__DOT__unnamedblk432__DOT__local_map;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[23001]);
                    }
                    VL_NULL_CHECK(unnamedblk431__DOT__unnamedblk432__DOT__parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 690)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk431__DOT__unnamedblk432__DOT__parent_map);
                    ++(vlSymsp->__Vcoverage[23002]);
                }
                ++(vlSymsp->__Vcoverage[23003]);
            }
            ++(vlSymsp->__Vcoverage[23004]);
        } else {
            ++(vlSymsp->__Vcoverage[23005]);
        }
        this->__Vfunc_uvm_report_enabled__50__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__50__severity = 1U;
        __Vfunc_uvm_report_enabled__50__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__51__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__52__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__50__verbosity, (IData)(__Vfunc_uvm_report_enabled__50__severity), this->__Vfunc_uvm_report_enabled__50__id, __VlefCall_2__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 694)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_warning__56__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__56__context_name = ""s;
            __Vtask_uvm_report_warning__56__line = 0x000002b6U;
            this->__Vtask_uvm_report_warning__56__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__56__verbosity = 0U;
            this->__Vtask_uvm_report_warning__56__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_3__get_full_name), "' is not contained within map '"s), __VlefCall_4__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__56__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__57__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__56__id, this->__Vtask_uvm_report_warning__56__message, __Vtask_uvm_report_warning__56__verbosity, this->__Vtask_uvm_report_warning__56__filename, __Vtask_uvm_report_warning__56__line, this->__Vtask_uvm_report_warning__56__context_name, (IData)(__Vtask_uvm_report_warning__56__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[23006]);
        } else {
            ++(vlSymsp->__Vcoverage[23007]);
        }
        get_local_map__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23008]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__65__verbosity;
    __Vtask_uvm_report_warning__65__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__65__line;
    __Vtask_uvm_report_warning__65__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__65__report_enabled_checked;
    __Vtask_uvm_report_warning__65__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    // Body
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__l;
    CData/*0:0*/ unnamedblk433__DOT__l__Vfirst;
    unnamedblk433__DOT__l__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk433__DOT__unnamedblk434__DOT__blk;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__default_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__local_map;
    {
        if ((0U == this->__PVT__m_maps.size())) {
            this->__Vfunc_uvm_report_enabled__60__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__60__severity = 1U;
            __Vfunc_uvm_report_enabled__60__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__61__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__62__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), this->__Vfunc_uvm_report_enabled__60__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__65__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__65__context_name = ""s;
                __Vtask_uvm_report_warning__65__line = 0x000002c2U;
                this->__Vtask_uvm_report_warning__65__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__65__verbosity = 0U;
                this->__Vtask_uvm_report_warning__65__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' is not registered with any map"s));
                this->__Vtask_uvm_report_warning__65__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__66__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__67__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__65__id, this->__Vtask_uvm_report_warning__65__message, __Vtask_uvm_report_warning__65__verbosity, this->__Vtask_uvm_report_warning__65__filename, __Vtask_uvm_report_warning__65__line, this->__Vtask_uvm_report_warning__65__context_name, (IData)(__Vtask_uvm_report_warning__65__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[23009]);
            } else {
                ++(vlSymsp->__Vcoverage[23010]);
            }
            get_default_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23012]);
        }
        if ((1U == this->__PVT__m_maps.size())) {
            std::ignore = this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
            ++(vlSymsp->__Vcoverage[23013]);
        } else {
            ++(vlSymsp->__Vcoverage[23014]);
        }
        __VlefExpr_2 = (0U != this->__PVT__m_maps.first(unnamedblk433__DOT__l));
        if (__VlefExpr_2) {
            unnamedblk433__DOT__l__Vfirst = 1U;
            while (true) {
                __VlefExpr_3 = unnamedblk433__DOT__l__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_3)))) {
                    __VlefExpr_3 = (0U != this->__PVT__m_maps.next(unnamedblk433__DOT__l));
                }
                if (!(__VlefExpr_3)) break;
                unnamedblk433__DOT__l__Vfirst = 0U;
                unnamedblk433__DOT__unnamedblk434__DOT__map 
                    = unnamedblk433__DOT__l;
                VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 718)->__VnoInFunc_get_parent(vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__blk);
                VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 719)->__VnoInFunc_get_default_map(vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__default_map);
                if ((VlNull{} != unnamedblk433__DOT__unnamedblk434__DOT__default_map)) {
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__default_map, unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__local_map);
                    if ((VlNull{} != unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__local_map)) {
                        get_default_map__Vfuncrtn = unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__local_map;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[23016]);
                    }
                    ++(vlSymsp->__Vcoverage[23017]);
                } else {
                    ++(vlSymsp->__Vcoverage[23018]);
                }
                ++(vlSymsp->__Vcoverage[23019]);
            }
            ++(vlSymsp->__Vcoverage[23020]);
        } else {
            ++(vlSymsp->__Vcoverage[23021]);
        }
        std::ignore = this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23022]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__verbosity;
    __Vfunc_uvm_report_enabled__75__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__75__severity;
    __Vfunc_uvm_report_enabled__75__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__81__verbosity;
    __Vtask_uvm_report_error__81__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__81__line;
    __Vtask_uvm_report_error__81__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__81__report_enabled_checked;
    __Vtask_uvm_report_error__81__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__82__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__83__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
    __Vfunc_uvm_report_enabled__85__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
    __Vfunc_uvm_report_enabled__85__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__90__verbosity;
    __Vtask_uvm_report_error__90__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__90__line;
    __Vtask_uvm_report_error__90__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__90__report_enabled_checked;
    __Vtask_uvm_report_error__90__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__94__verbosity;
    __Vfunc_uvm_report_enabled__94__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__94__severity;
    __Vfunc_uvm_report_enabled__94__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__95__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__96__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__100__verbosity;
    __Vtask_uvm_report_error__100__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__100__line;
    __Vtask_uvm_report_error__100__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__100__report_enabled_checked;
    __Vtask_uvm_report_error__100__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__104__verbosity;
    __Vfunc_uvm_report_enabled__104__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__104__severity;
    __Vfunc_uvm_report_enabled__104__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__109__verbosity;
    __Vtask_uvm_report_error__109__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__109__line;
    __Vtask_uvm_report_error__109__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__109__report_enabled_checked;
    __Vtask_uvm_report_error__109__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__113__verbosity;
    __Vfunc_uvm_report_enabled__113__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__113__severity;
    __Vfunc_uvm_report_enabled__113__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__114__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__115__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__119__verbosity;
    __Vtask_uvm_report_error__119__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__119__line;
    __Vtask_uvm_report_error__119__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__119__report_enabled_checked;
    __Vtask_uvm_report_error__119__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__120__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__121__Vfuncout;
    // Body
    std::string __VlefCall_13__get_full_name;
    std::string __VlefCall_12__get_full_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    std::string __VlefCall_8__get_full_name;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    std::string __VlefCall_5__get_full_name;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__get_n_maps;
    std::string __VCase_hd956b829__0;
    {
        get_access__Vfuncrtn = ""s;
        get_access__Vfuncrtn = this->__PVT__m_access;
        this->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_0__get_n_maps);
        if ((1U == __VlefCall_0__get_n_maps)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23024]);
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23026]);
        }
        this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VCase_hd956b829__0);
        if ((1U & (~ ("RW"s == __VCase_hd956b829__0)))) {
            if (("RO"s == __VCase_hd956b829__0)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("RO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "RO"s;
                    ++(vlSymsp->__Vcoverage[23028]);
                } else if (("WO"s == get_access__Vfuncrtn)) {
                    this->__Vfunc_uvm_report_enabled__75__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__75__severity = 2U;
                    __Vfunc_uvm_report_enabled__75__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__76__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__76__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__77__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__75__verbosity, (IData)(__Vfunc_uvm_report_enabled__75__severity), this->__Vfunc_uvm_report_enabled__75__id, __VlefCall_1__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_1__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 754)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        __Vtask_uvm_report_error__81__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__81__context_name = ""s;
                        __Vtask_uvm_report_error__81__line = 0x000002f2U;
                        this->__Vtask_uvm_report_error__81__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__81__verbosity = 0U;
                        this->__Vtask_uvm_report_error__81__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("WO memory '"s, __VlefCall_2__get_full_name), "' restricted to RO in map '"s), __VlefCall_3__get_full_name), "'"s));
                        this->__Vtask_uvm_report_error__81__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__82__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__82__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__83__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__83__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__81__id, this->__Vtask_uvm_report_error__81__message, __Vtask_uvm_report_error__81__verbosity, this->__Vtask_uvm_report_error__81__filename, __Vtask_uvm_report_error__81__line, this->__Vtask_uvm_report_error__81__context_name, (IData)(__Vtask_uvm_report_error__81__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[442]);
                        ++(vlSymsp->__Vcoverage[23029]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23030]);
                    }
                    ++(vlSymsp->__Vcoverage[23031]);
                } else {
                    this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__85__severity = 2U;
                    __Vfunc_uvm_report_enabled__85__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__86__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__87__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __VlefCall_4__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_4__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                        __Vtask_uvm_report_error__90__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__90__context_name = ""s;
                        __Vtask_uvm_report_error__90__line = 0x000002f5U;
                        this->__Vtask_uvm_report_error__90__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__90__verbosity = 0U;
                        this->__Vtask_uvm_report_error__90__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_5__get_full_name), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        this->__Vtask_uvm_report_error__90__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__91__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__92__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__90__id, this->__Vtask_uvm_report_error__90__message, __Vtask_uvm_report_error__90__verbosity, this->__Vtask_uvm_report_error__90__filename, __Vtask_uvm_report_error__90__line, this->__Vtask_uvm_report_error__90__context_name, (IData)(__Vtask_uvm_report_error__90__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[442]);
                        ++(vlSymsp->__Vcoverage[23032]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23033]);
                    }
                    ++(vlSymsp->__Vcoverage[23034]);
                }
                ++(vlSymsp->__Vcoverage[23035]);
            } else if (("WO"s == __VCase_hd956b829__0)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("WO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "WO"s;
                    ++(vlSymsp->__Vcoverage[23036]);
                } else if (("RO"s == get_access__Vfuncrtn)) {
                    this->__Vfunc_uvm_report_enabled__94__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__94__severity = 2U;
                    __Vfunc_uvm_report_enabled__94__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__95__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__95__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__96__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__96__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__94__verbosity, (IData)(__Vfunc_uvm_report_enabled__94__severity), this->__Vfunc_uvm_report_enabled__94__id, __VlefCall_6__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_6__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 765)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                        __Vtask_uvm_report_error__100__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__100__context_name = ""s;
                        __Vtask_uvm_report_error__100__line = 0x000002fdU;
                        this->__Vtask_uvm_report_error__100__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__100__verbosity = 0U;
                        this->__Vtask_uvm_report_error__100__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("RO memory '"s, __VlefCall_7__get_full_name), "' restricted to WO in map '"s), __VlefCall_8__get_full_name), "'"s));
                        this->__Vtask_uvm_report_error__100__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__101__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__102__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__100__id, this->__Vtask_uvm_report_error__100__message, __Vtask_uvm_report_error__100__verbosity, this->__Vtask_uvm_report_error__100__filename, __Vtask_uvm_report_error__100__line, this->__Vtask_uvm_report_error__100__context_name, (IData)(__Vtask_uvm_report_error__100__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[442]);
                        ++(vlSymsp->__Vcoverage[23037]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23038]);
                    }
                    ++(vlSymsp->__Vcoverage[23039]);
                } else {
                    this->__Vfunc_uvm_report_enabled__104__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__104__severity = 2U;
                    __Vfunc_uvm_report_enabled__104__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__105__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__106__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__104__verbosity, (IData)(__Vfunc_uvm_report_enabled__104__severity), this->__Vfunc_uvm_report_enabled__104__id, __VlefCall_9__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_9__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                        __Vtask_uvm_report_error__109__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__109__context_name = ""s;
                        __Vtask_uvm_report_error__109__line = 0x00000300U;
                        this->__Vtask_uvm_report_error__109__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__109__verbosity = 0U;
                        this->__Vtask_uvm_report_error__109__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_10__get_full_name), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        this->__Vtask_uvm_report_error__109__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__110__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__111__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__109__id, this->__Vtask_uvm_report_error__109__message, __Vtask_uvm_report_error__109__verbosity, this->__Vtask_uvm_report_error__109__filename, __Vtask_uvm_report_error__109__line, this->__Vtask_uvm_report_error__109__context_name, (IData)(__Vtask_uvm_report_error__109__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[442]);
                        ++(vlSymsp->__Vcoverage[23040]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23041]);
                    }
                    ++(vlSymsp->__Vcoverage[23042]);
                }
                ++(vlSymsp->__Vcoverage[23043]);
            } else {
                this->__Vfunc_uvm_report_enabled__113__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__113__severity = 2U;
                __Vfunc_uvm_report_enabled__113__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__114__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__114__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__115__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__115__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__113__verbosity, (IData)(__Vfunc_uvm_report_enabled__113__severity), this->__Vfunc_uvm_report_enabled__113__id, __VlefCall_11__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_11__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 772)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    __Vtask_uvm_report_error__119__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__119__context_name = ""s;
                    __Vtask_uvm_report_error__119__line = 0x00000304U;
                    this->__Vtask_uvm_report_error__119__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__119__verbosity = 0U;
                    this->__Vtask_uvm_report_error__119__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Shared memory '"s, __VlefCall_12__get_full_name), "' is not shared in map '"s), __VlefCall_13__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__119__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__120__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__120__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__121__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__121__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__119__id, this->__Vtask_uvm_report_error__119__message, __Vtask_uvm_report_error__119__verbosity, this->__Vtask_uvm_report_error__119__filename, __Vtask_uvm_report_error__119__line, this->__Vtask_uvm_report_error__119__context_name, (IData)(__Vtask_uvm_report_error__119__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[23044]);
                } else {
                    ++(vlSymsp->__Vcoverage[23045]);
                }
                ++(vlSymsp->__Vcoverage[23046]);
            }
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23047]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> info;
    {
        get_rights__Vfuncrtn = ""s;
        if (VL_GTES_III(32, 1U, this->__PVT__m_maps.size())) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23049]);
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23051]);
        }
        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 793)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this}, 1U, info);
        get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 794)
            ->__PVT__rights;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23052]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__127__verbosity;
    __Vfunc_uvm_report_enabled__127__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__127__severity;
    __Vfunc_uvm_report_enabled__127__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__128__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__129__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__134__verbosity;
    __Vtask_uvm_report_warning__134__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__134__line;
    __Vtask_uvm_report_warning__134__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__134__report_enabled_checked;
    __Vtask_uvm_report_warning__134__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__135__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__136__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_offset__Vfuncrtn = 0ULL;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23054]);
        }
        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 812)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 814)
            ->__PVT__unmapped) {
            this->__Vfunc_uvm_report_enabled__127__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__127__severity = 1U;
            __Vfunc_uvm_report_enabled__127__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__128__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__128__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__129__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__129__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__127__verbosity, (IData)(__Vfunc_uvm_report_enabled__127__severity), this->__Vfunc_uvm_report_enabled__127__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 817)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 817)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                }
                __Vtask_uvm_report_warning__134__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__134__context_name = ""s;
                __Vtask_uvm_report_warning__134__line = 0x00000331U;
                this->__Vtask_uvm_report_warning__134__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__134__verbosity = 0U;
                this->__Vtask_uvm_report_warning__134__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__134__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__135__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__135__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__136__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__136__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__134__id, this->__Vtask_uvm_report_warning__134__message, __Vtask_uvm_report_warning__134__verbosity, this->__Vtask_uvm_report_warning__134__filename, __Vtask_uvm_report_warning__134__line, this->__Vtask_uvm_report_warning__134__context_name, (IData)(__Vtask_uvm_report_warning__134__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[23055]);
            } else {
                ++(vlSymsp->__Vcoverage[23056]);
            }
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23058]);
        }
        get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 821)
            ->__PVT__offset;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23059]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk436__DOT__vreg;
    CData/*0:0*/ unnamedblk436__DOT__vreg__Vfirst;
    unnamedblk436__DOT__vreg__Vfirst = 0;
    __VlefExpr_0 = (0U != this->__PVT__m_vregs.first(unnamedblk436__DOT__vreg));
    if (__VlefExpr_0) {
        unnamedblk436__DOT__vreg__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk436__DOT__vreg__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_vregs.next(unnamedblk436__DOT__vreg));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk436__DOT__vreg__Vfirst = 0U;
            regs.push_back(unnamedblk436__DOT__vreg);
            ++(vlSymsp->__Vcoverage[23060]);
        }
        ++(vlSymsp->__Vcoverage[23061]);
    } else {
        ++(vlSymsp->__Vcoverage[23062]);
    }
    ++(vlSymsp->__Vcoverage[23063]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk437__DOT__l;
    CData/*0:0*/ unnamedblk437__DOT__l__Vfirst;
    unnamedblk437__DOT__l__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk437__DOT__unnamedblk438__DOT__vreg;
    __VlefExpr_0 = (0U != this->__PVT__m_vregs.first(unnamedblk437__DOT__l));
    if (__VlefExpr_0) {
        unnamedblk437__DOT__l__Vfirst = 1U;
        while (true) {
            __VlefExpr_1 = unnamedblk437__DOT__l__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                __VlefExpr_1 = (0U != this->__PVT__m_vregs.next(unnamedblk437__DOT__l));
            }
            if (!(__VlefExpr_1)) break;
            unnamedblk437__DOT__l__Vfirst = 0U;
            unnamedblk437__DOT__unnamedblk438__DOT__vreg 
                = unnamedblk437__DOT__l;
            VL_NULL_CHECK(unnamedblk437__DOT__unnamedblk438__DOT__vreg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 842)->__VnoInFunc_get_fields(vlSymsp, fields);
            ++(vlSymsp->__Vcoverage[23064]);
        }
        ++(vlSymsp->__Vcoverage[23065]);
    } else {
        ++(vlSymsp->__Vcoverage[23066]);
    }
    ++(vlSymsp->__Vcoverage[23067]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141__verbosity;
    __Vfunc_uvm_report_enabled__141__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__141__severity;
    __Vfunc_uvm_report_enabled__141__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__142__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__143__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__146__verbosity;
    __Vtask_uvm_report_warning__146__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__146__line;
    __Vtask_uvm_report_warning__146__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__146__report_enabled_checked;
    __Vtask_uvm_report_warning__146__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__147__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__148__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk439__DOT__i;
    unnamedblk439__DOT__i = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> vfields;
    {
        vfields.clear();
        this->__VnoInFunc_get_virtual_fields(vlSymsp, vfields);
        unnamedblk439__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk439__DOT__i, vfields.size())) {
            VL_NULL_CHECK(vfields.at(unnamedblk439__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 856)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_vfield_by_name__Vfuncrtn = vfields.at(unnamedblk439__DOT__i);
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[23069]);
            }
            unnamedblk439__DOT__i = ((IData)(1U) + unnamedblk439__DOT__i);
            ++(vlSymsp->__Vcoverage[23070]);
        }
        this->__Vfunc_uvm_report_enabled__141__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__141__severity = 1U;
        __Vfunc_uvm_report_enabled__141__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__142__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__142__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__143__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__143__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__141__verbosity, (IData)(__Vfunc_uvm_report_enabled__141__severity), this->__Vfunc_uvm_report_enabled__141__id, __VlefCall_1__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__146__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__146__context_name = ""s;
            __Vtask_uvm_report_warning__146__line = 0x0000035cU;
            this->__Vtask_uvm_report_warning__146__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__146__verbosity = 0U;
            this->__Vtask_uvm_report_warning__146__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual field '"s, name), "' in memory '"s), __VlefCall_2__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__146__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__147__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__147__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__148__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__148__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__146__id, this->__Vtask_uvm_report_warning__146__message, __Vtask_uvm_report_warning__146__verbosity, this->__Vtask_uvm_report_warning__146__filename, __Vtask_uvm_report_warning__146__line, this->__Vtask_uvm_report_warning__146__context_name, (IData)(__Vtask_uvm_report_warning__146__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[23071]);
        } else {
            ++(vlSymsp->__Vcoverage[23072]);
        }
        get_vfield_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23073]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__verbosity;
    __Vfunc_uvm_report_enabled__151__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__151__severity;
    __Vfunc_uvm_report_enabled__151__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__152__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__153__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__156__verbosity;
    __Vtask_uvm_report_warning__156__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__156__line;
    __Vtask_uvm_report_warning__156__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__156__report_enabled_checked;
    __Vtask_uvm_report_warning__156__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__157__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__158__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk440__DOT__l;
    CData/*0:0*/ unnamedblk440__DOT__l__Vfirst;
    unnamedblk440__DOT__l__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> unnamedblk440__DOT__unnamedblk441__DOT__vreg;
    {
        __VlefExpr_0 = (0U != this->__PVT__m_vregs.first(unnamedblk440__DOT__l));
        if (__VlefExpr_0) {
            unnamedblk440__DOT__l__Vfirst = 1U;
            while (true) {
                __VlefExpr_1 = unnamedblk440__DOT__l__Vfirst;
                if ((1U & (~ (IData)(__VlefExpr_1)))) {
                    __VlefExpr_1 = (0U != this->__PVT__m_vregs.next(unnamedblk440__DOT__l));
                }
                if (!(__VlefExpr_1)) break;
                unnamedblk440__DOT__l__Vfirst = 0U;
                unnamedblk440__DOT__unnamedblk441__DOT__vreg 
                    = unnamedblk440__DOT__l;
                VL_NULL_CHECK(unnamedblk440__DOT__unnamedblk441__DOT__vreg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 872)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                if ((__VlefCall_2__get_name == name)) {
                    get_vreg_by_name__Vfuncrtn = unnamedblk440__DOT__unnamedblk441__DOT__vreg;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[23075]);
                }
                ++(vlSymsp->__Vcoverage[23076]);
            }
            ++(vlSymsp->__Vcoverage[23077]);
        } else {
            ++(vlSymsp->__Vcoverage[23078]);
        }
        this->__Vfunc_uvm_report_enabled__151__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__151__severity = 1U;
        __Vfunc_uvm_report_enabled__151__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__152__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__152__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__153__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__153__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__151__verbosity, (IData)(__Vfunc_uvm_report_enabled__151__severity), this->__Vfunc_uvm_report_enabled__151__id, __VlefCall_3__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            __Vtask_uvm_report_warning__156__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__156__context_name = ""s;
            __Vtask_uvm_report_warning__156__line = 0x0000036dU;
            this->__Vtask_uvm_report_warning__156__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__156__verbosity = 0U;
            this->__Vtask_uvm_report_warning__156__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual register '"s, name), "' in memory '"s), __VlefCall_4__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__156__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__157__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__157__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__158__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__158__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__156__id, this->__Vtask_uvm_report_warning__156__message, __Vtask_uvm_report_warning__156__verbosity, this->__Vtask_uvm_report_warning__156__filename, __Vtask_uvm_report_warning__156__line, this->__Vtask_uvm_report_warning__156__context_name, (IData)(__Vtask_uvm_report_warning__156__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[441]);
            ++(vlSymsp->__Vcoverage[23079]);
        } else {
            ++(vlSymsp->__Vcoverage[23080]);
        }
        get_vreg_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23081]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__160__verbosity;
    __Vfunc_uvm_report_enabled__160__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__160__severity;
    __Vfunc_uvm_report_enabled__160__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__161__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__162__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__164__verbosity;
    __Vtask_uvm_report_error__164__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__164__line;
    __Vtask_uvm_report_error__164__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__164__report_enabled_checked;
    __Vtask_uvm_report_error__164__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__165__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__166__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__160__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__160__severity = 2U;
    __Vfunc_uvm_report_enabled__160__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__161__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__161__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__162__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__162__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__160__verbosity, (IData)(__Vfunc_uvm_report_enabled__160__severity), this->__Vfunc_uvm_report_enabled__160__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_error__164__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__164__context_name = ""s;
        __Vtask_uvm_report_error__164__line = 0x00000377U;
        this->__Vtask_uvm_report_error__164__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_error__164__verbosity = 0U;
        this->__Vtask_uvm_report_error__164__message = "uvm_mem::get_vreg_by_offset() not yet implemented"s;
        this->__Vtask_uvm_report_error__164__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__165__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__165__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__166__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__166__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__164__id, this->__Vtask_uvm_report_error__164__message, __Vtask_uvm_report_error__164__verbosity, this->__Vtask_uvm_report_error__164__filename, __Vtask_uvm_report_error__164__line, this->__Vtask_uvm_report_error__164__context_name, (IData)(__Vtask_uvm_report_error__164__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[442]);
        ++(vlSymsp->__Vcoverage[23082]);
    } else {
        ++(vlSymsp->__Vcoverage[23083]);
    }
    get_vreg_by_offset__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[23084]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__171__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__172__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__177__verbosity;
    __Vtask_uvm_report_warning__177__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__177__line;
    __Vtask_uvm_report_warning__177__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__177__report_enabled_checked;
    __Vtask_uvm_report_warning__177__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__178__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__179__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__181__Vfuncout;
    __Vtask_get_n_bytes__181__Vfuncout = 0;
    // Body
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk442__DOT__i;
    unnamedblk442__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_addresses__Vfuncrtn = 0U;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23086]);
        }
        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 908)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 910)
            ->__PVT__unmapped) {
            this->__Vfunc_uvm_report_enabled__170__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__170__severity = 1U;
            __Vfunc_uvm_report_enabled__170__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__171__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__171__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__172__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__172__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), this->__Vfunc_uvm_report_enabled__170__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 913)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 913)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                }
                __Vtask_uvm_report_warning__177__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__177__context_name = ""s;
                __Vtask_uvm_report_warning__177__line = 0x00000391U;
                this->__Vtask_uvm_report_warning__177__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__177__verbosity = 0U;
                this->__Vtask_uvm_report_warning__177__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__177__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__178__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__178__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__179__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__179__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__177__id, this->__Vtask_uvm_report_warning__177__message, __Vtask_uvm_report_warning__177__verbosity, this->__Vtask_uvm_report_warning__177__filename, __Vtask_uvm_report_warning__177__line, this->__Vtask_uvm_report_warning__177__context_name, (IData)(__Vtask_uvm_report_warning__177__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[23087]);
            } else {
                ++(vlSymsp->__Vcoverage[23088]);
            }
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23090]);
        }
        addr = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 917)
            ->__PVT__addr;
        unnamedblk442__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk442__DOT__i, addr.size())) {
            addr.atWrite(unnamedblk442__DOT__i) = (addr.at(unnamedblk442__DOT__i) 
                                                   + 
                                                   ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 920)
                                                                    ->__PVT__mem_range[0U])) 
                                                    * offset));
            unnamedblk442__DOT__i = ((IData)(1U) + unnamedblk442__DOT__i);
            ++(vlSymsp->__Vcoverage[23091]);
        }
        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 922)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__181__Vfuncout);
        get_addresses__Vfuncrtn = __Vtask_get_n_bytes__181__Vfuncout;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23092]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_addresses__182__Vfuncout;
    __Vtask_get_addresses__182__Vfuncout = 0;
    // Body
    VlQueue<QData/*63:0*/> addr;
    get_address__Vfuncrtn = 0ULL;
    addr.clear();
    addr.atDefault() = 0;
    this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, offset, map, addr, __Vtask_get_addresses__182__Vfuncout);
    get_address__Vfuncrtn = addr.at(0U);
    ++(vlSymsp->__Vcoverage[23093]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size\n"); );
    // Body
    get_size__Vfuncrtn = this->__PVT__m_size;
    ++(vlSymsp->__Vcoverage[23094]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
    ++(vlSymsp->__Vcoverage[23095]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                         (this->__PVT__m_n_bits 
                                                          - (IData)(1U)), 3U));
    ++(vlSymsp->__Vcoverage[23097]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vtask_read_by_name__184__Vfuncout;
    __Vtask_read_by_name__184__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read_by_name__184__val;
    __Vtask_read_by_name__184__val = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_0__get_full_name;
    build_coverage__Vfuncrtn = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    __Vtask_read_by_name__184__val = build_coverage__Vfuncrtn;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz194__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__184__val, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this}, __Vtask_read_by_name__184__Vfuncout);
    build_coverage__Vfuncrtn = __Vtask_read_by_name__184__val;
    build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                & models);
    ++(vlSymsp->__Vcoverage[23098]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage\n"); );
    // Body
    this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                | models);
    ++(vlSymsp->__Vcoverage[23099]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage\n"); );
    // Body
    has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                               & models) == models);
    ++(vlSymsp->__Vcoverage[23100]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage\n"); );
    // Body
    {
        set_coverage__Vfuncrtn = 0U;
        if ((0U == is_on)) {
            this->__PVT__m_cover_on = is_on;
            set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23102]);
        }
        this->__PVT__m_cover_on = (this->__PVT__m_has_cover 
                                   & is_on);
        set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23103]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__has_coverage;
    {
        get_coverage__Vfuncrtn = 0U;
        this->__VnoInFunc_has_coverage(vlSymsp, is_on, __VlefCall_0__has_coverage);
        if (__VlefCall_0__has_coverage) {
            ++(vlSymsp->__Vcoverage[23105]);
        } else {
            get_coverage__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_coverage__Vfuncrtn = ((this->__PVT__m_cover_on 
                                   & is_on) == is_on);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23106]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write\n"); );
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1039)->__PVT__element 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1040)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1041)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1042)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1043)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1044)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1045)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1046)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1047)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1048)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1049)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1050)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1054)
        ->__PVT__status;
    ++(vlSymsp->__Vcoverage[23107]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read\n"); );
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1074)->__PVT__element 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1075)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1076)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1077)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1078)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1079)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1080)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1081)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1082)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1083)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1084)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1085)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1089)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1090)
        ->__PVT__value.at(0U);
    ++(vlSymsp->__Vcoverage[23108]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1110)->__PVT__element 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1111)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1112)->__PVT__kind = 3U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1113)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1114)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1115)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1116)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1117)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1118)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1119)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1120)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1121)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1125)
        ->__PVT__status;
    ++(vlSymsp->__Vcoverage[23109]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1145)->__PVT__element 
        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1146)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1147)->__PVT__kind = 2U;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1148)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1149)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1150)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1151)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1152)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1153)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1154)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1155)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1156)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1160)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1161)
        ->__PVT__value;
    ++(vlSymsp->__Vcoverage[23110]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__199__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__218__verbosity;
    __Vfunc_uvm_report_enabled__218__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__218__severity;
    __Vfunc_uvm_report_enabled__218__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__219__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__220__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__226__verbosity;
    __Vfunc_uvm_report_enabled__226__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__226__severity;
    __Vfunc_uvm_report_enabled__226__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__227__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__228__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__231__verbosity;
    __Vtask_uvm_report_info__231__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__231__line;
    __Vtask_uvm_report_info__231__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__231__report_enabled_checked;
    __Vtask_uvm_report_info__231__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_7__get_backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_6__get_backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_5__get_backdoor;
    std::string __VlefCond_4;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_1__get_sequencer;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk443__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk444__DOT__system_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk444__DOT__unnamedblk445__DOT__fd;
    QData/*63:0*/ unnamedblk444__DOT__unnamedblk446__DOT__idx;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk447__DOT__bkdr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk448__DOT__cb;
    std::string unnamedblk449__DOT__path_s;
    std::string unnamedblk449__DOT__value_s;
    std::string unnamedblk449__DOT__pre_s;
    std::string unnamedblk449__DOT__range_s;
    IData/*31:0*/ unnamedblk449__DOT__unnamedblk450__DOT__i;
    unnamedblk449__DOT__unnamedblk450__DOT__i = 0;
    std::string __VInside_h43e5c485__0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi104> cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi104, vlSymsp, 
                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1173)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1174)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__199__map_info, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__199__map_info;
        if (__VlefCall_0__Xcheck_accessX) {
            ++(vlSymsp->__Vcoverage[23112]);
        } else {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1181)->__PVT__status = 0U;
        this->__VnoInFunc_pre_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1185)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk443__DOT__cb);
        while ((VlNull{} != unnamedblk443__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk443__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1186)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1185)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk443__DOT__cb);
            ++(vlSymsp->__Vcoverage[23113]);
        }
        if ((0U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1188)
             ->__PVT__status)) {
            this->__PVT__m_write_in_progress = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23115]);
        }
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1194)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1197)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1199)
                          ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1199)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk444__DOT__system_map);
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1201)
                 ->__PVT__frontdoor)) {
                unnamedblk444__DOT__unnamedblk445__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1202)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1203)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1204)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk444__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1205)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_1__get_sequencer);
                    VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1205)->__PVT__sequencer 
                        = __VlefCall_1__get_sequencer;
                    ++(vlSymsp->__Vcoverage[23116]);
                } else {
                    ++(vlSymsp->__Vcoverage[23117]);
                }
                co_await VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
                ++(vlSymsp->__Vcoverage[23118]);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1209)
                                       ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1209)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
                ++(vlSymsp->__Vcoverage[23119]);
            }
            if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1212)
                 ->__PVT__status)) {
                unnamedblk444__DOT__unnamedblk446__DOT__idx = 0ULL;
                unnamedblk444__DOT__unnamedblk446__DOT__idx 
                    = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1213)
                    ->__PVT__offset;
                while ((unnamedblk444__DOT__unnamedblk446__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1214)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1214)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1216)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk444__DOT__unnamedblk446__DOT__idx), 0U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1216)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1217)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1217)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1218)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk444__DOT__unnamedblk446__DOT__idx)), 0U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1219)
                                                                                ->__PVT__map);
                    unnamedblk444__DOT__unnamedblk446__DOT__idx 
                        = (1ULL + unnamedblk444__DOT__unnamedblk446__DOT__idx);
                    ++(vlSymsp->__Vcoverage[23120]);
                }
                ++(vlSymsp->__Vcoverage[23121]);
            } else {
                ++(vlSymsp->__Vcoverage[23122]);
            }
            ++(vlSymsp->__Vcoverage[23127]);
        } else {
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1226)
                                         ->__PVT__map, __VInside_h43e5c485__0);
            if ((("RW"s == __VInside_h43e5c485__0) 
                 || ("WO"s == __VInside_h43e5c485__0))) {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk447__DOT__bkdr);
                if ((VlNull{} != unnamedblk447__DOT__bkdr)) {
                    VL_NULL_CHECK(unnamedblk447__DOT__bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1229)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                    ++(vlSymsp->__Vcoverage[23123]);
                } else {
                    this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                    ++(vlSymsp->__Vcoverage[23124]);
                }
                ++(vlSymsp->__Vcoverage[23125]);
            } else {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1234)->__PVT__status = 1U;
                ++(vlSymsp->__Vcoverage[23126]);
            }
            ++(vlSymsp->__Vcoverage[23128]);
        }
        this->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1239)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk448__DOT__cb);
        while ((VlNull{} != unnamedblk448__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk448__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1240)->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1239)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk448__DOT__cb);
            ++(vlSymsp->__Vcoverage[23129]);
        }
        this->__Vfunc_uvm_report_enabled__218__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__218__severity = 0U;
        __Vfunc_uvm_report_enabled__218__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__219__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__219__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__220__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__220__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__218__verbosity, (IData)(__Vfunc_uvm_report_enabled__218__severity), this->__Vfunc_uvm_report_enabled__218__id, __VlefCall_2__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            unnamedblk449__DOT__path_s = ""s;
            unnamedblk449__DOT__value_s = ""s;
            unnamedblk449__DOT__pre_s = ""s;
            unnamedblk449__DOT__range_s = ""s;
            if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1245)
                 ->__PVT__path)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1246)
                     ->__PVT__frontdoor)) {
                    __VlefCond_4 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1247)
                                  ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1247)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __VlefCond_4 = VL_CONCATN_NNN("map "s, __VlefCall_3__get_full_name);
                }
                unnamedblk449__DOT__path_s = __VlefCond_4;
                ++(vlSymsp->__Vcoverage[23132]);
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_5__get_backdoor);
                __Vtemp_4[0U] = 0x646f6f72U;
                __Vtemp_4[1U] = 0x6261636bU;
                if ((VlNull{} != __VlefCall_5__get_backdoor)) {
                    __Vtemp_4[2U] = 0x73657220U;
                    __Vtemp_4[3U] = 0x00000075U;
                } else {
                    __Vtemp_4[2U] = 0x44504920U;
                    __Vtemp_4[3U] = 0U;
                }
                unnamedblk449__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_4);
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_6__get_backdoor);
                if ((VlNull{} != __VlefCall_6__get_backdoor)) {
                    ++(vlSymsp->__Vcoverage[23130]);
                }
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_7__get_backdoor);
                if ((VlNull{} == __VlefCall_7__get_backdoor)) {
                    ++(vlSymsp->__Vcoverage[23131]);
                }
                ++(vlSymsp->__Vcoverage[23133]);
            }
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1251)
                           ->__PVT__value.size())) {
                unnamedblk449__DOT__value_s = "='{"s;
                unnamedblk449__DOT__pre_s = "Burst "s;
                unnamedblk449__DOT__unnamedblk450__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk449__DOT__unnamedblk450__DOT__i, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1254)
                                  ->__PVT__value.size())) {
                    unnamedblk449__DOT__value_s = VL_CONCATN_NNN(unnamedblk449__DOT__value_s, VL_SFORMATF_N_NX("%0x,",0,
                                                                                64,
                                                                                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1255)
                                                                                ->__PVT__value.at(unnamedblk449__DOT__unnamedblk450__DOT__i)) );
                    unnamedblk449__DOT__unnamedblk450__DOT__i 
                        = ((IData)(1U) + unnamedblk449__DOT__unnamedblk450__DOT__i);
                    ++(vlSymsp->__Vcoverage[23134]);
                }
                unnamedblk449__DOT__value_s = VL_PUTC_N(unnamedblk449__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk449__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                unnamedblk449__DOT__range_s = VL_SFORMATF_N_NX("[%0#:%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                               ->__PVT__offset,
                                                               64,
                                                               (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                                ->__PVT__offset 
                                                                + (QData)((IData)(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                                                ->__PVT__value.size())))) ;
                ++(vlSymsp->__Vcoverage[23135]);
            } else {
                unnamedblk449__DOT__value_s = VL_SFORMATF_N_NX("=%0x",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1260)
                                                               ->__PVT__value.at(0U)) ;
                unnamedblk449__DOT__range_s = VL_SFORMATF_N_NX("[%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1261)
                                                               ->__PVT__offset) ;
                ++(vlSymsp->__Vcoverage[23136]);
            }
            this->__Vfunc_uvm_report_enabled__226__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__226__severity = 0U;
            __Vfunc_uvm_report_enabled__226__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__227__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__227__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__228__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__228__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__226__verbosity, (IData)(__Vfunc_uvm_report_enabled__226__severity), this->__Vfunc_uvm_report_enabled__226__id, __VlefCall_8__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_info__231__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__231__context_name = ""s;
                __Vtask_uvm_report_info__231__line = 0x000004f1U;
                this->__Vtask_uvm_report_info__231__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_info__231__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__231__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk449__DOT__pre_s, "Wrote memory via "s), unnamedblk449__DOT__path_s), ": "s), __VlefCall_9__get_full_name), unnamedblk449__DOT__range_s), unnamedblk449__DOT__value_s));
                this->__Vtask_uvm_report_info__231__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__232__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__233__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__231__id, this->__Vtask_uvm_report_info__231__message, __Vtask_uvm_report_info__231__verbosity, this->__Vtask_uvm_report_info__231__filename, __Vtask_uvm_report_info__231__line, this->__Vtask_uvm_report_info__231__context_name, (IData)(__Vtask_uvm_report_info__231__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[23137]);
            } else {
                ++(vlSymsp->__Vcoverage[23138]);
            }
            ++(vlSymsp->__Vcoverage[23139]);
        } else {
            ++(vlSymsp->__Vcoverage[23140]);
        }
        this->__PVT__m_write_in_progress = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23141]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__236__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__255__verbosity;
    __Vfunc_uvm_report_enabled__255__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__255__severity;
    __Vfunc_uvm_report_enabled__255__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__256__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__257__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263__verbosity;
    __Vfunc_uvm_report_enabled__263__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__263__severity;
    __Vfunc_uvm_report_enabled__263__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__264__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__265__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__268__verbosity;
    __Vtask_uvm_report_info__268__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__268__line;
    __Vtask_uvm_report_info__268__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__268__report_enabled_checked;
    __Vtask_uvm_report_info__268__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__269__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__270__Vfuncout;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_7__get_backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_6__get_backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_5__get_backdoor;
    std::string __VlefCond_4;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_1__get_sequencer;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk451__DOT__cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk452__DOT__system_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk452__DOT__unnamedblk453__DOT__fd;
    QData/*63:0*/ unnamedblk452__DOT__unnamedblk454__DOT__idx;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk455__DOT__bkdr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk456__DOT__cb;
    std::string unnamedblk457__DOT__path_s;
    std::string unnamedblk457__DOT__value_s;
    std::string unnamedblk457__DOT__pre_s;
    std::string unnamedblk457__DOT__range_s;
    IData/*31:0*/ unnamedblk457__DOT__unnamedblk458__DOT__i;
    unnamedblk457__DOT__unnamedblk458__DOT__i = 0;
    std::string __VInside_h43dc3445__0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi104> cbs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi104, vlSymsp, 
                     VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1280)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1281)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__236__map_info, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__236__map_info;
        if (__VlefCall_0__Xcheck_accessX) {
            ++(vlSymsp->__Vcoverage[23143]);
        } else {
            goto __Vlabel0;
        }
        this->__PVT__m_read_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1288)->__PVT__status = 0U;
        this->__VnoInFunc_pre_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1292)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk451__DOT__cb);
        while ((VlNull{} != unnamedblk451__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk451__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1293)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1292)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk451__DOT__cb);
            ++(vlSymsp->__Vcoverage[23144]);
        }
        if ((0U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1295)
             ->__PVT__status)) {
            this->__PVT__m_read_in_progress = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23146]);
        }
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1301)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1304)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1306)
                          ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1306)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk452__DOT__system_map);
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1308)
                 ->__PVT__frontdoor)) {
                unnamedblk452__DOT__unnamedblk453__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1309)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1310)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1311)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk452__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1312)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_1__get_sequencer);
                    VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1312)->__PVT__sequencer 
                        = __VlefCall_1__get_sequencer;
                    ++(vlSymsp->__Vcoverage[23147]);
                } else {
                    ++(vlSymsp->__Vcoverage[23148]);
                }
                co_await VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
                ++(vlSymsp->__Vcoverage[23149]);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1316)
                                       ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1316)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
                ++(vlSymsp->__Vcoverage[23150]);
            }
            if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1319)
                 ->__PVT__status)) {
                unnamedblk452__DOT__unnamedblk454__DOT__idx = 0ULL;
                unnamedblk452__DOT__unnamedblk454__DOT__idx 
                    = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1320)
                    ->__PVT__offset;
                while ((unnamedblk452__DOT__unnamedblk454__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1321)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1321)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1323)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk452__DOT__unnamedblk454__DOT__idx), 1U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1323)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1324)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1324)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1325)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk452__DOT__unnamedblk454__DOT__idx)), 1U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1326)
                                                                                ->__PVT__map);
                    unnamedblk452__DOT__unnamedblk454__DOT__idx 
                        = (1ULL + unnamedblk452__DOT__unnamedblk454__DOT__idx);
                    ++(vlSymsp->__Vcoverage[23151]);
                }
                ++(vlSymsp->__Vcoverage[23152]);
            } else {
                ++(vlSymsp->__Vcoverage[23153]);
            }
            ++(vlSymsp->__Vcoverage[23158]);
        } else {
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1333)
                                         ->__PVT__map, __VInside_h43dc3445__0);
            if ((("RW"s == __VInside_h43dc3445__0) 
                 || ("RO"s == __VInside_h43dc3445__0))) {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk455__DOT__bkdr);
                if ((VlNull{} != unnamedblk455__DOT__bkdr)) {
                    VL_NULL_CHECK(unnamedblk455__DOT__bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1336)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                    ++(vlSymsp->__Vcoverage[23154]);
                } else {
                    this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                    ++(vlSymsp->__Vcoverage[23155]);
                }
                ++(vlSymsp->__Vcoverage[23156]);
            } else {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1341)->__PVT__status = 1U;
                ++(vlSymsp->__Vcoverage[23157]);
            }
            ++(vlSymsp->__Vcoverage[23159]);
        }
        this->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1347)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk456__DOT__cb);
        while ((VlNull{} != unnamedblk456__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk456__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1348)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1347)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk456__DOT__cb);
            ++(vlSymsp->__Vcoverage[23160]);
        }
        this->__Vfunc_uvm_report_enabled__255__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__255__severity = 0U;
        __Vfunc_uvm_report_enabled__255__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__256__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__256__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__257__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__257__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__255__verbosity, (IData)(__Vfunc_uvm_report_enabled__255__severity), this->__Vfunc_uvm_report_enabled__255__id, __VlefCall_2__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            unnamedblk457__DOT__path_s = ""s;
            unnamedblk457__DOT__value_s = ""s;
            unnamedblk457__DOT__pre_s = ""s;
            unnamedblk457__DOT__range_s = ""s;
            if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1353)
                 ->__PVT__path)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1354)
                     ->__PVT__frontdoor)) {
                    __VlefCond_4 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1355)
                                  ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1355)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __VlefCond_4 = VL_CONCATN_NNN("map "s, __VlefCall_3__get_full_name);
                }
                unnamedblk457__DOT__path_s = __VlefCond_4;
                ++(vlSymsp->__Vcoverage[23163]);
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_5__get_backdoor);
                __Vtemp_4[0U] = 0x646f6f72U;
                __Vtemp_4[1U] = 0x6261636bU;
                if ((VlNull{} != __VlefCall_5__get_backdoor)) {
                    __Vtemp_4[2U] = 0x73657220U;
                    __Vtemp_4[3U] = 0x00000075U;
                } else {
                    __Vtemp_4[2U] = 0x44504920U;
                    __Vtemp_4[3U] = 0U;
                }
                unnamedblk457__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_4);
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_6__get_backdoor);
                if ((VlNull{} != __VlefCall_6__get_backdoor)) {
                    ++(vlSymsp->__Vcoverage[23161]);
                }
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_7__get_backdoor);
                if ((VlNull{} == __VlefCall_7__get_backdoor)) {
                    ++(vlSymsp->__Vcoverage[23162]);
                }
                ++(vlSymsp->__Vcoverage[23164]);
            }
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1359)
                           ->__PVT__value.size())) {
                unnamedblk457__DOT__value_s = "='{"s;
                unnamedblk457__DOT__pre_s = "Burst "s;
                unnamedblk457__DOT__unnamedblk458__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk457__DOT__unnamedblk458__DOT__i, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1362)
                                  ->__PVT__value.size())) {
                    unnamedblk457__DOT__value_s = VL_CONCATN_NNN(unnamedblk457__DOT__value_s, VL_SFORMATF_N_NX("%0x,",0,
                                                                                64,
                                                                                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1363)
                                                                                ->__PVT__value.at(unnamedblk457__DOT__unnamedblk458__DOT__i)) );
                    unnamedblk457__DOT__unnamedblk458__DOT__i 
                        = ((IData)(1U) + unnamedblk457__DOT__unnamedblk458__DOT__i);
                    ++(vlSymsp->__Vcoverage[23165]);
                }
                unnamedblk457__DOT__value_s = VL_PUTC_N(unnamedblk457__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk457__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                unnamedblk457__DOT__range_s = VL_SFORMATF_N_NX("[%0#:%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                               ->__PVT__offset,
                                                               64,
                                                               (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                                ->__PVT__offset 
                                                                + (QData)((IData)(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                                                ->__PVT__value.size())))) ;
                ++(vlSymsp->__Vcoverage[23166]);
            } else {
                unnamedblk457__DOT__value_s = VL_SFORMATF_N_NX("=%0x",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1368)
                                                               ->__PVT__value.at(0U)) ;
                unnamedblk457__DOT__range_s = VL_SFORMATF_N_NX("[%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1369)
                                                               ->__PVT__offset) ;
                ++(vlSymsp->__Vcoverage[23167]);
            }
            this->__Vfunc_uvm_report_enabled__263__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__263__severity = 0U;
            __Vfunc_uvm_report_enabled__263__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__264__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__264__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__265__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__265__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__263__verbosity, (IData)(__Vfunc_uvm_report_enabled__263__severity), this->__Vfunc_uvm_report_enabled__263__id, __VlefCall_8__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                __Vtask_uvm_report_info__268__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__268__context_name = ""s;
                __Vtask_uvm_report_info__268__line = 0x0000055dU;
                this->__Vtask_uvm_report_info__268__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_info__268__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__268__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk457__DOT__pre_s, "Read memory via "s), unnamedblk457__DOT__path_s), ": "s), __VlefCall_9__get_full_name), unnamedblk457__DOT__range_s), unnamedblk457__DOT__value_s));
                this->__Vtask_uvm_report_info__268__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__269__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__269__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__270__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__270__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__268__id, this->__Vtask_uvm_report_info__268__message, __Vtask_uvm_report_info__268__verbosity, this->__Vtask_uvm_report_info__268__filename, __Vtask_uvm_report_info__268__line, this->__Vtask_uvm_report_info__268__context_name, (IData)(__Vtask_uvm_report_info__268__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[440]);
                ++(vlSymsp->__Vcoverage[23168]);
            } else {
                ++(vlSymsp->__Vcoverage[23169]);
            }
            ++(vlSymsp->__Vcoverage[23170]);
        } else {
            ++(vlSymsp->__Vcoverage[23171]);
        }
        this->__PVT__m_read_in_progress = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23172]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__273__verbosity;
    __Vfunc_uvm_report_enabled__273__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__273__severity;
    __Vfunc_uvm_report_enabled__273__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__274__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__275__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__278__verbosity;
    __Vtask_uvm_report_error__278__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__278__line;
    __Vtask_uvm_report_error__278__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__278__report_enabled_checked;
    __Vtask_uvm_report_error__278__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__279__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__280__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__285__verbosity;
    __Vfunc_uvm_report_enabled__285__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__285__severity;
    __Vfunc_uvm_report_enabled__285__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__286__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__287__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__290__verbosity;
    __Vtask_uvm_report_warning__290__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__290__line;
    __Vtask_uvm_report_warning__290__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__290__report_enabled_checked;
    __Vtask_uvm_report_warning__290__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__291__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__292__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__301__verbosity;
    __Vfunc_uvm_report_enabled__301__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__301__severity;
    __Vfunc_uvm_report_enabled__301__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__302__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__303__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__307__verbosity;
    __Vtask_uvm_report_error__307__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__307__line;
    __Vtask_uvm_report_error__307__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__307__report_enabled_checked;
    __Vtask_uvm_report_error__307__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__308__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__309__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__312__verbosity;
    __Vfunc_uvm_report_enabled__312__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__312__severity;
    __Vfunc_uvm_report_enabled__312__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__313__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__314__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__318__verbosity;
    __Vtask_uvm_report_error__318__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__318__line;
    __Vtask_uvm_report_error__318__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__318__report_enabled_checked;
    __Vtask_uvm_report_error__318__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__319__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__320__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__324__verbosity;
    __Vfunc_uvm_report_enabled__324__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__324__severity;
    __Vfunc_uvm_report_enabled__324__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__325__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__326__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__330__verbosity;
    __Vtask_uvm_report_error__330__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__330__line;
    __Vtask_uvm_report_error__330__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__330__report_enabled_checked;
    __Vtask_uvm_report_error__330__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__331__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__332__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__334__verbosity;
    __Vfunc_uvm_report_enabled__334__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__334__severity;
    __Vfunc_uvm_report_enabled__334__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__335__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__336__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__338__verbosity;
    __Vtask_uvm_report_error__338__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__338__line;
    __Vtask_uvm_report_error__338__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__338__report_enabled_checked;
    __Vtask_uvm_report_error__338__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__339__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__340__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_26__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_25__get_n_bytes;
    IData/*31:0*/ __VlefCall_24__get_n_bits;
    IData/*31:0*/ __VlefCall_23__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_22__get_n_bytes;
    IData/*31:0*/ __VlefCall_21__get_n_bits;
    std::string __VlefCall_20__get_full_name;
    std::string __VlefCall_19__get_full_name;
    IData/*31:0*/ __VlefCall_18__uvm_report_enabled;
    std::string __VlefCall_17__get_full_name;
    std::string __VlefCall_16__get_type_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    std::string __VlefCall_14__get_type_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_13__get_local_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_12__get_backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_11__get_backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_10__backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_9__get_default_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_8__get_default_map;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_5;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_4__get_backdoor;
    IData/*31:0*/ __VlefCall_3__get_default_door;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    CData/*0:0*/ __VExpr_ha843869c__0;
    __VExpr_ha843869c__0 = 0;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        if ((VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1386)
             ->__PVT__offset >= this->__PVT__m_size)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            this->__Vfunc_uvm_report_enabled__273__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
            __Vfunc_uvm_report_enabled__273__severity = 2U;
            __Vfunc_uvm_report_enabled__273__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__274__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__274__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__275__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__275__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__273__verbosity, (IData)(__Vfunc_uvm_report_enabled__273__severity), this->__Vfunc_uvm_report_enabled__273__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                __Vtask_uvm_report_error__278__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__278__context_name = ""s;
                __Vtask_uvm_report_error__278__line = 0x0000056dU;
                this->__Vtask_uvm_report_error__278__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__278__verbosity = 0U;
                this->__Vtask_uvm_report_error__278__message 
                    = VL_SFORMATF_N_NX("Offset 'h%0x exceeds size of memory, 'h%0x",0,
                                       64,VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1389)
                                       ->__PVT__offset,
                                       64,this->__PVT__m_size) ;
                this->__Vtask_uvm_report_error__278__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__279__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__279__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__280__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__280__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__278__id, this->__Vtask_uvm_report_error__278__message, __Vtask_uvm_report_error__278__verbosity, this->__Vtask_uvm_report_error__278__filename, __Vtask_uvm_report_error__278__line, this->__Vtask_uvm_report_error__278__context_name, (IData)(__Vtask_uvm_report_error__278__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[23173]);
            } else {
                ++(vlSymsp->__Vcoverage[23174]);
            }
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1390)->__PVT__status = 1U;
            Xcheck_accessX__Vfuncrtn = 0U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23176]);
        }
        if ((3U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1394)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1395)->__VnoInFunc_get_default_door(vlSymsp, __VlefCall_3__get_default_door);
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1395)->__PVT__path 
                = __VlefCall_3__get_default_door;
            ++(vlSymsp->__Vcoverage[23177]);
        } else {
            ++(vlSymsp->__Vcoverage[23178]);
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1397)
             ->__PVT__path)) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_4__get_backdoor);
            __VlefLogAnd_5 = (VlNull{} == __VlefCall_4__get_backdoor);
            if (__VlefLogAnd_5) {
                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VExpr_ha843869c__0);
                __VlefLogAnd_5 = (1U & (~ (IData)(__VExpr_ha843869c__0)));
            }
            if (__VlefLogAnd_5) {
                this->__Vfunc_uvm_report_enabled__285__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__285__severity = 1U;
                __Vfunc_uvm_report_enabled__285__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__286__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__286__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__287__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__287__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__285__verbosity, (IData)(__Vfunc_uvm_report_enabled__285__severity), this->__Vfunc_uvm_report_enabled__285__id, __VlefCall_6__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_6__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                    __Vtask_uvm_report_warning__290__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__290__context_name = ""s;
                    __Vtask_uvm_report_warning__290__line = 0x00000579U;
                    this->__Vtask_uvm_report_warning__290__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_warning__290__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__290__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for memory '"s, __VlefCall_7__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__290__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__291__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__291__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__292__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__292__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__290__id, this->__Vtask_uvm_report_warning__290__message, __Vtask_uvm_report_warning__290__verbosity, this->__Vtask_uvm_report_warning__290__filename, __Vtask_uvm_report_warning__290__line, this->__Vtask_uvm_report_warning__290__context_name, (IData)(__Vtask_uvm_report_warning__290__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[441]);
                    ++(vlSymsp->__Vcoverage[23179]);
                } else {
                    ++(vlSymsp->__Vcoverage[23180]);
                }
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1402)->__PVT__path = 0U;
                ++(vlSymsp->__Vcoverage[23185]);
            } else if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1404)
                        ->__PVT__map)) {
                this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __VlefCall_8__get_default_map);
                if ((VlNull{} != __VlefCall_8__get_default_map)) {
                    this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __VlefCall_9__get_default_map);
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1406)->__PVT__map 
                        = __VlefCall_9__get_default_map;
                    ++(vlSymsp->__Vcoverage[23181]);
                } else {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_10__backdoor);
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1408)->__PVT__map 
                        = __VlefCall_10__backdoor;
                    ++(vlSymsp->__Vcoverage[23182]);
                }
                ++(vlSymsp->__Vcoverage[23183]);
            } else {
                ++(vlSymsp->__Vcoverage[23184]);
            }
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_11__get_backdoor);
            if (((VlNull{} == __VlefCall_11__get_backdoor) 
                 && (1U & (~ (IData)(__VExpr_ha843869c__0))))) {
                ++(vlSymsp->__Vcoverage[23186]);
            }
            if (__VExpr_ha843869c__0) {
                ++(vlSymsp->__Vcoverage[23187]);
            }
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_12__get_backdoor);
            if ((VlNull{} != __VlefCall_12__get_backdoor)) {
                ++(vlSymsp->__Vcoverage[23188]);
            }
            ++(vlSymsp->__Vcoverage[23189]);
        } else {
            ++(vlSymsp->__Vcoverage[23190]);
        }
        if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1413)
             ->__PVT__path)) {
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1415)
                                            ->__PVT__map, __VlefCall_13__get_local_map);
            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1415)->__PVT__local_map 
                = __VlefCall_13__get_local_map;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1417)
                 ->__PVT__local_map)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_14__get_type_name);
                this->__Vfunc_uvm_report_enabled__301__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_14__get_type_name);
                __Vfunc_uvm_report_enabled__301__severity = 2U;
                __Vfunc_uvm_report_enabled__301__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__302__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__302__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__303__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__303__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__301__verbosity, (IData)(__Vfunc_uvm_report_enabled__301__severity), this->__Vfunc_uvm_report_enabled__301__id, __VlefCall_15__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[437]);
                if ((0U != __VlefCall_15__uvm_report_enabled)) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_16__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1420)
                                  ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1420)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    __Vtask_uvm_report_error__307__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__307__context_name = ""s;
                    __Vtask_uvm_report_error__307__line = 0x0000058cU;
                    this->__Vtask_uvm_report_error__307__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__307__verbosity = 0U;
                    this->__Vtask_uvm_report_error__307__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, __VlefCall_17__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__307__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_16__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__308__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__308__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__309__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__309__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__307__id, this->__Vtask_uvm_report_error__307__message, __Vtask_uvm_report_error__307__verbosity, this->__Vtask_uvm_report_error__307__filename, __Vtask_uvm_report_error__307__line, this->__Vtask_uvm_report_error__307__context_name, (IData)(__Vtask_uvm_report_error__307__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[442]);
                    ++(vlSymsp->__Vcoverage[23191]);
                } else {
                    ++(vlSymsp->__Vcoverage[23192]);
                }
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1421)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[23194]);
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1425)
                          ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1425)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
            if ((VlNull{} == VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1427)
                 ->__PVT__frontdoor)) {
                if (VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1429)
                    ->__PVT__unmapped) {
                    this->__Vfunc_uvm_report_enabled__312__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__312__severity = 2U;
                    __Vfunc_uvm_report_enabled__312__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__313__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__313__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__314__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__314__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__312__verbosity, (IData)(__Vfunc_uvm_report_enabled__312__severity), this->__Vfunc_uvm_report_enabled__312__id, __VlefCall_18__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_18__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_19__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1432)
                                      ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1432)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                        __Vtask_uvm_report_error__318__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__318__context_name = ""s;
                        __Vtask_uvm_report_error__318__line = 0x00000598U;
                        this->__Vtask_uvm_report_error__318__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__318__verbosity = 0U;
                        this->__Vtask_uvm_report_error__318__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_19__get_full_name), "' unmapped in map '"s), __VlefCall_20__get_full_name), "' and does not have a user-defined frontdoor"s));
                        this->__Vtask_uvm_report_error__318__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__319__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__319__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__320__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__320__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__318__id, this->__Vtask_uvm_report_error__318__message, __Vtask_uvm_report_error__318__verbosity, this->__Vtask_uvm_report_error__318__filename, __Vtask_uvm_report_error__318__line, this->__Vtask_uvm_report_error__318__context_name, (IData)(__Vtask_uvm_report_error__318__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[442]);
                        ++(vlSymsp->__Vcoverage[23195]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23196]);
                    }
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1433)->__PVT__status = 1U;
                    Xcheck_accessX__Vfuncrtn = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[23198]);
                }
                if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1437)
                               ->__PVT__value.size())) {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_21__get_n_bits);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1438)
                                  ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1438)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_22__get_n_bytes);
                    if ((__VlefCall_21__get_n_bits 
                         > VL_SHIFTL_III(32,32,32, __VlefCall_22__get_n_bytes, 3U))) {
                        this->__Vfunc_uvm_report_enabled__324__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__324__severity = 2U;
                        __Vfunc_uvm_report_enabled__324__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__325__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__325__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__326__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__326__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__324__verbosity, (IData)(__Vfunc_uvm_report_enabled__324__severity), this->__Vfunc_uvm_report_enabled__324__id, __VlefCall_23__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[437]);
                        if ((0U != __VlefCall_23__uvm_report_enabled)) {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_24__get_n_bits);
                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1441)
                                          ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1441)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_25__get_n_bytes);
                            __Vtask_uvm_report_error__330__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__330__context_name = ""s;
                            __Vtask_uvm_report_error__330__line = 0x000005a1U;
                            this->__Vtask_uvm_report_error__330__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__330__verbosity = 0U;
                            this->__Vtask_uvm_report_error__330__message 
                                = VL_SFORMATF_N_NX("Cannot burst a %0#-bit memory through a narrower data path (%0# bytes)",0,
                                                   32,
                                                   __VlefCall_24__get_n_bits,
                                                   32,
                                                   VL_SHIFTL_III(32,32,32, __VlefCall_25__get_n_bytes, 3U)) ;
                            this->__Vtask_uvm_report_error__330__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__331__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__331__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__332__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__332__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__330__id, this->__Vtask_uvm_report_error__330__message, __Vtask_uvm_report_error__330__verbosity, this->__Vtask_uvm_report_error__330__filename, __Vtask_uvm_report_error__330__line, this->__Vtask_uvm_report_error__330__context_name, (IData)(__Vtask_uvm_report_error__330__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[442]);
                            ++(vlSymsp->__Vcoverage[23199]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23200]);
                        }
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1442)->__PVT__status = 1U;
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[23202]);
                    }
                    if (((VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1445)
                          ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1445)
                                                            ->__PVT__value.size()))) 
                         > this->__PVT__m_size)) {
                        this->__Vfunc_uvm_report_enabled__334__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__334__severity = 2U;
                        __Vfunc_uvm_report_enabled__334__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__335__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__335__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__336__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__336__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__334__verbosity, (IData)(__Vfunc_uvm_report_enabled__334__severity), this->__Vfunc_uvm_report_enabled__334__id, __VlefCall_26__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[437]);
                        if ((0U != __VlefCall_26__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__338__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__338__context_name = ""s;
                            __Vtask_uvm_report_error__338__line = 0x000005a8U;
                            this->__Vtask_uvm_report_error__338__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__338__verbosity = 0U;
                            this->__Vtask_uvm_report_error__338__message 
                                = VL_SFORMATF_N_NX("Burst of size 'd%0d starting at offset 'd%0# exceeds size of memory, 'd%0#",0,
                                                   32,
                                                   VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1448)
                                                   ->__PVT__value.size(),
                                                   64,
                                                   VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1448)
                                                   ->__PVT__offset,
                                                   64,
                                                   this->__PVT__m_size) ;
                            this->__Vtask_uvm_report_error__338__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__339__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__339__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__340__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__340__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__338__id, this->__Vtask_uvm_report_error__338__message, __Vtask_uvm_report_error__338__verbosity, this->__Vtask_uvm_report_error__338__filename, __Vtask_uvm_report_error__338__line, this->__Vtask_uvm_report_error__338__context_name, (IData)(__Vtask_uvm_report_error__338__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[442]);
                            ++(vlSymsp->__Vcoverage[23203]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23204]);
                        }
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[23206]);
                    }
                    ++(vlSymsp->__Vcoverage[23207]);
                } else {
                    ++(vlSymsp->__Vcoverage[23208]);
                }
                ++(vlSymsp->__Vcoverage[23209]);
            } else {
                ++(vlSymsp->__Vcoverage[23210]);
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1454)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1455)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1455)
                    ->__PVT__local_map;
                ++(vlSymsp->__Vcoverage[23211]);
            } else {
                ++(vlSymsp->__Vcoverage[23212]);
            }
            ++(vlSymsp->__Vcoverage[23213]);
        } else {
            ++(vlSymsp->__Vcoverage[23214]);
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23215]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__344__verbosity;
    __Vfunc_uvm_report_enabled__344__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__344__severity;
    __Vfunc_uvm_report_enabled__344__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__345__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__346__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__349__verbosity;
    __Vtask_uvm_report_error__349__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__349__line;
    __Vtask_uvm_report_error__349__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__349__report_enabled_checked;
    __Vtask_uvm_report_error__349__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__350__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__351__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__verbosity;
    __Vfunc_uvm_report_enabled__357__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__357__severity;
    __Vfunc_uvm_report_enabled__357__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__358__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__359__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__362__verbosity;
    __Vtask_uvm_report_info__362__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__362__line;
    __Vtask_uvm_report_info__362__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__362__report_enabled_checked;
    __Vtask_uvm_report_info__362__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__363__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__364__Vfuncout;
    // Body
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    {
        status = 0U;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            this->__Vfunc_uvm_report_enabled__344__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__344__severity = 2U;
            __Vfunc_uvm_report_enabled__344__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__345__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__345__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__346__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__346__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__344__verbosity, (IData)(__Vfunc_uvm_report_enabled__344__severity), this->__Vfunc_uvm_report_enabled__344__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__349__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__349__context_name = ""s;
                __Vtask_uvm_report_error__349__line = 0x000005ccU;
                this->__Vtask_uvm_report_error__349__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__349__verbosity = 0U;
                this->__Vtask_uvm_report_error__349__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__349__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__350__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__350__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__351__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__351__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__349__id, this->__Vtask_uvm_report_error__349__message, __Vtask_uvm_report_error__349__verbosity, this->__Vtask_uvm_report_error__349__filename, __Vtask_uvm_report_error__349__line, this->__Vtask_uvm_report_error__349__context_name, (IData)(__Vtask_uvm_report_error__349__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[23216]);
            } else {
                ++(vlSymsp->__Vcoverage[23217]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23219]);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1491)->__PVT__element 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1492)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1493)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1494)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1495)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1496)->__PVT__value.atWrite(0U) 
            = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                        - 1ULL));
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1497)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1498)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1499)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1500)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1501)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1504)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
            ++(vlSymsp->__Vcoverage[23220]);
        } else {
            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
            ++(vlSymsp->__Vcoverage[23221]);
        }
        status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1508)
            ->__PVT__status;
        this->__Vfunc_uvm_report_enabled__357__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__357__severity = 0U;
        __Vfunc_uvm_report_enabled__357__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__358__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__358__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__359__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__359__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__357__verbosity, (IData)(__Vfunc_uvm_report_enabled__357__severity), this->__Vfunc_uvm_report_enabled__357__id, __VlefCall_5__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__362__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__362__context_name = ""s;
            __Vtask_uvm_report_info__362__line = 0x000005e7U;
            this->__Vtask_uvm_report_info__362__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__362__verbosity = 0x0000012cU;
            this->__Vtask_uvm_report_info__362__message 
                = VL_SFORMATF_N_NX("Poked memory '%@[%0#]' with value 'h%x",0,
                                   -1,&(__VlefCall_6__get_full_name),
                                   64,offset,64,value) ;
            this->__Vtask_uvm_report_info__362__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__363__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__363__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__364__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__364__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__362__id, this->__Vtask_uvm_report_info__362__message, __Vtask_uvm_report_info__362__verbosity, this->__Vtask_uvm_report_info__362__filename, __Vtask_uvm_report_info__362__line, this->__Vtask_uvm_report_info__362__context_name, (IData)(__Vtask_uvm_report_info__362__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[23222]);
        } else {
            ++(vlSymsp->__Vcoverage[23223]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23224]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__368__verbosity;
    __Vfunc_uvm_report_enabled__368__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__368__severity;
    __Vfunc_uvm_report_enabled__368__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__369__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__370__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__373__verbosity;
    __Vtask_uvm_report_error__373__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__373__line;
    __Vtask_uvm_report_error__373__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__373__report_enabled_checked;
    __Vtask_uvm_report_error__373__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__374__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__375__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__381__verbosity;
    __Vfunc_uvm_report_enabled__381__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__381__severity;
    __Vfunc_uvm_report_enabled__381__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__382__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__383__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__386__verbosity;
    __Vtask_uvm_report_info__386__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__386__line;
    __Vtask_uvm_report_info__386__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__386__report_enabled_checked;
    __Vtask_uvm_report_info__386__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__387__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__388__Vfuncout;
    // Body
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        status = 0U;
        value = 0ULL;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            this->__Vfunc_uvm_report_enabled__368__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__368__severity = 2U;
            __Vfunc_uvm_report_enabled__368__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__369__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__369__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__370__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__370__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__368__verbosity, (IData)(__Vfunc_uvm_report_enabled__368__severity), this->__Vfunc_uvm_report_enabled__368__id, __VlefCall_2__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__373__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__373__context_name = ""s;
                __Vtask_uvm_report_error__373__line = 0x000005feU;
                this->__Vtask_uvm_report_error__373__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__373__verbosity = 0U;
                this->__Vtask_uvm_report_error__373__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__373__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__374__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__374__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__375__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__375__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__373__id, this->__Vtask_uvm_report_error__373__message, __Vtask_uvm_report_error__373__verbosity, this->__Vtask_uvm_report_error__373__filename, __Vtask_uvm_report_error__373__line, this->__Vtask_uvm_report_error__373__context_name, (IData)(__Vtask_uvm_report_error__373__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[23225]);
            } else {
                ++(vlSymsp->__Vcoverage[23226]);
            }
            status = 1U;
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23228]);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1541)->__PVT__element 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1542)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1543)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1544)->__PVT__kind = 0U;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1545)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1546)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1547)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1548)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1549)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1550)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1553)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
            ++(vlSymsp->__Vcoverage[23229]);
        } else {
            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
            ++(vlSymsp->__Vcoverage[23230]);
        }
        status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1557)
            ->__PVT__status;
        value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1558)
            ->__PVT__value.at(0U);
        this->__Vfunc_uvm_report_enabled__381__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__381__severity = 0U;
        __Vfunc_uvm_report_enabled__381__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__382__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__382__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__383__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__383__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__381__verbosity, (IData)(__Vfunc_uvm_report_enabled__381__severity), this->__Vfunc_uvm_report_enabled__381__id, __VlefCall_5__uvm_report_enabled);
        ++(vlSymsp->__Vcoverage[437]);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__386__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__386__context_name = ""s;
            __Vtask_uvm_report_info__386__line = 0x00000619U;
            this->__Vtask_uvm_report_info__386__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__386__verbosity = 0x0000012cU;
            this->__Vtask_uvm_report_info__386__message 
                = VL_SFORMATF_N_NX("Peeked memory '%@[%0#]' has value 'h%x",0,
                                   -1,&(__VlefCall_6__get_full_name),
                                   64,offset,64,value) ;
            this->__Vtask_uvm_report_info__386__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__387__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__387__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__388__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__388__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__386__id, this->__Vtask_uvm_report_info__386__message, __Vtask_uvm_report_info__386__verbosity, this->__Vtask_uvm_report_info__386__filename, __Vtask_uvm_report_info__386__line, this->__Vtask_uvm_report_info__386__context_name, (IData)(__Vtask_uvm_report_info__386__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[440]);
            ++(vlSymsp->__Vcoverage[23231]);
        } else {
            ++(vlSymsp->__Vcoverage[23232]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23233]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__391__verbosity;
    __Vfunc_uvm_report_enabled__391__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__391__severity;
    __Vfunc_uvm_report_enabled__391__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__392__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__393__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__397__verbosity;
    __Vtask_uvm_report_error__397__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__397__line;
    __Vtask_uvm_report_error__397__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__397__report_enabled_checked;
    __Vtask_uvm_report_error__397__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__398__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__399__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            this->__Vfunc_uvm_report_enabled__391__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__391__severity = 2U;
            __Vfunc_uvm_report_enabled__391__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__392__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__392__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__393__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__393__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__391__verbosity, (IData)(__Vfunc_uvm_report_enabled__391__severity), this->__Vfunc_uvm_report_enabled__391__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1583)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__397__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__397__context_name = ""s;
                __Vtask_uvm_report_error__397__line = 0x0000062fU;
                this->__Vtask_uvm_report_error__397__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__397__verbosity = 0U;
                this->__Vtask_uvm_report_error__397__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' not found in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__397__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__398__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__398__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__399__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__399__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__397__id, this->__Vtask_uvm_report_error__397__message, __Vtask_uvm_report_error__397__verbosity, this->__Vtask_uvm_report_error__397__filename, __Vtask_uvm_report_error__397__line, this->__Vtask_uvm_report_error__397__context_name, (IData)(__Vtask_uvm_report_error__397__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[23234]);
            } else {
                ++(vlSymsp->__Vcoverage[23235]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23237]);
        }
        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1587)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1588)->__PVT__frontdoor 
            = ftdr;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23238]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__403__verbosity;
    __Vfunc_uvm_report_enabled__403__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__403__severity;
    __Vfunc_uvm_report_enabled__403__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__404__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__405__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__409__verbosity;
    __Vtask_uvm_report_error__409__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__409__line;
    __Vtask_uvm_report_error__409__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__409__report_enabled_checked;
    __Vtask_uvm_report_error__409__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__410__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__411__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
        if ((VlNull{} == map)) {
            this->__Vfunc_uvm_report_enabled__403__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__403__severity = 2U;
            __Vfunc_uvm_report_enabled__403__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__404__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__405__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__405__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__403__verbosity, (IData)(__Vfunc_uvm_report_enabled__403__severity), this->__Vfunc_uvm_report_enabled__403__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1602)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__409__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__409__context_name = ""s;
                __Vtask_uvm_report_error__409__line = 0x00000642U;
                this->__Vtask_uvm_report_error__409__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__409__verbosity = 0U;
                this->__Vtask_uvm_report_error__409__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' not found in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__409__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__410__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__410__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__411__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__411__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__409__id, this->__Vtask_uvm_report_error__409__message, __Vtask_uvm_report_error__409__verbosity, this->__Vtask_uvm_report_error__409__filename, __Vtask_uvm_report_error__409__line, this->__Vtask_uvm_report_error__409__context_name, (IData)(__Vtask_uvm_report_error__409__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[23239]);
            } else {
                ++(vlSymsp->__Vcoverage[23240]);
            }
            get_frontdoor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23242]);
        }
        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1606)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1607)
            ->__PVT__frontdoor;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23243]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    this->__PVT__m_backdoor = bkdr;
    ++(vlSymsp->__Vcoverage[23244]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk459__DOT__blk;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk459__DOT__bkdr;
    if (inherited) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk459__DOT__blk);
        {
            while ((VlNull{} != unnamedblk459__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk459__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1635)->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk459__DOT__bkdr);
                if ((VlNull{} != unnamedblk459__DOT__bkdr)) {
                    this->__PVT__m_backdoor = unnamedblk459__DOT__bkdr;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[23246]);
                }
                VL_NULL_CHECK(unnamedblk459__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1640)->__VnoInFunc_get_parent(vlSymsp, unnamedblk459__DOT__blk);
                ++(vlSymsp->__Vcoverage[23247]);
            }
            __Vlabel0: ;
        }
        ++(vlSymsp->__Vcoverage[23248]);
    } else {
        ++(vlSymsp->__Vcoverage[23249]);
    }
    get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
    ++(vlSymsp->__Vcoverage[23250]);
}

extern const VlWide<32>/*1023:0*/ Vtb_rng__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<32>/*1023:0*/ Vtb_rng__ConstPool__CONST_h2ae7f32a_0;

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__418__verbosity;
    __Vfunc_uvm_report_enabled__418__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__418__severity;
    __Vfunc_uvm_report_enabled__418__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__419__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__420__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__422__verbosity;
    __Vtask_uvm_report_info__422__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__422__line;
    __Vtask_uvm_report_info__422__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__422__report_enabled_checked;
    __Vtask_uvm_report_info__422__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__423__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__424__Vfuncout;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__426__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__426__value);
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__428__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__428__value);
    IData/*31:0*/ __Vfunc_uvm_report_enabled__430__verbosity;
    __Vfunc_uvm_report_enabled__430__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__430__severity;
    __Vfunc_uvm_report_enabled__430__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__431__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__432__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__435__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i;
    __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i = 0;
    Vtb_rng_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__unnamedblk267__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__436__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i;
    __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i = 0;
    Vtb_rng_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__unnamedblk267__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__437__verbosity;
    __Vtask_uvm_report_error__437__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__437__line;
    __Vtask_uvm_report_error__437__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__437__report_enabled_checked;
    __Vtask_uvm_report_error__437__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__438__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__439__Vfuncout;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    // Body
    std::string __VlefCall_6__uvm_hdl_concat2string;
    std::string __VlefCall_5__uvm_hdl_concat2string;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_hdl_read;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk460__DOT__mem_idx;
    unnamedblk460__DOT__mem_idx = 0;
    std::string unnamedblk460__DOT__unnamedblk461__DOT__idx;
    IData/*31:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i;
    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j;
    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j = 0;
    std::string unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__hdl_path;
    QData/*63:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice;
    IData/*31:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k;
    IData/*31:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    VlWide<32>/*1023:0*/ val;
    CData/*0:0*/ ok;
    {
        backdoor_read_func__Vfuncrtn = 0U;
        paths.clear();
        VL_ZERO_W(1024, val);
        ok = 1U;
        this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                            VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1656)
                                                               ->__PVT__bd_kind), "."s);
        unnamedblk460__DOT__mem_idx = 0U;
        while (VL_LTS_III(32, unnamedblk460__DOT__mem_idx, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1658)
                          ->__PVT__value.size())) {
            unnamedblk460__DOT__unnamedblk461__DOT__idx = ""s;
            unnamedblk460__DOT__unnamedblk461__DOT__idx 
                = VL_SFORMATF_N_NX("%0d",0,32,((IData)(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1660)
                                                       ->__PVT__offset) 
                                               + unnamedblk460__DOT__mem_idx)) ;
            unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i, paths.size())) {
                unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat 
                    = paths.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i);
                VL_ASSIGN_W(1024, val, Vtb_rng__ConstPool__CONST_hd6b7ba52_0);
                unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j, VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1664)
                                  ->__PVT__slices.size())) {
                    {
                        unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__hdl_path 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1665)
                                                                           ->__PVT__slices.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j)
                                                                           .__PVT__path, "["s), unnamedblk460__DOT__unnamedblk461__DOT__idx), "]"s);
                        this->__Vfunc_uvm_report_enabled__418__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__418__severity = 0U;
                        __Vfunc_uvm_report_enabled__418__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__419__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__419__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__420__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__420__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__418__verbosity, (IData)(__Vfunc_uvm_report_enabled__418__severity), this->__Vfunc_uvm_report_enabled__418__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[437]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            __Vtask_uvm_report_info__422__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_info__422__context_name = ""s;
                            __Vtask_uvm_report_info__422__line = 0x00000683U;
                            this->__Vtask_uvm_report_info__422__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_info__422__verbosity = 0x000001f4U;
                            this->__Vtask_uvm_report_info__422__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("backdoor_read from "s, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__hdl_path));
                            this->__Vtask_uvm_report_info__422__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__423__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__423__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__424__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__424__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__422__id, this->__Vtask_uvm_report_info__422__message, __Vtask_uvm_report_info__422__verbosity, this->__Vtask_uvm_report_info__422__filename, __Vtask_uvm_report_info__422__line, this->__Vtask_uvm_report_info__422__context_name, (IData)(__Vtask_uvm_report_info__422__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[440]);
                            ++(vlSymsp->__Vcoverage[23251]);
                        } else {
                            ++(vlSymsp->__Vcoverage[23252]);
                        }
                        if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1669)
                                       ->__PVT__slices.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j)
                                       .__PVT__offset)) {
                            VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__426__value);
                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                            __VlefCall_1__uvm_hdl_read = 0U;
                            ++(vlSymsp->__Vcoverage[247]);
                            val[0U] = __Vfunc_uvm_hdl_read__426__value[0U];
                            val[1U] = __Vfunc_uvm_hdl_read__426__value[1U];
                            val[2U] = __Vfunc_uvm_hdl_read__426__value[2U];
                            val[3U] = __Vfunc_uvm_hdl_read__426__value[3U];
                            val[4U] = __Vfunc_uvm_hdl_read__426__value[4U];
                            val[5U] = __Vfunc_uvm_hdl_read__426__value[5U];
                            val[6U] = __Vfunc_uvm_hdl_read__426__value[6U];
                            val[7U] = __Vfunc_uvm_hdl_read__426__value[7U];
                            val[8U] = __Vfunc_uvm_hdl_read__426__value[8U];
                            val[9U] = __Vfunc_uvm_hdl_read__426__value[9U];
                            val[10U] = __Vfunc_uvm_hdl_read__426__value[10U];
                            val[11U] = __Vfunc_uvm_hdl_read__426__value[11U];
                            val[12U] = __Vfunc_uvm_hdl_read__426__value[12U];
                            val[13U] = __Vfunc_uvm_hdl_read__426__value[13U];
                            val[14U] = __Vfunc_uvm_hdl_read__426__value[14U];
                            val[15U] = __Vfunc_uvm_hdl_read__426__value[15U];
                            val[16U] = __Vfunc_uvm_hdl_read__426__value[16U];
                            val[17U] = __Vfunc_uvm_hdl_read__426__value[17U];
                            val[18U] = __Vfunc_uvm_hdl_read__426__value[18U];
                            val[19U] = __Vfunc_uvm_hdl_read__426__value[19U];
                            val[20U] = __Vfunc_uvm_hdl_read__426__value[20U];
                            val[21U] = __Vfunc_uvm_hdl_read__426__value[21U];
                            val[22U] = __Vfunc_uvm_hdl_read__426__value[22U];
                            val[23U] = __Vfunc_uvm_hdl_read__426__value[23U];
                            val[24U] = __Vfunc_uvm_hdl_read__426__value[24U];
                            val[25U] = __Vfunc_uvm_hdl_read__426__value[25U];
                            val[26U] = __Vfunc_uvm_hdl_read__426__value[26U];
                            val[27U] = __Vfunc_uvm_hdl_read__426__value[27U];
                            val[28U] = __Vfunc_uvm_hdl_read__426__value[28U];
                            val[29U] = __Vfunc_uvm_hdl_read__426__value[29U];
                            val[30U] = __Vfunc_uvm_hdl_read__426__value[30U];
                            val[31U] = __Vfunc_uvm_hdl_read__426__value[31U];
                            ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_read);
                            goto __Vlabel1;
                        } else {
                            ++(vlSymsp->__Vcoverage[23254]);
                        }
                        unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice = 0ULL;
                        unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k 
                            = VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1675)
                            ->__PVT__slices.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j)
                            .__PVT__offset;
                        VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__428__value);
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                        __VlefCall_2__uvm_hdl_read = 0U;
                        ++(vlSymsp->__Vcoverage[247]);
                        unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice 
                            = (((QData)((IData)(__Vfunc_uvm_hdl_read__428__value[1U])) 
                                << 0x00000020U) | (QData)((IData)(__Vfunc_uvm_hdl_read__428__value[0U])));
                        ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_read);
                        unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0 
                            = VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1677)
                            ->__PVT__slices.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j)
                            .__PVT__size;
                        while (VL_LTS_III(32, 0U, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                            __Vincrement1 = unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k;
                            unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k 
                                = ((IData)(1U) + unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k);
                            val[(0x0000001fU & (__Vincrement1 
                                                >> 5U))] 
                                = (((~ ((IData)(1U) 
                                        << (0x0000001fU 
                                            & __Vincrement1))) 
                                    & val[(0x0000001fU 
                                           & (__Vincrement1 
                                              >> 5U))]) 
                                   | ((1U & (IData)(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice)) 
                                      << (0x0000001fU 
                                          & __Vincrement1)));
                            unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice 
                                = VL_SHIFTR_QQI(64,64,32, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice, 1U);
                            unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                = (unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                   - (IData)(1U));
                            ++(vlSymsp->__Vcoverage[23255]);
                        }
                        __Vlabel1: ;
                    }
                    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j 
                        = ((IData)(1U) + unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j);
                    ++(vlSymsp->__Vcoverage[23256]);
                }
                VL_SHIFTL_WWI(1024,1024,32, __Vtemp_2, Vtb_rng__ConstPool__CONST_h2ae7f32a_0, this->__PVT__m_n_bits);
                VL_SUB_W(32, __Vtemp_3, __Vtemp_2, Vtb_rng__ConstPool__CONST_h2ae7f32a_0);
                val[0U] = (val[0U] & __Vtemp_3[0U]);
                val[1U] = (val[1U] & __Vtemp_3[1U]);
                val[2U] = (val[2U] & __Vtemp_3[2U]);
                val[3U] = (val[3U] & __Vtemp_3[3U]);
                val[4U] = (val[4U] & __Vtemp_3[4U]);
                val[5U] = (val[5U] & __Vtemp_3[5U]);
                val[6U] = (val[6U] & __Vtemp_3[6U]);
                val[7U] = (val[7U] & __Vtemp_3[7U]);
                val[8U] = (val[8U] & __Vtemp_3[8U]);
                val[9U] = (val[9U] & __Vtemp_3[9U]);
                val[10U] = (val[10U] & __Vtemp_3[10U]);
                val[11U] = (val[11U] & __Vtemp_3[11U]);
                val[12U] = (val[12U] & __Vtemp_3[12U]);
                val[13U] = (val[13U] & __Vtemp_3[13U]);
                val[14U] = (val[14U] & __Vtemp_3[14U]);
                val[15U] = (val[15U] & __Vtemp_3[15U]);
                val[16U] = (val[16U] & __Vtemp_3[16U]);
                val[17U] = (val[17U] & __Vtemp_3[17U]);
                val[18U] = (val[18U] & __Vtemp_3[18U]);
                val[19U] = (val[19U] & __Vtemp_3[19U]);
                val[20U] = (val[20U] & __Vtemp_3[20U]);
                val[21U] = (val[21U] & __Vtemp_3[21U]);
                val[22U] = (val[22U] & __Vtemp_3[22U]);
                val[23U] = (val[23U] & __Vtemp_3[23U]);
                val[24U] = (val[24U] & __Vtemp_3[24U]);
                val[25U] = (val[25U] & __Vtemp_3[25U]);
                val[26U] = (val[26U] & __Vtemp_3[26U]);
                val[27U] = (val[27U] & __Vtemp_3[27U]);
                val[28U] = (val[28U] & __Vtemp_3[28U]);
                val[29U] = (val[29U] & __Vtemp_3[29U]);
                val[30U] = (val[30U] & __Vtemp_3[30U]);
                val[31U] = (val[31U] & __Vtemp_3[31U]);
                if ((0U == unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i)) {
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1687)->__PVT__value.atWrite(unnamedblk460__DOT__mem_idx) 
                        = (((QData)((IData)(val[1U])) 
                            << 0x00000020U) | (QData)((IData)(val[0U])));
                    ++(vlSymsp->__Vcoverage[23257]);
                } else {
                    ++(vlSymsp->__Vcoverage[23258]);
                }
                if ((0U != ((((((((((((((((((((((((
                                                   ((((((((val[0U] 
                                                           ^ (IData)(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1689)
                                                                     ->__PVT__value.at(unnamedblk460__DOT__mem_idx))) 
                                                          | (val[1U] 
                                                             ^ (IData)(
                                                                       (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1689)
                                                                        ->__PVT__value.at(unnamedblk460__DOT__mem_idx) 
                                                                        >> 0x00000020U)))) 
                                                         | val[2U]) 
                                                        | val[3U]) 
                                                       | val[4U]) 
                                                      | val[5U]) 
                                                     | val[6U]) 
                                                    | val[7U]) 
                                                   | val[8U]) 
                                                  | val[9U]) 
                                                 | val[10U]) 
                                                | val[11U]) 
                                               | val[12U]) 
                                              | val[13U]) 
                                             | val[14U]) 
                                            | val[15U]) 
                                           | val[16U]) 
                                          | val[17U]) 
                                         | val[18U]) 
                                        | val[19U]) 
                                       | val[20U]) 
                                      | val[21U]) | val[22U]) 
                                    | val[23U]) | val[24U]) 
                                  | val[25U]) | val[26U]) 
                                | val[27U]) | val[28U]) 
                              | val[29U]) | val[30U]) 
                            | val[31U]))) {
                    this->__Vfunc_uvm_report_enabled__430__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__430__severity = 2U;
                    __Vfunc_uvm_report_enabled__430__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__431__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__431__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__432__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__432__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__430__verbosity, (IData)(__Vfunc_uvm_report_enabled__430__severity), this->__Vfunc_uvm_report_enabled__430__id, __VlefCall_3__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        __Vfunc_uvm_hdl_concat2string__435__concat 
                            = paths.at(0U);
                        __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i = 0U;
                        {
                            __VlefCall_5__uvm_hdl_concat2string = ""s;
                            this->__Vfunc_uvm_hdl_concat2string__435__image = "{"s;
                            if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__435__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                   ->__PVT__slices.size()) 
                                  && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__435__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                      ->__PVT__slices.at(0U)
                                      .__PVT__offset)) 
                                 && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__435__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                     ->__PVT__slices.at(0U)
                                     .__PVT__size))) {
                                __VlefCall_5__uvm_hdl_concat2string 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__435__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                    ->__PVT__slices.at(0U)
                                    .__PVT__path;
                                goto __Vlabel2;
                            } else {
                                ++(vlSymsp->__Vcoverage[493]);
                            }
                            __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i = 0U;
                            while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__435__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                              ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__unnamedblk267__DOT__slice 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__435__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i);
                                this->__Vfunc_uvm_hdl_concat2string__435__image 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__435__image, 
                                                                    VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                     .__PVT__path);
                                if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                .__PVT__offset)) {
                                    this->__Vfunc_uvm_hdl_concat2string__435__image 
                                        = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__435__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__size) );
                                    ++(vlSymsp->__Vcoverage[496]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[497]);
                                }
                                __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i);
                                ++(vlSymsp->__Vcoverage[498]);
                            }
                            this->__Vfunc_uvm_hdl_concat2string__435__image 
                                = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__435__image, "}"s);
                            __VlefCall_5__uvm_hdl_concat2string 
                                = this->__Vfunc_uvm_hdl_concat2string__435__image;
                            __Vlabel2: ;
                        }
                        if ((0U == __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i)) {
                            ++(vlSymsp->__Vcoverage[494]);
                        }
                        if ((0U != __Vfunc_uvm_hdl_concat2string__435__unnamedblk266__DOT__i)) {
                            ++(vlSymsp->__Vcoverage[495]);
                        }
                        ++(vlSymsp->__Vcoverage[499]);
                        __Vfunc_uvm_hdl_concat2string__436__concat 
                            = paths.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i);
                        __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i = 0U;
                        {
                            __VlefCall_6__uvm_hdl_concat2string = ""s;
                            this->__Vfunc_uvm_hdl_concat2string__436__image = "{"s;
                            if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__436__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                   ->__PVT__slices.size()) 
                                  && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__436__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                      ->__PVT__slices.at(0U)
                                      .__PVT__offset)) 
                                 && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__436__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                     ->__PVT__slices.at(0U)
                                     .__PVT__size))) {
                                __VlefCall_6__uvm_hdl_concat2string 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__436__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                    ->__PVT__slices.at(0U)
                                    .__PVT__path;
                                goto __Vlabel3;
                            } else {
                                ++(vlSymsp->__Vcoverage[493]);
                            }
                            __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i = 0U;
                            while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__436__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                              ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__unnamedblk267__DOT__slice 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__436__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i);
                                this->__Vfunc_uvm_hdl_concat2string__436__image 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__436__image, 
                                                                    VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                     .__PVT__path);
                                if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                .__PVT__offset)) {
                                    this->__Vfunc_uvm_hdl_concat2string__436__image 
                                        = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__436__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__size) );
                                    ++(vlSymsp->__Vcoverage[496]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[497]);
                                }
                                __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i);
                                ++(vlSymsp->__Vcoverage[498]);
                            }
                            this->__Vfunc_uvm_hdl_concat2string__436__image 
                                = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__436__image, "}"s);
                            __VlefCall_6__uvm_hdl_concat2string 
                                = this->__Vfunc_uvm_hdl_concat2string__436__image;
                            __Vlabel3: ;
                        }
                        if ((0U == __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i)) {
                            ++(vlSymsp->__Vcoverage[494]);
                        }
                        if ((0U != __Vfunc_uvm_hdl_concat2string__436__unnamedblk266__DOT__i)) {
                            ++(vlSymsp->__Vcoverage[495]);
                        }
                        ++(vlSymsp->__Vcoverage[499]);
                        __Vtask_uvm_report_error__437__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__437__context_name = ""s;
                        __Vtask_uvm_report_error__437__line = 0x0000069cU;
                        this->__Vtask_uvm_report_error__437__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__437__verbosity = 0U;
                        this->__Vtask_uvm_report_error__437__message 
                            = VL_SFORMATF_N_NX("Backdoor read of register %@ with multiple HDL copies: values are not the same: %0x at path '%@', and %0x at path '%@'. Returning first value.",0,
                                               -1,&(__VlefCall_4__get_full_name),
                                               64,VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1692)
                                               ->__PVT__value.at(unnamedblk460__DOT__mem_idx),
                                               -1,&(__VlefCall_5__uvm_hdl_concat2string),
                                               1024,
                                               val.data(),
                                               -1,&(__VlefCall_6__uvm_hdl_concat2string)) ;
                        this->__Vtask_uvm_report_error__437__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__438__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__438__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__439__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__439__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__437__id, this->__Vtask_uvm_report_error__437__message, __Vtask_uvm_report_error__437__verbosity, this->__Vtask_uvm_report_error__437__filename, __Vtask_uvm_report_error__437__line, this->__Vtask_uvm_report_error__437__context_name, (IData)(__Vtask_uvm_report_error__437__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[442]);
                        ++(vlSymsp->__Vcoverage[23259]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23260]);
                    }
                    backdoor_read_func__Vfuncrtn = 1U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[23262]);
                }
                unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i 
                    = ((IData)(1U) + unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i);
                ++(vlSymsp->__Vcoverage[23263]);
            }
            unnamedblk460__DOT__mem_idx = ((IData)(1U) 
                                           + unnamedblk460__DOT__mem_idx);
            ++(vlSymsp->__Vcoverage[23264]);
        }
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1698)->__PVT__status 
            = ((IData)(ok) ? 0U : 1U);
        backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1700)
            ->__PVT__status;
        __Vlabel0: ;
    }
    if (ok) {
        ++(vlSymsp->__Vcoverage[23265]);
    }
    if ((1U & (~ (IData)(ok)))) {
        ++(vlSymsp->__Vcoverage[23266]);
    }
    ++(vlSymsp->__Vcoverage[23267]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__backdoor_read_func;
    this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __VlefCall_0__backdoor_read_func);
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1707)->__PVT__status 
        = __VlefCall_0__backdoor_read_func;
    ++(vlSymsp->__Vcoverage[23268]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__443__verbosity;
    __Vfunc_uvm_report_enabled__443__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__443__severity;
    __Vfunc_uvm_report_enabled__443__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__444__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__445__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__447__verbosity;
    __Vtask_uvm_report_info__447__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__447__line;
    __Vtask_uvm_report_info__447__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__447__report_enabled_checked;
    __Vtask_uvm_report_info__447__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__448__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__449__Vfuncout;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ __VlefCall_2__uvm_hdl_deposit;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_deposit;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk467__DOT__mem_idx;
    unnamedblk467__DOT__mem_idx = 0;
    IData/*31:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j = 0;
    QData/*63:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    CData/*0:0*/ ok;
    paths.clear();
    ok = 1U;
    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1719)
                                                           ->__PVT__bd_kind), "."s);
    unnamedblk467__DOT__mem_idx = 0U;
    while (VL_LTS_III(32, unnamedblk467__DOT__mem_idx, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1721)
                      ->__PVT__value.size())) {
        unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i, paths.size())) {
            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat 
                = paths.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i);
            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j, VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1726)
                              ->__PVT__slices.size())) {
                {
                    this->__Vfunc_uvm_report_enabled__443__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__443__severity = 0U;
                    __Vfunc_uvm_report_enabled__443__verbosity = 0x000001f4U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__444__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__444__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__445__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__445__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__443__verbosity, (IData)(__Vfunc_uvm_report_enabled__443__severity), this->__Vfunc_uvm_report_enabled__443__id, __VlefCall_0__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[437]);
                    if ((0U != __VlefCall_0__uvm_report_enabled)) {
                        __Vtask_uvm_report_info__447__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__447__context_name = ""s;
                        __Vtask_uvm_report_info__447__line = 0x000006bfU;
                        this->__Vtask_uvm_report_info__447__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_info__447__verbosity = 0x000001f4U;
                        __Vtemp_1 = VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1727)
                            ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                            .__PVT__path;
                        this->__Vtask_uvm_report_info__447__message 
                            = VL_SFORMATF_N_NX("backdoor_write to %@ ",0,
                                               -1,&(__Vtemp_1)) ;
                        this->__Vtask_uvm_report_info__447__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__448__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__448__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__449__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__449__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__447__id, this->__Vtask_uvm_report_info__447__message, __Vtask_uvm_report_info__447__verbosity, this->__Vtask_uvm_report_info__447__filename, __Vtask_uvm_report_info__447__line, this->__Vtask_uvm_report_info__447__context_name, (IData)(__Vtask_uvm_report_info__447__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[440]);
                        ++(vlSymsp->__Vcoverage[23269]);
                    } else {
                        ++(vlSymsp->__Vcoverage[23270]);
                    }
                    if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1729)
                                   ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                                   .__PVT__offset)) {
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                        __VlefCall_1__uvm_hdl_deposit = 0U;
                        ++(vlSymsp->__Vcoverage[243]);
                        ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_deposit);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[23272]);
                    }
                    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice = 0ULL;
                    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice 
                        = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1735)
                                        ->__PVT__value.at(unnamedblk467__DOT__mem_idx), VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1735)
                                        ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                                        .__PVT__offset);
                    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice 
                        = (unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1736)
                                            ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                                            .__PVT__size) 
                              - 1ULL));
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                    __VlefCall_2__uvm_hdl_deposit = 0U;
                    ++(vlSymsp->__Vcoverage[243]);
                    ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_deposit);
                    __Vlabel0: ;
                }
                unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j 
                    = ((IData)(1U) + unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j);
                ++(vlSymsp->__Vcoverage[23273]);
            }
            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i 
                = ((IData)(1U) + unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i);
            ++(vlSymsp->__Vcoverage[23274]);
        }
        unnamedblk467__DOT__mem_idx = ((IData)(1U) 
                                       + unnamedblk467__DOT__mem_idx);
        ++(vlSymsp->__Vcoverage[23275]);
    }
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1742)->__PVT__status 
        = ((IData)(ok) ? 0U : 1U);
    if (ok) {
        ++(vlSymsp->__Vcoverage[23276]);
    }
    if ((1U & (~ (IData)(ok)))) {
        ++(vlSymsp->__Vcoverage[23277]);
    }
    ++(vlSymsp->__Vcoverage[23278]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__458__verbosity;
    __Vfunc_uvm_report_enabled__458__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__458__severity;
    __Vfunc_uvm_report_enabled__458__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__459__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__460__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__462__verbosity;
    __Vtask_uvm_report_warning__462__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__462__line;
    __Vtask_uvm_report_warning__462__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__462__report_enabled_checked;
    __Vtask_uvm_report_warning__462__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__463__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__464__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__exists;
    {
        if (("ALL"s == kind)) {
            this->__PVT__m_hdl_paths_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz213, vlProcess, vlSymsp, "hdl_paths"s);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[23280]);
        }
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1757)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            ++(vlSymsp->__Vcoverage[23281]);
        } else {
            ++(vlSymsp->__Vcoverage[23282]);
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1759)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            ++(vlSymsp->__Vcoverage[23286]);
        } else {
            this->__Vfunc_uvm_report_enabled__458__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__458__severity = 1U;
            __Vfunc_uvm_report_enabled__458__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__459__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__459__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__460__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__460__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__458__verbosity, (IData)(__Vfunc_uvm_report_enabled__458__severity), this->__Vfunc_uvm_report_enabled__458__id, __VlefCall_1__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__462__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__462__context_name = ""s;
                __Vtask_uvm_report_warning__462__line = 0x000006e0U;
                this->__Vtask_uvm_report_warning__462__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__462__verbosity = 0U;
                this->__Vtask_uvm_report_warning__462__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_warning__462__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__463__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__463__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__464__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__464__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__462__id, this->__Vtask_uvm_report_warning__462__message, __Vtask_uvm_report_warning__462__verbosity, this->__Vtask_uvm_report_warning__462__filename, __Vtask_uvm_report_warning__462__line, this->__Vtask_uvm_report_warning__462__context_name, (IData)(__Vtask_uvm_report_warning__462__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[441]);
                ++(vlSymsp->__Vcoverage[23283]);
            } else {
                ++(vlSymsp->__Vcoverage[23284]);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1764)->__VnoInFunc_delete(vlSymsp, kind);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23287]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<Vtb_rng_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212> paths;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1771)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    concat = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
    VL_NULL_CHECK(concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1774)->__VnoInFunc_set(vlSymsp, slices);
    VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1775)->__VnoInFunc_push_back(vlSymsp, concat);
    ++(vlSymsp->__Vcoverage[23288]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice(Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212> paths;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1786)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    __VlefLogOr_1 = first;
    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1789)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        __VlefLogOr_1 = (0U == __VlefCall_0__size);
    }
    if (__VlefLogOr_1) {
        concat = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
        VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1791)->__VnoInFunc_push_back(vlSymsp, concat);
        ++(vlSymsp->__Vcoverage[23289]);
    } else {
        VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1794)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
        VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1794)->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                (__VlefCall_2__size 
                                                                                - (IData)(1U)), concat);
        ++(vlSymsp->__Vcoverage[23290]);
    }
    VL_NULL_CHECK(concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1796)->__VnoInFunc_add_path(vlSymsp, name, offset, size);
    ++(vlSymsp->__Vcoverage[23291]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1804)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        ++(vlSymsp->__Vcoverage[23292]);
    } else {
        ++(vlSymsp->__Vcoverage[23293]);
    }
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1806)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
    ++(vlSymsp->__Vcoverage[23294]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__482__verbosity;
    __Vfunc_uvm_report_enabled__482__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__482__severity;
    __Vfunc_uvm_report_enabled__482__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__483__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__484__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__486__verbosity;
    __Vtask_uvm_report_error__486__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__486__line;
    __Vtask_uvm_report_error__486__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__486__report_enabled_checked;
    __Vtask_uvm_report_error__486__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__487__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__488__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk473__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk473__DOT__unnamedblk474__DOT__t;
    CData/*0:0*/ __VExpr_h156f7a35__0;
    __VExpr_h156f7a35__0 = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212> hdl_paths;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1818)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            ++(vlSymsp->__Vcoverage[23295]);
        } else {
            ++(vlSymsp->__Vcoverage[23296]);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VExpr_h156f7a35__0);
        if (__VExpr_h156f7a35__0) {
            ++(vlSymsp->__Vcoverage[23300]);
        } else {
            this->__Vfunc_uvm_report_enabled__482__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__482__severity = 2U;
            __Vfunc_uvm_report_enabled__482__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__483__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__483__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__484__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__484__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__482__verbosity, (IData)(__Vfunc_uvm_report_enabled__482__severity), this->__Vfunc_uvm_report_enabled__482__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__486__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__486__context_name = ""s;
                __Vtask_uvm_report_error__486__line = 0x0000071eU;
                this->__Vtask_uvm_report_error__486__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__486__verbosity = 0U;
                this->__Vtask_uvm_report_error__486__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_error__486__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__487__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__487__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__488__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__488__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__486__id, this->__Vtask_uvm_report_error__486__message, __Vtask_uvm_report_error__486__verbosity, this->__Vtask_uvm_report_error__486__filename, __Vtask_uvm_report_error__486__line, this->__Vtask_uvm_report_error__486__context_name, (IData)(__Vtask_uvm_report_error__486__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[23297]);
            } else {
                ++(vlSymsp->__Vcoverage[23298]);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1826)->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
        unnamedblk473__DOT__i = 0U;
        unnamedblk473__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1828)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk473__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1829)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk473__DOT__i, unnamedblk473__DOT__unnamedblk474__DOT__t);
            paths.push_back(unnamedblk473__DOT__unnamedblk474__DOT__t);
            unnamedblk473__DOT__i = ((IData)(1U) + unnamedblk473__DOT__i);
            ++(vlSymsp->__Vcoverage[23303]);
        }
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(__VExpr_h156f7a35__0)))) {
        ++(vlSymsp->__Vcoverage[23301]);
    }
    if (__VExpr_h156f7a35__0) {
        ++(vlSymsp->__Vcoverage[23302]);
    }
    ++(vlSymsp->__Vcoverage[23304]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__493__Vfuncout;
    __Vtask_first__493__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__494__Vfuncout;
    __Vtask_next__494__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_1__next;
    IData/*31:0*/ __VlefCall_0__first;
    std::string kind;
    {
        kind = ""s;
        kinds.clear();
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1841)->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__493__Vfuncout);
        __VlefCall_0__first = __Vtask_first__493__Vfuncout;
        if ((0U != __VlefCall_0__first)) {
            ++(vlSymsp->__Vcoverage[23306]);
        } else {
            goto __Vlabel0;
        }
        while (true) {
            kinds.push_back(kind);
            ++(vlSymsp->__Vcoverage[23307]);
            VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1845)->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__494__Vfuncout);
            __VlefCall_1__next = __Vtask_next__494__Vfuncout;
            if (!((0U != __VlefCall_1__next))) break;
            ++(vlSymsp->__Vcoverage[23308]);
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[23309]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__497__verbosity;
    __Vfunc_uvm_report_enabled__497__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__497__severity;
    __Vfunc_uvm_report_enabled__497__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__498__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__499__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__501__verbosity;
    __Vtask_uvm_report_error__501__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__501__line;
    __Vtask_uvm_report_error__501__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__501__report_enabled_checked;
    __Vtask_uvm_report_error__501__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__502__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__503__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212> unnamedblk475__DOT__hdl_paths;
    VlQueue<std::string> unnamedblk475__DOT__parent_paths;
    IData/*31:0*/ unnamedblk475__DOT__unnamedblk476__DOT__i;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j;
    unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t;
    IData/*31:0*/ unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k;
    unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k = 0;
    CData/*0:0*/ __VExpr_h156f7a35__0;
    __VExpr_h156f7a35__0 = 0;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1855)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
            ++(vlSymsp->__Vcoverage[23310]);
        } else {
            ++(vlSymsp->__Vcoverage[23311]);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VExpr_h156f7a35__0);
        if (__VExpr_h156f7a35__0) {
            ++(vlSymsp->__Vcoverage[23315]);
        } else {
            this->__Vfunc_uvm_report_enabled__497__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__497__severity = 2U;
            __Vfunc_uvm_report_enabled__497__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__498__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__498__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__499__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__499__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__497__verbosity, (IData)(__Vfunc_uvm_report_enabled__497__severity), this->__Vfunc_uvm_report_enabled__497__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[437]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__501__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__501__context_name = ""s;
                __Vtask_uvm_report_error__501__line = 0x00000743U;
                this->__Vtask_uvm_report_error__501__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__501__verbosity = 0U;
                this->__Vtask_uvm_report_error__501__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_error__501__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__502__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__502__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__503__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__503__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__501__id, this->__Vtask_uvm_report_error__501__message, __Vtask_uvm_report_error__501__verbosity, this->__Vtask_uvm_report_error__501__filename, __Vtask_uvm_report_error__501__line, this->__Vtask_uvm_report_error__501__context_name, (IData)(__Vtask_uvm_report_error__501__report_enabled_checked));
                ++(vlSymsp->__Vcoverage[442]);
                ++(vlSymsp->__Vcoverage[23312]);
            } else {
                ++(vlSymsp->__Vcoverage[23313]);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1864)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk475__DOT__hdl_paths);
        unnamedblk475__DOT__parent_paths.clear();
        unnamedblk475__DOT__parent_paths.atDefault().clear();
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1867)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk475__DOT__parent_paths, kind, separator);
        unnamedblk475__DOT__unnamedblk476__DOT__i = 0U;
        unnamedblk475__DOT__unnamedblk476__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk475__DOT__hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1869)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk475__DOT__unnamedblk476__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(unnamedblk475__DOT__hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1870)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk475__DOT__unnamedblk476__DOT__i, unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat);
            unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j, unnamedblk475__DOT__parent_paths.size())) {
                unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t 
                    = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k, VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1875)
                                  ->__PVT__slices.size())) {
                    if ((""s == VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1876)
                         ->__PVT__slices.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k)
                         .__PVT__path)) {
                        VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1877)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk475__DOT__parent_paths.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j)), 0xffffffffU, 0xffffffffU);
                        ++(vlSymsp->__Vcoverage[23318]);
                    } else {
                        VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1879)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk475__DOT__parent_paths.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j), separator), VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1879)
                                                                                ->__PVT__slices.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1880)
                                                                                ->__PVT__slices.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k)
                                                                                .__PVT__offset, VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1881)
                                                                                ->__PVT__slices.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k)
                                                                                .__PVT__size);
                        ++(vlSymsp->__Vcoverage[23319]);
                    }
                    unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k 
                        = ((IData)(1U) + unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k);
                    ++(vlSymsp->__Vcoverage[23320]);
                }
                paths.push_back(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t);
                unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j 
                    = ((IData)(1U) + unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j);
                ++(vlSymsp->__Vcoverage[23321]);
            }
            unnamedblk475__DOT__unnamedblk476__DOT__i 
                = ((IData)(1U) + unnamedblk475__DOT__unnamedblk476__DOT__i);
            ++(vlSymsp->__Vcoverage[23322]);
        }
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(__VExpr_h156f7a35__0)))) {
        ++(vlSymsp->__Vcoverage[23316]);
    }
    if (__VExpr_h156f7a35__0) {
        ++(vlSymsp->__Vcoverage[23317]);
    }
    ++(vlSymsp->__Vcoverage[23323]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__m_parent = parent;
    ++(vlSymsp->__Vcoverage[23324]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent\n"); );
    // Body
    this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[23325]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    std::string __VlefCall_9__get_access;
    QData/*63:0*/ __VlefCall_8__get_size;
    IData/*31:0*/ __VlefCall_7__get_n_bytes;
    std::string __VlefCall_6__get_full_name;
    QData/*63:0*/ __VlefCall_5__get_base_addr;
    CData/*0:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    QData/*63:0*/ __VlefCall_1__get_size;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk481__DOT__map;
    CData/*0:0*/ unnamedblk481__DOT__map__Vfirst;
    unnamedblk481__DOT__map__Vfirst = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk481__DOT__unnamedblk482__DOT__parent_map;
    IData/*31:0*/ unnamedblk481__DOT__unnamedblk482__DOT__offset;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map;
    IData/*31:0*/ unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__endian_name;
    convert2string__Vfuncrtn = ""s;
    std::string res_str;
    std::string prefix;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@Memory %@ -- %0#x%0# bits",0,
                  -1,&(prefix),-1,&(__VlefCall_0__get_full_name),
                  64,__VlefCall_1__get_size,32,__VlefCall_2__get_n_bits);
    if ((0U == this->__PVT__m_maps.size())) {
        convert2string__Vfuncrtn = VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s);
        ++(vlSymsp->__Vcoverage[23326]);
    } else {
        convert2string__Vfuncrtn = VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s);
        ++(vlSymsp->__Vcoverage[23327]);
    }
    __VlefExpr_3 = (0U != this->__PVT__m_maps.first(unnamedblk481__DOT__map));
    if (__VlefExpr_3) {
        unnamedblk481__DOT__map__Vfirst = 1U;
        while (true) {
            __VlefExpr_4 = unnamedblk481__DOT__map__Vfirst;
            if ((1U & (~ (IData)(__VlefExpr_4)))) {
                __VlefExpr_4 = (0U != this->__PVT__m_maps.next(unnamedblk481__DOT__map));
            }
            if (!(__VlefExpr_4)) break;
            unnamedblk481__DOT__map__Vfirst = 0U;
            unnamedblk481__DOT__unnamedblk482__DOT__parent_map 
                = unnamedblk481__DOT__map;
            unnamedblk481__DOT__unnamedblk482__DOT__offset = 0U;
            while ((VlNull{} != unnamedblk481__DOT__unnamedblk482__DOT__parent_map)) {
                unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map 
                    = unnamedblk481__DOT__unnamedblk482__DOT__parent_map;
                unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__endian_name = 0U;
                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1924)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk481__DOT__unnamedblk482__DOT__parent_map);
                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1925)->__VnoInFunc_get_endian(vlSymsp, 1U, unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__endian_name);
                if ((VlNull{} == unnamedblk481__DOT__unnamedblk482__DOT__parent_map)) {
                    VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1927)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_5__get_base_addr);
                } else {
                    VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1928)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, __VlefCall_5__get_base_addr);
                }
                unnamedblk481__DOT__unnamedblk482__DOT__offset 
                    = (IData)(__VlefCall_5__get_base_addr);
                prefix = VL_CONCATN_NNN(prefix, "  "s);
                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1931)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1931)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_7__get_n_bytes);
                this->__VnoInFunc_get_size(vlSymsp, __VlefCall_8__get_size);
                this->__VnoInFunc_get_access(vlProcess, vlSymsp, unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, __VlefCall_9__get_access);
                __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name89
                    [(7U & unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__endian_name)];
                VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                              ,"%@Mapped in '%@' -- buswidth %0# bytes, %@, offset 'h%0x, size 'h%0x, %@\n",0,
                              -1,&(prefix),-1,&(__VlefCall_6__get_full_name),
                              32,__VlefCall_7__get_n_bytes,
                              -1,&(__Vtemp_1),32,unnamedblk481__DOT__unnamedblk482__DOT__offset,
                              64,__VlefCall_8__get_size,
                              -1,&(__VlefCall_9__get_access));
                ++(vlSymsp->__Vcoverage[23328]);
            }
            ++(vlSymsp->__Vcoverage[23329]);
        }
        ++(vlSymsp->__Vcoverage[23330]);
    } else {
        ++(vlSymsp->__Vcoverage[23331]);
    }
    prefix = "  "s;
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,-1,
                          &(this->__PVT__m_fname),32,
                          this->__PVT__m_lineno);
            ++(vlSymsp->__Vcoverage[23332]);
        } else {
            ++(vlSymsp->__Vcoverage[23333]);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing read method"s);
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            ++(vlSymsp->__Vcoverage[23334]);
        }
        if ((0U == this->__PVT__m_lineno)) {
            ++(vlSymsp->__Vcoverage[23335]);
        }
        if ((1U & (~ (""s != this->__PVT__m_fname)))) {
            ++(vlSymsp->__Vcoverage[23336]);
        }
        ++(vlSymsp->__Vcoverage[23337]);
    } else {
        ++(vlSymsp->__Vcoverage[23338]);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,-1,
                          &(this->__PVT__m_fname),32,
                          this->__PVT__m_lineno);
            ++(vlSymsp->__Vcoverage[23339]);
        } else {
            ++(vlSymsp->__Vcoverage[23340]);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing write method"s);
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            ++(vlSymsp->__Vcoverage[23341]);
        }
        if ((0U == this->__PVT__m_lineno)) {
            ++(vlSymsp->__Vcoverage[23342]);
        }
        if ((1U & (~ (""s != this->__PVT__m_fname)))) {
            ++(vlSymsp->__Vcoverage[23343]);
        }
        ++(vlSymsp->__Vcoverage[23344]);
    } else {
        ++(vlSymsp->__Vcoverage[23345]);
    }
    ++(vlSymsp->__Vcoverage[23346]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print\n"); );
    // Body
    QData/*63:0*/ __VlefCall_1__get_size;
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1955)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "n_bits"s, (QData)((IData)(__VlefCall_0__get_n_bits)), 0x00000020U, 0x03000000U, 0x2eU, ""s);
    this->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1956)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "size"s, __VlefCall_1__get_size, 0x00000020U, 0x03000000U, 0x2eU, ""s);
    ++(vlSymsp->__Vcoverage[23347]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__529__verbosity;
    __Vfunc_uvm_report_enabled__529__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__529__severity;
    __Vfunc_uvm_report_enabled__529__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__530__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__531__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__529__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__529__severity = 3U;
    __Vfunc_uvm_report_enabled__529__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__530__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__530__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__531__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__531__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__529__verbosity, (IData)(__Vfunc_uvm_report_enabled__529__severity), this->__Vfunc_uvm_report_enabled__529__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel memories cannot be cloned"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x000007abU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[23348]);
    } else {
        ++(vlSymsp->__Vcoverage[23349]);
    }
    clone__Vfuncrtn = VlNull{};
    ++(vlSymsp->__Vcoverage[23350]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__534__verbosity;
    __Vfunc_uvm_report_enabled__534__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__534__severity;
    __Vfunc_uvm_report_enabled__534__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__535__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__536__Vfuncout;
    // Body
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__534__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__534__severity = 3U;
    __Vfunc_uvm_report_enabled__534__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__535__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__535__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__536__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__536__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__534__verbosity, (IData)(__Vfunc_uvm_report_enabled__534__severity), this->__Vfunc_uvm_report_enabled__534__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel memories cannot be copied"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x000007b2U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[23351]);
    } else {
        ++(vlSymsp->__Vcoverage[23352]);
    }
    ++(vlSymsp->__Vcoverage[23353]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__539__verbosity;
    __Vfunc_uvm_report_enabled__539__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__539__severity;
    __Vfunc_uvm_report_enabled__539__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__540__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__541__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__543__verbosity;
    __Vtask_uvm_report_warning__543__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__543__line;
    __Vtask_uvm_report_warning__543__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__543__report_enabled_checked;
    __Vtask_uvm_report_warning__543__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__544__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__545__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__539__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__539__severity = 1U;
    __Vfunc_uvm_report_enabled__539__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__540__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__540__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__541__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__541__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__539__verbosity, (IData)(__Vfunc_uvm_report_enabled__539__severity), this->__Vfunc_uvm_report_enabled__539__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__543__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__543__context_name = ""s;
        __Vtask_uvm_report_warning__543__line = 0x000007baU;
        this->__Vtask_uvm_report_warning__543__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__543__verbosity = 0U;
        this->__Vtask_uvm_report_warning__543__message = "RegModel memories cannot be compared"s;
        this->__Vtask_uvm_report_warning__543__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__544__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__544__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__545__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__545__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__543__id, this->__Vtask_uvm_report_warning__543__message, __Vtask_uvm_report_warning__543__verbosity, this->__Vtask_uvm_report_warning__543__filename, __Vtask_uvm_report_warning__543__line, this->__Vtask_uvm_report_warning__543__context_name, (IData)(__Vtask_uvm_report_warning__543__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[23354]);
    } else {
        ++(vlSymsp->__Vcoverage[23355]);
    }
    do_compare__Vfuncrtn = 0U;
    ++(vlSymsp->__Vcoverage[23356]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__547__verbosity;
    __Vfunc_uvm_report_enabled__547__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__547__severity;
    __Vfunc_uvm_report_enabled__547__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__548__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__549__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__551__verbosity;
    __Vtask_uvm_report_warning__551__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__551__line;
    __Vtask_uvm_report_warning__551__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__551__report_enabled_checked;
    __Vtask_uvm_report_warning__551__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__552__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__553__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__547__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__547__severity = 1U;
    __Vfunc_uvm_report_enabled__547__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__548__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__548__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__549__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__549__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__547__verbosity, (IData)(__Vfunc_uvm_report_enabled__547__severity), this->__Vfunc_uvm_report_enabled__547__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__551__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__551__context_name = ""s;
        __Vtask_uvm_report_warning__551__line = 0x000007c2U;
        this->__Vtask_uvm_report_warning__551__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__551__verbosity = 0U;
        this->__Vtask_uvm_report_warning__551__message = "RegModel memories cannot be packed"s;
        this->__Vtask_uvm_report_warning__551__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__552__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__552__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__553__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__553__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__551__id, this->__Vtask_uvm_report_warning__551__message, __Vtask_uvm_report_warning__551__verbosity, this->__Vtask_uvm_report_warning__551__filename, __Vtask_uvm_report_warning__551__line, this->__Vtask_uvm_report_warning__551__context_name, (IData)(__Vtask_uvm_report_warning__551__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[23357]);
    } else {
        ++(vlSymsp->__Vcoverage[23358]);
    }
    ++(vlSymsp->__Vcoverage[23359]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__555__verbosity;
    __Vfunc_uvm_report_enabled__555__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__555__severity;
    __Vfunc_uvm_report_enabled__555__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__556__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__557__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__559__verbosity;
    __Vtask_uvm_report_warning__559__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__559__line;
    __Vtask_uvm_report_warning__559__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__559__report_enabled_checked;
    __Vtask_uvm_report_warning__559__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__560__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__561__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__555__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__555__severity = 1U;
    __Vfunc_uvm_report_enabled__555__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__556__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__556__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__557__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__557__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__555__verbosity, (IData)(__Vfunc_uvm_report_enabled__555__severity), this->__Vfunc_uvm_report_enabled__555__id, __VlefCall_0__uvm_report_enabled);
    ++(vlSymsp->__Vcoverage[437]);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__559__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__559__context_name = ""s;
        __Vtask_uvm_report_warning__559__line = 0x000007c9U;
        this->__Vtask_uvm_report_warning__559__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__559__verbosity = 0U;
        this->__Vtask_uvm_report_warning__559__message = "RegModel memories cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__559__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__560__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__560__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__561__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__561__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__559__id, this->__Vtask_uvm_report_warning__559__message, __Vtask_uvm_report_warning__559__verbosity, this->__Vtask_uvm_report_warning__559__filename, __Vtask_uvm_report_warning__559__line, this->__Vtask_uvm_report_warning__559__context_name, (IData)(__Vtask_uvm_report_warning__559__report_enabled_checked));
        ++(vlSymsp->__Vcoverage[441]);
        ++(vlSymsp->__Vcoverage[23360]);
    } else {
        ++(vlSymsp->__Vcoverage[23361]);
    }
    ++(vlSymsp->__Vcoverage[23362]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX\n"); );
    // Body
    this->__PVT__m_vregs.at(vreg) = 1U;
    ++(vlSymsp->__Vcoverage[23363]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX\n"); );
    // Body
    if (this->__PVT__m_vregs.exists(vreg)) {
        this->__PVT__m_vregs.erase(vreg);
        ++(vlSymsp->__Vcoverage[23364]);
    } else {
        ++(vlSymsp->__Vcoverage[23365]);
    }
    ++(vlSymsp->__Vcoverage[23366]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_mem::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_size = 0;
    __PVT__m_maps.atDefault() = 0;
    __PVT__m_n_bits = 0;
    __PVT__m_is_powered_down = 0;
    __PVT__m_has_cover = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_lineno = 0;
    __PVT__m_vregs.atDefault() = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_mem::~Vtb_rng_uvm_pkg__03a__03auvm_mem() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_mem::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_mem::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_locked:" + VL_TO_STRING(__PVT__m_locked);
    out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
    out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
    out += ", m_access:" + VL_TO_STRING(__PVT__m_access);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_maps:" + VL_TO_STRING(__PVT__m_maps);
    out += ", m_n_bits:" + VL_TO_STRING(__PVT__m_n_bits);
    out += ", m_backdoor:" + VL_TO_STRING(__PVT__m_backdoor);
    out += ", m_is_powered_down:" + VL_TO_STRING(__PVT__m_is_powered_down);
    out += ", m_has_cover:" + VL_TO_STRING(__PVT__m_has_cover);
    out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
    out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
    out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
    out += ", m_vregs:" + VL_TO_STRING(__PVT__m_vregs);
    out += ", m_hdl_paths_pool:" + VL_TO_STRING(__PVT__m_hdl_paths_pool);
    out += ", mam:" + VL_TO_STRING(__PVT__mam);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
