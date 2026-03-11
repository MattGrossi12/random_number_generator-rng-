// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ2__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz2;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_base;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz2__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__3__id;
    std::string __Vtask_uvm_report_warning__7__id;
    std::string __Vtask_uvm_report_warning__7__message;
    std::string __Vtask_uvm_report_warning__7__filename;
    std::string __Vtask_uvm_report_warning__7__context_name;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vtask_uvm_report_warning__18__id;
    std::string __Vtask_uvm_report_warning__18__message;
    std::string __Vtask_uvm_report_warning__18__filename;
    std::string __Vtask_uvm_report_warning__18__context_name;
    std::string __Vfunc_uvm_report_enabled__27__id;
    std::string __Vtask_uvm_report_info__31__id;
    std::string __Vtask_uvm_report_info__31__message;
    std::string __Vtask_uvm_report_info__31__filename;
    std::string __Vtask_uvm_report_info__31__context_name;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz2__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz2__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_dump(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz2> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz2> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz2> rsrc);
    void __VnoInFunc_read_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string &val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string &val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz2> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, std::string val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz2 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db__Tz2"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz2(*this); }
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz2() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_resource_db__Tz2();
};


#endif  // guard
