// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_TB_RNG_H_
#define VERILATED_VTB_RNG_TB_RNG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_rng_if;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_tb_rng final {
  public:
    // CELLS
    Vtb_rng_rng_if* __PVT__rif;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clk;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __PVT__dut__DOT__req_num;
        CData/*2:0*/ __PVT__dut__DOT__data_out;
        CData/*0:0*/ dut__DOT____Vtogcov__clk_i;
        CData/*0:0*/ dut__DOT____Vtogcov__rst_i;
        CData/*0:0*/ dut__DOT____Vtogcov__req_num_i;
        CData/*0:0*/ dut__DOT____Vtogcov__wr_i;
        CData/*2:0*/ dut__DOT____Vtogcov__num_to_send_o;
        CData/*1:0*/ dut__DOT____Vtogcov__seed_bar;
        CData/*2:0*/ dut__DOT____Vtogcov__num_i_bar;
        CData/*0:0*/ dut__DOT____Vtogcov__req_num_again;
        CData/*0:0*/ dut__DOT____Vtogcov__req_num;
        CData/*2:0*/ __PVT__dut__DOT__rng_dp__DOT__next_num;
        CData/*2:0*/ dut__DOT__rng_dp__DOT____Vtogcov__next_num;
        CData/*2:0*/ __PVT__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
        CData/*1:0*/ __PVT__dut__DOT__rng_sel__DOT__seed_s;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__ram_0;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__ram_1;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__ram_2;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__ram_3;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__ram_4;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__ram_5;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__ram_6;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__ram_7;
        CData/*2:0*/ __PVT__dut__DOT__rng_rd__DOT__cache;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__decx;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__dec0;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__dec1;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__dec2;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__dec3;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__dec4;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__dec5;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__dec6;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__dec7;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__req_num;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__next_state;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__wr_ff1;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__wr_ff2;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__wr_ff2_d;
        CData/*0:0*/ __PVT__dut__DOT__rng_rd__DOT__wr_pulse;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__ram_0;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__ram_1;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__ram_2;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__ram_3;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__ram_4;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__ram_5;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__ram_6;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__ram_7;
        CData/*2:0*/ dut__DOT__rng_rd__DOT____Vtogcov__cache;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__decx;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__dec0;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__dec1;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__dec2;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__dec3;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__dec4;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__dec5;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__dec6;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__dec7;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__next_state;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__wr_ff1;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__wr_ff2_d;
        CData/*0:0*/ dut__DOT__rng_rd__DOT____Vtogcov__wr_pulse;
    };
    struct {
        CData/*2:0*/ __Vdly__dut__DOT__rng_dp__DOT__next_num;
        CData/*2:0*/ __Vdly__dut__DOT__rng_dp__DOT__inst__DOT__num_counter;
        CData/*1:0*/ __Vdly__dut__DOT__rng_sel__DOT__seed_s;
        CData/*0:0*/ __Vdly__dut__DOT__rng_rd__DOT__wr_ff2_d;
        CData/*0:0*/ __Vdly__dut__DOT__rng_rd__DOT__wr_pulse;
        CData/*0:0*/ __Vdly__dut__DOT__rng_rd__DOT__wr_ff2;
        CData/*0:0*/ __Vdly__dut__DOT__rng_rd__DOT__wr_ff1;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__cache;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__ram_7;
        CData/*0:0*/ __Vdly__dut__DOT__rng_rd__DOT__req_num;
        CData/*2:0*/ __Vdly__dut__DOT__data_out;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__ram_6;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__ram_5;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__ram_4;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__ram_3;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__ram_2;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__ram_1;
        CData/*2:0*/ __Vdly__dut__DOT__rng_rd__DOT__ram_0;
    };
    std::string __Vtask_run_test__1__test_name;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_tb_rng();
    ~Vtb_rng_tb_rng();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_tb_rng);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
