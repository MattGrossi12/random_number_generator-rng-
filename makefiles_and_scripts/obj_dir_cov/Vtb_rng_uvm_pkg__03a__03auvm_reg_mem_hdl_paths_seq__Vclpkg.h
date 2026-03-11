// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_MEM_HDL_PATHS_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtb_rng_uvm_pkg.h"
class Vtb_rng_uvm_pkg__03a__03auvm_comparer;
class Vtb_rng_uvm_pkg__03a__03auvm_copier;
class Vtb_rng_uvm_pkg__03a__03auvm_field_op;
class Vtb_rng_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vtb_rng_uvm_pkg__03a__03auvm_mem;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi197;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_packer;
class Vtb_rng_uvm_pkg__03a__03auvm_policy;
class Vtb_rng_uvm_pkg__03a__03auvm_printer;
class Vtb_rng_uvm_pkg__03a__03auvm_recorder;
class Vtb_rng_uvm_pkg__03a__03auvm_reg;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_block;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_;
class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz10;
class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz2;
class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz8;
class Vtb_rng_uvm_pkg__03a__03auvm_resource__Tz9;
class Vtb_rng_uvm_pkg__03a__03auvm_resource_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi197> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq : public Vtb_rng_uvm_pkg__03a__03auvm_reg_sequence__Tz328 {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__abstractions;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_mem_hdl_paths_seq"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_check_mem(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_mem> m, std::string kind);
    virtual void __VnoInFunc_check_reg(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg> r, std::string kind);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_block(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind);
    void __VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_field_op> op);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset_blk(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_block> blk);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq();
};


#endif  // guard
