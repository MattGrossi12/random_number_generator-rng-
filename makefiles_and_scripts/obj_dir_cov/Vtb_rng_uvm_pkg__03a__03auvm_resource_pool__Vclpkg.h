// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg.h"
#include "Vtb_rng_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class Vtb_rng_std__03a__03aprocess;
class Vtb_rng_uvm_pkg__03a__03aget_t;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_base;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_pool;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_tree_printer;


class Vtb_rng__Syms;
struct Vtb_rng_rsrc_info_t__struct__0 {
    std::string __PVT__scope;
    IData/*31:0*/ __PVT__precedence;

    bool operator==(const Vtb_rng_rsrc_info_t__struct__0& rhs) const {
        return __PVT__scope == rhs.__PVT__scope
            && __PVT__precedence == rhs.__PVT__precedence;
    }
    bool operator!=(const Vtb_rng_rsrc_info_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_rng_rsrc_info_t__struct__0& rhs) const {
        return std::tie(__PVT__scope, __PVT__precedence)
            <  std::tie(rhs.__PVT__scope, rhs.__PVT__precedence);
    }
};
template <>
struct VlIsCustomStruct<Vtb_rng_rsrc_info_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base>, Vtb_rng_rsrc_info_t__struct__0> __PVT__ri_tab;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tree_printer> __PVT__print_resources__Vstatic__printer;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tree_printer> __PVT__dump__Vstatic__m_printer;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn);
    void __VnoInFunc_get_default_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_precedence__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_set_default_precedence(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ precedence);
    void __VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q);
};

std::string VL_TO_STRING(const Vtb_rng_rsrc_info_t__struct__0& obj);

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_resource_pool : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__1__id;
    std::string __Vtask_uvm_report_warning__1__message;
    std::string __Vtask_uvm_report_warning__1__filename;
    std::string __Vtask_uvm_report_warning__1__context_name;
    std::string __Vfunc_uvm_glob_to_re__8__glob;
    std::string __Vfunc_uvm_glob_to_re__14__glob;
    std::string __Vfunc_uvm_report_enabled__32__id;
    std::string __Vfunc_m_uvm_string_queue_join__36__Vfuncout;
    std::string __Vtask_uvm_report_info__37__id;
    std::string __Vtask_uvm_report_info__37__message;
    std::string __Vtask_uvm_report_info__37__filename;
    std::string __Vtask_uvm_report_info__37__context_name;
    std::string __Vfunc_uvm_is_match__49__expr;
    std::string __Vfunc_uvm_is_match__49__str;
    std::string __Vfunc_uvm_glob_to_re__50__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__50__glob;
    std::string __Vfunc_uvm_re_match__51__re;
    std::string __Vfunc_uvm_re_match__51__str;
    std::string __Vfunc_uvm_is_match__61__expr;
    std::string __Vfunc_uvm_is_match__61__str;
    std::string __Vfunc_uvm_glob_to_re__62__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__62__glob;
    std::string __Vfunc_uvm_re_match__63__re;
    std::string __Vfunc_uvm_re_match__63__str;
    std::string __Vfunc_uvm_is_match__72__expr;
    std::string __Vfunc_uvm_is_match__72__str;
    std::string __Vfunc_uvm_glob_to_re__73__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__73__glob;
    std::string __Vfunc_uvm_re_match__74__re;
    std::string __Vfunc_uvm_re_match__74__str;
    std::string __Vfunc_uvm_is_match__77__expr;
    std::string __Vfunc_uvm_is_match__77__str;
    std::string __Vfunc_uvm_glob_to_re__78__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__78__glob;
    std::string __Vfunc_uvm_re_match__79__re;
    std::string __Vfunc_uvm_re_match__79__str;
    std::string __Vfunc_uvm_is_match__84__expr;
    std::string __Vfunc_uvm_is_match__84__str;
    std::string __Vfunc_uvm_glob_to_re__85__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__85__glob;
    std::string __Vfunc_uvm_re_match__86__re;
    std::string __Vfunc_uvm_re_match__86__str;
    std::string __Vtask_uvm_report_error__91__id;
    std::string __Vtask_uvm_report_error__91__message;
    std::string __Vtask_uvm_report_error__91__filename;
    std::string __Vtask_uvm_report_error__91__context_name;
    std::string __Vtask_uvm_report_warning__98__id;
    std::string __Vtask_uvm_report_warning__98__message;
    std::string __Vtask_uvm_report_warning__98__filename;
    std::string __Vtask_uvm_report_warning__98__context_name;
    std::string __Vtask_uvm_report_error__104__id;
    std::string __Vtask_uvm_report_error__104__message;
    std::string __Vtask_uvm_report_error__104__filename;
    std::string __Vtask_uvm_report_error__104__context_name;
    std::string __Vtask_uvm_report_warning__109__id;
    std::string __Vtask_uvm_report_warning__109__message;
    std::string __Vtask_uvm_report_warning__109__filename;
    std::string __Vtask_uvm_report_warning__109__context_name;
    std::string __Vtask_uvm_report_error__114__id;
    std::string __Vtask_uvm_report_error__114__message;
    std::string __Vtask_uvm_report_error__114__filename;
    std::string __Vtask_uvm_report_error__114__context_name;
    std::string __Vtask_uvm_report_warning__121__id;
    std::string __Vtask_uvm_report_warning__121__message;
    std::string __Vtask_uvm_report_warning__121__filename;
    std::string __Vtask_uvm_report_warning__121__context_name;
    std::string __Vtask_uvm_report_warning__128__id;
    std::string __Vtask_uvm_report_warning__128__message;
    std::string __Vtask_uvm_report_warning__128__filename;
    std::string __Vtask_uvm_report_warning__128__context_name;
    std::string __Vtask_uvm_report_warning__132__id;
    std::string __Vtask_uvm_report_warning__132__message;
    std::string __Vtask_uvm_report_warning__132__filename;
    std::string __Vtask_uvm_report_warning__132__context_name;
    std::string __Vtask_uvm_report_warning__140__id;
    std::string __Vtask_uvm_report_warning__140__message;
    std::string __Vtask_uvm_report_warning__140__filename;
    std::string __Vtask_uvm_report_warning__140__context_name;
    std::string __Vtask_get_scope__153__scope;
    std::string __Vfunc_uvm_report_enabled__170__id;
    std::string __Vtask_uvm_report_info__175__id;
    std::string __Vtask_uvm_report_info__175__message;
    std::string __Vtask_uvm_report_info__175__filename;
    std::string __Vtask_uvm_report_info__175__context_name;
    std::string __Vfunc_uvm_report_enabled__185__id;
    std::string __Vtask_uvm_report_info__190__id;
    std::string __Vtask_uvm_report_info__190__message;
    std::string __Vtask_uvm_report_info__190__filename;
    std::string __Vtask_uvm_report_info__190__context_name;
    VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5>> __PVT__rtab;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base>, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5>> __PVT__ttab;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03aget_t>> __PVT__get_record;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_pool"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_resource_pool(*this); }
    virtual void __VnoInFunc_delete(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_dump(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ audit, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_dump_get_records(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn);
    virtual void __VnoInFunc_get_precedence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ &get_precedence__Vfuncrtn);
    virtual void __VnoInFunc_get_scope(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string &scope, CData/*0:0*/ &get_scope__Vfuncrtn);
    void __VnoInFunc_lookup_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_name__Vfuncrtn);
    void __VnoInFunc_lookup_regex(Vtb_rng__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_regex__Vfuncrtn);
    void __VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_regex_names__Vfuncrtn);
    void __VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_scope__Vfuncrtn);
    void __VnoInFunc_lookup_type(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &lookup_type__Vfuncrtn);
    void __VnoInFunc_m_print_resources(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq, CData/*0:0*/ audit);
    void __VnoInFunc_print_resources(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> rq, CData/*0:0*/ audit);
    void __VnoInFunc_push_get_record(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_name_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_set_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    virtual void __VnoInFunc_set_precedence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ p);
    void __VnoInFunc_set_priority(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz5> &q, IData/*31:0*/ &pri);
    void __VnoInFunc_set_priority_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_scope(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_set_type_override(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_spell_check(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_resource_pool() = default;
    void init(Vtb_rng__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_rng_uvm_pkg__03a__03auvm_resource_pool() {}
};


#endif  // guard
