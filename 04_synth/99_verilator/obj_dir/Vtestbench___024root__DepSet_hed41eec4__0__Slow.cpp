// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf);
VL_ATTR_COLD void Vtestbench___024root____Vm_traceActivitySetAll(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root___eval_static__TOP(vlSelf);
    Vtestbench___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__passed = 0U;
    vlSelfRef.testbench__DOT__failed = 0U;
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/testbench.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        Vtestbench___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __VdfgRegularize_hd87f99a1_2_3;
    __VdfgRegularize_hd87f99a1_2_3 = 0;
    // Body
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A 
        = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
            << 7U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4) 
                       << 6U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4) 
                                  << 5U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4))))))));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2 
        = (IData)((7U != (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg)));
    __VdfgRegularize_hd87f99a1_2_3 = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit1____pinNumber4) 
                                       << 1U) | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit0____pinNumber4));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2 
        = (IData)((1U != (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output 
        = (((((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4)) 
               | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4)) 
              | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4)) 
             | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4)) 
            << 1U) | (1U & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2))));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1 
        = ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2)
            ? (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A)
            : (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4) 
                << 7U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4) 
                           << 6U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4) 
                                      << 5U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4)))))))));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B 
        = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4) 
            << 7U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4) 
                       << 6U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4) 
                                  << 5U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit2____pinNumber4) 
                                                   << 2U) 
                                                  | (IData)(__VdfgRegularize_hd87f99a1_2_3)))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_2_0 = (3U 
                                                & ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4)) 
                                                   ^ 
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2)))))));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2 
        = (1U ^ ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2) 
                 ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2 
        = (1U ^ ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2) 
                 ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit2____pinNumber4)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_2_1 = (3U 
                                                & ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4)) 
                                                   ^ 
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2)))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_2_2 = (3U 
                                                & ((IData)(__VdfgRegularize_hd87f99a1_2_3) 
                                                   ^ 
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2)))))));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2 
        = (0xffU & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit0____pinNumber4)
                     ? VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1), 1U)
                     : (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1 
        = ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
           ^ ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
              >> 1U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1 
        = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4) 
                 ^ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1 
        = ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4) 
           ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1 
        = ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4) 
           ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1 
        = ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4) 
           ^ ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1) 
              >> 1U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1 
        = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4) 
                 ^ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1 
        = ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4) 
           ^ ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2) 
              >> 1U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1 
        = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4) 
                 ^ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3 
        = (0xffU & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit1____pinNumber4)
                     ? VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2), 2U)
                     : (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5 
        = (((~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2)) 
            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1)) 
           | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4) 
              & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4 
        = (0xffU & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit2____pinNumber4)
                     ? VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3), 4U)
                     : (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5 
        = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1) 
            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5)) 
           | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4) 
              & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2) 
                 >> 1U)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5 
        = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1) 
            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5)) 
           | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4) 
              & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5 
        = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1) 
            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5)) 
           | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4) 
              & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5 
        = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1) 
            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5)) 
           | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4) 
              & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1) 
                 >> 1U)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5 
        = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1) 
            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5)) 
           | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4) 
              & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5 
        = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1) 
            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5)) 
           | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4) 
              & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0)));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d 
        = (0xffU & ((4U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))
                     ? ((2U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))
                         ? ((2U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output))
                             ? 0U : ((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output))
                                      ? ((0x80U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                << 5U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                   << 3U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                      << 1U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                         >> 1U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                            >> 3U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                                 >> 7U)))))))))
                                      : (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4)))
                         : ((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))
                             ? (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A))
                             : ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B))))
                     : ((2U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))
                         ? ((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))
                             ? ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                                | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B))
                             : ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B)))
                         : ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                              ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5)) 
                             << 7U) | ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1) 
                                         ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5)) 
                                        << 6U) | ((
                                                   ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1) 
                                                    ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1) 
                                                       ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5)) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1) 
                                                          ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1) 
                                                             ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5)) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1) 
                                                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5)) 
                                                               << 1U) 
                                                              | (1U 
                                                                 ^ 
                                                                 ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2) 
                                                                  ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1)))))))))))));
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge testbench.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge testbench.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge testbench.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge testbench.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root____Vm_traceActivitySetAll(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__A = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__B = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__op_sel = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__result = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__passed = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__failed = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__a_val = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__b_val = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__expected_result = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__expected_carry = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->testbench__DOT__my_dutty__DOT__A_reg = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__B_reg = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__op_sel_reg = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__my_dutty__DOT__carry_reg = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__A = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__B = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__result_d = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__shift_out_bit = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit0____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit1____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit2____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4 = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit1____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit2____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit3____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit4____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit5____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_2_0 = VL_RAND_RESET_I(2);
    vlSelf->__VdfgRegularize_hd87f99a1_2_1 = VL_RAND_RESET_I(2);
    vlSelf->__VdfgRegularize_hd87f99a1_2_2 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__testbench__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__testbench__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
