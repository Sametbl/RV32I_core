// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocessor_tb.h for the primary calling header

#include "Vprocessor_tb__pch.h"
#include "Vprocessor_tb__Syms.h"
#include "Vprocessor_tb___024root.h"

void Vprocessor_tb___024root___ctor_var_reset(Vprocessor_tb___024root* vlSelf);

Vprocessor_tb___024root::Vprocessor_tb___024root(Vprocessor_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vprocessor_tb___024root___ctor_var_reset(this);
}

void Vprocessor_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vprocessor_tb___024root::~Vprocessor_tb___024root() {
}
