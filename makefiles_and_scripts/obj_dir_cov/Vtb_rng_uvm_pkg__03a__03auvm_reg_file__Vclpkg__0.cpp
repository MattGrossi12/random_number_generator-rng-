// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_file__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi120> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_file__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[22422]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_file__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_file__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_file"s;
    ++(vlSymsp->__Vcoverage[22427]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi120> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi120__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[22423]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_file, vlProcess, vlSymsp, ""s);
        ++(vlSymsp->__Vcoverage[22424]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_file, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[22425]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[22426]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_file"s;
    ++(vlSymsp->__Vcoverage[22428]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_hdl_path = "RTL"s;
    ++(vlSymsp->__Vcoverage[22421]);
    /*super.new*/;
    this->__PVT__hdl_paths_pool = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz224, vlProcess, vlSymsp, "hdl_paths"s);
    ++(vlSymsp->__Vcoverage[22429]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__11__verbosity;
    __Vtask_uvm_report_error__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__11__line;
    __Vtask_uvm_report_error__11__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__11__report_enabled_checked;
    __Vtask_uvm_report_error__11__report_enabled_checked = 0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == blk_parent)) {
            this->__Vfunc_uvm_report_enabled__5__id = "UVM/RFILE/CFG/NOBLK"s;
            __Vfunc_uvm_report_enabled__5__severity = 2U;
            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), this->__Vfunc_uvm_report_enabled__5__id, __VlefCall_0__uvm_report_enabled);
            ++(vlSymsp->__Vcoverage[432]);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                __Vtask_uvm_report_error__11__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__11__context_name = ""s;
                __Vtask_uvm_report_error__11__line = 0x00000094U;
                this->__Vtask_uvm_report_error__11__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                __Vtask_uvm_report_error__11__verbosity = 0U;
                this->__Vtask_uvm_report_error__11__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_reg_file::configure() called without a parent block for instance \""s, __VlefCall_1__get_name), "\" of register file type \""s), __VlefCall_2__get_type_name), "\"."s));
                            this->__Vtask_uvm_report_error__11__id = "UVM/RFILE/CFG/NOBLK"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__12__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__13__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__11__id, this->__Vtask_uvm_report_error__11__message, __Vtask_uvm_report_error__11__verbosity, this->__Vtask_uvm_report_error__11__filename, __Vtask_uvm_report_error__11__line, this->__Vtask_uvm_report_error__11__context_name, (IData)(__Vtask_uvm_report_error__11__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[22430]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22431]);
                        }
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22433]);
                    }
                    this->__PVT__parent = blk_parent;
                    this->__PVT__m_rf = regfile_parent;
                    this->__VnoInFunc_add_hdl_path(vlSymsp, hdl_path, "RTL"s);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22434]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block\n"); );
                // Body
                get_block__Vfuncrtn = this->__PVT__parent;
                ++(vlSymsp->__Vcoverage[22435]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_regfile(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_regfile\n"); );
                // Body
                get_regfile__Vfuncrtn = this->__PVT__m_rf;
                ++(vlSymsp->__Vcoverage[22436]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clear_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clear_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__20__verbosity;
                __Vfunc_uvm_report_enabled__20__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__20__severity;
                __Vfunc_uvm_report_enabled__20__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__24__verbosity;
                __Vtask_uvm_report_warning__24__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__24__line;
                __Vtask_uvm_report_warning__24__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__24__report_enabled_checked;
                __Vtask_uvm_report_warning__24__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_0__exists;
                {
                    if (("ALL"s == kind)) {
                        this->__PVT__hdl_paths_pool 
                            = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz224, vlProcess, vlSymsp, "hdl_paths"s);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22438]);
                    }
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 182)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[22439]);
                        } else {
                            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 184)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[22440]);
                        }
                        ++(vlSymsp->__Vcoverage[22441]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22442]);
                    }
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 187)
                                                        ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
                    if ((0U != __VlefCall_0__exists)) {
                        ++(vlSymsp->__Vcoverage[22446]);
                    } else {
                        this->__Vfunc_uvm_report_enabled__20__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__20__severity = 1U;
                        __Vfunc_uvm_report_enabled__20__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__21__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__22__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__20__verbosity, (IData)(__Vfunc_uvm_report_enabled__20__severity), this->__Vfunc_uvm_report_enabled__20__id, __VlefCall_1__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            __Vtask_uvm_report_warning__24__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__24__context_name = ""s;
                            __Vtask_uvm_report_warning__24__line = 0x000000bcU;
                            this->__Vtask_uvm_report_warning__24__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_warning__24__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__24__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_warning__24__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__25__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__26__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__24__id, this->__Vtask_uvm_report_warning__24__message, __Vtask_uvm_report_warning__24__verbosity, this->__Vtask_uvm_report_warning__24__filename, __Vtask_uvm_report_warning__24__line, this->__Vtask_uvm_report_warning__24__context_name, (IData)(__Vtask_uvm_report_warning__24__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[436]);
                            ++(vlSymsp->__Vcoverage[22443]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22444]);
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 192)
                                                        ->__VnoInFunc_delete(vlSymsp, kind);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22447]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_add_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string path, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_add_hdl_path\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2> paths;
                VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 202)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
                VL_NULL_CHECK(paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 204)
                                                        ->__VnoInFunc_push_back(vlSymsp, path);
                ++(vlSymsp->__Vcoverage[22448]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0__exists;
                has_hdl_path__Vfuncrtn = 0U;
                if ((""s == kind)) {
                    if ((VlNull{} != this->__PVT__m_rf)) {
                        VL_NULL_CHECK(this->__PVT__m_rf, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 214)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        ++(vlSymsp->__Vcoverage[22449]);
                    } else {
                        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 216)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        ++(vlSymsp->__Vcoverage[22450]);
                    }
                    ++(vlSymsp->__Vcoverage[22451]);
                } else {
                    ++(vlSymsp->__Vcoverage[22452]);
                }
                VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 219)
                                                        ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
                has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
                ++(vlSymsp->__Vcoverage[22453]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__37__verbosity;
                __Vfunc_uvm_report_enabled__37__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__37__severity;
                __Vfunc_uvm_report_enabled__37__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__41__verbosity;
                __Vtask_uvm_report_error__41__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__41__line;
                __Vtask_uvm_report_error__41__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__41__report_enabled_checked;
                __Vtask_uvm_report_error__41__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                std::string __VlefCall_2__get;
                IData/*31:0*/ __VlefCall_1__size;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk384__DOT__i;
                CData/*0:0*/ __VExpr_h0ab56f85__0;
                __VExpr_h0ab56f85__0 = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2> hdl_paths;
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 231)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[22454]);
                        } else {
                            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 233)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[22455]);
                        }
                        ++(vlSymsp->__Vcoverage[22456]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22457]);
                    }
                    this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VExpr_h0ab56f85__0);
                    if (__VExpr_h0ab56f85__0) {
                        ++(vlSymsp->__Vcoverage[22461]);
                    } else {
                        this->__Vfunc_uvm_report_enabled__37__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__37__severity = 2U;
                        __Vfunc_uvm_report_enabled__37__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__38__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__39__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__37__verbosity, (IData)(__Vfunc_uvm_report_enabled__37__severity), this->__Vfunc_uvm_report_enabled__37__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__41__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__41__context_name = ""s;
                            __Vtask_uvm_report_error__41__line = 0x000000edU;
                            this->__Vtask_uvm_report_error__41__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_error__41__verbosity = 0U;
                            this->__Vtask_uvm_report_error__41__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register does not have hdl path defined for abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_error__41__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__42__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__43__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__41__id, this->__Vtask_uvm_report_error__41__message, __Vtask_uvm_report_error__41__verbosity, this->__Vtask_uvm_report_error__41__filename, __Vtask_uvm_report_error__41__line, this->__Vtask_uvm_report_error__41__context_name, (IData)(__Vtask_uvm_report_error__41__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[22458]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22459]);
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 241)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
                    unnamedblk384__DOT__i = 0U;
                    unnamedblk384__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 243)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                        if (!(VL_LTS_III(32, unnamedblk384__DOT__i, __VlefCall_1__size))) break;
                        VL_NULL_CHECK(hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 244)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk384__DOT__i, __VlefCall_2__get);
                        paths.push_back(__VlefCall_2__get);
                        unnamedblk384__DOT__i = ((IData)(1U) 
                                                 + unnamedblk384__DOT__i);
                        ++(vlSymsp->__Vcoverage[22464]);
                    }
                    __Vlabel0: ;
                }
                if ((1U & (~ (IData)(__VExpr_h0ab56f85__0)))) {
                    ++(vlSymsp->__Vcoverage[22462]);
                }
                if (__VExpr_h0ab56f85__0) {
                    ++(vlSymsp->__Vcoverage[22463]);
                }
                ++(vlSymsp->__Vcoverage[22465]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
                __Vfunc_uvm_report_enabled__50__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
                __Vfunc_uvm_report_enabled__50__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__54__verbosity;
                __Vtask_uvm_report_error__54__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__54__line;
                __Vtask_uvm_report_error__54__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__54__report_enabled_checked;
                __Vtask_uvm_report_error__54__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_1__size;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2> unnamedblk385__DOT__hdl_paths;
                VlQueue<std::string> unnamedblk385__DOT__parent_paths;
                IData/*31:0*/ unnamedblk385__DOT__unnamedblk386__DOT__i;
                std::string unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__hdl_path;
                IData/*31:0*/ unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__unnamedblk388__DOT__j;
                unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__unnamedblk388__DOT__j = 0;
                CData/*0:0*/ __VExpr_h0ab56f85__0;
                __VExpr_h0ab56f85__0 = 0;
                {
                    if ((""s == kind)) {
                        this->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        ++(vlSymsp->__Vcoverage[22466]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22467]);
                    }
                    this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VExpr_h0ab56f85__0);
                    if (__VExpr_h0ab56f85__0) {
                        ++(vlSymsp->__Vcoverage[22471]);
                    } else {
                        this->__Vfunc_uvm_report_enabled__50__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__50__severity = 2U;
                        __Vfunc_uvm_report_enabled__50__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__51__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__52__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__50__verbosity, (IData)(__Vfunc_uvm_report_enabled__50__severity), this->__Vfunc_uvm_report_enabled__50__id, __VlefCall_0__uvm_report_enabled);
                        ++(vlSymsp->__Vcoverage[432]);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__54__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__54__context_name = ""s;
                            __Vtask_uvm_report_error__54__line = 0x00000102U;
                            this->__Vtask_uvm_report_error__54__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_error__54__verbosity = 0U;
                            this->__Vtask_uvm_report_error__54__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register file does not have hdl path defined for abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_error__54__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__55__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__56__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__54__id, this->__Vtask_uvm_report_error__54__message, __Vtask_uvm_report_error__54__verbosity, this->__Vtask_uvm_report_error__54__filename, __Vtask_uvm_report_error__54__line, this->__Vtask_uvm_report_error__54__context_name, (IData)(__Vtask_uvm_report_error__54__report_enabled_checked));
                            ++(vlSymsp->__Vcoverage[437]);
                            ++(vlSymsp->__Vcoverage[22468]);
                        } else {
                            ++(vlSymsp->__Vcoverage[22469]);
                        }
                        goto __Vlabel0;
                    }
                    paths.clear();
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 265)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk385__DOT__hdl_paths);
                    unnamedblk385__DOT__parent_paths.clear();
                    unnamedblk385__DOT__parent_paths.atDefault().clear();
                    if ((VlNull{} != this->__PVT__m_rf)) {
                        VL_NULL_CHECK(this->__PVT__m_rf, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 269)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk385__DOT__parent_paths, kind, separator);
                        ++(vlSymsp->__Vcoverage[22476]);
                    } else if ((VlNull{} != this->__PVT__parent)) {
                        VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 271)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk385__DOT__parent_paths, kind, separator);
                        ++(vlSymsp->__Vcoverage[22474]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22475]);
                    }
                    unnamedblk385__DOT__unnamedblk386__DOT__i = 0U;
                    unnamedblk385__DOT__unnamedblk386__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(unnamedblk385__DOT__hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 273)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
                        if (!(VL_LTS_III(32, unnamedblk385__DOT__unnamedblk386__DOT__i, __VlefCall_1__size))) break;
                        {
                            VL_NULL_CHECK(unnamedblk385__DOT__hdl_paths, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 274)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk385__DOT__unnamedblk386__DOT__i, unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__hdl_path);
                            if ((0U == unnamedblk385__DOT__parent_paths.size())) {
                                if ((""s != unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__hdl_path)) {
                                    paths.push_back(unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__hdl_path);
                                    ++(vlSymsp->__Vcoverage[22477]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[22478]);
                                }
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[22480]);
                            }
                            unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__unnamedblk388__DOT__j = 0U;
                            while (VL_LTS_III(32, unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__unnamedblk388__DOT__j, unnamedblk385__DOT__parent_paths.size())) {
                                if ((""s == unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__hdl_path)) {
                                    paths.push_back(unnamedblk385__DOT__parent_paths.at(unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__unnamedblk388__DOT__j));
                                    ++(vlSymsp->__Vcoverage[22481]);
                                } else {
                                    paths.push_back(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(unnamedblk385__DOT__parent_paths.at(unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__unnamedblk388__DOT__j), separator), unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__hdl_path));
                                    ++(vlSymsp->__Vcoverage[22482]);
                                }
                                unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__unnamedblk388__DOT__j 
                                    = ((IData)(1U) 
                                       + unnamedblk385__DOT__unnamedblk386__DOT__unnamedblk387__DOT__unnamedblk388__DOT__j);
                                ++(vlSymsp->__Vcoverage[22483]);
                            }
                            __Vlabel1: ;
                        }
                        unnamedblk385__DOT__unnamedblk386__DOT__i 
                            = ((IData)(1U) + unnamedblk385__DOT__unnamedblk386__DOT__i);
                        ++(vlSymsp->__Vcoverage[22484]);
                    }
                    __Vlabel0: ;
                }
                if ((1U & (~ (IData)(__VExpr_h0ab56f85__0)))) {
                    ++(vlSymsp->__Vcoverage[22472]);
                }
                if (__VExpr_h0ab56f85__0) {
                    ++(vlSymsp->__Vcoverage[22473]);
                }
                ++(vlSymsp->__Vcoverage[22485]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path\n"); );
                // Body
                {
                    get_default_hdl_path__Vfuncrtn = ""s;
                    if ((""s == this->__PVT__default_hdl_path)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 300)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
                            goto __Vlabel0;
                        } else {
                            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 302)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, get_default_hdl_path__Vfuncrtn);
                            goto __Vlabel0;
                        }
                        ++(vlSymsp->__Vcoverage[22488]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22489]);
                    }
                    get_default_hdl_path__Vfuncrtn 
                        = this->__PVT__default_hdl_path;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22490]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_set_default_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_set_default_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__67__verbosity;
                __Vfunc_uvm_report_enabled__67__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__67__severity;
                __Vfunc_uvm_report_enabled__67__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__71__verbosity;
                __Vtask_uvm_report_error__71__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__71__line;
                __Vtask_uvm_report_error__71__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__71__report_enabled_checked;
                __Vtask_uvm_report_error__71__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 314)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[22495]);
                        } else if ((VlNull{} == this->__PVT__parent)) {
                            VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 316)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                            ++(vlSymsp->__Vcoverage[22493]);
                        } else {
                            this->__Vfunc_uvm_report_enabled__67__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__67__severity = 2U;
                            __Vfunc_uvm_report_enabled__67__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__68__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__69__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__67__verbosity, (IData)(__Vfunc_uvm_report_enabled__67__severity), this->__Vfunc_uvm_report_enabled__67__id, __VlefCall_0__uvm_report_enabled);
                            ++(vlSymsp->__Vcoverage[432]);
                            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                __Vtask_uvm_report_error__71__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__71__context_name = ""s;
                                __Vtask_uvm_report_error__71__line = 0x0000013fU;
                                this->__Vtask_uvm_report_error__71__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                                __Vtask_uvm_report_error__71__verbosity = 0U;
                                this->__Vtask_uvm_report_error__71__message = "Register file has no parent. Must specify a valid HDL abstraction (kind)"s;
                                this->__Vtask_uvm_report_error__71__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__72__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__73__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__71__id, this->__Vtask_uvm_report_error__71__message, __Vtask_uvm_report_error__71__verbosity, this->__Vtask_uvm_report_error__71__filename, __Vtask_uvm_report_error__71__line, this->__Vtask_uvm_report_error__71__context_name, (IData)(__Vtask_uvm_report_error__71__report_enabled_checked));
                                ++(vlSymsp->__Vcoverage[437]);
                                ++(vlSymsp->__Vcoverage[22491]);
                            } else {
                                ++(vlSymsp->__Vcoverage[22492]);
                            }
                            goto __Vlabel0;
                        }
                        ++(vlSymsp->__Vcoverage[22496]);
                    } else {
                        ++(vlSymsp->__Vcoverage[22497]);
                    }
                    this->__PVT__default_hdl_path = kind;
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22498]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent\n"); );
                // Body
                this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
                ++(vlSymsp->__Vcoverage[22499]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name\n"); );
                // Body
                std::string __VlefCall_1__get_full_name;
                std::string __VlefCall_0__get_full_name;
                {
                    get_full_name__Vfuncrtn = ""s;
                    this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
                    if ((VlNull{} != this->__PVT__m_rf)) {
                        VL_NULL_CHECK(this->__PVT__m_rf, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 345)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), get_full_name__Vfuncrtn);
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22501]);
                    }
                    if ((VlNull{} == this->__PVT__parent)) {
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[22503]);
                    }
                    VL_NULL_CHECK(this->__PVT__parent, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 350)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                    get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), get_full_name__Vfuncrtn);
                    __Vlabel0: ;
                }
                ++(vlSymsp->__Vcoverage[22504]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__79__verbosity;
                __Vfunc_uvm_report_enabled__79__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__79__severity;
                __Vfunc_uvm_report_enabled__79__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                convert2string__Vfuncrtn = ""s;
                this->__Vfunc_uvm_report_enabled__79__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__79__severity = 3U;
                __Vfunc_uvm_report_enabled__79__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__80__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__80__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__81__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__79__verbosity, (IData)(__Vfunc_uvm_report_enabled__79__severity), this->__Vfunc_uvm_report_enabled__79__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be converted to strings"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s, 0x00000169U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[22505]);
                } else {
                    ++(vlSymsp->__Vcoverage[22506]);
                }
                convert2string__Vfuncrtn = ""s;
                ++(vlSymsp->__Vcoverage[22507]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print\n"); );
                // Body
                Vtb_rng_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
                ++(vlSymsp->__Vcoverage[22508]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
                __Vfunc_uvm_report_enabled__85__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
                __Vfunc_uvm_report_enabled__85__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__85__severity = 3U;
                __Vfunc_uvm_report_enabled__85__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__86__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__87__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be cloned"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s, 0x00000179U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[22509]);
                } else {
                    ++(vlSymsp->__Vcoverage[22510]);
                }
                clone__Vfuncrtn = VlNull{};
                ++(vlSymsp->__Vcoverage[22511]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__90__verbosity;
                __Vfunc_uvm_report_enabled__90__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__90__severity;
                __Vfunc_uvm_report_enabled__90__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
                // Body
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__90__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__90__severity = 3U;
                __Vfunc_uvm_report_enabled__90__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__91__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__92__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__90__verbosity, (IData)(__Vfunc_uvm_report_enabled__90__severity), this->__Vfunc_uvm_report_enabled__90__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be copied"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s, 0x00000180U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[22512]);
                } else {
                    ++(vlSymsp->__Vcoverage[22513]);
                }
                ++(vlSymsp->__Vcoverage[22514]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__95__verbosity;
                __Vfunc_uvm_report_enabled__95__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__95__severity;
                __Vfunc_uvm_report_enabled__95__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__96__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__97__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__99__verbosity;
                __Vtask_uvm_report_warning__99__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__99__line;
                __Vtask_uvm_report_warning__99__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__99__report_enabled_checked;
                __Vtask_uvm_report_warning__99__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__100__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__101__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                do_compare__Vfuncrtn = 0U;
                this->__Vfunc_uvm_report_enabled__95__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__95__severity = 1U;
                __Vfunc_uvm_report_enabled__95__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__96__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__96__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__97__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__97__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__95__verbosity, (IData)(__Vfunc_uvm_report_enabled__95__severity), this->__Vfunc_uvm_report_enabled__95__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__99__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__99__context_name = ""s;
                    __Vtask_uvm_report_warning__99__line = 0x00000188U;
                    this->__Vtask_uvm_report_warning__99__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__99__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__99__message = "RegModel register files cannot be compared"s;
                    this->__Vtask_uvm_report_warning__99__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__100__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__100__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__101__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__101__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__99__id, this->__Vtask_uvm_report_warning__99__message, __Vtask_uvm_report_warning__99__verbosity, this->__Vtask_uvm_report_warning__99__filename, __Vtask_uvm_report_warning__99__line, this->__Vtask_uvm_report_warning__99__context_name, (IData)(__Vtask_uvm_report_warning__99__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[22515]);
                } else {
                    ++(vlSymsp->__Vcoverage[22516]);
                }
                do_compare__Vfuncrtn = 0U;
                ++(vlSymsp->__Vcoverage[22517]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
                __Vfunc_uvm_report_enabled__103__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
                __Vfunc_uvm_report_enabled__103__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__107__verbosity;
                __Vtask_uvm_report_warning__107__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__107__line;
                __Vtask_uvm_report_warning__107__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__107__report_enabled_checked;
                __Vtask_uvm_report_warning__107__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__103__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__103__severity = 1U;
                __Vfunc_uvm_report_enabled__103__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__104__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__104__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__105__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), this->__Vfunc_uvm_report_enabled__103__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__107__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__107__context_name = ""s;
                    __Vtask_uvm_report_warning__107__line = 0x00000190U;
                    this->__Vtask_uvm_report_warning__107__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__107__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__107__message = "RegModel register files cannot be packed"s;
                    this->__Vtask_uvm_report_warning__107__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__108__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__108__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__109__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__107__id, this->__Vtask_uvm_report_warning__107__message, __Vtask_uvm_report_warning__107__verbosity, this->__Vtask_uvm_report_warning__107__filename, __Vtask_uvm_report_warning__107__line, this->__Vtask_uvm_report_warning__107__context_name, (IData)(__Vtask_uvm_report_warning__107__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[22518]);
                } else {
                    ++(vlSymsp->__Vcoverage[22519]);
                }
                ++(vlSymsp->__Vcoverage[22520]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__111__verbosity;
                __Vfunc_uvm_report_enabled__111__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__111__severity;
                __Vfunc_uvm_report_enabled__111__severity = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__112__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__113__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__115__verbosity;
                __Vtask_uvm_report_warning__115__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__115__line;
                __Vtask_uvm_report_warning__115__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__115__report_enabled_checked;
                __Vtask_uvm_report_warning__115__report_enabled_checked = 0;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__116__Vfuncout;
                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __Vtask_get_root__117__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__111__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__111__severity = 1U;
                __Vfunc_uvm_report_enabled__111__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__112__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__112__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__113__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__113__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__111__verbosity, (IData)(__Vfunc_uvm_report_enabled__111__severity), this->__Vfunc_uvm_report_enabled__111__id, __VlefCall_0__uvm_report_enabled);
                ++(vlSymsp->__Vcoverage[432]);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__115__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__115__context_name = ""s;
                    __Vtask_uvm_report_warning__115__line = 0x00000197U;
                    this->__Vtask_uvm_report_warning__115__filename = "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__115__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__115__message = "RegModel register files cannot be unpacked"s;
                    this->__Vtask_uvm_report_warning__115__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__116__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__116__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__117__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__117__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__115__id, this->__Vtask_uvm_report_warning__115__message, __Vtask_uvm_report_warning__115__verbosity, this->__Vtask_uvm_report_warning__115__filename, __Vtask_uvm_report_warning__115__line, this->__Vtask_uvm_report_warning__115__context_name, (IData)(__Vtask_uvm_report_warning__115__report_enabled_checked));
                    ++(vlSymsp->__Vcoverage[436]);
                    ++(vlSymsp->__Vcoverage[22521]);
                } else {
                    ++(vlSymsp->__Vcoverage[22522]);
                }
                ++(vlSymsp->__Vcoverage[22523]);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0____VBasicRand;
                Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
                randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                       & __VlefCall_0____VBasicRand);
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints\n"); );
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand\n"); );
                // Body
                __VBasicRand__Vfuncrtn = 1U;
            }

            void Vtb_rng_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset\n"); );
                // Body
                (void)vlSymsp;  // Prevent unused variable warning
            }

            Vtb_rng_uvm_pkg__03a__03auvm_reg_file::~Vtb_rng_uvm_pkg__03a__03auvm_reg_file() {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::~\n"); );
            }

            std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_file::to_string() const {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::to_string\n"); );
                // Body
                return ("'{"s + to_string_middle() + "}");
            }

            std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_file::to_string_middle() const {
                VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_reg_file::to_string_middle\n"); );
                // Body
                std::string out;
                out += "parent:" + VL_TO_STRING(__PVT__parent);
                out += ", m_rf:" + VL_TO_STRING(__PVT__m_rf);
                out += ", default_hdl_path:" + VL_TO_STRING(__PVT__default_hdl_path);
                out += ", hdl_paths_pool:" + VL_TO_STRING(__PVT__hdl_paths_pool);
                out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_object::to_string_middle();
                return (out);
            }
