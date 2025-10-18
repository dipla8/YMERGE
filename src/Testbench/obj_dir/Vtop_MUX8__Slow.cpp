// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_MUX8.h"
#include "Vtop__Syms.h"

void Vtop_MUX8___ctor_var_reset(Vtop_MUX8* vlSelf);

Vtop_MUX8::Vtop_MUX8(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_MUX8___ctor_var_reset(this);
}

void Vtop_MUX8::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_MUX8::~Vtop_MUX8() {
}
