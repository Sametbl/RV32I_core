// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelfRef.testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__rst_n__0 
        = vlSelfRef.testbench__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__clk = 0U;
    vlSelfRef.testbench__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xcULL, nullptr, 
                                         "../01_tb/testbench.v", 
                                         59);
    vlSelfRef.testbench__DOT__rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtask_testbench__DOT__calc_expected__0__op;
    __Vtask_testbench__DOT__calc_expected__0__op = 0;
    CData/*7:0*/ __Vtask_testbench__DOT__calc_expected__0__a;
    __Vtask_testbench__DOT__calc_expected__0__a = 0;
    CData/*7:0*/ __Vtask_testbench__DOT__calc_expected__0__b;
    __Vtask_testbench__DOT__calc_expected__0__b = 0;
    CData/*7:0*/ __Vtask_testbench__DOT__calc_expected__0__res;
    __Vtask_testbench__DOT__calc_expected__0__res = 0;
    CData/*0:0*/ __Vtask_testbench__DOT__calc_expected__0__car;
    __Vtask_testbench__DOT__calc_expected__0__car = 0;
    SData/*8:0*/ __Vtask_testbench__DOT__calc_expected__0__tmp;
    __Vtask_testbench__DOT__calc_expected__0__tmp = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_3;
    std::string __Vtemp_5;
    std::string __Vtemp_7;
    std::string __Vtemp_11;
    std::string __Vtemp_13;
    std::string __Vtemp_15;
    std::string __Vtemp_17;
    std::string __Vtemp_21;
    std::string __Vtemp_23;
    std::string __Vtemp_25;
    std::string __Vtemp_27;
    std::string __Vtemp_31;
    std::string __Vtemp_33;
    std::string __Vtemp_35;
    std::string __Vtemp_37;
    std::string __Vtemp_41;
    std::string __Vtemp_43;
    std::string __Vtemp_45;
    std::string __Vtemp_47;
    std::string __Vtemp_51;
    std::string __Vtemp_53;
    std::string __Vtemp_55;
    std::string __Vtemp_57;
    std::string __Vtemp_61;
    std::string __Vtemp_63;
    std::string __Vtemp_65;
    std::string __Vtemp_67;
    std::string __Vtemp_71;
    std::string __Vtemp_73;
    std::string __Vtemp_75;
    std::string __Vtemp_77;
    // Body
    co_await vlSelfRef.__VtrigSched_h51b63ebd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge testbench.rst_n)", 
                                                         "../01_tb/testbench.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__op_sel = 0U;
    vlSelfRef.testbench__DOT__a_val = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__a_val)) {
        vlSelfRef.testbench__DOT__b_val = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__b_val)) {
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 74);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench__DOT__A = (0xffU & vlSelfRef.testbench__DOT__a_val);
            vlSelfRef.testbench__DOT__B = (0xffU & vlSelfRef.testbench__DOT__b_val);
            __Vtask_testbench__DOT__calc_expected__0__b 
                = vlSelfRef.testbench__DOT__B;
            __Vtask_testbench__DOT__calc_expected__0__a 
                = vlSelfRef.testbench__DOT__A;
            __Vtask_testbench__DOT__calc_expected__0__op 
                = vlSelfRef.testbench__DOT__op_sel;
            if ((4U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    } else {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    }
                } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = (0xffU & (~ (IData)(__Vtask_testbench__DOT__calc_expected__0__a)));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           ^ (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           | (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           & (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 - (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                       >= (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
            } else {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 + (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = (1U & ((IData)(__Vtask_testbench__DOT__calc_expected__0__tmp) 
                             >> 8U));
            }
            vlSelfRef.testbench__DOT__expected_result 
                = __Vtask_testbench__DOT__calc_expected__0__res;
            vlSelfRef.testbench__DOT__expected_carry 
                = __Vtask_testbench__DOT__calc_expected__0__car;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 81);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 82);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 83);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 84);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(9ULL, 
                                                 nullptr, 
                                                 "../01_tb/testbench.v", 
                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if ((1U >= (IData)(vlSelfRef.testbench__DOT__op_sel))) {
                if ((((IData)(vlSelfRef.testbench__DOT__result) 
                      == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                     & ((IData)(vlSelfRef.testbench__DOT__carry) 
                        == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                    __Vtemp_1 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#  \tcarry = %0b\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_1),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 1,vlSelfRef.testbench__DOT__carry);
                    vlSelfRef.testbench__DOT__passed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
                } else {
                    __Vtemp_3 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#\t(expected %0#)\tcarry = %0b\t(expected %0b)\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_3),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 8,vlSelfRef.testbench__DOT__expected_result,
                                 1,(IData)(vlSelfRef.testbench__DOT__carry),
                                 1,vlSelfRef.testbench__DOT__expected_carry);
                    vlSelfRef.testbench__DOT__failed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
                }
            } else if ((((IData)(vlSelfRef.testbench__DOT__result) 
                         == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                        & ((IData)(vlSelfRef.testbench__DOT__carry) 
                           == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                __Vtemp_5 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0#\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_5),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             1,vlSelfRef.testbench__DOT__carry);
                vlSelfRef.testbench__DOT__passed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
            } else {
                __Vtemp_7 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel=%b (%@)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0#\t(expected %0#)\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_7),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             8,vlSelfRef.testbench__DOT__expected_result,
                             1,(IData)(vlSelfRef.testbench__DOT__carry),
                             1,vlSelfRef.testbench__DOT__expected_carry);
                vlSelfRef.testbench__DOT__failed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
            }
            vlSelfRef.testbench__DOT__b_val = ((IData)(1U) 
                                               + vlSelfRef.testbench__DOT__b_val);
        }
        vlSelfRef.testbench__DOT__a_val = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__a_val);
    }
    vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.testbench__DOT__op_sel = 1U;
    vlSelfRef.testbench__DOT__a_val = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__a_val)) {
        vlSelfRef.testbench__DOT__b_val = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__b_val)) {
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 74);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench__DOT__A = (0xffU & vlSelfRef.testbench__DOT__a_val);
            vlSelfRef.testbench__DOT__B = (0xffU & vlSelfRef.testbench__DOT__b_val);
            __Vtask_testbench__DOT__calc_expected__0__b 
                = vlSelfRef.testbench__DOT__B;
            __Vtask_testbench__DOT__calc_expected__0__a 
                = vlSelfRef.testbench__DOT__A;
            __Vtask_testbench__DOT__calc_expected__0__op 
                = vlSelfRef.testbench__DOT__op_sel;
            if ((4U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    } else {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    }
                } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = (0xffU & (~ (IData)(__Vtask_testbench__DOT__calc_expected__0__a)));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           ^ (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           | (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           & (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 - (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                       >= (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
            } else {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 + (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = (1U & ((IData)(__Vtask_testbench__DOT__calc_expected__0__tmp) 
                             >> 8U));
            }
            vlSelfRef.testbench__DOT__expected_result 
                = __Vtask_testbench__DOT__calc_expected__0__res;
            vlSelfRef.testbench__DOT__expected_carry 
                = __Vtask_testbench__DOT__calc_expected__0__car;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 81);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 82);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 83);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 84);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(9ULL, 
                                                 nullptr, 
                                                 "../01_tb/testbench.v", 
                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if ((1U >= (IData)(vlSelfRef.testbench__DOT__op_sel))) {
                if ((((IData)(vlSelfRef.testbench__DOT__result) 
                      == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                     & ((IData)(vlSelfRef.testbench__DOT__carry) 
                        == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                    __Vtemp_11 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#  \tcarry = %0b\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_11),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 1,vlSelfRef.testbench__DOT__carry);
                    vlSelfRef.testbench__DOT__passed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
                } else {
                    __Vtemp_13 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#\t(expected %0#)\tcarry = %0b\t(expected %0b)\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_13),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 8,vlSelfRef.testbench__DOT__expected_result,
                                 1,(IData)(vlSelfRef.testbench__DOT__carry),
                                 1,vlSelfRef.testbench__DOT__expected_carry);
                    vlSelfRef.testbench__DOT__failed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
                }
            } else if ((((IData)(vlSelfRef.testbench__DOT__result) 
                         == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                        & ((IData)(vlSelfRef.testbench__DOT__carry) 
                           == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                __Vtemp_15 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0#\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_15),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             1,vlSelfRef.testbench__DOT__carry);
                vlSelfRef.testbench__DOT__passed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
            } else {
                __Vtemp_17 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel=%b (%@)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0#\t(expected %0#)\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_17),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             8,vlSelfRef.testbench__DOT__expected_result,
                             1,(IData)(vlSelfRef.testbench__DOT__carry),
                             1,vlSelfRef.testbench__DOT__expected_carry);
                vlSelfRef.testbench__DOT__failed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
            }
            vlSelfRef.testbench__DOT__b_val = ((IData)(1U) 
                                               + vlSelfRef.testbench__DOT__b_val);
        }
        vlSelfRef.testbench__DOT__a_val = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__a_val);
    }
    vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.testbench__DOT__op_sel = 2U;
    vlSelfRef.testbench__DOT__a_val = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__a_val)) {
        vlSelfRef.testbench__DOT__b_val = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__b_val)) {
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 74);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench__DOT__A = (0xffU & vlSelfRef.testbench__DOT__a_val);
            vlSelfRef.testbench__DOT__B = (0xffU & vlSelfRef.testbench__DOT__b_val);
            __Vtask_testbench__DOT__calc_expected__0__b 
                = vlSelfRef.testbench__DOT__B;
            __Vtask_testbench__DOT__calc_expected__0__a 
                = vlSelfRef.testbench__DOT__A;
            __Vtask_testbench__DOT__calc_expected__0__op 
                = vlSelfRef.testbench__DOT__op_sel;
            if ((4U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    } else {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    }
                } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = (0xffU & (~ (IData)(__Vtask_testbench__DOT__calc_expected__0__a)));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           ^ (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           | (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           & (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 - (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                       >= (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
            } else {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 + (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = (1U & ((IData)(__Vtask_testbench__DOT__calc_expected__0__tmp) 
                             >> 8U));
            }
            vlSelfRef.testbench__DOT__expected_result 
                = __Vtask_testbench__DOT__calc_expected__0__res;
            vlSelfRef.testbench__DOT__expected_carry 
                = __Vtask_testbench__DOT__calc_expected__0__car;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 81);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 82);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 83);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 84);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(9ULL, 
                                                 nullptr, 
                                                 "../01_tb/testbench.v", 
                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if ((1U >= (IData)(vlSelfRef.testbench__DOT__op_sel))) {
                if ((((IData)(vlSelfRef.testbench__DOT__result) 
                      == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                     & ((IData)(vlSelfRef.testbench__DOT__carry) 
                        == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                    __Vtemp_21 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#  \tcarry = %0b\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_21),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 1,vlSelfRef.testbench__DOT__carry);
                    vlSelfRef.testbench__DOT__passed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
                } else {
                    __Vtemp_23 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#\t(expected %0#)\tcarry = %0b\t(expected %0b)\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_23),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 8,vlSelfRef.testbench__DOT__expected_result,
                                 1,(IData)(vlSelfRef.testbench__DOT__carry),
                                 1,vlSelfRef.testbench__DOT__expected_carry);
                    vlSelfRef.testbench__DOT__failed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
                }
            } else if ((((IData)(vlSelfRef.testbench__DOT__result) 
                         == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                        & ((IData)(vlSelfRef.testbench__DOT__carry) 
                           == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                __Vtemp_25 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0#\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_25),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             1,vlSelfRef.testbench__DOT__carry);
                vlSelfRef.testbench__DOT__passed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
            } else {
                __Vtemp_27 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel=%b (%@)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0#\t(expected %0#)\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_27),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             8,vlSelfRef.testbench__DOT__expected_result,
                             1,(IData)(vlSelfRef.testbench__DOT__carry),
                             1,vlSelfRef.testbench__DOT__expected_carry);
                vlSelfRef.testbench__DOT__failed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
            }
            vlSelfRef.testbench__DOT__b_val = ((IData)(1U) 
                                               + vlSelfRef.testbench__DOT__b_val);
        }
        vlSelfRef.testbench__DOT__a_val = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__a_val);
    }
    vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.testbench__DOT__op_sel = 3U;
    vlSelfRef.testbench__DOT__a_val = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__a_val)) {
        vlSelfRef.testbench__DOT__b_val = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__b_val)) {
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 74);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench__DOT__A = (0xffU & vlSelfRef.testbench__DOT__a_val);
            vlSelfRef.testbench__DOT__B = (0xffU & vlSelfRef.testbench__DOT__b_val);
            __Vtask_testbench__DOT__calc_expected__0__b 
                = vlSelfRef.testbench__DOT__B;
            __Vtask_testbench__DOT__calc_expected__0__a 
                = vlSelfRef.testbench__DOT__A;
            __Vtask_testbench__DOT__calc_expected__0__op 
                = vlSelfRef.testbench__DOT__op_sel;
            if ((4U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    } else {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    }
                } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = (0xffU & (~ (IData)(__Vtask_testbench__DOT__calc_expected__0__a)));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           ^ (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           | (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           & (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 - (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                       >= (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
            } else {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 + (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = (1U & ((IData)(__Vtask_testbench__DOT__calc_expected__0__tmp) 
                             >> 8U));
            }
            vlSelfRef.testbench__DOT__expected_result 
                = __Vtask_testbench__DOT__calc_expected__0__res;
            vlSelfRef.testbench__DOT__expected_carry 
                = __Vtask_testbench__DOT__calc_expected__0__car;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 81);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 82);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 83);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 84);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(9ULL, 
                                                 nullptr, 
                                                 "../01_tb/testbench.v", 
                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if ((1U >= (IData)(vlSelfRef.testbench__DOT__op_sel))) {
                if ((((IData)(vlSelfRef.testbench__DOT__result) 
                      == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                     & ((IData)(vlSelfRef.testbench__DOT__carry) 
                        == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                    __Vtemp_31 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#  \tcarry = %0b\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_31),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 1,vlSelfRef.testbench__DOT__carry);
                    vlSelfRef.testbench__DOT__passed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
                } else {
                    __Vtemp_33 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#\t(expected %0#)\tcarry = %0b\t(expected %0b)\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_33),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 8,vlSelfRef.testbench__DOT__expected_result,
                                 1,(IData)(vlSelfRef.testbench__DOT__carry),
                                 1,vlSelfRef.testbench__DOT__expected_carry);
                    vlSelfRef.testbench__DOT__failed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
                }
            } else if ((((IData)(vlSelfRef.testbench__DOT__result) 
                         == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                        & ((IData)(vlSelfRef.testbench__DOT__carry) 
                           == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                __Vtemp_35 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0#\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_35),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             1,vlSelfRef.testbench__DOT__carry);
                vlSelfRef.testbench__DOT__passed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
            } else {
                __Vtemp_37 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel=%b (%@)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0#\t(expected %0#)\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_37),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             8,vlSelfRef.testbench__DOT__expected_result,
                             1,(IData)(vlSelfRef.testbench__DOT__carry),
                             1,vlSelfRef.testbench__DOT__expected_carry);
                vlSelfRef.testbench__DOT__failed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
            }
            vlSelfRef.testbench__DOT__b_val = ((IData)(1U) 
                                               + vlSelfRef.testbench__DOT__b_val);
        }
        vlSelfRef.testbench__DOT__a_val = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__a_val);
    }
    vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.testbench__DOT__op_sel = 4U;
    vlSelfRef.testbench__DOT__a_val = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__a_val)) {
        vlSelfRef.testbench__DOT__b_val = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__b_val)) {
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 74);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench__DOT__A = (0xffU & vlSelfRef.testbench__DOT__a_val);
            vlSelfRef.testbench__DOT__B = (0xffU & vlSelfRef.testbench__DOT__b_val);
            __Vtask_testbench__DOT__calc_expected__0__b 
                = vlSelfRef.testbench__DOT__B;
            __Vtask_testbench__DOT__calc_expected__0__a 
                = vlSelfRef.testbench__DOT__A;
            __Vtask_testbench__DOT__calc_expected__0__op 
                = vlSelfRef.testbench__DOT__op_sel;
            if ((4U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    } else {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    }
                } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = (0xffU & (~ (IData)(__Vtask_testbench__DOT__calc_expected__0__a)));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           ^ (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           | (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           & (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 - (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                       >= (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
            } else {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 + (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = (1U & ((IData)(__Vtask_testbench__DOT__calc_expected__0__tmp) 
                             >> 8U));
            }
            vlSelfRef.testbench__DOT__expected_result 
                = __Vtask_testbench__DOT__calc_expected__0__res;
            vlSelfRef.testbench__DOT__expected_carry 
                = __Vtask_testbench__DOT__calc_expected__0__car;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 81);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 82);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 83);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 84);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(9ULL, 
                                                 nullptr, 
                                                 "../01_tb/testbench.v", 
                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if ((1U >= (IData)(vlSelfRef.testbench__DOT__op_sel))) {
                if ((((IData)(vlSelfRef.testbench__DOT__result) 
                      == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                     & ((IData)(vlSelfRef.testbench__DOT__carry) 
                        == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                    __Vtemp_41 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#  \tcarry = %0b\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_41),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 1,vlSelfRef.testbench__DOT__carry);
                    vlSelfRef.testbench__DOT__passed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
                } else {
                    __Vtemp_43 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#\t(expected %0#)\tcarry = %0b\t(expected %0b)\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_43),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 8,vlSelfRef.testbench__DOT__expected_result,
                                 1,(IData)(vlSelfRef.testbench__DOT__carry),
                                 1,vlSelfRef.testbench__DOT__expected_carry);
                    vlSelfRef.testbench__DOT__failed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
                }
            } else if ((((IData)(vlSelfRef.testbench__DOT__result) 
                         == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                        & ((IData)(vlSelfRef.testbench__DOT__carry) 
                           == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                __Vtemp_45 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0#\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_45),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             1,vlSelfRef.testbench__DOT__carry);
                vlSelfRef.testbench__DOT__passed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
            } else {
                __Vtemp_47 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel=%b (%@)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0#\t(expected %0#)\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_47),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             8,vlSelfRef.testbench__DOT__expected_result,
                             1,(IData)(vlSelfRef.testbench__DOT__carry),
                             1,vlSelfRef.testbench__DOT__expected_carry);
                vlSelfRef.testbench__DOT__failed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
            }
            vlSelfRef.testbench__DOT__b_val = ((IData)(1U) 
                                               + vlSelfRef.testbench__DOT__b_val);
        }
        vlSelfRef.testbench__DOT__a_val = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__a_val);
    }
    vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 5U;
    vlSelfRef.testbench__DOT__op_sel = 5U;
    vlSelfRef.testbench__DOT__a_val = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__a_val)) {
        vlSelfRef.testbench__DOT__b_val = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__b_val)) {
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 74);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench__DOT__A = (0xffU & vlSelfRef.testbench__DOT__a_val);
            vlSelfRef.testbench__DOT__B = (0xffU & vlSelfRef.testbench__DOT__b_val);
            __Vtask_testbench__DOT__calc_expected__0__b 
                = vlSelfRef.testbench__DOT__B;
            __Vtask_testbench__DOT__calc_expected__0__a 
                = vlSelfRef.testbench__DOT__A;
            __Vtask_testbench__DOT__calc_expected__0__op 
                = vlSelfRef.testbench__DOT__op_sel;
            if ((4U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    } else {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    }
                } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = (0xffU & (~ (IData)(__Vtask_testbench__DOT__calc_expected__0__a)));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           ^ (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           | (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           & (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 - (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                       >= (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
            } else {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 + (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = (1U & ((IData)(__Vtask_testbench__DOT__calc_expected__0__tmp) 
                             >> 8U));
            }
            vlSelfRef.testbench__DOT__expected_result 
                = __Vtask_testbench__DOT__calc_expected__0__res;
            vlSelfRef.testbench__DOT__expected_carry 
                = __Vtask_testbench__DOT__calc_expected__0__car;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 81);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 82);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 83);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 84);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(9ULL, 
                                                 nullptr, 
                                                 "../01_tb/testbench.v", 
                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if ((1U >= (IData)(vlSelfRef.testbench__DOT__op_sel))) {
                if ((((IData)(vlSelfRef.testbench__DOT__result) 
                      == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                     & ((IData)(vlSelfRef.testbench__DOT__carry) 
                        == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                    __Vtemp_51 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#  \tcarry = %0b\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_51),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 1,vlSelfRef.testbench__DOT__carry);
                    vlSelfRef.testbench__DOT__passed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
                } else {
                    __Vtemp_53 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#\t(expected %0#)\tcarry = %0b\t(expected %0b)\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_53),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 8,vlSelfRef.testbench__DOT__expected_result,
                                 1,(IData)(vlSelfRef.testbench__DOT__carry),
                                 1,vlSelfRef.testbench__DOT__expected_carry);
                    vlSelfRef.testbench__DOT__failed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
                }
            } else if ((((IData)(vlSelfRef.testbench__DOT__result) 
                         == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                        & ((IData)(vlSelfRef.testbench__DOT__carry) 
                           == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                __Vtemp_55 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0#\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_55),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             1,vlSelfRef.testbench__DOT__carry);
                vlSelfRef.testbench__DOT__passed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
            } else {
                __Vtemp_57 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel=%b (%@)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0#\t(expected %0#)\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_57),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             8,vlSelfRef.testbench__DOT__expected_result,
                             1,(IData)(vlSelfRef.testbench__DOT__carry),
                             1,vlSelfRef.testbench__DOT__expected_carry);
                vlSelfRef.testbench__DOT__failed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
            }
            vlSelfRef.testbench__DOT__b_val = ((IData)(1U) 
                                               + vlSelfRef.testbench__DOT__b_val);
        }
        vlSelfRef.testbench__DOT__a_val = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__a_val);
    }
    vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 6U;
    vlSelfRef.testbench__DOT__op_sel = 6U;
    vlSelfRef.testbench__DOT__a_val = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__a_val)) {
        vlSelfRef.testbench__DOT__b_val = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__b_val)) {
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 74);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench__DOT__A = (0xffU & vlSelfRef.testbench__DOT__a_val);
            vlSelfRef.testbench__DOT__B = (0xffU & vlSelfRef.testbench__DOT__b_val);
            __Vtask_testbench__DOT__calc_expected__0__b 
                = vlSelfRef.testbench__DOT__B;
            __Vtask_testbench__DOT__calc_expected__0__a 
                = vlSelfRef.testbench__DOT__A;
            __Vtask_testbench__DOT__calc_expected__0__op 
                = vlSelfRef.testbench__DOT__op_sel;
            if ((4U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    } else {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    }
                } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = (0xffU & (~ (IData)(__Vtask_testbench__DOT__calc_expected__0__a)));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           ^ (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           | (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           & (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 - (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                       >= (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
            } else {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 + (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = (1U & ((IData)(__Vtask_testbench__DOT__calc_expected__0__tmp) 
                             >> 8U));
            }
            vlSelfRef.testbench__DOT__expected_result 
                = __Vtask_testbench__DOT__calc_expected__0__res;
            vlSelfRef.testbench__DOT__expected_carry 
                = __Vtask_testbench__DOT__calc_expected__0__car;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 81);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 82);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 83);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 84);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(9ULL, 
                                                 nullptr, 
                                                 "../01_tb/testbench.v", 
                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if ((1U >= (IData)(vlSelfRef.testbench__DOT__op_sel))) {
                if ((((IData)(vlSelfRef.testbench__DOT__result) 
                      == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                     & ((IData)(vlSelfRef.testbench__DOT__carry) 
                        == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                    __Vtemp_61 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#  \tcarry = %0b\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_61),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 1,vlSelfRef.testbench__DOT__carry);
                    vlSelfRef.testbench__DOT__passed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
                } else {
                    __Vtemp_63 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#\t(expected %0#)\tcarry = %0b\t(expected %0b)\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_63),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 8,vlSelfRef.testbench__DOT__expected_result,
                                 1,(IData)(vlSelfRef.testbench__DOT__carry),
                                 1,vlSelfRef.testbench__DOT__expected_carry);
                    vlSelfRef.testbench__DOT__failed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
                }
            } else if ((((IData)(vlSelfRef.testbench__DOT__result) 
                         == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                        & ((IData)(vlSelfRef.testbench__DOT__carry) 
                           == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                __Vtemp_65 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0#\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_65),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             1,vlSelfRef.testbench__DOT__carry);
                vlSelfRef.testbench__DOT__passed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
            } else {
                __Vtemp_67 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel=%b (%@)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0#\t(expected %0#)\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_67),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             8,vlSelfRef.testbench__DOT__expected_result,
                             1,(IData)(vlSelfRef.testbench__DOT__carry),
                             1,vlSelfRef.testbench__DOT__expected_carry);
                vlSelfRef.testbench__DOT__failed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
            }
            vlSelfRef.testbench__DOT__b_val = ((IData)(1U) 
                                               + vlSelfRef.testbench__DOT__b_val);
        }
        vlSelfRef.testbench__DOT__a_val = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__a_val);
    }
    vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 7U;
    vlSelfRef.testbench__DOT__op_sel = 7U;
    vlSelfRef.testbench__DOT__a_val = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__a_val)) {
        vlSelfRef.testbench__DOT__b_val = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.testbench__DOT__b_val)) {
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 74);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.testbench__DOT__A = (0xffU & vlSelfRef.testbench__DOT__a_val);
            vlSelfRef.testbench__DOT__B = (0xffU & vlSelfRef.testbench__DOT__b_val);
            __Vtask_testbench__DOT__calc_expected__0__b 
                = vlSelfRef.testbench__DOT__B;
            __Vtask_testbench__DOT__calc_expected__0__a 
                = vlSelfRef.testbench__DOT__A;
            __Vtask_testbench__DOT__calc_expected__0__op 
                = vlSelfRef.testbench__DOT__op_sel;
            if ((4U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTL_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    } else {
                        __Vtask_testbench__DOT__calc_expected__0__res 
                            = (0xffU & VL_SHIFTR_III(8,8,8, (IData)(__Vtask_testbench__DOT__calc_expected__0__a), (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                        __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                    }
                } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = (0xffU & (~ (IData)(__Vtask_testbench__DOT__calc_expected__0__a)));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           ^ (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((2U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           | (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                } else {
                    __Vtask_testbench__DOT__calc_expected__0__res 
                        = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                           & (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
                    __Vtask_testbench__DOT__calc_expected__0__car = 0U;
                }
            } else if ((1U & (IData)(__Vtask_testbench__DOT__calc_expected__0__op))) {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 - (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                       >= (IData)(__Vtask_testbench__DOT__calc_expected__0__b));
            } else {
                __Vtask_testbench__DOT__calc_expected__0__tmp 
                    = (0x1ffU & ((IData)(__Vtask_testbench__DOT__calc_expected__0__a) 
                                 + (IData)(__Vtask_testbench__DOT__calc_expected__0__b)));
                __Vtask_testbench__DOT__calc_expected__0__res 
                    = (0xffU & (IData)(__Vtask_testbench__DOT__calc_expected__0__tmp));
                __Vtask_testbench__DOT__calc_expected__0__car 
                    = (1U & ((IData)(__Vtask_testbench__DOT__calc_expected__0__tmp) 
                             >> 8U));
            }
            vlSelfRef.testbench__DOT__expected_result 
                = __Vtask_testbench__DOT__calc_expected__0__res;
            vlSelfRef.testbench__DOT__expected_carry 
                = __Vtask_testbench__DOT__calc_expected__0__car;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 81);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 82);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 83);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VtrigSched_hf827cc8e__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge testbench.clk)", 
                                                                 "../01_tb/testbench.v", 
                                                                 84);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(9ULL, 
                                                 nullptr, 
                                                 "../01_tb/testbench.v", 
                                                 85);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            if ((1U >= (IData)(vlSelfRef.testbench__DOT__op_sel))) {
                if ((((IData)(vlSelfRef.testbench__DOT__result) 
                      == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                     & ((IData)(vlSelfRef.testbench__DOT__carry) 
                        == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                    __Vtemp_71 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#  \tcarry = %0b\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_71),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 1,vlSelfRef.testbench__DOT__carry);
                    vlSelfRef.testbench__DOT__passed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
                } else {
                    __Vtemp_73 = vlSelfRef.testbench__DOT__op_name
                        [vlSelfRef.testbench__DOT__op_sel];
                    VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel = %b (%@)\t| A = %0#   \tB = %0#\t=>  result = %0#\t(expected %0#)\tcarry = %0b\t(expected %0b)\n",0,
                                 3,vlSelfRef.testbench__DOT__op_sel,
                                 -1,&(__Vtemp_73),8,
                                 (IData)(vlSelfRef.testbench__DOT__A),
                                 8,vlSelfRef.testbench__DOT__B,
                                 8,(IData)(vlSelfRef.testbench__DOT__result),
                                 8,vlSelfRef.testbench__DOT__expected_result,
                                 1,(IData)(vlSelfRef.testbench__DOT__carry),
                                 1,vlSelfRef.testbench__DOT__expected_carry);
                    vlSelfRef.testbench__DOT__failed 
                        = ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
                }
            } else if ((((IData)(vlSelfRef.testbench__DOT__result) 
                         == (IData)(vlSelfRef.testbench__DOT__expected_result)) 
                        & ((IData)(vlSelfRef.testbench__DOT__carry) 
                           == (IData)(vlSelfRef.testbench__DOT__expected_carry)))) {
                __Vtemp_75 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[32mPASSED\033[0m  op_sel = %b (%@)\t| A = %b\tB = %b\t=>  result = %b\tcarry = %0#\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_75),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             1,vlSelfRef.testbench__DOT__carry);
                vlSelfRef.testbench__DOT__passed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__passed);
            } else {
                __Vtemp_77 = vlSelfRef.testbench__DOT__op_name
                    [vlSelfRef.testbench__DOT__op_sel];
                VL_WRITEF_NX("\033[31mFAILED\033[0m  op_sel=%b (%@)\t| A=%b\tB=%b  =>\tresult=%b\t(expected %b)\tcarry=%0#\t(expected %0#)\n",0,
                             3,vlSelfRef.testbench__DOT__op_sel,
                             -1,&(__Vtemp_77),8,(IData)(vlSelfRef.testbench__DOT__A),
                             8,vlSelfRef.testbench__DOT__B,
                             8,(IData)(vlSelfRef.testbench__DOT__result),
                             8,vlSelfRef.testbench__DOT__expected_result,
                             1,(IData)(vlSelfRef.testbench__DOT__carry),
                             1,vlSelfRef.testbench__DOT__expected_carry);
                vlSelfRef.testbench__DOT__failed = 
                    ((IData)(1U) + vlSelfRef.testbench__DOT__failed);
            }
            vlSelfRef.testbench__DOT__b_val = ((IData)(1U) 
                                               + vlSelfRef.testbench__DOT__b_val);
        }
        vlSelfRef.testbench__DOT__a_val = ((IData)(1U) 
                                           + vlSelfRef.testbench__DOT__a_val);
    }
    vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i = 8U;
    VL_WRITEF_NX("------------- Group 6 test result ------------\nTOTAL: %0d passed, %0d failed\n",0,
                 32,vlSelfRef.testbench__DOT__passed,
                 32,vlSelfRef.testbench__DOT__failed);
    VL_FINISH_MT("../01_tb/testbench.v", 122, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "../01_tb/testbench.v", 
                                             54);
        vlSelfRef.__VdlyVal__testbench__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.testbench__DOT__clk)));
        vlSelfRef.__VdlySet__testbench__DOT__clk__v0 = 1U;
    }
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__testbench__DOT__clk__v0) {
        vlSelfRef.__VdlySet__testbench__DOT__clk__v0 = 0U;
        vlSelfRef.testbench__DOT__clk = vlSelfRef.__VdlyVal__testbench__DOT__clk__v0;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __VdfgRegularize_hd87f99a1_2_3;
    __VdfgRegularize_hd87f99a1_2_3 = 0;
    // Body
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
              >> 6U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
              >> 7U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
              >> 5U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
              >> 6U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
              >> 5U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
              >> 4U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit2____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
              >> 2U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
              >> 3U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
              >> 2U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
              >> 1U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
              >> 3U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
              >> 4U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit1____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
              >> 1U));
    vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit0____pinNumber4 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg));
    vlSelfRef.testbench__DOT__carry = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
                                       && (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__carry_reg));
    if (vlSelfRef.testbench__DOT__rst_n) {
        vlSelfRef.testbench__DOT__result = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4) 
                                             << 7U) 
                                            | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4) 
                                                << 6U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit5____pinNumber4) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit4____pinNumber4) 
                                                      << 4U) 
                                                     | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit3____pinNumber4) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit2____pinNumber4) 
                                                            << 2U) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit1____pinNumber4) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4))))))));
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4 
            = ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
               >> 7U);
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                     >> 6U));
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit5____pinNumber4 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                     >> 5U));
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit4____pinNumber4 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                     >> 4U));
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit3____pinNumber4 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                     >> 3U));
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit2____pinNumber4 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                     >> 2U));
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit1____pinNumber4 
            = (1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                     >> 1U));
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4 
            = (1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d));
    } else {
        vlSelfRef.testbench__DOT__result = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4 = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4 = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit5____pinNumber4 = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit4____pinNumber4 = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit3____pinNumber4 = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit2____pinNumber4 = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit1____pinNumber4 = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4 = 0U;
    }
    __VdfgRegularize_hd87f99a1_2_3 = (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit1____pinNumber4) 
                                       << 1U) | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit0____pinNumber4));
    vlSelfRef.testbench__DOT__my_dutty__DOT__carry_reg 
        = ((IData)(vlSelfRef.testbench__DOT__rst_n) 
           & ((~ (IData)((0U != (6U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))) 
              & (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                  & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5)) 
                 | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                       >> 1U)))));
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
    if (vlSelfRef.testbench__DOT__rst_n) {
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4 
            = ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
               >> 7U);
        vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg 
            = vlSelfRef.testbench__DOT__B;
        vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg 
            = vlSelfRef.testbench__DOT__op_sel;
        vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg 
            = vlSelfRef.testbench__DOT__A;
    } else {
        vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4 = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg = 0U;
        vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg = 0U;
    }
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

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h51b63ebd__0.resume(
                                                   "@(posedge testbench.rst_n)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf827cc8e__0.resume(
                                                   "@(posedge testbench.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h51b63ebd__0.commit(
                                                   "@(posedge testbench.rst_n)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf827cc8e__0.commit(
                                                   "@(posedge testbench.clk)");
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    Vtestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/testbench.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/testbench.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
