// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCE_REQUEST__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCE_REQUEST__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_std__03a__03aprocess;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_sequence_request__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_request__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_sequence_request__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_sequence_request__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_sequence_request : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__grant;
    IData/*31:0*/ __PVT__sequence_id;
    IData/*31:0*/ __PVT__request_id;
    IData/*31:0*/ __PVT__item_priority;
    IData/*31:0*/ __PVT__request;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __PVT__process_id;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> __PVT__sequence_ptr;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_request"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_sequence_request(*this); }
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_request() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_rng_uvm_pkg__03a__03auvm_sequence_request() {}
};


#endif  // guard
