// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_FACTORY__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_factory;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_factory__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_factory__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_factory__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_factory__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> &get__Vfuncrtn);
    void __VnoInFunc_set(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> f);
};


class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_factory : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory"; }
    virtual void __VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn);
    virtual void __VnoInFunc_debug_create_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn);
    virtual void __VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn);
    virtual void __VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn);
    virtual void __VnoInFunc_is_type_name_registered(Vtb_rng__Syms* __restrict vlSymsp, std::string type_name, CData/*0:0*/ &is_type_name_registered__Vfuncrtn);
    virtual void __VnoInFunc_is_type_registered(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> obj, CData/*0:0*/ &is_type_registered__Vfuncrtn);
    virtual void __VnoInFunc_print(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ all_types);
    virtual void __VnoInFunc_register(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> obj);
    virtual void __VnoInFunc_set_inst_alias(Vtb_rng__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type);
    virtual void __VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    virtual void __VnoInFunc_set_type_override_by_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_factory() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_factory();
};


#endif  // guard
