// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 359)->__VnoInFunc_get_root(vlProcess, vlSymsp, get__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[17242]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_m_uvm_get_root\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_domain> __VlefCall_0__get_uvm_domain;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> unnamedblk162__DOT__top;
    {
        if ((VlNull{} == this->__PVT__m_inst)) {
            unnamedblk162__DOT__top = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_root, vlProcess, vlSymsp);
            if ((unnamedblk162__DOT__top != this->__PVT__m_inst)) {
                m_uvm_get_root__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[17249]);
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, __VlefCall_0__get_uvm_domain);
            VL_NULL_CHECK(unnamedblk162__DOT__top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 404)->__PVT__m_domain 
                = __VlefCall_0__get_uvm_domain;
            ++(vlSymsp->__Vcoverage[17250]);
        } else {
            ++(vlSymsp->__Vcoverage[17251]);
        }
        m_uvm_get_root__Vfuncrtn = this->__PVT__m_inst;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[17252]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_root"s;
    ++(vlSymsp->__Vcoverage[17226]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_die(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_die\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> l_rs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
    vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 8U;
    this->__VnoInFunc_m_do_pre_abort(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_pre_abort(vlSymsp);
    VL_NULL_CHECK(l_rs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 157)->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0x80000001U);
    vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 9U;
    vlProcess->disableFork();
    VL_FINISH_MT("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 161, "");
    ++(vlSymsp->__Vcoverage[17227]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_finish_on_completion(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_finish_on_completion__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_finish_on_completion\n"); );
    // Body
    get_finish_on_completion__Vfuncrtn = this->__PVT__finish_on_completion;
    ++(vlSymsp->__Vcoverage[17229]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_finish_on_completion(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ f) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_finish_on_completion\n"); );
    // Body
    this->__PVT__finish_on_completion = f;
    ++(vlSymsp->__Vcoverage[17230]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_severity_count;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> unnamedblk1__DOT__srvr;
    if ((phase == vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph)) {
        this->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
        if (this->__PVT__enable_print_topology) {
            this->__VnoInFunc_print_topology(vlProcess, vlSymsp, VlNull{});
            ++(vlSymsp->__Vcoverage[17233]);
        } else {
            ++(vlSymsp->__Vcoverage[17234]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, unnamedblk1__DOT__srvr);
        VL_NULL_CHECK(unnamedblk1__DOT__srvr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 321)->__VnoInFunc_get_severity_count(vlSymsp, 2U, __VlefCall_0__get_severity_count);
        if (VL_LTS_III(32, 0U, __VlefCall_0__get_severity_count)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BUILDERR"s, "stopping due to build errors"s, 0U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[17235]);
        } else {
            ++(vlSymsp->__Vcoverage[17236]);
        }
        ++(vlSymsp->__Vcoverage[17237]);
    } else {
        ++(vlSymsp->__Vcoverage[17238]);
    }
    ++(vlSymsp->__Vcoverage[17239]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component_proxy> p;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_> adapter;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_visitor_> v;
    p = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_component_proxy, vlProcess, vlSymsp, "proxy"s);
    adapter = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_top_down_visitor_adapter_, vlProcess, vlSymsp, "adapter"s);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
    VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 339)->__VnoInFunc_get_component_visitor(vlProcess, vlSymsp, v);
    VL_NULL_CHECK(adapter, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 340)->__VnoInFunc_accept(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root>{this}, v, p, 1U);
    ++(vlSymsp->__Vcoverage[17241]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
    Vtb_rng_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, "__top__"s, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__finish_on_completion = 1U;
    ++(vlSymsp->__Vcoverage[17228]);
    this->__PVT__enable_print_topology = 0U;
    ++(vlSymsp->__Vcoverage[17231]);
    this->__PVT__phase_timeout = 0x0020af59ebef0000ULL;
    ++(vlSymsp->__Vcoverage[17232]);
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_handler> rh;
    {
        /*super.new*/;
        rh = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, "reporter"s);
        this->__VnoInFunc_set_report_handler(vlSymsp, rh);
        if ((VlNull{} != vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_inst)) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_inst, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 378)->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "UVM/ROOT/MULTI"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_inst, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 378)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "UVM/ROOT/MULTI"s, "Attempting to construct multiple roots"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x0000017aU, ""s, 1U);
                ++(vlSymsp->__Vcoverage[17243]);
            } else {
                ++(vlSymsp->__Vcoverage[17244]);
            }
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17246]);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_inst 
            = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, this->__PVT__clp);
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[17247]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_report_header(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_report_header\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__22__Vfuncout;
    __Vtask_get_arg_matches__22__Vfuncout = 0;
    // Body
    std::string __VlefCall_3__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__uvm_revision_string;
    IData/*31:0*/ __VlefCall_0__get_arg_matches;
    VlQueue<std::string> q;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> srvr;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> args;
    {
        q.clear();
        q.atDefault().clear();
        args.clear();
        args.atDefault().clear();
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
        VL_NULL_CHECK(clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 419)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_NO_RELNOTES"s, args, __Vtask_get_arg_matches__22__Vfuncout);
        __VlefCall_0__get_arg_matches = __Vtask_get_arg_matches__22__Vfuncout;
        if ((0U != __VlefCall_0__get_arg_matches)) {
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17254]);
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done) {
            ++(vlSymsp->__Vcoverage[17256]);
        } else {
            q.push_back("\n  ***********       IMPORTANT RELEASE NOTES         ************\n"s);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done = 1U;
            q.push_back("\n  This implementation of the UVM Library deviates from the 1800.2-2017\n"s);
            q.push_back("  standard.  See the DEVIATIONS.md file contained in the release\n"s);
            q.push_back("  for more details.\n"s);
            ++(vlSymsp->__Vcoverage[17255]);
        }
        q.push_back("\n----------------------------------------------------------------\n"s);
        __VlefCall_1__uvm_revision_string = "Accellera:1800.2-2017:UVM:1.0"s;
        ++(vlSymsp->__Vcoverage[279]);
        q.push_back(VL_CONCATN_NNN(__VlefCall_1__uvm_revision_string, "\n"s));
        q.push_back("\n"s);
        q.push_back("All copyright owners for this kit are listed in NOTICE.txt\n"s);
        q.push_back("All Rights Reserved Worldwide\n"s);
        q.push_back("----------------------------------------------------------------\n"s);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done) {
            q.push_back("\n      (Specify +UVM_NO_RELNOTES to turn off this notice)\n"s);
            ++(vlSymsp->__Vcoverage[17259]);
        } else {
            ++(vlSymsp->__Vcoverage[17260]);
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "UVM/RELNOTES"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__Vfunc_m_uvm_string_queue_join__25__Vfuncout = ""s;
            this->__Vfunc_m_uvm_string_queue_join__25__Vfuncout 
                = VL_CVT_PACK_STR_ND(q);
            ++(vlSymsp->__Vcoverage[429]);
            __VlefCall_3__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__25__Vfuncout;
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/RELNOTES"s, 
                                              VL_CVT_PACK_STR_NN(__VlefCall_3__m_uvm_string_queue_join), 0x00000064U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x000001c1U, ""s, 1U);
            ++(vlSymsp->__Vcoverage[17261]);
        } else {
            ++(vlSymsp->__Vcoverage[17262]);
        }
        __Vlabel0: ;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done)))) {
        ++(vlSymsp->__Vcoverage[17257]);
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done) {
        ++(vlSymsp->__Vcoverage[17258]);
    }
    ++(vlSymsp->__Vcoverage[17263]);
}

VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string test_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_4__get_finish_on_completion;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_20> __VDynScope_run_test_0;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> l_rs;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
    CData/*0:0*/ testname_plusarg;
    std::string msg;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> uvm_test_top;
    __VDynScope_run_test_0 = VL_NEW(Vtb_rng_uvm_pkg__03a__03a__VDynScope_20, vlSymsp);
    {
        testname_plusarg = 0U;
        msg = ""s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_pre_run_test(vlSymsp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, factory);
        vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 4U;
        testname_plusarg = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__VnoInFunc_m_init_objections(vlProcess, vlSymsp);
        this->__VnoInFunc_m_do_dump_args(vlProcess, vlSymsp);
        __VlefExpr_0 = VL_VALUEPLUSARGS_INN(64, "UVM_TESTNAME=%s"s, 
                                            test_name);
        if (__VlefExpr_0) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "NO_DPI_TSTNAME"s, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NO_DPI_TSTNAME"s, "UVM_NO_DPI defined--getting UVM_TESTNAME directly, without DPI"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x00000205U, ""s, 1U);
                ++(vlSymsp->__Vcoverage[17264]);
            } else {
                ++(vlSymsp->__Vcoverage[17265]);
            }
            testname_plusarg = 1U;
            ++(vlSymsp->__Vcoverage[17266]);
        } else {
            ++(vlSymsp->__Vcoverage[17267]);
        }
        if ((""s != test_name)) {
            if (Vtb_rng_uvm_pkg__03a__03auvm_component::__PVT__m_children.exists("uvm_test_top"s)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TTINST"s, "An uvm_test_top already exists via a previous call to run_test"s, 0U, ""s, 0U, ""s, 0U);
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                        529);
                ++(vlSymsp->__Vcoverage[17268]);
            } else {
                ++(vlSymsp->__Vcoverage[17269]);
            }
            VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 531)->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, test_name, ""s, "uvm_test_top"s, VlNull{}, uvm_test_top);
            if ((VlNull{} == uvm_test_top)) {
                msg = ((IData)(testname_plusarg) ? 
                       VL_CONCATN_NNN("command line +UVM_TESTNAME="s, test_name)
                        : VL_CONCATN_NNN(VL_CONCATN_NNN("call to run_test("s, test_name), ")"s));
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "INVTST"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Requested test from "s, msg), " not found."s)), 0U, ""s, 0U, ""s, 0U);
                if (testname_plusarg) {
                    ++(vlSymsp->__Vcoverage[17270]);
                }
                if ((1U & (~ (IData)(testname_plusarg)))) {
                    ++(vlSymsp->__Vcoverage[17271]);
                }
                ++(vlSymsp->__Vcoverage[17272]);
            } else {
                ++(vlSymsp->__Vcoverage[17273]);
            }
            ++(vlSymsp->__Vcoverage[17274]);
        } else {
            ++(vlSymsp->__Vcoverage[17275]);
        }
        if ((0U == Vtb_rng_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOCOMP"s, "No components instantiated. You must either instantiate at least one component before calling run_test or use run_test to do so. To run a test using run_test, use +UVM_TESTNAME or supply the test name in the argument to run_test(). Exiting simulation."s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[17277]);
        }
        if ((""s == test_name)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, "Running test ..."s, 0x00000064U, ""s, 0U, ""s, 0U);
            ++(vlSymsp->__Vcoverage[17280]);
        } else {
            VL_NULL_CHECK(uvm_test_top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 555)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            if ((test_name == __VlefCall_2__get_type_name)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, test_name), "..."s)), 0x00000064U, ""s, 0U, ""s, 0U);
                ++(vlSymsp->__Vcoverage[17278]);
            } else {
                VL_NULL_CHECK(uvm_test_top, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 558)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, __VlefCall_3__get_type_name), " (via factory override for test \""s), test_name), "\")..."s)), 0x00000064U, ""s, 0U, ""s, 0U);
                        ++(vlSymsp->__Vcoverage[17279]);
                    }
                }
                this->__VnoInFunc_run_test____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_run_test_0);
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                        568);
                if ((1U & (~ (IData)(this->__PVT__m_phase_all_done)))) {
                    CData/*0:0*/ __VdynTrigger_h9b06b507__0;
                    __VdynTrigger_h9b06b507__0 = 0;
                    __VdynTrigger_h9b06b507__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_h9b06b507__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     vlProcess, 
                                                                     "@([true] uvm_pkg::uvm_root.m_phase_all_done)", 
                                                                     "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                                     570);
                        __VdynTrigger_h9b06b507__0 
                            = this->__PVT__m_phase_all_done;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9b06b507__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 vlProcess, 
                                                                 "@([true] uvm_pkg::uvm_root.m_phase_all_done)", 
                                                                 "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                                 570);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 6U;
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_run_test_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 575)
                              ->__PVT__phase_runner_proc, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 575)
                                                                     ->__VnoInFunc_kill(vlSymsp);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_post_run_test(vlSymsp);
                VL_NULL_CHECK(l_rs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 581)
                                                                     ->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0x80000001U);
                vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 7U;
                this->__VnoInFunc_get_finish_on_completion(vlSymsp, __VlefCall_4__get_finish_on_completion);
                if (VL_UNLIKELY((__VlefCall_4__get_finish_on_completion))) {
                    vlProcess->disableFork();
                    VL_FINISH_MT("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 585, "");
                    ++(vlSymsp->__Vcoverage[17281]);
                } else {
                    ++(vlSymsp->__Vcoverage[17282]);
                }
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17283]);
            co_return;
        }

        VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_20> __VDynScope_run_test_0) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0\n"); );
            // Locals
            VlClassRef<Vtb_rng_uvm_pkg__03a__03a__VDynScope_20> __Vtask___VforkTask_0__43____VDynScope_run_test_0;
            VlClassRef<Vtb_rng_std__03a__03aprocess> __Vtask___VforkTask_0__43____VlefCall_0__self;
            VlClassRef<Vtb_rng_std__03a__03aprocess> __Vfunc_self__44__Vfuncout;
            // Body
            VL_KEEP_THIS;
            __Vtask___VforkTask_0__43____VDynScope_run_test_0 
                = __VDynScope_run_test_0;
            co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                                    vlProcess, 
                                                    "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                    562);
            vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__44__Vfuncout);
            __Vtask___VforkTask_0__43____VlefCall_0__self 
                = __Vfunc_self__44__Vfuncout;
            VL_NULL_CHECK(__Vtask___VforkTask_0__43____VDynScope_run_test_0, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 564)
                                                                     ->__PVT__phase_runner_proc 
                = __Vtask___VforkTask_0__43____VlefCall_0__self;
            co_await vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__VnoInFunc_m_run_phases(vlProcess, vlSymsp);
            vlProcess->state(VlProcess::FINISHED);
            co_return;
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all\n"); );
            // Body
            if ((VlNull{} == comp)) {
                comp = VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root>{this};
                ++(vlSymsp->__Vcoverage[17284]);
            } else {
                ++(vlSymsp->__Vcoverage[17285]);
            }
            this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, comp);
            ++(vlSymsp->__Vcoverage[17286]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_find(Vtb_rng__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_find\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string __VlefCall_0__get_full_name;
            VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> comp_list;
            {
                comp_list.clear();
                this->__VnoInFunc_find_all(vlProcess, vlSymsp, comp_match, comp_list, VlNull{});
                if (VL_LTS_III(32, 1U, comp_list.size())) {
                    VL_NULL_CHECK(comp_list.at(0U), "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 614)
                                                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MMATCH"s, VL_SFORMATF_N_NX("Found %0d components matching '%@'. Returning first match, %0@.",0,
                                                                                32,
                                                                                comp_list.size(),
                                                                                -1,
                                                                                &(comp_match),
                                                                                -1,
                                                                                &(__VlefCall_0__get_full_name)) , 0U, ""s, 0U, ""s, 0U);
                    ++(vlSymsp->__Vcoverage[17287]);
                } else {
                    ++(vlSymsp->__Vcoverage[17288]);
                }
                if ((0U == comp_list.size())) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "CMPNFD"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component matching '"s, comp_match), "' was not found in the list of uvm_components"s)), 0U, ""s, 0U, ""s, 0U);
                    find__Vfuncrtn = VlNull{};
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17290]);
                }
                find__Vfuncrtn = comp_list.at(0U);
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17291]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_printer> printer) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology\n"); );
            // Body
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            {
                if ((0U == Vtb_rng_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "EMTCOMP"s, "print_topology - No UVM components to print."s, 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17293]);
                }
                if ((VlNull{} == printer)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, printer);
                    ++(vlSymsp->__Vcoverage[17294]);
                } else {
                    ++(vlSymsp->__Vcoverage[17295]);
                }
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "UVMTOP"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVMTOP"s, "UVM testbench topology:"s, 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x00000280U, ""s, 1U);
                    ++(vlSymsp->__Vcoverage[17296]);
                } else {
                    ++(vlSymsp->__Vcoverage[17297]);
                }
                this->__VnoInFunc_print(vlProcess, vlSymsp, printer);
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17298]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout\n"); );
            // Body
            {
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable) {
                    ++(vlSymsp->__Vcoverage[17300]);
                } else {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NOTIMOUTOVR"s, VL_SFORMATF_N_NX("The global timeout setting of %0# is not overridable to %0# due to a previous setting.",0,
                                                                                64,
                                                                                this->__PVT__phase_timeout,
                                                                                64,
                                                                                timeout) , 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable 
                    = overridable;
                this->__PVT__phase_timeout = timeout;
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17301]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> comp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_first_child__62__Vfuncout;
            __Vtask_get_first_child__62__Vfuncout = 0;
            IData/*31:0*/ __Vtask_get_next_child__65__Vfuncout;
            __Vtask_get_next_child__65__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_is_match__67____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__67____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__69__Vfuncout;
            __Vfunc_uvm_re_match__69__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__69____Vincrement1;
            __Vfunc_uvm_re_match__69____Vincrement1 = 0;
            // Body
            std::string __VlefCall_5__get_name;
            CData/*0:0*/ __VlefCall_4__uvm_is_match;
            std::string __VlefCall_3__get_full_name;
            IData/*31:0*/ __VlefCall_2__get_next_child;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> __VlefCall_1__get_child;
            IData/*31:0*/ __VlefCall_0__get_first_child;
            std::string name;
            name = ""s;
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 670)
                                                                     ->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__62__Vfuncout);
            __VlefCall_0__get_first_child = __Vtask_get_first_child__62__Vfuncout;
            if ((0U != __VlefCall_0__get_first_child)) {
                while (true) {
                    VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 672)
                                                                     ->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_1__get_child);
                    this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, __VlefCall_1__get_child);
                    ++(vlSymsp->__Vcoverage[17302]);
                    VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 674)
                                                                     ->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__65__Vfuncout);
                    __VlefCall_2__get_next_child = __Vtask_get_next_child__65__Vfuncout;
                    if (!((0U != __VlefCall_2__get_next_child))) break;
                    ++(vlSymsp->__Vcoverage[17303]);
                }
                ++(vlSymsp->__Vcoverage[17304]);
            } else {
                ++(vlSymsp->__Vcoverage[17305]);
            }
            VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 675)
                                                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__Vfunc_uvm_is_match__67__str = VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name);
            this->__Vfunc_uvm_is_match__67__expr = comp_match;
            this->__Vfunc_uvm_glob_to_re__68__glob 
                = this->__Vfunc_uvm_is_match__67__expr;
            this->__Vfunc_uvm_glob_to_re__68__Vfuncout 
                = this->__Vfunc_uvm_glob_to_re__68__glob;
            ++(vlSymsp->__Vcoverage[278]);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                = this->__Vfunc_uvm_glob_to_re__68__Vfuncout;
            this->__Vfunc_uvm_re_match__69__str = this->__Vfunc_uvm_is_match__67__str;
            this->__Vfunc_uvm_re_match__69__re = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
            __Vfunc_uvm_re_match__69____Vincrement1 = 0U;
            {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__69__re))) {
                    __Vfunc_uvm_re_match__69__Vfuncout = 0U;
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[250]);
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,0U))) {
                    this->__Vfunc_uvm_re_match__69__re 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__69__re,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__69__re) 
                                       - (IData)(1U)));
                    ++(vlSymsp->__Vcoverage[251]);
                } else {
                    ++(vlSymsp->__Vcoverage[252]);
                }
                while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__69__str)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__69__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__69__Vfuncout = 1U;
                        goto __Vlabel0;
                    } else {
                        ++(vlSymsp->__Vcoverage[257]);
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    ++(vlSymsp->__Vcoverage[261]);
                }
                while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__69__str))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__69__re))) {
                            __Vfunc_uvm_re_match__69__Vfuncout = 0U;
                            goto __Vlabel0;
                        } else {
                            ++(vlSymsp->__Vcoverage[263]);
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        ++(vlSymsp->__Vcoverage[269]);
                    } else {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              == VL_GETC_N(this->__Vfunc_uvm_re_match__69__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            ++(vlSymsp->__Vcoverage[264]);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__69____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__69____Vincrement1;
                            ++(vlSymsp->__Vcoverage[265]);
                        }
                        if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            ++(vlSymsp->__Vcoverage[266]);
                        }
                        if ((VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                             == VL_GETC_N(this->__Vfunc_uvm_re_match__69__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                            ++(vlSymsp->__Vcoverage[267]);
                        }
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__69__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            ++(vlSymsp->__Vcoverage[268]);
                        }
                    }
                    ++(vlSymsp->__Vcoverage[270]);
                }
                while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__69__re)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    ++(vlSymsp->__Vcoverage[274]);
                }
                __Vfunc_uvm_re_match__69__Vfuncout 
                    = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__69__re))
                        ? 0U : 1U);
                __Vlabel0: ;
            }
            if (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                  != VL_LEN_IN(this->__Vfunc_uvm_re_match__69__str)) 
                 & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[253]);
            }
            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[254]);
            }
            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__69__str))) {
                ++(vlSymsp->__Vcoverage[255]);
            }
            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                  != VL_GETC_N(this->__Vfunc_uvm_re_match__69__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[258]);
            }
            if ((0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[259]);
            }
            if ((VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                 == VL_GETC_N(this->__Vfunc_uvm_re_match__69__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s))) {
                ++(vlSymsp->__Vcoverage[260]);
            }
            if ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                            VL_LEN_IN(this->__Vfunc_uvm_re_match__69__re)) 
                 & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                ++(vlSymsp->__Vcoverage[271]);
            }
            if ((0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__69__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                ++(vlSymsp->__Vcoverage[272]);
            }
            if (VL_GTES_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                            VL_LEN_IN(this->__Vfunc_uvm_re_match__69__re))) {
                ++(vlSymsp->__Vcoverage[273]);
            }
            ++(vlSymsp->__Vcoverage[277]);
            __Vfunc_uvm_is_match__67____VlefCall_0__uvm_re_match 
                = __Vfunc_uvm_re_match__69__Vfuncout;
            __VlefCall_4__uvm_is_match = (0U == __Vfunc_uvm_is_match__67____VlefCall_0__uvm_re_match);
            ++(vlSymsp->__Vcoverage[457]);
            if (__VlefCall_4__uvm_is_match) {
                VL_NULL_CHECK(comp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 676)
                                                                     ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                __VlefCall_4__uvm_is_match = (""s != __VlefCall_5__get_name);
            }
            if (__VlefCall_4__uvm_is_match) {
                comps.push_back(comp);
                ++(vlSymsp->__Vcoverage[17306]);
            } else {
                ++(vlSymsp->__Vcoverage[17307]);
            }
            ++(vlSymsp->__Vcoverage[17308]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child\n"); );
            // Body
            CData/*0:0*/ __VlefCall_0__m_add_child;
            m_add_child__Vfuncrtn = 0U;
            Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(vlProcess, vlSymsp, child, __VlefCall_0__m_add_child);
            m_add_child__Vfuncrtn = __VlefCall_0__m_add_child;
            ++(vlSymsp->__Vcoverage[17311]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase\n"); );
            // Body
            Vtb_rng_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
            this->__VnoInFunc_m_set_cl_msg_args(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_verbosity_settings(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_timeout_settings(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_factory_settings(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_config_settings(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_max_quit_settings(vlProcess, vlSymsp);
            ++(vlSymsp->__Vcoverage[17312]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__79__Vfuncout;
            __Vtask_get_arg_values__79__Vfuncout = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__80__sep;
            __Vtask_uvm_split_string__80__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__80__s;
            __Vtask_uvm_split_string__80__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__80__e;
            __Vtask_uvm_split_string__80__e = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__82__verb_enum;
            __Vtask_m_convert_verb__82__verb_enum = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            // Body
            CData/*0:0*/ __VlefCall_0__m_convert_verb;
            IData/*31:0*/ unnamedblk163__DOT__i;
            VlQueue<std::string> set_verbosity_settings;
            VlQueue<std::string> split_vals;
            set_verbosity_settings.clear();
            set_verbosity_settings.atDefault().clear();
            split_vals.clear();
            split_vals.atDefault().clear();
            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 728)
                                                                     ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, set_verbosity_settings, __Vtask_get_arg_values__79__Vfuncout);
            unnamedblk163__DOT__i = 0U;
            unnamedblk163__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk163__DOT__i, set_verbosity_settings.size())) {
                __Vtask_uvm_split_string__80__sep = 0x2cU;
                this->__Vtask_uvm_split_string__80__str 
                    = VL_CVT_PACK_STR_NN(set_verbosity_settings.at(unnamedblk163__DOT__i));
                __Vtask_uvm_split_string__80__s = 0U;
                __Vtask_uvm_split_string__80__e = 0U;
                split_vals.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__80__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__80__str))) {
                    __Vtask_uvm_split_string__80__s 
                        = __Vtask_uvm_split_string__80__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__80__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__80__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__80__str,__Vtask_uvm_split_string__80__e) 
                                 == (IData)(__Vtask_uvm_split_string__80__sep))) {
                                goto __Vlabel0;
                            } else {
                                ++(vlSymsp->__Vcoverage[477]);
                            }
                            __Vtask_uvm_split_string__80__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__80__e);
                            ++(vlSymsp->__Vcoverage[478]);
                        }
                        __Vlabel0: ;
                    }
                    if ((__Vtask_uvm_split_string__80__s 
                         != __Vtask_uvm_split_string__80__e)) {
                        split_vals.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__80__str,__Vtask_uvm_split_string__80__s,
                                                         (__Vtask_uvm_split_string__80__e 
                                                          - (IData)(1U))));
                        ++(vlSymsp->__Vcoverage[479]);
                    } else {
                        ++(vlSymsp->__Vcoverage[480]);
                    }
                    __Vtask_uvm_split_string__80__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__80__e);
                    ++(vlSymsp->__Vcoverage[481]);
                }
                ++(vlSymsp->__Vcoverage[482]);
                if ((VL_GTS_III(32, 4U, split_vals.size()) 
                     | VL_LTS_III(32, 5U, split_vals.size()))) {
                    __Vtemp_1 = set_verbosity_settings.at(unnamedblk163__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Invalid number of arguments found on the command line for setting '+uvm_set_verbosity=%@'.  Setting ignored.",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                    ++(vlSymsp->__Vcoverage[17313]);
                } else {
                    ++(vlSymsp->__Vcoverage[17314]);
                }
                VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 738)
                                                                     ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_vals.at(2U)), __Vtask_m_convert_verb__82__verb_enum, __VlefCall_0__m_convert_verb);
                if (__VlefCall_0__m_convert_verb) {
                    ++(vlSymsp->__Vcoverage[17319]);
                } else {
                    __Vtemp_2 = set_verbosity_settings.at(unnamedblk163__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDVERB"s, VL_SFORMATF_N_NX("Invalid verbosity found on the command line for setting '%@'.",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, ""s, 0U, ""s, 0U);
                    ++(vlSymsp->__Vcoverage[17318]);
                }
                unnamedblk163__DOT__i = ((IData)(1U) 
                                         + unnamedblk163__DOT__i);
                ++(vlSymsp->__Vcoverage[17320]);
            }
            if (VL_LTS_III(32, 5U, split_vals.size())) {
                ++(vlSymsp->__Vcoverage[17315]);
            }
            if (VL_GTS_III(32, 4U, split_vals.size())) {
                ++(vlSymsp->__Vcoverage[17316]);
            }
            if ((VL_LTES_III(32, 4U, split_vals.size()) 
                 & VL_GTES_III(32, 5U, split_vals.size()))) {
                ++(vlSymsp->__Vcoverage[17317]);
            }
            ++(vlSymsp->__Vcoverage[17321]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__84__Vfuncout;
            __Vtask_get_arg_values__84__Vfuncout = 0;
            // Body
            std::string unnamedblk164__DOT__timeout_list;
            std::string unnamedblk164__DOT__sep;
            IData/*31:0*/ unnamedblk164__DOT__unnamedblk165__DOT__i;
            VlQueue<std::string> timeout_settings;
            std::string timeout;
            IData/*31:0*/ timeout_count;
            QData/*63:0*/ timeout_int;
            std::string override_spec;
            timeout_settings.clear();
            timeout_settings.atDefault().clear();
            timeout = ""s;
            timeout_count = 0U;
            timeout_int = 0;
            override_spec = ""s;
            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 757)
                                                                     ->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TIMEOUT="s, timeout_settings, __Vtask_get_arg_values__84__Vfuncout);
            timeout_count = __Vtask_get_arg_values__84__Vfuncout;
            if ((0U != timeout_count)) {
                timeout = timeout_settings.at(0U);
                if (VL_LTS_III(32, 1U, timeout_count)) {
                    unnamedblk164__DOT__timeout_list = ""s;
                    unnamedblk164__DOT__sep = ""s;
                    unnamedblk164__DOT__unnamedblk165__DOT__i = 0U;
                    unnamedblk164__DOT__unnamedblk165__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk164__DOT__unnamedblk165__DOT__i, timeout_settings.size())) {
                        if ((0U != unnamedblk164__DOT__unnamedblk165__DOT__i)) {
                            unnamedblk164__DOT__sep = "; "s;
                            ++(vlSymsp->__Vcoverage[17322]);
                        } else {
                            ++(vlSymsp->__Vcoverage[17323]);
                        }
                        unnamedblk164__DOT__timeout_list 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk164__DOT__timeout_list, unnamedblk164__DOT__sep), timeout_settings.at(unnamedblk164__DOT__unnamedblk165__DOT__i));
                        unnamedblk164__DOT__unnamedblk165__DOT__i 
                            = ((IData)(1U) + unnamedblk164__DOT__unnamedblk165__DOT__i);
                        ++(vlSymsp->__Vcoverage[17324]);
                    }
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTIMOUT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%@' will be used.  Provided list: %@.",0,
                                                                                32,
                                                                                timeout_count,
                                                                                -1,
                                                                                &(timeout),
                                                                                -1,
                                                                                &(unnamedblk164__DOT__timeout_list)) , 0U, ""s, 0U, ""s, 0U);
                    ++(vlSymsp->__Vcoverage[17325]);
                } else {
                    ++(vlSymsp->__Vcoverage[17326]);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TIMOUTSET"s, VL_SFORMATF_N_NX("'+UVM_TIMEOUT=%@' provided on the command line is being applied.",0,
                                                                                -1,
                                                                                &(timeout)) , 0U, ""s, 0U, ""s, 0U);
                std::ignore = VL_SSCANF_INNX(64,timeout,"%#,%s",0,
                                             64,&(timeout_int),
                                             -1,&(override_spec)) ;
                if (("YES"s == override_spec)) {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
                    ++(vlSymsp->__Vcoverage[17327]);
                } else if (("NO"s == override_spec)) {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 0U);
                    ++(vlSymsp->__Vcoverage[17328]);
                } else {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
                    ++(vlSymsp->__Vcoverage[17329]);
                }
                ++(vlSymsp->__Vcoverage[17331]);
            }
            ++(vlSymsp->__Vcoverage[17332]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_matches__90__Vfuncout;
            __Vtask_get_arg_matches__90__Vfuncout = 0;
            IData/*31:0*/ __Vtask_get_arg_matches__92__Vfuncout;
            __Vtask_get_arg_matches__92__Vfuncout = 0;
            // Body
            IData/*31:0*/ unnamedblk166__DOT__i;
            unnamedblk166__DOT__i = 0;
            IData/*31:0*/ unnamedblk167__DOT__i;
            unnamedblk167__DOT__i = 0;
            VlQueue<std::string> args;
            args.clear();
            args.atDefault().clear();
            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 792)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/"s, args, __Vtask_get_arg_matches__90__Vfuncout);
            unnamedblk166__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk166__DOT__i, args.size())) {
                this->__VnoInFunc_m_process_inst_override(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_SUBSTR_N(args.at(unnamedblk166__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk166__DOT__i)) 
                                                                                - (IData)(1U)))));
                unnamedblk166__DOT__i = ((IData)(1U) 
                                         + unnamedblk166__DOT__i);
                ++(vlSymsp->__Vcoverage[17333]);
            }
            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 796)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/"s, args, __Vtask_get_arg_matches__92__Vfuncout);
            unnamedblk167__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk167__DOT__i, args.size())) {
                this->__VnoInFunc_m_process_type_override(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_SUBSTR_N(args.at(unnamedblk167__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk167__DOT__i)) 
                                                                                - (IData)(1U)))));
                unnamedblk167__DOT__i = ((IData)(1U) 
                                         + unnamedblk167__DOT__i);
                ++(vlSymsp->__Vcoverage[17334]);
            }
            ++(vlSymsp->__Vcoverage[17335]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string ovr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override\n"); );
            // Locals
            CData/*7:0*/ __Vtask_uvm_split_string__96__sep;
            __Vtask_uvm_split_string__96__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__96__s;
            __Vtask_uvm_split_string__96__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__96__e;
            __Vtask_uvm_split_string__96__e = 0;
            // Body
            VlQueue<std::string> split_val;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
            {
                split_val.clear();
                split_val.atDefault().clear();
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
                VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 809)
                                                                     ->__VnoInFunc_get_factory(vlSymsp, factory);
                __Vtask_uvm_split_string__96__sep = 0x2cU;
                this->__Vtask_uvm_split_string__96__str 
                    = ovr;
                __Vtask_uvm_split_string__96__s = 0U;
                __Vtask_uvm_split_string__96__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__96__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__96__str))) {
                    __Vtask_uvm_split_string__96__s 
                        = __Vtask_uvm_split_string__96__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__96__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__96__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__96__str,__Vtask_uvm_split_string__96__e) 
                                 == (IData)(__Vtask_uvm_split_string__96__sep))) {
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[477]);
                            }
                            __Vtask_uvm_split_string__96__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__96__e);
                            ++(vlSymsp->__Vcoverage[478]);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__96__s 
                         != __Vtask_uvm_split_string__96__e)) {
                        split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__96__str,__Vtask_uvm_split_string__96__s,
                                                        (__Vtask_uvm_split_string__96__e 
                                                         - (IData)(1U))));
                        ++(vlSymsp->__Vcoverage[479]);
                    } else {
                        ++(vlSymsp->__Vcoverage[480]);
                    }
                    __Vtask_uvm_split_string__96__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__96__e);
                    ++(vlSymsp->__Vcoverage[481]);
                }
                ++(vlSymsp->__Vcoverage[482]);
                if ((3U != split_val.size())) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_inst_override="s, ovr), ", setting must specify <requested_type>,<override_type>,<instance_path>"s)), 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17337]);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "INSTOVR"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN("Applying instance override from the command line: +uvm_set_inst_override="s, ovr)), 0U, ""s, 0U, ""s, 0U);
                VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 820)
                                                                     ->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
                __Vlabel0: ;
            }
            ++(vlSymsp->__Vcoverage[17338]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string ovr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override\n"); );
            // Locals
            CData/*7:0*/ __Vtask_uvm_split_string__102__sep;
            __Vtask_uvm_split_string__102__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__102__s;
            __Vtask_uvm_split_string__102__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__102__e;
            __Vtask_uvm_split_string__102__e = 0;
            // Body
            VlQueue<std::string> split_val;
            IData/*31:0*/ replace;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> factory;
            {
                split_val.clear();
                split_val.atDefault().clear();
                replace = 1U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
                VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 831)
                                                                     ->__VnoInFunc_get_factory(vlSymsp, factory);
                __Vtask_uvm_split_string__102__sep = 0x2cU;
                this->__Vtask_uvm_split_string__102__str 
                    = ovr;
                __Vtask_uvm_split_string__102__s = 0U;
                __Vtask_uvm_split_string__102__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__102__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__102__str))) {
                    __Vtask_uvm_split_string__102__s 
                        = __Vtask_uvm_split_string__102__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__102__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__102__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__102__str,__Vtask_uvm_split_string__102__e) 
                                 == (IData)(__Vtask_uvm_split_string__102__sep))) {
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[477]);
                            }
                            __Vtask_uvm_split_string__102__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__102__e);
                            ++(vlSymsp->__Vcoverage[478]);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__102__s 
                         != __Vtask_uvm_split_string__102__e)) {
                        split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__102__str,__Vtask_uvm_split_string__102__s,
                                                        (__Vtask_uvm_split_string__102__e 
                                                         - (IData)(1U))));
                        ++(vlSymsp->__Vcoverage[479]);
                    } else {
                        ++(vlSymsp->__Vcoverage[480]);
                    }
                    __Vtask_uvm_split_string__102__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__102__e);
                    ++(vlSymsp->__Vcoverage[481]);
                }
                ++(vlSymsp->__Vcoverage[482]);
                if ((VL_LTS_III(32, 3U, split_val.size()) 
                     | VL_GTS_III(32, 2U, split_val.size()))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_type_override="s, ovr), ", setting must specify <requested_type>,<override_type>[,<replace>]"s)), 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                } else {
                    ++(vlSymsp->__Vcoverage[17340]);
                }
                if ((3U == split_val.size())) {
                    if (("0"s == split_val.at(2U))) {
                        replace = 0U;
                        ++(vlSymsp->__Vcoverage[17346]);
                    } else if (("1"s == split_val.at(2U))) {
                        replace = 1U;
                        ++(vlSymsp->__Vcoverage[17344]);
                    } else {
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                           VL_CVT_PACK_STR_NN(
                                                                              VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid replace arg for +uvm_set_type_override="s, ovr), " value must be 0 or 1"s)), 0U, ""s, 0U, ""s, 0U);
                        goto __Vlabel0;
                    }
                    ++(vlSymsp->__Vcoverage[17347]);
                } else {
                    ++(vlSymsp->__Vcoverage[17348]);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN("Applying type override from the command line: +uvm_set_type_override="s, ovr)), 0U, ""s, 0U, ""s, 0U);
                VL_NULL_CHECK(factory, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 852)
                                                                     ->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                (1U 
                                                                                & replace));
                __Vlabel0: ;
            }
            if (VL_GTS_III(32, 2U, split_val.size())) {
                ++(vlSymsp->__Vcoverage[17341]);
            }
            if (VL_LTS_III(32, 3U, split_val.size())) {
                ++(vlSymsp->__Vcoverage[17342]);
            }
            if ((VL_GTES_III(32, 3U, split_val.size()) 
                 & VL_LTES_III(32, 2U, split_val.size()))) {
                ++(vlSymsp->__Vcoverage[17343]);
            }
            ++(vlSymsp->__Vcoverage[17349]);
        }

        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int) {
            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config\n"); );
            // Locals
            CData/*7:0*/ __Vtask_uvm_split_string__109__sep;
            __Vtask_uvm_split_string__109__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__109__s;
            __Vtask_uvm_split_string__109__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__109__e;
            __Vtask_uvm_split_string__109__e = 0;
            // Body
            std::string unnamedblk168__DOT__base;
            std::string unnamedblk168__DOT__extval;
            VlWide<128>/*4095:0*/ v;
            VlQueue<std::string> split_val;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> m_uvm_top;
            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
            {
                VL_ZERO_W(4096, v);
                split_val.clear();
                split_val.atDefault().clear();
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
                VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 865)
                                                                     ->__VnoInFunc_get_root(vlProcess, vlSymsp, m_uvm_top);
                __Vtask_uvm_split_string__109__sep = 0x2cU;
                this->__Vtask_uvm_split_string__109__str 
                    = cfg;
                __Vtask_uvm_split_string__109__s = 0U;
                __Vtask_uvm_split_string__109__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__109__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__109__str))) {
                    __Vtask_uvm_split_string__109__s 
                        = __Vtask_uvm_split_string__109__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__109__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__109__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__109__str,__Vtask_uvm_split_string__109__e) 
                                 == (IData)(__Vtask_uvm_split_string__109__sep))) {
                                goto __Vlabel1;
                            } else {
                                ++(vlSymsp->__Vcoverage[477]);
                            }
                            __Vtask_uvm_split_string__109__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__109__e);
                            ++(vlSymsp->__Vcoverage[478]);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__109__s 
                         != __Vtask_uvm_split_string__109__e)) {
                        split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__109__str,__Vtask_uvm_split_string__109__s,
                                                        (__Vtask_uvm_split_string__109__e 
                                                         - (IData)(1U))));
                        ++(vlSymsp->__Vcoverage[479]);
                    } else {
                        ++(vlSymsp->__Vcoverage[480]);
                    }
                    __Vtask_uvm_split_string__109__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__109__e);
                    ++(vlSymsp->__Vcoverage[481]);
                }
                ++(vlSymsp->__Vcoverage[482]);
                if ((1U == split_val.size())) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing field and value: component is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                goto __Vlabel0;
                            } else {
                                ++(vlSymsp->__Vcoverage[17351]);
                            }
                            if ((2U == split_val.size())) {
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                   VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing value: component is \""s), split_val.at(0U)), "\"  field is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                    goto __Vlabel0;
                                                } else {
                                                    ++(vlSymsp->__Vcoverage[17353]);
                                                }
                                                if (
                                                    VL_LTS_III(32, 3U, split_val.size())) {
                                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_config command\"%@\" : expected only 3 fields (component, field and value).",0,
                                                                                -1,
                                                                                &(cfg)) , 0U, ""s, 0U, ""s, 0U);
                                                    goto __Vlabel0;
                                                } else {
                                                    ++(vlSymsp->__Vcoverage[17355]);
                                                }
                                                if (is_int) {
                                                    if (
                                                        VL_LTS_III(32, 2U, 
                                                                   VL_LEN_IN(split_val.at(2U)))) {
                                                        unnamedblk168__DOT__base = ""s;
                                                        unnamedblk168__DOT__extval = ""s;
                                                        unnamedblk168__DOT__base 
                                                            = 
                                                            VL_SUBSTR_N(split_val.at(2U),0U,1U);
                                                        unnamedblk168__DOT__extval 
                                                            = 
                                                            VL_SUBSTR_N(split_val.at(2U),2U,
                                                                        (VL_LEN_IN(split_val.at(2U)) 
                                                                         - (IData)(1U)));
                                                        if (
                                                            ("'b"s 
                                                             == unnamedblk168__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk168__DOT__extval, 2));
                                                            ++(vlSymsp->__Vcoverage[17356]);
                                                        } else if (
                                                                   ("0b"s 
                                                                    == unnamedblk168__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk168__DOT__extval, 2));
                                                            ++(vlSymsp->__Vcoverage[17357]);
                                                        } else if (
                                                                   ("'o"s 
                                                                    == unnamedblk168__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk168__DOT__extval, 8));
                                                            ++(vlSymsp->__Vcoverage[17358]);
                                                        } else if (
                                                                   ("'d"s 
                                                                    == unnamedblk168__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk168__DOT__extval, 10));
                                                            ++(vlSymsp->__Vcoverage[17359]);
                                                        } else if (
                                                                   ("'h"s 
                                                                    == unnamedblk168__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk168__DOT__extval, 16));
                                                            ++(vlSymsp->__Vcoverage[17360]);
                                                        } else if (
                                                                   ("'x"s 
                                                                    == unnamedblk168__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk168__DOT__extval, 16));
                                                            ++(vlSymsp->__Vcoverage[17361]);
                                                        } else if (
                                                                   ("0x"s 
                                                                    == unnamedblk168__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk168__DOT__extval, 16));
                                                            ++(vlSymsp->__Vcoverage[17362]);
                                                        } else {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(split_val.at(2U), 10));
                                                            ++(vlSymsp->__Vcoverage[17363]);
                                                        }
                                                        ++(vlSymsp->__Vcoverage[17364]);
                                                    } else {
                                                        VL_EXTENDS_WI(4096,32, v, 
                                                                      VL_ATOI_N(split_val.at(2U), 10));
                                                        ++(vlSymsp->__Vcoverage[17365]);
                                                    }
                                                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_int="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), v);
                                                    ++(vlSymsp->__Vcoverage[17366]);
                                                } else {
                                                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_string="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz2__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
                                                    ++(vlSymsp->__Vcoverage[17367]);
                                                }
                                                __Vlabel0: ;
                                            }
                                            ++(vlSymsp->__Vcoverage[17368]);
                                        }

                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string cfg) {
                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_default_sequence\n"); );
                                            // Locals
                                            CData/*7:0*/ __Vtask_uvm_split_string__120__sep;
                                            __Vtask_uvm_split_string__120__sep = 0;
                                            IData/*31:0*/ __Vtask_uvm_split_string__120__s;
                                            __Vtask_uvm_split_string__120__s = 0;
                                            IData/*31:0*/ __Vtask_uvm_split_string__120__e;
                                            __Vtask_uvm_split_string__120__e = 0;
                                            std::string __Vtemp_1;
                                            // Body
                                            VlQueue<std::string> split_val;
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_coreservice_t> cs;
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root> m_uvm_top;
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_factory> f;
                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> w;
                                            {
                                                split_val.clear();
                                                split_val.atDefault().clear();
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, cs);
                                                VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 922)
                                                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, m_uvm_top);
                                                VL_NULL_CHECK(cs, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 923)
                                                                                ->__VnoInFunc_get_factory(vlSymsp, f);
                                                __Vtask_uvm_split_string__120__sep = 0x2cU;
                                                this->__Vtask_uvm_split_string__120__str 
                                                    = cfg;
                                                __Vtask_uvm_split_string__120__s = 0U;
                                                __Vtask_uvm_split_string__120__e = 0U;
                                                split_val.clear();
                                                while (
                                                       VL_LTS_III(32, __Vtask_uvm_split_string__120__e, 
                                                                  VL_LEN_IN(this->__Vtask_uvm_split_string__120__str))) {
                                                    __Vtask_uvm_split_string__120__s 
                                                        = __Vtask_uvm_split_string__120__e;
                                                    {
                                                        while (
                                                               VL_LTS_III(32, __Vtask_uvm_split_string__120__e, 
                                                                          VL_LEN_IN(this->__Vtask_uvm_split_string__120__str))) {
                                                            if (
                                                                (VL_GETC_N(this->__Vtask_uvm_split_string__120__str,__Vtask_uvm_split_string__120__e) 
                                                                 == (IData)(__Vtask_uvm_split_string__120__sep))) {
                                                                goto __Vlabel1;
                                                            } else {
                                                                ++(vlSymsp->__Vcoverage[477]);
                                                            }
                                                            __Vtask_uvm_split_string__120__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + __Vtask_uvm_split_string__120__e);
                                                            ++(vlSymsp->__Vcoverage[478]);
                                                        }
                                                        __Vlabel1: ;
                                                    }
                                                    if (
                                                        (__Vtask_uvm_split_string__120__s 
                                                         != __Vtask_uvm_split_string__120__e)) {
                                                        split_val.push_back(
                                                                            VL_SUBSTR_N(this->__Vtask_uvm_split_string__120__str,__Vtask_uvm_split_string__120__s,
                                                                                (__Vtask_uvm_split_string__120__e 
                                                                                - (IData)(1U))));
                                                        ++(vlSymsp->__Vcoverage[479]);
                                                    } else {
                                                        ++(vlSymsp->__Vcoverage[480]);
                                                    }
                                                    __Vtask_uvm_split_string__120__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + __Vtask_uvm_split_string__120__e);
                                                    ++(vlSymsp->__Vcoverage[481]);
                                                }
                                                ++(vlSymsp->__Vcoverage[482]);
                                                if (
                                                    (1U 
                                                     == split_val.size())) {
                                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_default_sequence command\""s, cfg), "\" missing phase and type: sequencer is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                                goto __Vlabel0;
                                                            } else {
                                                                ++(vlSymsp->__Vcoverage[17370]);
                                                            }
                                                            if (
                                                                (2U 
                                                                 == split_val.size())) {
                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_default_sequence command\""s, cfg), "\" missing type: sequencer is \""s), split_val.at(0U)), "\"  phase is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                                                goto __Vlabel0;
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17372]);
                                                                                }
                                                                                if (
                                                                                VL_LTS_III(32, 3U, split_val.size())) {
                                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_default_sequence command\"%@\" : expected only 3 fields (sequencer, phase and type).",0,
                                                                                -1,
                                                                                &(cfg)) , 0U, ""s, 0U, ""s, 0U);
                                                                                goto __Vlabel0;
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17374]);
                                                                                }
                                                                                VL_NULL_CHECK(f, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 945)
                                                                                ->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)), w);
                                                                                if (
                                                                                (VlNull{} 
                                                                                == w)) {
                                                                                __Vtemp_1 
                                                                                = split_val.at(2U);
                                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid type '%@' provided to +uvm_set_default_sequence",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                                                                                } else {
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Setting default sequence from the command line: +uvm_set_default_sequence="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz12__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_root>{this}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(split_val.at(0U), "."s), split_val.at(1U))), "default_sequence"s, w);
                                                                                ++(vlSymsp->__Vcoverage[17376]);
                                                                                }
                                                                                __Vlabel0: ;
                                                                            }
                                                                            ++(vlSymsp->__Vcoverage[17377]);
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__128__Vfuncout;
                                                                            __Vtask_get_arg_matches__128__Vfuncout = 0;
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__130__Vfuncout;
                                                                            __Vtask_get_arg_matches__130__Vfuncout = 0;
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__132__Vfuncout;
                                                                            __Vtask_get_arg_matches__132__Vfuncout = 0;
                                                                            // Body
                                                                            IData/*31:0*/ unnamedblk169__DOT__i;
                                                                            unnamedblk169__DOT__i = 0;
                                                                            IData/*31:0*/ unnamedblk170__DOT__i;
                                                                            unnamedblk170__DOT__i = 0;
                                                                            IData/*31:0*/ unnamedblk171__DOT__i;
                                                                            unnamedblk171__DOT__i = 0;
                                                                            VlQueue<std::string> args;
                                                                            args.clear();
                                                                            args.atDefault().clear();
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 966)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_INT|uvm_set_config_int)=/"s, args, __Vtask_get_arg_matches__128__Vfuncout);
                                                                            unnamedblk169__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk169__DOT__i, args.size())) {
                                                                                this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk169__DOT__i),0x00000014U,
                                                                                (VL_LEN_IN(args.at(unnamedblk169__DOT__i)) 
                                                                                - (IData)(1U)))), 1U);
                                                                                unnamedblk169__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk169__DOT__i);
                                                                                ++(vlSymsp->__Vcoverage[17378]);
                                                                            }
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 970)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_STRING|uvm_set_config_string)=/"s, args, __Vtask_get_arg_matches__130__Vfuncout);
                                                                            unnamedblk170__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk170__DOT__i, args.size())) {
                                                                                this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk170__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk170__DOT__i)) 
                                                                                - (IData)(1U)))), 0U);
                                                                                unnamedblk170__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk170__DOT__i);
                                                                                ++(vlSymsp->__Vcoverage[17379]);
                                                                            }
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 974)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_DEFAULT_SEQUENCE|uvm_set_default_sequence)=/"s, args, __Vtask_get_arg_matches__132__Vfuncout);
                                                                            unnamedblk171__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk171__DOT__i, args.size())) {
                                                                                this->__VnoInFunc_m_process_default_sequence(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk171__DOT__i),0x0000001aU,
                                                                                (VL_LEN_IN(args.at(unnamedblk171__DOT__i)) 
                                                                                - (IData)(1U)))));
                                                                                unnamedblk171__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk171__DOT__i);
                                                                                ++(vlSymsp->__Vcoverage[17380]);
                                                                            }
                                                                            ++(vlSymsp->__Vcoverage[17381]);
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vtask_get_arg_values__135__Vfuncout;
                                                                            __Vtask_get_arg_values__135__Vfuncout = 0;
                                                                            CData/*7:0*/ __Vtask_uvm_split_string__138__sep;
                                                                            __Vtask_uvm_split_string__138__sep = 0;
                                                                            IData/*31:0*/ __Vtask_uvm_split_string__138__s;
                                                                            __Vtask_uvm_split_string__138__s = 0;
                                                                            IData/*31:0*/ __Vtask_uvm_split_string__138__e;
                                                                            __Vtask_uvm_split_string__138__e = 0;
                                                                            // Body
                                                                            std::string unnamedblk172__DOT__max_quit_list;
                                                                            std::string unnamedblk172__DOT__sep;
                                                                            IData/*31:0*/ unnamedblk172__DOT__unnamedblk173__DOT__i;
                                                                            VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_report_server> srvr;
                                                                            VlQueue<std::string> max_quit_settings;
                                                                            IData/*31:0*/ max_quit_count;
                                                                            std::string max_quit;
                                                                            VlQueue<std::string> split_max_quit;
                                                                            IData/*31:0*/ max_quit_int;
                                                                            max_quit_settings.clear();
                                                                            max_quit_settings.atDefault().clear();
                                                                            max_quit_count = 0U;
                                                                            max_quit = ""s;
                                                                            split_max_quit.clear();
                                                                            split_max_quit.atDefault().clear();
                                                                            max_quit_int = 0U;
                                                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 992)
                                                                                ->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_MAX_QUIT_COUNT="s, max_quit_settings, __Vtask_get_arg_values__135__Vfuncout);
                                                                            max_quit_count 
                                                                                = __Vtask_get_arg_values__135__Vfuncout;
                                                                            if (
                                                                                (0U 
                                                                                != max_quit_count)) {
                                                                                max_quit 
                                                                                = max_quit_settings.at(0U);
                                                                                if (
                                                                                VL_LTS_III(32, 1U, max_quit_count)) {
                                                                                unnamedblk172__DOT__max_quit_list = ""s;
                                                                                unnamedblk172__DOT__sep = ""s;
                                                                                unnamedblk172__DOT__unnamedblk173__DOT__i = 0U;
                                                                                unnamedblk172__DOT__unnamedblk173__DOT__i = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk172__DOT__unnamedblk173__DOT__i, max_quit_settings.size())) {
                                                                                if (
                                                                                (0U 
                                                                                != unnamedblk172__DOT__unnamedblk173__DOT__i)) {
                                                                                unnamedblk172__DOT__sep = "; "s;
                                                                                ++(vlSymsp->__Vcoverage[17382]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17383]);
                                                                                }
                                                                                unnamedblk172__DOT__max_quit_list 
                                                                                = 
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk172__DOT__max_quit_list, unnamedblk172__DOT__sep), max_quit_settings.at(unnamedblk172__DOT__unnamedblk173__DOT__i));
                                                                                unnamedblk172__DOT__unnamedblk173__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk172__DOT__unnamedblk173__DOT__i);
                                                                                ++(vlSymsp->__Vcoverage[17384]);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTMAXQUIT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_MAX_QUIT_COUNT arguments provided on the command line.  '%@' will be used.  Provided list: %@.",0,
                                                                                32,
                                                                                max_quit_count,
                                                                                -1,
                                                                                &(max_quit),
                                                                                -1,
                                                                                &(unnamedblk172__DOT__max_quit_list)) , 0U, ""s, 0U, ""s, 0U);
                                                                                ++(vlSymsp->__Vcoverage[17385]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17386]);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MAXQUITSET"s, VL_SFORMATF_N_NX("'+UVM_MAX_QUIT_COUNT=%@' provided on the command line is being applied.",0,
                                                                                -1,
                                                                                &(max_quit)) , 0U, ""s, 0U, ""s, 0U);
                                                                                __Vtask_uvm_split_string__138__sep = 0x2cU;
                                                                                this->__Vtask_uvm_split_string__138__str 
                                                                                = max_quit;
                                                                                __Vtask_uvm_split_string__138__s = 0U;
                                                                                __Vtask_uvm_split_string__138__e = 0U;
                                                                                split_max_quit.clear();
                                                                                while (
                                                                                VL_LTS_III(32, __Vtask_uvm_split_string__138__e, 
                                                                                VL_LEN_IN(this->__Vtask_uvm_split_string__138__str))) {
                                                                                __Vtask_uvm_split_string__138__s 
                                                                                = __Vtask_uvm_split_string__138__e;
                                                                                {
                                                                                while (
                                                                                VL_LTS_III(32, __Vtask_uvm_split_string__138__e, 
                                                                                VL_LEN_IN(this->__Vtask_uvm_split_string__138__str))) {
                                                                                if (
                                                                                (VL_GETC_N(this->__Vtask_uvm_split_string__138__str,__Vtask_uvm_split_string__138__e) 
                                                                                == (IData)(__Vtask_uvm_split_string__138__sep))) {
                                                                                goto __Vlabel0;
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[477]);
                                                                                }
                                                                                __Vtask_uvm_split_string__138__e 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + __Vtask_uvm_split_string__138__e);
                                                                                ++(vlSymsp->__Vcoverage[478]);
                                                                                }
                                                                                __Vlabel0: ;
                                                                                }
                                                                                if (
                                                                                (__Vtask_uvm_split_string__138__s 
                                                                                != __Vtask_uvm_split_string__138__e)) {
                                                                                split_max_quit.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__138__str,__Vtask_uvm_split_string__138__s,
                                                                                (__Vtask_uvm_split_string__138__e 
                                                                                - (IData)(1U))));
                                                                                ++(vlSymsp->__Vcoverage[479]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[480]);
                                                                                }
                                                                                __Vtask_uvm_split_string__138__e 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + __Vtask_uvm_split_string__138__e);
                                                                                ++(vlSymsp->__Vcoverage[481]);
                                                                                }
                                                                                ++(vlSymsp->__Vcoverage[482]);
                                                                                max_quit_int 
                                                                                = 
                                                                                VL_ATOI_N(split_max_quit.at(0U), 10);
                                                                                if (
                                                                                ("YES"s 
                                                                                == split_max_quit.at(1U))) {
                                                                                VL_NULL_CHECK(srvr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 1014)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
                                                                                ++(vlSymsp->__Vcoverage[17387]);
                                                                                } else if (
                                                                                ("NO"s 
                                                                                == split_max_quit.at(1U))) {
                                                                                VL_NULL_CHECK(srvr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 1015)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 0U);
                                                                                ++(vlSymsp->__Vcoverage[17388]);
                                                                                } else {
                                                                                VL_NULL_CHECK(srvr, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 1016)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
                                                                                ++(vlSymsp->__Vcoverage[17389]);
                                                                                }
                                                                                ++(vlSymsp->__Vcoverage[17391]);
                                                                            }
                                                                            ++(vlSymsp->__Vcoverage[17392]);
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__142__Vfuncout;
                                                                            __Vtask_get_arg_matches__142__Vfuncout = 0;
                                                                            VlQueue<std::string> __Vtask_get_args__143__args;
                                                                            std::string __Vtemp_1;
                                                                            // Body
                                                                            IData/*31:0*/ __VlefCall_0__get_arg_matches;
                                                                            IData/*31:0*/ unnamedblk174__DOT__idx;
                                                                            unnamedblk174__DOT__idx = 0;
                                                                            VlQueue<std::string> dump_args;
                                                                            VlQueue<std::string> all_args;
                                                                            dump_args.clear();
                                                                            dump_args.atDefault().clear();
                                                                            all_args.clear();
                                                                            all_args.atDefault().clear();
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 1029)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_CMDLINE_ARGS"s, dump_args, __Vtask_get_arg_matches__142__Vfuncout);
                                                                            __VlefCall_0__get_arg_matches 
                                                                                = __Vtask_get_arg_matches__142__Vfuncout;
                                                                            if (
                                                                                (0U 
                                                                                != __VlefCall_0__get_arg_matches)) {
                                                                                VL_NULL_CHECK(this->__PVT__clp, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh", 1030)
                                                                                ->__VnoInFunc_get_args(vlSymsp, __Vtask_get_args__143__args);
                                                                                all_args 
                                                                                = __Vtask_get_args__143__args;
                                                                                unnamedblk174__DOT__idx = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk174__DOT__idx, all_args.size())) {
                                                                                __Vtemp_1 
                                                                                = all_args.at(unnamedblk174__DOT__idx);
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DUMPARGS"s, VL_SFORMATF_N_NX("idx=%0d arg=[%@]",0,
                                                                                32,
                                                                                unnamedblk174__DOT__idx,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                                                                                unnamedblk174__DOT__idx 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk174__DOT__idx);
                                                                                ++(vlSymsp->__Vcoverage[17393]);
                                                                                }
                                                                                ++(vlSymsp->__Vcoverage[17394]);
                                                                            } else {
                                                                                ++(vlSymsp->__Vcoverage[17395]);
                                                                            }
                                                                            ++(vlSymsp->__Vcoverage[17396]);
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity\n"); );
                                                                            // Body
                                                                            std::string unnamedblk175__DOT__verb_list;
                                                                            std::string unnamedblk175__DOT__sep;
                                                                            IData/*31:0*/ unnamedblk175__DOT__unnamedblk176__DOT__i;
                                                                            std::string verb_string;
                                                                            VlQueue<std::string> verb_settings;
                                                                            IData/*31:0*/ verb_count;
                                                                            IData/*31:0*/ plusarg;
                                                                            IData/*31:0*/ verbosity;
                                                                            verb_string = ""s;
                                                                            verb_settings.clear();
                                                                            verb_settings.atDefault().clear();
                                                                            verb_count = 0U;
                                                                            plusarg = 0U;
                                                                            verbosity = 0x000000c8U;
                                                                            verb_count 
                                                                                = VL_VALUEPLUSARGS_INN(64, "UVM_VERBOSITY=%s"s, 
                                                                                verb_string);
                                                                            if (
                                                                                (0U 
                                                                                != verb_count)) {
                                                                                verb_settings.push_back(verb_string);
                                                                                ++(vlSymsp->__Vcoverage[17397]);
                                                                            } else {
                                                                                ++(vlSymsp->__Vcoverage[17398]);
                                                                            }
                                                                            if (
                                                                                VL_LTS_III(32, 0U, verb_count)) {
                                                                                verb_string 
                                                                                = verb_settings.at(0U);
                                                                                plusarg = 1U;
                                                                                ++(vlSymsp->__Vcoverage[17399]);
                                                                            } else {
                                                                                ++(vlSymsp->__Vcoverage[17400]);
                                                                            }
                                                                            if (
                                                                                VL_LTS_III(32, 1U, verb_count)) {
                                                                                unnamedblk175__DOT__verb_list = ""s;
                                                                                unnamedblk175__DOT__sep = ""s;
                                                                                unnamedblk175__DOT__unnamedblk176__DOT__i = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk175__DOT__unnamedblk176__DOT__i, verb_settings.size())) {
                                                                                if (
                                                                                (0U 
                                                                                != unnamedblk175__DOT__unnamedblk176__DOT__i)) {
                                                                                unnamedblk175__DOT__sep = ", "s;
                                                                                ++(vlSymsp->__Vcoverage[17401]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17402]);
                                                                                }
                                                                                unnamedblk175__DOT__verb_list 
                                                                                = 
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk175__DOT__verb_list, unnamedblk175__DOT__sep), verb_settings.at(unnamedblk175__DOT__unnamedblk176__DOT__i));
                                                                                unnamedblk175__DOT__unnamedblk176__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk175__DOT__unnamedblk176__DOT__i);
                                                                                ++(vlSymsp->__Vcoverage[17403]);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTVERB"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_VERBOSITY arguments provided on the command line.  '%@' will be used.  Provided list: %@.",0,
                                                                                32,
                                                                                verb_count,
                                                                                -1,
                                                                                &(verb_string),
                                                                                -1,
                                                                                &(unnamedblk175__DOT__verb_list)) , 0U, ""s, 0U, ""s, 0U);
                                                                                ++(vlSymsp->__Vcoverage[17404]);
                                                                            } else {
                                                                                ++(vlSymsp->__Vcoverage[17405]);
                                                                            }
                                                                            if (
                                                                                (1U 
                                                                                == plusarg)) {
                                                                                if (
                                                                                (((((((("UVM_NONE"s 
                                                                                == verb_string) 
                                                                                | ("NONE"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_LOW"s 
                                                                                == verb_string)) 
                                                                                | ("LOW"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_MEDIUM"s 
                                                                                == verb_string)) 
                                                                                | ("MEDIUM"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_HIGH"s 
                                                                                == verb_string)) 
                                                                                | ("HIGH"s 
                                                                                == verb_string))) {
                                                                                if (
                                                                                ("UVM_NONE"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0U;
                                                                                ++(vlSymsp->__Vcoverage[17406]);
                                                                                } else if (
                                                                                ("NONE"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0U;
                                                                                ++(vlSymsp->__Vcoverage[17407]);
                                                                                } else if (
                                                                                ("UVM_LOW"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x00000064U;
                                                                                ++(vlSymsp->__Vcoverage[17408]);
                                                                                } else if (
                                                                                ("LOW"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x00000064U;
                                                                                ++(vlSymsp->__Vcoverage[17409]);
                                                                                } else if (
                                                                                ("UVM_MEDIUM"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x000000c8U;
                                                                                ++(vlSymsp->__Vcoverage[17410]);
                                                                                } else if (
                                                                                ("MEDIUM"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x000000c8U;
                                                                                ++(vlSymsp->__Vcoverage[17411]);
                                                                                } else if (
                                                                                ("UVM_HIGH"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x0000012cU;
                                                                                ++(vlSymsp->__Vcoverage[17412]);
                                                                                } else {
                                                                                verbosity = 0x0000012cU;
                                                                                ++(vlSymsp->__Vcoverage[17413]);
                                                                                }
                                                                                } else if (
                                                                                ("UVM_FULL"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x00000190U;
                                                                                ++(vlSymsp->__Vcoverage[17414]);
                                                                                } else if (
                                                                                ("FULL"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x00000190U;
                                                                                ++(vlSymsp->__Vcoverage[17415]);
                                                                                } else if (
                                                                                ("UVM_DEBUG"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x000001f4U;
                                                                                ++(vlSymsp->__Vcoverage[17416]);
                                                                                } else if (
                                                                                ("DEBUG"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x000001f4U;
                                                                                ++(vlSymsp->__Vcoverage[17417]);
                                                                                } else {
                                                                                verbosity 
                                                                                = 
                                                                                VL_ATOI_N(verb_string, 10);
                                                                                if (
                                                                                VL_LTS_III(32, 0U, verbosity)) {
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NSTVERB"s, VL_SFORMATF_N_NX("Non-standard verbosity value, using provided '%0d'.",0,
                                                                                32,
                                                                                verbosity) , 0U, ""s, 0U, ""s, 0U);
                                                                                ++(vlSymsp->__Vcoverage[17418]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17419]);
                                                                                }
                                                                                if (
                                                                                (0U 
                                                                                == verbosity)) {
                                                                                verbosity = 0x000000c8U;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "ILLVERB"s, "Illegal verbosity value, using default of UVM_MEDIUM."s, 0U, ""s, 0U, ""s, 0U);
                                                                                ++(vlSymsp->__Vcoverage[17420]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17421]);
                                                                                }
                                                                                ++(vlSymsp->__Vcoverage[17422]);
                                                                                }
                                                                                ++(vlSymsp->__Vcoverage[17423]);
                                                                            } else {
                                                                                ++(vlSymsp->__Vcoverage[17424]);
                                                                            }
                                                                            this->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, verbosity);
                                                                            ++(vlSymsp->__Vcoverage[17425]);
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_uvm_field_flag_size(Vtb_rng__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_uvm_field_flag_size\n"); );
                                                                            // Body
                                                                            ++(vlSymsp->__Vcoverage[17427]);
                                                                            ++(vlSymsp->__Vcoverage[17428]);
                                                                        }

                                                                        VlCoroutine Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_phase> phase) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase\n"); );
                                                                            // Locals
                                                                            std::string __Vtemp_1;
                                                                            std::string __Vtemp_2;
                                                                            // Body
                                                                            VL_KEEP_THIS;
                                                                            IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
                                                                            IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                                                                            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                                                                            IData/*31:0*/ unnamedblk177__DOT__idx;
                                                                            unnamedblk177__DOT__idx = 0;
                                                                            IData/*31:0*/ unnamedblk178__DOT__idx;
                                                                            unnamedblk178__DOT__idx = 0;
                                                                            unnamedblk177__DOT__idx = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk177__DOT__idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size())) {
                                                                                if (
                                                                                (0U 
                                                                                == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk177__DOT__idx)
                                                                                .__PVT__used)) {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_0__uvm_report_enabled);
                                                                                if (
                                                                                (0U 
                                                                                != __VlefCall_0__uvm_report_enabled)) {
                                                                                __Vtemp_1 
                                                                                = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk177__DOT__idx)
                                                                                .__PVT__arg;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_action=%@\" never took effect due to a mismatching component pattern",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x0000046aU, ""s, 1U);
                                                                                ++(vlSymsp->__Vcoverage[17429]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17430]);
                                                                                }
                                                                                ++(vlSymsp->__Vcoverage[17431]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17432]);
                                                                                }
                                                                                unnamedblk177__DOT__idx 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk177__DOT__idx);
                                                                                ++(vlSymsp->__Vcoverage[17433]);
                                                                            }
                                                                            unnamedblk178__DOT__idx = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk178__DOT__idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size())) {
                                                                                if (
                                                                                (0U 
                                                                                == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk178__DOT__idx)
                                                                                .__PVT__used)) {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_1__uvm_report_enabled);
                                                                                if (
                                                                                (0U 
                                                                                != __VlefCall_1__uvm_report_enabled)) {
                                                                                __Vtemp_2 
                                                                                = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk178__DOT__idx)
                                                                                .__PVT__arg;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_severity=%@\" never took effect due to a mismatching component pattern",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x0000046eU, ""s, 1U);
                                                                                ++(vlSymsp->__Vcoverage[17434]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17435]);
                                                                                }
                                                                                ++(vlSymsp->__Vcoverage[17436]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17437]);
                                                                                }
                                                                                unnamedblk178__DOT__idx 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk178__DOT__idx);
                                                                                ++(vlSymsp->__Vcoverage[17438]);
                                                                            }
                                                                            if (
                                                                                (0ULL 
                                                                                < VL_TIME_UNITED_Q(1))) {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "RUNPHSTIME"s, __VlefCall_2__uvm_report_enabled);
                                                                                if (
                                                                                (0U 
                                                                                != __VlefCall_2__uvm_report_enabled)) {
                                                                                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RUNPHSTIME"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The run phase must start at time 0, current time is "s, VL_SFORMATF_N_NX("%0^",0,
                                                                                64,
                                                                                VL_TIME_UNITED_D(1),
                                                                                -12) ), ". No non-zero delays are allowed before "s), "run_test(), and pre-run user defined phases may not consume "s), "simulation time before the start of the run phase."s)), 0U, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x00000475U, ""s, 1U);
                                                                                ++(vlSymsp->__Vcoverage[17439]);
                                                                                } else {
                                                                                ++(vlSymsp->__Vcoverage[17440]);
                                                                                }
                                                                                ++(vlSymsp->__Vcoverage[17441]);
                                                                            } else {
                                                                                ++(vlSymsp->__Vcoverage[17442]);
                                                                            }
                                                                            ++(vlSymsp->__Vcoverage[17443]);
                                                                            co_return;
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_enable_print_topology(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_enable_print_topology\n"); );
                                                                            // Body
                                                                            this->__PVT__enable_print_topology 
                                                                                = enable;
                                                                            ++(vlSymsp->__Vcoverage[17444]);
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_enable_print_topology(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &get_enable_print_topology__Vfuncrtn) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_enable_print_topology\n"); );
                                                                            // Body
                                                                            get_enable_print_topology__Vfuncrtn 
                                                                                = this->__PVT__enable_print_topology;
                                                                            ++(vlSymsp->__Vcoverage[17445]);
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize\n"); );
                                                                            // Body
                                                                            IData/*31:0*/ __VlefCall_0____VBasicRand;
                                                                            Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                                                                            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                                                                            randomize__Vfuncrtn 
                                                                                = 
                                                                                Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                                                                            this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
                                                                            randomize__Vfuncrtn 
                                                                                = 
                                                                                (randomize__Vfuncrtn 
                                                                                & __VlefCall_0____VBasicRand);
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints\n"); );
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand\n"); );
                                                                            // Body
                                                                            __VBasicRand__Vfuncrtn = 1U;
                                                                        }

                                                                        void Vtb_rng_uvm_pkg__03a__03auvm_root::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::_ctor_var_reset\n"); );
                                                                            // Body
                                                                            (void)vlSymsp;  // Prevent unused variable warning
                                                                            __PVT__m_phase_all_done = 0;
                                                                        }

                                                                        Vtb_rng_uvm_pkg__03a__03auvm_root::~Vtb_rng_uvm_pkg__03a__03auvm_root() {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::~\n"); );
                                                                        }

                                                                        std::string Vtb_rng_uvm_pkg__03a__03auvm_root::to_string() const {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::to_string\n"); );
                                                                            // Body
                                                                            return (
                                                                                "'{"s + to_string_middle() + "}");
                                                                        }

                                                                        std::string Vtb_rng_uvm_pkg__03a__03auvm_root::to_string_middle() const {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_root::to_string_middle\n"); );
                                                                            // Body
                                                                            std::string out;
                                                                            out += "clp:" + VL_TO_STRING(__PVT__clp);
                                                                            out += ", finish_on_completion:" + VL_TO_STRING(__PVT__finish_on_completion);
                                                                            out += ", enable_print_topology:" + VL_TO_STRING(__PVT__enable_print_topology);
                                                                            out += ", phase_timeout:" + VL_TO_STRING(__PVT__phase_timeout);
                                                                            out += ", m_phase_all_done:" + VL_TO_STRING(__PVT__m_phase_all_done);
                                                                            out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_component::to_string_middle();
                                                                            return (
                                                                                out);
                                                                        }
