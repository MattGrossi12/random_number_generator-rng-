// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg.h"
#include "Vtb_rng_uvm_pkg__03a__03auvm_default_factory__Vclpkg.h"
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_factory;
class Vtb_rng_uvm_pkg__03a__03auvm_factory_override;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;
struct Vtb_rng_m_inst_typename_alias_t__struct__0 {
    Vtb_rng_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    std::string __PVT__alias_type_name;
    std::string __PVT__full_inst_path;

    bool operator==(const Vtb_rng_m_inst_typename_alias_t__struct__0& rhs) const {
        return __PVT__orig == rhs.__PVT__orig
            && __PVT__alias_type_name == rhs.__PVT__alias_type_name
            && __PVT__full_inst_path == rhs.__PVT__full_inst_path;
    }
    bool operator!=(const Vtb_rng_m_inst_typename_alias_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_rng_m_inst_typename_alias_t__struct__0& rhs) const {
        return std::tie(__PVT__orig, __PVT__alias_type_name, __PVT__full_inst_path)
            <  std::tie(rhs.__PVT__orig, rhs.__PVT__alias_type_name, rhs.__PVT__full_inst_path);
    }
};
template <>
struct VlIsCustomStruct<Vtb_rng_m_inst_typename_alias_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_default_factory__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_debug_pass;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_default_factory__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

std::string VL_TO_STRING(const Vtb_rng_m_inst_typename_alias_t__struct__0& obj);
#include "Vtb_rng_uvm_pkg__03a__03auvm_factory__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_default_factory : public Vtb_rng_uvm_pkg__03a__03auvm_factory {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper>, CData/*0:0*/> __PVT__m_types;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_lookup_strs;
    VlQueue<Vtb_rng_m_inst_typename_alias_t__struct__0> __PVT__m_inst_aliases;
    std::string __Vtask_uvm_report_warning__6__id;
    std::string __Vtask_uvm_report_warning__6__message;
    std::string __Vtask_uvm_report_warning__6__filename;
    std::string __Vtask_uvm_report_warning__6__context_name;
    std::string __Vtask_uvm_report_warning__14__id;
    std::string __Vtask_uvm_report_warning__14__message;
    std::string __Vtask_uvm_report_warning__14__filename;
    std::string __Vtask_uvm_report_warning__14__context_name;
    std::string __Vtask_uvm_report_warning__24__id;
    std::string __Vtask_uvm_report_warning__24__message;
    std::string __Vtask_uvm_report_warning__24__filename;
    std::string __Vtask_uvm_report_warning__24__context_name;
    std::string __Vtask_uvm_report_warning__29__id;
    std::string __Vtask_uvm_report_warning__29__message;
    std::string __Vtask_uvm_report_warning__29__filename;
    std::string __Vtask_uvm_report_warning__29__context_name;
    std::string __Vtask_uvm_report_info__38__id;
    std::string __Vtask_uvm_report_info__38__message;
    std::string __Vtask_uvm_report_info__38__filename;
    std::string __Vtask_uvm_report_info__38__context_name;
    std::string __Vtask_uvm_report_info__43__id;
    std::string __Vtask_uvm_report_info__43__message;
    std::string __Vtask_uvm_report_info__43__filename;
    std::string __Vtask_uvm_report_info__43__context_name;
    std::string __Vtask_uvm_report_warning__52__id;
    std::string __Vtask_uvm_report_warning__52__message;
    std::string __Vtask_uvm_report_warning__52__filename;
    std::string __Vtask_uvm_report_warning__52__context_name;
    std::string __Vtask_uvm_report_info__57__id;
    std::string __Vtask_uvm_report_info__57__message;
    std::string __Vtask_uvm_report_info__57__filename;
    std::string __Vtask_uvm_report_info__57__context_name;
    std::string __Vtask_uvm_report_info__61__id;
    std::string __Vtask_uvm_report_info__61__message;
    std::string __Vtask_uvm_report_info__61__filename;
    std::string __Vtask_uvm_report_info__61__context_name;
    std::string __Vtask_uvm_report_info__66__id;
    std::string __Vtask_uvm_report_info__66__message;
    std::string __Vtask_uvm_report_info__66__filename;
    std::string __Vtask_uvm_report_info__66__context_name;
    std::string __Vtask_uvm_report_warning__84__id;
    std::string __Vtask_uvm_report_warning__84__message;
    std::string __Vtask_uvm_report_warning__84__filename;
    std::string __Vtask_uvm_report_warning__84__context_name;
    std::string __Vtask_uvm_report_warning__90__id;
    std::string __Vtask_uvm_report_warning__90__message;
    std::string __Vtask_uvm_report_warning__90__filename;
    std::string __Vtask_uvm_report_warning__90__context_name;
    std::string __Vtask_uvm_report_warning__96__id;
    std::string __Vtask_uvm_report_warning__96__message;
    std::string __Vtask_uvm_report_warning__96__filename;
    std::string __Vtask_uvm_report_warning__96__context_name;
    std::string __Vtask_uvm_report_warning__104__id;
    std::string __Vtask_uvm_report_warning__104__message;
    std::string __Vtask_uvm_report_warning__104__filename;
    std::string __Vtask_uvm_report_warning__104__context_name;
    std::string __Vtask_uvm_report_warning__112__id;
    std::string __Vtask_uvm_report_warning__112__message;
    std::string __Vtask_uvm_report_warning__112__filename;
    std::string __Vtask_uvm_report_warning__112__context_name;
    std::string __Vtask_uvm_report_error__123__id;
    std::string __Vtask_uvm_report_error__123__message;
    std::string __Vtask_uvm_report_error__123__filename;
    std::string __Vtask_uvm_report_error__123__context_name;
    std::string __Vtask_uvm_report_error__127__id;
    std::string __Vtask_uvm_report_error__127__message;
    std::string __Vtask_uvm_report_error__127__filename;
    std::string __Vtask_uvm_report_error__127__context_name;
    std::string __Vtask_uvm_report_error__141__id;
    std::string __Vtask_uvm_report_error__141__message;
    std::string __Vtask_uvm_report_error__141__filename;
    std::string __Vtask_uvm_report_error__141__context_name;
    std::string __Vfunc_uvm_is_match__146__expr;
    std::string __Vfunc_uvm_is_match__146__str;
    std::string __Vfunc_uvm_glob_to_re__147__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__147__glob;
    std::string __Vfunc_uvm_re_match__148__re;
    std::string __Vfunc_uvm_re_match__148__str;
    std::string __Vfunc_uvm_report_enabled__151__id;
    std::string __Vfunc_m_uvm_string_queue_join__155__Vfuncout;
    std::string __Vtask_uvm_report_info__156__id;
    std::string __Vtask_uvm_report_info__156__message;
    std::string __Vtask_uvm_report_info__156__filename;
    std::string __Vtask_uvm_report_info__156__context_name;
    std::string __Vtask_uvm_report_warning__162__id;
    std::string __Vtask_uvm_report_warning__162__message;
    std::string __Vtask_uvm_report_warning__162__filename;
    std::string __Vtask_uvm_report_warning__162__context_name;
    std::string __Vfunc_uvm_report_enabled__172__id;
    std::string __Vfunc_m_uvm_string_queue_join__176__Vfuncout;
    std::string __Vtask_uvm_report_info__177__id;
    std::string __Vtask_uvm_report_info__177__message;
    std::string __Vtask_uvm_report_info__177__filename;
    std::string __Vtask_uvm_report_info__177__context_name;
    std::string __Vfunc_uvm_is_match__181__expr;
    std::string __Vfunc_uvm_is_match__181__str;
    std::string __Vfunc_uvm_glob_to_re__182__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__182__glob;
    std::string __Vfunc_uvm_re_match__183__re;
    std::string __Vfunc_uvm_re_match__183__str;
    std::string __Vfunc_uvm_is_match__187__expr;
    std::string __Vfunc_uvm_is_match__187__str;
    std::string __Vfunc_uvm_glob_to_re__188__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__188__glob;
    std::string __Vfunc_uvm_re_match__189__re;
    std::string __Vfunc_uvm_re_match__189__str;
    VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__m_type_names;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_type_overrides;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_inst_overrides;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_override_info;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_default_factory"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_default_factory(*this); }
    void __VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string original_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string override_type_name, std::string full_inst_path, CData/*0:0*/ &check_inst_override_exists__Vfuncrtn);
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
    void __VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    void __VnoInFunc_m_debug_display(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> result, std::string full_inst_path);
    void __VnoInFunc_m_matches_inst_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ &m_matches_inst_override__Vfuncrtn);
    void __VnoInFunc_m_matches_type_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ match_original_type, CData/*0:0*/ resolve_null_type_by_inst, CData/*0:0*/ &m_matches_type_override__Vfuncrtn);
    void __VnoInFunc_m_matches_type_pair(Vtb_rng__Syms* __restrict vlSymsp, Vtb_rng_m_uvm_factory_type_pair_t__struct__0 match_type_pair, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, CData/*0:0*/ &m_matches_type_pair__Vfuncrtn);
    void __VnoInFunc_m_resolve_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name__Vfuncrtn);
    void __VnoInFunc_m_resolve_type_name_by_inst(Vtb_rng__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name_by_inst__Vfuncrtn);
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
    Vtb_rng_uvm_pkg__03a__03auvm_default_factory() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_default_factory();
};


#endif  // guard
