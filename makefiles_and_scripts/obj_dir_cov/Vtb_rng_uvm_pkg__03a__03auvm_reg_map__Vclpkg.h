// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_event_;
class Vtb_rng_uvm_pkg__03a__03auvm_mem;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi121;
class Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz7;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_reg;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_block;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_field;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_item;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_seq_base;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_item;
class Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg_field;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __PVT__m_backdoor;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_reg_map__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_backdoor(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi121> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_reg_map : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_byte_addressing;
    CData/*0:0*/ __PVT__m_auto_predict;
    CData/*0:0*/ __PVT__m_check_on_read;
    IData/*31:0*/ __PVT__m_n_bytes;
    IData/*31:0*/ __PVT__m_endian;
    IData/*31:0*/ __PVT__m_system_n_bytes;
    QData/*63:0*/ __PVT__m_base_addr;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>, QData/*63:0*/> __PVT__m_submaps;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>, std::string> __PVT__m_submap_rights;
    std::string __Vfunc_uvm_report_enabled__9__id;
    std::string __Vtask_uvm_report_error__13__id;
    std::string __Vtask_uvm_report_error__13__message;
    std::string __Vtask_uvm_report_error__13__filename;
    std::string __Vtask_uvm_report_error__13__context_name;
    std::string __Vfunc_uvm_report_enabled__17__id;
    std::string __Vtask_uvm_report_error__21__id;
    std::string __Vtask_uvm_report_error__21__message;
    std::string __Vtask_uvm_report_error__21__filename;
    std::string __Vtask_uvm_report_error__21__context_name;
    std::string __Vfunc_uvm_report_enabled__33__id;
    std::string __Vtask_uvm_report_error__39__id;
    std::string __Vtask_uvm_report_error__39__message;
    std::string __Vtask_uvm_report_error__39__filename;
    std::string __Vtask_uvm_report_error__39__context_name;
    std::string __Vfunc_uvm_report_enabled__45__id;
    std::string __Vtask_uvm_report_error__51__id;
    std::string __Vtask_uvm_report_error__51__message;
    std::string __Vtask_uvm_report_error__51__filename;
    std::string __Vtask_uvm_report_error__51__context_name;
    std::string __Vfunc_uvm_report_enabled__57__id;
    std::string __Vtask_uvm_report_error__63__id;
    std::string __Vtask_uvm_report_error__63__message;
    std::string __Vtask_uvm_report_error__63__filename;
    std::string __Vtask_uvm_report_error__63__context_name;
    std::string __Vfunc_uvm_report_enabled__82__id;
    std::string __Vtask_uvm_report_warning__89__id;
    std::string __Vtask_uvm_report_warning__89__message;
    std::string __Vtask_uvm_report_warning__89__filename;
    std::string __Vtask_uvm_report_warning__89__context_name;
    std::string __Vfunc_uvm_report_enabled__93__id;
    std::string __Vtask_uvm_report_warning__100__id;
    std::string __Vtask_uvm_report_warning__100__message;
    std::string __Vtask_uvm_report_warning__100__filename;
    std::string __Vtask_uvm_report_warning__100__context_name;
    std::string __Vfunc_uvm_report_enabled__104__id;
    std::string __Vtask_uvm_report_error__110__id;
    std::string __Vtask_uvm_report_error__110__message;
    std::string __Vtask_uvm_report_error__110__filename;
    std::string __Vtask_uvm_report_error__110__context_name;
    std::string __Vfunc_uvm_report_enabled__116__id;
    std::string __Vtask_uvm_report_error__122__id;
    std::string __Vtask_uvm_report_error__122__message;
    std::string __Vtask_uvm_report_error__122__filename;
    std::string __Vtask_uvm_report_error__122__context_name;
    std::string __Vfunc_uvm_report_enabled__128__id;
    std::string __Vtask_uvm_report_error__134__id;
    std::string __Vtask_uvm_report_error__134__message;
    std::string __Vtask_uvm_report_error__134__filename;
    std::string __Vtask_uvm_report_error__134__context_name;
    std::string __Vfunc_uvm_report_enabled__148__id;
    std::string __Vtask_uvm_report_warning__155__id;
    std::string __Vtask_uvm_report_warning__155__message;
    std::string __Vtask_uvm_report_warning__155__filename;
    std::string __Vtask_uvm_report_warning__155__context_name;
    std::string __Vfunc_uvm_report_enabled__159__id;
    std::string __Vtask_uvm_report_warning__166__id;
    std::string __Vtask_uvm_report_warning__166__message;
    std::string __Vtask_uvm_report_warning__166__filename;
    std::string __Vtask_uvm_report_warning__166__context_name;
    std::string __Vfunc_uvm_report_enabled__170__id;
    std::string __Vtask_uvm_report_error__175__id;
    std::string __Vtask_uvm_report_error__175__message;
    std::string __Vtask_uvm_report_error__175__filename;
    std::string __Vtask_uvm_report_error__175__context_name;
    std::string __Vfunc_uvm_report_enabled__180__id;
    std::string __Vtask_uvm_report_error__187__id;
    std::string __Vtask_uvm_report_error__187__message;
    std::string __Vtask_uvm_report_error__187__filename;
    std::string __Vtask_uvm_report_error__187__context_name;
    std::string __Vfunc_uvm_report_enabled__192__id;
    std::string __Vtask_uvm_report_warning__199__id;
    std::string __Vtask_uvm_report_warning__199__message;
    std::string __Vtask_uvm_report_warning__199__filename;
    std::string __Vtask_uvm_report_warning__199__context_name;
    std::string __Vfunc_uvm_report_enabled__207__id;
    std::string __Vtask_uvm_report_error__212__id;
    std::string __Vtask_uvm_report_error__212__message;
    std::string __Vtask_uvm_report_error__212__filename;
    std::string __Vtask_uvm_report_error__212__context_name;
    std::string __Vfunc_uvm_report_enabled__216__id;
    std::string __Vtask_uvm_report_error__223__id;
    std::string __Vtask_uvm_report_error__223__message;
    std::string __Vtask_uvm_report_error__223__filename;
    std::string __Vtask_uvm_report_error__223__context_name;
    std::string __Vfunc_uvm_report_enabled__227__id;
    std::string __Vtask_uvm_report_error__231__id;
    std::string __Vtask_uvm_report_error__231__message;
    std::string __Vtask_uvm_report_error__231__filename;
    std::string __Vtask_uvm_report_error__231__context_name;
    std::string __Vfunc_uvm_report_enabled__235__id;
    std::string __Vtask_uvm_report_info__241__id;
    std::string __Vtask_uvm_report_info__241__message;
    std::string __Vtask_uvm_report_info__241__filename;
    std::string __Vtask_uvm_report_info__241__context_name;
    std::string __Vfunc_uvm_report_enabled__263__id;
    std::string __Vtask_uvm_report_error__269__id;
    std::string __Vtask_uvm_report_error__269__message;
    std::string __Vtask_uvm_report_error__269__filename;
    std::string __Vtask_uvm_report_error__269__context_name;
    std::string __Vfunc_uvm_report_enabled__273__id;
    std::string __Vtask_uvm_report_error__279__id;
    std::string __Vtask_uvm_report_error__279__message;
    std::string __Vtask_uvm_report_error__279__filename;
    std::string __Vtask_uvm_report_error__279__context_name;
    std::string __Vfunc_uvm_report_enabled__283__id;
    std::string __Vtask_uvm_report_warning__288__id;
    std::string __Vtask_uvm_report_warning__288__message;
    std::string __Vtask_uvm_report_warning__288__filename;
    std::string __Vtask_uvm_report_warning__288__context_name;
    std::string __Vfunc_uvm_report_enabled__302__id;
    std::string __Vtask_uvm_report_error__307__id;
    std::string __Vtask_uvm_report_error__307__message;
    std::string __Vtask_uvm_report_error__307__filename;
    std::string __Vtask_uvm_report_error__307__context_name;
    std::string __Vfunc_uvm_report_enabled__312__id;
    std::string __Vtask_uvm_report_error__317__id;
    std::string __Vtask_uvm_report_error__317__message;
    std::string __Vtask_uvm_report_error__317__filename;
    std::string __Vtask_uvm_report_error__317__context_name;
    std::string __Vfunc_uvm_report_enabled__321__id;
    std::string __Vfunc_uvm_report_enabled__347__id;
    std::string __Vtask_uvm_report_error__352__id;
    std::string __Vtask_uvm_report_error__352__message;
    std::string __Vtask_uvm_report_error__352__filename;
    std::string __Vtask_uvm_report_error__352__context_name;
    std::string __Vfunc_uvm_report_enabled__357__id;
    std::string __Vtask_uvm_report_error__361__id;
    std::string __Vtask_uvm_report_error__361__message;
    std::string __Vtask_uvm_report_error__361__filename;
    std::string __Vtask_uvm_report_error__361__context_name;
    std::string __Vfunc_uvm_report_enabled__368__id;
    std::string __Vtask_uvm_report_error__372__id;
    std::string __Vtask_uvm_report_error__372__message;
    std::string __Vtask_uvm_report_error__372__filename;
    std::string __Vtask_uvm_report_error__372__context_name;
    std::string __Vfunc_uvm_report_enabled__376__id;
    std::string __Vtask_uvm_report_error__382__id;
    std::string __Vtask_uvm_report_error__382__message;
    std::string __Vtask_uvm_report_error__382__filename;
    std::string __Vtask_uvm_report_error__382__context_name;
    std::string __Vfunc_uvm_report_enabled__387__id;
    std::string __Vtask_uvm_report_error__392__id;
    std::string __Vtask_uvm_report_error__392__message;
    std::string __Vtask_uvm_report_error__392__filename;
    std::string __Vtask_uvm_report_error__392__context_name;
    std::string __Vfunc_uvm_report_enabled__397__id;
    std::string __Vtask_uvm_report_error__402__id;
    std::string __Vtask_uvm_report_error__402__message;
    std::string __Vtask_uvm_report_error__402__filename;
    std::string __Vtask_uvm_report_error__402__context_name;
    std::string __Vfunc_uvm_report_enabled__416__id;
    std::string __Vtask_uvm_report_warning__423__id;
    std::string __Vtask_uvm_report_warning__423__message;
    std::string __Vtask_uvm_report_warning__423__filename;
    std::string __Vtask_uvm_report_warning__423__context_name;
    std::string __Vfunc_uvm_report_enabled__427__id;
    std::string __Vtask_uvm_report_warning__434__id;
    std::string __Vtask_uvm_report_warning__434__message;
    std::string __Vtask_uvm_report_warning__434__filename;
    std::string __Vtask_uvm_report_warning__434__context_name;
    std::string __Vfunc_uvm_report_enabled__447__id;
    std::string __Vtask_uvm_report_warning__455__id;
    std::string __Vtask_uvm_report_warning__455__message;
    std::string __Vtask_uvm_report_warning__455__filename;
    std::string __Vtask_uvm_report_warning__455__context_name;
    std::string __Vfunc_uvm_report_enabled__463__id;
    std::string __Vtask_uvm_report_warning__469__id;
    std::string __Vtask_uvm_report_warning__469__message;
    std::string __Vtask_uvm_report_warning__469__filename;
    std::string __Vtask_uvm_report_warning__469__context_name;
    std::string __Vfunc_uvm_report_enabled__477__id;
    std::string __Vtask_uvm_report_warning__483__id;
    std::string __Vtask_uvm_report_warning__483__message;
    std::string __Vtask_uvm_report_warning__483__filename;
    std::string __Vtask_uvm_report_warning__483__context_name;
    std::string __Vfunc_uvm_report_enabled__488__id;
    std::string __Vtask_uvm_report_warning__494__id;
    std::string __Vtask_uvm_report_warning__494__message;
    std::string __Vtask_uvm_report_warning__494__filename;
    std::string __Vtask_uvm_report_warning__494__context_name;
    std::string __Vfunc_uvm_report_enabled__498__id;
    std::string __Vtask_uvm_report_warning__505__id;
    std::string __Vtask_uvm_report_warning__505__message;
    std::string __Vtask_uvm_report_warning__505__filename;
    std::string __Vtask_uvm_report_warning__505__context_name;
    std::string __Vfunc_uvm_report_enabled__509__id;
    std::string __Vtask_uvm_report_warning__516__id;
    std::string __Vtask_uvm_report_warning__516__message;
    std::string __Vtask_uvm_report_warning__516__filename;
    std::string __Vtask_uvm_report_warning__516__context_name;
    std::string __Vfunc_uvm_report_enabled__520__id;
    std::string __Vfunc_uvm_report_enabled__528__id;
    std::string __Vfunc_uvm_report_enabled__536__id;
    std::string __Vfunc_uvm_report_enabled__551__id;
    std::string __Vfunc_uvm_report_enabled__558__id;
    std::string __Vfunc_uvm_report_enabled__579__id;
    std::string __Vfunc_uvm_report_enabled__586__id;
    std::string __Vfunc_uvm_report_enabled__609__id;
    std::string __Vfunc_uvm_report_enabled__627__id;
    std::string __Vtask_uvm_report_info__632__id;
    std::string __Vtask_uvm_report_info__632__message;
    std::string __Vtask_uvm_report_info__632__filename;
    std::string __Vtask_uvm_report_info__632__context_name;
    std::string __Vfunc_uvm_report_enabled__662__id;
    std::string __Vtask_uvm_report_info__667__id;
    std::string __Vtask_uvm_report_info__667__message;
    std::string __Vtask_uvm_report_info__667__filename;
    std::string __Vtask_uvm_report_info__667__context_name;
    std::string __Vfunc_uvm_report_enabled__715__id;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> __PVT__m_sequence_wrapper;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> __PVT__m_adapter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> __PVT__m_sequencer;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __PVT__m_parent_map;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_regs_info;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_mems_info;
    VlAssocArray<QData/*63:0*/, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset;
    VlAssocArray<QData/*63:0*/, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset_wo;
    VlAssocArray<VlWide<5>/*159:0*/, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> __PVT__m_mems_by_offset;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy> __PVT__policy;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_map"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_reg_map(*this); }
    void __VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &map_info, IData/*31:0*/ &size, IData/*31:0*/ &lsb, IData/*31:0*/ &addr_skip);
    void __VnoInFunc_Xinit_address_mapX(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_Xverify_map_configX(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_mem(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    virtual void __VnoInFunc_add_parent_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> parent_map, QData/*63:0*/ offset);
    virtual void __VnoInFunc_add_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    virtual void __VnoInFunc_add_submap(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> child_map, QData/*63:0*/ offset);
    void __VnoInFunc_ceil(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &ceil__Vfuncrtn);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_clone_and_update(Vtb_rng__Syms* __restrict vlSymsp, std::string rights, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &clone_and_update__Vfuncrtn);
    void __VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    VlCoroutine __VnoInFunc_do_bus_access(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual VlCoroutine __VnoInFunc_do_bus_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual VlCoroutine __VnoInFunc_do_bus_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_adapter(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn);
    virtual void __VnoInFunc_get_addr_unit_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn);
    void __VnoInFunc_get_auto_predict(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_auto_predict__Vfuncrtn);
    virtual void __VnoInFunc_get_base_addr(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, QData/*63:0*/ &get_base_addr__Vfuncrtn);
    void __VnoInFunc_get_check_on_read(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_on_read__Vfuncrtn);
    virtual void __VnoInFunc_get_endian(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_endian__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_mem_by_offset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> &get_mem_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, CData/*0:0*/ error, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_n_bytes(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_parent_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn);
    virtual void __VnoInFunc_get_physical_addresses(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_physical_addresses__Vfuncrtn);
    virtual void __VnoInFunc_get_physical_addresses_to_map(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> parent_map, IData/*31:0*/ &byte_offset, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &get_physical_addresses_to_map__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_offset(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_reg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, CData/*0:0*/ error, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_root_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn);
    virtual void __VnoInFunc_get_sequencer(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn);
    virtual void __VnoInFunc_get_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ &get_submap_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_submaps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps, IData/*31:0*/ hier);
    void __VnoInFunc_get_transaction_order_policy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy> &get_transaction_order_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_m_set_mem_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_m_set_reg_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    VlCoroutine __VnoInFunc_perform_accesses(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<Vtb_rng_uvm_reg_bus_op__struct__0> &accesses, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_auto_predict(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_set_base_addr(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset);
    void __VnoInFunc_set_check_on_read(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_set_sequencer(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_set_submap_offset(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ offset);
    void __VnoInFunc_set_transaction_order_policy(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_transaction_order_policy> pol);
    virtual void __VnoInFunc_unregister(Vtb_rng__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_reg_map() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_reg_map();
};


#endif  // guard
