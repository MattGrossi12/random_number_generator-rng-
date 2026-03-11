// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_TEXT_RECORDER__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_TEXT_RECORDER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi178;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_recorder;
class Vtb_rng_uvm_pkg__03a__03auvm_text_recorder;
class Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database;
class Vtb_rng_uvm_pkg__03a__03auvm_text_tr_stream;
class Vtb_rng_uvm_pkg__03a__03auvm_tr_database;
class Vtb_rng_uvm_pkg__03a__03auvm_tr_stream;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_text_recorder__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_text_recorder__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_text_recorder__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_text_recorder__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi178> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_recorder__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_text_recorder : public Vtb_rng_uvm_pkg__03a__03auvm_recorder {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__filename_set;
    VlQueue<std::string> __PVT__m_object_names;
    std::string __PVT__filename;
    std::string __Vfunc_uvm_string_to_bits__30__str;
    std::string __Vfunc_uvm_bitstream_to_string__34__radix_str;
    std::string __Vfunc_uvm_integral_to_string__37__radix_str;
    std::string __Vfunc_uvm_bitstream_to_string__45__radix_str;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_text_tr_database> __PVT__m_text_db;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_text_recorder"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_text_recorder(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_begin_tr(Vtb_rng__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_check_handle_kind(Vtb_rng__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_create_stream(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn);
    virtual void __VnoInFunc_do_close(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ close_time);
    virtual void __VnoInFunc_do_free(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_open(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name);
    virtual void __VnoInFunc_do_record_field(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_int(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
    virtual void __VnoInFunc_do_record_field_real(Vtb_rng__Syms* __restrict vlSymsp, std::string name, double value);
    virtual void __VnoInFunc_do_record_generic(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name);
    virtual void __VnoInFunc_do_record_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_do_record_string(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value);
    virtual void __VnoInFunc_do_record_time(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value);
    virtual void __VnoInFunc_end_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time);
    virtual void __VnoInFunc_free_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ handle);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_link_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation);
    void __VnoInFunc_m_current_context(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string &m_current_context__Vfuncrtn);
    virtual void __VnoInFunc_m_set_attribute(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value);
    virtual void __VnoInFunc_open_file(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_attribute(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits);
    void __VnoInFunc_write_attribute(Vtb_rng__Syms* __restrict vlSymsp, std::string nm, VlWide<128>/*4095:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits);
    void __VnoInFunc_write_attribute_int(Vtb_rng__Syms* __restrict vlSymsp, std::string nm, QData/*63:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_text_recorder() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_text_recorder();
};


#endif  // guard
