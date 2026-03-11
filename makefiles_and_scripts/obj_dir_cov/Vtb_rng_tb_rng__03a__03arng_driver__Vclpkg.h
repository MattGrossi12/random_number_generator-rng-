// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rng.h for the primary calling header

#ifndef VERILATED_VTB_RNG_TB_RNG__03A__03ARNG_DRIVER__VCLPKG_H_
#define VERILATED_VTB_RNG_TB_RNG__03A__03ARNG_DRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_rng_tb_rng__03a__03arng_seq_item;
class Vtb_rng_uvm_pkg__03a__03auvm_component;
class Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi65;
class Vtb_rng_uvm_pkg__03a__03auvm_driver__Tz126_TBz126;
class Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper;
class Vtb_rng_uvm_pkg__03a__03auvm_phase;
class Vtb_rng_uvm_pkg__03a__03auvm_seq_item_pull_port__pi77;


class Vtb_rng__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_rng__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg();
    ~Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg();
    void ctor(Vtb_rng__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_rng_tb_rng__03a__03arng_driver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_registry__pi65> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtb_rng_uvm_pkg__03a__03auvm_driver__Tz126_TBz126__Vclpkg.h"

class Vtb_rng__Syms;

class Vtb_rng_tb_rng__03a__03arng_driver : public Vtb_rng_uvm_pkg__03a__03auvm_driver__Tz126_TBz126 {
  public:

    // DESIGN SPECIFIC STATE
    Vtb_rng_rng_if* __PVT__vif;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "tb_rng::rng_driver"; }
    VlClass* clone() const { return new Vtb_rng_tb_rng__03a__03arng_driver(*this); }
    virtual void __VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_accept_number(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ round_id);
  private:
    VlCoroutine __VnoInFunc_accept_number____Vfork_5__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h89849fca__0);
    VlCoroutine __VnoInFunc_accept_number____Vfork_6__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5eef67f4__1);
    VlCoroutine __VnoInFunc_accept_number____Vfork_7__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h89b329dd__2);
  public:
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_drive_idle(Vtb_rng__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_drive_idle____Vfork_1__0(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5eef67f4__0);
    VlCoroutine __VnoInFunc_drive_idle____Vfork_2__0(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h89b329dd__0);
  public:
    VlCoroutine __VnoInFunc_drive_one_use(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_tb_rng__03a__03arng_seq_item> tr);
    virtual void __VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VlCoroutine __VnoInFunc_request_number(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ round_id);
  private:
    VlCoroutine __VnoInFunc_request_number____Vfork_3__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5ef0e5e1__0);
    VlCoroutine __VnoInFunc_request_number____Vfork_4__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h89b329dd__1);
  public:
    VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase);
  private:
    void _ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp);
  public:
    Vtb_rng_tb_rng__03a__03arng_driver() = default;
    void init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> parent);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtb_rng_tb_rng__03a__03arng_driver();
};


#endif  // guard
