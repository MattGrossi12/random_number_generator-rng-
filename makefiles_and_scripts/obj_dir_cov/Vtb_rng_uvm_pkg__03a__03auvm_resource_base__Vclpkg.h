// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_RESOURCE_BASE__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_RESOURCE_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_base;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_resource_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_resource_base : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__modified;
    CData/*0:0*/ __PVT__read_only;
    VlAssocArray<std::string, Vtb_rng_access_t__struct__0> __PVT__access;
    std::string __Vfunc_uvm_report_enabled__13__id;
    std::string __Vfunc_m_uvm_string_queue_join__17__Vfuncout;
    std::string __Vtask_uvm_report_info__18__id;
    std::string __Vtask_uvm_report_info__18__message;
    std::string __Vtask_uvm_report_info__18__filename;
    std::string __Vtask_uvm_report_info__18__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_base"; }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn);
    void __VnoInFunc_init_access_record(Vtb_rng__Syms* __restrict vlSymsp, Vtb_rng_access_t__struct__0 &access_record);
    void __VnoInFunc_is_read_only(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read_only__Vfuncrtn);
    virtual void __VnoInFunc_m_value_as_string(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn);
    virtual void __VnoInFunc_m_value_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn);
    virtual void __VnoInFunc_print_accessors(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_read_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_record_write_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_read_only(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_read_write(Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wait_modified(Vtb_rng__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_resource_base() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_resource_base();
};


#endif  // guard
