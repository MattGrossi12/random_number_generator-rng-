// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REPORT_MESSAGE_ELEMENT_BASE__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REPORT_MESSAGE_ELEMENT_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_recorder;
class Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT___action;
    std::string __PVT___name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_report_message_element_base"; }
    void __VnoInFunc_clone(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base> &clone__Vfuncrtn);
    void __VnoInFunc_copy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base> rhs);
    virtual void __VnoInFunc_do_clone(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_action(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn);
    virtual void __VnoInFunc_get_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    void __VnoInFunc_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_record(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_set_action(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ action);
    virtual void __VnoInFunc_set_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_report_message_element_base();
};


#endif  // guard
