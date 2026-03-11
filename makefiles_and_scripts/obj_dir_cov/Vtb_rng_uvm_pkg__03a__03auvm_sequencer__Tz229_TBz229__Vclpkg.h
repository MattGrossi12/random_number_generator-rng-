// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCER__TZ229_TBZ229__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCER__TZ229_TBZ229__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz296;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_item;
class Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_request;
class Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229;
class Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166;
class Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo__Tz229;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__Tz296> &get_type__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229 : public Vtb_rng_uvm_pkg__03a__03auvm_sequencer_param_base__pi166 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sequence_item_requested;
    CData/*0:0*/ __PVT__get_next_item_called;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi165> __PVT__seq_item_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer__Tz229_TBz229"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> item);
    void __VnoInFunc_item_done_get_trigger_data(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &item_done_get_trigger_data__Vfuncrtn);
    void __VnoInFunc_item_done_trigger(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> item);
    virtual void __VnoInFunc_m_find_number_driver_connections(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_stop_sequences(Vtb_rng__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_try_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> &t);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_sequencer__Tz229_TBz229();
};


#endif  // guard
