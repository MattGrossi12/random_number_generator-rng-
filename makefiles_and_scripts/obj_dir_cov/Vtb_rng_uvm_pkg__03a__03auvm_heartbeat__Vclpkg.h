// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03a__VDynScope_27;
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_event_;
class Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_objection;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_heartbeat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_heartbeat : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_started;
    CData/*0:0*/ __PVT__m_added;
    IData/*31:0*/ __PVT__m_mode;
    VlAssignableEvent __PVT__m_stop_event;
    std::string __Vtask___VforkTask_0__19____VlefCall_22__get_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_21__get_full_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_16__get_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_15__get_full_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_10__get_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_9__get_full_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_4__get_full_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_3__get_name;
    std::string __Vtask___VforkTask_0__19__unnamedblk3__DOT__s;
    std::string __Vtask___VforkTask_0__19__unnamedblk5__DOT__s;
    std::string __Vtask___VforkTask_0__19__unnamedblk7__DOT__s;
    std::string __Vtask_get_name__21__Vfuncout;
    std::string __Vtask_get_full_name__22__Vfuncout;
    std::string __Vtask_get_full_name__25__Vfuncout;
    std::string __Vtask_get_name__26__Vfuncout;
    std::string __Vtask_get_full_name__29__Vfuncout;
    std::string __Vtask_get_name__30__Vfuncout;
    std::string __Vtask_get_full_name__33__Vfuncout;
    std::string __Vtask_get_name__34__Vfuncout;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> __PVT__m_objection;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_heartbeat_callback> __PVT__m_cb;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> __PVT__m_cntxt;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> __PVT__m_hblist;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> __PVT__m_event;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_heartbeat"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_heartbeat(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_disable_cb(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_enable_cb(Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_hb_process(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_27> __VDynScope_m_hb_process_1, VlForkSync __Vfork_2__sync);
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync);
  public:
    void __VnoInFunc_m_start_hb_process(Vtb_rng__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
  public:
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_set_heartbeat(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> e, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> &comps);
    void __VnoInFunc_set_mode(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn);
    void __VnoInFunc_start(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event_> e);
    void __VnoInFunc_stop(Vtb_rng__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_heartbeat() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_objection> objection);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_heartbeat();
};


#endif  // guard
