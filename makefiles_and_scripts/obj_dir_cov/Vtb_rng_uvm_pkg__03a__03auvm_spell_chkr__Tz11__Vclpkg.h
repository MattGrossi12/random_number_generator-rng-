// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ11__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ11__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__max;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_info__5__id;
    std::string __Vtask_uvm_report_info__5__message;
    std::string __Vtask_uvm_report_info__5__filename;
    std::string __Vtask_uvm_report_info__5__context_name;
    std::string __Vfunc_uvm_report_enabled__9__id;
    std::string __Vfunc_m_uvm_string_queue_join__13__Vfuncout;
    std::string __Vtask_uvm_report_info__14__id;
    std::string __Vtask_uvm_report_info__14__message;
    std::string __Vtask_uvm_report_info__14__filename;
    std::string __Vtask_uvm_report_info__14__context_name;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_check(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5>> &strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn);
    void __VnoInFunc_levenshtein_distance(Vtb_rng__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn);
    void __VnoInFunc_minimum(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn);
};


class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_spell_chkr__Tz11"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11(*this); }
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_rng_uvm_pkg__03a__03auvm_spell_chkr__Tz11() {}
};


#endif  // guard
