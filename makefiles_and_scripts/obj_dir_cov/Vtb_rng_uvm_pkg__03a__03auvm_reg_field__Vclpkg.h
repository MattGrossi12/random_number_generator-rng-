// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_callback_iter__pi105;
class Vtb_rng_uvm_pkg__03a__03auvm_comparer;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi114;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_packer;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_reg;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_block;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_cbs;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_field;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_item;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_predefined;
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_policy_names;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_reg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_define_access(Vtb_rng__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn);
    void __VnoInFunc_get_max_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi114> &get_type__Vfuncrtn);
    void __VnoInFunc_m_predefine_policies(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_reg_field : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_volatile;
    CData/*0:0*/ __PVT__m_written;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_individually_accessible;
    IData/*31:0*/ __PVT__m_lsb;
    IData/*31:0*/ __PVT__m_size;
    IData/*31:0*/ __PVT__m_lineno;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_check;
    QData/*63:0*/ __PVT__value;
    QData/*63:0*/ __PVT__m_mirrored;
    QData/*63:0*/ __PVT__m_desired;
    VlAssocArray<std::string, QData/*63:0*/> __PVT__m_reset;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__4__id;
    std::string __Vtask_uvm_report_error__9__id;
    std::string __Vtask_uvm_report_error__9__message;
    std::string __Vtask_uvm_report_error__9__filename;
    std::string __Vtask_uvm_report_error__9__context_name;
    std::string __Vfunc_uvm_report_enabled__15__id;
    std::string __Vtask_uvm_report_error__20__id;
    std::string __Vtask_uvm_report_error__20__message;
    std::string __Vtask_uvm_report_error__20__filename;
    std::string __Vtask_uvm_report_error__20__context_name;
    std::string __Vfunc_uvm_report_enabled__29__id;
    std::string __Vtask_uvm_report_warning__37__id;
    std::string __Vtask_uvm_report_warning__37__message;
    std::string __Vtask_uvm_report_warning__37__filename;
    std::string __Vtask_uvm_report_warning__37__context_name;
    std::string __Vfunc_uvm_report_enabled__41__id;
    std::string __Vtask_uvm_report_error__45__id;
    std::string __Vtask_uvm_report_error__45__message;
    std::string __Vtask_uvm_report_error__45__filename;
    std::string __Vtask_uvm_report_error__45__context_name;
    std::string __Vfunc_uvm_report_enabled__50__id;
    std::string __Vfunc_uvm_report_enabled__68__id;
    std::string __Vtask_uvm_report_warning__74__id;
    std::string __Vtask_uvm_report_warning__74__message;
    std::string __Vtask_uvm_report_warning__74__filename;
    std::string __Vtask_uvm_report_warning__74__context_name;
    std::string __Vfunc_uvm_report_enabled__78__id;
    std::string __Vtask_uvm_report_warning__83__id;
    std::string __Vtask_uvm_report_warning__83__message;
    std::string __Vtask_uvm_report_warning__83__filename;
    std::string __Vtask_uvm_report_warning__83__context_name;
    std::string __Vfunc_uvm_report_enabled__88__id;
    std::string __Vtask_uvm_report_warning__94__id;
    std::string __Vtask_uvm_report_warning__94__message;
    std::string __Vtask_uvm_report_warning__94__filename;
    std::string __Vtask_uvm_report_warning__94__context_name;
    std::string __Vfunc_uvm_report_enabled__102__id;
    std::string __Vtask_uvm_report_warning__107__id;
    std::string __Vtask_uvm_report_warning__107__message;
    std::string __Vtask_uvm_report_warning__107__filename;
    std::string __Vtask_uvm_report_warning__107__context_name;
    std::string __Vfunc_uvm_report_enabled__114__id;
    std::string __Vtask_uvm_report_error__120__id;
    std::string __Vtask_uvm_report_error__120__message;
    std::string __Vtask_uvm_report_error__120__filename;
    std::string __Vtask_uvm_report_error__120__context_name;
    std::string __Vfunc_uvm_report_enabled__125__id;
    std::string __Vtask_uvm_report_error__131__id;
    std::string __Vtask_uvm_report_error__131__message;
    std::string __Vtask_uvm_report_error__131__filename;
    std::string __Vtask_uvm_report_error__131__context_name;
    std::string __Vfunc_uvm_report_enabled__140__id;
    std::string __Vtask_uvm_report_warning__145__id;
    std::string __Vtask_uvm_report_warning__145__message;
    std::string __Vtask_uvm_report_warning__145__filename;
    std::string __Vtask_uvm_report_warning__145__context_name;
    std::string __Vfunc_uvm_report_enabled__173__id;
    std::string __Vtask_uvm_report_warning__178__id;
    std::string __Vtask_uvm_report_warning__178__message;
    std::string __Vtask_uvm_report_warning__178__filename;
    std::string __Vtask_uvm_report_warning__178__context_name;
    std::string __Vfunc_uvm_report_enabled__210__id;
    std::string __Vtask_uvm_report_warning__215__id;
    std::string __Vtask_uvm_report_warning__215__message;
    std::string __Vtask_uvm_report_warning__215__filename;
    std::string __Vtask_uvm_report_warning__215__context_name;
    std::string __Vfunc_uvm_report_enabled__219__id;
    std::string __Vtask_uvm_report_warning__224__id;
    std::string __Vtask_uvm_report_warning__224__message;
    std::string __Vtask_uvm_report_warning__224__filename;
    std::string __Vtask_uvm_report_warning__224__context_name;
    std::string __Vfunc_uvm_report_enabled__228__id;
    std::string __Vtask_uvm_report_warning__233__id;
    std::string __Vtask_uvm_report_warning__233__message;
    std::string __Vtask_uvm_report_warning__233__filename;
    std::string __Vtask_uvm_report_warning__233__context_name;
    std::string __Vfunc_uvm_report_enabled__238__id;
    std::string __Vtask_uvm_report_warning__244__id;
    std::string __Vtask_uvm_report_warning__244__message;
    std::string __Vtask_uvm_report_warning__244__filename;
    std::string __Vtask_uvm_report_warning__244__context_name;
    std::string __Vfunc_uvm_report_enabled__258__id;
    std::string __Vtask_uvm_report_warning__263__id;
    std::string __Vtask_uvm_report_warning__263__message;
    std::string __Vtask_uvm_report_warning__263__filename;
    std::string __Vtask_uvm_report_warning__263__context_name;
    std::string __Vfunc_uvm_report_enabled__267__id;
    std::string __Vtask_uvm_report_warning__272__id;
    std::string __Vtask_uvm_report_warning__272__message;
    std::string __Vtask_uvm_report_warning__272__filename;
    std::string __Vtask_uvm_report_warning__272__context_name;
    std::string __Vfunc_uvm_report_enabled__278__id;
    std::string __Vtask_uvm_report_error__283__id;
    std::string __Vtask_uvm_report_error__283__message;
    std::string __Vtask_uvm_report_error__283__filename;
    std::string __Vtask_uvm_report_error__283__context_name;
    std::string __Vfunc_uvm_report_enabled__304__id;
    std::string __Vfunc_uvm_report_enabled__309__id;
    std::string __Vtask_uvm_report_warning__313__id;
    std::string __Vtask_uvm_report_warning__313__message;
    std::string __Vtask_uvm_report_warning__313__filename;
    std::string __Vtask_uvm_report_warning__313__context_name;
    std::string __Vfunc_uvm_report_enabled__317__id;
    std::string __Vtask_uvm_report_warning__321__id;
    std::string __Vtask_uvm_report_warning__321__message;
    std::string __Vtask_uvm_report_warning__321__filename;
    std::string __Vtask_uvm_report_warning__321__context_name;
    std::string __Vfunc_uvm_report_enabled__325__id;
    std::string __Vtask_uvm_report_warning__329__id;
    std::string __Vtask_uvm_report_warning__329__message;
    std::string __Vtask_uvm_report_warning__329__filename;
    std::string __Vtask_uvm_report_warning__329__context_name;
    std::string __Vfunc_uvm_report_enabled__333__id;
    std::string __Vtask_uvm_report_warning__337__id;
    std::string __Vtask_uvm_report_warning__337__message;
    std::string __Vtask_uvm_report_warning__337__filename;
    std::string __Vtask_uvm_report_warning__337__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> __PVT__m_parent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_field"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_reg_field(*this); }
    void __VnoInFunc_Xcheck_accessX(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    virtual void __VnoInFunc_XpredictX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn);
    virtual void __VnoInFunc_XupdateX(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn);
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    void __VnoInFunc_get_compare(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn);
    virtual void __VnoInFunc_get_mirrored_value(Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_indv_accessible(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn);
    virtual void __VnoInFunc_is_known_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn);
    virtual void __VnoInFunc_is_volatile(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_post_randomize(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_pre_randomize(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_predict(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_access(Vtb_rng__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn);
    void __VnoInFunc_set_compare(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    virtual void __VnoInFunc_set_reset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual void __VnoInFunc_set_volatility(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile);
    void __VnoInFunc_uvm_reg_field_valid_setup_constraint(Vtb_rng__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_reg_field() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_reg_field();
};


#endif  // guard
