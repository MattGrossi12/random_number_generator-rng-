// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PUT_IMP__TZ229_TBZ307__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PUT_IMP__TZ229_TBZ307__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_item;
class Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz229;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_put_imp__Tz229_TBz307__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_put_imp__Tz229_TBz307__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_put_imp__Tz229_TBz307__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_put_imp__Tz229_TBz307__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_put_imp__Tz229_TBz307 : public Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz305 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz229> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_put_imp__Tz229_TBz307"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_put_imp__Tz229_TBz307(*this); }
    void __VnoInFunc_can_put(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t);
    void __VnoInFunc_try_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_put_imp__Tz229_TBz307() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz229> imp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_put_imp__Tz229_TBz307();
};


#endif  // guard
