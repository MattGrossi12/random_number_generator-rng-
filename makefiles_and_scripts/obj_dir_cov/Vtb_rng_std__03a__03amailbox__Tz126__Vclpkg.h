// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_STD__03A__03AMAILBOX__TZ126__VCLPKG_H_
#define VERILATED_VTB_RNG_STD__03A__03AMAILBOX__TZ126__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_tb_rng__03a__03arng_seq_item;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_std__03a__03amailbox__Tz126__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_std__03a__03amailbox__Tz126__Vclpkg();
    ~Vtb_rng_std__03a__03amailbox__Tz126__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_std__03a__03amailbox__Tz126__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


class Vtb_rng__Syms;

class Vtb_rng_std__03a__03amailbox__Tz126 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz126"; }
    VlClass* clone() const { return new Vtb_rng_std__03a__03amailbox__Tz126(*this); }
    VlCoroutine __VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &message);
    void __VnoInFunc_num(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &message);
    VlCoroutine __VnoInFunc_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> message);
    void __VnoInFunc_try_get(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_std__03a__03amailbox__Tz126() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_rng_std__03a__03amailbox__Tz126() {}
};


#endif  // guard
