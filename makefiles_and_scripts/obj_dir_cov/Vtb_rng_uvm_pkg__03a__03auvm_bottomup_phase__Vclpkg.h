// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_BOTTOMUP_PHASE__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_BOTTOMUP_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_std__03a__03aprocess;
class Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_domain;
class Vtb_rng_uvm_pkg__03a__03auvm_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_seed_map;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase : public Vtb_rng_uvm_pkg__03a__03auvm_phase {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_info__15__id;
    std::string __Vtask_uvm_report_info__15__message;
    std::string __Vtask_uvm_report_info__15__filename;
    std::string __Vtask_uvm_report_info__15__context_name;
    std::string __Vfunc_uvm_report_enabled__25__id;
    std::string __Vfunc_uvm_create_random_seed__33__type_id;
    std::string __Vfunc_uvm_create_random_seed__33__inst_id;
    std::string __Vfunc_uvm_create_random_seed__33____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__35__Vfuncout;
    std::string __Vtask_uvm_report_error__36__id;
    std::string __Vtask_uvm_report_error__36__message;
    std::string __Vtask_uvm_report_error__36__filename;
    std::string __Vtask_uvm_report_error__36__context_name;
    std::string __Vfunc_uvm_oneway_hash__40__string_in;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_bottomup_phase"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_bottomup_phase();
};


#endif  // guard
