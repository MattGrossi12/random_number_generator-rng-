// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_RNG_IF_H_
#define VERILATED_VTB_RNG_RNG_IF_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_rng_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk_i;
    CData/*0:0*/ __PVT__rst_i;
    CData/*0:0*/ __PVT__req_num_i;
    CData/*0:0*/ __PVT__wr_i;
    CData/*2:0*/ __PVT__num_to_send_o;
    CData/*0:0*/ __Vtogcov__clk_i;
    CData/*0:0*/ __Vtogcov__rst_i;
    CData/*0:0*/ __Vtogcov__req_num_i;
    CData/*0:0*/ __Vtogcov__wr_i;
    CData/*2:0*/ __Vtogcov__num_to_send_o;
    QData/*63:0*/ __PVT__clk_toggle_tu;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_rng_if();
    ~Vtb_rng_rng_if();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_rng_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

std::string VL_TO_STRING(const Vtb_rng_rng_if* obj);

#endif  // guard
