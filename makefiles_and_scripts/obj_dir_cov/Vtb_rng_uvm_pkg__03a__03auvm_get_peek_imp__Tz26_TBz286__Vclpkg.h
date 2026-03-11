// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ26_TBZ286__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ26_TBZ286__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286 : public Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz253 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_get_peek_imp__Tz26_TBz286"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286(*this); }
    void __VnoInFunc_can_get(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    void __VnoInFunc_can_peek(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    VlCoroutine __VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t);
    void __VnoInFunc_try_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26> imp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz286();
};


#endif  // guard
