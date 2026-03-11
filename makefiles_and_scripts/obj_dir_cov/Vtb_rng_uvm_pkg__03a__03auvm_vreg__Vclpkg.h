// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_std__03a__03asemaphore;
class Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi106;
class Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi107;
class Vtb_rng_uvm_pkg__03a__03auvm_comparer;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_mem;
class Vtb_rng_uvm_pkg__03a__03auvm_mem_mam;
class Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_policy;
class Vtb_rng_uvm_pkg__03a__03auvm_mem_region;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_packer;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_block;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg_cbs;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg_field;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_vreg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_cbs;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_vreg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_vreg : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    CData/*0:0*/ __PVT__is_static;
    CData/*0:0*/ __PVT__read_in_progress;
    CData/*0:0*/ __PVT__write_in_progress;
    IData/*31:0*/ __PVT__n_bits;
    IData/*31:0*/ __PVT__n_used_bits;
    IData/*31:0*/ __PVT__incr;
    IData/*31:0*/ __PVT__lineno;
    QData/*63:0*/ __PVT__offset;
    QData/*63:0*/ __PVT__size;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_error__6__id;
    std::string __Vtask_uvm_report_error__6__message;
    std::string __Vtask_uvm_report_error__6__filename;
    std::string __Vtask_uvm_report_error__6__context_name;
    std::string __Vfunc_uvm_report_enabled__10__id;
    std::string __Vtask_uvm_report_error__15__id;
    std::string __Vtask_uvm_report_error__15__message;
    std::string __Vtask_uvm_report_error__15__filename;
    std::string __Vtask_uvm_report_error__15__context_name;
    std::string __Vfunc_uvm_report_enabled__22__id;
    std::string __Vtask_uvm_report_error__26__id;
    std::string __Vtask_uvm_report_error__26__message;
    std::string __Vtask_uvm_report_error__26__filename;
    std::string __Vtask_uvm_report_error__26__context_name;
    std::string __Vfunc_uvm_report_enabled__30__id;
    std::string __Vfunc_uvm_report_enabled__38__id;
    std::string __Vtask_uvm_report_error__43__id;
    std::string __Vtask_uvm_report_error__43__message;
    std::string __Vtask_uvm_report_error__43__filename;
    std::string __Vtask_uvm_report_error__43__context_name;
    std::string __Vfunc_uvm_report_enabled__49__id;
    std::string __Vtask_uvm_report_error__56__id;
    std::string __Vtask_uvm_report_error__56__message;
    std::string __Vtask_uvm_report_error__56__filename;
    std::string __Vtask_uvm_report_error__56__context_name;
    std::string __Vfunc_uvm_report_enabled__62__id;
    std::string __Vtask_uvm_report_error__69__id;
    std::string __Vtask_uvm_report_error__69__message;
    std::string __Vtask_uvm_report_error__69__filename;
    std::string __Vtask_uvm_report_error__69__context_name;
    std::string __Vfunc_uvm_report_enabled__82__id;
    std::string __Vtask_uvm_report_error__87__id;
    std::string __Vtask_uvm_report_error__87__message;
    std::string __Vtask_uvm_report_error__87__filename;
    std::string __Vtask_uvm_report_error__87__context_name;
    std::string __Vfunc_uvm_report_enabled__91__id;
    std::string __Vtask_uvm_report_error__96__id;
    std::string __Vtask_uvm_report_error__96__message;
    std::string __Vtask_uvm_report_error__96__filename;
    std::string __Vtask_uvm_report_error__96__context_name;
    std::string __Vfunc_uvm_report_enabled__100__id;
    std::string __Vtask_uvm_report_error__105__id;
    std::string __Vtask_uvm_report_error__105__message;
    std::string __Vtask_uvm_report_error__105__filename;
    std::string __Vtask_uvm_report_error__105__context_name;
    std::string __Vfunc_uvm_report_enabled__110__id;
    std::string __Vtask_uvm_report_error__116__id;
    std::string __Vtask_uvm_report_error__116__message;
    std::string __Vtask_uvm_report_error__116__filename;
    std::string __Vtask_uvm_report_error__116__context_name;
    std::string __Vfunc_uvm_report_enabled__122__id;
    std::string __Vtask_uvm_report_error__128__id;
    std::string __Vtask_uvm_report_error__128__message;
    std::string __Vtask_uvm_report_error__128__filename;
    std::string __Vtask_uvm_report_error__128__context_name;
    std::string __Vfunc_uvm_report_enabled__133__id;
    std::string __Vtask_uvm_report_error__139__id;
    std::string __Vtask_uvm_report_error__139__message;
    std::string __Vtask_uvm_report_error__139__filename;
    std::string __Vtask_uvm_report_error__139__context_name;
    std::string __Vfunc_uvm_report_enabled__145__id;
    std::string __Vtask_uvm_report_error__150__id;
    std::string __Vtask_uvm_report_error__150__message;
    std::string __Vtask_uvm_report_error__150__filename;
    std::string __Vtask_uvm_report_error__150__context_name;
    std::string __Vfunc_uvm_report_enabled__154__id;
    std::string __Vtask_uvm_report_info__161__id;
    std::string __Vtask_uvm_report_info__161__message;
    std::string __Vtask_uvm_report_info__161__filename;
    std::string __Vtask_uvm_report_info__161__context_name;
    std::string __Vfunc_uvm_report_enabled__167__id;
    std::string __Vtask_uvm_report_error__172__id;
    std::string __Vtask_uvm_report_error__172__message;
    std::string __Vtask_uvm_report_error__172__filename;
    std::string __Vtask_uvm_report_error__172__context_name;
    std::string __Vfunc_uvm_report_enabled__176__id;
    std::string __Vtask_uvm_report_error__181__id;
    std::string __Vtask_uvm_report_error__181__message;
    std::string __Vtask_uvm_report_error__181__filename;
    std::string __Vtask_uvm_report_error__181__context_name;
    std::string __Vfunc_uvm_report_enabled__185__id;
    std::string __Vtask_uvm_report_error__190__id;
    std::string __Vtask_uvm_report_error__190__message;
    std::string __Vtask_uvm_report_error__190__filename;
    std::string __Vtask_uvm_report_error__190__context_name;
    std::string __Vfunc_uvm_report_enabled__196__id;
    std::string __Vtask_uvm_report_error__202__id;
    std::string __Vtask_uvm_report_error__202__message;
    std::string __Vtask_uvm_report_error__202__filename;
    std::string __Vtask_uvm_report_error__202__context_name;
    std::string __Vfunc_uvm_report_enabled__208__id;
    std::string __Vtask_uvm_report_error__214__id;
    std::string __Vtask_uvm_report_error__214__message;
    std::string __Vtask_uvm_report_error__214__filename;
    std::string __Vtask_uvm_report_error__214__context_name;
    std::string __Vfunc_uvm_report_enabled__220__id;
    std::string __Vtask_uvm_report_error__225__id;
    std::string __Vtask_uvm_report_error__225__message;
    std::string __Vtask_uvm_report_error__225__filename;
    std::string __Vtask_uvm_report_error__225__context_name;
    std::string __Vfunc_uvm_report_enabled__229__id;
    std::string __Vtask_uvm_report_info__237__id;
    std::string __Vtask_uvm_report_info__237__message;
    std::string __Vtask_uvm_report_info__237__filename;
    std::string __Vtask_uvm_report_info__237__context_name;
    std::string __Vfunc_uvm_report_enabled__245__id;
    std::string __Vtask_uvm_report_error__250__id;
    std::string __Vtask_uvm_report_error__250__message;
    std::string __Vtask_uvm_report_error__250__filename;
    std::string __Vtask_uvm_report_error__250__context_name;
    std::string __Vfunc_uvm_report_enabled__257__id;
    std::string __Vtask_uvm_report_error__262__id;
    std::string __Vtask_uvm_report_error__262__message;
    std::string __Vtask_uvm_report_error__262__filename;
    std::string __Vtask_uvm_report_error__262__context_name;
    std::string __Vfunc_uvm_report_enabled__266__id;
    std::string __Vtask_uvm_report_error__271__id;
    std::string __Vtask_uvm_report_error__271__message;
    std::string __Vtask_uvm_report_error__271__filename;
    std::string __Vtask_uvm_report_error__271__context_name;
    std::string __Vfunc_uvm_report_enabled__277__id;
    std::string __Vtask_uvm_report_error__282__id;
    std::string __Vtask_uvm_report_error__282__message;
    std::string __Vtask_uvm_report_error__282__filename;
    std::string __Vtask_uvm_report_error__282__context_name;
    std::string __Vfunc_uvm_report_enabled__286__id;
    std::string __Vtask_uvm_report_error__291__id;
    std::string __Vtask_uvm_report_error__291__message;
    std::string __Vtask_uvm_report_error__291__filename;
    std::string __Vtask_uvm_report_error__291__context_name;
    std::string __Vfunc_uvm_report_enabled__297__id;
    std::string __Vtask_uvm_report_error__302__id;
    std::string __Vtask_uvm_report_error__302__message;
    std::string __Vtask_uvm_report_error__302__filename;
    std::string __Vtask_uvm_report_error__302__context_name;
    std::string __Vfunc_uvm_report_enabled__306__id;
    std::string __Vtask_uvm_report_error__311__id;
    std::string __Vtask_uvm_report_error__311__message;
    std::string __Vtask_uvm_report_error__311__filename;
    std::string __Vtask_uvm_report_error__311__context_name;
    std::string __Vfunc_uvm_report_enabled__316__id;
    std::string __Vtask_uvm_report_error__321__id;
    std::string __Vtask_uvm_report_error__321__message;
    std::string __Vtask_uvm_report_error__321__filename;
    std::string __Vtask_uvm_report_error__321__context_name;
    std::string __Vfunc_uvm_report_enabled__326__id;
    std::string __Vtask_uvm_report_error__331__id;
    std::string __Vtask_uvm_report_error__331__message;
    std::string __Vtask_uvm_report_error__331__filename;
    std::string __Vtask_uvm_report_error__331__context_name;
    std::string __Vfunc_uvm_report_enabled__336__id;
    std::string __Vtask_uvm_report_error__341__id;
    std::string __Vtask_uvm_report_error__341__message;
    std::string __Vtask_uvm_report_error__341__filename;
    std::string __Vtask_uvm_report_error__341__context_name;
    std::string __Vfunc_uvm_report_enabled__346__id;
    std::string __Vtask_uvm_report_error__351__id;
    std::string __Vtask_uvm_report_error__351__message;
    std::string __Vtask_uvm_report_error__351__filename;
    std::string __Vtask_uvm_report_error__351__context_name;
    std::string __Vfunc_uvm_report_enabled__357__id;
    std::string __Vtask_uvm_report_warning__362__id;
    std::string __Vtask_uvm_report_warning__362__message;
    std::string __Vtask_uvm_report_warning__362__filename;
    std::string __Vtask_uvm_report_warning__362__context_name;
    std::string __Vfunc_uvm_report_enabled__367__id;
    std::string __Vtask_uvm_report_error__372__id;
    std::string __Vtask_uvm_report_error__372__message;
    std::string __Vtask_uvm_report_error__372__filename;
    std::string __Vtask_uvm_report_error__372__context_name;
    std::string __Vfunc_uvm_report_enabled__403__id;
    std::string __Vtask_uvm_report_info__408__id;
    std::string __Vtask_uvm_report_info__408__message;
    std::string __Vtask_uvm_report_info__408__filename;
    std::string __Vtask_uvm_report_info__408__context_name;
    std::string __Vfunc_uvm_report_enabled__413__id;
    std::string __Vtask_uvm_report_error__418__id;
    std::string __Vtask_uvm_report_error__418__message;
    std::string __Vtask_uvm_report_error__418__filename;
    std::string __Vtask_uvm_report_error__418__context_name;
    std::string __Vfunc_uvm_report_enabled__446__id;
    std::string __Vtask_uvm_report_info__451__id;
    std::string __Vtask_uvm_report_info__451__message;
    std::string __Vtask_uvm_report_info__451__filename;
    std::string __Vtask_uvm_report_info__451__context_name;
    std::string __Vfunc_uvm_report_enabled__455__id;
    std::string __Vtask_uvm_report_error__460__id;
    std::string __Vtask_uvm_report_error__460__message;
    std::string __Vtask_uvm_report_error__460__filename;
    std::string __Vtask_uvm_report_error__460__context_name;
    std::string __Vfunc_uvm_report_enabled__468__id;
    std::string __Vtask_uvm_report_info__473__id;
    std::string __Vtask_uvm_report_info__473__message;
    std::string __Vtask_uvm_report_info__473__filename;
    std::string __Vtask_uvm_report_info__473__context_name;
    std::string __Vfunc_uvm_report_enabled__477__id;
    std::string __Vtask_uvm_report_error__482__id;
    std::string __Vtask_uvm_report_error__482__message;
    std::string __Vtask_uvm_report_error__482__filename;
    std::string __Vtask_uvm_report_error__482__context_name;
    std::string __Vfunc_uvm_report_enabled__489__id;
    std::string __Vtask_uvm_report_info__494__id;
    std::string __Vtask_uvm_report_info__494__message;
    std::string __Vtask_uvm_report_info__494__filename;
    std::string __Vtask_uvm_report_info__494__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> __PVT__fields;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> __PVT__mem;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> __PVT__region;
    VlClassRef<Vtb_rng_std__03a__03asemaphore> __PVT__atomic;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_vreg"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_vreg(*this); }
    VlCoroutine __VnoInFunc_XatomicX(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    void __VnoInFunc_Xlock_modelX(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_field(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> field);
    virtual void __VnoInFunc_allocate(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_incr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_memory(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_n_memlocs(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn);
    virtual void __VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_region(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    virtual void __VnoInFunc_get_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_implement(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_release_region(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_vreg() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_vreg();
};


#endif  // guard
