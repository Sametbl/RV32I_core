// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprocessor_tb.h for the primary calling header

#ifndef VERILATED_VPROCESSOR_TB___024UNIT_H_
#define VERILATED_VPROCESSOR_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vprocessor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprocessor_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vprocessor_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vprocessor_tb___024unit(Vprocessor_tb__Syms* symsp, const char* v__name);
    ~Vprocessor_tb___024unit();
    VL_UNCOPYABLE(Vprocessor_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
