// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_get_max_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
    ++(vlSymsp->__Vcoverage[21962]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_include_coverage(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ models, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_include_coverage\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz194__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, scope)), "include_coverage"s, models, accessor);
    ++(vlSymsp->__Vcoverage[21983]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_unregister(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_unregister\n"); );
    // Body
    this->__PVT__m_maps.erase(map);
    ++(vlSymsp->__Vcoverage[21751]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_watch(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_watch\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21752]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21753]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample_values(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample_values\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21754]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XsampleX(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, data, byte_en, (IData)(is_read), map);
    ++(vlSymsp->__Vcoverage[21755]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21757]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21758]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21759]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[21760]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_coverage) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::new\n"); );
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
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
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
        ++(vlSymsp->__Vcoverage[432]);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_error__7__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__7__context_name = ""s;
            __Vtask_uvm_report_error__7__line = 0x00000257U;
            this->__Vtask_uvm_report_error__7__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_error__7__verbosity = 0U;
            this->__Vtask_uvm_report_error__7__message 
                = VL_SFORMATF_N_NX("Register \"%@\" cannot have 0 bits",0,
                                   -1,&(__VlefCall_1__get_name)) ;
            this->__Vtask_uvm_report_error__7__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__7__id, this->__Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, this->__Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, this->__Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
            ++(vlSymsp->__Vcoverage[437]);
            ++(vlSymsp->__Vcoverage[21761]);
        } else {
            ++(vlSymsp->__Vcoverage[21762]);
        }
        n_bits = 1U;
        ++(vlSymsp->__Vcoverage[21763]);
    } else {
        ++(vlSymsp->__Vcoverage[21764]);
    }
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_atomic = VL_NEW(Vtb_rng_std__03a__03asemaphore, vlSymsp, 1U);
    this->__PVT__m_n_used_bits = 0U;
    this->__PVT__m_locked = 0U;
    this->__PVT__m_is_busy = 0U;
    this->__PVT__m_is_locked_by_field = 0U;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz213, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size 
            = n_bits;
        ++(vlSymsp->__Vcoverage[21765]);
    } else {
        ++(vlSymsp->__Vcoverage[21766]);
    }
    ++(vlSymsp->__Vcoverage[21767]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__19__verbosity;
    __Vtask_uvm_report_error__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__19__line;
    __Vtask_uvm_report_error__19__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__19__report_enabled_checked;
    __Vtask_uvm_report_error__19__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == blk_parent)) {
            this->__Vfunc_uvm_report_enabled__13__id = "UVM/REG/CFG/NOBLK"s;
            __Vfunc_uvm_report_enabled__13__severity = 2U;
            __Vfunc_uvm_report_enabled__13__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                __Vtask_uvm_report_error__19__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__19__context_name = ""s;
                __Vtask_uvm_report_error__19__line = 0x0000026fU;
                this->__Vtask_uvm_report_error__19__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__19__verbosity = 0U;
                this->__Vtask_uvm_report_error__19__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_reg::configure() called without a parent block for instance \""s, __VlefCall_1__get_name), "\" of register type \""s), __VlefCall_2__get_type_name), "\"."s));
                            this->__Vtask_uvm_report_error__19__id = "UVM/REG/CFG/NOBLK"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__20__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__21__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__19__id, this->__Vtask_uvm_report_error__19__message, __Vtask_uvm_report_error__19__verbosity, this->__Vtask_uvm_report_error__19__filename, __Vtask_uvm_report_error__19__line, this->__Vtask_uvm_report_error__19__context_name, (IData)(__Vtask_uvm_report_error__19__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[21768]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21769]);
                        }
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21771]);
                    }
                    this->__PVT__m_parent = blk_parent;
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 628)
                                                        ->__VnoInFunc_add_reg(vlSymsp, 
                                                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this});
                    this->__PVT__m_regfile_parent = regfile_parent;
                    if ((""s != hdl_path)) {
                        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
                        ++(vlSymsp->__Vcoverage[21772]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21773]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21774]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> field) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
                __Vfunc_uvm_report_enabled__25__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
                __Vfunc_uvm_report_enabled__25__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__29__verbosity;
                __Vtask_uvm_report_error__29__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__29__line;
                __Vtask_uvm_report_error__29__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__29__report_enabled_checked;
                __Vtask_uvm_report_error__29__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
                __Vfunc_uvm_report_enabled__33__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
                __Vfunc_uvm_report_enabled__33__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
                IData/*31:0*/ __Vtask_get_lsb_pos__38__Vfuncout;
                __Vtask_get_lsb_pos__38__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
                __Vfunc_uvm_report_enabled__41__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
                __Vfunc_uvm_report_enabled__41__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__46__verbosity;
                __Vtask_uvm_report_error__46__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__46__line;
                __Vtask_uvm_report_error__46__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__46__report_enabled_checked;
                __Vtask_uvm_report_error__46__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__47__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__48__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__52__verbosity;
                __Vfunc_uvm_report_enabled__52__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__52__severity;
                __Vfunc_uvm_report_enabled__52__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__53__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__54__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__59__verbosity;
                __Vtask_uvm_report_error__59__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__59__line;
                __Vtask_uvm_report_error__59__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__59__report_enabled_checked;
                __Vtask_uvm_report_error__59__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__65__verbosity;
                __Vfunc_uvm_report_enabled__65__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__65__severity;
                __Vfunc_uvm_report_enabled__65__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__72__verbosity;
                __Vtask_uvm_report_error__72__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__72__line;
                __Vtask_uvm_report_error__72__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__72__report_enabled_checked;
                __Vtask_uvm_report_error__72__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__73__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__74__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                std::string __VlefCall_17__get_name;
                std::string __VlefCall_16__get_name;
                std::string __VlefCall_15__get_name;
                IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_13__get_lsb_pos;
                IData/*31:0*/ __VlefCall_12__get_n_bits;
                std::string __VlefCall_11__get_name;
                std::string __VlefCall_10__get_name;
                std::string __VlefCall_9__get_name;
                IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_7__get_n_bits;
                IData/*31:0*/ __VlefCall_6__get_lsb_pos;
                std::string __VlefCall_5__get_name;
                IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_3__get_n_bits;
                IData/*31:0*/ __VlefCall_2__get_lsb_pos;
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk299__DOT__i;
                unnamedblk299__DOT__i = 0;
                IData/*31:0*/ unnamedblk299__DOT__unnamedblk300__DOT__j;
                IData/*31:0*/ offset;
                IData/*31:0*/ idx;
                {
                    offset = 0U;
                    idx = 0U;
                    if (this->__PVT__m_locked) {
                        this->__Vfunc_uvm_report_enabled__25__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__25__severity = 2U;
                        __Vfunc_uvm_report_enabled__25__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__26__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__27__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), this->__Vfunc_uvm_report_enabled__25__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__29__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__29__context_name = ""s;
                            __Vtask_uvm_report_error__29__line = 0x00000282U;
                            this->__Vtask_uvm_report_error__29__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__29__verbosity = 0U;
                            this->__Vtask_uvm_report_error__29__message = "Cannot add field to locked register model"s;
                            this->__Vtask_uvm_report_error__29__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__30__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__31__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__29__id, this->__Vtask_uvm_report_error__29__message, __Vtask_uvm_report_error__29__verbosity, this->__Vtask_uvm_report_error__29__filename, __Vtask_uvm_report_error__29__line, this->__Vtask_uvm_report_error__29__context_name, (IData)(__Vtask_uvm_report_error__29__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[21775]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21776]);
                        }
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21778]);
                    }
                    if ((VlNull{} == field)) {
                        this->__Vfunc_uvm_report_enabled__33__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__33__severity = 3U;
                        __Vfunc_uvm_report_enabled__33__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__34__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__35__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), this->__Vfunc_uvm_report_enabled__33__id, __VlefCall_1__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Attempting to register NULL field"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s, 0x00000286U, ""s, 1U);
                            ++(vlSymsp->__Vcoverage[21779]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21780]);
                        }
                        ++(vlSymsp->__Vcoverage[21781]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21782]);
                    }
                    VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 649)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__38__Vfuncout);
                    offset = __Vtask_get_lsb_pos__38__Vfuncout;
                    idx = 0xffffffffU;
                    {
                        unnamedblk299__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk299__DOT__i, this->__PVT__m_fields.size())) {
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk299__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 653)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                            if ((offset < __VlefCall_2__get_lsb_pos)) {
                                unnamedblk299__DOT__unnamedblk300__DOT__j 
                                    = unnamedblk299__DOT__i;
                                this->__PVT__m_fields.insert(unnamedblk299__DOT__unnamedblk300__DOT__j, field);
                                idx = unnamedblk299__DOT__i;
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[21784]);
                            }
                            unnamedblk299__DOT__i = 
                                ((IData)(1U) + unnamedblk299__DOT__i);
                            ++(vlSymsp->__Vcoverage[21785]);
                        }
                        __Vlabel1: ;
                    }
                    if (VL_GTS_III(32, 0U, idx)) {
                        this->__PVT__m_fields.push_back(field);
                        idx = (this->__PVT__m_fields.size() 
                               - (IData)(1U));
                        ++(vlSymsp->__Vcoverage[21786]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21787]);
                    }
                    VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 665)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                    this->__PVT__m_n_used_bits = (this->__PVT__m_n_used_bits 
                                                  + __VlefCall_3__get_n_bits);
                    if ((this->__PVT__m_n_used_bits 
                         > this->__PVT__m_n_bits)) {
                        this->__Vfunc_uvm_report_enabled__41__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__41__severity = 2U;
                        __Vfunc_uvm_report_enabled__41__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__42__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__43__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), this->__Vfunc_uvm_report_enabled__41__id, __VlefCall_4__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_4__uvm_report_enabled)) {
                            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                            __Vtask_uvm_report_error__46__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__46__context_name = ""s;
                            __Vtask_uvm_report_error__46__line = 0x0000029fU;
                            this->__Vtask_uvm_report_error__46__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__46__verbosity = 0U;
                            this->__Vtask_uvm_report_error__46__message 
                                = VL_SFORMATF_N_NX("Fields use more bits (%0#) than available in register \"%@\" (%0#)",0,
                                                   32,
                                                   this->__PVT__m_n_used_bits,
                                                   -1,
                                                   &(__VlefCall_5__get_name),
                                                   32,
                                                   this->__PVT__m_n_bits) ;
                            this->__Vtask_uvm_report_error__46__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__47__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__48__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__48__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__46__id, this->__Vtask_uvm_report_error__46__message, __Vtask_uvm_report_error__46__verbosity, this->__Vtask_uvm_report_error__46__filename, __Vtask_uvm_report_error__46__line, this->__Vtask_uvm_report_error__46__context_name, (IData)(__Vtask_uvm_report_error__46__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[21788]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21789]);
                        }
                        ++(vlSymsp->__Vcoverage[21790]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21791]);
                    }
                    if (VL_LTS_III(32, 0U, idx)) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                               (idx 
                                                                - (IData)(1U))), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 676)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                               (idx 
                                                                - (IData)(1U))), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 677)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
                        if (((__VlefCall_6__get_lsb_pos 
                              + __VlefCall_7__get_n_bits) 
                             > offset)) {
                            this->__Vfunc_uvm_report_enabled__52__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__52__severity = 2U;
                            __Vfunc_uvm_report_enabled__52__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__53__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__53__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__54__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__54__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__52__verbosity, (IData)(__Vfunc_uvm_report_enabled__52__severity), this->__Vfunc_uvm_report_enabled__52__id, __VlefCall_8__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                       (idx 
                                                                        - (IData)(1U))), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 680)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                                VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 680)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                                __Vtask_uvm_report_error__59__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__59__context_name = ""s;
                                __Vtask_uvm_report_error__59__line = 0x000002a8U;
                                this->__Vtask_uvm_report_error__59__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__59__verbosity = 0U;
                                this->__Vtask_uvm_report_error__59__message 
                                    = VL_SFORMATF_N_NX("Field %@ overlaps field %@ in register \"%@\"",0,
                                                       -1,
                                                       &(__VlefCall_9__get_name),
                                                       -1,
                                                       &(__VlefCall_10__get_name),
                                                       -1,
                                                       &(__VlefCall_11__get_name)) ;
                                this->__Vtask_uvm_report_error__59__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__60__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__61__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__59__id, this->__Vtask_uvm_report_error__59__message, __Vtask_uvm_report_error__59__verbosity, this->__Vtask_uvm_report_error__59__filename, __Vtask_uvm_report_error__59__line, this->__Vtask_uvm_report_error__59__context_name, (IData)(__Vtask_uvm_report_error__59__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[437]);
                                ++(vlSymsp->__Vcoverage[21792]);
                            } else {
                                ++(vlSymsp->__Vcoverage[21793]);
                            }
                            ++(vlSymsp->__Vcoverage[21794]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21795]);
                        }
                        ++(vlSymsp->__Vcoverage[21796]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21797]);
                    }
                    if (VL_LTS_III(32, idx, (this->__PVT__m_fields.size() 
                                             - (IData)(1U)))) {
                        VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 684)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                               ((IData)(1U) 
                                                                + idx)), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 685)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_13__get_lsb_pos);
                        if (((offset + __VlefCall_12__get_n_bits) 
                             > __VlefCall_13__get_lsb_pos)) {
                            this->__Vfunc_uvm_report_enabled__65__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__65__severity = 2U;
                            __Vfunc_uvm_report_enabled__65__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__66__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__67__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__65__verbosity, (IData)(__Vfunc_uvm_report_enabled__65__severity), this->__Vfunc_uvm_report_enabled__65__id, __VlefCall_14__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                                VL_NULL_CHECK(field, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 689)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                                VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                       ((IData)(1U) 
                                                                        + idx)), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 689)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_17__get_name);
                                __Vtask_uvm_report_error__72__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__72__context_name = ""s;
                                __Vtask_uvm_report_error__72__line = 0x000002b1U;
                                this->__Vtask_uvm_report_error__72__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__72__verbosity = 0U;
                                this->__Vtask_uvm_report_error__72__message 
                                    = VL_SFORMATF_N_NX("Field %@ overlaps field %@ in register \"%@\"",0,
                                                       -1,
                                                       &(__VlefCall_15__get_name),
                                                       -1,
                                                       &(__VlefCall_16__get_name),
                                                       -1,
                                                       &(__VlefCall_17__get_name)) ;
                                this->__Vtask_uvm_report_error__72__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__73__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__73__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__74__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__74__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__72__id, this->__Vtask_uvm_report_error__72__message, __Vtask_uvm_report_error__72__verbosity, this->__Vtask_uvm_report_error__72__filename, __Vtask_uvm_report_error__72__line, this->__Vtask_uvm_report_error__72__context_name, (IData)(__Vtask_uvm_report_error__72__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[437]);
                                ++(vlSymsp->__Vcoverage[21798]);
                            } else {
                                ++(vlSymsp->__Vcoverage[21799]);
                            }
                            ++(vlSymsp->__Vcoverage[21800]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21801]);
                        }
                        ++(vlSymsp->__Vcoverage[21802]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21803]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21804]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xlock_modelX(Vtb_rng__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xlock_modelX\n"); );
                // Body
                {
                    if (this->__PVT__m_locked) {
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21806]);
                    }
                    this->__PVT__m_locked = 1U;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21807]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                {
                    VL_NULL_CHECK(ftdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 715)
                                                        ->__PVT__fname 
                        = this->__PVT__m_fname;
                    VL_NULL_CHECK(ftdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 716)
                                                        ->__PVT__lineno 
                        = this->__PVT__m_lineno;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21809]);
                    }
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 720)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                    if ((VlNull{} == map_info)) {
                        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 722)
                                                        ->__VnoInFunc_add_reg(vlSymsp, 
                                                                              VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, 0xffffffffffffffffULL, "RW"s, 1U, ftdr);
                        ++(vlSymsp->__Vcoverage[21810]);
                    } else {
                        VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 724)
                                                        ->__PVT__frontdoor 
                            = ftdr;
                        ++(vlSymsp->__Vcoverage[21811]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21812]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                {
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
                    if ((VlNull{} == map)) {
                        get_frontdoor__Vfuncrtn = VlNull{};
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21814]);
                    }
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 736)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                    get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 737)
                        ->__PVT__frontdoor;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21815]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_backdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_backdoor\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
                __Vfunc_uvm_report_enabled__82__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
                __Vfunc_uvm_report_enabled__82__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__86__verbosity;
                __Vtask_uvm_report_warning__86__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__86__line;
                __Vtask_uvm_report_warning__86__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__86__report_enabled_checked;
                __Vtask_uvm_report_warning__86__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__87__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__88__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                CData/*0:0*/ __VlefCall_0__has_update_threads;
                VL_NULL_CHECK(bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 746)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 747)
                                                        ->__PVT__lineno 
                    = lineno;
                __VlefCall_0__has_update_threads = 
                    (VlNull{} != this->__PVT__m_backdoor);
                if (__VlefCall_0__has_update_threads) {
                    VL_NULL_CHECK(this->__PVT__m_backdoor, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 749)
                                                        ->__VnoInFunc_has_update_threads(vlSymsp, __VlefCall_0__has_update_threads);
                }
                if (__VlefCall_0__has_update_threads) {
                    this->__Vfunc_uvm_report_enabled__82__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__82__severity = 1U;
                    __Vfunc_uvm_report_enabled__82__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__83__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__84__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), this->__Vfunc_uvm_report_enabled__82__id, __VlefCall_1__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_1__uvm_report_enabled)) {
                        __Vtask_uvm_report_warning__86__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__86__context_name = ""s;
                        __Vtask_uvm_report_warning__86__line = 0x000002eeU;
                        this->__Vtask_uvm_report_warning__86__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__86__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__86__message = "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts."s;
                        this->__Vtask_uvm_report_warning__86__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__87__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__87__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__88__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__88__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__86__id, this->__Vtask_uvm_report_warning__86__message, __Vtask_uvm_report_warning__86__verbosity, this->__Vtask_uvm_report_warning__86__filename, __Vtask_uvm_report_warning__86__line, this->__Vtask_uvm_report_warning__86__context_name, (IData)(__Vtask_uvm_report_warning__86__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[436]);
                        ++(vlSymsp->__Vcoverage[21816]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21817]);
                    }
                    ++(vlSymsp->__Vcoverage[21818]);
                } else {
                    ++(vlSymsp->__Vcoverage[21819]);
                }
                this->__PVT__m_backdoor = bkdr;
                ++(vlSymsp->__Vcoverage[21820]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor\n"); );
                // Body
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk301__DOT__blk;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk301__DOT__bkdr;
                if (inherited) {
                    this->__VnoInFunc_get_parent(vlSymsp, unnamedblk301__DOT__blk);
                    {
                        while ((VlNull{} != unnamedblk301__DOT__blk)) {
                            VL_NULL_CHECK(unnamedblk301__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 764)
                                                        ->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk301__DOT__bkdr);
                            if ((VlNull{} != unnamedblk301__DOT__bkdr)) {
                                this->__PVT__m_backdoor 
                                    = unnamedblk301__DOT__bkdr;
                                goto __Vlabel0;
                            } else {
                                ++(vlSymsp->__Vcoverage[21822]);
                            }
                            VL_NULL_CHECK(unnamedblk301__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 769)
                                                        ->__VnoInFunc_get_parent(vlSymsp, unnamedblk301__DOT__blk);
                            ++(vlSymsp->__Vcoverage[21823]);
                        }
                        __Vlabel0: ;
                    }
                    ++(vlSymsp->__Vcoverage[21824]);
                } else {
                    ++(vlSymsp->__Vcoverage[21825]);
                }
                get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
                ++(vlSymsp->__Vcoverage[21826]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clear_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clear_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__97__verbosity;
                __Vfunc_uvm_report_enabled__97__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__97__severity;
                __Vfunc_uvm_report_enabled__97__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__98__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__99__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__101__verbosity;
                __Vtask_uvm_report_warning__101__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__101__line;
                __Vtask_uvm_report_warning__101__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__101__report_enabled_checked;
                __Vtask_uvm_report_warning__101__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__102__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__103__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_0__exists;
                {
                    if (("ALL"s == kind)) {
                        this->__PVT__m_hdl_paths_pool 
                            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz213, vlProcess, vlSymsp, "hdl_paths"s);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21828]);
                    }
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 787)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[21829]);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 789)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[21830]);
                        }
                        ++(vlSymsp->__Vcoverage[21831]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21832]);
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 792)
                                                        ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
                    if ((0U != __VlefCall_0__exists)) {
                        ++(vlSymsp->__Vcoverage[21836]);
                    } else {
                        this->__Vfunc_uvm_report_enabled__97__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__97__severity = 1U;
                        __Vfunc_uvm_report_enabled__97__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__98__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__98__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__99__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__99__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__97__verbosity, (IData)(__Vfunc_uvm_report_enabled__97__severity), this->__Vfunc_uvm_report_enabled__97__id, __VlefCall_1__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            __Vtask_uvm_report_warning__101__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__101__context_name = ""s;
                            __Vtask_uvm_report_warning__101__line = 0x00000319U;
                            this->__Vtask_uvm_report_warning__101__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__101__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__101__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_warning__101__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__102__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__102__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__103__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__103__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__101__id, this->__Vtask_uvm_report_warning__101__message, __Vtask_uvm_report_warning__101__verbosity, this->__Vtask_uvm_report_warning__101__filename, __Vtask_uvm_report_warning__101__line, this->__Vtask_uvm_report_warning__101__context_name, (IData)(__Vtask_uvm_report_warning__101__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[436]);
                            ++(vlSymsp->__Vcoverage[21833]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21834]);
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 797)
                                                        ->__VnoInFunc_delete(vlSymsp, kind);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21837]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<Vtb_rng_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212> paths;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 805)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
                concat = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                VL_NULL_CHECK(concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 808)
                                                        ->__VnoInFunc_set(vlSymsp, slices);
                VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 809)
                                                        ->__VnoInFunc_push_back(vlSymsp, concat);
                ++(vlSymsp->__Vcoverage[21838]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path_slice(Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path_slice\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_2__size;
                CData/*0:0*/ __VlefLogOr_1;
                IData/*31:0*/ __VlefCall_0__size;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212> paths;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 820)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
                __VlefLogOr_1 = first;
                if ((1U & (~ (IData)(__VlefLogOr_1)))) {
                    VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 823)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                    __VlefLogOr_1 = (0U == __VlefCall_0__size);
                }
                if (__VlefLogOr_1) {
                    concat = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                    VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 825)
                                                        ->__VnoInFunc_push_back(vlSymsp, concat);
                    ++(vlSymsp->__Vcoverage[21839]);
                } else {
                    VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 828)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                    VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 828)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                          (__VlefCall_2__size 
                                                                           - (IData)(1U)), concat);
                    ++(vlSymsp->__Vcoverage[21840]);
                }
                VL_NULL_CHECK(concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 830)
                                                        ->__VnoInFunc_add_path(vlSymsp, name, offset, size);
                ++(vlSymsp->__Vcoverage[21841]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0__exists;
                has_hdl_path__Vfuncrtn = 0U;
                if ((""s == kind)) {
                    if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 839)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        ++(vlSymsp->__Vcoverage[21842]);
                    } else {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 841)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        ++(vlSymsp->__Vcoverage[21843]);
                    }
                    ++(vlSymsp->__Vcoverage[21844]);
                } else {
                    ++(vlSymsp->__Vcoverage[21845]);
                }
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 844)
                                                        ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
                has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
                ++(vlSymsp->__Vcoverage[21846]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path_kinds(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path_kinds\n"); );
                // Locals
                IData/*31:0*/ __Vtask_first__120__Vfuncout;
                __Vtask_first__120__Vfuncout = 0;
                IData/*31:0*/ __Vtask_next__121__Vfuncout;
                __Vtask_next__121__Vfuncout = 0;
                // Body
                IData/*31:0*/ __VlefCall_1__next;
                IData/*31:0*/ __VlefCall_0__first;
                std::string kind;
                {
                    kind = ""s;
                    kinds.clear();
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 853)
                                                        ->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__120__Vfuncout);
                    __VlefCall_0__first = __Vtask_first__120__Vfuncout;
                    if ((0U != __VlefCall_0__first)) {
                        ++(vlSymsp->__Vcoverage[21848]);
                    } else {
                        goto __Vlabel0;
                    }
                    while (true) {
                        kinds.push_back(kind);
                        ++(vlSymsp->__Vcoverage[21849]);
                        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 857)
                                                        ->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__121__Vfuncout);
                        __VlefCall_1__next = __Vtask_next__121__Vfuncout;
                        if (!((0U != __VlefCall_1__next))) break;
                        ++(vlSymsp->__Vcoverage[21850]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21851]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__125__verbosity;
                __Vfunc_uvm_report_enabled__125__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__125__severity;
                __Vfunc_uvm_report_enabled__125__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__126__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__127__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__129__verbosity;
                __Vtask_uvm_report_error__129__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__129__line;
                __Vtask_uvm_report_error__129__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__129__report_enabled_checked;
                __Vtask_uvm_report_error__129__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__130__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__131__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> __VlefCall_2__get;
                IData/*31:0*/ __VlefCall_1__size;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk302__DOT__i;
                CData/*0:0*/ __VExpr_h78b0f34f__0;
                __VExpr_h78b0f34f__0 = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212> hdl_paths;
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 870)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[21852]);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 872)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[21853]);
                        }
                        ++(vlSymsp->__Vcoverage[21854]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21855]);
                    }
                    this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VExpr_h78b0f34f__0);
                    if (__VExpr_h78b0f34f__0) {
                        ++(vlSymsp->__Vcoverage[21859]);
                    } else {
                        this->__Vfunc_uvm_report_enabled__125__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__125__severity = 2U;
                        __Vfunc_uvm_report_enabled__125__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__126__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__127__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__127__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__125__verbosity, (IData)(__Vfunc_uvm_report_enabled__125__severity), this->__Vfunc_uvm_report_enabled__125__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__129__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__129__context_name = ""s;
                            __Vtask_uvm_report_error__129__line = 0x0000036dU;
                            this->__Vtask_uvm_report_error__129__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__129__verbosity = 0U;
                            this->__Vtask_uvm_report_error__129__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register does not have hdl path defined for abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_error__129__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__130__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__130__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__131__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__131__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__129__id, this->__Vtask_uvm_report_error__129__message, __Vtask_uvm_report_error__129__verbosity, this->__Vtask_uvm_report_error__129__filename, __Vtask_uvm_report_error__129__line, this->__Vtask_uvm_report_error__129__context_name, (IData)(__Vtask_uvm_report_error__129__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[21856]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21857]);
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 881)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
                    unnamedblk302__DOT__i = 0U;
                    unnamedblk302__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 883)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                        if (!(VL_LTS_III(32, unnamedblk302__DOT__i, __VlefCall_1__size))) break;
                        VL_NULL_CHECK(hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 884)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk302__DOT__i, __VlefCall_2__get);
                        paths.push_back(__VlefCall_2__get);
                        unnamedblk302__DOT__i = ((IData)(1U) 
                                                 + unnamedblk302__DOT__i);
                        ++(vlSymsp->__Vcoverage[21862]);
                    }
                    __Vlabel0: ;
                }
                if ((1U & (~ (IData)(__VExpr_h78b0f34f__0)))) {
                    ++(vlSymsp->__Vcoverage[21860]);
                }
                if (__VExpr_h78b0f34f__0) {
                    ++(vlSymsp->__Vcoverage[21861]);
                }
                ++(vlSymsp->__Vcoverage[21863]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__139__verbosity;
                __Vfunc_uvm_report_enabled__139__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__139__severity;
                __Vfunc_uvm_report_enabled__139__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__140__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__141__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__144__verbosity;
                __Vtask_uvm_report_error__144__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__144__line;
                __Vtask_uvm_report_error__144__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__144__report_enabled_checked;
                __Vtask_uvm_report_error__144__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__145__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__146__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_2__size;
                std::string __VlefCall_1__get_full_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212> unnamedblk303__DOT__hdl_paths;
                VlQueue<std::string> unnamedblk303__DOT__parent_paths;
                IData/*31:0*/ unnamedblk303__DOT__unnamedblk304__DOT__i;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j;
                unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t;
                IData/*31:0*/ unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k;
                unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k = 0;
                CData/*0:0*/ __VExpr_h78b0f34f__0;
                __VExpr_h78b0f34f__0 = 0;
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 898)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[21864]);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 900)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[21865]);
                        }
                        ++(vlSymsp->__Vcoverage[21866]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21867]);
                    }
                    this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VExpr_h78b0f34f__0);
                    if (__VExpr_h78b0f34f__0) {
                        ++(vlSymsp->__Vcoverage[21871]);
                    } else {
                        this->__Vfunc_uvm_report_enabled__139__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__139__severity = 2U;
                        __Vfunc_uvm_report_enabled__139__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__140__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__140__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__141__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__141__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__139__verbosity, (IData)(__Vfunc_uvm_report_enabled__139__severity), this->__Vfunc_uvm_report_enabled__139__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                            __Vtask_uvm_report_error__144__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__144__context_name = ""s;
                            __Vtask_uvm_report_error__144__line = 0x00000389U;
                            this->__Vtask_uvm_report_error__144__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__144__verbosity = 0U;
                            this->__Vtask_uvm_report_error__144__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register "s, __VlefCall_1__get_full_name), " does not have hdl path defined for abstraction '"s), kind), "'"s));
                            this->__Vtask_uvm_report_error__144__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__145__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__145__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__146__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__146__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__144__id, this->__Vtask_uvm_report_error__144__message, __Vtask_uvm_report_error__144__verbosity, this->__Vtask_uvm_report_error__144__filename, __Vtask_uvm_report_error__144__line, this->__Vtask_uvm_report_error__144__context_name, (IData)(__Vtask_uvm_report_error__144__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[21868]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21869]);
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 910)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk303__DOT__hdl_paths);
                    unnamedblk303__DOT__parent_paths.clear();
                    unnamedblk303__DOT__parent_paths.atDefault().clear();
                    if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 914)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk303__DOT__parent_paths, kind, separator);
                        ++(vlSymsp->__Vcoverage[21874]);
                    } else {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 916)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk303__DOT__parent_paths, kind, separator);
                        ++(vlSymsp->__Vcoverage[21875]);
                    }
                    unnamedblk303__DOT__unnamedblk304__DOT__i = 0U;
                    unnamedblk303__DOT__unnamedblk304__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(unnamedblk303__DOT__hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 918)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                        if (!(VL_LTS_III(32, unnamedblk303__DOT__unnamedblk304__DOT__i, __VlefCall_2__size))) break;
                        VL_NULL_CHECK(unnamedblk303__DOT__hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 919)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk303__DOT__unnamedblk304__DOT__i, unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat);
                        unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j = 0U;
                        while (VL_LTS_III(32, unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j, unnamedblk303__DOT__parent_paths.size())) {
                            unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t 
                                = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                            unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k = 0U;
                            while (VL_LTS_III(32, unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k, VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 924)
                                              ->__PVT__slices.size())) {
                                if ((""s == VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 925)
                                     ->__PVT__slices.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k)
                                     .__PVT__path)) {
                                    VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 926)
                                                        ->__VnoInFunc_add_path(vlSymsp, 
                                                                               VL_CVT_PACK_STR_NN(unnamedblk303__DOT__parent_paths.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j)), 0xffffffffU, 0xffffffffU);
                                    ++(vlSymsp->__Vcoverage[21876]);
                                } else {
                                    VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 928)
                                                        ->__VnoInFunc_add_path(vlSymsp, 
                                                                               VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk303__DOT__parent_paths.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j), separator), VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 928)
                                                                                ->__PVT__slices.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 929)
                                                                               ->__PVT__slices.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k)
                                                                               .__PVT__offset, VL_NULL_CHECK(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 930)
                                                                               ->__PVT__slices.at(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k)
                                                                               .__PVT__size);
                                    ++(vlSymsp->__Vcoverage[21877]);
                                }
                                unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k 
                                    = ((IData)(1U) 
                                       + unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__unnamedblk308__DOT__k);
                                ++(vlSymsp->__Vcoverage[21878]);
                            }
                            paths.push_back(unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__unnamedblk307__DOT__t);
                            unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j 
                                = ((IData)(1U) + unnamedblk303__DOT__unnamedblk304__DOT__unnamedblk305__DOT__unnamedblk306__DOT__j);
                            ++(vlSymsp->__Vcoverage[21879]);
                        }
                        unnamedblk303__DOT__unnamedblk304__DOT__i 
                            = ((IData)(1U) + unnamedblk303__DOT__unnamedblk304__DOT__i);
                        ++(vlSymsp->__Vcoverage[21880]);
                    }
                    __Vlabel0: ;
                }
                if ((1U & (~ (IData)(__VExpr_h78b0f34f__0)))) {
                    ++(vlSymsp->__Vcoverage[21872]);
                }
                if (__VExpr_h78b0f34f__0) {
                    ++(vlSymsp->__Vcoverage[21873]);
                }
                ++(vlSymsp->__Vcoverage[21881]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__156__verbosity;
                __Vfunc_uvm_report_enabled__156__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__156__severity;
                __Vfunc_uvm_report_enabled__156__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__157__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__158__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__161__verbosity;
                __Vtask_uvm_report_error__161__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__161__line;
                __Vtask_uvm_report_error__161__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__161__report_enabled_checked;
                __Vtask_uvm_report_error__161__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__162__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__163__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                std::string __VlefCall_1__get_full_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                {
                    if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
                         & (VlNull{} == map))) {
                        this->__Vfunc_uvm_report_enabled__156__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__156__severity = 2U;
                        __Vfunc_uvm_report_enabled__156__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__157__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__157__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__158__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__158__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__156__verbosity, (IData)(__Vfunc_uvm_report_enabled__156__severity), this->__Vfunc_uvm_report_enabled__156__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                            __Vtask_uvm_report_error__161__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__161__context_name = ""s;
                            __Vtask_uvm_report_error__161__line = 0x000003b5U;
                            this->__Vtask_uvm_report_error__161__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__161__verbosity = 0U;
                            this->__Vtask_uvm_report_error__161__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("set_offset requires a non-null map when register '"s, __VlefCall_1__get_full_name), "' belongs to more than one map."s));
                            this->__Vtask_uvm_report_error__161__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__162__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__162__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__163__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__163__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__161__id, this->__Vtask_uvm_report_error__161__message, __Vtask_uvm_report_error__161__verbosity, this->__Vtask_uvm_report_error__161__filename, __Vtask_uvm_report_error__161__line, this->__Vtask_uvm_report_error__161__context_name, (IData)(__Vtask_uvm_report_error__161__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[21882]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21883]);
                        }
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21885]);
                    }
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21887]);
                    }
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 958)
                                                        ->__VnoInFunc_m_set_reg_offset(vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, offset, (IData)(unmapped));
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21888]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> regfile_parent) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_parent\n"); );
                // Body
                if ((VlNull{} != this->__PVT__m_parent)) {
                    ++(vlSymsp->__Vcoverage[21889]);
                } else {
                    ++(vlSymsp->__Vcoverage[21890]);
                }
                this->__PVT__m_parent = blk_parent;
                this->__PVT__m_regfile_parent = regfile_parent;
                ++(vlSymsp->__Vcoverage[21891]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent\n"); );
                // Body
                this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
                ++(vlSymsp->__Vcoverage[21892]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_regfile(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_regfile\n"); );
                // Body
                get_regfile__Vfuncrtn = this->__PVT__m_regfile_parent;
                ++(vlSymsp->__Vcoverage[21893]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name\n"); );
                // Body
                std::string __VlefCall_3__get_name;
                std::string __VlefCall_2__get_full_name;
                std::string __VlefCall_1__get_name;
                std::string __VlefCall_0__get_full_name;
                {
                    get_full_name__Vfuncrtn = ""s;
                    if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_regfile_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 993)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21895]);
                    }
                    if ((VlNull{} != this->__PVT__m_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 996)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__VlefCall_2__get_full_name, "."s), __VlefCall_3__get_name);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21897]);
                    }
                    this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21898]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map\n"); );
                // Body
                this->__PVT__m_maps.at(map) = 1U;
                ++(vlSymsp->__Vcoverage[21899]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps\n"); );
                // Body
                CData/*0:0*/ __VlefExpr_1;
                CData/*0:0*/ __VlefExpr_0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk309__DOT__map;
                CData/*0:0*/ unnamedblk309__DOT__map__Vfirst;
                unnamedblk309__DOT__map__Vfirst = 0;
                __VlefExpr_0 = (0U != this->__PVT__m_maps.first(unnamedblk309__DOT__map));
                if (__VlefExpr_0) {
                    unnamedblk309__DOT__map__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_1 = unnamedblk309__DOT__map__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_1)))) {
                            __VlefExpr_1 = (0U != this->__PVT__m_maps.next(unnamedblk309__DOT__map));
                        }
                        if (!(__VlefExpr_1)) break;
                        unnamedblk309__DOT__map__Vfirst = 0U;
                        maps.push_back(unnamedblk309__DOT__map);
                        ++(vlSymsp->__Vcoverage[21900]);
                    }
                    ++(vlSymsp->__Vcoverage[21901]);
                } else {
                    ++(vlSymsp->__Vcoverage[21902]);
                }
                ++(vlSymsp->__Vcoverage[21903]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps\n"); );
                // Body
                get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
                ++(vlSymsp->__Vcoverage[21904]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map\n"); );
                // Body
                CData/*0:0*/ __VlefExpr_1;
                CData/*0:0*/ __VlefExpr_0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk310__DOT__l;
                CData/*0:0*/ unnamedblk310__DOT__l__Vfirst;
                unnamedblk310__DOT__l__Vfirst = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk310__DOT__unnamedblk311__DOT__local_map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk310__DOT__unnamedblk311__DOT__parent_map;
                {
                    is_in_map__Vfuncrtn = 0U;
                    if (this->__PVT__m_maps.exists(map)) {
                        is_in_map__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21906]);
                    }
                    __VlefExpr_0 = (0U != this->__PVT__m_maps.first(unnamedblk310__DOT__l));
                    if (__VlefExpr_0) {
                        unnamedblk310__DOT__l__Vfirst = 1U;
                        while (true) {
                            __VlefExpr_1 = unnamedblk310__DOT__l__Vfirst;
                            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                                __VlefExpr_1 = (0U 
                                                != this->__PVT__m_maps.next(unnamedblk310__DOT__l));
                            }
                            if (!(__VlefExpr_1)) break;
                            unnamedblk310__DOT__l__Vfirst = 0U;
                            unnamedblk310__DOT__unnamedblk311__DOT__local_map 
                                = unnamedblk310__DOT__l;
                            VL_NULL_CHECK(unnamedblk310__DOT__unnamedblk311__DOT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1031)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk310__DOT__unnamedblk311__DOT__parent_map);
                            while ((VlNull{} != unnamedblk310__DOT__unnamedblk311__DOT__parent_map)) {
                                if ((unnamedblk310__DOT__unnamedblk311__DOT__parent_map 
                                     == map)) {
                                    is_in_map__Vfuncrtn = 1U;
                                    goto __Vlabel0;
                                } else {
                                    ++(vlSymsp->__Vcoverage[21908]);
                                }
                                VL_NULL_CHECK(unnamedblk310__DOT__unnamedblk311__DOT__parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1036)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk310__DOT__unnamedblk311__DOT__parent_map);
                                ++(vlSymsp->__Vcoverage[21909]);
                            }
                            ++(vlSymsp->__Vcoverage[21910]);
                        }
                        ++(vlSymsp->__Vcoverage[21911]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21912]);
                    }
                    is_in_map__Vfuncrtn = 0U;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21913]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__178__verbosity;
                __Vfunc_uvm_report_enabled__178__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__178__severity;
                __Vfunc_uvm_report_enabled__178__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__179__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__180__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__184__verbosity;
                __Vtask_uvm_report_warning__184__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__184__line;
                __Vtask_uvm_report_warning__184__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__184__report_enabled_checked;
                __Vtask_uvm_report_warning__184__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__185__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__186__Vfuncout;
                // Body
                std::string __VlefCall_4__get_full_name;
                std::string __VlefCall_3__get_full_name;
                IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
                CData/*0:0*/ __VlefExpr_1;
                CData/*0:0*/ __VlefExpr_0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk312__DOT__l;
                CData/*0:0*/ unnamedblk312__DOT__l__Vfirst;
                unnamedblk312__DOT__l__Vfirst = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk312__DOT__unnamedblk313__DOT__local_map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk312__DOT__unnamedblk313__DOT__parent_map;
                {
                    if ((VlNull{} == map)) {
                        this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, get_local_map__Vfuncrtn);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21915]);
                    }
                    if (this->__PVT__m_maps.exists(map)) {
                        get_local_map__Vfuncrtn = map;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21917]);
                    }
                    __VlefExpr_0 = (0U != this->__PVT__m_maps.first(unnamedblk312__DOT__l));
                    if (__VlefExpr_0) {
                        unnamedblk312__DOT__l__Vfirst = 1U;
                        while (true) {
                            __VlefExpr_1 = unnamedblk312__DOT__l__Vfirst;
                            if ((1U & (~ (IData)(__VlefExpr_1)))) {
                                __VlefExpr_1 = (0U 
                                                != this->__PVT__m_maps.next(unnamedblk312__DOT__l));
                            }
                            if (!(__VlefExpr_1)) break;
                            unnamedblk312__DOT__l__Vfirst = 0U;
                            unnamedblk312__DOT__unnamedblk313__DOT__local_map 
                                = unnamedblk312__DOT__l;
                            VL_NULL_CHECK(unnamedblk312__DOT__unnamedblk313__DOT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1053)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk312__DOT__unnamedblk313__DOT__parent_map);
                            while ((VlNull{} != unnamedblk312__DOT__unnamedblk313__DOT__parent_map)) {
                                if ((unnamedblk312__DOT__unnamedblk313__DOT__parent_map 
                                     == map)) {
                                    get_local_map__Vfuncrtn 
                                        = unnamedblk312__DOT__unnamedblk313__DOT__local_map;
                                    goto __Vlabel0;
                                } else {
                                    ++(vlSymsp->__Vcoverage[21919]);
                                }
                                VL_NULL_CHECK(unnamedblk312__DOT__unnamedblk313__DOT__parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1058)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk312__DOT__unnamedblk313__DOT__parent_map);
                                ++(vlSymsp->__Vcoverage[21920]);
                            }
                            ++(vlSymsp->__Vcoverage[21921]);
                        }
                        ++(vlSymsp->__Vcoverage[21922]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21923]);
                    }
                    this->__Vfunc_uvm_report_enabled__178__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__178__severity = 1U;
                    __Vfunc_uvm_report_enabled__178__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__179__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__179__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__180__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__180__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__178__verbosity, (IData)(__Vfunc_uvm_report_enabled__178__severity), this->__Vfunc_uvm_report_enabled__178__id, __VlefCall_2__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1062)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        __Vtask_uvm_report_warning__184__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__184__context_name = ""s;
                        __Vtask_uvm_report_warning__184__line = 0x00000426U;
                        this->__Vtask_uvm_report_warning__184__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__184__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__184__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_3__get_full_name), "' is not contained within map '"s), __VlefCall_4__get_full_name), "'"s));
                        this->__Vtask_uvm_report_warning__184__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__185__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__185__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__186__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__186__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__184__id, this->__Vtask_uvm_report_warning__184__message, __Vtask_uvm_report_warning__184__verbosity, this->__Vtask_uvm_report_warning__184__filename, __Vtask_uvm_report_warning__184__line, this->__Vtask_uvm_report_warning__184__context_name, (IData)(__Vtask_uvm_report_warning__184__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[436]);
                        ++(vlSymsp->__Vcoverage[21924]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21925]);
                    }
                    get_local_map__Vfuncrtn = VlNull{};
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21926]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__188__verbosity;
                __Vfunc_uvm_report_enabled__188__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__188__severity;
                __Vfunc_uvm_report_enabled__188__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__189__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__190__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__193__verbosity;
                __Vtask_uvm_report_warning__193__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__193__line;
                __Vtask_uvm_report_warning__193__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__193__report_enabled_checked;
                __Vtask_uvm_report_warning__193__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__194__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__195__Vfuncout;
                // Body
                CData/*0:0*/ __VlefExpr_3;
                CData/*0:0*/ __VlefExpr_2;
                std::string __VlefCall_1__get_full_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk314__DOT__map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__l;
                CData/*0:0*/ unnamedblk315__DOT__l__Vfirst;
                unnamedblk315__DOT__l__Vfirst = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__unnamedblk316__DOT__map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> unnamedblk315__DOT__unnamedblk316__DOT__blk;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__unnamedblk316__DOT__default_map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__unnamedblk316__DOT__unnamedblk317__DOT__local_map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk318__DOT__map;
                {
                    if ((0U == this->__PVT__m_maps.size())) {
                        this->__Vfunc_uvm_report_enabled__188__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__188__severity = 1U;
                        __Vfunc_uvm_report_enabled__188__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__189__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__189__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__190__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__190__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__188__verbosity, (IData)(__Vfunc_uvm_report_enabled__188__severity), this->__Vfunc_uvm_report_enabled__188__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                            __Vtask_uvm_report_warning__193__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__193__context_name = ""s;
                            __Vtask_uvm_report_warning__193__line = 0x00000433U;
                            this->__Vtask_uvm_report_warning__193__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__193__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__193__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_full_name), "' is not registered with any map"s));
                            this->__Vtask_uvm_report_warning__193__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__194__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__194__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__195__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__195__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__193__id, this->__Vtask_uvm_report_warning__193__message, __Vtask_uvm_report_warning__193__verbosity, this->__Vtask_uvm_report_warning__193__filename, __Vtask_uvm_report_warning__193__line, this->__Vtask_uvm_report_warning__193__context_name, (IData)(__Vtask_uvm_report_warning__193__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[436]);
                            ++(vlSymsp->__Vcoverage[21927]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21928]);
                        }
                        get_default_map__Vfuncrtn = VlNull{};
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21930]);
                    }
                    if ((1U == this->__PVT__m_maps.size())) {
                        std::ignore = this->__PVT__m_maps.first(unnamedblk314__DOT__map);
                        get_default_map__Vfuncrtn = unnamedblk314__DOT__map;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21932]);
                    }
                    __VlefExpr_2 = (0U != this->__PVT__m_maps.first(unnamedblk315__DOT__l));
                    if (__VlefExpr_2) {
                        unnamedblk315__DOT__l__Vfirst = 1U;
                        while (true) {
                            __VlefExpr_3 = unnamedblk315__DOT__l__Vfirst;
                            if ((1U & (~ (IData)(__VlefExpr_3)))) {
                                __VlefExpr_3 = (0U 
                                                != this->__PVT__m_maps.next(unnamedblk315__DOT__l));
                            }
                            if (!(__VlefExpr_3)) break;
                            unnamedblk315__DOT__l__Vfirst = 0U;
                            unnamedblk315__DOT__unnamedblk316__DOT__map 
                                = unnamedblk315__DOT__l;
                            VL_NULL_CHECK(unnamedblk315__DOT__unnamedblk316__DOT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1089)
                                                        ->__VnoInFunc_get_parent(vlSymsp, unnamedblk315__DOT__unnamedblk316__DOT__blk);
                            VL_NULL_CHECK(unnamedblk315__DOT__unnamedblk316__DOT__blk, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1090)
                                                        ->__VnoInFunc_get_default_map(vlSymsp, unnamedblk315__DOT__unnamedblk316__DOT__default_map);
                            if ((VlNull{} != unnamedblk315__DOT__unnamedblk316__DOT__default_map)) {
                                this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk315__DOT__unnamedblk316__DOT__default_map, unnamedblk315__DOT__unnamedblk316__DOT__unnamedblk317__DOT__local_map);
                                if ((VlNull{} != unnamedblk315__DOT__unnamedblk316__DOT__unnamedblk317__DOT__local_map)) {
                                    get_default_map__Vfuncrtn 
                                        = unnamedblk315__DOT__unnamedblk316__DOT__unnamedblk317__DOT__local_map;
                                    goto __Vlabel0;
                                } else {
                                    ++(vlSymsp->__Vcoverage[21934]);
                                }
                                ++(vlSymsp->__Vcoverage[21935]);
                            } else {
                                ++(vlSymsp->__Vcoverage[21936]);
                            }
                            ++(vlSymsp->__Vcoverage[21937]);
                        }
                        ++(vlSymsp->__Vcoverage[21938]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21939]);
                    }
                    std::ignore = this->__PVT__m_maps.first(unnamedblk318__DOT__map);
                    get_default_map__Vfuncrtn = unnamedblk318__DOT__map;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21940]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights\n"); );
                // Body
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> info;
                {
                    get_rights__Vfuncrtn = ""s;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
                    if ((VlNull{} == map)) {
                        get_rights__Vfuncrtn = "RW"s;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21942]);
                    }
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1120)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, 1U, info);
                    get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1121)
                        ->__PVT__rights;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21943]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block\n"); );
                // Body
                get_block__Vfuncrtn = this->__PVT__m_parent;
                ++(vlSymsp->__Vcoverage[21944]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__204__verbosity;
                __Vfunc_uvm_report_enabled__204__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__204__severity;
                __Vfunc_uvm_report_enabled__204__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__205__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__206__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__211__verbosity;
                __Vtask_uvm_report_warning__211__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__211__line;
                __Vtask_uvm_report_warning__211__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__211__report_enabled_checked;
                __Vtask_uvm_report_warning__211__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__212__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__213__Vfuncout;
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
                        ++(vlSymsp->__Vcoverage[21946]);
                    }
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1146)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                    if (VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1148)
                        ->__PVT__unmapped) {
                        this->__Vfunc_uvm_report_enabled__204__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__204__severity = 1U;
                        __Vfunc_uvm_report_enabled__204__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__205__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__205__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__206__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__206__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__204__verbosity, (IData)(__Vfunc_uvm_report_enabled__204__severity), this->__Vfunc_uvm_report_enabled__204__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                            if ((VlNull{} == orig_map)) {
                                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1151)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            } else {
                                VL_NULL_CHECK(orig_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1151)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            }
                            __Vtask_uvm_report_warning__211__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__211__context_name = ""s;
                            __Vtask_uvm_report_warning__211__line = 0x0000047fU;
                            this->__Vtask_uvm_report_warning__211__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__211__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__211__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                            this->__Vtask_uvm_report_warning__211__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__212__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__212__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__213__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__213__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__211__id, this->__Vtask_uvm_report_warning__211__message, __Vtask_uvm_report_warning__211__verbosity, this->__Vtask_uvm_report_warning__211__filename, __Vtask_uvm_report_warning__211__line, this->__Vtask_uvm_report_warning__211__context_name, (IData)(__Vtask_uvm_report_warning__211__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[436]);
                            ++(vlSymsp->__Vcoverage[21947]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21948]);
                        }
                        get_offset__Vfuncrtn = 0xffffffffffffffffULL;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21950]);
                    }
                    get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1155)
                        ->__PVT__offset;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21951]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__217__verbosity;
                __Vfunc_uvm_report_enabled__217__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__217__severity;
                __Vfunc_uvm_report_enabled__217__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__218__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__219__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__224__verbosity;
                __Vtask_uvm_report_warning__224__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__224__line;
                __Vtask_uvm_report_warning__224__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__224__report_enabled_checked;
                __Vtask_uvm_report_warning__224__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__225__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__226__Vfuncout;
                IData/*31:0*/ __Vtask_get_n_bytes__228__Vfuncout;
                __Vtask_get_n_bytes__228__Vfuncout = 0;
                // Body
                std::string __VlefCall_2__get_full_name;
                std::string __VlefCall_1__get_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> orig_map;
                {
                    get_addresses__Vfuncrtn = 0U;
                    orig_map = map;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
                    if ((VlNull{} == map)) {
                        get_addresses__Vfuncrtn = 0xffffffffU;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21953]);
                    }
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1172)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                    if (VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1174)
                        ->__PVT__unmapped) {
                        this->__Vfunc_uvm_report_enabled__217__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__217__severity = 1U;
                        __Vfunc_uvm_report_enabled__217__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__218__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__218__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__219__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__219__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__217__verbosity, (IData)(__Vfunc_uvm_report_enabled__217__severity), this->__Vfunc_uvm_report_enabled__217__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                            if ((VlNull{} == orig_map)) {
                                VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1177)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            } else {
                                VL_NULL_CHECK(orig_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1177)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            }
                            __Vtask_uvm_report_warning__224__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__224__context_name = ""s;
                            __Vtask_uvm_report_warning__224__line = 0x00000499U;
                            this->__Vtask_uvm_report_warning__224__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__224__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__224__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                            this->__Vtask_uvm_report_warning__224__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__225__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__225__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__226__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__226__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__224__id, this->__Vtask_uvm_report_warning__224__message, __Vtask_uvm_report_warning__224__verbosity, this->__Vtask_uvm_report_warning__224__filename, __Vtask_uvm_report_warning__224__line, this->__Vtask_uvm_report_warning__224__context_name, (IData)(__Vtask_uvm_report_warning__224__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[436]);
                            ++(vlSymsp->__Vcoverage[21954]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21955]);
                        }
                        get_addresses__Vfuncrtn = 0xffffffffU;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21957]);
                    }
                    addr = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1181)
                        ->__PVT__addr;
                    VL_NULL_CHECK(map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1182)
                                                        ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__228__Vfuncout);
                    get_addresses__Vfuncrtn = __Vtask_get_n_bytes__228__Vfuncout;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21958]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address\n"); );
                // Locals
                IData/*31:0*/ __Vtask_get_addresses__229__Vfuncout;
                __Vtask_get_addresses__229__Vfuncout = 0;
                // Body
                VlQueue<QData/*63:0*/> addr;
                get_address__Vfuncrtn = 0ULL;
                addr.clear();
                addr.atDefault() = 0;
                this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, map, addr, __Vtask_get_addresses__229__Vfuncout);
                get_address__Vfuncrtn = addr.at(0U);
                ++(vlSymsp->__Vcoverage[21959]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits\n"); );
                // Body
                get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
                ++(vlSymsp->__Vcoverage[21960]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes\n"); );
                // Body
                get_n_bytes__Vfuncrtn = ((IData)(1U) 
                                         + VL_SHIFTR_III(32,32,32, 
                                                         (this->__PVT__m_n_bits 
                                                          - (IData)(1U)), 3U));
                ++(vlSymsp->__Vcoverage[21961]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> &fields) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields\n"); );
                // Body
                IData/*31:0*/ unnamedblk319__DOT__i;
                unnamedblk319__DOT__i = 0;
                unnamedblk319__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk319__DOT__i, this->__PVT__m_fields.size())) {
                    fields.push_back(this->__PVT__m_fields.at(unnamedblk319__DOT__i));
                    unnamedblk319__DOT__i = ((IData)(1U) 
                                             + unnamedblk319__DOT__i);
                    ++(vlSymsp->__Vcoverage[21963]);
                }
                ++(vlSymsp->__Vcoverage[21964]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_field_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_field_by_name\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__231__verbosity;
                __Vfunc_uvm_report_enabled__231__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__231__severity;
                __Vfunc_uvm_report_enabled__231__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__236__verbosity;
                __Vtask_uvm_report_warning__236__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__236__line;
                __Vtask_uvm_report_warning__236__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__236__report_enabled_checked;
                __Vtask_uvm_report_warning__236__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__237__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__238__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                std::string __VlefCall_2__get_name;
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                std::string __VlefCall_0__get_name;
                IData/*31:0*/ unnamedblk320__DOT__i;
                unnamedblk320__DOT__i = 0;
                {
                    unnamedblk320__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk320__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk320__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1229)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                        if ((__VlefCall_0__get_name 
                             == name)) {
                            get_field_by_name__Vfuncrtn 
                                = this->__PVT__m_fields.at(unnamedblk320__DOT__i);
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[21966]);
                        }
                        unnamedblk320__DOT__i = ((IData)(1U) 
                                                 + unnamedblk320__DOT__i);
                        ++(vlSymsp->__Vcoverage[21967]);
                    }
                    this->__Vfunc_uvm_report_enabled__231__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__231__severity = 1U;
                    __Vfunc_uvm_report_enabled__231__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__232__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__233__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__231__verbosity, (IData)(__Vfunc_uvm_report_enabled__231__severity), this->__Vfunc_uvm_report_enabled__231__id, __VlefCall_1__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_1__uvm_report_enabled)) {
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                        __Vtask_uvm_report_warning__236__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__236__context_name = ""s;
                        __Vtask_uvm_report_warning__236__line = 0x000004d0U;
                        this->__Vtask_uvm_report_warning__236__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__236__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__236__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate field '"s, name), "' in register '"s), __VlefCall_2__get_name), "'"s));
                        this->__Vtask_uvm_report_warning__236__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__237__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__237__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__238__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__238__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__236__id, this->__Vtask_uvm_report_warning__236__message, __Vtask_uvm_report_warning__236__verbosity, this->__Vtask_uvm_report_warning__236__filename, __Vtask_uvm_report_warning__236__line, this->__Vtask_uvm_report_warning__236__context_name, (IData)(__Vtask_uvm_report_warning__236__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[436]);
                        ++(vlSymsp->__Vcoverage[21968]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21969]);
                    }
                    get_field_by_name__Vfuncrtn = VlNull{};
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21970]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &Xget_fields_accessX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ unnamedblk321__DOT__i;
                unnamedblk321__DOT__i = 0;
                std::string __VCase_h37bfe3b1__0;
                CData/*0:0*/ is_R;
                CData/*0:0*/ is_W;
                {
                    Xget_fields_accessX__Vfuncrtn = ""s;
                    is_R = 0U;
                    is_W = 0U;
                    unnamedblk321__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk321__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk321__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1248)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __VCase_h37bfe3b1__0);
                        if (((("RO"s == __VCase_h37bfe3b1__0) 
                              || ("RC"s == __VCase_h37bfe3b1__0)) 
                             || ("RS"s == __VCase_h37bfe3b1__0))) {
                            is_R = 1U;
                            ++(vlSymsp->__Vcoverage[21971]);
                        } else if ((((("WO"s == __VCase_h37bfe3b1__0) 
                                      || ("WOC"s == __VCase_h37bfe3b1__0)) 
                                     || ("WOS"s == __VCase_h37bfe3b1__0)) 
                                    || ("WO1"s == __VCase_h37bfe3b1__0))) {
                            is_W = 1U;
                            ++(vlSymsp->__Vcoverage[21972]);
                        } else {
                            Xget_fields_accessX__Vfuncrtn = "RW"s;
                            goto __Vlabel0;
                        }
                        if (((IData)(is_R) & (IData)(is_W))) {
                            Xget_fields_accessX__Vfuncrtn = "RW"s;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[21975]);
                        }
                        unnamedblk321__DOT__i = ((IData)(1U) 
                                                 + unnamedblk321__DOT__i);
                        ++(vlSymsp->__Vcoverage[21979]);
                    }
                    if ((1U == (((IData)(is_R) << 1U) 
                                | (IData)(is_W)))) {
                        Xget_fields_accessX__Vfuncrtn = "WO"s;
                        goto __Vlabel0;
                    } else if ((2U == (((IData)(is_R) 
                                        << 1U) | (IData)(is_W)))) {
                        Xget_fields_accessX__Vfuncrtn = "RO"s;
                        goto __Vlabel0;
                    }
                    Xget_fields_accessX__Vfuncrtn = "RW"s;
                    __Vlabel0: ;
                }
                if (((IData)(is_R) & (IData)(is_W))) {
                    ++(vlSymsp->__Vcoverage[21976]);
                }
                if ((1U & (~ (IData)(is_W)))) {
                    ++(vlSymsp->__Vcoverage[21977]);
                }
                if ((1U & (~ (IData)(is_R)))) {
                    ++(vlSymsp->__Vcoverage[21978]);
                }
                ++(vlSymsp->__Vcoverage[21982]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_build_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_build_coverage\n"); );
                // Locals
                CData/*0:0*/ __Vtask_read_by_name__242__Vfuncout;
                __Vtask_read_by_name__242__Vfuncout = 0;
                IData/*31:0*/ __Vtask_read_by_name__242__val;
                __Vtask_read_by_name__242__val = 0;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                std::string __VlefCall_0__get_full_name;
                build_coverage__Vfuncrtn = 0U;
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                __Vtask_read_by_name__242__val = build_coverage__Vfuncrtn;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz194__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__242__val, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, __Vtask_read_by_name__242__Vfuncout);
                build_coverage__Vfuncrtn = __Vtask_read_by_name__242__val;
                build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                            & models);
                ++(vlSymsp->__Vcoverage[21984]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_coverage\n"); );
                // Body
                this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                            | models);
                ++(vlSymsp->__Vcoverage[21985]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_coverage\n"); );
                // Body
                has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                                           & models) 
                                          == models);
                ++(vlSymsp->__Vcoverage[21986]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage\n"); );
                // Body
                {
                    set_coverage__Vfuncrtn = 0U;
                    if ((0U == is_on)) {
                        this->__PVT__m_cover_on = is_on;
                        set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[21988]);
                    }
                    this->__PVT__m_cover_on = (this->__PVT__m_has_cover 
                                               & is_on);
                    set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21989]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_coverage\n"); );
                // Body
                CData/*0:0*/ __VlefCall_0__has_coverage;
                {
                    get_coverage__Vfuncrtn = 0U;
                    this->__VnoInFunc_has_coverage(vlSymsp, is_on, __VlefCall_0__has_coverage);
                    if (__VlefCall_0__has_coverage) {
                        ++(vlSymsp->__Vcoverage[21991]);
                    } else {
                        get_coverage__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                    get_coverage__Vfuncrtn = ((this->__PVT__m_cover_on 
                                               & is_on) 
                                              == is_on);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[21992]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set\n"); );
                // Body
                IData/*31:0*/ __VlefCall_1__get_n_bits;
                IData/*31:0*/ __VlefCall_0__get_lsb_pos;
                IData/*31:0*/ unnamedblk322__DOT__i;
                unnamedblk322__DOT__i = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                unnamedblk322__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk322__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk322__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1355)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_0__get_lsb_pos);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk322__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1356)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk322__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1355)
                                                        ->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                          (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_0__get_lsb_pos) 
                                                                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                                              - 1ULL)), ""s, 0U);
                    unnamedblk322__DOT__i = ((IData)(1U) 
                                             + unnamedblk322__DOT__i);
                    ++(vlSymsp->__Vcoverage[21993]);
                }
                ++(vlSymsp->__Vcoverage[21994]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_predict(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_predict\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                predict__Vfuncrtn = 0U;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
                rw = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1370)
                                                        ->__PVT__value.atWrite(0U) 
                    = value;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1371)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1372)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1373)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1374)
                                                        ->__PVT__lineno 
                    = lineno;
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
                predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1376)
                                      ->__PVT__status)
                                      ? 0U : 1U);
                ++(vlSymsp->__Vcoverage[21995]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__249__verbosity;
                __Vfunc_uvm_report_enabled__249__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__249__severity;
                __Vfunc_uvm_report_enabled__249__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__250__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__251__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__254__verbosity;
                __Vtask_uvm_report_warning__254__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__254__line;
                __Vtask_uvm_report_warning__254__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__254__report_enabled_checked;
                __Vtask_uvm_report_warning__254__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__255__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__256__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_4__get_lsb_pos;
                IData/*31:0*/ __VlefCall_3__get_n_bits;
                IData/*31:0*/ __VlefCall_2__get_lsb_pos;
                std::string __VlefCall_1__get_full_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk323__DOT__i;
                unnamedblk323__DOT__i = 0;
                QData/*63:0*/ reg_value;
                {
                    reg_value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1386)
                        ->__PVT__value.at(0U);
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1387)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1388)
                        ->__PVT__lineno;
                    if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1390)
                         ->__PVT__status)) {
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1391)
                                                        ->__PVT__status = 0U;
                        ++(vlSymsp->__Vcoverage[21996]);
                    } else {
                        ++(vlSymsp->__Vcoverage[21997]);
                    }
                    if (((IData)(this->__PVT__m_is_busy) 
                         & (0U == kind))) {
                        this->__Vfunc_uvm_report_enabled__249__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__249__severity = 1U;
                        __Vfunc_uvm_report_enabled__249__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__250__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__250__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__251__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__251__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__249__verbosity, (IData)(__Vfunc_uvm_report_enabled__249__severity), this->__Vfunc_uvm_report_enabled__249__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                            __Vtask_uvm_report_warning__254__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__254__context_name = ""s;
                            __Vtask_uvm_report_warning__254__line = 0x00000573U;
                            this->__Vtask_uvm_report_warning__254__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__254__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__254__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Trying to predict value of register '"s, __VlefCall_1__get_full_name), "' while it is being accessed"s));
                            this->__Vtask_uvm_report_warning__254__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__255__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__255__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__256__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__256__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__254__id, this->__Vtask_uvm_report_warning__254__message, __Vtask_uvm_report_warning__254__verbosity, this->__Vtask_uvm_report_warning__254__filename, __Vtask_uvm_report_warning__254__line, this->__Vtask_uvm_report_warning__254__context_name, (IData)(__Vtask_uvm_report_warning__254__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[436]);
                            ++(vlSymsp->__Vcoverage[21998]);
                        } else {
                            ++(vlSymsp->__Vcoverage[21999]);
                        }
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1396)
                                                        ->__PVT__status = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22001]);
                    }
                    unnamedblk323__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk323__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk323__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1401)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk323__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1402)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1401)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, reg_value, __VlefCall_2__get_lsb_pos) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_3__get_n_bits) 
                                  - 1ULL));
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk323__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1403)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk323__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1403)
                                                        ->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, 
                                                                                VL_SHIFTR_III(8,8,32, (IData)(be), 
                                                                                VL_SHIFTR_III(32,32,32, __VlefCall_4__get_lsb_pos, 3U)));
                        unnamedblk323__DOT__i = ((IData)(1U) 
                                                 + unnamedblk323__DOT__i);
                        ++(vlSymsp->__Vcoverage[22005]);
                    }
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1406)
                                                        ->__PVT__value.atWrite(0U) 
                        = reg_value;
                    __Vlabel0: ;
                }
                if (((IData)(this->__PVT__m_is_busy) 
                     & (0U == kind))) {
                    ++(vlSymsp->__Vcoverage[22002]);
                }
                if ((0U != kind)) {
                    ++(vlSymsp->__Vcoverage[22003]);
                }
                if ((1U & (~ (IData)(this->__PVT__m_is_busy)))) {
                    ++(vlSymsp->__Vcoverage[22004]);
                }
                ++(vlSymsp->__Vcoverage[22006]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get\n"); );
                // Body
                IData/*31:0*/ __VlefCall_1__get_lsb_pos;
                QData/*63:0*/ __VlefCall_0__get;
                IData/*31:0*/ unnamedblk324__DOT__i;
                unnamedblk324__DOT__i = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                get__Vfuncrtn = 0ULL;
                unnamedblk324__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk324__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk324__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1423)
                                                        ->__VnoInFunc_get(vlSymsp, ""s, 0U, __VlefCall_0__get);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk324__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1423)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
                    get__Vfuncrtn = (get__Vfuncrtn 
                                     | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get, __VlefCall_1__get_lsb_pos));
                    unnamedblk324__DOT__i = ((IData)(1U) 
                                             + unnamedblk324__DOT__i);
                    ++(vlSymsp->__Vcoverage[22007]);
                }
                ++(vlSymsp->__Vcoverage[22008]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value(Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value\n"); );
                // Body
                IData/*31:0*/ __VlefCall_1__get_lsb_pos;
                QData/*63:0*/ __VlefCall_0__get_mirrored_value;
                IData/*31:0*/ unnamedblk325__DOT__i;
                unnamedblk325__DOT__i = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                get_mirrored_value__Vfuncrtn = 0ULL;
                unnamedblk325__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk325__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1439)
                                                        ->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __VlefCall_0__get_mirrored_value);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1439)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
                    get_mirrored_value__Vfuncrtn = 
                        (get_mirrored_value__Vfuncrtn 
                         | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get_mirrored_value, __VlefCall_1__get_lsb_pos));
                    unnamedblk325__DOT__i = ((IData)(1U) 
                                             + unnamedblk325__DOT__i);
                    ++(vlSymsp->__Vcoverage[22009]);
                }
                ++(vlSymsp->__Vcoverage[22010]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset\n"); );
                // Locals
                IData/*31:0*/ __Vtask_try_get__267__Vfuncout;
                __Vtask_try_get__267__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk326__DOT__i;
                unnamedblk326__DOT__i = 0;
                unnamedblk326__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk326__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk326__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1447)
                                                        ->__VnoInFunc_reset(vlSymsp, kind);
                    unnamedblk326__DOT__i = ((IData)(1U) 
                                             + unnamedblk326__DOT__i);
                    ++(vlSymsp->__Vcoverage[22011]);
                }
                VL_NULL_CHECK(this->__PVT__m_atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1450)
                                                        ->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__267__Vfuncout);
                VL_NULL_CHECK(this->__PVT__m_atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1451)
                                                        ->__VnoInFunc_put(vlSymsp, 1U);
                this->__PVT__m_process = VlNull{};
                this->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                ++(vlSymsp->__Vcoverage[22012]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset\n"); );
                // Body
                IData/*31:0*/ __VlefCall_1__get_lsb_pos;
                QData/*63:0*/ __VlefCall_0__get_reset;
                IData/*31:0*/ unnamedblk327__DOT__i;
                unnamedblk327__DOT__i = 0;
                get_reset__Vfuncrtn = 0ULL;
                unnamedblk327__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk327__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1465)
                                                        ->__VnoInFunc_get_reset(vlSymsp, kind, __VlefCall_0__get_reset);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1465)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
                    get_reset__Vfuncrtn = (get_reset__Vfuncrtn 
                                           | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get_reset, __VlefCall_1__get_lsb_pos));
                    unnamedblk327__DOT__i = ((IData)(1U) 
                                             + unnamedblk327__DOT__i);
                    ++(vlSymsp->__Vcoverage[22013]);
                }
                ++(vlSymsp->__Vcoverage[22014]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset\n"); );
                // Body
                CData/*0:0*/ __VlefCall_0__has_reset;
                IData/*31:0*/ unnamedblk328__DOT__i;
                unnamedblk328__DOT__i = 0;
                {
                    has_reset__Vfuncrtn = 0U;
                    has_reset__Vfuncrtn = 0U;
                    unnamedblk328__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk328__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk328__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1476)
                                                        ->__VnoInFunc_has_reset(vlSymsp, kind, (IData)(__SYM__delete), __VlefCall_0__has_reset);
                        has_reset__Vfuncrtn = ((IData)(has_reset__Vfuncrtn) 
                                               | (IData)(__VlefCall_0__has_reset));
                        if (((~ (IData)(__SYM__delete)) 
                             & (IData)(has_reset__Vfuncrtn))) {
                            has_reset__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[22016]);
                        }
                        unnamedblk328__DOT__i = ((IData)(1U) 
                                                 + unnamedblk328__DOT__i);
                        ++(vlSymsp->__Vcoverage[22020]);
                    }
                    __Vlabel0: ;
                }
                if (((~ (IData)(__SYM__delete)) & (IData)(has_reset__Vfuncrtn))) {
                    ++(vlSymsp->__Vcoverage[22017]);
                }
                if ((1U & (~ (IData)(has_reset__Vfuncrtn)))) {
                    ++(vlSymsp->__Vcoverage[22018]);
                }
                if (__SYM__delete) {
                    ++(vlSymsp->__Vcoverage[22019]);
                }
                ++(vlSymsp->__Vcoverage[22021]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0__get_lsb_pos;
                IData/*31:0*/ unnamedblk329__DOT__i;
                unnamedblk329__DOT__i = 0;
                unnamedblk329__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk329__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk329__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1488)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_0__get_lsb_pos);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk329__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1488)
                                                        ->__VnoInFunc_set_reset(vlSymsp, 
                                                                                VL_SHIFTR_QQI(64,64,32, value, __VlefCall_0__get_lsb_pos), kind);
                    unnamedblk329__DOT__i = ((IData)(1U) 
                                             + unnamedblk329__DOT__i);
                    ++(vlSymsp->__Vcoverage[22022]);
                }
                ++(vlSymsp->__Vcoverage[22023]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update\n"); );
                // Body
                CData/*0:0*/ __VlefCall_0__needs_update;
                IData/*31:0*/ unnamedblk330__DOT__i;
                unnamedblk330__DOT__i = 0;
                {
                    needs_update__Vfuncrtn = 0U;
                    needs_update__Vfuncrtn = 0U;
                    unnamedblk330__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk330__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk330__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1502)
                                                        ->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
                        if (__VlefCall_0__needs_update) {
                            needs_update__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[22025]);
                        }
                        unnamedblk330__DOT__i = ((IData)(1U) 
                                                 + unnamedblk330__DOT__i);
                        ++(vlSymsp->__Vcoverage[22026]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22027]);
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update\n"); );
                // Locals
                IData/*31:0*/ __Vtask_write__279__status;
                __Vtask_write__279__status = 0;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VL_KEEP_THIS;
                IData/*31:0*/ __VlefCall_1__get_lsb_pos;
                QData/*63:0*/ __VlefCall_0__XupdateX;
                IData/*31:0*/ unnamedblk331__DOT__i;
                unnamedblk331__DOT__i = 0;
                CData/*0:0*/ __VExpr_he1ab87aa__0;
                __VExpr_he1ab87aa__0 = 0;
                QData/*63:0*/ upd;
                {
                    status = 0U;
                    upd = 0ULL;
                    status = 0U;
                    this->__VnoInFunc_needs_update(vlSymsp, __VExpr_he1ab87aa__0);
                    if (__VExpr_he1ab87aa__0) {
                        ++(vlSymsp->__Vcoverage[22029]);
                    } else {
                        goto __Vlabel0;
                    }
                    upd = 0ULL;
                    unnamedblk331__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk331__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk331__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1529)
                                                        ->__VnoInFunc_XupdateX(vlSymsp, __VlefCall_0__XupdateX);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk331__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1529)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
                        upd = (upd | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__XupdateX, __VlefCall_1__get_lsb_pos));
                        unnamedblk331__DOT__i = ((IData)(1U) 
                                                 + unnamedblk331__DOT__i);
                        ++(vlSymsp->__Vcoverage[22032]);
                    }
                    co_await this->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__279__status, upd, path, map, parent, prior, extension, fname, lineno);
                    status = __Vtask_write__279__status;
                    __Vlabel0: ;
                }
                if ((1U & (~ (IData)(__VExpr_he1ab87aa__0)))) {
                    ++(vlSymsp->__Vcoverage[22030]);
                }
                if (__VExpr_he1ab87aa__0) {
                    ++(vlSymsp->__Vcoverage[22031]);
                }
                ++(vlSymsp->__Vcoverage[22033]);
                co_return;
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write\n"); );
                // Body
                VL_KEEP_THIS;
                std::string __VlefCall_0__get_full_name;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
                status = 0U;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                this->__VnoInFunc_set(vlProcess, vlSymsp, value, ""s, 0U);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1556)
                                                        ->__PVT__element 
                    = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this};
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1557)
                                                        ->__PVT__element_kind = 0U;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1558)
                                                        ->__PVT__kind = 1U;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1559)
                                                        ->__PVT__value.atWrite(0U) 
                    = value;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1560)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1561)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1562)
                                                        ->__PVT__parent 
                    = parent;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1563)
                                                        ->__PVT__prior 
                    = prior;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1564)
                                                        ->__PVT__extension 
                    = extension;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1565)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1566)
                                                        ->__PVT__lineno 
                    = lineno;
                co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
                status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1570)
                    ->__PVT__status;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                ++(vlSymsp->__Vcoverage[22034]);
                co_return;
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write\n"); );
                // Locals
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__287__map_info;
                IData/*31:0*/ __Vtask_get_lsb_pos__290__Vfuncout;
                __Vtask_get_lsb_pos__290__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__305__Vfuncout;
                __Vtask_get_lsb_pos__305__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__306__Vfuncout;
                __Vtask_get_n_bits__306__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__331__verbosity;
                __Vfunc_uvm_report_enabled__331__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__331__severity;
                __Vfunc_uvm_report_enabled__331__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__332__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__333__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__340__verbosity;
                __Vtask_uvm_report_info__340__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__340__line;
                __Vtask_uvm_report_info__340__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__340__report_enabled_checked;
                __Vtask_uvm_report_info__340__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__341__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__342__Vfuncout;
                VlWide<4>/*127:0*/ __Vtemp_6;
                // Body
                VL_KEEP_THIS;
                std::string __VlefCall_13__get_full_name;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_12__get_backdoor;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_11__get_backdoor;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_10__get_backdoor;
                std::string __VlefCond_9;
                std::string __VlefCall_8__get_full_name;
                IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_6__get_n_bits;
                IData/*31:0*/ __VlefCall_5__get_lsb_pos;
                CData/*0:0*/ __VlefCall_4__get_auto_predict;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_3__get_sequencer;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_2__get_default_map;
                IData/*31:0*/ __VlefCall_1__get_n_bits;
                CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
                QData/*63:0*/ pre_write_callbacks__DOT__msk;
                IData/*31:0*/ pre_write_callbacks__DOT__lsb;
                IData/*31:0*/ pre_write_callbacks__DOT__unnamedblk332__DOT__i;
                pre_write_callbacks__DOT__unnamedblk332__DOT__i = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105> pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__cbs;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk335__DOT__cb;
                QData/*63:0*/ unnamedblk336__DOT__final_val;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk336__DOT__bkdr;
                IData/*31:0*/ unnamedblk336__DOT__unnamedblk337__DOT__i;
                unnamedblk336__DOT__unnamedblk337__DOT__i = 0;
                QData/*63:0*/ unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__field_val;
                IData/*31:0*/ unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb;
                IData/*31:0*/ unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk339__DOT__system_map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk339__DOT__unnamedblk340__DOT__fd;
                IData/*31:0*/ unnamedblk339__DOT__unnamedblk341__DOT__status;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk342__DOT__cb;
                IData/*31:0*/ unnamedblk343__DOT__i;
                unnamedblk343__DOT__i = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105> unnamedblk343__DOT__unnamedblk344__DOT__cbs;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> unnamedblk343__DOT__unnamedblk344__DOT__f;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb;
                std::string unnamedblk346__DOT__path_s;
                std::string unnamedblk346__DOT__value_s;
                std::string __VInside_h9e257f48__0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi102> cbs;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                QData/*63:0*/ value;
                {
                    cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi102, vlSymsp, 
                                 VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this});
                    value = 0ULL;
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1585)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1586)
                        ->__PVT__lineno;
                    this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__287__map_info, __VlefCall_0__Xcheck_accessX);
                    map_info = __Vfunc_Xcheck_accessX__287__map_info;
                    if (__VlefCall_0__Xcheck_accessX) {
                        ++(vlSymsp->__Vcoverage[22036]);
                    } else {
                        goto __Vlabel0;
                    }
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    this->__PVT__m_write_in_progress = 1U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1595)
                                                        ->__PVT__value.atWrite(0U) 
                        = (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1595)
                           ->__PVT__value.at(0U) & 
                           (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                            - 1ULL));
                    value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1596)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1598)
                                                        ->__PVT__status = 0U;
                    pre_write_callbacks__DOT__msk = 0ULL;
                    pre_write_callbacks__DOT__lsb = 0U;
                    pre_write_callbacks__DOT__unnamedblk332__DOT__i = 0U;
                    while (VL_LTS_III(32, pre_write_callbacks__DOT__unnamedblk332__DOT__i, this->__PVT__m_fields.size())) {
                        pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__cbs 
                            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105, vlSymsp, this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk332__DOT__i));
                        pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f 
                            = this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk332__DOT__i);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1608)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__290__Vfuncout);
                        pre_write_callbacks__DOT__lsb 
                            = __Vtask_get_lsb_pos__290__Vfuncout;
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1609)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
                        pre_write_callbacks__DOT__msk 
                            = VL_SHIFTL_QQI(64,64,32, 
                                            (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                             - 1ULL), pre_write_callbacks__DOT__lsb);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1610)
                                                        ->__PVT__value.atWrite(0U) 
                            = VL_SHIFTR_QQI(64,64,32, 
                                            (value 
                                             & pre_write_callbacks__DOT__msk), pre_write_callbacks__DOT__lsb);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1611)
                                                        ->__VnoInFunc_pre_write(vlSymsp, rw);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1612)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb);
                        while ((VlNull{} != pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb)) {
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1613)
                                                        ->__PVT__element 
                                = pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__f;
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1614)
                                                        ->__PVT__element_kind = 1U;
                            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1615)
                                                        ->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1612)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, pre_write_callbacks__DOT__unnamedblk332__DOT__unnamedblk333__DOT__unnamedblk334__DOT__cb);
                            ++(vlSymsp->__Vcoverage[22037]);
                        }
                        value = ((value & (~ pre_write_callbacks__DOT__msk)) 
                                 | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1618)
                                                 ->__PVT__value.at(0U), pre_write_callbacks__DOT__lsb));
                        pre_write_callbacks__DOT__unnamedblk332__DOT__i 
                            = ((IData)(1U) + pre_write_callbacks__DOT__unnamedblk332__DOT__i);
                        ++(vlSymsp->__Vcoverage[22038]);
                    }
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1621)
                                                        ->__PVT__element 
                        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1622)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1623)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    this->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                    VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1627)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk335__DOT__cb);
                    while ((VlNull{} != unnamedblk335__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk335__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1628)
                                                        ->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1627)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk335__DOT__cb);
                        ++(vlSymsp->__Vcoverage[22039]);
                    }
                    if ((0U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1630)
                         ->__PVT__status)) {
                        this->__PVT__m_write_in_progress = 0U;
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22041]);
                    }
                    if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1639)
                         ->__PVT__path)) {
                        unnamedblk336__DOT__final_val = 0ULL;
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk336__DOT__bkdr);
                        if ((VlNull{} != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1646)
                             ->__PVT__map)) {
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1647)
                                                        ->__PVT__local_map 
                                = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1647)
                                ->__PVT__map;
                            ++(vlSymsp->__Vcoverage[22042]);
                        } else {
                            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __VlefCall_2__get_default_map);
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1649)
                                                        ->__PVT__local_map 
                                = __VlefCall_2__get_default_map;
                            ++(vlSymsp->__Vcoverage[22043]);
                        }
                        value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1651)
                            ->__PVT__value.at(0U);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1654)
                                                        ->__PVT__kind = 0U;
                        if ((VlNull{} != unnamedblk336__DOT__bkdr)) {
                            VL_NULL_CHECK(unnamedblk336__DOT__bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1656)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                            ++(vlSymsp->__Vcoverage[22044]);
                        } else {
                            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                            ++(vlSymsp->__Vcoverage[22045]);
                        }
                        if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1660)
                             ->__PVT__status)) {
                            this->__PVT__m_write_in_progress = 0U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[22047]);
                        }
                        unnamedblk336__DOT__unnamedblk337__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk336__DOT__unnamedblk337__DOT__i, this->__PVT__m_fields.size())) {
                            unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__field_val = 0ULL;
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk336__DOT__unnamedblk337__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1668)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__305__Vfuncout);
                            unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb 
                                = __Vtask_get_lsb_pos__305__Vfuncout;
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk336__DOT__unnamedblk337__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1669)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__306__Vfuncout);
                            unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz 
                                = __Vtask_get_n_bits__306__Vfuncout;
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk336__DOT__unnamedblk337__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1670)
                                                        ->__VnoInFunc_XpredictX(vlProcess, vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1670)
                                                                                ->__PVT__value.at(0U), unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz) 
                                                                                - 1ULL)), 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__sz) 
                                                                                - 1ULL)), VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1672)
                                                                                ->__PVT__local_map, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__field_val);
                            unnamedblk336__DOT__final_val 
                                = (unnamedblk336__DOT__final_val 
                                   | VL_SHIFTL_QQI(64,64,32, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__field_val, unnamedblk336__DOT__unnamedblk337__DOT__unnamedblk338__DOT__lsb));
                            unnamedblk336__DOT__unnamedblk337__DOT__i 
                                = ((IData)(1U) + unnamedblk336__DOT__unnamedblk337__DOT__i);
                            ++(vlSymsp->__Vcoverage[22048]);
                        }
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1676)
                                                        ->__PVT__kind = 1U;
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1677)
                                                        ->__PVT__value.atWrite(0U) 
                            = unnamedblk336__DOT__final_val;
                        this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1679)
                                                     ->__PVT__local_map, __VInside_h9e257f48__0);
                        if ((("RW"s == __VInside_h9e257f48__0) 
                             || ("WO"s == __VInside_h9e257f48__0))) {
                            if ((VlNull{} != unnamedblk336__DOT__bkdr)) {
                                VL_NULL_CHECK(unnamedblk336__DOT__bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1681)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                                ++(vlSymsp->__Vcoverage[22049]);
                            } else {
                                this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                                ++(vlSymsp->__Vcoverage[22050]);
                            }
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                            ++(vlSymsp->__Vcoverage[22051]);
                        } else {
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1688)
                                                        ->__PVT__status = 1U;
                            ++(vlSymsp->__Vcoverage[22052]);
                        }
                        ++(vlSymsp->__Vcoverage[22053]);
                    } else if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1639)
                                ->__PVT__path)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1696)
                                      ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1696)
                                                        ->__VnoInFunc_get_root_map(vlSymsp, unnamedblk339__DOT__system_map);
                        this->__PVT__m_is_busy = 1U;
                        if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1701)
                             ->__PVT__frontdoor)) {
                            unnamedblk339__DOT__unnamedblk340__DOT__fd 
                                = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1702)
                                ->__PVT__frontdoor;
                            VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1703)
                                                        ->__PVT__rw_info 
                                = rw;
                            if ((VlNull{} == VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1704)
                                 ->__PVT__sequencer)) {
                                VL_NULL_CHECK(unnamedblk339__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1705)
                                                        ->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_3__get_sequencer);
                                VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1705)
                                                        ->__PVT__sequencer 
                                    = __VlefCall_3__get_sequencer;
                                ++(vlSymsp->__Vcoverage[22054]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22055]);
                            }
                            co_await VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1706)
                                                        ->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk339__DOT__unnamedblk340__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1706)
                                                                            ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1706)
                                                                            ->__PVT__parent, 0xffffffffU, 1U);
                            ++(vlSymsp->__Vcoverage[22056]);
                        } else {
                            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1712)
                                                   ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1712)
                                                        ->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
                            ++(vlSymsp->__Vcoverage[22057]);
                        }
                        this->__PVT__m_is_busy = 0U;
                        VL_NULL_CHECK(unnamedblk339__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1718)
                                                        ->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_4__get_auto_predict);
                        if (__VlefCall_4__get_auto_predict) {
                            unnamedblk339__DOT__unnamedblk341__DOT__status = 0U;
                            if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1720)
                                 ->__PVT__status)) {
                                this->__VnoInFunc_sample(vlSymsp, value, 0xffffffffffffffffULL, 0U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1721)
                                                         ->__PVT__map);
                                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1722)
                                                        ->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1722)
                                                                               ->__PVT__offset, 0U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1722)
                                                                               ->__PVT__map);
                                ++(vlSymsp->__Vcoverage[22058]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22059]);
                            }
                            unnamedblk339__DOT__unnamedblk341__DOT__status 
                                = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1725)
                                ->__PVT__status;
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1727)
                                                        ->__PVT__status 
                                = unnamedblk339__DOT__unnamedblk341__DOT__status;
                            ++(vlSymsp->__Vcoverage[22060]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22061]);
                        }
                        ++(vlSymsp->__Vcoverage[22062]);
                    }
                    value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1733)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1736)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk342__DOT__cb);
                    while ((VlNull{} != unnamedblk342__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk342__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1737)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1736)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk342__DOT__cb);
                        ++(vlSymsp->__Vcoverage[22063]);
                    }
                    this->__VnoInFunc_post_write(vlSymsp, rw);
                    unnamedblk343__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk343__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk343__DOT__unnamedblk344__DOT__cbs 
                            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105, vlSymsp, this->__PVT__m_fields.at(unnamedblk343__DOT__i));
                        unnamedblk343__DOT__unnamedblk344__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk343__DOT__i);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1745)
                                                        ->__PVT__element 
                            = unnamedblk343__DOT__unnamedblk344__DOT__f;
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1746)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1747)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_5__get_lsb_pos);
                        VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1747)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_6__get_n_bits);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1747)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_5__get_lsb_pos) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_6__get_n_bits) 
                                  - 1ULL));
                        VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1749)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb);
                        while ((VlNull{} != unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1750)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1749)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk343__DOT__unnamedblk344__DOT__unnamedblk345__DOT__cb);
                            ++(vlSymsp->__Vcoverage[22064]);
                        }
                        VL_NULL_CHECK(unnamedblk343__DOT__unnamedblk344__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1751)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                        unnamedblk343__DOT__i = ((IData)(1U) 
                                                 + unnamedblk343__DOT__i);
                        ++(vlSymsp->__Vcoverage[22065]);
                    }
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1754)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1755)
                                                        ->__PVT__element 
                        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1756)
                                                        ->__PVT__element_kind = 0U;
                    this->__Vfunc_uvm_report_enabled__331__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__331__severity = 0U;
                    __Vfunc_uvm_report_enabled__331__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__332__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__332__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__333__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__333__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__331__verbosity, (IData)(__Vfunc_uvm_report_enabled__331__severity), this->__Vfunc_uvm_report_enabled__331__id, __VlefCall_7__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_7__uvm_report_enabled)) {
                        unnamedblk346__DOT__path_s = ""s;
                        unnamedblk346__DOT__value_s = ""s;
                        if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1761)
                             ->__PVT__path)) {
                            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1762)
                                 ->__PVT__frontdoor)) {
                                __VlefCond_9 = "user frontdoor"s;
                            } else {
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1763)
                                              ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1763)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                                __VlefCond_9 = VL_CONCATN_NNN("map "s, __VlefCall_8__get_full_name);
                            }
                            unnamedblk346__DOT__path_s 
                                = __VlefCond_9;
                            ++(vlSymsp->__Vcoverage[22068]);
                        } else {
                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_10__get_backdoor);
                            __Vtemp_6[0U] = 0x646f6f72U;
                            __Vtemp_6[1U] = 0x6261636bU;
                            if ((VlNull{} != __VlefCall_10__get_backdoor)) {
                                __Vtemp_6[2U] = 0x73657220U;
                                __Vtemp_6[3U] = 0x00000075U;
                            } else {
                                __Vtemp_6[2U] = 0x44504920U;
                                __Vtemp_6[3U] = 0U;
                            }
                            unnamedblk346__DOT__path_s 
                                = VL_CVT_PACK_STR_NW(4, __Vtemp_6);
                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_11__get_backdoor);
                            if ((VlNull{} != __VlefCall_11__get_backdoor)) {
                                ++(vlSymsp->__Vcoverage[22066]);
                            }
                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_12__get_backdoor);
                            if ((VlNull{} == __VlefCall_12__get_backdoor)) {
                                ++(vlSymsp->__Vcoverage[22067]);
                            }
                            ++(vlSymsp->__Vcoverage[22069]);
                        }
                        unnamedblk346__DOT__value_s 
                            = VL_SFORMATF_N_NX("=0x%0x",0,
                                               64,VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1767)
                                               ->__PVT__value.at(0U)) ;
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                        __Vtask_uvm_report_info__340__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report_info__340__context_name = ""s;
                        __Vtask_uvm_report_info__340__line = 0U;
                        this->__Vtask_uvm_report_info__340__filename = ""s;
                        __Vtask_uvm_report_info__340__verbosity = 0x0000012cU;
                        this->__Vtask_uvm_report_info__340__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Wrote register via "s, unnamedblk346__DOT__path_s), ": "s), __VlefCall_13__get_full_name), unnamedblk346__DOT__value_s));
                        this->__Vtask_uvm_report_info__340__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__341__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__341__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__342__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__342__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__340__id, this->__Vtask_uvm_report_info__340__message, __Vtask_uvm_report_info__340__verbosity, this->__Vtask_uvm_report_info__340__filename, __Vtask_uvm_report_info__340__line, this->__Vtask_uvm_report_info__340__context_name, (IData)(__Vtask_uvm_report_info__340__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[435]);
                        ++(vlSymsp->__Vcoverage[22070]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22071]);
                    }
                    this->__PVT__m_write_in_progress = 0U;
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22072]);
                co_return;
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read\n"); );
                // Locals
                IData/*31:0*/ __Vtask_XreadX__346__status;
                __Vtask_XreadX__346__status = 0;
                QData/*63:0*/ __Vtask_XreadX__346__value;
                __Vtask_XreadX__346__value = 0;
                // Body
                VL_KEEP_THIS;
                status = 0U;
                value = 0ULL;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__346__status, __Vtask_XreadX__346__value, path, map, parent, prior, extension, fname, lineno);
                status = __Vtask_XreadX__346__status;
                value = __Vtask_XreadX__346__value;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                ++(vlSymsp->__Vcoverage[22073]);
                co_return;
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX\n"); );
                // Body
                VL_KEEP_THIS;
                std::string __VlefCall_0__get_full_name;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw;
                status = 0U;
                value = 0ULL;
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1811)
                                                        ->__PVT__element 
                    = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this};
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1812)
                                                        ->__PVT__element_kind = 0U;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1813)
                                                        ->__PVT__kind = 0U;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1814)
                                                        ->__PVT__value.atWrite(0U) = 0ULL;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1815)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1816)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1817)
                                                        ->__PVT__parent 
                    = parent;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1818)
                                                        ->__PVT__prior 
                    = prior;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1819)
                                                        ->__PVT__extension 
                    = extension;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1820)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1821)
                                                        ->__PVT__lineno 
                    = lineno;
                co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
                status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1825)
                    ->__PVT__status;
                value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1826)
                    ->__PVT__value.at(0U);
                ++(vlSymsp->__Vcoverage[22074]);
                co_return;
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read\n"); );
                // Locals
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__352__map_info;
                CData/*0:0*/ __Vtask_do_check__380__Vfuncout;
                __Vtask_do_check__380__Vfuncout = 0;
                CData/*0:0*/ __Vtask_do_check__390__Vfuncout;
                __Vtask_do_check__390__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__405__verbosity;
                __Vfunc_uvm_report_enabled__405__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__405__severity;
                __Vfunc_uvm_report_enabled__405__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__406__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__407__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__414__verbosity;
                __Vtask_uvm_report_info__414__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__414__line;
                __Vtask_uvm_report_info__414__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__414__report_enabled_checked;
                __Vtask_uvm_report_info__414__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__415__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__416__Vfuncout;
                VlWide<4>/*127:0*/ __Vtemp_6;
                // Body
                VL_KEEP_THIS;
                std::string __VlefCall_22__get_full_name;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_21__get_backdoor;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_20__get_backdoor;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_19__get_backdoor;
                std::string __VlefCond_18;
                std::string __VlefCall_17__get_full_name;
                IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_15__get_n_bits;
                IData/*31:0*/ __VlefCall_14__get_lsb_pos;
                CData/*0:0*/ __VlefCall_13__get_check_on_read;
                CData/*0:0*/ __VlefCall_12__get_auto_predict;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_11__get_sequencer;
                CData/*0:0*/ __VlefCall_10__get_check_on_read;
                CData/*0:0*/ __VlefCall_9__get_check_on_read;
                IData/*31:0*/ __VlefCall_8__get_lsb_pos;
                IData/*31:0*/ __VlefCall_7__get_n_bits;
                IData/*31:0*/ __VlefCall_6__get_lsb_pos;
                IData/*31:0*/ __VlefCall_5__get_n_bits;
                IData/*31:0*/ __VlefCall_4__get_lsb_pos;
                IData/*31:0*/ __VlefCall_3__get_n_bits;
                CData/*0:0*/ __VlefCall_2__get_check_on_read;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_1__get_default_map;
                CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
                IData/*31:0*/ unnamedblk347__DOT__i;
                unnamedblk347__DOT__i = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105> unnamedblk347__DOT__unnamedblk348__DOT__cbs;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> unnamedblk347__DOT__unnamedblk348__DOT__f;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk350__DOT__cb;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk351__DOT__bkdr;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk351__DOT__map;
                QData/*63:0*/ unnamedblk351__DOT__unnamedblk352__DOT__wo_mask;
                IData/*31:0*/ unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i;
                unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i = 0;
                std::string unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc;
                QData/*63:0*/ unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk355__DOT__saved;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk356__DOT__system_map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk356__DOT__unnamedblk357__DOT__fd;
                IData/*31:0*/ unnamedblk356__DOT__unnamedblk358__DOT__status;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk359__DOT__cb;
                IData/*31:0*/ unnamedblk360__DOT__i;
                unnamedblk360__DOT__i = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105> unnamedblk360__DOT__unnamedblk361__DOT__cbs;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> unnamedblk360__DOT__unnamedblk361__DOT__f;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb;
                std::string unnamedblk363__DOT__path_s;
                std::string unnamedblk363__DOT__value_s;
                std::string __VInside_h9dcc0f88__1;
                std::string __VInside_h9dcc0f88__0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi102> cbs;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                QData/*63:0*/ value;
                QData/*63:0*/ exp;
                {
                    cbs = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi102, vlSymsp, 
                                 VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this});
                    value = 0ULL;
                    exp = 0ULL;
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1840)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1841)
                        ->__PVT__lineno;
                    this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__352__map_info, __VlefCall_0__Xcheck_accessX);
                    map_info = __Vfunc_Xcheck_accessX__352__map_info;
                    if (__VlefCall_0__Xcheck_accessX) {
                        ++(vlSymsp->__Vcoverage[22076]);
                    } else {
                        goto __Vlabel0;
                    }
                    this->__PVT__m_read_in_progress = 1U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1848)
                                                        ->__PVT__status = 0U;
                    unnamedblk347__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk347__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk347__DOT__unnamedblk348__DOT__cbs 
                            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105, vlSymsp, this->__PVT__m_fields.at(unnamedblk347__DOT__i));
                        unnamedblk347__DOT__unnamedblk348__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk347__DOT__i);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1854)
                                                        ->__PVT__element 
                            = unnamedblk347__DOT__unnamedblk348__DOT__f;
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1855)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk347__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1856)
                                                        ->__VnoInFunc_pre_read(vlSymsp, rw);
                        VL_NULL_CHECK(unnamedblk347__DOT__unnamedblk348__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1857)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb);
                        while ((VlNull{} != unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1858)
                                                        ->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk347__DOT__unnamedblk348__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1857)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk347__DOT__unnamedblk348__DOT__unnamedblk349__DOT__cb);
                            ++(vlSymsp->__Vcoverage[22077]);
                        }
                        unnamedblk347__DOT__i = ((IData)(1U) 
                                                 + unnamedblk347__DOT__i);
                        ++(vlSymsp->__Vcoverage[22078]);
                    }
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1861)
                                                        ->__PVT__element 
                        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1862)
                                                        ->__PVT__element_kind = 0U;
                    this->__VnoInFunc_pre_read(vlSymsp, rw);
                    VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1866)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk350__DOT__cb);
                    while ((VlNull{} != unnamedblk350__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk350__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1867)
                                                        ->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1866)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk350__DOT__cb);
                        ++(vlSymsp->__Vcoverage[22079]);
                    }
                    if ((0U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1869)
                         ->__PVT__status)) {
                        this->__PVT__m_read_in_progress = 0U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22081]);
                    }
                    if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1876)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk351__DOT__bkdr);
                        if ((VlNull{} != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1883)
                             ->__PVT__map)) {
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1884)
                                                        ->__PVT__local_map 
                                = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1884)
                                ->__PVT__map;
                            ++(vlSymsp->__Vcoverage[22082]);
                        } else {
                            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __VlefCall_1__get_default_map);
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1886)
                                                        ->__PVT__local_map 
                                = __VlefCall_1__get_default_map;
                            ++(vlSymsp->__Vcoverage[22083]);
                        }
                        unnamedblk351__DOT__map = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1888)
                            ->__PVT__local_map;
                        VL_NULL_CHECK(unnamedblk351__DOT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1890)
                                                        ->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_2__get_check_on_read);
                        if (__VlefCall_2__get_check_on_read) {
                            this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, exp);
                            ++(vlSymsp->__Vcoverage[22084]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22085]);
                        }
                        this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1892)
                                                     ->__PVT__local_map, __VInside_h9dcc0f88__0);
                        if ((("RW"s == __VInside_h9dcc0f88__0) 
                             || ("RO"s == __VInside_h9dcc0f88__0))) {
                            if ((VlNull{} != unnamedblk351__DOT__bkdr)) {
                                VL_NULL_CHECK(unnamedblk351__DOT__bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1894)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                                ++(vlSymsp->__Vcoverage[22086]);
                            } else {
                                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                                ++(vlSymsp->__Vcoverage[22087]);
                            }
                            ++(vlSymsp->__Vcoverage[22088]);
                        } else {
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1899)
                                                        ->__PVT__status = 1U;
                            ++(vlSymsp->__Vcoverage[22089]);
                        }
                        value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1902)
                            ->__PVT__value.at(0U);
                        if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1905)
                             ->__PVT__status)) {
                            unnamedblk351__DOT__unnamedblk352__DOT__wo_mask = 0ULL;
                            unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i = 0U;
                            while (VL_LTS_III(32, unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i, this->__PVT__m_fields.size())) {
                                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1911)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1911)
                                                                                ->__PVT__local_map, unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc);
                                if (((((("RC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc) 
                                        | ("WRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                       | ("WSRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                      | ("W1SRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                     | ("W0SRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1917)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1918)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
                                    value = (value 
                                             & (~ VL_SHIFTL_QQI(64,64,32, 
                                                                (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_3__get_n_bits) 
                                                                 - 1ULL), __VlefCall_4__get_lsb_pos)));
                                    ++(vlSymsp->__Vcoverage[22104]);
                                } else {
                                    if (((((("RS"s 
                                             == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc) 
                                            | ("WRS"s 
                                               == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                           | ("WCRS"s 
                                              == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                          | ("W1CRS"s 
                                             == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                         | ("W0CRS"s 
                                            == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) {
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1925)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
                                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1926)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
                                        value = (value 
                                                 | VL_SHIFTL_QQI(64,64,32, 
                                                                 (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                                                                  - 1ULL), __VlefCall_6__get_lsb_pos));
                                        ++(vlSymsp->__Vcoverage[22097]);
                                    } else {
                                        if ((((("WO"s 
                                                == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc) 
                                               | ("WOC"s 
                                                  == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                              | ("WOS"s 
                                                 == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                             | ("WO1"s 
                                                == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) {
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1932)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
                                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1933)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
                                            unnamedblk351__DOT__unnamedblk352__DOT__wo_mask 
                                                = (unnamedblk351__DOT__unnamedblk352__DOT__wo_mask 
                                                   | VL_SHIFTL_QQI(64,64,32, 
                                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_7__get_n_bits) 
                                                                    - 1ULL), __VlefCall_8__get_lsb_pos));
                                            ++(vlSymsp->__Vcoverage[22090]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[22091]);
                                        }
                                        if (("WO1"s 
                                             == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                            ++(vlSymsp->__Vcoverage[22092]);
                                        }
                                        if (("WOS"s 
                                             == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                            ++(vlSymsp->__Vcoverage[22093]);
                                        }
                                        if (("WOC"s 
                                             == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                            ++(vlSymsp->__Vcoverage[22094]);
                                        }
                                        if (("WO"s 
                                             == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                            ++(vlSymsp->__Vcoverage[22095]);
                                        }
                                        if ((1U & (
                                                   (((~ 
                                                      ("WO"s 
                                                       == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                                     & (~ 
                                                        ("WOC"s 
                                                         == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) 
                                                    & (~ 
                                                       ("WOS"s 
                                                        == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) 
                                                   & (~ 
                                                      ("WO1"s 
                                                       == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))))) {
                                            ++(vlSymsp->__Vcoverage[22096]);
                                        }
                                    }
                                    if (("W0CRS"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                        ++(vlSymsp->__Vcoverage[22098]);
                                    }
                                    if (("W1CRS"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                        ++(vlSymsp->__Vcoverage[22099]);
                                    }
                                    if (("WCRS"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                        ++(vlSymsp->__Vcoverage[22100]);
                                    }
                                    if (("WRS"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                        ++(vlSymsp->__Vcoverage[22101]);
                                    }
                                    if (("RS"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                        ++(vlSymsp->__Vcoverage[22102]);
                                    }
                                    if ((1U & (((((~ 
                                                   ("RS"s 
                                                    == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                                  & (~ 
                                                     ("WRS"s 
                                                      == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) 
                                                 & (~ 
                                                    ("WCRS"s 
                                                     == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) 
                                                & (~ 
                                                   ("W1CRS"s 
                                                    == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) 
                                               & (~ 
                                                  ("W0CRS"s 
                                                   == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))))) {
                                        ++(vlSymsp->__Vcoverage[22103]);
                                    }
                                }
                                unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i 
                                    = ((IData)(1U) 
                                       + unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__i);
                                ++(vlSymsp->__Vcoverage[22111]);
                            }
                            this->__VnoInFunc_get_rights(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1937)
                                                         ->__PVT__local_map, __VInside_h9dcc0f88__1);
                            if ((("RW"s == __VInside_h9dcc0f88__1) 
                                 || ("RO"s == __VInside_h9dcc0f88__1))) {
                                if ((value != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1939)
                                     ->__PVT__value.at(0U))) {
                                    unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk355__DOT__saved = 0ULL;
                                    unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk355__DOT__saved 
                                        = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1941)
                                        ->__PVT__value.at(0U);
                                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1942)
                                                        ->__PVT__value.atWrite(0U) 
                                        = value;
                                    if ((VlNull{} != unnamedblk351__DOT__bkdr)) {
                                        VL_NULL_CHECK(unnamedblk351__DOT__bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1944)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                                        ++(vlSymsp->__Vcoverage[22112]);
                                    } else {
                                        this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                                        ++(vlSymsp->__Vcoverage[22113]);
                                    }
                                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1947)
                                                        ->__PVT__value.atWrite(0U) 
                                        = unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk355__DOT__saved;
                                    ++(vlSymsp->__Vcoverage[22114]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[22115]);
                                }
                                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1950)
                                                        ->__PVT__value.atWrite(0U) 
                                    = (VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1950)
                                       ->__PVT__value.at(0U) 
                                       & (~ unnamedblk351__DOT__unnamedblk352__DOT__wo_mask));
                                VL_NULL_CHECK(unnamedblk351__DOT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1952)
                                                        ->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_9__get_check_on_read);
                                if (((IData)(__VlefCall_9__get_check_on_read) 
                                     && (1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1953)
                                         ->__PVT__status))) {
                                    this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1954)
                                                               ->__PVT__value.at(0U), unnamedblk351__DOT__map, __Vtask_do_check__380__Vfuncout);
                                    ++(vlSymsp->__Vcoverage[22116]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[22117]);
                                }
                                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                                ++(vlSymsp->__Vcoverage[22118]);
                            } else {
                                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1960)
                                                        ->__PVT__status = 1U;
                                ++(vlSymsp->__Vcoverage[22119]);
                            }
                            if (("W0SRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                ++(vlSymsp->__Vcoverage[22105]);
                            }
                            if (("W1SRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                ++(vlSymsp->__Vcoverage[22106]);
                            }
                            if (("WSRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                ++(vlSymsp->__Vcoverage[22107]);
                            }
                            if (("WRC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                ++(vlSymsp->__Vcoverage[22108]);
                            }
                            if (("RC"s == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) {
                                ++(vlSymsp->__Vcoverage[22109]);
                            }
                            if ((1U & (((((~ ("RC"s 
                                              == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc)) 
                                          & (~ ("WRC"s 
                                                == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) 
                                         & (~ ("WSRC"s 
                                               == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) 
                                        & (~ ("W1SRC"s 
                                              == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))) 
                                       & (~ ("W0SRC"s 
                                             == unnamedblk351__DOT__unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__acc))))) {
                                ++(vlSymsp->__Vcoverage[22110]);
                            }
                            ++(vlSymsp->__Vcoverage[22120]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22121]);
                        }
                        ++(vlSymsp->__Vcoverage[22122]);
                    } else if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1876)
                                ->__PVT__path)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1969)
                                      ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1969)
                                                        ->__VnoInFunc_get_root_map(vlSymsp, unnamedblk356__DOT__system_map);
                        this->__PVT__m_is_busy = 1U;
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1973)
                                      ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1973)
                                                        ->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_10__get_check_on_read);
                        if (__VlefCall_10__get_check_on_read) {
                            this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, exp);
                            ++(vlSymsp->__Vcoverage[22123]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22124]);
                        }
                        if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1976)
                             ->__PVT__frontdoor)) {
                            unnamedblk356__DOT__unnamedblk357__DOT__fd 
                                = VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1977)
                                ->__PVT__frontdoor;
                            VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1978)
                                                        ->__PVT__rw_info 
                                = rw;
                            if ((VlNull{} == VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1979)
                                 ->__PVT__sequencer)) {
                                VL_NULL_CHECK(unnamedblk356__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1980)
                                                        ->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_11__get_sequencer);
                                VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1980)
                                                        ->__PVT__sequencer 
                                    = __VlefCall_11__get_sequencer;
                                ++(vlSymsp->__Vcoverage[22125]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22126]);
                            }
                            co_await VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1981)
                                                        ->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk356__DOT__unnamedblk357__DOT__fd, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1981)
                                                                            ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1981)
                                                                            ->__PVT__parent, 0xffffffffU, 1U);
                            ++(vlSymsp->__Vcoverage[22127]);
                        } else {
                            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1986)
                                                   ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1986)
                                                        ->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
                            ++(vlSymsp->__Vcoverage[22128]);
                        }
                        this->__PVT__m_is_busy = 0U;
                        VL_NULL_CHECK(unnamedblk356__DOT__system_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1991)
                                                        ->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_12__get_auto_predict);
                        if (__VlefCall_12__get_auto_predict) {
                            unnamedblk356__DOT__unnamedblk358__DOT__status = 0U;
                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1993)
                                          ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1993)
                                                        ->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_13__get_check_on_read);
                            if (((IData)(__VlefCall_13__get_check_on_read) 
                                 && (1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1994)
                                     ->__PVT__status))) {
                                this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1995)
                                                           ->__PVT__value.at(0U), unnamedblk356__DOT__system_map, __Vtask_do_check__390__Vfuncout);
                                ++(vlSymsp->__Vcoverage[22129]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22130]);
                            }
                            if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1998)
                                 ->__PVT__status)) {
                                this->__VnoInFunc_sample(vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1999)
                                                         ->__PVT__value.at(0U), 0xffffffffffffffffULL, 1U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 1999)
                                                         ->__PVT__map);
                                VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2000)
                                                        ->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2000)
                                                                               ->__PVT__offset, 1U, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2000)
                                                                               ->__PVT__map);
                                ++(vlSymsp->__Vcoverage[22131]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22132]);
                            }
                            unnamedblk356__DOT__unnamedblk358__DOT__status 
                                = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2003)
                                ->__PVT__status;
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2005)
                                                        ->__PVT__status 
                                = unnamedblk356__DOT__unnamedblk358__DOT__status;
                            ++(vlSymsp->__Vcoverage[22133]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22134]);
                        }
                        ++(vlSymsp->__Vcoverage[22135]);
                    }
                    value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2011)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2014)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk359__DOT__cb);
                    while ((VlNull{} != unnamedblk359__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk359__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2015)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2014)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk359__DOT__cb);
                        ++(vlSymsp->__Vcoverage[22136]);
                    }
                    this->__VnoInFunc_post_read(vlSymsp, rw);
                    unnamedblk360__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk360__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk360__DOT__unnamedblk361__DOT__cbs 
                            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105, vlSymsp, this->__PVT__m_fields.at(unnamedblk360__DOT__i));
                        unnamedblk360__DOT__unnamedblk361__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk360__DOT__i);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2023)
                                                        ->__PVT__element 
                            = unnamedblk360__DOT__unnamedblk361__DOT__f;
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2024)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2025)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_14__get_lsb_pos);
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2025)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_15__get_n_bits);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2025)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_14__get_lsb_pos) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_15__get_n_bits) 
                                  - 1ULL));
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2027)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb);
                        while ((VlNull{} != unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2028)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__cbs, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2027)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk360__DOT__unnamedblk361__DOT__unnamedblk362__DOT__cb);
                            ++(vlSymsp->__Vcoverage[22137]);
                        }
                        VL_NULL_CHECK(unnamedblk360__DOT__unnamedblk361__DOT__f, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2029)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                        unnamedblk360__DOT__i = ((IData)(1U) 
                                                 + unnamedblk360__DOT__i);
                        ++(vlSymsp->__Vcoverage[22138]);
                    }
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2032)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2033)
                                                        ->__PVT__element 
                        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2034)
                                                        ->__PVT__element_kind = 0U;
                    this->__Vfunc_uvm_report_enabled__405__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__405__severity = 0U;
                    __Vfunc_uvm_report_enabled__405__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__406__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__406__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__407__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__407__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__405__verbosity, (IData)(__Vfunc_uvm_report_enabled__405__severity), this->__Vfunc_uvm_report_enabled__405__id, __VlefCall_16__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_16__uvm_report_enabled)) {
                        unnamedblk363__DOT__path_s = ""s;
                        unnamedblk363__DOT__value_s = ""s;
                        if ((0U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2039)
                             ->__PVT__path)) {
                            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2040)
                                 ->__PVT__frontdoor)) {
                                __VlefCond_18 = "user frontdoor"s;
                            } else {
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2041)
                                              ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2041)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                                __VlefCond_18 = VL_CONCATN_NNN("map "s, __VlefCall_17__get_full_name);
                            }
                            unnamedblk363__DOT__path_s 
                                = __VlefCond_18;
                            ++(vlSymsp->__Vcoverage[22141]);
                        } else {
                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_19__get_backdoor);
                            __Vtemp_6[0U] = 0x646f6f72U;
                            __Vtemp_6[1U] = 0x6261636bU;
                            if ((VlNull{} != __VlefCall_19__get_backdoor)) {
                                __Vtemp_6[2U] = 0x73657220U;
                                __Vtemp_6[3U] = 0x00000075U;
                            } else {
                                __Vtemp_6[2U] = 0x44504920U;
                                __Vtemp_6[3U] = 0U;
                            }
                            unnamedblk363__DOT__path_s 
                                = VL_CVT_PACK_STR_NW(4, __Vtemp_6);
                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_20__get_backdoor);
                            if ((VlNull{} != __VlefCall_20__get_backdoor)) {
                                ++(vlSymsp->__Vcoverage[22139]);
                            }
                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_21__get_backdoor);
                            if ((VlNull{} == __VlefCall_21__get_backdoor)) {
                                ++(vlSymsp->__Vcoverage[22140]);
                            }
                            ++(vlSymsp->__Vcoverage[22142]);
                        }
                        unnamedblk363__DOT__value_s 
                            = VL_SFORMATF_N_NX("=%0x",0,
                                               64,VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2045)
                                               ->__PVT__value.at(0U)) ;
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                        __Vtask_uvm_report_info__414__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report_info__414__context_name = ""s;
                        __Vtask_uvm_report_info__414__line = 0U;
                        this->__Vtask_uvm_report_info__414__filename = ""s;
                        __Vtask_uvm_report_info__414__verbosity = 0x0000012cU;
                        this->__Vtask_uvm_report_info__414__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Read  register via "s, unnamedblk363__DOT__path_s), ": "s), __VlefCall_22__get_full_name), unnamedblk363__DOT__value_s));
                        this->__Vtask_uvm_report_info__414__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__415__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__415__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__416__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__416__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__414__id, this->__Vtask_uvm_report_info__414__message, __Vtask_uvm_report_info__414__verbosity, this->__Vtask_uvm_report_info__414__filename, __Vtask_uvm_report_info__414__line, this->__Vtask_uvm_report_info__414__context_name, (IData)(__Vtask_uvm_report_info__414__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[435]);
                        ++(vlSymsp->__Vcoverage[22143]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22144]);
                    }
                    this->__PVT__m_read_in_progress = 0U;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22145]);
                co_return;
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__421__verbosity;
                __Vfunc_uvm_report_enabled__421__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__421__severity;
                __Vfunc_uvm_report_enabled__421__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__422__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__423__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__426__verbosity;
                __Vtask_uvm_report_warning__426__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__426__line;
                __Vtask_uvm_report_warning__426__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__426__report_enabled_checked;
                __Vtask_uvm_report_warning__426__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__427__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__428__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__436__verbosity;
                __Vfunc_uvm_report_enabled__436__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__436__severity;
                __Vfunc_uvm_report_enabled__436__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__437__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__438__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__441__verbosity;
                __Vtask_uvm_report_error__441__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__441__line;
                __Vtask_uvm_report_error__441__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__441__report_enabled_checked;
                __Vtask_uvm_report_error__441__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__442__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__443__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__446__verbosity;
                __Vfunc_uvm_report_enabled__446__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__446__severity;
                __Vfunc_uvm_report_enabled__446__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__447__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__448__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__452__verbosity;
                __Vtask_uvm_report_error__452__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__452__line;
                __Vtask_uvm_report_error__452__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__452__report_enabled_checked;
                __Vtask_uvm_report_error__452__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__453__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__454__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__457__verbosity;
                __Vfunc_uvm_report_enabled__457__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__457__severity;
                __Vfunc_uvm_report_enabled__457__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__458__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__459__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__464__verbosity;
                __Vtask_uvm_report_error__464__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__464__line;
                __Vtask_uvm_report_error__464__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__464__report_enabled_checked;
                __Vtask_uvm_report_error__464__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__465__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__466__Vfuncout;
                // Body
                std::string __VlefCall_18__get_full_name;
                std::string __VlefCall_17__get_full_name;
                IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
                std::string __VlefCall_15__get_full_name;
                std::string __VlefCall_14__get_type_name;
                IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
                std::string __VlefCall_12__get_type_name;
                std::string __VlefCall_11__get_type_name;
                IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
                std::string __VlefCall_9__get_type_name;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_8__get_local_map;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_7__get_backdoor;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_6__get_backdoor;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __VlefCall_5__backdoor;
                std::string __VlefCall_4__get_full_name;
                IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
                CData/*0:0*/ __VlefLogAnd_2;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_1__get_backdoor;
                IData/*31:0*/ __VlefCall_0__get_default_door;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk364__DOT__bkdr_map;
                CData/*0:0*/ __VExpr_hba0e77b0__0;
                __VExpr_hba0e77b0__0 = 0;
                {
                    Xcheck_accessX__Vfuncrtn = 0U;
                    if ((3U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2062)
                         ->__PVT__path)) {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2063)
                                                        ->__VnoInFunc_get_default_door(vlSymsp, __VlefCall_0__get_default_door);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2063)
                                                        ->__PVT__path 
                            = __VlefCall_0__get_default_door;
                        ++(vlSymsp->__Vcoverage[22146]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22147]);
                    }
                    if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2065)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_1__get_backdoor);
                        __VlefLogAnd_2 = (VlNull{} 
                                          == __VlefCall_1__get_backdoor);
                        if (__VlefLogAnd_2) {
                            this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VExpr_hba0e77b0__0);
                            __VlefLogAnd_2 = (1U & 
                                              (~ (IData)(__VExpr_hba0e77b0__0)));
                        }
                        if (__VlefLogAnd_2) {
                            this->__Vfunc_uvm_report_enabled__421__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__421__severity = 1U;
                            __Vfunc_uvm_report_enabled__421__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__422__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__422__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__423__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__423__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__421__verbosity, (IData)(__Vfunc_uvm_report_enabled__421__severity), this->__Vfunc_uvm_report_enabled__421__id, __VlefCall_3__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                                __Vtask_uvm_report_warning__426__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_warning__426__context_name = ""s;
                                __Vtask_uvm_report_warning__426__line = 0x00000815U;
                                this->__Vtask_uvm_report_warning__426__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_warning__426__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__426__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN("No backdoor access available for register '"s, __VlefCall_4__get_full_name), "' . Using frontdoor instead."s));
                                this->__Vtask_uvm_report_warning__426__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__427__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__427__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__428__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__428__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__426__id, this->__Vtask_uvm_report_warning__426__message, __Vtask_uvm_report_warning__426__verbosity, this->__Vtask_uvm_report_warning__426__filename, __Vtask_uvm_report_warning__426__line, this->__Vtask_uvm_report_warning__426__context_name, (IData)(__Vtask_uvm_report_warning__426__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[436]);
                                ++(vlSymsp->__Vcoverage[22148]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22149]);
                            }
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2070)
                                                        ->__PVT__path = 0U;
                            ++(vlSymsp->__Vcoverage[22154]);
                        } else if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2072)
                                    ->__PVT__map)) {
                            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, unnamedblk364__DOT__bkdr_map);
                            if ((VlNull{} != unnamedblk364__DOT__bkdr_map)) {
                                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2075)
                                                        ->__PVT__map 
                                    = unnamedblk364__DOT__bkdr_map;
                                ++(vlSymsp->__Vcoverage[22150]);
                            } else {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_5__backdoor);
                                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2077)
                                                        ->__PVT__map 
                                    = __VlefCall_5__backdoor;
                                ++(vlSymsp->__Vcoverage[22151]);
                            }
                            ++(vlSymsp->__Vcoverage[22152]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22153]);
                        }
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_6__get_backdoor);
                        if (((VlNull{} == __VlefCall_6__get_backdoor) 
                             && (1U & (~ (IData)(__VExpr_hba0e77b0__0))))) {
                            ++(vlSymsp->__Vcoverage[22155]);
                        }
                        if (__VExpr_hba0e77b0__0) {
                            ++(vlSymsp->__Vcoverage[22156]);
                        }
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_7__get_backdoor);
                        if ((VlNull{} != __VlefCall_7__get_backdoor)) {
                            ++(vlSymsp->__Vcoverage[22157]);
                        }
                        ++(vlSymsp->__Vcoverage[22158]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22159]);
                    }
                    if ((1U != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2083)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2085)
                                                        ->__PVT__map, __VlefCall_8__get_local_map);
                        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2085)
                                                        ->__PVT__local_map 
                            = __VlefCall_8__get_local_map;
                        if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2087)
                             ->__PVT__local_map)) {
                            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2088)
                                 ->__PVT__map)) {
                                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
                                this->__Vfunc_uvm_report_enabled__436__id 
                                    = VL_CVT_PACK_STR_NN(__VlefCall_9__get_type_name);
                                __Vfunc_uvm_report_enabled__436__severity = 2U;
                                __Vfunc_uvm_report_enabled__436__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__437__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__437__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__438__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__438__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__436__verbosity, (IData)(__Vfunc_uvm_report_enabled__436__severity), this->__Vfunc_uvm_report_enabled__436__id, __VlefCall_10__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_10__uvm_report_enabled)) {
                                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                                    __Vtask_uvm_report_error__441__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_error__441__context_name = ""s;
                                    __Vtask_uvm_report_error__441__line = 0x00000829U;
                                    this->__Vtask_uvm_report_error__441__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_error__441__verbosity = 0U;
                                    this->__Vtask_uvm_report_error__441__message = "Unable to physically access register with null map"s;
                                    this->__Vtask_uvm_report_error__441__id 
                                        = VL_CVT_PACK_STR_NN(__VlefCall_11__get_type_name);
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__442__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                        = __Vfunc_get__442__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__443__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                        = __Vtask_get_root__443__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__441__id, this->__Vtask_uvm_report_error__441__message, __Vtask_uvm_report_error__441__verbosity, this->__Vtask_uvm_report_error__441__filename, __Vtask_uvm_report_error__441__line, this->__Vtask_uvm_report_error__441__context_name, (IData)(__Vtask_uvm_report_error__441__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[437]);
                                    ++(vlSymsp->__Vcoverage[22160]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[22161]);
                                }
                                ++(vlSymsp->__Vcoverage[22164]);
                            } else {
                                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
                                this->__Vfunc_uvm_report_enabled__446__id 
                                    = VL_CVT_PACK_STR_NN(__VlefCall_12__get_type_name);
                                __Vfunc_uvm_report_enabled__446__severity = 2U;
                                __Vfunc_uvm_report_enabled__446__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__447__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__447__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__448__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__448__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__446__verbosity, (IData)(__Vfunc_uvm_report_enabled__446__severity), this->__Vfunc_uvm_report_enabled__446__id, __VlefCall_13__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_13__uvm_report_enabled)) {
                                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_14__get_type_name);
                                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2093)
                                                  ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2093)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                                    __Vtask_uvm_report_error__452__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_error__452__context_name = ""s;
                                    __Vtask_uvm_report_error__452__line = 0x0000082dU;
                                    this->__Vtask_uvm_report_error__452__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_error__452__verbosity = 0U;
                                    this->__Vtask_uvm_report_error__452__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("No transactor available to physically access register on map '"s, __VlefCall_15__get_full_name), "'"s));
                                    this->__Vtask_uvm_report_error__452__id 
                                        = VL_CVT_PACK_STR_NN(__VlefCall_14__get_type_name);
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__453__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                        = __Vfunc_get__453__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__454__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                        = __Vtask_get_root__454__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__452__id, this->__Vtask_uvm_report_error__452__message, __Vtask_uvm_report_error__452__verbosity, this->__Vtask_uvm_report_error__452__filename, __Vtask_uvm_report_error__452__line, this->__Vtask_uvm_report_error__452__context_name, (IData)(__Vtask_uvm_report_error__452__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[437]);
                                    ++(vlSymsp->__Vcoverage[22162]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[22163]);
                                }
                                ++(vlSymsp->__Vcoverage[22165]);
                            }
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2094)
                                                        ->__PVT__status = 1U;
                            Xcheck_accessX__Vfuncrtn = 0U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[22167]);
                        }
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2098)
                                      ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2098)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                        if (((VlNull{} == VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2100)
                              ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2100)
                             ->__PVT__unmapped)) {
                            this->__Vfunc_uvm_report_enabled__457__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__457__severity = 2U;
                            __Vfunc_uvm_report_enabled__457__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__458__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__458__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__459__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__459__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__457__verbosity, (IData)(__Vfunc_uvm_report_enabled__457__severity), this->__Vfunc_uvm_report_enabled__457__id, __VlefCall_16__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_16__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                                if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                     ->__PVT__map)) {
                                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                  ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                                } else {
                                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                  ->__PVT__map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2104)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                                }
                                __Vtask_uvm_report_error__464__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__464__context_name = ""s;
                                __Vtask_uvm_report_error__464__line = 0x00000838U;
                                this->__Vtask_uvm_report_error__464__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__464__verbosity = 0U;
                                this->__Vtask_uvm_report_error__464__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_17__get_full_name), "' unmapped in map '"s), __VlefCall_18__get_full_name), "' and does not have a user-defined frontdoor"s));
                                this->__Vtask_uvm_report_error__464__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__465__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__465__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__466__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__466__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__464__id, this->__Vtask_uvm_report_error__464__message, __Vtask_uvm_report_error__464__verbosity, this->__Vtask_uvm_report_error__464__filename, __Vtask_uvm_report_error__464__line, this->__Vtask_uvm_report_error__464__context_name, (IData)(__Vtask_uvm_report_error__464__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[437]);
                                ++(vlSymsp->__Vcoverage[22168]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22169]);
                            }
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2105)
                                                        ->__PVT__status = 1U;
                            Xcheck_accessX__Vfuncrtn = 0U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[22171]);
                        }
                        if ((VlNull{} == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2109)
                             ->__PVT__map)) {
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2110)
                                                        ->__PVT__map 
                                = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2110)
                                ->__PVT__local_map;
                            ++(vlSymsp->__Vcoverage[22172]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22173]);
                        }
                        ++(vlSymsp->__Vcoverage[22174]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22175]);
                    }
                    Xcheck_accessX__Vfuncrtn = 1U;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22176]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_busy__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy\n"); );
                // Body
                is_busy__Vfuncrtn = this->__PVT__m_is_busy;
                ++(vlSymsp->__Vcoverage[22177]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ busy) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX\n"); );
                // Body
                this->__PVT__m_is_busy = busy;
                ++(vlSymsp->__Vcoverage[22178]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xis_locked_by_fieldX(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &Xis_locked_by_fieldX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xis_locked_by_fieldX\n"); );
                // Body
                Xis_locked_by_fieldX__Vfuncrtn = this->__PVT__m_is_locked_by_field;
                ++(vlSymsp->__Vcoverage[22179]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__469__verbosity;
                __Vfunc_uvm_report_enabled__469__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__469__severity;
                __Vfunc_uvm_report_enabled__469__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__470__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__471__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__473__verbosity;
                __Vtask_uvm_report_info__473__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__473__line;
                __Vtask_uvm_report_info__473__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__473__report_enabled_checked;
                __Vtask_uvm_report_info__473__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__474__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__475__Vfuncout;
                std::string __Vtemp_1;
                // Body
                IData/*31:0*/ __VlefCall_2__uvm_hdl_deposit;
                IData/*31:0*/ __VlefCall_1__uvm_hdl_deposit;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk365__DOT__i;
                unnamedblk365__DOT__i = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j;
                unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j = 0;
                QData/*63:0*/ unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice;
                VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
                CData/*0:0*/ ok;
                paths.clear();
                ok = 1U;
                this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                                    VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2142)
                                                                       ->__PVT__bd_kind), "."s);
                unnamedblk365__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk365__DOT__i, paths.size())) {
                    unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat 
                        = paths.at(unnamedblk365__DOT__i);
                    unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j, VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2145)
                                      ->__PVT__slices.size())) {
                        {
                            this->__Vfunc_uvm_report_enabled__469__id = "RegMem"s;
                            __Vfunc_uvm_report_enabled__469__severity = 0U;
                            __Vfunc_uvm_report_enabled__469__verbosity = 0x000001f4U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__470__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__470__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__471__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__471__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__469__verbosity, (IData)(__Vfunc_uvm_report_enabled__469__severity), this->__Vfunc_uvm_report_enabled__469__id, __VlefCall_0__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                __Vtask_uvm_report_info__473__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_info__473__context_name = ""s;
                                __Vtask_uvm_report_info__473__line = 0x00000863U;
                                this->__Vtask_uvm_report_info__473__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_info__473__verbosity = 0x000001f4U;
                                __Vtemp_1 = VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2147)
                                    ->__PVT__slices.at(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j)
                                    .__PVT__path;
                                this->__Vtask_uvm_report_info__473__message 
                                    = VL_SFORMATF_N_NX("backdoor_write to %@",0,
                                                       -1,
                                                       &(__Vtemp_1)) ;
                                this->__Vtask_uvm_report_info__473__id = "RegMem"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__474__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                    = __Vfunc_get__474__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__475__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                    = __Vtask_get_root__475__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__473__id, this->__Vtask_uvm_report_info__473__message, __Vtask_uvm_report_info__473__verbosity, this->__Vtask_uvm_report_info__473__filename, __Vtask_uvm_report_info__473__line, this->__Vtask_uvm_report_info__473__context_name, (IData)(__Vtask_uvm_report_info__473__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[435]);
                                ++(vlSymsp->__Vcoverage[22180]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22181]);
                            }
                            if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2149)
                                           ->__PVT__slices.at(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j)
                                           .__PVT__offset)) {
                                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                __VlefCall_1__uvm_hdl_deposit = 0U;
                                ++(vlSymsp->__Vcoverage[238]);
                                ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_deposit);
                                goto __Vlabel0;
                            } else {
                                ++(vlSymsp->__Vcoverage[22183]);
                            }
                            unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice = 0ULL;
                            unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice 
                                = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2155)
                                                ->__PVT__value.at(0U), VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2155)
                                                ->__PVT__slices.at(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j)
                                                .__PVT__offset);
                            unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice 
                                = (unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__unnamedblk368__DOT__slice 
                                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2156)
                                                    ->__PVT__slices.at(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j)
                                                    .__PVT__size) 
                                      - 1ULL));
                            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                            __VlefCall_2__uvm_hdl_deposit = 0U;
                            ++(vlSymsp->__Vcoverage[238]);
                            ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_deposit);
                            __Vlabel0: ;
                        }
                        unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j 
                            = ((IData)(1U) + unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__j);
                        ++(vlSymsp->__Vcoverage[22184]);
                    }
                    unnamedblk365__DOT__i = ((IData)(1U) 
                                             + unnamedblk365__DOT__i);
                    ++(vlSymsp->__Vcoverage[22185]);
                }
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2161)
                                                        ->__PVT__status 
                    = ((IData)(ok) ? 0U : 1U);
                if (ok) {
                    ++(vlSymsp->__Vcoverage[22186]);
                }
                if ((1U & (~ (IData)(ok)))) {
                    ++(vlSymsp->__Vcoverage[22187]);
                }
                ++(vlSymsp->__Vcoverage[22188]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0__backdoor_read_func;
                this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __VlefCall_0__backdoor_read_func);
                VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2168)
                                                        ->__PVT__status 
                    = __VlefCall_0__backdoor_read_func;
                ++(vlSymsp->__Vcoverage[22189]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__483__verbosity;
                __Vfunc_uvm_report_enabled__483__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__483__severity;
                __Vfunc_uvm_report_enabled__483__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__484__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__485__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__487__verbosity;
                __Vtask_uvm_report_info__487__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__487__line;
                __Vtask_uvm_report_info__487__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__487__report_enabled_checked;
                __Vtask_uvm_report_info__487__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__488__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__489__Vfuncout;
                VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__491__value;
                VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__491__value);
                VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__493__value;
                VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__493__value);
                IData/*31:0*/ __Vfunc_uvm_report_enabled__495__verbosity;
                __Vfunc_uvm_report_enabled__495__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__495__severity;
                __Vfunc_uvm_report_enabled__495__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__496__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__497__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__500__concat;
                IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i;
                __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i = 0;
                Vtb_rng_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__unnamedblk267__DOT__slice;
                __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
                __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__501__concat;
                IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i;
                __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i = 0;
                Vtb_rng_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__unnamedblk267__DOT__slice;
                __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
                __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__502__verbosity;
                __Vtask_uvm_report_error__502__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__502__line;
                __Vtask_uvm_report_error__502__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__502__report_enabled_checked;
                __Vtask_uvm_report_error__502__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__503__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__504__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__506__verbosity;
                __Vfunc_uvm_report_enabled__506__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__506__severity;
                __Vfunc_uvm_report_enabled__506__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__507__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__508__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__510__verbosity;
                __Vtask_uvm_report_info__510__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__510__line;
                __Vtask_uvm_report_info__510__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__510__report_enabled_checked;
                __Vtask_uvm_report_info__510__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__511__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__512__Vfuncout;
                std::string __Vtemp_1;
                // Body
                IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
                std::string __VlefCall_6__uvm_hdl_concat2string;
                std::string __VlefCall_5__uvm_hdl_concat2string;
                std::string __VlefCall_4__get_full_name;
                IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_2__uvm_hdl_read;
                IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk369__DOT__i;
                unnamedblk369__DOT__i = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j;
                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j = 0;
                QData/*63:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice;
                IData/*31:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k;
                IData/*31:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0;
                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
                IData/*31:0*/ __Vincrement1;
                __Vincrement1 = 0;
                VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
                QData/*63:0*/ val;
                CData/*0:0*/ ok;
                {
                    backdoor_read_func__Vfuncrtn = 0U;
                    paths.clear();
                    val = 0ULL;
                    ok = 1U;
                    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2178)
                                                                           ->__PVT__bd_kind), "."s);
                    unnamedblk369__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk369__DOT__i, paths.size())) {
                        unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat 
                            = paths.at(unnamedblk369__DOT__i);
                        val = 0ULL;
                        unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j = 0U;
                        while (VL_LTS_III(32, unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j, VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2182)
                                          ->__PVT__slices.size())) {
                            {
                                this->__Vfunc_uvm_report_enabled__483__id = "RegMem"s;
                                __Vfunc_uvm_report_enabled__483__severity = 0U;
                                __Vfunc_uvm_report_enabled__483__verbosity = 0x000001f4U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__484__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__484__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__485__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__485__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__483__verbosity, (IData)(__Vfunc_uvm_report_enabled__483__severity), this->__Vfunc_uvm_report_enabled__483__id, __VlefCall_0__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                    __Vtask_uvm_report_info__487__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_info__487__context_name = ""s;
                                    __Vtask_uvm_report_info__487__line = 0x00000888U;
                                    this->__Vtask_uvm_report_info__487__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_info__487__verbosity = 0x000001f4U;
                                    __Vtemp_1 = VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2184)
                                        ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                        .__PVT__path;
                                    this->__Vtask_uvm_report_info__487__message 
                                        = VL_SFORMATF_N_NX("backdoor_read from %@ ",0,
                                                           -1,
                                                           &(__Vtemp_1)) ;
                                    this->__Vtask_uvm_report_info__487__id = "RegMem"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__488__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                        = __Vfunc_get__488__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__489__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                        = __Vtask_get_root__489__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__487__id, this->__Vtask_uvm_report_info__487__message, __Vtask_uvm_report_info__487__verbosity, this->__Vtask_uvm_report_info__487__filename, __Vtask_uvm_report_info__487__line, this->__Vtask_uvm_report_info__487__context_name, (IData)(__Vtask_uvm_report_info__487__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[435]);
                                    ++(vlSymsp->__Vcoverage[22190]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[22191]);
                                }
                                if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2186)
                                               ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                               .__PVT__offset)) {
                                    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__491__value);
                                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                    __VlefCall_1__uvm_hdl_read = 0U;
                                    ++(vlSymsp->__Vcoverage[242]);
                                    val = (((QData)((IData)(__Vfunc_uvm_hdl_read__491__value[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(__Vfunc_uvm_hdl_read__491__value[0U])));
                                    ok = ((IData)(ok) 
                                          & __VlefCall_1__uvm_hdl_read);
                                    goto __Vlabel1;
                                } else {
                                    ++(vlSymsp->__Vcoverage[22193]);
                                }
                                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice = 0ULL;
                                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k 
                                    = VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2192)
                                    ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                    .__PVT__offset;
                                VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__493__value);
                                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                __VlefCall_2__uvm_hdl_read = 0U;
                                ++(vlSymsp->__Vcoverage[242]);
                                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice 
                                    = (((QData)((IData)(__Vfunc_uvm_hdl_read__493__value[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_uvm_hdl_read__493__value[0U])));
                                ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_read);
                                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                    = VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2196)
                                    ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                    .__PVT__size;
                                while (VL_LTS_III(32, 0U, unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                                    __Vincrement1 = unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k;
                                    unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k 
                                        = ((IData)(1U) 
                                           + unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__k);
                                    val = (((~ (1ULL 
                                                << 
                                                (0x0000003fU 
                                                 & __Vincrement1))) 
                                            & val) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice)))) 
                                              << (0x0000003fU 
                                                  & __Vincrement1)));
                                    unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice 
                                        = VL_SHIFTR_QQI(64,64,32, unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice, 1U);
                                    unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                        = (unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                           - (IData)(1U));
                                    ++(vlSymsp->__Vcoverage[22194]);
                                }
                                __Vlabel1: ;
                            }
                            unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j 
                                = ((IData)(1U) + unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j);
                            ++(vlSymsp->__Vcoverage[22195]);
                        }
                        val = (val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                      - 1ULL));
                        if ((0U == unnamedblk369__DOT__i)) {
                            VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2206)
                                                        ->__PVT__value.atWrite(0U) 
                                = val;
                            ++(vlSymsp->__Vcoverage[22196]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22197]);
                        }
                        if ((val != VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2208)
                             ->__PVT__value.at(0U))) {
                            this->__Vfunc_uvm_report_enabled__495__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__495__severity = 2U;
                            __Vfunc_uvm_report_enabled__495__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__496__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__496__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__497__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__497__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__495__verbosity, (IData)(__Vfunc_uvm_report_enabled__495__severity), this->__Vfunc_uvm_report_enabled__495__id, __VlefCall_3__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                                __Vfunc_uvm_hdl_concat2string__500__concat 
                                    = paths.at(0U);
                                __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i = 0U;
                                {
                                    __VlefCall_5__uvm_hdl_concat2string = ""s;
                                    this->__Vfunc_uvm_hdl_concat2string__500__image = "{"s;
                                    if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__500__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                           ->__PVT__slices.size()) 
                                          && (0xffffffffU 
                                              == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__500__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                              ->__PVT__slices.at(0U)
                                              .__PVT__offset)) 
                                         && (0xffffffffU 
                                             == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__500__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                             ->__PVT__slices.at(0U)
                                             .__PVT__size))) {
                                        __VlefCall_5__uvm_hdl_concat2string 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__500__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                            ->__PVT__slices.at(0U)
                                            .__PVT__path;
                                        goto __Vlabel2;
                                    } else {
                                        ++(vlSymsp->__Vcoverage[488]);
                                    }
                                    __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__500__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                                      ->__PVT__slices.size())) {
                                        __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__unnamedblk267__DOT__slice 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__500__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                            ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i);
                                        this->__Vfunc_uvm_hdl_concat2string__500__image 
                                            = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__500__image, 
                                                                            VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                             .__PVT__path);
                                        if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                        .__PVT__offset)) {
                                            this->__Vfunc_uvm_hdl_concat2string__500__image 
                                                = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__500__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__size) );
                                            ++(vlSymsp->__Vcoverage[491]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[492]);
                                        }
                                        __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i);
                                        ++(vlSymsp->__Vcoverage[493]);
                                    }
                                    this->__Vfunc_uvm_hdl_concat2string__500__image 
                                        = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__500__image, "}"s);
                                    __VlefCall_5__uvm_hdl_concat2string 
                                        = this->__Vfunc_uvm_hdl_concat2string__500__image;
                                    __Vlabel2: ;
                                }
                                if ((0U == __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i)) {
                                    ++(vlSymsp->__Vcoverage[489]);
                                }
                                if ((0U != __Vfunc_uvm_hdl_concat2string__500__unnamedblk266__DOT__i)) {
                                    ++(vlSymsp->__Vcoverage[490]);
                                }
                                ++(vlSymsp->__Vcoverage[494]);
                                __Vfunc_uvm_hdl_concat2string__501__concat 
                                    = paths.at(unnamedblk369__DOT__i);
                                __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i = 0U;
                                {
                                    __VlefCall_6__uvm_hdl_concat2string = ""s;
                                    this->__Vfunc_uvm_hdl_concat2string__501__image = "{"s;
                                    if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__501__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                           ->__PVT__slices.size()) 
                                          && (0xffffffffU 
                                              == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__501__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                              ->__PVT__slices.at(0U)
                                              .__PVT__offset)) 
                                         && (0xffffffffU 
                                             == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__501__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                             ->__PVT__slices.at(0U)
                                             .__PVT__size))) {
                                        __VlefCall_6__uvm_hdl_concat2string 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__501__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                            ->__PVT__slices.at(0U)
                                            .__PVT__path;
                                        goto __Vlabel3;
                                    } else {
                                        ++(vlSymsp->__Vcoverage[488]);
                                    }
                                    __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__501__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                                      ->__PVT__slices.size())) {
                                        __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__unnamedblk267__DOT__slice 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__501__concat, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                            ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i);
                                        this->__Vfunc_uvm_hdl_concat2string__501__image 
                                            = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__501__image, 
                                                                            VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                             .__PVT__path);
                                        if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                        .__PVT__offset)) {
                                            this->__Vfunc_uvm_hdl_concat2string__501__image 
                                                = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__501__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__size) );
                                            ++(vlSymsp->__Vcoverage[491]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[492]);
                                        }
                                        __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i);
                                        ++(vlSymsp->__Vcoverage[493]);
                                    }
                                    this->__Vfunc_uvm_hdl_concat2string__501__image 
                                        = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__501__image, "}"s);
                                    __VlefCall_6__uvm_hdl_concat2string 
                                        = this->__Vfunc_uvm_hdl_concat2string__501__image;
                                    __Vlabel3: ;
                                }
                                if ((0U == __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i)) {
                                    ++(vlSymsp->__Vcoverage[489]);
                                }
                                if ((0U != __Vfunc_uvm_hdl_concat2string__501__unnamedblk266__DOT__i)) {
                                    ++(vlSymsp->__Vcoverage[490]);
                                }
                                ++(vlSymsp->__Vcoverage[494]);
                                __Vtask_uvm_report_error__502__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__502__context_name = ""s;
                                __Vtask_uvm_report_error__502__line = 0x000008a4U;
                                this->__Vtask_uvm_report_error__502__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__502__verbosity = 0U;
                                this->__Vtask_uvm_report_error__502__message 
                                    = VL_SFORMATF_N_NX("Backdoor read of register %@ with multiple HDL copies: values are not the same: %0x at path '%@', and %0x at path '%@'. Returning first value.",0,
                                                       -1,
                                                       &(__VlefCall_4__get_full_name),
                                                       64,
                                                       VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2212)
                                                       ->__PVT__value.at(0U),
                                                       -1,
                                                       &(__VlefCall_5__uvm_hdl_concat2string),
                                                       64,
                                                       val,
                                                       -1,
                                                       &(__VlefCall_6__uvm_hdl_concat2string)) ;
                                this->__Vtask_uvm_report_error__502__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__503__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__503__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__504__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__504__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__502__id, this->__Vtask_uvm_report_error__502__message, __Vtask_uvm_report_error__502__verbosity, this->__Vtask_uvm_report_error__502__filename, __Vtask_uvm_report_error__502__line, this->__Vtask_uvm_report_error__502__context_name, (IData)(__Vtask_uvm_report_error__502__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[437]);
                                ++(vlSymsp->__Vcoverage[22198]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22199]);
                            }
                            backdoor_read_func__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[22201]);
                        }
                        this->__Vfunc_uvm_report_enabled__506__id = "RegMem"s;
                        __Vfunc_uvm_report_enabled__506__severity = 0U;
                        __Vfunc_uvm_report_enabled__506__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__507__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__507__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__508__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__508__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__506__verbosity, (IData)(__Vfunc_uvm_report_enabled__506__severity), this->__Vfunc_uvm_report_enabled__506__id, __VlefCall_7__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_7__uvm_report_enabled)) {
                            __Vtask_uvm_report_info__510__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_info__510__context_name = ""s;
                            __Vtask_uvm_report_info__510__line = 0x000008a8U;
                            this->__Vtask_uvm_report_info__510__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_info__510__verbosity = 0x000001f4U;
                            this->__Vtask_uvm_report_info__510__message 
                                = VL_SFORMATF_N_NX("returned backdoor value 0x%0x",0,
                                                   64,
                                                   VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2216)
                                                   ->__PVT__value.at(0U)) ;
                            this->__Vtask_uvm_report_info__510__id = "RegMem"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__511__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__511__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__512__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__512__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__510__id, this->__Vtask_uvm_report_info__510__message, __Vtask_uvm_report_info__510__verbosity, this->__Vtask_uvm_report_info__510__filename, __Vtask_uvm_report_info__510__line, this->__Vtask_uvm_report_info__510__context_name, (IData)(__Vtask_uvm_report_info__510__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[435]);
                            ++(vlSymsp->__Vcoverage[22202]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22203]);
                        }
                        unnamedblk369__DOT__i = ((IData)(1U) 
                                                 + unnamedblk369__DOT__i);
                        ++(vlSymsp->__Vcoverage[22204]);
                    }
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2220)
                                                        ->__PVT__status 
                        = ((IData)(ok) ? 0U : 1U);
                    backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2221)
                        ->__PVT__status;
                    __Vlabel0: ;
                }
                if (ok) {
                    ++(vlSymsp->__Vcoverage[22205]);
                }
                if ((1U & (~ (IData)(ok)))) {
                    ++(vlSymsp->__Vcoverage[22206]);
                }
                ++(vlSymsp->__Vcoverage[22207]);
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__516__verbosity;
                __Vfunc_uvm_report_enabled__516__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__516__severity;
                __Vfunc_uvm_report_enabled__516__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__517__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__518__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__521__verbosity;
                __Vtask_uvm_report_error__521__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__521__line;
                __Vtask_uvm_report_error__521__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__521__report_enabled_checked;
                __Vtask_uvm_report_error__521__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__522__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__523__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__530__verbosity;
                __Vfunc_uvm_report_enabled__530__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__530__severity;
                __Vfunc_uvm_report_enabled__530__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__531__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__532__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__535__verbosity;
                __Vtask_uvm_report_info__535__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__535__line;
                __Vtask_uvm_report_info__535__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__535__report_enabled_checked;
                __Vtask_uvm_report_info__535__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__536__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__537__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VL_KEEP_THIS;
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
                    this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
                    this->__PVT__m_fname = fname;
                    this->__PVT__m_lineno = lineno;
                    __VlefLogAnd_1 = (VlNull{} == bkdr);
                    if (__VlefLogAnd_1) {
                        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
                        __VlefLogAnd_1 = (1U & (~ (IData)(__VlefCall_0__has_hdl_path)));
                    }
                    if (__VlefLogAnd_1) {
                        this->__Vfunc_uvm_report_enabled__516__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__516__severity = 2U;
                        __Vfunc_uvm_report_enabled__516__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__517__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__517__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__518__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__518__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__516__verbosity, (IData)(__Vfunc_uvm_report_enabled__516__severity), this->__Vfunc_uvm_report_enabled__516__id, __VlefCall_2__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_2__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                            __Vtask_uvm_report_error__521__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__521__context_name = ""s;
                            __Vtask_uvm_report_error__521__line = 0x000008c4U;
                            this->__Vtask_uvm_report_error__521__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__521__verbosity = 0U;
                            this->__Vtask_uvm_report_error__521__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("No backdoor access available to poke register '"s, __VlefCall_3__get_full_name), "'"s));
                            this->__Vtask_uvm_report_error__521__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__522__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__522__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__523__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__523__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__521__id, this->__Vtask_uvm_report_error__521__message, __Vtask_uvm_report_error__521__verbosity, this->__Vtask_uvm_report_error__521__filename, __Vtask_uvm_report_error__521__line, this->__Vtask_uvm_report_error__521__context_name, (IData)(__Vtask_uvm_report_error__521__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[22208]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22209]);
                        }
                        status = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22211]);
                    }
                    if (this->__PVT__m_is_locked_by_field) {
                        ++(vlSymsp->__Vcoverage[22213]);
                    } else {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                        ++(vlSymsp->__Vcoverage[22212]);
                    }
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2254)
                                                        ->__PVT__element 
                        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2255)
                                                        ->__PVT__path = 1U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2256)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2257)
                                                        ->__PVT__kind = 1U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2258)
                                                        ->__PVT__bd_kind 
                        = kind;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2259)
                                                        ->__PVT__value.atWrite(0U) 
                        = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                    - 1ULL));
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2260)
                                                        ->__PVT__parent 
                        = parent;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2261)
                                                        ->__PVT__extension 
                        = extension;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2262)
                                                        ->__PVT__fname 
                        = fname;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2263)
                                                        ->__PVT__lineno 
                        = lineno;
                    if ((VlNull{} != bkdr)) {
                        VL_NULL_CHECK(bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2266)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                        ++(vlSymsp->__Vcoverage[22216]);
                    } else {
                        this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                        ++(vlSymsp->__Vcoverage[22217]);
                    }
                    status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2270)
                        ->__PVT__status;
                    this->__Vfunc_uvm_report_enabled__530__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__530__severity = 0U;
                    __Vfunc_uvm_report_enabled__530__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__531__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__531__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__532__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__532__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__530__verbosity, (IData)(__Vfunc_uvm_report_enabled__530__severity), this->__Vfunc_uvm_report_enabled__530__id, __VlefCall_5__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        __Vtask_uvm_report_info__535__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__535__context_name = ""s;
                        __Vtask_uvm_report_info__535__line = 0x000008e1U;
                        this->__Vtask_uvm_report_info__535__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__535__verbosity = 0x0000012cU;
                        this->__Vtask_uvm_report_info__535__message 
                            = VL_SFORMATF_N_NX("Poked register \"%@\": 'h%x",0,
                                               -1,&(__VlefCall_6__get_full_name),
                                               64,value) ;
                        this->__Vtask_uvm_report_info__535__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__536__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__536__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__537__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__537__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__535__id, this->__Vtask_uvm_report_info__535__message, __Vtask_uvm_report_info__535__verbosity, this->__Vtask_uvm_report_info__535__filename, __Vtask_uvm_report_info__535__line, this->__Vtask_uvm_report_info__535__context_name, (IData)(__Vtask_uvm_report_info__535__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[435]);
                        ++(vlSymsp->__Vcoverage[22218]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22219]);
                    }
                    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                    if (this->__PVT__m_is_locked_by_field) {
                        ++(vlSymsp->__Vcoverage[22221]);
                    } else {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                        ++(vlSymsp->__Vcoverage[22220]);
                    }
                    __Vlabel0: ;
                }
                if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                    ++(vlSymsp->__Vcoverage[22214]);
                }
                if (this->__PVT__m_is_locked_by_field) {
                    ++(vlSymsp->__Vcoverage[22215]);
                }
                if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                    ++(vlSymsp->__Vcoverage[22222]);
                }
                if (this->__PVT__m_is_locked_by_field) {
                    ++(vlSymsp->__Vcoverage[22223]);
                }
                ++(vlSymsp->__Vcoverage[22224]);
                co_return;
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__543__verbosity;
                __Vfunc_uvm_report_enabled__543__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__543__severity;
                __Vfunc_uvm_report_enabled__543__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__544__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__545__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__548__verbosity;
                __Vtask_uvm_report_error__548__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__548__line;
                __Vtask_uvm_report_error__548__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__548__report_enabled_checked;
                __Vtask_uvm_report_error__548__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__549__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__550__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__557__verbosity;
                __Vfunc_uvm_report_enabled__557__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__557__severity;
                __Vfunc_uvm_report_enabled__557__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__558__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__559__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__562__verbosity;
                __Vtask_uvm_report_info__562__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__562__line;
                __Vtask_uvm_report_info__562__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__562__report_enabled_checked;
                __Vtask_uvm_report_info__562__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__563__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__564__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VL_KEEP_THIS;
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
                        this->__Vfunc_uvm_report_enabled__543__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__543__severity = 2U;
                        __Vfunc_uvm_report_enabled__543__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__544__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__544__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__545__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__545__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__543__verbosity, (IData)(__Vfunc_uvm_report_enabled__543__severity), this->__Vfunc_uvm_report_enabled__543__id, __VlefCall_2__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_2__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                            __Vtask_uvm_report_error__548__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__548__context_name = ""s;
                            __Vtask_uvm_report_error__548__line = 0x000008fdU;
                            this->__Vtask_uvm_report_error__548__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__548__verbosity = 0U;
                            this->__Vtask_uvm_report_error__548__message 
                                = VL_SFORMATF_N_NX("No backdoor access available to peek register \"%@\"",0,
                                                   -1,
                                                   &(__VlefCall_3__get_full_name)) ;
                            this->__Vtask_uvm_report_error__548__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__549__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__549__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__550__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__550__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__548__id, this->__Vtask_uvm_report_error__548__message, __Vtask_uvm_report_error__548__verbosity, this->__Vtask_uvm_report_error__548__filename, __Vtask_uvm_report_error__548__line, this->__Vtask_uvm_report_error__548__context_name, (IData)(__Vtask_uvm_report_error__548__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[22225]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22226]);
                        }
                        status = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22228]);
                    }
                    if (this->__PVT__m_is_locked_by_field) {
                        ++(vlSymsp->__Vcoverage[22230]);
                    } else {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                        ++(vlSymsp->__Vcoverage[22229]);
                    }
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi122__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2311)
                                                        ->__PVT__element 
                        = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2312)
                                                        ->__PVT__path = 1U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2313)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2314)
                                                        ->__PVT__kind = 0U;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2315)
                                                        ->__PVT__bd_kind 
                        = kind;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2316)
                                                        ->__PVT__parent 
                        = parent;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2317)
                                                        ->__PVT__extension 
                        = extension;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2318)
                                                        ->__PVT__fname 
                        = fname;
                    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2319)
                                                        ->__PVT__lineno 
                        = lineno;
                    if ((VlNull{} != bkdr)) {
                        VL_NULL_CHECK(bkdr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2322)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                        ++(vlSymsp->__Vcoverage[22233]);
                    } else {
                        this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                        ++(vlSymsp->__Vcoverage[22234]);
                    }
                    status = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2326)
                        ->__PVT__status;
                    value = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2327)
                        ->__PVT__value.at(0U);
                    this->__Vfunc_uvm_report_enabled__557__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__557__severity = 0U;
                    __Vfunc_uvm_report_enabled__557__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__558__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__558__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__559__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__559__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__557__verbosity, (IData)(__Vfunc_uvm_report_enabled__557__severity), this->__Vfunc_uvm_report_enabled__557__id, __VlefCall_5__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        __Vtask_uvm_report_info__562__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__562__context_name = ""s;
                        __Vtask_uvm_report_info__562__line = 0x0000091aU;
                        this->__Vtask_uvm_report_info__562__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__562__verbosity = 0x0000012cU;
                        this->__Vtask_uvm_report_info__562__message 
                            = VL_SFORMATF_N_NX("Peeked register \"%@\": 'h%x",0,
                                               -1,&(__VlefCall_6__get_full_name),
                                               64,value) ;
                        this->__Vtask_uvm_report_info__562__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__563__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__563__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__564__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__564__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__562__id, this->__Vtask_uvm_report_info__562__message, __Vtask_uvm_report_info__562__verbosity, this->__Vtask_uvm_report_info__562__filename, __Vtask_uvm_report_info__562__line, this->__Vtask_uvm_report_info__562__context_name, (IData)(__Vtask_uvm_report_info__562__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[435]);
                        ++(vlSymsp->__Vcoverage[22235]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22236]);
                    }
                    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                    if (this->__PVT__m_is_locked_by_field) {
                        ++(vlSymsp->__Vcoverage[22238]);
                    } else {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                        ++(vlSymsp->__Vcoverage[22237]);
                    }
                    __Vlabel0: ;
                }
                if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                    ++(vlSymsp->__Vcoverage[22231]);
                }
                if (this->__PVT__m_is_locked_by_field) {
                    ++(vlSymsp->__Vcoverage[22232]);
                }
                if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                    ++(vlSymsp->__Vcoverage[22239]);
                }
                if (this->__PVT__m_is_locked_by_field) {
                    ++(vlSymsp->__Vcoverage[22240]);
                }
                ++(vlSymsp->__Vcoverage[22241]);
                co_return;
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ expected, QData/*63:0*/ actual, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &do_check__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__572__verbosity;
                __Vfunc_uvm_report_enabled__572__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__572__severity;
                __Vfunc_uvm_report_enabled__572__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__573__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__574__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__577__verbosity;
                __Vtask_uvm_report_error__577__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__577__line;
                __Vtask_uvm_report_error__577__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__577__report_enabled_checked;
                __Vtask_uvm_report_error__577__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__578__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__579__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__586__verbosity;
                __Vfunc_uvm_report_enabled__586__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__586__severity;
                __Vfunc_uvm_report_enabled__586__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__587__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__588__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__597__verbosity;
                __Vtask_uvm_report_info__597__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__597__line;
                __Vtask_uvm_report_info__597__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__597__report_enabled_checked;
                __Vtask_uvm_report_info__597__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__598__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__599__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_16__get_n_bits;
                IData/*31:0*/ __VlefCall_15__get_n_bits;
                IData/*31:0*/ __VlefCall_14__get_lsb_pos;
                IData/*31:0*/ __VlefCall_13__get_n_bits;
                IData/*31:0*/ __VlefCall_12__get_lsb_pos;
                std::string __VlefCall_11__get_full_name;
                std::string __VlefCall_10__get_name;
                IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_8__get_lsb_pos;
                IData/*31:0*/ __VlefCall_7__get_lsb_pos;
                IData/*31:0*/ __VlefCall_6__get_n_bits;
                IData/*31:0*/ __VlefCall_5__get_compare;
                std::string __VlefCall_4__get_full_name;
                IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_2__get_lsb_pos;
                IData/*31:0*/ __VlefCall_1__get_n_bits;
                IData/*31:0*/ __VlefCall_0__get_compare;
                IData/*31:0*/ unnamedblk373__DOT__i;
                unnamedblk373__DOT__i = 0;
                std::string unnamedblk373__DOT__unnamedblk374__DOT__acc;
                IData/*31:0*/ unnamedblk375__DOT__i;
                unnamedblk375__DOT__i = 0;
                std::string unnamedblk375__DOT__unnamedblk376__DOT__acc;
                QData/*63:0*/ unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask;
                QData/*63:0*/ unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val;
                QData/*63:0*/ unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp;
                QData/*63:0*/ valid_bits_mask;
                {
                    do_check__Vfuncrtn = 0U;
                    valid_bits_mask = 0ULL;
                    unnamedblk373__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk373__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk373__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2347)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, unnamedblk373__DOT__unnamedblk374__DOT__acc);
                        unnamedblk373__DOT__unnamedblk374__DOT__acc 
                            = VL_SUBSTR_N(unnamedblk373__DOT__unnamedblk374__DOT__acc,0U,1U);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk373__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2349)
                                                        ->__VnoInFunc_get_compare(vlSymsp, __VlefCall_0__get_compare);
                        if (((0U == __VlefCall_0__get_compare) 
                             || ("WO"s == unnamedblk373__DOT__unnamedblk374__DOT__acc))) {
                            ++(vlSymsp->__Vcoverage[22243]);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk373__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2350)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk373__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2350)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                            valid_bits_mask = (valid_bits_mask 
                                               | VL_SHIFTL_QQI(64,64,32, 
                                                               (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                                - 1ULL), __VlefCall_2__get_lsb_pos));
                            ++(vlSymsp->__Vcoverage[22242]);
                        }
                        unnamedblk373__DOT__i = ((IData)(1U) 
                                                 + unnamedblk373__DOT__i);
                        ++(vlSymsp->__Vcoverage[22244]);
                    }
                    if (((actual & valid_bits_mask) 
                         == (expected & valid_bits_mask))) {
                        do_check__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22246]);
                    }
                    this->__Vfunc_uvm_report_enabled__572__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__572__severity = 2U;
                    __Vfunc_uvm_report_enabled__572__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__573__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__573__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__574__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__574__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__572__verbosity, (IData)(__Vfunc_uvm_report_enabled__572__severity), this->__Vfunc_uvm_report_enabled__572__id, __VlefCall_3__uvm_report_enabled);
                    ++(vlSymsp->__Vcoverage[432]);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        __Vtask_uvm_report_error__577__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__577__context_name = ""s;
                        __Vtask_uvm_report_error__577__line = 0x00000935U;
                        this->__Vtask_uvm_report_error__577__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_error__577__verbosity = 0U;
                        this->__Vtask_uvm_report_error__577__message 
                            = VL_SFORMATF_N_NX("Register \"%@\" value read from DUT (0x%x) does not match mirrored value (0x%x) (valid bit mask = 0x%x)",0,
                                               -1,&(__VlefCall_4__get_full_name),
                                               64,actual,
                                               64,expected,
                                               64,valid_bits_mask) ;
                        this->__Vtask_uvm_report_error__577__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__578__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__578__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__579__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__579__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__577__id, this->__Vtask_uvm_report_error__577__message, __Vtask_uvm_report_error__577__verbosity, this->__Vtask_uvm_report_error__577__filename, __Vtask_uvm_report_error__577__line, this->__Vtask_uvm_report_error__577__context_name, (IData)(__Vtask_uvm_report_error__577__report_enabled_checked));
                        ++(vlSymsp->__Vcoverage[437]);
                        ++(vlSymsp->__Vcoverage[22247]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22248]);
                    }
                    unnamedblk375__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk375__DOT__i, this->__PVT__m_fields.size())) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2360)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, unnamedblk375__DOT__unnamedblk376__DOT__acc);
                        unnamedblk375__DOT__unnamedblk376__DOT__acc 
                            = VL_SUBSTR_N(unnamedblk375__DOT__unnamedblk376__DOT__acc,0U,1U);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2362)
                                                        ->__VnoInFunc_get_compare(vlSymsp, __VlefCall_5__get_compare);
                        if (((0U == __VlefCall_5__get_compare) 
                             || ("WO"s == unnamedblk375__DOT__unnamedblk376__DOT__acc))) {
                            ++(vlSymsp->__Vcoverage[22254]);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2364)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_6__get_n_bits);
                            unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask 
                                = (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_6__get_n_bits) 
                                   - 1ULL);
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2365)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_7__get_lsb_pos);
                            unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val 
                                = (VL_SHIFTR_QQI(64,64,32, actual, __VlefCall_7__get_lsb_pos) 
                                   & unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask);
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2366)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
                            unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp 
                                = (VL_SHIFTR_QQI(64,64,32, expected, __VlefCall_8__get_lsb_pos) 
                                   & unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__mask);
                            if ((unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val 
                                 != unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp)) {
                                this->__Vfunc_uvm_report_enabled__586__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__586__severity = 0U;
                                __Vfunc_uvm_report_enabled__586__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__587__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__587__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__588__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__588__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__586__verbosity, (IData)(__Vfunc_uvm_report_enabled__586__severity), this->__Vfunc_uvm_report_enabled__586__id, __VlefCall_9__uvm_report_enabled);
                                ++(vlSymsp->__Vcoverage[432]);
                                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_12__get_lsb_pos);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_13__get_n_bits);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_14__get_lsb_pos);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_15__get_n_bits);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk375__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2376)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_16__get_n_bits);
                                    __Vtask_uvm_report_info__597__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_info__597__context_name = ""s;
                                    __Vtask_uvm_report_info__597__line = 0x00000948U;
                                    this->__Vtask_uvm_report_info__597__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_info__597__verbosity = 0U;
                                    this->__Vtask_uvm_report_info__597__message 
                                        = VL_SFORMATF_N_NX("Field %@ (%@[%0#:%0#]) mismatch read=%0#'h%0x mirrored=%0#'h%0x ",0,
                                                           -1,
                                                           &(__VlefCall_10__get_name),
                                                           -1,
                                                           &(__VlefCall_11__get_full_name),
                                                           32,
                                                           ((__VlefCall_12__get_lsb_pos 
                                                             + __VlefCall_13__get_n_bits) 
                                                            - (IData)(1U)),
                                                           32,
                                                           __VlefCall_14__get_lsb_pos,
                                                           32,
                                                           __VlefCall_15__get_n_bits,
                                                           64,
                                                           unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__val,
                                                           32,
                                                           __VlefCall_16__get_n_bits,
                                                           64,
                                                           unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk377__DOT__exp) ;
                                    this->__Vtask_uvm_report_info__597__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__598__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                        = __Vfunc_get__598__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__599__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                        = __Vtask_get_root__599__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__597__id, this->__Vtask_uvm_report_info__597__message, __Vtask_uvm_report_info__597__verbosity, this->__Vtask_uvm_report_info__597__filename, __Vtask_uvm_report_info__597__line, this->__Vtask_uvm_report_info__597__context_name, (IData)(__Vtask_uvm_report_info__597__report_enabled_checked));
                                    ++(vlSymsp->__Vcoverage[435]);
                                    ++(vlSymsp->__Vcoverage[22249]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[22250]);
                                }
                                ++(vlSymsp->__Vcoverage[22251]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22252]);
                            }
                            ++(vlSymsp->__Vcoverage[22253]);
                        }
                        unnamedblk375__DOT__i = ((IData)(1U) 
                                                 + unnamedblk375__DOT__i);
                        ++(vlSymsp->__Vcoverage[22255]);
                    }
                    do_check__Vfuncrtn = 0U;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22256]);
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror\n"); );
                // Locals
                IData/*31:0*/ __Vtask_XreadX__608__status;
                __Vtask_XreadX__608__status = 0;
                QData/*63:0*/ __Vtask_XreadX__608__value;
                __Vtask_XreadX__608__value = 0;
                CData/*0:0*/ __Vtask_do_check__610__Vfuncout;
                __Vtask_do_check__610__Vfuncout = 0;
                // Body
                VL_KEEP_THIS;
                CData/*0:0*/ __VlefCall_0__has_hdl_path;
                QData/*63:0*/ v;
                QData/*63:0*/ exp;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
                {
                    status = 0U;
                    v = 0ULL;
                    exp = 0ULL;
                    this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    this->__PVT__m_fname = fname;
                    this->__PVT__m_lineno = lineno;
                    if ((3U == path)) {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2406)
                                                        ->__VnoInFunc_get_default_door(vlSymsp, path);
                        ++(vlSymsp->__Vcoverage[22257]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22258]);
                    }
                    __VlefCall_0__has_hdl_path = (1U 
                                                  == path);
                    if (__VlefCall_0__has_hdl_path) {
                        __VlefCall_0__has_hdl_path 
                            = (VlNull{} != bkdr);
                        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
                            this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_0__has_hdl_path);
                        }
                    }
                    if (__VlefCall_0__has_hdl_path) {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, map);
                        ++(vlSymsp->__Vcoverage[22259]);
                    } else {
                        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, map);
                        ++(vlSymsp->__Vcoverage[22260]);
                    }
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22262]);
                    }
                    if ((1U == check)) {
                        this->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, exp);
                        ++(vlSymsp->__Vcoverage[22263]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22264]);
                    }
                    co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__608__status, __Vtask_XreadX__608__value, path, map, parent, prior, extension, fname, lineno);
                    status = __Vtask_XreadX__608__status;
                    v = __Vtask_XreadX__608__value;
                    if ((1U == status)) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22266]);
                    }
                    if ((1U == check)) {
                        this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, v, map, __Vtask_do_check__610__Vfuncout);
                        ++(vlSymsp->__Vcoverage[22267]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22268]);
                    }
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22269]);
                co_return;
            }

            VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX\n"); );
                // Locals
                IData/*31:0*/ __Vtask_try_get__614__Vfuncout;
                __Vtask_try_get__614__Vfuncout = 0;
                // Body
                VL_KEEP_THIS;
                VlClassRef<Vtb_rng_std__03a__03aprocess> m_reg_process;
                {
                    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, m_reg_process);
                    if (on) {
                        if ((m_reg_process == this->__PVT__m_process)) {
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[22271]);
                        }
                        co_await VL_NULL_CHECK(this->__PVT__m_atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2442)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
                        this->__PVT__m_process = m_reg_process;
                        ++(vlSymsp->__Vcoverage[22272]);
                    } else {
                        VL_NULL_CHECK(this->__PVT__m_atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2447)
                                                        ->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__614__Vfuncout);
                        VL_NULL_CHECK(this->__PVT__m_atomic, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2448)
                                                        ->__VnoInFunc_put(vlSymsp, 1U);
                        this->__PVT__m_process = VlNull{};
                        ++(vlSymsp->__Vcoverage[22273]);
                    }
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22274]);
                co_return;
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string\n"); );
                // Locals
                std::string __Vtemp_1;
                // Body
                std::string __VlefCall_8__convert2string;
                IData/*31:0*/ __VlefCall_7__get_n_bytes;
                std::string __VlefCall_6__get_full_name;
                QData/*63:0*/ __VlefCall_5__get_base_addr;
                CData/*0:0*/ __VlefExpr_4;
                CData/*0:0*/ __VlefExpr_3;
                QData/*63:0*/ __VlefCall_2__get;
                IData/*31:0*/ __VlefCall_1__get_n_bytes;
                std::string __VlefCall_0__get_full_name;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk378__DOT__map;
                CData/*0:0*/ unnamedblk378__DOT__map__Vfirst;
                unnamedblk378__DOT__map__Vfirst = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk378__DOT__unnamedblk379__DOT__parent_map;
                IData/*31:0*/ unnamedblk378__DOT__unnamedblk379__DOT__offset;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map;
                IData/*31:0*/ unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__e;
                IData/*31:0*/ unnamedblk382__DOT__i;
                unnamedblk382__DOT__i = 0;
                convert2string__Vfuncrtn = ""s;
                std::string res_str;
                std::string prefix;
                res_str = ""s;
                prefix = ""s;
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_1__get_n_bytes);
                this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_2__get);
                VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                              ,"Register %@ -- %0# bytes, mirror value:'h%x",0,
                              -1,&(__VlefCall_0__get_full_name),
                              32,__VlefCall_1__get_n_bytes,
                              64,__VlefCall_2__get);
                if ((0U == this->__PVT__m_maps.size())) {
                    convert2string__Vfuncrtn = VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s);
                    ++(vlSymsp->__Vcoverage[22275]);
                } else {
                    convert2string__Vfuncrtn = VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s);
                    ++(vlSymsp->__Vcoverage[22276]);
                }
                __VlefExpr_3 = (0U != this->__PVT__m_maps.first(unnamedblk378__DOT__map));
                if (__VlefExpr_3) {
                    unnamedblk378__DOT__map__Vfirst = 1U;
                    while (true) {
                        __VlefExpr_4 = unnamedblk378__DOT__map__Vfirst;
                        if ((1U & (~ (IData)(__VlefExpr_4)))) {
                            __VlefExpr_4 = (0U != this->__PVT__m_maps.next(unnamedblk378__DOT__map));
                        }
                        if (!(__VlefExpr_4)) break;
                        unnamedblk378__DOT__map__Vfirst = 0U;
                        unnamedblk378__DOT__unnamedblk379__DOT__parent_map 
                            = unnamedblk378__DOT__map;
                        unnamedblk378__DOT__unnamedblk379__DOT__offset = 0U;
                        while ((VlNull{} != unnamedblk378__DOT__unnamedblk379__DOT__parent_map)) {
                            unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map 
                                = unnamedblk378__DOT__unnamedblk379__DOT__parent_map;
                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2479)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk378__DOT__unnamedblk379__DOT__parent_map);
                            if ((VlNull{} == unnamedblk378__DOT__unnamedblk379__DOT__parent_map)) {
                                VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2480)
                                                        ->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_5__get_base_addr);
                            } else {
                                VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__parent_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2481)
                                                        ->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, __VlefCall_5__get_base_addr);
                            }
                            unnamedblk378__DOT__unnamedblk379__DOT__offset 
                                = (IData)(__VlefCall_5__get_base_addr);
                            prefix = VL_CONCATN_NNN(prefix, "  "s);
                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2484)
                                                        ->__VnoInFunc_get_endian(vlSymsp, 1U, unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__e);
                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2487)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                            VL_NULL_CHECK(unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__this_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2487)
                                                        ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_7__get_n_bytes);
                            __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name89
                                [(7U & unnamedblk378__DOT__unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__e)];
                            VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                                          ,"%@Mapped in '%@' -- %10# bytes, %@, offset 'h%0x\n",0,
                                          -1,&(prefix),
                                          -1,&(__VlefCall_6__get_full_name),
                                          32,__VlefCall_7__get_n_bytes,
                                          -1,&(__Vtemp_1),
                                          32,unnamedblk378__DOT__unnamedblk379__DOT__offset);
                            ++(vlSymsp->__Vcoverage[22277]);
                        }
                        ++(vlSymsp->__Vcoverage[22278]);
                    }
                    ++(vlSymsp->__Vcoverage[22279]);
                } else {
                    ++(vlSymsp->__Vcoverage[22280]);
                }
                prefix = "  "s;
                unnamedblk382__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk382__DOT__i, this->__PVT__m_fields.size())) {
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk382__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2495)
                                                        ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_8__convert2string);
                    VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                                  ,"%@\n%@",0,-1,&(convert2string__Vfuncrtn),
                                  -1,&(__VlefCall_8__convert2string));
                    unnamedblk382__DOT__i = ((IData)(1U) 
                                             + unnamedblk382__DOT__i);
                    ++(vlSymsp->__Vcoverage[22281]);
                }
                if (this->__PVT__m_read_in_progress) {
                    if (((""s != this->__PVT__m_fname) 
                         & (0U != this->__PVT__m_lineno))) {
                        VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,
                                      -1,&(this->__PVT__m_fname),
                                      32,this->__PVT__m_lineno);
                        ++(vlSymsp->__Vcoverage[22282]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22283]);
                    }
                    convert2string__Vfuncrtn = VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
                    if (((""s != this->__PVT__m_fname) 
                         & (0U != this->__PVT__m_lineno))) {
                        ++(vlSymsp->__Vcoverage[22284]);
                    }
                    if ((0U == this->__PVT__m_lineno)) {
                        ++(vlSymsp->__Vcoverage[22285]);
                    }
                    if ((1U & (~ (""s != this->__PVT__m_fname)))) {
                        ++(vlSymsp->__Vcoverage[22286]);
                    }
                    ++(vlSymsp->__Vcoverage[22287]);
                } else {
                    ++(vlSymsp->__Vcoverage[22288]);
                }
                if (this->__PVT__m_write_in_progress) {
                    if (((""s != this->__PVT__m_fname) 
                         & (0U != this->__PVT__m_lineno))) {
                        VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,
                                      -1,&(this->__PVT__m_fname),
                                      32,this->__PVT__m_lineno);
                        ++(vlSymsp->__Vcoverage[22289]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22290]);
                    }
                    convert2string__Vfuncrtn = VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
                    if (((""s != this->__PVT__m_fname) 
                         & (0U != this->__PVT__m_lineno))) {
                        ++(vlSymsp->__Vcoverage[22291]);
                    }
                    if ((0U == this->__PVT__m_lineno)) {
                        ++(vlSymsp->__Vcoverage[22292]);
                    }
                    if ((1U & (~ (""s != this->__PVT__m_fname)))) {
                        ++(vlSymsp->__Vcoverage[22293]);
                    }
                    ++(vlSymsp->__Vcoverage[22294]);
                } else {
                    ++(vlSymsp->__Vcoverage[22295]);
                }
                ++(vlSymsp->__Vcoverage[22296]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print\n"); );
                // Body
                std::string __VlefCall_2__convert2string;
                std::string __VlefCall_1__get_type_name;
                std::string __VlefCall_0__get_name;
                IData/*31:0*/ unnamedblk383__DOT__i;
                unnamedblk383__DOT__i = 0;
                VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> f;
                f.clear();
                Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
                this->__VnoInFunc_get_fields(vlSymsp, f);
                unnamedblk383__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk383__DOT__i, f.size())) {
                    VL_NULL_CHECK(f.at(unnamedblk383__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2520)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                    VL_NULL_CHECK(f.at(unnamedblk383__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2520)
                                                        ->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
                    VL_NULL_CHECK(f.at(unnamedblk383__DOT__i), "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2520)
                                                        ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
                    VL_NULL_CHECK(printer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh", 2520)
                                                        ->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__convert2string), 0x2eU);
                    unnamedblk383__DOT__i = ((IData)(1U) 
                                             + unnamedblk383__DOT__i);
                    ++(vlSymsp->__Vcoverage[22297]);
                }
                ++(vlSymsp->__Vcoverage[22298]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__632__verbosity;
                __Vfunc_uvm_report_enabled__632__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__632__severity;
                __Vfunc_uvm_report_enabled__632__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__633__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__634__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__632__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__632__severity = 3U;
                __Vfunc_uvm_report_enabled__632__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__633__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__633__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__634__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__634__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__632__verbosity, (IData)(__Vfunc_uvm_report_enabled__632__severity), this->__Vfunc_uvm_report_enabled__632__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel registers cannot be cloned"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s, 0x000009e0U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[22299]);
                } else {
                    ++(vlSymsp->__Vcoverage[22300]);
                }
                clone__Vfuncrtn = VlNull{};
                ++(vlSymsp->__Vcoverage[22301]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__637__verbosity;
                __Vfunc_uvm_report_enabled__637__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__637__severity;
                __Vfunc_uvm_report_enabled__637__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__638__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__639__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__637__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__637__severity = 3U;
                __Vfunc_uvm_report_enabled__637__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__638__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__638__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__639__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__639__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__637__verbosity, (IData)(__Vfunc_uvm_report_enabled__637__severity), this->__Vfunc_uvm_report_enabled__637__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel registers cannot be copied"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s, 0x000009e7U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[22302]);
                } else {
                    ++(vlSymsp->__Vcoverage[22303]);
                }
                ++(vlSymsp->__Vcoverage[22304]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__642__verbosity;
                __Vfunc_uvm_report_enabled__642__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__642__severity;
                __Vfunc_uvm_report_enabled__642__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__643__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__644__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__646__verbosity;
                __Vtask_uvm_report_warning__646__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__646__line;
                __Vtask_uvm_report_warning__646__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__646__report_enabled_checked;
                __Vtask_uvm_report_warning__646__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__647__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__648__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                do_compare__Vfuncrtn = 0U;
                this->__Vfunc_uvm_report_enabled__642__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__642__severity = 1U;
                __Vfunc_uvm_report_enabled__642__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__643__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__643__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__644__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__644__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__642__verbosity, (IData)(__Vfunc_uvm_report_enabled__642__severity), this->__Vfunc_uvm_report_enabled__642__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__646__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__646__context_name = ""s;
                    __Vtask_uvm_report_warning__646__line = 0x000009efU;
                    this->__Vtask_uvm_report_warning__646__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__646__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__646__message = "RegModel registers cannot be compared"s;
                    this->__Vtask_uvm_report_warning__646__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__647__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__647__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__648__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__648__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__646__id, this->__Vtask_uvm_report_warning__646__message, __Vtask_uvm_report_warning__646__verbosity, this->__Vtask_uvm_report_warning__646__filename, __Vtask_uvm_report_warning__646__line, this->__Vtask_uvm_report_warning__646__context_name, (IData)(__Vtask_uvm_report_warning__646__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[22305]);
                } else {
                    ++(vlSymsp->__Vcoverage[22306]);
                }
                do_compare__Vfuncrtn = 0U;
                ++(vlSymsp->__Vcoverage[22307]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__650__verbosity;
                __Vfunc_uvm_report_enabled__650__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__650__severity;
                __Vfunc_uvm_report_enabled__650__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__651__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__652__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__654__verbosity;
                __Vtask_uvm_report_warning__654__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__654__line;
                __Vtask_uvm_report_warning__654__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__654__report_enabled_checked;
                __Vtask_uvm_report_warning__654__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__655__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__656__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__650__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__650__severity = 1U;
                __Vfunc_uvm_report_enabled__650__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__651__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__651__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__652__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__652__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__650__verbosity, (IData)(__Vfunc_uvm_report_enabled__650__severity), this->__Vfunc_uvm_report_enabled__650__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__654__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__654__context_name = ""s;
                    __Vtask_uvm_report_warning__654__line = 0x000009f7U;
                    this->__Vtask_uvm_report_warning__654__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__654__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__654__message = "RegModel registers cannot be packed"s;
                    this->__Vtask_uvm_report_warning__654__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__655__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__655__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__656__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__656__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__654__id, this->__Vtask_uvm_report_warning__654__message, __Vtask_uvm_report_warning__654__verbosity, this->__Vtask_uvm_report_warning__654__filename, __Vtask_uvm_report_warning__654__line, this->__Vtask_uvm_report_warning__654__context_name, (IData)(__Vtask_uvm_report_warning__654__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[22308]);
                } else {
                    ++(vlSymsp->__Vcoverage[22309]);
                }
                ++(vlSymsp->__Vcoverage[22310]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__658__verbosity;
                __Vfunc_uvm_report_enabled__658__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__658__severity;
                __Vfunc_uvm_report_enabled__658__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__659__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__660__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__662__verbosity;
                __Vtask_uvm_report_warning__662__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__662__line;
                __Vtask_uvm_report_warning__662__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__662__report_enabled_checked;
                __Vtask_uvm_report_warning__662__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__663__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__664__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__658__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__658__severity = 1U;
                __Vfunc_uvm_report_enabled__658__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__659__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__659__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__660__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__660__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__658__verbosity, (IData)(__Vfunc_uvm_report_enabled__658__severity), this->__Vfunc_uvm_report_enabled__658__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__662__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__662__context_name = ""s;
                    __Vtask_uvm_report_warning__662__line = 0x000009feU;
                    this->__Vtask_uvm_report_warning__662__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__662__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__662__message = "RegModel registers cannot be unpacked"s;
                    this->__Vtask_uvm_report_warning__662__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__663__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__663__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__664__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__664__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__662__id, this->__Vtask_uvm_report_warning__662__message, __Vtask_uvm_report_warning__662__verbosity, this->__Vtask_uvm_report_warning__662__filename, __Vtask_uvm_report_warning__662__line, this->__Vtask_uvm_report_warning__662__context_name, (IData)(__Vtask_uvm_report_warning__662__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[22311]);
                } else {
                    ++(vlSymsp->__Vcoverage[22312]);
                }
                ++(vlSymsp->__Vcoverage[22313]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0____VBasicRand;
                Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
                randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                       & __VlefCall_0____VBasicRand);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vsetup_constraints\n"); );
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VBasicRand\n"); );
                // Body
                __VBasicRand__Vfuncrtn = 1U;
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::_ctor_var_reset\n"); );
                // Body
                (void)vlSymsp;  // Prevent unused variable warning
                __PVT__m_locked = 0;
                __PVT__m_n_bits = 0;
                __PVT__m_n_used_bits = 0;
                __PVT__m_maps.atDefault() = 0;
                __PVT__m_has_cover = 0;
                __PVT__m_cover_on = 0;
                __PVT__m_lineno = 0;
                __PVT__m_read_in_progress = 0;
                __PVT__m_write_in_progress = 0;
                __PVT__m_update_in_progress = 0;
                __PVT__m_is_busy = 0;
                __PVT__m_is_locked_by_field = 0;
            }

            Vtb_rng_uvm_pkg__03a__03auvm_reg::~Vtb_rng_uvm_pkg__03a__03auvm_reg() {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::~\n"); );
            }

            std::string Vtb_rng_uvm_pkg__03a__03auvm_reg::to_string() const {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::to_string\n"); );
                // Body
                return ("'{"s + to_string_middle() + "}");
            }

            std::string Vtb_rng_uvm_pkg__03a__03auvm_reg::to_string_middle() const {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg::to_string_middle\n"); );
                // Body
                std::string out;
                out += "m_locked:" + VL_TO_STRING(__PVT__m_locked);
                out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
                out += ", m_regfile_parent:" + VL_TO_STRING(__PVT__m_regfile_parent);
                out += ", m_n_bits:" + VL_TO_STRING(__PVT__m_n_bits);
                out += ", m_n_used_bits:" + VL_TO_STRING(__PVT__m_n_used_bits);
                out += ", m_maps:" + VL_TO_STRING(__PVT__m_maps);
                out += ", m_fields:" + VL_TO_STRING(__PVT__m_fields);
                out += ", m_has_cover:" + VL_TO_STRING(__PVT__m_has_cover);
                out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
                out += ", m_atomic:" + VL_TO_STRING(__PVT__m_atomic);
                out += ", m_process:" + VL_TO_STRING(__PVT__m_process);
                out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
                out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
                out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
                out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
                out += ", m_update_in_progress:" + VL_TO_STRING(__PVT__m_update_in_progress);
                out += ", m_is_busy:" + VL_TO_STRING(__PVT__m_is_busy);
                out += ", m_is_locked_by_field:" + VL_TO_STRING(__PVT__m_is_locked_by_field);
                out += ", m_backdoor:" + VL_TO_STRING(__PVT__m_backdoor);
                out += ", m_hdl_paths_pool:" + VL_TO_STRING(__PVT__m_hdl_paths_pool);
                out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
                return (out);
            }
