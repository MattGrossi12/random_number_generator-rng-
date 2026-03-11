// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_comparer;
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_mem;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi119;
class Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz224;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_packer;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_queue__Tz2;
class Vtb_rng_uvm_pkg__03a__03auvm_reg;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_block;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_field;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg;
class Vtb_rng_uvm_pkg__03a__03auvm_vreg_field;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__id;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>, CData/*0:0*/> __PVT__m_roots;
    VlAssocArray<std::string, IData/*31:0*/> __PVT__m_root_names;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vfunc_uvm_is_match__10__expr;
    std::string __Vfunc_uvm_is_match__10__str;
    std::string __Vfunc_uvm_glob_to_re__11__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__11__glob;
    std::string __Vfunc_uvm_re_match__12__re;
    std::string __Vfunc_uvm_re_match__12__str;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vtask_uvm_report_warning__18__id;
    std::string __Vtask_uvm_report_warning__18__message;
    std::string __Vtask_uvm_report_warning__18__filename;
    std::string __Vtask_uvm_report_warning__18__context_name;

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_reg_block__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_check_data_width(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn);
    void __VnoInFunc_find_block(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn);
    void __VnoInFunc_find_blocks(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn);
    void __VnoInFunc_get_root_blocks(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> &blks);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi119> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_reg_block : public Vtb_rng_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    IData/*31:0*/ __PVT__default_path;
    IData/*31:0*/ __PVT__has_cover;
    IData/*31:0*/ __PVT__cover_on;
    IData/*31:0*/ __PVT__lineno;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__maps;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>, IData/*31:0*/> __PVT__blks;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>, IData/*31:0*/> __PVT__regs;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>, IData/*31:0*/> __PVT__vregs;
    VlAssocArray<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>, IData/*31:0*/> __PVT__mems;
    VlAssocArray<std::string, std::string> __PVT__root_hdl_paths;
    std::string __PVT__default_hdl_path;
    std::string __PVT__fname;
    VlAssignableEvent __PVT__m_uvm_lock_model_complete;
    std::string __Vfunc_uvm_report_enabled__13__id;
    std::string __Vtask_uvm_report_error__17__id;
    std::string __Vtask_uvm_report_error__17__message;
    std::string __Vtask_uvm_report_error__17__filename;
    std::string __Vtask_uvm_report_error__17__context_name;
    std::string __Vfunc_uvm_report_enabled__21__id;
    std::string __Vtask_uvm_report_error__27__id;
    std::string __Vtask_uvm_report_error__27__message;
    std::string __Vtask_uvm_report_error__27__filename;
    std::string __Vtask_uvm_report_error__27__context_name;
    std::string __Vfunc_uvm_report_enabled__33__id;
    std::string __Vtask_uvm_report_error__37__id;
    std::string __Vtask_uvm_report_error__37__message;
    std::string __Vtask_uvm_report_error__37__filename;
    std::string __Vtask_uvm_report_error__37__context_name;
    std::string __Vfunc_uvm_report_enabled__41__id;
    std::string __Vtask_uvm_report_error__47__id;
    std::string __Vtask_uvm_report_error__47__message;
    std::string __Vtask_uvm_report_error__47__filename;
    std::string __Vtask_uvm_report_error__47__context_name;
    std::string __Vfunc_uvm_report_enabled__52__id;
    std::string __Vtask_uvm_report_error__56__id;
    std::string __Vtask_uvm_report_error__56__message;
    std::string __Vtask_uvm_report_error__56__filename;
    std::string __Vtask_uvm_report_error__56__context_name;
    std::string __Vfunc_uvm_report_enabled__60__id;
    std::string __Vtask_uvm_report_error__66__id;
    std::string __Vtask_uvm_report_error__66__message;
    std::string __Vtask_uvm_report_error__66__filename;
    std::string __Vtask_uvm_report_error__66__context_name;
    std::string __Vfunc_uvm_report_enabled__71__id;
    std::string __Vtask_uvm_report_error__75__id;
    std::string __Vtask_uvm_report_error__75__message;
    std::string __Vtask_uvm_report_error__75__filename;
    std::string __Vtask_uvm_report_error__75__context_name;
    std::string __Vfunc_uvm_report_enabled__79__id;
    std::string __Vtask_uvm_report_error__85__id;
    std::string __Vtask_uvm_report_error__85__message;
    std::string __Vtask_uvm_report_error__85__filename;
    std::string __Vtask_uvm_report_error__85__context_name;
    std::string __Vfunc_uvm_report_enabled__98__id;
    std::string __Vfunc_uvm_report_enabled__105__id;
    std::string __Vtask_uvm_report_error__111__id;
    std::string __Vtask_uvm_report_error__111__message;
    std::string __Vtask_uvm_report_error__111__filename;
    std::string __Vtask_uvm_report_error__111__context_name;
    std::string __Vfunc_uvm_report_enabled__130__id;
    std::string __Vtask_uvm_report_warning__135__id;
    std::string __Vtask_uvm_report_warning__135__message;
    std::string __Vtask_uvm_report_warning__135__filename;
    std::string __Vtask_uvm_report_warning__135__context_name;
    std::string __Vfunc_uvm_report_enabled__142__id;
    std::string __Vtask_uvm_report_warning__147__id;
    std::string __Vtask_uvm_report_warning__147__message;
    std::string __Vtask_uvm_report_warning__147__filename;
    std::string __Vtask_uvm_report_warning__147__context_name;
    std::string __Vfunc_uvm_report_enabled__154__id;
    std::string __Vtask_uvm_report_warning__159__id;
    std::string __Vtask_uvm_report_warning__159__message;
    std::string __Vtask_uvm_report_warning__159__filename;
    std::string __Vtask_uvm_report_warning__159__context_name;
    std::string __Vfunc_uvm_report_enabled__166__id;
    std::string __Vtask_uvm_report_warning__171__id;
    std::string __Vtask_uvm_report_warning__171__message;
    std::string __Vtask_uvm_report_warning__171__filename;
    std::string __Vtask_uvm_report_warning__171__context_name;
    std::string __Vfunc_uvm_report_enabled__180__id;
    std::string __Vtask_uvm_report_warning__185__id;
    std::string __Vtask_uvm_report_warning__185__message;
    std::string __Vtask_uvm_report_warning__185__filename;
    std::string __Vtask_uvm_report_warning__185__context_name;
    std::string __Vfunc_uvm_report_enabled__194__id;
    std::string __Vtask_uvm_report_warning__199__id;
    std::string __Vtask_uvm_report_warning__199__message;
    std::string __Vtask_uvm_report_warning__199__filename;
    std::string __Vtask_uvm_report_warning__199__context_name;
    std::string __Vfunc_uvm_report_enabled__217__id;
    std::string __Vtask_uvm_report_info__222__id;
    std::string __Vtask_uvm_report_info__222__message;
    std::string __Vtask_uvm_report_info__222__filename;
    std::string __Vtask_uvm_report_info__222__context_name;
    std::string __Vfunc_uvm_report_enabled__226__id;
    std::string __Vtask_uvm_report_info__231__id;
    std::string __Vtask_uvm_report_info__231__message;
    std::string __Vtask_uvm_report_info__231__filename;
    std::string __Vtask_uvm_report_info__231__context_name;
    std::string __Vfunc_uvm_report_enabled__237__id;
    std::string __Vtask_uvm_report_error__242__id;
    std::string __Vtask_uvm_report_error__242__message;
    std::string __Vtask_uvm_report_error__242__filename;
    std::string __Vtask_uvm_report_error__242__context_name;
    std::string __Vfunc_uvm_report_enabled__261__id;
    std::string __Vtask_uvm_report_error__265__id;
    std::string __Vtask_uvm_report_error__265__message;
    std::string __Vtask_uvm_report_error__265__filename;
    std::string __Vtask_uvm_report_error__265__context_name;
    std::string __Vfunc_uvm_report_enabled__269__id;
    std::string __Vtask_uvm_report_error__275__id;
    std::string __Vtask_uvm_report_error__275__message;
    std::string __Vtask_uvm_report_error__275__filename;
    std::string __Vtask_uvm_report_error__275__context_name;
    std::string __Vfunc_uvm_report_enabled__283__id;
    std::string __Vtask_uvm_report_warning__287__id;
    std::string __Vtask_uvm_report_warning__287__message;
    std::string __Vtask_uvm_report_warning__287__filename;
    std::string __Vtask_uvm_report_warning__287__context_name;
    std::string __Vfunc_uvm_report_enabled__291__id;
    std::string __Vtask_uvm_report_warning__296__id;
    std::string __Vtask_uvm_report_warning__296__message;
    std::string __Vtask_uvm_report_warning__296__filename;
    std::string __Vtask_uvm_report_warning__296__context_name;
    std::string __Vfunc_uvm_report_enabled__303__id;
    std::string __Vtask_uvm_report_warning__307__id;
    std::string __Vtask_uvm_report_warning__307__message;
    std::string __Vtask_uvm_report_warning__307__filename;
    std::string __Vtask_uvm_report_warning__307__context_name;
    std::string __Vfunc_uvm_report_enabled__317__id;
    std::string __Vtask_uvm_report_warning__321__id;
    std::string __Vtask_uvm_report_warning__321__message;
    std::string __Vtask_uvm_report_warning__321__filename;
    std::string __Vtask_uvm_report_warning__321__context_name;
    std::string __Vfunc_uvm_report_enabled__332__id;
    std::string __Vtask_uvm_report_error__336__id;
    std::string __Vtask_uvm_report_error__336__message;
    std::string __Vtask_uvm_report_error__336__filename;
    std::string __Vtask_uvm_report_error__336__context_name;
    std::string __Vfunc_uvm_report_enabled__346__id;
    std::string __Vtask_uvm_report_error__350__id;
    std::string __Vtask_uvm_report_error__350__message;
    std::string __Vtask_uvm_report_error__350__filename;
    std::string __Vtask_uvm_report_error__350__context_name;
    std::string __Vfunc_uvm_report_enabled__359__id;
    std::string __Vtask_uvm_report_error__363__id;
    std::string __Vtask_uvm_report_error__363__message;
    std::string __Vtask_uvm_report_error__363__filename;
    std::string __Vtask_uvm_report_error__363__context_name;
    std::string __Vfunc_uvm_report_enabled__381__id;
    std::string __Vfunc_uvm_report_enabled__386__id;
    std::string __Vfunc_uvm_report_enabled__391__id;
    std::string __Vtask_uvm_report_warning__395__id;
    std::string __Vtask_uvm_report_warning__395__message;
    std::string __Vtask_uvm_report_warning__395__filename;
    std::string __Vtask_uvm_report_warning__395__context_name;
    std::string __Vfunc_uvm_report_enabled__399__id;
    std::string __Vtask_uvm_report_warning__403__id;
    std::string __Vtask_uvm_report_warning__403__message;
    std::string __Vtask_uvm_report_warning__403__filename;
    std::string __Vtask_uvm_report_warning__403__context_name;
    std::string __Vfunc_uvm_report_enabled__407__id;
    std::string __Vtask_uvm_report_warning__411__id;
    std::string __Vtask_uvm_report_warning__411__message;
    std::string __Vtask_uvm_report_warning__411__filename;
    std::string __Vtask_uvm_report_warning__411__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__backdoor;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_string_pool__Tz224> __PVT__hdl_paths_pool;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> __PVT__default_map;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_block"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_reg_block(*this); }
    void __VnoInFunc_Xinit_address_mapsX(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_block(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk);
    virtual void __VnoInFunc_add_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_add_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_add_mem(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> mem);
    void __VnoInFunc_add_reg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> rg);
    void __VnoInFunc_add_vreg(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_build_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    void __VnoInFunc_clear_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_create_map(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_get_backdoor(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_blocks(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    virtual void __VnoInFunc_get_default_door(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_door__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_default_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_map_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mem_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_vfield_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Vtb_rng__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_vreg_by_name(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_hdl_path_root(Vtb_rng__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn);
    void __VnoInFunc_is_locked(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn);
    virtual void __VnoInFunc_lock_model(Vtb_rng__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_mirror(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read_mem_by_name(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_read_reg_by_name(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_readmemh(Vtb_rng__Syms* __restrict vlSymsp, std::string filename);
    virtual void __VnoInFunc_reset(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_sample(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_backdoor(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    virtual void __VnoInFunc_set_default_door(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ door);
    void __VnoInFunc_set_default_hdl_path(Vtb_rng__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_default_map(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_hdl_path_root(Vtb_rng__Syms* __restrict vlSymsp, std::string path, std::string kind);
    virtual void __VnoInFunc_set_lock(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ v);
    virtual void __VnoInFunc_set_parent(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual void __VnoInFunc_unlock_model(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_unregister(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> m);
    virtual VlCoroutine __VnoInFunc_update(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_wait_for_lock(Vtb_rng__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write_mem_by_name(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write_reg_by_name(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_writememh(Vtb_rng__Syms* __restrict vlSymsp, std::string filename);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_reg_block() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_reg_block();
};


#endif  // guard
