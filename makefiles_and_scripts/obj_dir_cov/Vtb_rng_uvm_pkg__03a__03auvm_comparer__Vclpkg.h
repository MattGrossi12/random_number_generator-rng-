// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg__03a__03auvm_comparer__Vclpkg.h"
class Vtb_rng_uvm_pkg__03a__03auvm_comparer;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_field_op;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi12;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_policy;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;
struct Vtb_rng_state_info_t__struct__0 {
    IData/*31:0*/ __PVT__state;
    CData/*0:0*/ __PVT__ret_val;

    bool operator==(const Vtb_rng_state_info_t__struct__0& rhs) const {
        return __PVT__state == rhs.__PVT__state
            && __PVT__ret_val == rhs.__PVT__ret_val;
    }
    bool operator!=(const Vtb_rng_state_info_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_rng_state_info_t__struct__0& rhs) const {
        return std::tie(__PVT__state, __PVT__ret_val)
            <  std::tie(rhs.__PVT__state, rhs.__PVT__ret_val);
    }
};
template <>
struct VlIsCustomStruct<Vtb_rng_state_info_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_comparer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_comparer__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_comparer__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_comparer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi12> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

std::string VL_TO_STRING(const Vtb_rng_state_info_t__struct__0& obj);
#include "Vtb_rng_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_comparer : public Vtb_rng_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT__sev;
    CData/*0:0*/ __PVT__check_type;
    IData/*27:0*/ __PVT__policy;
    IData/*31:0*/ __PVT__show_max;
    IData/*31:0*/ __PVT__verbosity;
    IData/*31:0*/ __PVT__result;
    IData/*31:0*/ __PVT__m_threshold;
    IData/*31:0*/ __PVT__depth;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>, VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>, VlAssocArray<IData/*27:0*/, Vtb_rng_state_info_t__struct__0>>> __PVT__m_recur_states;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>, VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>, CData/*0:0*/>> __PVT__compare_map;
    VlQueue<std::string> __PVT__m_object_names;
    std::string __PVT__miscompares;
    std::string __Vfunc_uvm_report_enabled__12__id;
    std::string __Vtask_uvm_report_warning__18__id;
    std::string __Vtask_uvm_report_warning__18__message;
    std::string __Vtask_uvm_report_warning__18__filename;
    std::string __Vtask_uvm_report_warning__18__context_name;
    std::string __Vtask_uvm_report__57__id;
    std::string __Vtask_uvm_report__57__message;
    std::string __Vtask_uvm_report__57__filename;
    std::string __Vtask_uvm_report__57__context_name;
    std::string __Vtask_uvm_report__69__id;
    std::string __Vtask_uvm_report__69__message;
    std::string __Vtask_uvm_report__69__filename;
    std::string __Vtask_uvm_report__69__context_name;
    std::string __Vtask_uvm_report__86__id;
    std::string __Vtask_uvm_report__86__message;
    std::string __Vtask_uvm_report__86__filename;
    std::string __Vtask_uvm_report__86__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_comparer"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_comparer(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_compare_field(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ lhs, VlWide<128>/*4095:0*/ rhs, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*0:0*/ &compare_field__Vfuncrtn);
    virtual void __VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ lhs, QData/*63:0*/ rhs, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*0:0*/ &compare_field_int__Vfuncrtn);
    virtual void __VnoInFunc_compare_field_real(Vtb_rng__Syms* __restrict vlSymsp, std::string name, double lhs, double rhs, CData/*0:0*/ &compare_field_real__Vfuncrtn);
    virtual void __VnoInFunc_compare_object(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, CData/*0:0*/ &compare_object__Vfuncrtn);
    virtual void __VnoInFunc_compare_string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string lhs, std::string rhs, CData/*0:0*/ &compare_string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_check_type(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_type__Vfuncrtn);
    virtual void __VnoInFunc_get_miscompares(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_miscompares__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_result(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_result__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    virtual void __VnoInFunc_get_show_max(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_show_max__Vfuncrtn);
    virtual void __VnoInFunc_get_threshold(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    void __VnoInFunc_m_current_context(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string &m_current_context__Vfuncrtn);
    virtual void __VnoInFunc_object_compared(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, IData/*27:0*/ recursion, CData/*0:0*/ &ret_val, IData/*31:0*/ &object_compared__Vfuncrtn);
    void __VnoInFunc_print_msg(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string msg);
    void __VnoInFunc_print_msg_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_check_type(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_recursion_policy(Vtb_rng__Syms* __restrict vlSymsp, IData/*27:0*/ policy);
    virtual void __VnoInFunc_set_result(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ result);
    virtual void __VnoInFunc_set_severity(Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    virtual void __VnoInFunc_set_show_max(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ show_max);
    virtual void __VnoInFunc_set_threshold(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ threshold);
    virtual void __VnoInFunc_set_verbosity(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_comparer() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_comparer();
};


#endif  // guard
