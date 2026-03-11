// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_BARRIER__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_BARRIER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_barrier;
class Vtb_rng_uvm_pkg__03a__03auvm_event_;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi108;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_barrier__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi108> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_barrier : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__at_threshold;
    CData/*0:0*/ __PVT__auto_reset;
    IData/*31:0*/ __PVT__threshold;
    IData/*31:0*/ __PVT__num_waiters;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> __PVT__m_event;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_barrier"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_barrier(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_cancel(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_num_waiters(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_threshold(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_trigger(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup);
    virtual void __VnoInFunc_set_auto_reset(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    virtual void __VnoInFunc_set_threshold(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ threshold);
    virtual VlCoroutine __VnoInFunc_wait_for(Vtb_rng__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_barrier() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ threshold);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_barrier();
};


#endif  // guard
