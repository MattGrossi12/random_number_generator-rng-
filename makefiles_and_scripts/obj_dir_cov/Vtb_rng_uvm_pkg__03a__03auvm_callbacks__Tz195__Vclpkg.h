// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_CALLBACKS__TZ195__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_CALLBACKS__TZ195__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_callback;
class Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195;
class Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base;
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz68_TBz69;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48;
class Vtb_rng_uvm_pkg__03a__03auvm_reg;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195;
class Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz195;
class Vtb_rng_uvm_pkg__03a__03auvm_typeid__Tz48;
class Vtb_rng_uvm_pkg__03a__03auvm_typeid_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    std::string __Vfunc_uvm_report_enabled__6__id;
    std::string __Vtask_uvm_report_error__15__id;
    std::string __Vtask_uvm_report_error__15__message;
    std::string __Vtask_uvm_report_error__15__filename;
    std::string __Vtask_uvm_report_error__15__context_name;
    std::string __Vtask_uvm_report_warning__24__id;
    std::string __Vtask_uvm_report_warning__24__message;
    std::string __Vtask_uvm_report_warning__24__filename;
    std::string __Vtask_uvm_report_warning__24__context_name;
    std::string __Vtask_uvm_report_warning__30__id;
    std::string __Vtask_uvm_report_warning__30__message;
    std::string __Vtask_uvm_report_warning__30__filename;
    std::string __Vtask_uvm_report_warning__30__context_name;
    std::string __Vtask_uvm_report_warning__45__id;
    std::string __Vtask_uvm_report_warning__45__message;
    std::string __Vtask_uvm_report_warning__45__filename;
    std::string __Vtask_uvm_report_warning__45__context_name;
    std::string __Vtask_uvm_report_error__57__id;
    std::string __Vtask_uvm_report_error__57__message;
    std::string __Vtask_uvm_report_error__57__filename;
    std::string __Vtask_uvm_report_error__57__context_name;
    std::string __Vtask_uvm_report_warning__63__id;
    std::string __Vtask_uvm_report_warning__63__message;
    std::string __Vtask_uvm_report_warning__63__filename;
    std::string __Vtask_uvm_report_warning__63__context_name;
    std::string __Vtask_uvm_report_warning__74__id;
    std::string __Vtask_uvm_report_warning__74__message;
    std::string __Vtask_uvm_report_warning__74__filename;
    std::string __Vtask_uvm_report_warning__74__context_name;
    std::string __Vtask_uvm_report_warning__83__id;
    std::string __Vtask_uvm_report_warning__83__message;
    std::string __Vtask_uvm_report_warning__83__filename;
    std::string __Vtask_uvm_report_warning__83__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195> __PVT__m_inst;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_add(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195> &get__Vfuncrtn);
    void __VnoInFunc_get_all(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback>> &all_callbacks, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_get_first(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> &q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_m_register_pair(Vtb_rng__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195 : public Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz195 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__Tz195"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_callbacks__Tz195();
};


#endif  // guard
