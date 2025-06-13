// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocessor_tb.h for the primary calling header

#include "Vprocessor_tb__pch.h"
#include "Vprocessor_tb__Syms.h"
#include "Vprocessor_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__act(Vprocessor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vprocessor_tb___024root___eval_triggers__act(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__dut__DOT__stall_from_ID__1)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.processor_tb__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.processor_tb__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__dut__DOT__stall_from_ID__1 
        = vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID;
    vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__clk_i__0 
        = vlSelfRef.processor_tb__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__rst_n__0 
        = vlSelfRef.processor_tb__DOT__rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vprocessor_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
