// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_PORT__PI77__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_PORT__PI77__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_tb_rng__03a__03arng_seq_item;
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77 : public Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz147 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_enabled;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_seq_item_pull_port__pi77"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77(*this); }
    void __VnoInFunc_disable_auto_item_recording(Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &t);
    VlCoroutine __VnoInFunc_get_next_item(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &t);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_do_available(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_is_auto_item_recording_enabled(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_item_done(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> t);
    VlCoroutine __VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &t);
    void __VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> t);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> t);
    VlCoroutine __VnoInFunc_try_next_item(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &t);
    VlCoroutine __VnoInFunc_wait_for_sequences(Vtb_rng__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77();
};


#endif  // guard
