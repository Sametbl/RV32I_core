// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.testbench__DOT__A),8);
        bufp->chgCData(oldp+1,(vlSelfRef.testbench__DOT__B),8);
        bufp->chgCData(oldp+2,(vlSelfRef.testbench__DOT__op_sel),3);
        bufp->chgIData(oldp+3,(vlSelfRef.testbench__DOT__passed),32);
        bufp->chgIData(oldp+4,(vlSelfRef.testbench__DOT__failed),32);
        bufp->chgIData(oldp+5,(vlSelfRef.testbench__DOT__a_val),32);
        bufp->chgIData(oldp+6,(vlSelfRef.testbench__DOT__b_val),32);
        bufp->chgCData(oldp+7,(vlSelfRef.testbench__DOT__expected_result),8);
        bufp->chgBit(oldp+8,(vlSelfRef.testbench__DOT__expected_carry));
        bufp->chgIData(oldp+9,(vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+10,(vlSelfRef.testbench__DOT__result),8);
        bufp->chgBit(oldp+11,(vlSelfRef.testbench__DOT__carry));
        bufp->chgCData(oldp+12,(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg),8);
        bufp->chgCData(oldp+13,(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg),8);
        bufp->chgCData(oldp+14,(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg),3);
        bufp->chgCData(oldp+15,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4) 
                                  << 7U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4) 
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
                                                           | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4))))))))),8);
        bufp->chgBit(oldp+16,(vlSelfRef.testbench__DOT__my_dutty__DOT__carry_reg));
        bufp->chgCData(oldp+17,(((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                                   ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5)) 
                                  << 7U) | ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1) 
                                              ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5)) 
                                             << 6U) 
                                            | ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1) 
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
                                                               ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1))))))))))),8);
        bufp->chgCData(oldp+18,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                                 & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B))),8);
        bufp->chgCData(oldp+19,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                                 | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B))),8);
        bufp->chgCData(oldp+20,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                                 ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B))),8);
        bufp->chgCData(oldp+21,((0xffU & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A)))),8);
        bufp->chgCData(oldp+22,(((2U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output))
                                  ? 0U : ((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output))
                                           ? ((0x80U 
                                               & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
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
                                           : (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4)))),8);
        bufp->chgCData(oldp+23,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A),8);
        bufp->chgCData(oldp+24,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B),8);
        bufp->chgCData(oldp+25,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d),8);
        bufp->chgBit(oldp+26,(((~ (IData)((0U != (6U 
                                                  & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))) 
                               & (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                                   & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5)) 
                                  | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
                                     & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                        >> 1U))))));
        bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2)))));
        bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2)))));
        bufp->chgBit(oldp+29,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5)) 
                               | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
                                  & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                     >> 1U)))));
        bufp->chgBit(oldp+30,((IData)((0U != (6U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))));
        bufp->chgBit(oldp+31,((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d))));
        bufp->chgBit(oldp+32,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                     >> 1U))));
        bufp->chgBit(oldp+34,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit1____pinNumber4));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                     >> 2U))));
        bufp->chgBit(oldp+36,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit2____pinNumber4));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                     >> 3U))));
        bufp->chgBit(oldp+38,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit3____pinNumber4));
        bufp->chgBit(oldp+39,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                     >> 4U))));
        bufp->chgBit(oldp+40,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit4____pinNumber4));
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                     >> 5U))));
        bufp->chgBit(oldp+42,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit5____pinNumber4));
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                     >> 6U))));
        bufp->chgBit(oldp+44,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4));
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                     >> 7U))));
        bufp->chgBit(oldp+46,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4));
        bufp->chgCData(oldp+47,(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg),4);
        bufp->chgCData(oldp+48,((7U & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg)))),4);
        bufp->chgBit(oldp+49,((IData)((3U != (3U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))));
        bufp->chgBit(oldp+50,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2));
        bufp->chgCData(oldp+51,((1U ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))),4);
        bufp->chgBit(oldp+52,((IData)((1U != (3U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))));
        bufp->chgBit(oldp+53,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2));
        bufp->chgBit(oldp+54,((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg))));
        bufp->chgBit(oldp+55,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                     >> 1U))));
        bufp->chgBit(oldp+57,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4));
        bufp->chgBit(oldp+58,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                     >> 2U))));
        bufp->chgBit(oldp+59,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                     >> 3U))));
        bufp->chgBit(oldp+61,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                     >> 4U))));
        bufp->chgBit(oldp+63,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4));
        bufp->chgBit(oldp+64,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                     >> 5U))));
        bufp->chgBit(oldp+65,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4));
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                     >> 6U))));
        bufp->chgBit(oldp+67,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4));
        bufp->chgBit(oldp+68,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                     >> 7U))));
        bufp->chgBit(oldp+69,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4));
        bufp->chgBit(oldp+70,((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg))));
        bufp->chgBit(oldp+71,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit0____pinNumber4));
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                     >> 1U))));
        bufp->chgBit(oldp+73,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit1____pinNumber4));
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                     >> 2U))));
        bufp->chgBit(oldp+75,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit2____pinNumber4));
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                     >> 3U))));
        bufp->chgBit(oldp+77,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                     >> 4U))));
        bufp->chgBit(oldp+79,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                     >> 5U))));
        bufp->chgBit(oldp+81,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4));
        bufp->chgBit(oldp+82,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                     >> 6U))));
        bufp->chgBit(oldp+83,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4));
        bufp->chgBit(oldp+84,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                     >> 7U))));
        bufp->chgBit(oldp+85,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4));
        bufp->chgCData(oldp+86,((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                  << 6U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2) 
                                                   << 2U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2)))))),8);
        bufp->chgCData(oldp+87,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5) 
                                  << 6U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5) 
                                                << 4U) 
                                               | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5)))))))),7);
        bufp->chgBit(oldp+88,((1U & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2))));
        bufp->chgBit(oldp+89,((1U ^ ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2) 
                                     ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1)))));
        bufp->chgBit(oldp+90,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5));
        bufp->chgBit(oldp+91,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1));
        bufp->chgBit(oldp+92,(((~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2)) 
                               & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1))));
        bufp->chgBit(oldp+93,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4) 
                               & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2))));
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2) 
                                     >> 1U))));
        bufp->chgBit(oldp+95,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1) 
                               ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5))));
        bufp->chgBit(oldp+96,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5));
        bufp->chgBit(oldp+97,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1));
        bufp->chgBit(oldp+98,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1) 
                               & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5))));
        bufp->chgBit(oldp+99,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2) 
                                  >> 1U))));
        bufp->chgBit(oldp+100,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2));
        bufp->chgBit(oldp+101,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1) 
                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5))));
        bufp->chgBit(oldp+102,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5));
        bufp->chgBit(oldp+103,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1));
        bufp->chgBit(oldp+104,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5))));
        bufp->chgBit(oldp+105,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2))));
        bufp->chgBit(oldp+106,((1U & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1))));
        bufp->chgBit(oldp+107,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1) 
                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5))));
        bufp->chgBit(oldp+108,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5));
        bufp->chgBit(oldp+109,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1));
        bufp->chgBit(oldp+110,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5))));
        bufp->chgBit(oldp+111,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1))));
        bufp->chgBit(oldp+112,((1U & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1) 
                                      >> 1U))));
        bufp->chgBit(oldp+113,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1) 
                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5))));
        bufp->chgBit(oldp+114,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5));
        bufp->chgBit(oldp+115,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1));
        bufp->chgBit(oldp+116,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5))));
        bufp->chgBit(oldp+117,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1) 
                                   >> 1U))));
        bufp->chgBit(oldp+118,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2));
        bufp->chgBit(oldp+119,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1) 
                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5))));
        bufp->chgBit(oldp+120,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5));
        bufp->chgBit(oldp+121,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1));
        bufp->chgBit(oldp+122,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5))));
        bufp->chgBit(oldp+123,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2))));
        bufp->chgBit(oldp+124,((1U & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0))));
        bufp->chgBit(oldp+125,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1) 
                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5))));
        bufp->chgBit(oldp+126,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5));
        bufp->chgBit(oldp+127,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1));
        bufp->chgBit(oldp+128,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5))));
        bufp->chgBit(oldp+129,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0))));
        bufp->chgBit(oldp+130,((1U & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                      >> 1U))));
        bufp->chgBit(oldp+131,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5))));
        bufp->chgBit(oldp+132,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1));
        bufp->chgBit(oldp+133,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5))));
        bufp->chgBit(oldp+134,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                   >> 1U))));
        bufp->chgCData(oldp+135,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4) 
                                   << 7U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4))))))))),8);
        bufp->chgCData(oldp+136,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1),8);
        bufp->chgCData(oldp+137,((0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1), 1U))),8);
        bufp->chgCData(oldp+138,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2),8);
        bufp->chgCData(oldp+139,((0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2), 2U))),8);
        bufp->chgCData(oldp+140,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3),8);
        bufp->chgCData(oldp+141,((0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3), 4U))),8);
        bufp->chgCData(oldp+142,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4),8);
        bufp->chgCData(oldp+143,(((0x80U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                            << 7U)) 
                                  | ((0x40U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                               << 5U)) 
                                     | ((0x20U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                  << 3U)) 
                                        | ((0x10U & 
                                            ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                             << 1U)) 
                                           | ((8U & 
                                               ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                >> 1U)) 
                                              | ((4U 
                                                  & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                     >> 3U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                        >> 5U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                          >> 7U)))))))))),8);
        bufp->chgCData(oldp+144,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output),2);
        bufp->chgBit(oldp+145,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                                | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4))));
        bufp->chgBit(oldp+146,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                                 | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4)) 
                                | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4))));
        bufp->chgBit(oldp+147,(((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                                  | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4)) 
                                 | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4)) 
                                | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4))));
        bufp->chgBit(oldp+148,((((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                                   | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4)) 
                                  | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4)) 
                                 | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4)) 
                                | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4))));
    }
    bufp->chgBit(oldp+149,(vlSelfRef.testbench__DOT__clk));
    bufp->chgBit(oldp+150,(vlSelfRef.testbench__DOT__rst_n));
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
