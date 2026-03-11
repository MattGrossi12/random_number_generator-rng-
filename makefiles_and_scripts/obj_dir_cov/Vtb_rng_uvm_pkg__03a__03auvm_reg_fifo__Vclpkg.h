// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_FIFO__VCLPKG_H_
#define VERILATED_VTB_RNG_UVM_PKG__03A__03AUVM_REG_FIFO__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t;
class Vtb_rng_uvm_pkg__03a__03auvm_object;
class Vtb_rng_uvm_pkg__03a__03auvm_reg;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_field;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_item;
class Vtb_rng_uvm_pkg__03a__03auvm_reg_map;
class Vtb_rng_uvm_pkg__03a__03auvm_root;
class Vtb_rng_uvm_pkg__03a__03auvm_sequence_base;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg();
    ~Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_reg__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo : public Vtb_rng_uvm_pkg__03a__03auvm_reg {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_set_cnt;
    IData/*31:0*/ __PVT__m_size;
    IData/*31:0*/ __Vfifo_size;
    VlQueue<QData/*63:0*/> __PVT__fifo;
    std::string __Vfunc_uvm_report_enabled__11__id;
    std::string __Vtask_uvm_report_warning__15__id;
    std::string __Vtask_uvm_report_warning__15__message;
    std::string __Vtask_uvm_report_warning__15__filename;
    std::string __Vtask_uvm_report_warning__15__context_name;
    std::string __Vfunc_uvm_report_enabled__19__id;
    std::string __Vtask_uvm_report_error__23__id;
    std::string __Vtask_uvm_report_error__23__message;
    std::string __Vtask_uvm_report_error__23__filename;
    std::string __Vtask_uvm_report_error__23__context_name;
    std::string __Vfunc_uvm_report_enabled__27__id;
    std::string __Vtask_uvm_report_error__31__id;
    std::string __Vtask_uvm_report_error__31__message;
    std::string __Vtask_uvm_report_error__31__filename;
    std::string __Vtask_uvm_report_error__31__context_name;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_field> __PVT__value;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_fifo"; }
    VlClass* clone() const { return new Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vresize_constrained_arrays(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_capacity(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &capacity__Vfuncrtn);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    void __VnoInFunc_post_randomize(Vtb_rng__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_set_compare(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    void __VnoInFunc_size(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_update(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_valid_fifo_size_resize_constrained_array(Vtb_rng__Syms* __restrict vlSymsp);
    void __VnoInFunc_valid_fifo_size_setup_constraint(Vtb_rng__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_uvm_pkg__03a__03auvm_reg_fifo();
};


#endif  // guard
