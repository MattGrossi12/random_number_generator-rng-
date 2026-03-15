// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_get_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi178> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi178__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
    ++(vlSymsp->__Vcoverage[10935]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_rng_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_text_recorder"s;
    ++(vlSymsp->__Vcoverage[10940]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_object_type(Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object_registry__pi178> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi178__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[10936]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_text_recorder> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_text_recorder, vlProcess, vlSymsp, "unnamed-uvm_text_recorder"s);
        ++(vlSymsp->__Vcoverage[10937]);
    } else {
        tmp = VL_NEW(Vtb_rng_uvm_pkg__03a__03auvm_text_recorder, vlProcess, vlSymsp, name);
        ++(vlSymsp->__Vcoverage[10938]);
    }
    create__Vfuncrtn = tmp;
    ++(vlSymsp->__Vcoverage[10939]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_type_name(Vtb_rng__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_recorder"s;
    ++(vlSymsp->__Vcoverage[10941]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::init(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name) {
    Vtb_rng_uvm_pkg__03a__03auvm_recorder::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    ++(vlSymsp->__Vcoverage[10942]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_open(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_open\n"); );
    // Body
    std::string __VlefCall_5__get_name;
    IData/*31:0*/ __VlefCall_4__get_handle;
    IData/*31:0*/ __VlefCall_3__get_handle;
    CData/*0:0*/ __VlefCall_2__open_db;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_database> __VlefCall_0__get_db;
    VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 672)->__VnoInFunc_get_db(vlProcess, vlSymsp, __VlefCall_0__get_db);
    __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__get_db, this->__PVT__m_text_db);
    if (VL_UNLIKELY(((! __VlefExpr_1)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_recorder.svh:672: Assertion failed in %Nuvm_pkg.uvm_text_recorder.do_open: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 672, "");
    }
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 673)->__VnoInFunc_open_db(vlSymsp, __VlefCall_2__open_db);
    if (VL_UNLIKELY((__VlefCall_2__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_3__get_handle);
        VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 678)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 674)
                      ->__PVT__m_file,"    OPEN_RECORDER @%0^ {TXH:%0d STREAM:%0d NAME:%@ TIME:%0t TYPE=\"%0@\"}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      __VlefCall_3__get_handle,32,__VlefCall_4__get_handle,
                      -1,&(__VlefCall_5__get_name),
                      64,open_time,-12,-1,&(type_name));
        ++(vlSymsp->__Vcoverage[10943]);
    } else {
        ++(vlSymsp->__Vcoverage[10944]);
    }
    ++(vlSymsp->__Vcoverage[10945]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_close(Vtb_rng__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_close\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 689)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 690)
                      ->__PVT__m_file,"    CLOSE_RECORDER @%0^ {TXH:%0d TIME=%0t}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      __VlefCall_1__get_handle,64,close_time,
                      -12);
        ++(vlSymsp->__Vcoverage[10946]);
    } else {
        ++(vlSymsp->__Vcoverage[10947]);
    }
    ++(vlSymsp->__Vcoverage[10948]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_free(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_free\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 704)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 705)
                      ->__PVT__m_file,"    FREE_RECORDER @%0^ {TXH:%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      __VlefCall_1__get_handle);
        ++(vlSymsp->__Vcoverage[10949]);
    } else {
        ++(vlSymsp->__Vcoverage[10950]);
    }
    this->__PVT__m_text_db = VlNull{};
    ++(vlSymsp->__Vcoverage[10951]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field(Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field\n"); );
    // Body
    std::string __VlefCall_0__m_current_context;
    if ((0U != radix)) {
        ++(vlSymsp->__Vcoverage[10953]);
    } else {
        radix = Vtb_rng_uvm_pkg__03a__03auvm_recorder::__PVT__default_radix;
        ++(vlSymsp->__Vcoverage[10952]);
    }
    this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_0__m_current_context);
    this->__VnoInFunc_write_attribute(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__m_current_context), value, radix, size);
    if ((IData)((0U == radix))) {
        ++(vlSymsp->__Vcoverage[10954]);
    }
    if ((0x08000000U & radix)) {
        ++(vlSymsp->__Vcoverage[10955]);
    }
    if ((0x04000000U & radix)) {
        ++(vlSymsp->__Vcoverage[10956]);
    }
    if ((0x02000000U & radix)) {
        ++(vlSymsp->__Vcoverage[10957]);
    }
    if ((0x01000000U & radix)) {
        ++(vlSymsp->__Vcoverage[10958]);
    }
    if ((0x00800000U & radix)) {
        ++(vlSymsp->__Vcoverage[10959]);
    }
    if ((0x00400000U & radix)) {
        ++(vlSymsp->__Vcoverage[10960]);
    }
    if ((0x00200000U & radix)) {
        ++(vlSymsp->__Vcoverage[10961]);
    }
    if ((0x00100000U & radix)) {
        ++(vlSymsp->__Vcoverage[10962]);
    }
    if ((0x00080000U & radix)) {
        ++(vlSymsp->__Vcoverage[10963]);
    }
    if ((0x00040000U & radix)) {
        ++(vlSymsp->__Vcoverage[10964]);
    }
    if ((0x00020000U & radix)) {
        ++(vlSymsp->__Vcoverage[10965]);
    }
    if ((0x00010000U & radix)) {
        ++(vlSymsp->__Vcoverage[10966]);
    }
    if ((0x00008000U & radix)) {
        ++(vlSymsp->__Vcoverage[10967]);
    }
    if ((0x00004000U & radix)) {
        ++(vlSymsp->__Vcoverage[10968]);
    }
    if ((0x00002000U & radix)) {
        ++(vlSymsp->__Vcoverage[10969]);
    }
    if ((0x00001000U & radix)) {
        ++(vlSymsp->__Vcoverage[10970]);
    }
    if ((0x00000800U & radix)) {
        ++(vlSymsp->__Vcoverage[10971]);
    }
    if ((0x00000400U & radix)) {
        ++(vlSymsp->__Vcoverage[10972]);
    }
    if ((0x00000200U & radix)) {
        ++(vlSymsp->__Vcoverage[10973]);
    }
    if ((0x00000100U & radix)) {
        ++(vlSymsp->__Vcoverage[10974]);
    }
    if ((0x00000080U & radix)) {
        ++(vlSymsp->__Vcoverage[10975]);
    }
    if ((0x00000040U & radix)) {
        ++(vlSymsp->__Vcoverage[10976]);
    }
    if ((0x00000020U & radix)) {
        ++(vlSymsp->__Vcoverage[10977]);
    }
    if ((0x00000010U & radix)) {
        ++(vlSymsp->__Vcoverage[10978]);
    }
    if ((8U & radix)) {
        ++(vlSymsp->__Vcoverage[10979]);
    }
    if ((4U & radix)) {
        ++(vlSymsp->__Vcoverage[10980]);
    }
    if ((2U & radix)) {
        ++(vlSymsp->__Vcoverage[10981]);
    }
    if ((1U & radix)) {
        ++(vlSymsp->__Vcoverage[10982]);
    }
    ++(vlSymsp->__Vcoverage[10983]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_int(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_int\n"); );
    // Body
    std::string __VlefCall_0__m_current_context;
    if ((0U != radix)) {
        ++(vlSymsp->__Vcoverage[10985]);
    } else {
        radix = Vtb_rng_uvm_pkg__03a__03auvm_recorder::__PVT__default_radix;
        ++(vlSymsp->__Vcoverage[10984]);
    }
    this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_0__m_current_context);
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_0__m_current_context), value, radix, size);
    if ((IData)((0U == radix))) {
        ++(vlSymsp->__Vcoverage[10986]);
    }
    if ((0x08000000U & radix)) {
        ++(vlSymsp->__Vcoverage[10987]);
    }
    if ((0x04000000U & radix)) {
        ++(vlSymsp->__Vcoverage[10988]);
    }
    if ((0x02000000U & radix)) {
        ++(vlSymsp->__Vcoverage[10989]);
    }
    if ((0x01000000U & radix)) {
        ++(vlSymsp->__Vcoverage[10990]);
    }
    if ((0x00800000U & radix)) {
        ++(vlSymsp->__Vcoverage[10991]);
    }
    if ((0x00400000U & radix)) {
        ++(vlSymsp->__Vcoverage[10992]);
    }
    if ((0x00200000U & radix)) {
        ++(vlSymsp->__Vcoverage[10993]);
    }
    if ((0x00100000U & radix)) {
        ++(vlSymsp->__Vcoverage[10994]);
    }
    if ((0x00080000U & radix)) {
        ++(vlSymsp->__Vcoverage[10995]);
    }
    if ((0x00040000U & radix)) {
        ++(vlSymsp->__Vcoverage[10996]);
    }
    if ((0x00020000U & radix)) {
        ++(vlSymsp->__Vcoverage[10997]);
    }
    if ((0x00010000U & radix)) {
        ++(vlSymsp->__Vcoverage[10998]);
    }
    if ((0x00008000U & radix)) {
        ++(vlSymsp->__Vcoverage[10999]);
    }
    if ((0x00004000U & radix)) {
        ++(vlSymsp->__Vcoverage[11000]);
    }
    if ((0x00002000U & radix)) {
        ++(vlSymsp->__Vcoverage[11001]);
    }
    if ((0x00001000U & radix)) {
        ++(vlSymsp->__Vcoverage[11002]);
    }
    if ((0x00000800U & radix)) {
        ++(vlSymsp->__Vcoverage[11003]);
    }
    if ((0x00000400U & radix)) {
        ++(vlSymsp->__Vcoverage[11004]);
    }
    if ((0x00000200U & radix)) {
        ++(vlSymsp->__Vcoverage[11005]);
    }
    if ((0x00000100U & radix)) {
        ++(vlSymsp->__Vcoverage[11006]);
    }
    if ((0x00000080U & radix)) {
        ++(vlSymsp->__Vcoverage[11007]);
    }
    if ((0x00000040U & radix)) {
        ++(vlSymsp->__Vcoverage[11008]);
    }
    if ((0x00000020U & radix)) {
        ++(vlSymsp->__Vcoverage[11009]);
    }
    if ((0x00000010U & radix)) {
        ++(vlSymsp->__Vcoverage[11010]);
    }
    if ((8U & radix)) {
        ++(vlSymsp->__Vcoverage[11011]);
    }
    if ((4U & radix)) {
        ++(vlSymsp->__Vcoverage[11012]);
    }
    if ((2U & radix)) {
        ++(vlSymsp->__Vcoverage[11013]);
    }
    if ((1U & radix)) {
        ++(vlSymsp->__Vcoverage[11014]);
    }
    ++(vlSymsp->__Vcoverage[11015]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_real(Vtb_rng__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_real\n"); );
    // Body
    std::string __VlefCall_0__m_current_context;
    QData/*63:0*/ ival;
    ival = VL_CVT_Q_D(value);
    this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_0__m_current_context);
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_0__m_current_context), ival, 0x0b000000U, 0x00000040U);
    ++(vlSymsp->__Vcoverage[11016]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_current_context(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string &m_current_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_current_context\n"); );
    // Body
    std::string unnamedblk1__DOT__full_name;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    {
        m_current_context__Vfuncrtn = ""s;
        if ((0U == this->__PVT__m_object_names.size())) {
            m_current_context__Vfuncrtn = name;
        } else {
            if (((1U == this->__PVT__m_object_names.size()) 
                 & (""s == name))) {
                m_current_context__Vfuncrtn = this->__PVT__m_object_names.at(0U);
                goto __Vlabel0;
            } else {
                unnamedblk1__DOT__full_name = ""s;
                unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, this->__PVT__m_object_names.size())) {
                    if ((unnamedblk1__DOT__unnamedblk2__DOT__i 
                         == (this->__PVT__m_object_names.size() 
                             - (IData)(1U)))) {
                        unnamedblk1__DOT__full_name 
                            = VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i));
                        ++(vlSymsp->__Vcoverage[11017]);
                    } else {
                        unnamedblk1__DOT__full_name 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i)), "."s);
                        ++(vlSymsp->__Vcoverage[11018]);
                    }
                    unnamedblk1__DOT__unnamedblk2__DOT__i 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
                    ++(vlSymsp->__Vcoverage[11019]);
                }
                if ((""s != name)) {
                    m_current_context__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(unnamedblk1__DOT__full_name, "."s), name);
                    goto __Vlabel0;
                } else {
                    m_current_context__Vfuncrtn = unnamedblk1__DOT__full_name;
                    goto __Vlabel0;
                }
                ++(vlSymsp->__Vcoverage[11023]);
            }
            if (((1U == this->__PVT__m_object_names.size()) 
                 & (""s == name))) {
                ++(vlSymsp->__Vcoverage[11024]);
            }
            if ((1U & (~ (""s == name)))) {
                ++(vlSymsp->__Vcoverage[11025]);
            }
            if ((1U != this->__PVT__m_object_names.size())) {
                ++(vlSymsp->__Vcoverage[11026]);
            }
        }
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11028]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_object(VlProcessRef vlProcess, Vtb_rng__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_object\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_active_object_depth;
    IData/*31:0*/ __VlefCall_0__get_active_object_depth;
    IData/*31:0*/ v;
    v = 0U;
    if (Vtb_rng_uvm_pkg__03a__03auvm_recorder::__PVT__identifier) {
        if ((VlNull{} != value)) {
            VL_NULL_CHECK(value, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 803)->__VnoInFunc_get_inst_id(vlSymsp, v);
            ++(vlSymsp->__Vcoverage[11029]);
        } else {
            ++(vlSymsp->__Vcoverage[11030]);
        }
        this->__VnoInFunc_write_attribute_int(vlSymsp, "inst_id"s, 
                                              VL_EXTENDS_QI(64,32, v), 0x02000000U, 0x00000020U);
        ++(vlSymsp->__Vcoverage[11031]);
    } else {
        ++(vlSymsp->__Vcoverage[11032]);
    }
    this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_0__get_active_object_depth);
    if ((1U < __VlefCall_0__get_active_object_depth)) {
        this->__PVT__m_object_names.push_back(name);
        ++(vlSymsp->__Vcoverage[11033]);
    } else {
        ++(vlSymsp->__Vcoverage[11034]);
    }
    Vtb_rng_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
    this->__VnoInFunc_get_active_object_depth(vlSymsp, __VlefCall_1__get_active_object_depth);
    if ((1U < __VlefCall_1__get_active_object_depth)) {
        std::ignore = this->__PVT__m_object_names.pop_back();
        ++(vlSymsp->__Vcoverage[11035]);
    } else {
        ++(vlSymsp->__Vcoverage[11036]);
    }
    ++(vlSymsp->__Vcoverage[11037]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_string(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_string\n"); );
    // Body
    std::string __VlefCall_2__m_current_context;
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 824)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_2__m_current_context);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 825)
                      ->__PVT__m_file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@   RADIX:UVM_STRING BITS=%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      __VlefCall_1__get_handle,-1,&(__VlefCall_2__m_current_context),
                      -1,&(value),32,((IData)(8U) + 
                                      VL_LEN_IN(value)));
        ++(vlSymsp->__Vcoverage[11038]);
    } else {
        ++(vlSymsp->__Vcoverage[11039]);
    }
    ++(vlSymsp->__Vcoverage[11040]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_time(Vtb_rng__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_time\n"); );
    // Body
    std::string __VlefCall_0__m_current_context;
    this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_0__m_current_context);
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(__VlefCall_0__m_current_context), value, 0x09000000U, 0x00000040U);
    ++(vlSymsp->__Vcoverage[11041]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_generic(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_generic\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    // Body
    VlWide<3600>/*115199:0*/ __VlefCall_1__uvm_string_to_bits;
    std::string __VlefCall_0__m_current_context;
    this->__VnoInFunc_m_current_context(vlSymsp, name, __VlefCall_0__m_current_context);
    this->__Vfunc_uvm_string_to_bits__30__str = value;
    VL_SFORMAT_NX(115200,__VlefCall_1__uvm_string_to_bits
                  ,"%0@",0,-1,&(this->__Vfunc_uvm_string_to_bits__30__str));
    ++(vlSymsp->__Vcoverage[458]);
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = __VlefCall_1__uvm_string_to_bits
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    this->__VnoInFunc_write_attribute(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__m_current_context), __Vtemp_1, 0x08000000U, 
                                      ((IData)(8U) 
                                       + VL_LEN_IN(value)));
    ++(vlSymsp->__Vcoverage[11042]);
}

extern const VlWide<128>/*4095:0*/ Vtb_rng__ConstPool__CONST_h1958c06c_0;

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute(Vtb_rng__Syms* __restrict vlSymsp, std::string nm, VlWide<128>/*4095:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__34__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__34__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__34__size;
    __Vfunc_uvm_bitstream_to_string__34__size = 0;
    IData/*27:0*/ __Vfunc_uvm_bitstream_to_string__34__radix;
    __Vfunc_uvm_bitstream_to_string__34__radix = 0;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    IData/*31:0*/ __Vilp1;
    // Body
    std::string __VlefCall_2__uvm_bitstream_to_string;
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 877)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        this->__Vfunc_uvm_bitstream_to_string__34__radix_str = ""s;
        __Vfunc_uvm_bitstream_to_string__34__radix 
            = radix;
        __Vfunc_uvm_bitstream_to_string__34__size = numbits;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vfunc_uvm_bitstream_to_string__34__value[__Vilp1] 
                = value[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        {
            if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__34__radix) 
                 & (__Vfunc_uvm_bitstream_to_string__34__value
                    [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__34__size 
                                      - (IData)(1U)) 
                                     >> 5U))] >> (0x0000001fU 
                                                  & (__Vfunc_uvm_bitstream_to_string__34__size 
                                                     - (IData)(1U)))))) {
                __VlefCall_2__uvm_bitstream_to_string 
                    = VL_SFORMATF_N_NX("%0d",0,4096,
                                       __Vfunc_uvm_bitstream_to_string__34__value.data()) ;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[350]);
            }
            VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, Vtb_rng__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__34__size);
            VL_SUB_W(128, __Vtemp_3, __Vtemp_2, Vtb_rng__ConstPool__CONST_h1958c06c_0);
            __Vfunc_uvm_bitstream_to_string__34__value[0U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[0U] 
                   & __Vtemp_3[0U]);
            __Vfunc_uvm_bitstream_to_string__34__value[1U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[1U] 
                   & __Vtemp_3[1U]);
            __Vfunc_uvm_bitstream_to_string__34__value[2U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[2U] 
                   & __Vtemp_3[2U]);
            __Vfunc_uvm_bitstream_to_string__34__value[3U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[3U] 
                   & __Vtemp_3[3U]);
            __Vfunc_uvm_bitstream_to_string__34__value[4U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[4U] 
                   & __Vtemp_3[4U]);
            __Vfunc_uvm_bitstream_to_string__34__value[5U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[5U] 
                   & __Vtemp_3[5U]);
            __Vfunc_uvm_bitstream_to_string__34__value[6U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[6U] 
                   & __Vtemp_3[6U]);
            __Vfunc_uvm_bitstream_to_string__34__value[7U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[7U] 
                   & __Vtemp_3[7U]);
            __Vfunc_uvm_bitstream_to_string__34__value[8U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[8U] 
                   & __Vtemp_3[8U]);
            __Vfunc_uvm_bitstream_to_string__34__value[9U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[9U] 
                   & __Vtemp_3[9U]);
            __Vfunc_uvm_bitstream_to_string__34__value[10U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[10U] 
                   & __Vtemp_3[10U]);
            __Vfunc_uvm_bitstream_to_string__34__value[11U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[11U] 
                   & __Vtemp_3[11U]);
            __Vfunc_uvm_bitstream_to_string__34__value[12U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[12U] 
                   & __Vtemp_3[12U]);
            __Vfunc_uvm_bitstream_to_string__34__value[13U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[13U] 
                   & __Vtemp_3[13U]);
            __Vfunc_uvm_bitstream_to_string__34__value[14U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[14U] 
                   & __Vtemp_3[14U]);
            __Vfunc_uvm_bitstream_to_string__34__value[15U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[15U] 
                   & __Vtemp_3[15U]);
            __Vfunc_uvm_bitstream_to_string__34__value[16U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[16U] 
                   & __Vtemp_3[16U]);
            __Vfunc_uvm_bitstream_to_string__34__value[17U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[17U] 
                   & __Vtemp_3[17U]);
            __Vfunc_uvm_bitstream_to_string__34__value[18U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[18U] 
                   & __Vtemp_3[18U]);
            __Vfunc_uvm_bitstream_to_string__34__value[19U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[19U] 
                   & __Vtemp_3[19U]);
            __Vfunc_uvm_bitstream_to_string__34__value[20U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[20U] 
                   & __Vtemp_3[20U]);
            __Vfunc_uvm_bitstream_to_string__34__value[21U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[21U] 
                   & __Vtemp_3[21U]);
            __Vfunc_uvm_bitstream_to_string__34__value[22U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[22U] 
                   & __Vtemp_3[22U]);
            __Vfunc_uvm_bitstream_to_string__34__value[23U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[23U] 
                   & __Vtemp_3[23U]);
            __Vfunc_uvm_bitstream_to_string__34__value[24U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[24U] 
                   & __Vtemp_3[24U]);
            __Vfunc_uvm_bitstream_to_string__34__value[25U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[25U] 
                   & __Vtemp_3[25U]);
            __Vfunc_uvm_bitstream_to_string__34__value[26U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[26U] 
                   & __Vtemp_3[26U]);
            __Vfunc_uvm_bitstream_to_string__34__value[27U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[27U] 
                   & __Vtemp_3[27U]);
            __Vfunc_uvm_bitstream_to_string__34__value[28U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[28U] 
                   & __Vtemp_3[28U]);
            __Vfunc_uvm_bitstream_to_string__34__value[29U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[29U] 
                   & __Vtemp_3[29U]);
            __Vfunc_uvm_bitstream_to_string__34__value[30U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[30U] 
                   & __Vtemp_3[30U]);
            __Vfunc_uvm_bitstream_to_string__34__value[31U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[31U] 
                   & __Vtemp_3[31U]);
            __Vfunc_uvm_bitstream_to_string__34__value[32U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[32U] 
                   & __Vtemp_3[32U]);
            __Vfunc_uvm_bitstream_to_string__34__value[33U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[33U] 
                   & __Vtemp_3[33U]);
            __Vfunc_uvm_bitstream_to_string__34__value[34U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[34U] 
                   & __Vtemp_3[34U]);
            __Vfunc_uvm_bitstream_to_string__34__value[35U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[35U] 
                   & __Vtemp_3[35U]);
            __Vfunc_uvm_bitstream_to_string__34__value[36U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[36U] 
                   & __Vtemp_3[36U]);
            __Vfunc_uvm_bitstream_to_string__34__value[37U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[37U] 
                   & __Vtemp_3[37U]);
            __Vfunc_uvm_bitstream_to_string__34__value[38U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[38U] 
                   & __Vtemp_3[38U]);
            __Vfunc_uvm_bitstream_to_string__34__value[39U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[39U] 
                   & __Vtemp_3[39U]);
            __Vfunc_uvm_bitstream_to_string__34__value[40U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[40U] 
                   & __Vtemp_3[40U]);
            __Vfunc_uvm_bitstream_to_string__34__value[41U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[41U] 
                   & __Vtemp_3[41U]);
            __Vfunc_uvm_bitstream_to_string__34__value[42U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[42U] 
                   & __Vtemp_3[42U]);
            __Vfunc_uvm_bitstream_to_string__34__value[43U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[43U] 
                   & __Vtemp_3[43U]);
            __Vfunc_uvm_bitstream_to_string__34__value[44U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[44U] 
                   & __Vtemp_3[44U]);
            __Vfunc_uvm_bitstream_to_string__34__value[45U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[45U] 
                   & __Vtemp_3[45U]);
            __Vfunc_uvm_bitstream_to_string__34__value[46U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[46U] 
                   & __Vtemp_3[46U]);
            __Vfunc_uvm_bitstream_to_string__34__value[47U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[47U] 
                   & __Vtemp_3[47U]);
            __Vfunc_uvm_bitstream_to_string__34__value[48U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[48U] 
                   & __Vtemp_3[48U]);
            __Vfunc_uvm_bitstream_to_string__34__value[49U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[49U] 
                   & __Vtemp_3[49U]);
            __Vfunc_uvm_bitstream_to_string__34__value[50U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[50U] 
                   & __Vtemp_3[50U]);
            __Vfunc_uvm_bitstream_to_string__34__value[51U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[51U] 
                   & __Vtemp_3[51U]);
            __Vfunc_uvm_bitstream_to_string__34__value[52U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[52U] 
                   & __Vtemp_3[52U]);
            __Vfunc_uvm_bitstream_to_string__34__value[53U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[53U] 
                   & __Vtemp_3[53U]);
            __Vfunc_uvm_bitstream_to_string__34__value[54U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[54U] 
                   & __Vtemp_3[54U]);
            __Vfunc_uvm_bitstream_to_string__34__value[55U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[55U] 
                   & __Vtemp_3[55U]);
            __Vfunc_uvm_bitstream_to_string__34__value[56U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[56U] 
                   & __Vtemp_3[56U]);
            __Vfunc_uvm_bitstream_to_string__34__value[57U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[57U] 
                   & __Vtemp_3[57U]);
            __Vfunc_uvm_bitstream_to_string__34__value[58U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[58U] 
                   & __Vtemp_3[58U]);
            __Vfunc_uvm_bitstream_to_string__34__value[59U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[59U] 
                   & __Vtemp_3[59U]);
            __Vfunc_uvm_bitstream_to_string__34__value[60U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[60U] 
                   & __Vtemp_3[60U]);
            __Vfunc_uvm_bitstream_to_string__34__value[61U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[61U] 
                   & __Vtemp_3[61U]);
            __Vfunc_uvm_bitstream_to_string__34__value[62U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[62U] 
                   & __Vtemp_3[62U]);
            __Vfunc_uvm_bitstream_to_string__34__value[63U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[63U] 
                   & __Vtemp_3[63U]);
            __Vfunc_uvm_bitstream_to_string__34__value[64U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[64U] 
                   & __Vtemp_3[64U]);
            __Vfunc_uvm_bitstream_to_string__34__value[65U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[65U] 
                   & __Vtemp_3[65U]);
            __Vfunc_uvm_bitstream_to_string__34__value[66U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[66U] 
                   & __Vtemp_3[66U]);
            __Vfunc_uvm_bitstream_to_string__34__value[67U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[67U] 
                   & __Vtemp_3[67U]);
            __Vfunc_uvm_bitstream_to_string__34__value[68U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[68U] 
                   & __Vtemp_3[68U]);
            __Vfunc_uvm_bitstream_to_string__34__value[69U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[69U] 
                   & __Vtemp_3[69U]);
            __Vfunc_uvm_bitstream_to_string__34__value[70U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[70U] 
                   & __Vtemp_3[70U]);
            __Vfunc_uvm_bitstream_to_string__34__value[71U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[71U] 
                   & __Vtemp_3[71U]);
            __Vfunc_uvm_bitstream_to_string__34__value[72U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[72U] 
                   & __Vtemp_3[72U]);
            __Vfunc_uvm_bitstream_to_string__34__value[73U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[73U] 
                   & __Vtemp_3[73U]);
            __Vfunc_uvm_bitstream_to_string__34__value[74U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[74U] 
                   & __Vtemp_3[74U]);
            __Vfunc_uvm_bitstream_to_string__34__value[75U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[75U] 
                   & __Vtemp_3[75U]);
            __Vfunc_uvm_bitstream_to_string__34__value[76U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[76U] 
                   & __Vtemp_3[76U]);
            __Vfunc_uvm_bitstream_to_string__34__value[77U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[77U] 
                   & __Vtemp_3[77U]);
            __Vfunc_uvm_bitstream_to_string__34__value[78U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[78U] 
                   & __Vtemp_3[78U]);
            __Vfunc_uvm_bitstream_to_string__34__value[79U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[79U] 
                   & __Vtemp_3[79U]);
            __Vfunc_uvm_bitstream_to_string__34__value[80U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[80U] 
                   & __Vtemp_3[80U]);
            __Vfunc_uvm_bitstream_to_string__34__value[81U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[81U] 
                   & __Vtemp_3[81U]);
            __Vfunc_uvm_bitstream_to_string__34__value[82U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[82U] 
                   & __Vtemp_3[82U]);
            __Vfunc_uvm_bitstream_to_string__34__value[83U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[83U] 
                   & __Vtemp_3[83U]);
            __Vfunc_uvm_bitstream_to_string__34__value[84U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[84U] 
                   & __Vtemp_3[84U]);
            __Vfunc_uvm_bitstream_to_string__34__value[85U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[85U] 
                   & __Vtemp_3[85U]);
            __Vfunc_uvm_bitstream_to_string__34__value[86U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[86U] 
                   & __Vtemp_3[86U]);
            __Vfunc_uvm_bitstream_to_string__34__value[87U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[87U] 
                   & __Vtemp_3[87U]);
            __Vfunc_uvm_bitstream_to_string__34__value[88U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[88U] 
                   & __Vtemp_3[88U]);
            __Vfunc_uvm_bitstream_to_string__34__value[89U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[89U] 
                   & __Vtemp_3[89U]);
            __Vfunc_uvm_bitstream_to_string__34__value[90U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[90U] 
                   & __Vtemp_3[90U]);
            __Vfunc_uvm_bitstream_to_string__34__value[91U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[91U] 
                   & __Vtemp_3[91U]);
            __Vfunc_uvm_bitstream_to_string__34__value[92U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[92U] 
                   & __Vtemp_3[92U]);
            __Vfunc_uvm_bitstream_to_string__34__value[93U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[93U] 
                   & __Vtemp_3[93U]);
            __Vfunc_uvm_bitstream_to_string__34__value[94U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[94U] 
                   & __Vtemp_3[94U]);
            __Vfunc_uvm_bitstream_to_string__34__value[95U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[95U] 
                   & __Vtemp_3[95U]);
            __Vfunc_uvm_bitstream_to_string__34__value[96U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[96U] 
                   & __Vtemp_3[96U]);
            __Vfunc_uvm_bitstream_to_string__34__value[97U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[97U] 
                   & __Vtemp_3[97U]);
            __Vfunc_uvm_bitstream_to_string__34__value[98U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[98U] 
                   & __Vtemp_3[98U]);
            __Vfunc_uvm_bitstream_to_string__34__value[99U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[99U] 
                   & __Vtemp_3[99U]);
            __Vfunc_uvm_bitstream_to_string__34__value[100U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[100U] 
                   & __Vtemp_3[100U]);
            __Vfunc_uvm_bitstream_to_string__34__value[101U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[101U] 
                   & __Vtemp_3[101U]);
            __Vfunc_uvm_bitstream_to_string__34__value[102U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[102U] 
                   & __Vtemp_3[102U]);
            __Vfunc_uvm_bitstream_to_string__34__value[103U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[103U] 
                   & __Vtemp_3[103U]);
            __Vfunc_uvm_bitstream_to_string__34__value[104U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[104U] 
                   & __Vtemp_3[104U]);
            __Vfunc_uvm_bitstream_to_string__34__value[105U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[105U] 
                   & __Vtemp_3[105U]);
            __Vfunc_uvm_bitstream_to_string__34__value[106U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[106U] 
                   & __Vtemp_3[106U]);
            __Vfunc_uvm_bitstream_to_string__34__value[107U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[107U] 
                   & __Vtemp_3[107U]);
            __Vfunc_uvm_bitstream_to_string__34__value[108U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[108U] 
                   & __Vtemp_3[108U]);
            __Vfunc_uvm_bitstream_to_string__34__value[109U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[109U] 
                   & __Vtemp_3[109U]);
            __Vfunc_uvm_bitstream_to_string__34__value[110U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[110U] 
                   & __Vtemp_3[110U]);
            __Vfunc_uvm_bitstream_to_string__34__value[111U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[111U] 
                   & __Vtemp_3[111U]);
            __Vfunc_uvm_bitstream_to_string__34__value[112U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[112U] 
                   & __Vtemp_3[112U]);
            __Vfunc_uvm_bitstream_to_string__34__value[113U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[113U] 
                   & __Vtemp_3[113U]);
            __Vfunc_uvm_bitstream_to_string__34__value[114U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[114U] 
                   & __Vtemp_3[114U]);
            __Vfunc_uvm_bitstream_to_string__34__value[115U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[115U] 
                   & __Vtemp_3[115U]);
            __Vfunc_uvm_bitstream_to_string__34__value[116U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[116U] 
                   & __Vtemp_3[116U]);
            __Vfunc_uvm_bitstream_to_string__34__value[117U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[117U] 
                   & __Vtemp_3[117U]);
            __Vfunc_uvm_bitstream_to_string__34__value[118U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[118U] 
                   & __Vtemp_3[118U]);
            __Vfunc_uvm_bitstream_to_string__34__value[119U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[119U] 
                   & __Vtemp_3[119U]);
            __Vfunc_uvm_bitstream_to_string__34__value[120U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[120U] 
                   & __Vtemp_3[120U]);
            __Vfunc_uvm_bitstream_to_string__34__value[121U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[121U] 
                   & __Vtemp_3[121U]);
            __Vfunc_uvm_bitstream_to_string__34__value[122U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[122U] 
                   & __Vtemp_3[122U]);
            __Vfunc_uvm_bitstream_to_string__34__value[123U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[123U] 
                   & __Vtemp_3[123U]);
            __Vfunc_uvm_bitstream_to_string__34__value[124U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[124U] 
                   & __Vtemp_3[124U]);
            __Vfunc_uvm_bitstream_to_string__34__value[125U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[125U] 
                   & __Vtemp_3[125U]);
            __Vfunc_uvm_bitstream_to_string__34__value[126U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[126U] 
                   & __Vtemp_3[126U]);
            __Vfunc_uvm_bitstream_to_string__34__value[127U] 
                = (__Vfunc_uvm_bitstream_to_string__34__value[127U] 
                   & __Vtemp_3[127U]);
            ++(vlSymsp->__Vcoverage[356]);
            __VlefCall_2__uvm_bitstream_to_string = 
                ((0x01000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                  ? VL_SFORMATF_N_NX("%0@%0b",0,-1,
                                     &(this->__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                     4096,__Vfunc_uvm_bitstream_to_string__34__value.data()) 
                  : ((0x06000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                      ? VL_SFORMATF_N_NX("%0@%0o",0,
                                         -1,&(this->__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                         4096,__Vfunc_uvm_bitstream_to_string__34__value.data()) 
                      : ((0x03000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                          ? VL_SFORMATF_N_NX("%0@%0d",0,
                                             -1,&(this->__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                             4096,__Vfunc_uvm_bitstream_to_string__34__value.data()) 
                          : ((0x08000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                              ? VL_SFORMATF_N_NX("%0@%0s",0,
                                                 -1,
                                                 &(this->__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                 4096,
                                                 __Vfunc_uvm_bitstream_to_string__34__value.data()) 
                              : ((0x09000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                                  ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                     -1,
                                                     &(this->__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                     4096,
                                                     __Vfunc_uvm_bitstream_to_string__34__value.data(),
                                                     -12) 
                                  : ((0x02000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                                      ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                         -1,
                                                         &(this->__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                         4096,
                                                         __Vfunc_uvm_bitstream_to_string__34__value.data()) 
                                      : VL_SFORMATF_N_NX("%0@%0x",0,
                                                         -1,
                                                         &(this->__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                         4096,
                                                         __Vfunc_uvm_bitstream_to_string__34__value.data()) ))))));
            __Vlabel0: ;
        }
        if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__34__radix) 
             & (__Vfunc_uvm_bitstream_to_string__34__value
                [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__34__size 
                                  - (IData)(1U)) >> 5U))] 
                >> (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__34__size 
                                   - (IData)(1U)))))) {
            ++(vlSymsp->__Vcoverage[351]);
        }
        if ((1U & (~ (__Vfunc_uvm_bitstream_to_string__34__value
                      [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__34__size 
                                        - (IData)(1U)) 
                                       >> 5U))] >> 
                      (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__34__size 
                                      - (IData)(1U))))))) {
            ++(vlSymsp->__Vcoverage[352]);
        }
        if ((0x02000000U != __Vfunc_uvm_bitstream_to_string__34__radix)) {
            ++(vlSymsp->__Vcoverage[353]);
        }
        ++(vlSymsp->__Vcoverage[364]);
        __Vtemp_4 = Vtb_rng___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 878)
                      ->__PVT__m_file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@   RADIX:%@ BITS=%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      __VlefCall_1__get_handle,-1,&(nm),
                      -1,&(__VlefCall_2__uvm_bitstream_to_string),
                      -1,&(__Vtemp_4),32,numbits);
        ++(vlSymsp->__Vcoverage[11043]);
    } else {
        ++(vlSymsp->__Vcoverage[11044]);
    }
    ++(vlSymsp->__Vcoverage[11045]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute_int(Vtb_rng__Syms* __restrict vlSymsp, std::string nm, QData/*63:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute_int\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_uvm_integral_to_string__37__value;
    __Vfunc_uvm_integral_to_string__37__value = 0;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__37__size;
    __Vfunc_uvm_integral_to_string__37__size = 0;
    IData/*27:0*/ __Vfunc_uvm_integral_to_string__37__radix;
    __Vfunc_uvm_integral_to_string__37__radix = 0;
    std::string __Vtemp_1;
    // Body
    std::string __VlefCall_2__uvm_integral_to_string;
    IData/*31:0*/ __VlefCall_1__get_handle;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 903)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
        this->__Vfunc_uvm_integral_to_string__37__radix_str = ""s;
        __Vfunc_uvm_integral_to_string__37__radix = radix;
        __Vfunc_uvm_integral_to_string__37__size = numbits;
        __Vfunc_uvm_integral_to_string__37__value = value;
        {
            if (((0x02000000U == __Vfunc_uvm_integral_to_string__37__radix) 
                 & (IData)((__Vfunc_uvm_integral_to_string__37__value 
                            >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__37__size 
                                               - (IData)(1U))))))) {
                __VlefCall_2__uvm_integral_to_string 
                    = VL_SFORMATF_N_NX("%0d",0,64,__Vfunc_uvm_integral_to_string__37__value) ;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[366]);
            }
            __Vfunc_uvm_integral_to_string__37__value 
                = (__Vfunc_uvm_integral_to_string__37__value 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vfunc_uvm_integral_to_string__37__size) 
                      - 1ULL));
            ++(vlSymsp->__Vcoverage[372]);
            __VlefCall_2__uvm_integral_to_string = 
                ((0x01000000U == __Vfunc_uvm_integral_to_string__37__radix)
                  ? VL_SFORMATF_N_NX("%0@%0b",0,-1,
                                     &(this->__Vfunc_uvm_integral_to_string__37__radix_str),
                                     64,__Vfunc_uvm_integral_to_string__37__value) 
                  : ((0x06000000U == __Vfunc_uvm_integral_to_string__37__radix)
                      ? VL_SFORMATF_N_NX("%0@%0o",0,
                                         -1,&(this->__Vfunc_uvm_integral_to_string__37__radix_str),
                                         64,__Vfunc_uvm_integral_to_string__37__value) 
                      : ((0x03000000U == __Vfunc_uvm_integral_to_string__37__radix)
                          ? VL_SFORMATF_N_NX("%0@%0d",0,
                                             -1,&(this->__Vfunc_uvm_integral_to_string__37__radix_str),
                                             64,__Vfunc_uvm_integral_to_string__37__value) 
                          : ((0x08000000U == __Vfunc_uvm_integral_to_string__37__radix)
                              ? VL_SFORMATF_N_NX("%0@%0s",0,
                                                 -1,
                                                 &(this->__Vfunc_uvm_integral_to_string__37__radix_str),
                                                 64,
                                                 __Vfunc_uvm_integral_to_string__37__value) 
                              : ((0x09000000U == __Vfunc_uvm_integral_to_string__37__radix)
                                  ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                     -1,
                                                     &(this->__Vfunc_uvm_integral_to_string__37__radix_str),
                                                     64,
                                                     __Vfunc_uvm_integral_to_string__37__value,
                                                     -12) 
                                  : ((0x02000000U == __Vfunc_uvm_integral_to_string__37__radix)
                                      ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                         -1,
                                                         &(this->__Vfunc_uvm_integral_to_string__37__radix_str),
                                                         64,
                                                         __Vfunc_uvm_integral_to_string__37__value) 
                                      : VL_SFORMATF_N_NX("%0@%0x",0,
                                                         -1,
                                                         &(this->__Vfunc_uvm_integral_to_string__37__radix_str),
                                                         64,
                                                         __Vfunc_uvm_integral_to_string__37__value) ))))));
            __Vlabel0: ;
        }
        if (((0x02000000U == __Vfunc_uvm_integral_to_string__37__radix) 
             & (IData)((__Vfunc_uvm_integral_to_string__37__value 
                        >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__37__size 
                                           - (IData)(1U))))))) {
            ++(vlSymsp->__Vcoverage[367]);
        }
        if ((1U & (~ (IData)((__Vfunc_uvm_integral_to_string__37__value 
                              >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__37__size 
                                                 - (IData)(1U)))))))) {
            ++(vlSymsp->__Vcoverage[368]);
        }
        if ((0x02000000U != __Vfunc_uvm_integral_to_string__37__radix)) {
            ++(vlSymsp->__Vcoverage[369]);
        }
        ++(vlSymsp->__Vcoverage[380]);
        __Vtemp_1 = Vtb_rng___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 904)
                      ->__PVT__m_file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@   RADIX:%@ BITS=%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      __VlefCall_1__get_handle,-1,&(nm),
                      -1,&(__VlefCall_2__uvm_integral_to_string),
                      -1,&(__Vtemp_1),32,numbits);
        ++(vlSymsp->__Vcoverage[11046]);
    } else {
        ++(vlSymsp->__Vcoverage[11047]);
    }
    ++(vlSymsp->__Vcoverage[11048]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_open_file(Vtb_rng__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_open_file\n"); );
    // Body
    open_file__Vfuncrtn = 0U;
    if (this->__PVT__filename_set) {
        ++(vlSymsp->__Vcoverage[11050]);
    } else {
        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 936)->__VnoInFunc_set_file_name(vlSymsp, this->__PVT__filename);
        ++(vlSymsp->__Vcoverage[11049]);
    }
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 938)->__VnoInFunc_open_db(vlSymsp, open_file__Vfuncrtn);
    if ((1U & (~ (IData)(this->__PVT__filename_set)))) {
        ++(vlSymsp->__Vcoverage[11051]);
    }
    if (this->__PVT__filename_set) {
        ++(vlSymsp->__Vcoverage[11052]);
    }
    ++(vlSymsp->__Vcoverage[11053]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create_stream(Vtb_rng__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create_stream\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_1__open_stream;
    CData/*0:0*/ __VlefCall_0__open_file;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_text_tr_stream> stream;
    {
        create_stream__Vfuncrtn = 0U;
        this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
        if (__VlefCall_0__open_file) {
            VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 950)->__VnoInFunc_open_stream(vlProcess, vlSymsp, name, scope, t, __VlefCall_1__open_stream);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__open_stream, stream);
            if (VL_UNLIKELY(((! __VlefExpr_2)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_recorder.svh:950: Assertion failed in %Nuvm_pkg.uvm_text_recorder.create_stream: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 950, "");
            }
            VL_NULL_CHECK(stream, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 951)->__VnoInFunc_get_handle(vlSymsp, create_stream__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11055]);
        }
        create_stream__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11056]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_set_attribute(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_set_attribute\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    IData/*31:0*/ unnamedblk3__DOT__file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        unnamedblk3__DOT__file = VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 964)
            ->__PVT__m_file;
        VL_FWRITEF_NX(unnamedblk3__DOT__file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      txh,-1,&(nm),-1,&(value));
        ++(vlSymsp->__Vcoverage[11057]);
    } else {
        ++(vlSymsp->__Vcoverage[11058]);
    }
    ++(vlSymsp->__Vcoverage[11059]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_set_attribute(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_set_attribute\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__45__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__45__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__45__size;
    __Vfunc_uvm_bitstream_to_string__45__size = 0;
    IData/*27:0*/ __Vfunc_uvm_bitstream_to_string__45__radix;
    __Vfunc_uvm_bitstream_to_string__45__radix = 0;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    IData/*31:0*/ __Vilp1;
    // Body
    std::string __VlefCall_1__uvm_bitstream_to_string;
    CData/*0:0*/ __VlefCall_0__open_file;
    IData/*31:0*/ unnamedblk4__DOT__file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        unnamedblk4__DOT__file = VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 979)
            ->__PVT__m_file;
        this->__Vfunc_uvm_bitstream_to_string__45__radix_str = ""s;
        __Vfunc_uvm_bitstream_to_string__45__radix 
            = radix;
        __Vfunc_uvm_bitstream_to_string__45__size = numbits;
        __Vfunc_uvm_bitstream_to_string__45__value[0U] 
            = value[0U];
        __Vfunc_uvm_bitstream_to_string__45__value[1U] 
            = value[1U];
        __Vfunc_uvm_bitstream_to_string__45__value[2U] 
            = value[2U];
        __Vfunc_uvm_bitstream_to_string__45__value[3U] 
            = value[3U];
        __Vfunc_uvm_bitstream_to_string__45__value[4U] 
            = value[4U];
        __Vfunc_uvm_bitstream_to_string__45__value[5U] 
            = value[5U];
        __Vfunc_uvm_bitstream_to_string__45__value[6U] 
            = value[6U];
        __Vfunc_uvm_bitstream_to_string__45__value[7U] 
            = value[7U];
        __Vfunc_uvm_bitstream_to_string__45__value[8U] 
            = value[8U];
        __Vfunc_uvm_bitstream_to_string__45__value[9U] 
            = value[9U];
        __Vfunc_uvm_bitstream_to_string__45__value[10U] 
            = value[10U];
        __Vfunc_uvm_bitstream_to_string__45__value[11U] 
            = value[11U];
        __Vfunc_uvm_bitstream_to_string__45__value[12U] 
            = value[12U];
        __Vfunc_uvm_bitstream_to_string__45__value[13U] 
            = value[13U];
        __Vfunc_uvm_bitstream_to_string__45__value[14U] 
            = value[14U];
        __Vfunc_uvm_bitstream_to_string__45__value[15U] 
            = value[15U];
        __Vfunc_uvm_bitstream_to_string__45__value[16U] 
            = value[16U];
        __Vfunc_uvm_bitstream_to_string__45__value[17U] 
            = value[17U];
        __Vfunc_uvm_bitstream_to_string__45__value[18U] 
            = value[18U];
        __Vfunc_uvm_bitstream_to_string__45__value[19U] 
            = value[19U];
        __Vfunc_uvm_bitstream_to_string__45__value[20U] 
            = value[20U];
        __Vfunc_uvm_bitstream_to_string__45__value[21U] 
            = value[21U];
        __Vfunc_uvm_bitstream_to_string__45__value[22U] 
            = value[22U];
        __Vfunc_uvm_bitstream_to_string__45__value[23U] 
            = value[23U];
        __Vfunc_uvm_bitstream_to_string__45__value[24U] 
            = value[24U];
        __Vfunc_uvm_bitstream_to_string__45__value[25U] 
            = value[25U];
        __Vfunc_uvm_bitstream_to_string__45__value[26U] 
            = value[26U];
        __Vfunc_uvm_bitstream_to_string__45__value[27U] 
            = value[27U];
        __Vfunc_uvm_bitstream_to_string__45__value[28U] 
            = value[28U];
        __Vfunc_uvm_bitstream_to_string__45__value[29U] 
            = value[29U];
        __Vfunc_uvm_bitstream_to_string__45__value[30U] 
            = value[30U];
        __Vfunc_uvm_bitstream_to_string__45__value[31U] 
            = value[31U];
        __Vilp1 = 0x00000020U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vfunc_uvm_bitstream_to_string__45__value[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        {
            if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__45__radix) 
                 & (__Vfunc_uvm_bitstream_to_string__45__value
                    [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__45__size 
                                      - (IData)(1U)) 
                                     >> 5U))] >> (0x0000001fU 
                                                  & (__Vfunc_uvm_bitstream_to_string__45__size 
                                                     - (IData)(1U)))))) {
                __VlefCall_1__uvm_bitstream_to_string 
                    = VL_SFORMATF_N_NX("%0d",0,4096,
                                       __Vfunc_uvm_bitstream_to_string__45__value.data()) ;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[350]);
            }
            VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, Vtb_rng__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__45__size);
            VL_SUB_W(128, __Vtemp_3, __Vtemp_2, Vtb_rng__ConstPool__CONST_h1958c06c_0);
            __Vfunc_uvm_bitstream_to_string__45__value[0U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[0U] 
                   & __Vtemp_3[0U]);
            __Vfunc_uvm_bitstream_to_string__45__value[1U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[1U] 
                   & __Vtemp_3[1U]);
            __Vfunc_uvm_bitstream_to_string__45__value[2U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[2U] 
                   & __Vtemp_3[2U]);
            __Vfunc_uvm_bitstream_to_string__45__value[3U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[3U] 
                   & __Vtemp_3[3U]);
            __Vfunc_uvm_bitstream_to_string__45__value[4U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[4U] 
                   & __Vtemp_3[4U]);
            __Vfunc_uvm_bitstream_to_string__45__value[5U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[5U] 
                   & __Vtemp_3[5U]);
            __Vfunc_uvm_bitstream_to_string__45__value[6U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[6U] 
                   & __Vtemp_3[6U]);
            __Vfunc_uvm_bitstream_to_string__45__value[7U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[7U] 
                   & __Vtemp_3[7U]);
            __Vfunc_uvm_bitstream_to_string__45__value[8U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[8U] 
                   & __Vtemp_3[8U]);
            __Vfunc_uvm_bitstream_to_string__45__value[9U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[9U] 
                   & __Vtemp_3[9U]);
            __Vfunc_uvm_bitstream_to_string__45__value[10U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[10U] 
                   & __Vtemp_3[10U]);
            __Vfunc_uvm_bitstream_to_string__45__value[11U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[11U] 
                   & __Vtemp_3[11U]);
            __Vfunc_uvm_bitstream_to_string__45__value[12U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[12U] 
                   & __Vtemp_3[12U]);
            __Vfunc_uvm_bitstream_to_string__45__value[13U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[13U] 
                   & __Vtemp_3[13U]);
            __Vfunc_uvm_bitstream_to_string__45__value[14U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[14U] 
                   & __Vtemp_3[14U]);
            __Vfunc_uvm_bitstream_to_string__45__value[15U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[15U] 
                   & __Vtemp_3[15U]);
            __Vfunc_uvm_bitstream_to_string__45__value[16U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[16U] 
                   & __Vtemp_3[16U]);
            __Vfunc_uvm_bitstream_to_string__45__value[17U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[17U] 
                   & __Vtemp_3[17U]);
            __Vfunc_uvm_bitstream_to_string__45__value[18U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[18U] 
                   & __Vtemp_3[18U]);
            __Vfunc_uvm_bitstream_to_string__45__value[19U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[19U] 
                   & __Vtemp_3[19U]);
            __Vfunc_uvm_bitstream_to_string__45__value[20U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[20U] 
                   & __Vtemp_3[20U]);
            __Vfunc_uvm_bitstream_to_string__45__value[21U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[21U] 
                   & __Vtemp_3[21U]);
            __Vfunc_uvm_bitstream_to_string__45__value[22U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[22U] 
                   & __Vtemp_3[22U]);
            __Vfunc_uvm_bitstream_to_string__45__value[23U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[23U] 
                   & __Vtemp_3[23U]);
            __Vfunc_uvm_bitstream_to_string__45__value[24U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[24U] 
                   & __Vtemp_3[24U]);
            __Vfunc_uvm_bitstream_to_string__45__value[25U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[25U] 
                   & __Vtemp_3[25U]);
            __Vfunc_uvm_bitstream_to_string__45__value[26U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[26U] 
                   & __Vtemp_3[26U]);
            __Vfunc_uvm_bitstream_to_string__45__value[27U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[27U] 
                   & __Vtemp_3[27U]);
            __Vfunc_uvm_bitstream_to_string__45__value[28U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[28U] 
                   & __Vtemp_3[28U]);
            __Vfunc_uvm_bitstream_to_string__45__value[29U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[29U] 
                   & __Vtemp_3[29U]);
            __Vfunc_uvm_bitstream_to_string__45__value[30U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[30U] 
                   & __Vtemp_3[30U]);
            __Vfunc_uvm_bitstream_to_string__45__value[31U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[31U] 
                   & __Vtemp_3[31U]);
            __Vfunc_uvm_bitstream_to_string__45__value[32U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[32U] 
                   & __Vtemp_3[32U]);
            __Vfunc_uvm_bitstream_to_string__45__value[33U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[33U] 
                   & __Vtemp_3[33U]);
            __Vfunc_uvm_bitstream_to_string__45__value[34U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[34U] 
                   & __Vtemp_3[34U]);
            __Vfunc_uvm_bitstream_to_string__45__value[35U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[35U] 
                   & __Vtemp_3[35U]);
            __Vfunc_uvm_bitstream_to_string__45__value[36U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[36U] 
                   & __Vtemp_3[36U]);
            __Vfunc_uvm_bitstream_to_string__45__value[37U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[37U] 
                   & __Vtemp_3[37U]);
            __Vfunc_uvm_bitstream_to_string__45__value[38U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[38U] 
                   & __Vtemp_3[38U]);
            __Vfunc_uvm_bitstream_to_string__45__value[39U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[39U] 
                   & __Vtemp_3[39U]);
            __Vfunc_uvm_bitstream_to_string__45__value[40U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[40U] 
                   & __Vtemp_3[40U]);
            __Vfunc_uvm_bitstream_to_string__45__value[41U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[41U] 
                   & __Vtemp_3[41U]);
            __Vfunc_uvm_bitstream_to_string__45__value[42U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[42U] 
                   & __Vtemp_3[42U]);
            __Vfunc_uvm_bitstream_to_string__45__value[43U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[43U] 
                   & __Vtemp_3[43U]);
            __Vfunc_uvm_bitstream_to_string__45__value[44U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[44U] 
                   & __Vtemp_3[44U]);
            __Vfunc_uvm_bitstream_to_string__45__value[45U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[45U] 
                   & __Vtemp_3[45U]);
            __Vfunc_uvm_bitstream_to_string__45__value[46U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[46U] 
                   & __Vtemp_3[46U]);
            __Vfunc_uvm_bitstream_to_string__45__value[47U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[47U] 
                   & __Vtemp_3[47U]);
            __Vfunc_uvm_bitstream_to_string__45__value[48U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[48U] 
                   & __Vtemp_3[48U]);
            __Vfunc_uvm_bitstream_to_string__45__value[49U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[49U] 
                   & __Vtemp_3[49U]);
            __Vfunc_uvm_bitstream_to_string__45__value[50U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[50U] 
                   & __Vtemp_3[50U]);
            __Vfunc_uvm_bitstream_to_string__45__value[51U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[51U] 
                   & __Vtemp_3[51U]);
            __Vfunc_uvm_bitstream_to_string__45__value[52U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[52U] 
                   & __Vtemp_3[52U]);
            __Vfunc_uvm_bitstream_to_string__45__value[53U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[53U] 
                   & __Vtemp_3[53U]);
            __Vfunc_uvm_bitstream_to_string__45__value[54U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[54U] 
                   & __Vtemp_3[54U]);
            __Vfunc_uvm_bitstream_to_string__45__value[55U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[55U] 
                   & __Vtemp_3[55U]);
            __Vfunc_uvm_bitstream_to_string__45__value[56U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[56U] 
                   & __Vtemp_3[56U]);
            __Vfunc_uvm_bitstream_to_string__45__value[57U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[57U] 
                   & __Vtemp_3[57U]);
            __Vfunc_uvm_bitstream_to_string__45__value[58U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[58U] 
                   & __Vtemp_3[58U]);
            __Vfunc_uvm_bitstream_to_string__45__value[59U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[59U] 
                   & __Vtemp_3[59U]);
            __Vfunc_uvm_bitstream_to_string__45__value[60U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[60U] 
                   & __Vtemp_3[60U]);
            __Vfunc_uvm_bitstream_to_string__45__value[61U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[61U] 
                   & __Vtemp_3[61U]);
            __Vfunc_uvm_bitstream_to_string__45__value[62U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[62U] 
                   & __Vtemp_3[62U]);
            __Vfunc_uvm_bitstream_to_string__45__value[63U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[63U] 
                   & __Vtemp_3[63U]);
            __Vfunc_uvm_bitstream_to_string__45__value[64U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[64U] 
                   & __Vtemp_3[64U]);
            __Vfunc_uvm_bitstream_to_string__45__value[65U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[65U] 
                   & __Vtemp_3[65U]);
            __Vfunc_uvm_bitstream_to_string__45__value[66U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[66U] 
                   & __Vtemp_3[66U]);
            __Vfunc_uvm_bitstream_to_string__45__value[67U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[67U] 
                   & __Vtemp_3[67U]);
            __Vfunc_uvm_bitstream_to_string__45__value[68U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[68U] 
                   & __Vtemp_3[68U]);
            __Vfunc_uvm_bitstream_to_string__45__value[69U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[69U] 
                   & __Vtemp_3[69U]);
            __Vfunc_uvm_bitstream_to_string__45__value[70U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[70U] 
                   & __Vtemp_3[70U]);
            __Vfunc_uvm_bitstream_to_string__45__value[71U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[71U] 
                   & __Vtemp_3[71U]);
            __Vfunc_uvm_bitstream_to_string__45__value[72U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[72U] 
                   & __Vtemp_3[72U]);
            __Vfunc_uvm_bitstream_to_string__45__value[73U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[73U] 
                   & __Vtemp_3[73U]);
            __Vfunc_uvm_bitstream_to_string__45__value[74U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[74U] 
                   & __Vtemp_3[74U]);
            __Vfunc_uvm_bitstream_to_string__45__value[75U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[75U] 
                   & __Vtemp_3[75U]);
            __Vfunc_uvm_bitstream_to_string__45__value[76U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[76U] 
                   & __Vtemp_3[76U]);
            __Vfunc_uvm_bitstream_to_string__45__value[77U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[77U] 
                   & __Vtemp_3[77U]);
            __Vfunc_uvm_bitstream_to_string__45__value[78U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[78U] 
                   & __Vtemp_3[78U]);
            __Vfunc_uvm_bitstream_to_string__45__value[79U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[79U] 
                   & __Vtemp_3[79U]);
            __Vfunc_uvm_bitstream_to_string__45__value[80U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[80U] 
                   & __Vtemp_3[80U]);
            __Vfunc_uvm_bitstream_to_string__45__value[81U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[81U] 
                   & __Vtemp_3[81U]);
            __Vfunc_uvm_bitstream_to_string__45__value[82U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[82U] 
                   & __Vtemp_3[82U]);
            __Vfunc_uvm_bitstream_to_string__45__value[83U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[83U] 
                   & __Vtemp_3[83U]);
            __Vfunc_uvm_bitstream_to_string__45__value[84U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[84U] 
                   & __Vtemp_3[84U]);
            __Vfunc_uvm_bitstream_to_string__45__value[85U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[85U] 
                   & __Vtemp_3[85U]);
            __Vfunc_uvm_bitstream_to_string__45__value[86U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[86U] 
                   & __Vtemp_3[86U]);
            __Vfunc_uvm_bitstream_to_string__45__value[87U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[87U] 
                   & __Vtemp_3[87U]);
            __Vfunc_uvm_bitstream_to_string__45__value[88U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[88U] 
                   & __Vtemp_3[88U]);
            __Vfunc_uvm_bitstream_to_string__45__value[89U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[89U] 
                   & __Vtemp_3[89U]);
            __Vfunc_uvm_bitstream_to_string__45__value[90U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[90U] 
                   & __Vtemp_3[90U]);
            __Vfunc_uvm_bitstream_to_string__45__value[91U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[91U] 
                   & __Vtemp_3[91U]);
            __Vfunc_uvm_bitstream_to_string__45__value[92U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[92U] 
                   & __Vtemp_3[92U]);
            __Vfunc_uvm_bitstream_to_string__45__value[93U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[93U] 
                   & __Vtemp_3[93U]);
            __Vfunc_uvm_bitstream_to_string__45__value[94U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[94U] 
                   & __Vtemp_3[94U]);
            __Vfunc_uvm_bitstream_to_string__45__value[95U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[95U] 
                   & __Vtemp_3[95U]);
            __Vfunc_uvm_bitstream_to_string__45__value[96U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[96U] 
                   & __Vtemp_3[96U]);
            __Vfunc_uvm_bitstream_to_string__45__value[97U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[97U] 
                   & __Vtemp_3[97U]);
            __Vfunc_uvm_bitstream_to_string__45__value[98U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[98U] 
                   & __Vtemp_3[98U]);
            __Vfunc_uvm_bitstream_to_string__45__value[99U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[99U] 
                   & __Vtemp_3[99U]);
            __Vfunc_uvm_bitstream_to_string__45__value[100U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[100U] 
                   & __Vtemp_3[100U]);
            __Vfunc_uvm_bitstream_to_string__45__value[101U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[101U] 
                   & __Vtemp_3[101U]);
            __Vfunc_uvm_bitstream_to_string__45__value[102U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[102U] 
                   & __Vtemp_3[102U]);
            __Vfunc_uvm_bitstream_to_string__45__value[103U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[103U] 
                   & __Vtemp_3[103U]);
            __Vfunc_uvm_bitstream_to_string__45__value[104U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[104U] 
                   & __Vtemp_3[104U]);
            __Vfunc_uvm_bitstream_to_string__45__value[105U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[105U] 
                   & __Vtemp_3[105U]);
            __Vfunc_uvm_bitstream_to_string__45__value[106U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[106U] 
                   & __Vtemp_3[106U]);
            __Vfunc_uvm_bitstream_to_string__45__value[107U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[107U] 
                   & __Vtemp_3[107U]);
            __Vfunc_uvm_bitstream_to_string__45__value[108U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[108U] 
                   & __Vtemp_3[108U]);
            __Vfunc_uvm_bitstream_to_string__45__value[109U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[109U] 
                   & __Vtemp_3[109U]);
            __Vfunc_uvm_bitstream_to_string__45__value[110U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[110U] 
                   & __Vtemp_3[110U]);
            __Vfunc_uvm_bitstream_to_string__45__value[111U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[111U] 
                   & __Vtemp_3[111U]);
            __Vfunc_uvm_bitstream_to_string__45__value[112U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[112U] 
                   & __Vtemp_3[112U]);
            __Vfunc_uvm_bitstream_to_string__45__value[113U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[113U] 
                   & __Vtemp_3[113U]);
            __Vfunc_uvm_bitstream_to_string__45__value[114U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[114U] 
                   & __Vtemp_3[114U]);
            __Vfunc_uvm_bitstream_to_string__45__value[115U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[115U] 
                   & __Vtemp_3[115U]);
            __Vfunc_uvm_bitstream_to_string__45__value[116U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[116U] 
                   & __Vtemp_3[116U]);
            __Vfunc_uvm_bitstream_to_string__45__value[117U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[117U] 
                   & __Vtemp_3[117U]);
            __Vfunc_uvm_bitstream_to_string__45__value[118U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[118U] 
                   & __Vtemp_3[118U]);
            __Vfunc_uvm_bitstream_to_string__45__value[119U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[119U] 
                   & __Vtemp_3[119U]);
            __Vfunc_uvm_bitstream_to_string__45__value[120U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[120U] 
                   & __Vtemp_3[120U]);
            __Vfunc_uvm_bitstream_to_string__45__value[121U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[121U] 
                   & __Vtemp_3[121U]);
            __Vfunc_uvm_bitstream_to_string__45__value[122U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[122U] 
                   & __Vtemp_3[122U]);
            __Vfunc_uvm_bitstream_to_string__45__value[123U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[123U] 
                   & __Vtemp_3[123U]);
            __Vfunc_uvm_bitstream_to_string__45__value[124U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[124U] 
                   & __Vtemp_3[124U]);
            __Vfunc_uvm_bitstream_to_string__45__value[125U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[125U] 
                   & __Vtemp_3[125U]);
            __Vfunc_uvm_bitstream_to_string__45__value[126U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[126U] 
                   & __Vtemp_3[126U]);
            __Vfunc_uvm_bitstream_to_string__45__value[127U] 
                = (__Vfunc_uvm_bitstream_to_string__45__value[127U] 
                   & __Vtemp_3[127U]);
            ++(vlSymsp->__Vcoverage[356]);
            __VlefCall_1__uvm_bitstream_to_string = 
                ((0x01000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                  ? VL_SFORMATF_N_NX("%0@%0b",0,-1,
                                     &(this->__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                     4096,__Vfunc_uvm_bitstream_to_string__45__value.data()) 
                  : ((0x06000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                      ? VL_SFORMATF_N_NX("%0@%0o",0,
                                         -1,&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                         4096,__Vfunc_uvm_bitstream_to_string__45__value.data()) 
                      : ((0x03000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                          ? VL_SFORMATF_N_NX("%0@%0d",0,
                                             -1,&(this->__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                             4096,__Vfunc_uvm_bitstream_to_string__45__value.data()) 
                          : ((0x08000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                              ? VL_SFORMATF_N_NX("%0@%0s",0,
                                                 -1,
                                                 &(this->__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                 4096,
                                                 __Vfunc_uvm_bitstream_to_string__45__value.data()) 
                              : ((0x09000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                                  ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                     -1,
                                                     &(this->__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                     4096,
                                                     __Vfunc_uvm_bitstream_to_string__45__value.data(),
                                                     -12) 
                                  : ((0x02000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                                      ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                         -1,
                                                         &(this->__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                         4096,
                                                         __Vfunc_uvm_bitstream_to_string__45__value.data()) 
                                      : VL_SFORMATF_N_NX("%0@%0x",0,
                                                         -1,
                                                         &(this->__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                         4096,
                                                         __Vfunc_uvm_bitstream_to_string__45__value.data()) ))))));
            __Vlabel0: ;
        }
        if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__45__radix) 
             & (__Vfunc_uvm_bitstream_to_string__45__value
                [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__45__size 
                                  - (IData)(1U)) >> 5U))] 
                >> (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__45__size 
                                   - (IData)(1U)))))) {
            ++(vlSymsp->__Vcoverage[351]);
        }
        if ((1U & (~ (__Vfunc_uvm_bitstream_to_string__45__value
                      [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__45__size 
                                        - (IData)(1U)) 
                                       >> 5U))] >> 
                      (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__45__size 
                                      - (IData)(1U))))))) {
            ++(vlSymsp->__Vcoverage[352]);
        }
        if ((0x02000000U != __Vfunc_uvm_bitstream_to_string__45__radix)) {
            ++(vlSymsp->__Vcoverage[353]);
        }
        ++(vlSymsp->__Vcoverage[364]);
        __Vtemp_4 = Vtb_rng___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(unnamedblk4__DOT__file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@   RADIX:%@ BITS=%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      txh,-1,&(nm),-1,&(__VlefCall_1__uvm_bitstream_to_string),
                      -1,&(__Vtemp_4),32,numbits);
        ++(vlSymsp->__Vcoverage[11060]);
    } else {
        ++(vlSymsp->__Vcoverage[11061]);
    }
    ++(vlSymsp->__Vcoverage[11062]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_check_handle_kind(Vtb_rng__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_check_handle_kind\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_7;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_6__get_stream_from_handle;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> __VlefCall_5__get_recorder_from_handle;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> __VlefCall_4__get_recorder_from_handle;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_3__get_stream_from_handle;
    CData/*0:0*/ __VlefLogOr_2;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> __VlefCall_1__get_stream_from_handle;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> __VlefCall_0__get_recorder_from_handle;
    check_handle_kind__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, __VlefCall_0__get_recorder_from_handle);
    __VlefLogOr_2 = (VlNull{} != __VlefCall_0__get_recorder_from_handle);
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_get_stream_from_handle(vlSymsp, handle, __VlefCall_1__get_stream_from_handle);
        __VlefLogOr_2 = (VlNull{} != __VlefCall_1__get_stream_from_handle);
    }
    check_handle_kind__Vfuncrtn = __VlefLogOr_2;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_get_stream_from_handle(vlSymsp, handle, __VlefCall_3__get_stream_from_handle);
    if ((VlNull{} != __VlefCall_3__get_stream_from_handle)) {
        ++(vlSymsp->__Vcoverage[11063]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, __VlefCall_4__get_recorder_from_handle);
    if ((VlNull{} != __VlefCall_4__get_recorder_from_handle)) {
        ++(vlSymsp->__Vcoverage[11064]);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, __VlefCall_5__get_recorder_from_handle);
    __VlefLogAnd_7 = (VlNull{} == __VlefCall_5__get_recorder_from_handle);
    if (__VlefLogAnd_7) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_get_stream_from_handle(vlSymsp, handle, __VlefCall_6__get_stream_from_handle);
        __VlefLogAnd_7 = (VlNull{} == __VlefCall_6__get_stream_from_handle);
    }
    if (__VlefLogAnd_7) {
        ++(vlSymsp->__Vcoverage[11065]);
    }
    ++(vlSymsp->__Vcoverage[11066]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_begin_tr(Vtb_rng__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_begin_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__open_file;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_tr_stream> unnamedblk5__DOT__stream_obj;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> unnamedblk5__DOT__recorder;
    {
        begin_tr__Vfuncrtn = 0U;
        this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
        if (__VlefCall_0__open_file) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_get_stream_from_handle(vlSymsp, stream, unnamedblk5__DOT__stream_obj);
            if ((VlNull{} == unnamedblk5__DOT__stream_obj)) {
                begin_tr__Vfuncrtn = 0xffffffffU;
                goto __Vlabel0;
            } else {
                ++(vlSymsp->__Vcoverage[11068]);
            }
            VL_NULL_CHECK(unnamedblk5__DOT__stream_obj, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1018)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, nm, begin_time, txtype, unnamedblk5__DOT__recorder);
            VL_NULL_CHECK(unnamedblk5__DOT__recorder, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1020)->__VnoInFunc_get_handle(vlSymsp, begin_tr__Vfuncrtn);
            goto __Vlabel0;
        } else {
            ++(vlSymsp->__Vcoverage[11070]);
        }
        begin_tr__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
    ++(vlSymsp->__Vcoverage[11071]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_end_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_end_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> unnamedblk6__DOT__record;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (__VlefCall_0__open_file) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, unnamedblk6__DOT__record);
        if ((VlNull{} != unnamedblk6__DOT__record)) {
            VL_NULL_CHECK(unnamedblk6__DOT__record, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1033)->__VnoInFunc_close(vlSymsp, end_time);
            ++(vlSymsp->__Vcoverage[11072]);
        } else {
            ++(vlSymsp->__Vcoverage[11073]);
        }
        ++(vlSymsp->__Vcoverage[11074]);
    } else {
        ++(vlSymsp->__Vcoverage[11075]);
    }
    ++(vlSymsp->__Vcoverage[11076]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_link_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_link_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1046)
                      ->__PVT__m_file,"  LINK @%0^ {TXH1:%0d TXH2:%0d RELATION=%0@}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      h1,32,h2,-1,&(relation));
        ++(vlSymsp->__Vcoverage[11077]);
    } else {
        ++(vlSymsp->__Vcoverage[11078]);
    }
    ++(vlSymsp->__Vcoverage[11079]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_free_tr(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_free_tr\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ __VlefCall_0__open_file;
    VlClassRef<Vtb_rng_uvm_pkg__03a__03auvm_recorder> unnamedblk7__DOT__record;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (__VlefCall_0__open_file) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, unnamedblk7__DOT__record);
        if ((VlNull{} != unnamedblk7__DOT__record)) {
            VL_NULL_CHECK(unnamedblk7__DOT__record, "/home/matheus/tools/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1058)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
            ++(vlSymsp->__Vcoverage[11080]);
        } else {
            ++(vlSymsp->__Vcoverage[11081]);
        }
        ++(vlSymsp->__Vcoverage[11082]);
    } else {
        ++(vlSymsp->__Vcoverage[11083]);
    }
    ++(vlSymsp->__Vcoverage[11084]);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_randomize(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtb_rng_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___Vsetup_constraints(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VBasicRand(Vtb_rng__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::_ctor_var_reset(Vtb_rng__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__filename_set = 0;
}

Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::~Vtb_rng_uvm_pkg__03a__03auvm_text_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::~\n"); );
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_rng_uvm_pkg__03a__03auvm_text_recorder::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_text_db:" + VL_TO_STRING(__PVT__m_text_db);
    out += ", m_object_names:" + VL_TO_STRING(__PVT__m_object_names);
    out += ", filename:" + VL_TO_STRING(__PVT__filename);
    out += ", filename_set:" + VL_TO_STRING(__PVT__filename_set);
    out += ", " + Vtb_rng_uvm_pkg__03a__03auvm_recorder::to_string_middle();
    return (out);
}
