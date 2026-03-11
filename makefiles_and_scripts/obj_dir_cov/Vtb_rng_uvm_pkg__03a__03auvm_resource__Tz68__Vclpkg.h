// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_RESOURCE__TZ68__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_RESOURCE__TZ68__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__Tz204;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5;
class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_base;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68> __PVT__my_type;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_highest_precedence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_get_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68 : public Vtb_rng_uvm_pkg__03a__03auvm_resource_base {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    std::string __Vtask_uvm_report_error__8__filename;
    std::string __Vtask_uvm_report_error__8__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> __PVT__val;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource__Tz68"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_value_as_string(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn);
    virtual void __VnoInFunc_m_value_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &read__Vfuncrtn);
    void __VnoInFunc_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> t, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz68();
};


#endif  // guard
