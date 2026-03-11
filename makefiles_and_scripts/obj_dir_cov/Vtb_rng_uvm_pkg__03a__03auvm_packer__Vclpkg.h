// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_factory;
class Vtb_rng_uvm_pkg__03a__03auvm_field_op;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi11;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_packer;
class Vtb_rng_uvm_pkg__03a__03auvm_policy;
class Vtb_rng_uvm_pkg__03a__03auvm_root;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__bitstream;
    VlQueue<CData/*0:0*/> __PVT__fabitstream;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_packer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi11> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_packer : public Vtb_rng_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__reverse_order;
    CData/*7:0*/ __PVT__byte_size;
    CData/*0:0*/ __PVT__nopack;
    IData/*31:0*/ __PVT__m_pack_iter;
    IData/*31:0*/ __PVT__m_unpack_iter;
    IData/*31:0*/ __PVT__word_size;
    VlWide<1024>/*32767:0*/ __PVT__m_bits;
    std::string __Vtask_uvm_report_error__3__id;
    std::string __Vtask_uvm_report_error__3__message;
    std::string __Vtask_uvm_report_error__3__filename;
    std::string __Vtask_uvm_report_error__3__context_name;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    std::string __Vtask_uvm_report_error__7__filename;
    std::string __Vtask_uvm_report_error__7__context_name;
    std::string __Vfunc_uvm_report_enabled__29__id;
    std::string __Vtask_uvm_report_error__33__id;
    std::string __Vtask_uvm_report_error__33__message;
    std::string __Vtask_uvm_report_error__33__filename;
    std::string __Vtask_uvm_report_error__33__context_name;
    std::string __Vfunc_uvm_report_enabled__37__id;
    std::string __Vtask_uvm_report_error__41__id;
    std::string __Vtask_uvm_report_error__41__message;
    std::string __Vtask_uvm_report_error__41__filename;
    std::string __Vtask_uvm_report_error__41__context_name;
    std::string __Vfunc_uvm_report_enabled__45__id;
    std::string __Vtask_uvm_report_error__49__id;
    std::string __Vtask_uvm_report_error__49__message;
    std::string __Vtask_uvm_report_error__49__filename;
    std::string __Vtask_uvm_report_error__49__context_name;
    std::string __Vfunc_uvm_report_enabled__54__id;
    std::string __Vtask_uvm_report_error__58__id;
    std::string __Vtask_uvm_report_error__58__message;
    std::string __Vtask_uvm_report_error__58__filename;
    std::string __Vtask_uvm_report_error__58__context_name;
    std::string __Vfunc_uvm_report_enabled__62__id;
    std::string __Vtask_uvm_report_error__66__id;
    std::string __Vtask_uvm_report_error__66__message;
    std::string __Vtask_uvm_report_error__66__filename;
    std::string __Vtask_uvm_report_error__66__context_name;
    std::string __Vfunc_uvm_report_enabled__94__id;
    std::string __Vtask_uvm_report_error__98__id;
    std::string __Vtask_uvm_report_error__98__message;
    std::string __Vtask_uvm_report_error__98__filename;
    std::string __Vtask_uvm_report_error__98__context_name;
    std::string __Vfunc_uvm_report_enabled__103__id;
    std::string __Vtask_uvm_report_error__107__id;
    std::string __Vtask_uvm_report_error__107__message;
    std::string __Vtask_uvm_report_error__107__filename;
    std::string __Vtask_uvm_report_error__107__context_name;
    std::string __Vfunc_uvm_report_enabled__112__id;
    std::string __Vtask_uvm_report_error__116__id;
    std::string __Vtask_uvm_report_error__116__message;
    std::string __Vtask_uvm_report_error__116__filename;
    std::string __Vtask_uvm_report_error__116__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> __PVT__m_factory;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object>> __PVT__m_object_references;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_packer"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_packer(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_enough_bits(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_packed_bits(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream);
    virtual void __VnoInFunc_get_packed_bytes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream);
    virtual void __VnoInFunc_get_packed_ints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream);
    virtual void __VnoInFunc_get_packed_longints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream);
    virtual void __VnoInFunc_get_packed_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_index_error(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz);
    virtual void __VnoInFunc_is_null(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn);
    virtual void __VnoInFunc_is_object_wrapper(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_object_wrapper__Vfuncrtn);
    virtual void __VnoInFunc_pack_bits(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_bytes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field(Vtb_rng__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field_int(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_ints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_object_with_meta(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_object_wrapper(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> value);
    virtual void __VnoInFunc_pack_real(Vtb_rng__Syms* __restrict vlSymsp, double value);
    virtual void __VnoInFunc_pack_string(Vtb_rng__Syms* __restrict vlSymsp, std::string value);
    virtual void __VnoInFunc_pack_time(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_packed_bits(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream);
    virtual void __VnoInFunc_set_packed_bytes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream);
    virtual void __VnoInFunc_set_packed_ints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream);
    virtual void __VnoInFunc_set_packed_longints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream);
    virtual void __VnoInFunc_unpack_bits(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_bytes(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_field(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn);
    virtual void __VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn);
    virtual void __VnoInFunc_unpack_ints(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size);
    virtual void __VnoInFunc_unpack_object(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_unpack_object_with_meta(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &value);
    virtual void __VnoInFunc_unpack_object_wrapper(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &unpack_object_wrapper__Vfuncrtn);
    virtual void __VnoInFunc_unpack_real(Vtb_rng__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn);
    virtual void __VnoInFunc_unpack_string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &unpack_string__Vfuncrtn);
    virtual void __VnoInFunc_unpack_time(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_packer() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_packer();
};


#endif  // guard
