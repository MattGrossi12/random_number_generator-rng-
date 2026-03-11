// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PORT_COMPONENT__TZ302__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PORT_COMPONENT__TZ302__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297;
class Vtb_rng_uvm_pkg__03a__03auvm_port_component_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz302__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz302__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz302__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz302__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_port_component_base__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz302 : public Vtb_rng_uvm_pkg__03a__03auvm_port_component_base {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297> __PVT__m_port;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_port_component__Tz302"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz302(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_connected_to(Vtb_rng__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_component_base>> &list);
    void __VnoInFunc_get_port(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297> &get_port__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz302() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_port_base__Tz297> port);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_port_component__Tz302();
};


#endif  // guard
