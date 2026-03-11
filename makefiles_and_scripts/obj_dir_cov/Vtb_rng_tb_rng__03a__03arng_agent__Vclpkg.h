// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_TB_RNG__03A__03ARNG_AGENT__VCLPKG_H_
#define VERILATED_VTB_RNG_TB_RNG__03A__03ARNG_AGENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_tb_rng__03a__03arng_driver;
class Vtb_rng_tb_rng__03a__03arng_monitor;
class Vtb_rng_tb_rng__03a__03arng_sequencer;
class Vtb_rng_uvm_pkg__03a__03auvm_agent;
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi68;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi73;
class Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg();
    ~Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_tb_rng__03a__03arng_agent__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi68> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_agent__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_tb_rng__03a__03arng_agent : public Vtb_rng_uvm_pkg__03a__03auvm_agent {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_sequencer> __PVT__sequencer;
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_driver> __PVT__driver;
    VlClassRef<Vtb_rng_tb_rng__03a__03arng_monitor> __PVT__monitor;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_rng::rng_agent"; }
    VlClass* clone() const { return new Vtb_rng_tb_rng__03a__03arng_agent(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_tb_rng__03a__03arng_agent() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_tb_rng__03a__03arng_agent();
};


#endif  // guard
