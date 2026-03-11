// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_COMPONENT_NAME_CHECK_VISITOR__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_COMPONENT_NAME_CHECK_VISITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_visitor_;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_visitor___Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor : public Vtb_rng_uvm_pkg__03a__03auvm_visitor_ {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_is_match__2__expr;
    std::string __Vfunc_uvm_is_match__2__str;
    std::string __Vfunc_uvm_glob_to_re__3__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__3__glob;
    std::string __Vfunc_uvm_re_match__4__re;
    std::string __Vfunc_uvm_re_match__4__str;
    std::string __Vfunc_uvm_report_enabled__5__id;
    std::string __Vtask_uvm_report_warning__11__id;
    std::string __Vtask_uvm_report_warning__11__message;
    std::string __Vtask_uvm_report_warning__11__filename;
    std::string __Vtask_uvm_report_warning__11__context_name;
    std::string __Vfunc_uvm_report_enabled__18__id;
    std::string __Vtask_uvm_report_info__22__id;
    std::string __Vtask_uvm_report_info__22__message;
    std::string __Vtask_uvm_report_info__22__filename;
    std::string __Vtask_uvm_report_info__22__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT___root;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_component_name_check_visitor"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_begin_v(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_name_constraint(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_name_constraint__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_visit(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> node);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_component_name_check_visitor();
};


#endif  // guard
