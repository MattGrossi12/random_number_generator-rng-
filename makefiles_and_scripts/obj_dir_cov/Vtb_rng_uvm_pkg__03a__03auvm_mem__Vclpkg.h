// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg.h"
class Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi104;
class Vtb_rng_uvm_pkg__03a__03auvm_comparer;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vtb_rng_uvm_pkg__03a__03auvm_mem;
class Vtb_rng_uvm_pkg__03a__03auvm_mem_mam;
class Vtb_rng_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz213;
class Vtb_rng_uvm_pkg__03a__03auvm_packer;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_block;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_item;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg_field;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_mem__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_mem__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_mem__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_mem__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_max_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_mem : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_locked;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_is_powered_down;
    IData/*31:0*/ __PVT__m_n_bits;
    IData/*31:0*/ __PVT__m_has_cover;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_lineno;
    QData/*63:0*/ __PVT__m_size;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__m_maps;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>, CData/*0:0*/> __PVT__m_vregs;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__2__id;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    std::string __Vtask_uvm_report_error__7__filename;
    std::string __Vtask_uvm_report_error__7__context_name;
    std::string __Vfunc_uvm_report_enabled__12__id;
    std::string __Vfunc_uvm_report_enabled__17__id;
    std::string __Vtask_uvm_report_error__22__id;
    std::string __Vtask_uvm_report_error__22__message;
    std::string __Vtask_uvm_report_error__22__filename;
    std::string __Vtask_uvm_report_error__22__context_name;
    std::string __Vfunc_uvm_report_enabled__31__id;
    std::string __Vtask_uvm_report_error__36__id;
    std::string __Vtask_uvm_report_error__36__message;
    std::string __Vtask_uvm_report_error__36__filename;
    std::string __Vtask_uvm_report_error__36__context_name;
    std::string __Vfunc_uvm_report_enabled__50__id;
    std::string __Vtask_uvm_report_warning__56__id;
    std::string __Vtask_uvm_report_warning__56__message;
    std::string __Vtask_uvm_report_warning__56__filename;
    std::string __Vtask_uvm_report_warning__56__context_name;
    std::string __Vfunc_uvm_report_enabled__60__id;
    std::string __Vtask_uvm_report_warning__65__id;
    std::string __Vtask_uvm_report_warning__65__message;
    std::string __Vtask_uvm_report_warning__65__filename;
    std::string __Vtask_uvm_report_warning__65__context_name;
    std::string __Vfunc_uvm_report_enabled__75__id;
    std::string __Vtask_uvm_report_error__81__id;
    std::string __Vtask_uvm_report_error__81__message;
    std::string __Vtask_uvm_report_error__81__filename;
    std::string __Vtask_uvm_report_error__81__context_name;
    std::string __Vfunc_uvm_report_enabled__85__id;
    std::string __Vtask_uvm_report_error__90__id;
    std::string __Vtask_uvm_report_error__90__message;
    std::string __Vtask_uvm_report_error__90__filename;
    std::string __Vtask_uvm_report_error__90__context_name;
    std::string __Vfunc_uvm_report_enabled__94__id;
    std::string __Vtask_uvm_report_error__100__id;
    std::string __Vtask_uvm_report_error__100__message;
    std::string __Vtask_uvm_report_error__100__filename;
    std::string __Vtask_uvm_report_error__100__context_name;
    std::string __Vfunc_uvm_report_enabled__104__id;
    std::string __Vtask_uvm_report_error__109__id;
    std::string __Vtask_uvm_report_error__109__message;
    std::string __Vtask_uvm_report_error__109__filename;
    std::string __Vtask_uvm_report_error__109__context_name;
    std::string __Vfunc_uvm_report_enabled__113__id;
    std::string __Vtask_uvm_report_error__119__id;
    std::string __Vtask_uvm_report_error__119__message;
    std::string __Vtask_uvm_report_error__119__filename;
    std::string __Vtask_uvm_report_error__119__context_name;
    std::string __Vfunc_uvm_report_enabled__127__id;
    std::string __Vtask_uvm_report_warning__134__id;
    std::string __Vtask_uvm_report_warning__134__message;
    std::string __Vtask_uvm_report_warning__134__filename;
    std::string __Vtask_uvm_report_warning__134__context_name;
    std::string __Vfunc_uvm_report_enabled__141__id;
    std::string __Vtask_uvm_report_warning__146__id;
    std::string __Vtask_uvm_report_warning__146__message;
    std::string __Vtask_uvm_report_warning__146__filename;
    std::string __Vtask_uvm_report_warning__146__context_name;
    std::string __Vfunc_uvm_report_enabled__151__id;
    std::string __Vtask_uvm_report_warning__156__id;
    std::string __Vtask_uvm_report_warning__156__message;
    std::string __Vtask_uvm_report_warning__156__filename;
    std::string __Vtask_uvm_report_warning__156__context_name;
    std::string __Vfunc_uvm_report_enabled__160__id;
    std::string __Vtask_uvm_report_error__164__id;
    std::string __Vtask_uvm_report_error__164__message;
    std::string __Vtask_uvm_report_error__164__filename;
    std::string __Vtask_uvm_report_error__164__context_name;
    std::string __Vfunc_uvm_report_enabled__170__id;
    std::string __Vtask_uvm_report_warning__177__id;
    std::string __Vtask_uvm_report_warning__177__message;
    std::string __Vtask_uvm_report_warning__177__filename;
    std::string __Vtask_uvm_report_warning__177__context_name;
    std::string __Vfunc_uvm_report_enabled__218__id;
    std::string __Vfunc_uvm_report_enabled__226__id;
    std::string __Vtask_uvm_report_info__231__id;
    std::string __Vtask_uvm_report_info__231__message;
    std::string __Vtask_uvm_report_info__231__filename;
    std::string __Vtask_uvm_report_info__231__context_name;
    std::string __Vfunc_uvm_report_enabled__255__id;
    std::string __Vfunc_uvm_report_enabled__263__id;
    std::string __Vtask_uvm_report_info__268__id;
    std::string __Vtask_uvm_report_info__268__message;
    std::string __Vtask_uvm_report_info__268__filename;
    std::string __Vtask_uvm_report_info__268__context_name;
    std::string __Vfunc_uvm_report_enabled__273__id;
    std::string __Vtask_uvm_report_error__278__id;
    std::string __Vtask_uvm_report_error__278__message;
    std::string __Vtask_uvm_report_error__278__filename;
    std::string __Vtask_uvm_report_error__278__context_name;
    std::string __Vfunc_uvm_report_enabled__285__id;
    std::string __Vtask_uvm_report_warning__290__id;
    std::string __Vtask_uvm_report_warning__290__message;
    std::string __Vtask_uvm_report_warning__290__filename;
    std::string __Vtask_uvm_report_warning__290__context_name;
    std::string __Vfunc_uvm_report_enabled__301__id;
    std::string __Vtask_uvm_report_error__307__id;
    std::string __Vtask_uvm_report_error__307__message;
    std::string __Vtask_uvm_report_error__307__filename;
    std::string __Vtask_uvm_report_error__307__context_name;
    std::string __Vfunc_uvm_report_enabled__312__id;
    std::string __Vtask_uvm_report_error__318__id;
    std::string __Vtask_uvm_report_error__318__message;
    std::string __Vtask_uvm_report_error__318__filename;
    std::string __Vtask_uvm_report_error__318__context_name;
    std::string __Vfunc_uvm_report_enabled__324__id;
    std::string __Vtask_uvm_report_error__330__id;
    std::string __Vtask_uvm_report_error__330__message;
    std::string __Vtask_uvm_report_error__330__filename;
    std::string __Vtask_uvm_report_error__330__context_name;
    std::string __Vfunc_uvm_report_enabled__334__id;
    std::string __Vtask_uvm_report_error__338__id;
    std::string __Vtask_uvm_report_error__338__message;
    std::string __Vtask_uvm_report_error__338__filename;
    std::string __Vtask_uvm_report_error__338__context_name;
    std::string __Vfunc_uvm_report_enabled__344__id;
    std::string __Vtask_uvm_report_error__349__id;
    std::string __Vtask_uvm_report_error__349__message;
    std::string __Vtask_uvm_report_error__349__filename;
    std::string __Vtask_uvm_report_error__349__context_name;
    std::string __Vfunc_uvm_report_enabled__357__id;
    std::string __Vtask_uvm_report_info__362__id;
    std::string __Vtask_uvm_report_info__362__message;
    std::string __Vtask_uvm_report_info__362__filename;
    std::string __Vtask_uvm_report_info__362__context_name;
    std::string __Vfunc_uvm_report_enabled__368__id;
    std::string __Vtask_uvm_report_error__373__id;
    std::string __Vtask_uvm_report_error__373__message;
    std::string __Vtask_uvm_report_error__373__filename;
    std::string __Vtask_uvm_report_error__373__context_name;
    std::string __Vfunc_uvm_report_enabled__381__id;
    std::string __Vtask_uvm_report_info__386__id;
    std::string __Vtask_uvm_report_info__386__message;
    std::string __Vtask_uvm_report_info__386__filename;
    std::string __Vtask_uvm_report_info__386__context_name;
    std::string __Vfunc_uvm_report_enabled__391__id;
    std::string __Vtask_uvm_report_error__397__id;
    std::string __Vtask_uvm_report_error__397__message;
    std::string __Vtask_uvm_report_error__397__filename;
    std::string __Vtask_uvm_report_error__397__context_name;
    std::string __Vfunc_uvm_report_enabled__403__id;
    std::string __Vtask_uvm_report_error__409__id;
    std::string __Vtask_uvm_report_error__409__message;
    std::string __Vtask_uvm_report_error__409__filename;
    std::string __Vtask_uvm_report_error__409__context_name;
    std::string __Vfunc_uvm_report_enabled__418__id;
    std::string __Vtask_uvm_report_info__422__id;
    std::string __Vtask_uvm_report_info__422__message;
    std::string __Vtask_uvm_report_info__422__filename;
    std::string __Vtask_uvm_report_info__422__context_name;
    std::string __Vfunc_uvm_report_enabled__430__id;
    std::string __Vfunc_uvm_hdl_concat2string__435__image;
    std::string __Vfunc_uvm_hdl_concat2string__436__image;
    std::string __Vtask_uvm_report_error__437__id;
    std::string __Vtask_uvm_report_error__437__message;
    std::string __Vtask_uvm_report_error__437__filename;
    std::string __Vtask_uvm_report_error__437__context_name;
    std::string __Vfunc_uvm_report_enabled__443__id;
    std::string __Vtask_uvm_report_info__447__id;
    std::string __Vtask_uvm_report_info__447__message;
    std::string __Vtask_uvm_report_info__447__filename;
    std::string __Vtask_uvm_report_info__447__context_name;
    std::string __Vfunc_uvm_report_enabled__458__id;
    std::string __Vtask_uvm_report_warning__462__id;
    std::string __Vtask_uvm_report_warning__462__message;
    std::string __Vtask_uvm_report_warning__462__filename;
    std::string __Vtask_uvm_report_warning__462__context_name;
    std::string __Vfunc_uvm_report_enabled__482__id;
    std::string __Vtask_uvm_report_error__486__id;
    std::string __Vtask_uvm_report_error__486__message;
    std::string __Vtask_uvm_report_error__486__filename;
    std::string __Vtask_uvm_report_error__486__context_name;
    std::string __Vfunc_uvm_report_enabled__497__id;
    std::string __Vtask_uvm_report_error__501__id;
    std::string __Vtask_uvm_report_error__501__message;
    std::string __Vtask_uvm_report_error__501__filename;
    std::string __Vtask_uvm_report_error__501__context_name;
    std::string __Vfunc_uvm_report_enabled__529__id;
    std::string __Vfunc_uvm_report_enabled__534__id;
    std::string __Vfunc_uvm_report_enabled__539__id;
    std::string __Vtask_uvm_report_warning__543__id;
    std::string __Vtask_uvm_report_warning__543__message;
    std::string __Vtask_uvm_report_warning__543__filename;
    std::string __Vtask_uvm_report_warning__543__context_name;
    std::string __Vfunc_uvm_report_enabled__547__id;
    std::string __Vtask_uvm_report_warning__551__id;
    std::string __Vtask_uvm_report_warning__551__message;
    std::string __Vtask_uvm_report_warning__551__filename;
    std::string __Vtask_uvm_report_warning__551__context_name;
    std::string __Vfunc_uvm_report_enabled__555__id;
    std::string __Vtask_uvm_report_warning__559__id;
    std::string __Vtask_uvm_report_warning__559__message;
    std::string __Vtask_uvm_report_warning__559__filename;
    std::string __Vtask_uvm_report_warning__559__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz213> __PVT__m_hdl_paths_pool;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem_mam> __PVT__mam;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_mem(*this); }
    void __VnoInFunc_Xadd_vregX(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xdelete_vregX(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xlock_modelX(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<Vtb_rng_uvm_hdl_path_slice__struct__0> slices, std::string kind);
    void __VnoInFunc_add_hdl_path_slice(Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind);
    void __VnoInFunc_add_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_build_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_burst_read(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_burst_write(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_clear_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    void __VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    void __VnoInFunc_get_frontdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind);
    void __VnoInFunc_get_hdl_path_kinds(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds);
    void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps);
    void __VnoInFunc_get_n_bits(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    void __VnoInFunc_get_size(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_vfield_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_virtual_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> &regs);
    virtual void __VnoInFunc_get_vreg_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_vreg_by_offset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_sample(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_backdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_mem() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_mem();
};


#endif  // guard
