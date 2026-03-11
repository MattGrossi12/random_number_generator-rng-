// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG_H_
#define VERILATED_VTB_RNG_UVM_PKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_default_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_seed_map;


class Vtb_rng__Syms;
struct Vtb_rng_m_uvm_factory_type_pair_t__struct__0 {
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __PVT__m_type;
    std::string __PVT__m_type_name;

    bool operator==(const Vtb_rng_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        return __PVT__m_type == rhs.__PVT__m_type
            && __PVT__m_type_name == rhs.__PVT__m_type_name;
    }
    bool operator!=(const Vtb_rng_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_rng_m_uvm_factory_type_pair_t__struct__0& rhs) const {
        return std::tie(__PVT__m_type, __PVT__m_type_name)
            <  std::tie(rhs.__PVT__m_type, rhs.__PVT__m_type_name);
    }
};
template <>
struct VlIsCustomStruct<Vtb_rng_m_uvm_factory_type_pair_t__struct__0> : public std::true_type {};
struct Vtb_rng_uvm_hdl_path_slice__struct__0 {
    std::string __PVT__path;
    IData/*31:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__size;

    bool operator==(const Vtb_rng_uvm_hdl_path_slice__struct__0& rhs) const {
        return __PVT__path == rhs.__PVT__path
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__size == rhs.__PVT__size;
    }
    bool operator!=(const Vtb_rng_uvm_hdl_path_slice__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_rng_uvm_hdl_path_slice__struct__0& rhs) const {
        return std::tie(__PVT__path, __PVT__offset, __PVT__size)
            <  std::tie(rhs.__PVT__path, rhs.__PVT__offset, rhs.__PVT__size);
    }
};
template <>
struct VlIsCustomStruct<Vtb_rng_uvm_hdl_path_slice__struct__0> : public std::true_type {};
struct Vtb_rng_uvm_reg_bus_op__struct__0 {
    IData/*31:0*/ __PVT__kind;
    QData/*63:0*/ __PVT__addr;
    QData/*63:0*/ __PVT__data;
    IData/*31:0*/ __PVT__n_bits;
    CData/*7:0*/ __PVT__byte_en;
    IData/*31:0*/ __PVT__status;

    bool operator==(const Vtb_rng_uvm_reg_bus_op__struct__0& rhs) const {
        return __PVT__kind == rhs.__PVT__kind
            && __PVT__addr == rhs.__PVT__addr
            && __PVT__data == rhs.__PVT__data
            && __PVT__n_bits == rhs.__PVT__n_bits
            && __PVT__byte_en == rhs.__PVT__byte_en
            && __PVT__status == rhs.__PVT__status;
    }
    bool operator!=(const Vtb_rng_uvm_reg_bus_op__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vtb_rng_uvm_reg_bus_op__struct__0& rhs) const {
        return std::tie(__PVT__kind, __PVT__addr, __PVT__data, __PVT__n_bits, __PVT__byte_en, __PVT__status)
            <  std::tie(rhs.__PVT__kind, rhs.__PVT__addr, rhs.__PVT__data, rhs.__PVT__n_bits, rhs.__PVT__byte_en, rhs.__PVT__status);
    }
};
template <>
struct VlIsCustomStruct<Vtb_rng_uvm_reg_bus_op__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__uvm_instance_scope__Vstatic__c;
    CData/*0:0*/ __PVT__uvm_oneway_hash__Vstatic__msb;
    CData/*7:0*/ __PVT__uvm_oneway_hash__Vstatic__current_byte;
    CData/*7:0*/ __PVT__uvm_leaf_scope__Vstatic__bracket_match;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__e;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__es;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__s;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__ss;
    IData/*31:0*/ __PVT__m_uvm_core_state;
    IData/*31:0*/ __PVT__uvm_global_random_seed;
    IData/*31:0*/ __PVT__uvm_instance_scope__Vstatic__pos;
    IData/*31:0*/ __PVT__uvm_oneway_hash__Vstatic__crc1;
    IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__pos;
    IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__bmatches;
    IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__nba;
    IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    IData/*31:0*/ __PVT__UVM_UNBOUNDED_CONNECTIONS;
    std::string __PVT__uvm_is_match__Vstatic__s;
    std::string __PVT__s_connection_error_id;
    std::string __PVT__s_connection_warning_id;
    std::string __Vtask_uvm_report__0__id;
    std::string __Vtask_uvm_report__0__message;
    std::string __Vtask_uvm_report__0__filename;
    std::string __Vtask_uvm_report__0__context_name;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__uvm_deferred_init;
    VlAssocArray<std::string, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_seed_map>> __PVT__uvm_random_seed_table_lookup;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_seed_map> __PVT__uvm_create_random_seed__Vstatic__seed_map;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT__run_test__Vstatic__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __PVT__run_test__Vstatic__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_enabled__Vstatic__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_enabled__Vstatic__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT__uvm_report__Vstatic__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report__Vstatic__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_info__Vstatic__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_info__Vstatic__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_warning__Vstatic__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_warning__Vstatic__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_error__Vstatic__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_error__Vstatic__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_fatal__Vstatic__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_fatal__Vstatic__cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_default_coreservice_t> __PVT__uvm_init__Vstatic__dcs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_init__Vstatic__unnamedblk9__DOT__actual;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> __PVT__uvm_init__Vstatic__unnamedblk11__DOT__top;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> __PVT__end_of_elaboration_ph;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg();
    ~Vtb_rng_uvm_pkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
};

std::string VL_TO_STRING(const Vtb_rng_m_uvm_factory_type_pair_t__struct__0& obj);
std::string VL_TO_STRING(const Vtb_rng_uvm_hdl_path_slice__struct__0& obj);
std::string VL_TO_STRING(const Vtb_rng_uvm_reg_bus_op__struct__0& obj);

#endif  // guard
