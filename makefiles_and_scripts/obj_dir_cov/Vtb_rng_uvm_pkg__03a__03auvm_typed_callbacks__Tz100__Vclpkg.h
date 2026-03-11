// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ100__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ100__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_callback;
class Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_pool__Tz68_TBz69;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100;
class Vtb_rng_uvm_pkg__03a__03auvm_typeid_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_warning__12__id;
    std::string __Vtask_uvm_report_warning__12__message;
    std::string __Vtask_uvm_report_warning__12__filename;
    std::string __Vtask_uvm_report_warning__12__context_name;
    std::string __Vfunc_uvm_report_enabled__51__id;
    std::string __Vfunc_m_uvm_string_queue_join__55__Vfuncout;
    std::string __Vtask_uvm_report_info__56__id;
    std::string __Vtask_uvm_report_info__56__message;
    std::string __Vtask_uvm_report_info__56__filename;
    std::string __Vtask_uvm_report_info__56__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> __PVT__m_tw_cb_q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100> __PVT__m_t_inst;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_display(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_event__Tz2> obj);
    void __VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn);
    void __VnoInFunc_m_cb_find_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100> &m_initialize__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100 : public Vtb_rng_uvm_pkg__03a__03auvm_callbacks_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typed_callbacks__Tz100"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz48> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_typed_callbacks__Tz100();
};


#endif  // guard
