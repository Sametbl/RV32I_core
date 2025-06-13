// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocessor_tb.h for the primary calling header

#include "Vprocessor_tb__pch.h"
#include "Vprocessor_tb__Syms.h"
#include "Vprocessor_tb___024unit.h"

void Vprocessor_tb___024unit___ctor_var_reset(Vprocessor_tb___024unit* vlSelf);

Vprocessor_tb___024unit::Vprocessor_tb___024unit(Vprocessor_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vprocessor_tb___024unit___ctor_var_reset(this);
}

void Vprocessor_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vprocessor_tb___024unit::~Vprocessor_tb___024unit() {
}
