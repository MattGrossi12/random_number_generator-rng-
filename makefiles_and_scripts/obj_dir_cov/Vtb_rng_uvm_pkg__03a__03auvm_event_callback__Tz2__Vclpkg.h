// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_EVENT_CALLBACK__TZ2__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_EVENT_CALLBACK__TZ2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_callback;
class Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2;
class Vtb_rng_uvm_pkg__03a__03auvm_object;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_event_callback__Tz2__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_event_callback__Tz2__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_event_callback__Tz2__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_event_callback__Tz2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_event_callback__Tz2 : public Vtb_rng_uvm_pkg__03a__03auvm_callback {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_event_callback__Tz2"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_post_trigger(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2> e, std::string data);
    virtual void __VnoInFunc_pre_trigger(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2> e, std::string data, CData/*0:0*/ &pre_trigger__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_event_callback__Tz2() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_event_callback__Tz2();
};


#endif  // guard
