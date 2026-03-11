// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCE_ITEM__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_SEQUENCE_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi7;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_report_handler;
class Vtb_rng_uvm_pkg__03a__03auvm_report_message;
class Vtb_rng_uvm_pkg__03a__03auvm_report_object;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base;
class Vtb_rng_uvm_pkg__03a__03auvm_transaction;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__issued1;
    CData/*0:0*/ __PVT__issued2;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_sequence_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi7> &get_type__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_transaction__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_sequence_item : public Vtb_rng_uvm_pkg__03a__03auvm_transaction {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_use_sequence_info;
    CData/*0:0*/ __PVT__print_sequence_info;
    IData/*31:0*/ __PVT__m_sequence_id;
    IData/*31:0*/ __PVT__m_depth;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __PVT__m_sequencer;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> __PVT__m_parent_sequence;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence_item"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_sequence_item(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    void __VnoInFunc_get_parent_sequence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn);
    void __VnoInFunc_get_root_sequence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> &get_root_sequence__Vfuncrtn);
    void __VnoInFunc_get_root_sequence_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_root_sequence_name__Vfuncrtn);
    void __VnoInFunc_get_sequence_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_id__Vfuncrtn);
    void __VnoInFunc_get_sequence_path(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_sequence_path__Vfuncrtn);
    void __VnoInFunc_get_sequencer(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn);
    void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_get_use_sequence_info(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_sequence_info__Vfuncrtn);
    virtual void __VnoInFunc_is_item(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn);
    virtual void __VnoInFunc_m_set_p_sequencer(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_depth(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ value);
    void __VnoInFunc_set_id_info(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_item> item);
    void __VnoInFunc_set_item_context(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent_seq, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_set_parent_sequence(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent);
    void __VnoInFunc_set_sequence_id(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ id);
    virtual void __VnoInFunc_set_sequencer(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    void __VnoInFunc_set_use_sequence_info(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    virtual void __VnoInFunc_uvm_get_report_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn);
    virtual void __VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_message> report_message);
    virtual void __VnoInFunc_uvm_report(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    void __VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn);
    virtual void __VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
    virtual void __VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_sequence_item() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_sequence_item();
};


#endif  // guard
