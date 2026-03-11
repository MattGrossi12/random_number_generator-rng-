// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz273> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz273__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[20878]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz273> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz273__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[20879]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233, vlProcess, vlSymsp, "uvm_reg_sequence_inst"s);
        ++(vlSymsp->__Vcoverage[20880]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[20881]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[20882]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__parent_select = 0U;
    ++(vlSymsp->__Vcoverage[20896]);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[20883]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__12__t;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__14__t;
    // Body
    VL_KEEP_THIS;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> unnamedblk1__DOT__reg_item;
    if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NO_SEQR"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NO_SEQR"s, "Sequence executing as translation sequence, but is not associated with a sequencer (m_sequencer == null)"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x0000007fU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20884]);
        } else {
            ++(vlSymsp->__Vcoverage[20885]);
        }
        ++(vlSymsp->__Vcoverage[20886]);
    } else {
        ++(vlSymsp->__Vcoverage[20887]);
    }
    if ((VlNull{} == this->__PVT__reg_seqr)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "REG_XLATE_NO_SEQR"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 133)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "REG_XLATE_NO_SEQR"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Executing RegModel translation sequence on sequencer "s, __VlefCall_2__get_full_name), "' does not have an upstream sequencer defined. "s), "Execution of register items available only via direct calls to 'do_reg_item'"s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000085U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20888]);
        } else {
            ++(vlSymsp->__Vcoverage[20889]);
        }
        co_await VlForever{};
        ++(vlSymsp->__Vcoverage[20890]);
    } else {
        ++(vlSymsp->__Vcoverage[20891]);
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "REG_XLATE_SEQ_START"s, __VlefCall_3__uvm_report_enabled);
    if ((0U != __VlefCall_3__uvm_report_enabled)) {
        VL_NULL_CHECK(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 138)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "REG_XLATE_SEQ_START"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("Starting RegModel translation sequence on sequencer "s, __VlefCall_4__get_full_name), "'"s)), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x0000008aU, ""s, 1U);
        ++(vlSymsp->__Vcoverage[20892]);
    } else {
        ++(vlSymsp->__Vcoverage[20893]);
    }
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 141)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__12__t);
        unnamedblk1__DOT__reg_item = __Vtask_peek__12__t;
        co_await this->__VnoInFunc_do_reg_item(vlProcess, vlSymsp, unnamedblk1__DOT__reg_item);
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 143)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__14__t);
        unnamedblk1__DOT__reg_item = __Vtask_get__14__t;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 
                                                144);
        ++(vlSymsp->__Vcoverage[20894]);
    }
    ++(vlSymsp->__Vcoverage[20895]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_do_reg_item(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_do_reg_item\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string rws;
    VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 159)->__VnoInFunc_convert2string(vlProcess, vlSymsp, rws);
    if ((VlNull{} == Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: m_sequencer is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000a1U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20897]);
        } else {
            ++(vlSymsp->__Vcoverage[20898]);
        }
        ++(vlSymsp->__Vcoverage[20899]);
    } else {
        ++(vlSymsp->__Vcoverage[20900]);
    }
    if ((VlNull{} == this->__PVT__adapter)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: adapter handle is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000a3U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20901]);
        } else {
            ++(vlSymsp->__Vcoverage[20902]);
        }
        ++(vlSymsp->__Vcoverage[20903]);
    } else {
        ++(vlSymsp->__Vcoverage[20904]);
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "DO_RW_ACCESS"s, __VlefCall_2__uvm_report_enabled);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DO_RW_ACCESS"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Doing transaction: "s, rws)), 0x0000012cU, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000a5U, ""s, 1U);
        ++(vlSymsp->__Vcoverage[20905]);
    } else {
        ++(vlSymsp->__Vcoverage[20906]);
    }
    if ((0U == this->__PVT__parent_select)) {
        this->__PVT__upstream_parent = VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 168)
            ->__PVT__parent;
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 169)->__PVT__parent 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this};
        ++(vlSymsp->__Vcoverage[20907]);
    } else {
        ++(vlSymsp->__Vcoverage[20908]);
    }
    if ((1U == VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 172)
         ->__PVT__kind)) {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 173)
                               ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 173)->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
        ++(vlSymsp->__Vcoverage[20909]);
    } else {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 175)
                               ->__PVT__local_map, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 175)->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, Vtb_rng_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
        ++(vlSymsp->__Vcoverage[20910]);
    }
    if ((0U == this->__PVT__parent_select)) {
        VL_NULL_CHECK(rw, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 178)->__PVT__parent 
            = this->__PVT__upstream_parent;
        ++(vlSymsp->__Vcoverage[20911]);
    } else {
        ++(vlSymsp->__Vcoverage[20912]);
    }
    ++(vlSymsp->__Vcoverage[20913]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_write_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_write_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__26__status;
    __Vtask_write__26__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000d3U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20914]);
        } else {
            ++(vlSymsp->__Vcoverage[20915]);
        }
        ++(vlSymsp->__Vcoverage[20916]);
    } else {
        co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 213)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__26__status, value, path, map, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__26__status;
        ++(vlSymsp->__Vcoverage[20917]);
    }
    ++(vlSymsp->__Vcoverage[20918]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_read_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_read_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_read__29__status;
    __Vtask_read__29__status = 0;
    QData/*63:0*/ __Vtask_read__29__value;
    __Vtask_read__29__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000e5U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20919]);
        } else {
            ++(vlSymsp->__Vcoverage[20920]);
        }
        ++(vlSymsp->__Vcoverage[20921]);
    } else {
        co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 231)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__29__status, __Vtask_read__29__value, path, map, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__29__status;
        value = __Vtask_read__29__value;
        ++(vlSymsp->__Vcoverage[20922]);
    }
    ++(vlSymsp->__Vcoverage[20923]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_poke_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_poke_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_poke__32__status;
    __Vtask_poke__32__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000f6U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20924]);
        } else {
            ++(vlSymsp->__Vcoverage[20925]);
        }
        ++(vlSymsp->__Vcoverage[20926]);
    } else {
        co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 248)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__32__status, value, kind, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, extension, fname, lineno);
        status = __Vtask_poke__32__status;
        ++(vlSymsp->__Vcoverage[20927]);
    }
    ++(vlSymsp->__Vcoverage[20928]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_peek_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_peek_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__35__status;
    __Vtask_peek__35__status = 0;
    QData/*63:0*/ __Vtask_peek__35__value;
    __Vtask_peek__35__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000107U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20929]);
        } else {
            ++(vlSymsp->__Vcoverage[20930]);
        }
        ++(vlSymsp->__Vcoverage[20931]);
    } else {
        co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 265)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__35__status, __Vtask_peek__35__value, kind, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, extension, fname, lineno);
        status = __Vtask_peek__35__status;
        value = __Vtask_peek__35__value;
        ++(vlSymsp->__Vcoverage[20932]);
    }
    ++(vlSymsp->__Vcoverage[20933]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_update_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_update_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_update__38__status;
    __Vtask_update__38__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000119U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20934]);
        } else {
            ++(vlSymsp->__Vcoverage[20935]);
        }
        ++(vlSymsp->__Vcoverage[20936]);
    } else {
        co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 283)->__VnoInFunc_update(vlSymsp, __Vtask_update__38__status, path, map, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, prior, extension, fname, lineno);
        status = __Vtask_update__38__status;
        ++(vlSymsp->__Vcoverage[20937]);
    }
    ++(vlSymsp->__Vcoverage[20938]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_mirror_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_mirror_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__41__status;
    __Vtask_mirror__41__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x0000012cU, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20939]);
        } else {
            ++(vlSymsp->__Vcoverage[20940]);
        }
        ++(vlSymsp->__Vcoverage[20941]);
    } else {
        co_await VL_NULL_CHECK(rg, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 302)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__41__status, check, path, map, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, prior, extension, fname, lineno);
        status = __Vtask_mirror__41__status;
        ++(vlSymsp->__Vcoverage[20942]);
    }
    ++(vlSymsp->__Vcoverage[20943]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_write_mem(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_write_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__44__status;
    __Vtask_write__44__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000140U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20944]);
        } else {
            ++(vlSymsp->__Vcoverage[20945]);
        }
        ++(vlSymsp->__Vcoverage[20946]);
    } else {
        co_await VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 322)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__44__status, offset, value, path, map, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__44__status;
        ++(vlSymsp->__Vcoverage[20947]);
    }
    ++(vlSymsp->__Vcoverage[20948]);
    co_return;
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_read_mem(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_read_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_read__47__status;
    __Vtask_read__47__status = 0;
    QData/*63:0*/ __Vtask_read__47__value;
    __Vtask_read__47__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000153U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20949]);
        } else {
            ++(vlSymsp->__Vcoverage[20950]);
        }
        ++(vlSymsp->__Vcoverage[20951]);
    } else {
        co_await VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 341)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__47__status, offset, __Vtask_read__47__value, path, map, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__47__status;
        value = __Vtask_read__47__value;
        ++(vlSymsp->__Vcoverage[20952]);
    }
    ++(vlSymsp->__Vcoverage[20953]);
    co_return;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_poke_mem(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_poke_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_poke__50__status;
    __Vtask_poke__50__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000165U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20954]);
        } else {
            ++(vlSymsp->__Vcoverage[20955]);
        }
        ++(vlSymsp->__Vcoverage[20956]);
    } else {
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 359)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__50__status, offset, value, kind, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, extension, fname, lineno);
        status = __Vtask_poke__50__status;
        ++(vlSymsp->__Vcoverage[20957]);
    }
    ++(vlSymsp->__Vcoverage[20958]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_peek_mem(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_peek_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__53__status;
    __Vtask_peek__53__status = 0;
    QData/*63:0*/ __Vtask_peek__53__value;
    __Vtask_peek__53__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000177U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[20959]);
        } else {
            ++(vlSymsp->__Vcoverage[20960]);
        }
        ++(vlSymsp->__Vcoverage[20961]);
    } else {
        VL_NULL_CHECK(mem, "/home/matheus/tools/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 377)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__53__status, offset, __Vtask_peek__53__value, kind, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233>{this}, extension, fname, lineno);
        status = __Vtask_peek__53__status;
        value = __Vtask_peek__53__value;
        ++(vlSymsp->__Vcoverage[20962]);
    }
    ++(vlSymsp->__Vcoverage[20963]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_put_response\n"); );
    // Body
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
    ++(vlSymsp->__Vcoverage[20964]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::~Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz233::to_string_middle\n"); );
    // Body
    std::string out;
    out += "model:" + VL_TO_STRING(__PVT__model);
    out += ", adapter:" + VL_TO_STRING(__PVT__adapter);
    out += ", reg_seqr:" + VL_TO_STRING(__PVT__reg_seqr);
    out += ", parent_select:" + VL_TO_STRING(__PVT__parent_select);
    out += ", upstream_parent:" + VL_TO_STRING(__PVT__upstream_parent);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_sequence_::to_string_middle();
    return (out);
}
