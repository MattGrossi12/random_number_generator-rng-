// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_tr_database;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__scope;
    std::string __PVT__stream_type_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> __PVT__db;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::m_uvm_tr_stream_cfg"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg(*this); }
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_rng_uvm_pkg__03a__03am_uvm_tr_stream_cfg() {}
};


#endif  // guard
