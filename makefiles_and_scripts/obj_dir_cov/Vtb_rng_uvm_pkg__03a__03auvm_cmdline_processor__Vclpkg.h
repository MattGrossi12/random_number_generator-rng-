// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtb_rng_uvm_pkg__03a__03auvm_report_object;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_inst(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor : public Vtb_rng_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_argv;
    VlQueue<std::string> __PVT__m_plus_argv;
    VlQueue<std::string> __PVT__m_uvm_argv;
    std::string __Vfunc_uvm_is_match__0__expr;
    std::string __Vfunc_uvm_is_match__0__str;
    std::string __Vfunc_uvm_glob_to_re__1__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__1__glob;
    std::string __Vfunc_uvm_re_match__2__re;
    std::string __Vfunc_uvm_re_match__2__str;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_cmdline_processor"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_arg_matches(Vtb_rng__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn);
    void __VnoInFunc_get_arg_value(Vtb_rng__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn);
    void __VnoInFunc_get_arg_values(Vtb_rng__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn);
    void __VnoInFunc_get_args(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_plusargs(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_tool_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn);
    void __VnoInFunc_get_tool_version(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn);
    void __VnoInFunc_get_uvm_args(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_m_convert_verb(Vtb_rng__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor();
};


#endif  // guard
