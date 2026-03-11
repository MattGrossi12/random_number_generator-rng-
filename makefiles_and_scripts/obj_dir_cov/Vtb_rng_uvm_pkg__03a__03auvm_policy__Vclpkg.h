// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_POLICY__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_POLICY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_policy__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_policy__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_policy__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_policy__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_policy : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__6__id;
    std::string __Vtask_uvm_report_error__10__id;
    std::string __Vtask_uvm_report_error__10__message;
    std::string __Vtask_uvm_report_error__10__filename;
    std::string __Vtask_uvm_report_error__10__context_name;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vtask_uvm_report_info__18__id;
    std::string __Vtask_uvm_report_info__18__message;
    std::string __Vtask_uvm_report_info__18__filename;
    std::string __Vtask_uvm_report_info__18__context_name;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper>, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>> __PVT__m_extensions;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>> __PVT__m_policy_stack;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_policy"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clear_extension(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> ext_type);
    virtual void __VnoInFunc_clear_extensions(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_extension_exists(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> ext_type, CData/*0:0*/ &extension_exists__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_active_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &get_active_object__Vfuncrtn);
    virtual void __VnoInFunc_get_active_object_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_active_object_depth__Vfuncrtn);
    virtual void __VnoInFunc_get_extension(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> ext_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &get_extension__Vfuncrtn);
    virtual void __VnoInFunc_pop_active_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &pop_active_object__Vfuncrtn);
    virtual void __VnoInFunc_push_active_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_extension(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &set_extension__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_policy() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_policy();
};


#endif  // guard
