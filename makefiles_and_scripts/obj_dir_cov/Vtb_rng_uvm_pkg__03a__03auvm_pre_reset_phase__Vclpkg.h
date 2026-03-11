// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PRE_RESET_PHASE__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PRE_RESET_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_task_phase;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase> &get__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_task_phase__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase : public Vtb_rng_uvm_pkg__03a__03auvm_task_phase {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_pre_reset_phase"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_exec_task(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_pre_reset_phase();
};


#endif  // guard
