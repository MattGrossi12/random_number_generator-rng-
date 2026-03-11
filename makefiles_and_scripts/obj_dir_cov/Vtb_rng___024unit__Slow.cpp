// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rng.h for the primary calling header

#include "Vtb_rng__pch.h"
VlAssocArray<IData/*31:0*/, CData/*0:0*/> Vtb_rng___024unit::__Venumtab_enum_valid25;
VlAssocArray<IData/*31:0*/, std::string> Vtb_rng___024unit::__Venumtab_enum_name37;
VlAssocArray<IData/*27:0*/, std::string> Vtb_rng___024unit::__Venumtab_enum_name15;
VlAssocArray<IData/*31:0*/, std::string> Vtb_rng___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*31:0*/, std::string> Vtb_rng___024unit::__Venumtab_enum_name75;
VlUnpacked<CData/*1:0*/, 4> Vtb_rng___024unit::__Venumtab_enum_next21;
VlUnpacked<std::string, 8> Vtb_rng___024unit::__Venumtab_enum_name35;
VlUnpacked<std::string, 4> Vtb_rng___024unit::__Venumtab_enum_name21;
VlUnpacked<std::string, 2> Vtb_rng___024unit::__Venumtab_enum_name71;
VlUnpacked<std::string, 4> Vtb_rng___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 4> Vtb_rng___024unit::__Venumtab_enum_name93;
VlUnpacked<std::string, 4> Vtb_rng___024unit::__Venumtab_enum_name91;
VlUnpacked<std::string, 4> Vtb_rng___024unit::__Venumtab_enum_name85;
VlUnpacked<std::string, 4> Vtb_rng___024unit::__Venumtab_enum_name83;
VlUnpacked<std::string, 8> Vtb_rng___024unit::__Venumtab_enum_name89;
VlUnpacked<IData/*31:0*/, 4> Vtb_rng___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> Vtb_rng___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> Vtb_rng___024unit::__Venumvaltab_2;

void Vtb_rng___024unit___ctor_var_reset(Vtb_rng___024unit* vlSelf);

Vtb_rng___024unit::Vtb_rng___024unit() = default;
Vtb_rng___024unit::~Vtb_rng___024unit() = default;

void Vtb_rng___024unit::ctor(Vtb_rng__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_rng___024unit___ctor_var_reset(this);
}

void Vtb_rng___024unit___configure_coverage(Vtb_rng___024unit* vlSelf, bool first);

void Vtb_rng___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtb_rng___024unit___configure_coverage(this, first);
}

void Vtb_rng___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Coverage
void Vtb_rng___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{vlNamep} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

// Toggle Coverage
void Vtb_rng___024unit::__vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    int step = (end >= begin) ? 1 : -1;
    for (int i = begin; i != end + step; i += step) {
        for (int j = 0; j < 2; j++) {
            uint32_t* count32p = countp;
            static uint32_t fake_zero_count = 0;
            std::string fullhier = std::string{vlNamep} + hierp;
            if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
            std::string commentWithIndex = commentp;
            if (ranged) commentWithIndex += '[' + std::to_string(i) + ']';
            commentWithIndex += j ? ":0->1" : ":1->0";
            if (!enable) count32p = &fake_zero_count;
            *count32p = 0;
            VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
                "hier",fullhier,  "page",pagep,  "comment",commentWithIndex.c_str(),  "", "");
            ++countp;
        }
    }
}
