// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg.h"
class Vtb_rng_std__03a__03aprocess;
class Vtb_rng_std__03a__03asemaphore;
class Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi102;
class Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105;
class Vtb_rng_uvm_pkg__03a__03auvm_comparer;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz213;
class Vtb_rng_uvm_pkg__03a__03auvm_packer;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz212;
class Vtb_rng_uvm_pkg__03a__03auvm_reg;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_block;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_field;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_file;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_item;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_max_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_include_coverage(Vtb_rng__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ models, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_reg : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_locked;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_update_in_progress;
    CData/*0:0*/ __PVT__m_is_busy;
    CData/*0:0*/ __PVT__m_is_locked_by_field;
    IData/*31:0*/ __PVT__m_n_bits;
    IData/*31:0*/ __PVT__m_n_used_bits;
    IData/*31:0*/ __PVT__m_has_cover;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_lineno;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__m_maps;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__2__id;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    std::string __Vtask_uvm_report_error__7__filename;
    std::string __Vtask_uvm_report_error__7__context_name;
    std::string __Vfunc_uvm_report_enabled__13__id;
    std::string __Vtask_uvm_report_error__19__id;
    std::string __Vtask_uvm_report_error__19__message;
    std::string __Vtask_uvm_report_error__19__filename;
    std::string __Vtask_uvm_report_error__19__context_name;
    std::string __Vfunc_uvm_report_enabled__25__id;
    std::string __Vtask_uvm_report_error__29__id;
    std::string __Vtask_uvm_report_error__29__message;
    std::string __Vtask_uvm_report_error__29__filename;
    std::string __Vtask_uvm_report_error__29__context_name;
    std::string __Vfunc_uvm_report_enabled__33__id;
    std::string __Vfunc_uvm_report_enabled__41__id;
    std::string __Vtask_uvm_report_error__46__id;
    std::string __Vtask_uvm_report_error__46__message;
    std::string __Vtask_uvm_report_error__46__filename;
    std::string __Vtask_uvm_report_error__46__context_name;
    std::string __Vfunc_uvm_report_enabled__52__id;
    std::string __Vtask_uvm_report_error__59__id;
    std::string __Vtask_uvm_report_error__59__message;
    std::string __Vtask_uvm_report_error__59__filename;
    std::string __Vtask_uvm_report_error__59__context_name;
    std::string __Vfunc_uvm_report_enabled__65__id;
    std::string __Vtask_uvm_report_error__72__id;
    std::string __Vtask_uvm_report_error__72__message;
    std::string __Vtask_uvm_report_error__72__filename;
    std::string __Vtask_uvm_report_error__72__context_name;
    std::string __Vfunc_uvm_report_enabled__82__id;
    std::string __Vtask_uvm_report_warning__86__id;
    std::string __Vtask_uvm_report_warning__86__message;
    std::string __Vtask_uvm_report_warning__86__filename;
    std::string __Vtask_uvm_report_warning__86__context_name;
    std::string __Vfunc_uvm_report_enabled__97__id;
    std::string __Vtask_uvm_report_warning__101__id;
    std::string __Vtask_uvm_report_warning__101__message;
    std::string __Vtask_uvm_report_warning__101__filename;
    std::string __Vtask_uvm_report_warning__101__context_name;
    std::string __Vfunc_uvm_report_enabled__125__id;
    std::string __Vtask_uvm_report_error__129__id;
    std::string __Vtask_uvm_report_error__129__message;
    std::string __Vtask_uvm_report_error__129__filename;
    std::string __Vtask_uvm_report_error__129__context_name;
    std::string __Vfunc_uvm_report_enabled__139__id;
    std::string __Vtask_uvm_report_error__144__id;
    std::string __Vtask_uvm_report_error__144__message;
    std::string __Vtask_uvm_report_error__144__filename;
    std::string __Vtask_uvm_report_error__144__context_name;
    std::string __Vfunc_uvm_report_enabled__156__id;
    std::string __Vtask_uvm_report_error__161__id;
    std::string __Vtask_uvm_report_error__161__message;
    std::string __Vtask_uvm_report_error__161__filename;
    std::string __Vtask_uvm_report_error__161__context_name;
    std::string __Vfunc_uvm_report_enabled__178__id;
    std::string __Vtask_uvm_report_warning__184__id;
    std::string __Vtask_uvm_report_warning__184__message;
    std::string __Vtask_uvm_report_warning__184__filename;
    std::string __Vtask_uvm_report_warning__184__context_name;
    std::string __Vfunc_uvm_report_enabled__188__id;
    std::string __Vtask_uvm_report_warning__193__id;
    std::string __Vtask_uvm_report_warning__193__message;
    std::string __Vtask_uvm_report_warning__193__filename;
    std::string __Vtask_uvm_report_warning__193__context_name;
    std::string __Vfunc_uvm_report_enabled__204__id;
    std::string __Vtask_uvm_report_warning__211__id;
    std::string __Vtask_uvm_report_warning__211__message;
    std::string __Vtask_uvm_report_warning__211__filename;
    std::string __Vtask_uvm_report_warning__211__context_name;
    std::string __Vfunc_uvm_report_enabled__217__id;
    std::string __Vtask_uvm_report_warning__224__id;
    std::string __Vtask_uvm_report_warning__224__message;
    std::string __Vtask_uvm_report_warning__224__filename;
    std::string __Vtask_uvm_report_warning__224__context_name;
    std::string __Vfunc_uvm_report_enabled__231__id;
    std::string __Vtask_uvm_report_warning__236__id;
    std::string __Vtask_uvm_report_warning__236__message;
    std::string __Vtask_uvm_report_warning__236__filename;
    std::string __Vtask_uvm_report_warning__236__context_name;
    std::string __Vfunc_uvm_report_enabled__249__id;
    std::string __Vtask_uvm_report_warning__254__id;
    std::string __Vtask_uvm_report_warning__254__message;
    std::string __Vtask_uvm_report_warning__254__filename;
    std::string __Vtask_uvm_report_warning__254__context_name;
    std::string __Vfunc_uvm_report_enabled__331__id;
    std::string __Vtask_uvm_report_info__340__id;
    std::string __Vtask_uvm_report_info__340__message;
    std::string __Vtask_uvm_report_info__340__filename;
    std::string __Vtask_uvm_report_info__340__context_name;
    std::string __Vfunc_uvm_report_enabled__405__id;
    std::string __Vtask_uvm_report_info__414__id;
    std::string __Vtask_uvm_report_info__414__message;
    std::string __Vtask_uvm_report_info__414__filename;
    std::string __Vtask_uvm_report_info__414__context_name;
    std::string __Vfunc_uvm_report_enabled__421__id;
    std::string __Vtask_uvm_report_warning__426__id;
    std::string __Vtask_uvm_report_warning__426__message;
    std::string __Vtask_uvm_report_warning__426__filename;
    std::string __Vtask_uvm_report_warning__426__context_name;
    std::string __Vfunc_uvm_report_enabled__436__id;
    std::string __Vtask_uvm_report_error__441__id;
    std::string __Vtask_uvm_report_error__441__message;
    std::string __Vtask_uvm_report_error__441__filename;
    std::string __Vtask_uvm_report_error__441__context_name;
    std::string __Vfunc_uvm_report_enabled__446__id;
    std::string __Vtask_uvm_report_error__452__id;
    std::string __Vtask_uvm_report_error__452__message;
    std::string __Vtask_uvm_report_error__452__filename;
    std::string __Vtask_uvm_report_error__452__context_name;
    std::string __Vfunc_uvm_report_enabled__457__id;
    std::string __Vtask_uvm_report_error__464__id;
    std::string __Vtask_uvm_report_error__464__message;
    std::string __Vtask_uvm_report_error__464__filename;
    std::string __Vtask_uvm_report_error__464__context_name;
    std::string __Vfunc_uvm_report_enabled__469__id;
    std::string __Vtask_uvm_report_info__473__id;
    std::string __Vtask_uvm_report_info__473__message;
    std::string __Vtask_uvm_report_info__473__filename;
    std::string __Vtask_uvm_report_info__473__context_name;
    std::string __Vfunc_uvm_report_enabled__483__id;
    std::string __Vtask_uvm_report_info__487__id;
    std::string __Vtask_uvm_report_info__487__message;
    std::string __Vtask_uvm_report_info__487__filename;
    std::string __Vtask_uvm_report_info__487__context_name;
    std::string __Vfunc_uvm_report_enabled__495__id;
    std::string __Vfunc_uvm_hdl_concat2string__500__image;
    std::string __Vfunc_uvm_hdl_concat2string__501__image;
    std::string __Vtask_uvm_report_error__502__id;
    std::string __Vtask_uvm_report_error__502__message;
    std::string __Vtask_uvm_report_error__502__filename;
    std::string __Vtask_uvm_report_error__502__context_name;
    std::string __Vfunc_uvm_report_enabled__506__id;
    std::string __Vtask_uvm_report_info__510__id;
    std::string __Vtask_uvm_report_info__510__message;
    std::string __Vtask_uvm_report_info__510__filename;
    std::string __Vtask_uvm_report_info__510__context_name;
    std::string __Vfunc_uvm_report_enabled__516__id;
    std::string __Vtask_uvm_report_error__521__id;
    std::string __Vtask_uvm_report_error__521__message;
    std::string __Vtask_uvm_report_error__521__filename;
    std::string __Vtask_uvm_report_error__521__context_name;
    std::string __Vfunc_uvm_report_enabled__530__id;
    std::string __Vtask_uvm_report_info__535__id;
    std::string __Vtask_uvm_report_info__535__message;
    std::string __Vtask_uvm_report_info__535__filename;
    std::string __Vtask_uvm_report_info__535__context_name;
    std::string __Vfunc_uvm_report_enabled__543__id;
    std::string __Vtask_uvm_report_error__548__id;
    std::string __Vtask_uvm_report_error__548__message;
    std::string __Vtask_uvm_report_error__548__filename;
    std::string __Vtask_uvm_report_error__548__context_name;
    std::string __Vfunc_uvm_report_enabled__557__id;
    std::string __Vtask_uvm_report_info__562__id;
    std::string __Vtask_uvm_report_info__562__message;
    std::string __Vtask_uvm_report_info__562__filename;
    std::string __Vtask_uvm_report_info__562__context_name;
    std::string __Vfunc_uvm_report_enabled__572__id;
    std::string __Vtask_uvm_report_error__577__id;
    std::string __Vtask_uvm_report_error__577__message;
    std::string __Vtask_uvm_report_error__577__filename;
    std::string __Vtask_uvm_report_error__577__context_name;
    std::string __Vfunc_uvm_report_enabled__586__id;
    std::string __Vtask_uvm_report_info__597__id;
    std::string __Vtask_uvm_report_info__597__message;
    std::string __Vtask_uvm_report_info__597__filename;
    std::string __Vtask_uvm_report_info__597__context_name;
    std::string __Vfunc_uvm_report_enabled__632__id;
    std::string __Vfunc_uvm_report_enabled__637__id;
    std::string __Vfunc_uvm_report_enabled__642__id;
    std::string __Vtask_uvm_report_warning__646__id;
    std::string __Vtask_uvm_report_warning__646__message;
    std::string __Vtask_uvm_report_warning__646__filename;
    std::string __Vtask_uvm_report_warning__646__context_name;
    std::string __Vfunc_uvm_report_enabled__650__id;
    std::string __Vtask_uvm_report_warning__654__id;
    std::string __Vtask_uvm_report_warning__654__message;
    std::string __Vtask_uvm_report_warning__654__filename;
    std::string __Vtask_uvm_report_warning__654__context_name;
    std::string __Vfunc_uvm_report_enabled__658__id;
    std::string __Vtask_uvm_report_warning__662__id;
    std::string __Vtask_uvm_report_warning__662__message;
    std::string __Vtask_uvm_report_warning__662__filename;
    std::string __Vtask_uvm_report_warning__662__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> __PVT__m_regfile_parent;
    VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> __PVT__m_fields;
    VlClassRef<Vtb_rng_std__03a__03asemaphore> __PVT__m_atomic;
    VlClassRef<Vtb_rng_std__03a__03aprocess> __PVT__m_process;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz213> __PVT__m_hdl_paths_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_reg(*this); }
    VlCoroutine __VnoInFunc_XatomicX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xget_fields_accessX(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &Xget_fields_accessX__Vfuncrtn);
    void __VnoInFunc_Xis_locked_by_fieldX(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &Xis_locked_by_fieldX__Vfuncrtn);
    void __VnoInFunc_Xlock_modelX(Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_XreadX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_XsampleX(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_Xset_busyX(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ busy);
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    virtual void __VnoInFunc_add_field(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> field);
    void __VnoInFunc_add_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<Vtb_rng_uvm_hdl_path_slice__struct__0> slices, std::string kind);
    void __VnoInFunc_add_hdl_path_slice(Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind);
    virtual void __VnoInFunc_add_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_watch(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_build_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    void __VnoInFunc_clear_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_check(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ expected, QData/*63:0*/ actual, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &do_check__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    virtual void __VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> &fields);
    void __VnoInFunc_get_frontdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind);
    void __VnoInFunc_get_hdl_path_kinds(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds);
    virtual void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mirrored_value(Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_regfile(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_busy(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_busy__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_predict(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_sample(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_set_backdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_file> regfile_parent);
    virtual void __VnoInFunc_set_reset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual void __VnoInFunc_unregister(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    virtual VlCoroutine __VnoInFunc_update(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_reg() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_coverage);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_reg();
};


#endif  // guard
