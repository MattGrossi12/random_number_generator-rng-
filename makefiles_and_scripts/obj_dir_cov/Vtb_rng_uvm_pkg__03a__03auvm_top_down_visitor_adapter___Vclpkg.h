// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_TOP_DOWN_VISITOR_ADAPTER___VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_TOP_DOWN_VISITOR_ADAPTER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy_;
class Vtb_rng_uvm_pkg__03a__03auvm_visitor_;
class Vtb_rng_uvm_pkg__03a__03auvm_visitor_adapter__TBz65;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_visitor_adapter__TBz65__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_ : public Vtb_rng_uvm_pkg__03a__03auvm_visitor_adapter__TBz65 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_top_down_visitor_adapter_"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_accept(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> s, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_();
};


#endif  // guard
