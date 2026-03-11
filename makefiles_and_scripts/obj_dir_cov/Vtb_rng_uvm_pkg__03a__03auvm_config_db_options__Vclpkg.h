// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__tracing;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_config_db_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_is_tracing(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn);
    void __VnoInFunc_turn_off_tracing(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_tracing(Vtb_rng__Syms* __restrict vlSymsp);
};


class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_config_db_options : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db_options"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_config_db_options(*this); }
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_config_db_options() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_rng_uvm_pkg__03a__03auvm_config_db_options() {}
};


#endif  // guard
