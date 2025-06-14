// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vprocessor_tb__Syms.h"


void Vprocessor_tb___024root__trace_chg_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vprocessor_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_chg_0\n"); );
    // Init
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vprocessor_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vprocessor_tb___024root__trace_chg_0_sub_0(Vprocessor_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgIData(oldp+0,((((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U)))
                                  ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                          (((IData)(0x1fU) 
                                            + (0x3ffU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U))))) 
                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                   (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                             (0x1fU 
                                                              & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U))))),32);
        bufp->chgIData(oldp+1,((((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                                >> 0x1bU), 5U)))
                                  ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                          (((IData)(0x1fU) 
                                            + (0x3ffU 
                                               & VL_SHIFTL_III(10,10,32, 
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                                >> 0x1bU), 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                                  >> 0x1bU), 5U))))) 
                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                   (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                           (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                            >> 0x1bU), 5U) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                              >> 0x1bU), 5U))))),32);
        bufp->chgIData(oldp+2,((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                + (IData)((QData)((IData)(
                                                          (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID)) 
                                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                           << 2U)))))),32);
        bufp->chgIData(oldp+3,((((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID)) 
                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                << 2U)),32);
        bufp->chgBit(oldp+4,((1U & (IData)((1ULL & 
                                            (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                                              + (QData)((IData)(
                                                                (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID)) 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                                 << 2U)))) 
                                             >> 0x20U))))));
        bufp->chgQData(oldp+5,((0x1ffffffffULL & ((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                                                  + (QData)((IData)(
                                                                    (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID)) 
                                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                                                     << 2U)))))),33);
        bufp->chgBit(oldp+7,(((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                        >> 0x16U)) 
                              == (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]))));
        bufp->chgBit(oldp+8,(((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                        >> 0x16U)) 
                              == (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                  >> 0x1bU))));
        bufp->chgBit(oldp+9,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                >> 4U))) 
                              == (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]))));
        bufp->chgBit(oldp+10,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                 >> 4U))) 
                               == (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                   >> 0x1bU))));
        bufp->chgBit(oldp+11,(((IData)((0x21000U == 
                                        (0x21000U & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]))) 
                               & ((0U != (0x1fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                   >> 0x16U))) 
                                  & (((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                >> 0x16U)) 
                                      == (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U])) 
                                     | ((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                  >> 0x16U)) 
                                        == (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                            >> 0x1bU)))))));
        bufp->chgBit(oldp+12,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren) 
                               & ((0U != (0x1fU & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                           >> 4U)))) 
                                  & (((0x1fU & (IData)(
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                        >> 4U))) 
                                      == (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U])) 
                                     | ((0x1fU & (IData)(
                                                         (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                          >> 4U))) 
                                        == (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                            >> 0x1bU)))))));
        bufp->chgQData(oldp+13,((((QData)((IData)((
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(10,10,32, 
                                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                                       >> 0x1bU), 5U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x3ffU 
                                                        & VL_SHIFTL_III(10,10,32, 
                                                                        (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                                         >> 0x1bU), 5U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(10,10,32, 
                                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                                        >> 0x1bU), 5U))))) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                                      (0x1fU 
                                                       & (VL_SHIFTL_III(10,10,32, 
                                                                        (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                                         >> 0x1bU), 5U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(10,10,32, 
                                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                                        >> 0x1bU), 5U)))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & VL_SHIFTL_III(10,10,32, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U)))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffU 
                                                                    & VL_SHIFTL_III(10,10,32, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & VL_SHIFTL_III(10,10,32, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U))))) 
                                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                                                  (0x1fU 
                                                                   & (VL_SHIFTL_III(10,10,32, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & VL_SHIFTL_III(10,10,32, 
                                                                                (0x1fU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U)))))))),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgIData(oldp+15,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d),32);
        bufp->chgBit(oldp+16,(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID));
        bufp->chgBit(oldp+17,((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID)))));
        bufp->chgWData(oldp+18,(vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID),207);
        bufp->chgIData(oldp+25,(VL_SHIFTR_III(32,32,32, vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d, 2U)),32);
        bufp->chgIData(oldp+26,((0xfffffffcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)),32);
        bufp->chgCData(oldp+27,((0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U])),5);
        bufp->chgCData(oldp+28,((vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                 >> 0x1bU)),5);
        bufp->chgBit(oldp+29,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+30,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data),32);
        bufp->chgIData(oldp+31,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data),32);
        bufp->chgIData(oldp+32,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data),32);
        bufp->chgIData(oldp+33,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data),32);
        bufp->chgIData(oldp+34,(vlSelfRef.processor_tb__DOT__clk_counter),32);
        bufp->chgIData(oldp+35,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q),32);
        bufp->chgIData(oldp+36,(((1U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U])
                                  ? ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                      << 0x1eU) | (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                   >> 2U))
                                  : 0U)),32);
        bufp->chgWData(oldp+37,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q),66);
        bufp->chgWData(oldp+40,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q),207);
        bufp->chgQData(oldp+47,(vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data),64);
        bufp->chgWData(oldp+49,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q),141);
        bufp->chgQData(oldp+54,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q),41);
        bufp->chgIData(oldp+56,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data)),32);
        bufp->chgIData(oldp+57,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+58,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                  << 0xaU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                              >> 0x16U))),32);
        bufp->chgIData(oldp+59,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                  << 0xaU) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                              >> 0x16U))),32);
        bufp->chgCData(oldp+60,((0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U])),5);
        bufp->chgCData(oldp+61,((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                 >> 0x1bU)),5);
        bufp->chgCData(oldp+62,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                          >> 0x16U))),5);
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+65,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+66,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                     >> 0x14U))));
        bufp->chgCData(oldp+67,((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                  >> 4U)))),5);
        bufp->chgBit(oldp+68,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren));
        bufp->chgCData(oldp+69,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel),2);
        bufp->chgCData(oldp+70,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel),2);
        __Vtemp_3[0U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U];
        __Vtemp_3[1U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U];
        __Vtemp_3[2U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U];
        __Vtemp_3[3U] = (0x7fU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]);
        bufp->chgWData(oldp+71,(__Vtemp_3),103);
        bufp->chgCData(oldp+75,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                         >> 3U))),4);
        bufp->chgCData(oldp+76,((0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                           << 3U) | 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
                                           >> 0x1dU)))),6);
        bufp->chgCData(oldp+77,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
                                          >> 0x18U))),5);
        bufp->chgCData(oldp+78,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
                                          >> 0x13U))),5);
        bufp->chgCData(oldp+79,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
                                          >> 0xeU))),5);
        bufp->chgIData(oldp+80,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
                                  << 0x12U) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] 
                                               >> 0xeU))),32);
        bufp->chgIData(oldp+81,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] 
                                  << 0x12U) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                               >> 0xeU))),32);
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 0xdU))));
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+85,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 9U))));
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 8U))));
        bufp->chgCData(oldp+88,((3U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                       >> 6U))),2);
        bufp->chgBit(oldp+89,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 5U))));
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 4U))));
        bufp->chgBit(oldp+91,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+94,((1U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U])));
        bufp->chgBit(oldp+95,((((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                  >> 4U))) 
                                == (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U])) 
                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren))));
        bufp->chgBit(oldp+96,((((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                  >> 4U))) 
                                == (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                    >> 0x1bU)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren))));
        bufp->chgBit(oldp+97,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                 >> 4U))) 
                               == (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U]))));
        bufp->chgBit(oldp+98,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                 >> 4U))) 
                               == (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                   >> 0x1bU))));
        bufp->chgCData(oldp+99,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q) 
                                  << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q))),2);
        bufp->chgBit(oldp+100,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q));
        bufp->chgBit(oldp+101,((1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor) 
                                      >> 1U))));
        bufp->chgWData(oldp+102,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag),1536);
        bufp->chgWData(oldp+150,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA),2048);
        bufp->chgQData(oldp+214,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid),64);
        bufp->chgIData(oldp+216,((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                  >> 8U)),24);
        bufp->chgCData(oldp+217,((0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                           >> 2U))),6);
        bufp->chgBit(oldp+218,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid 
                                              >> (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                     >> 2U)))))));
        bufp->chgIData(oldp+219,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+220,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor),2);
        bufp->chgBit(oldp+221,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q));
        bufp->chgBit(oldp+222,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q));
        bufp->chgBit(oldp+223,((IData)((0x21000U == 
                                        (0x21000U & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])))));
        bufp->chgBit(oldp+224,((0U != (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                >> 0x16U)))));
        bufp->chgBit(oldp+225,((0U != (0x1fU & (IData)(
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                        >> 4U))))));
        bufp->chgBit(oldp+226,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19) 
                                & (0x400000U == (0x7c00000U 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+227,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19) 
                                & (0U == (0x7c00000U 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgIData(oldp+228,(((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                   << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                >> 2U))),32);
        bufp->chgBit(oldp+229,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                      >> 1U))));
        bufp->chgIData(oldp+230,(((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                   << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U))),32);
        bufp->chgCData(oldp+231,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x11U))),5);
        bufp->chgCData(oldp+232,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+233,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+234,((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 2U))),7);
        bufp->chgCData(oldp+235,((((7U == (7U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 0xeU))) 
                                   << 7U) | (((6U == 
                                               (7U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 0xeU))) 
                                              << 6U) 
                                             | (((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 0xeU))) 
                                                 << 5U) 
                                                | (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                         >> 0xeU))) 
                                                    << 4U) 
                                                   | (((3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                            >> 0xeU))) 
                                                       << 3U) 
                                                      | (((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                               >> 0xeU))) 
                                                          << 2U) 
                                                         | (((1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                  >> 0xeU))) 
                                                             << 1U) 
                                                            | (0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                   >> 0xeU))))))))))),8);
        bufp->chgCData(oldp+236,((((0x20U == (0x7fU 
                                              & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                  << 5U) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                    >> 0x1bU)))) 
                                   << 1U) | (0U == 
                                             (0x7fU 
                                              & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                  << 5U) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                    >> 0x1bU)))))),2);
        bufp->chgBit(oldp+237,((0x33U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+238,((0x13U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+239,((3U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U)))));
        bufp->chgBit(oldp+240,((0x23U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+241,((0x63U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+242,((0x73U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+243,((0xfU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                  >> 2U)))));
        bufp->chgBit(oldp+244,((0x37U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+245,((0x17U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+246,((0x6fU == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgBit(oldp+247,((0x67U == (0x7fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U)))));
        bufp->chgCData(oldp+248,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded),6);
        bufp->chgCData(oldp+249,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded),4);
        bufp->chgBit(oldp+250,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                                & (0U == (0x7fU & (
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                    << 5U) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 0x1bU)))))));
        bufp->chgBit(oldp+251,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                                & (0x20U == (0x7fU 
                                             & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                 << 5U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 0x1bU)))))));
        bufp->chgBit(oldp+252,((IData)(((0x80ccU == 
                                         (0x1c1fcU 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                        & (0U == (0x7fU 
                                                  & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                      << 5U) 
                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 0x1bU))))))));
        bufp->chgBit(oldp+253,((IData)(((0xc0ccU == 
                                         (0x1c1fcU 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                        & (0U == (0x7fU 
                                                  & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                      << 5U) 
                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 0x1bU))))))));
        bufp->chgBit(oldp+254,((IData)(((0x100ccU == 
                                         (0x1c1fcU 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                        & (0U == (0x7fU 
                                                  & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                      << 5U) 
                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 0x1bU))))))));
        bufp->chgBit(oldp+255,((IData)(((0x180ccU == 
                                         (0x1c1fcU 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                        & (0U == (0x7fU 
                                                  & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                      << 5U) 
                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 0x1bU))))))));
        bufp->chgBit(oldp+256,((IData)(((0x1c0ccU == 
                                         (0x1c1fcU 
                                          & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                        & (0U == (0x7fU 
                                                  & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                      << 5U) 
                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 0x1bU))))))));
        bufp->chgBit(oldp+257,((IData)(((0xccU == (0x1fcU 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20)))));
        bufp->chgBit(oldp+258,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12) 
                                & (0U == (0x7fU & (
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                    << 5U) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 0x1bU)))))));
        bufp->chgBit(oldp+259,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12) 
                                & (0x20U == (0x7fU 
                                             & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                 << 5U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 0x1bU)))))));
        bufp->chgBit(oldp+260,((IData)((0x4cU == (0x1c1fcU 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+261,((IData)((0x804cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+262,((IData)((0xc04cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+263,((IData)((0x1004cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+264,((IData)((0x1804cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+265,((IData)((0x1c04cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+266,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli));
        bufp->chgBit(oldp+267,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli));
        bufp->chgBit(oldp+268,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai));
        bufp->chgBit(oldp+269,((IData)((0x18cU == (0x1c1fcU 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+270,((IData)((0x418cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+271,((IData)((0x1018cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+272,((IData)((0x1418cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+273,((IData)((0x1818cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+274,((IData)((0x1c18cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+275,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb));
        bufp->chgBit(oldp+276,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh));
        bufp->chgBit(oldp+277,((IData)((0x800cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+278,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu));
        bufp->chgBit(oldp+279,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu));
        bufp->chgBit(oldp+280,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb));
        bufp->chgBit(oldp+281,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh));
        bufp->chgBit(oldp+282,((IData)((0x808cU == 
                                        (0x1c1fcU & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])))));
        bufp->chgBit(oldp+283,((IData)(((0x400003cU 
                                         == (0x7fffffcU 
                                             & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                        & (0U == (0x7fU 
                                                  & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                      << 5U) 
                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 0x1bU))))))));
        bufp->chgIData(oldp+284,((((- (IData)((1U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                >> 1U)))) 
                                   << 0xcU) | (0xfffU 
                                               & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                   << 0xaU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     >> 0x16U))))),32);
        bufp->chgIData(oldp+285,((((- (IData)((1U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                >> 1U)))) 
                                   << 0xdU) | ((0x1000U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                   << 0xbU)) 
                                               | ((0x800U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      << 2U)) 
                                                  | ((0x7e0U 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                          << 0xaU) 
                                                         | (0x3e0U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                               >> 0x16U)))) 
                                                     | (0x1eU 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                           >> 9U))))))),32);
        bufp->chgIData(oldp+286,((((- (IData)((1U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                >> 1U)))) 
                                   << 0xcU) | ((0xfe0U 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                    << 0xaU) 
                                                   | (0x3e0U 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                         >> 0x16U)))) 
                                               | (0x1fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     >> 9U))))),32);
        bufp->chgIData(oldp+287,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0x16U))),32);
        bufp->chgIData(oldp+288,((((- (IData)((1U & 
                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                >> 1U)))) 
                                   << 0x15U) | ((0x100000U 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                    << 0x13U)) 
                                                | ((0xff000U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                       >> 2U)) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                          >> 0xbU)) 
                                                      | (0x7feU 
                                                         & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                             << 0xaU) 
                                                            | (0x3feU 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                  >> 0x16U))))))))),32);
        bufp->chgIData(oldp+289,((0xfffff000U & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                  << 0x1eU) 
                                                 | (0x3ffff000U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                       >> 2U))))),32);
        bufp->chgIData(oldp+290,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate),32);
        bufp->chgCData(oldp+291,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel),3);
        bufp->chgBit(oldp+292,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel)) 
                                & ((0x13U == (0x7fU 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 2U))) 
                                   | ((3U == (0x7fU 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 2U))) 
                                      | (0x67U == (0x7fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 2U))))))));
        bufp->chgBit(oldp+293,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel));
        bufp->chgBit(oldp+294,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel));
        bufp->chgBit(oldp+295,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren));
        bufp->chgBit(oldp+296,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__prd_en));
        bufp->chgBit(oldp+297,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1));
        bufp->chgBit(oldp+298,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2));
        bufp->chgBit(oldp+299,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_a_use_pc));
        bufp->chgBit(oldp+300,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_b_use_imm));
        bufp->chgCData(oldp+301,((3U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                  >> 2U)))),2);
        bufp->chgBit(oldp+302,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_byte));
        bufp->chgBit(oldp+303,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_halfword));
        bufp->chgBit(oldp+304,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_signed));
        bufp->chgQData(oldp+305,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in),64);
        bufp->chgSData(oldp+307,(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in),16);
        bufp->chgIData(oldp+308,(((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                                   << 0x13U) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                                >> 0xdU))),32);
        bufp->chgBit(oldp+309,((IData)((0x1080U == 
                                        (0x1080U & 
                                         vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])))));
        bufp->chgBit(oldp+310,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+311,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+312,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                      >> 8U))));
        bufp->chgBit(oldp+313,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                      >> 7U))));
        bufp->chgCData(oldp+314,((1U | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel) 
                                                    << 2U) 
                                                   | (2U 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                                           >> 0xaU)) 
                                                         << 1U)))))),4);
        bufp->chgIData(oldp+315,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data),32);
        bufp->chgIData(oldp+316,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data),32);
        bufp->chgIData(oldp+317,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                                   ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                                            ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data
                                            : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data))),32);
        bufp->chgCData(oldp+318,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel),2);
        bufp->chgIData(oldp+319,(((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                   ? 0U : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                                ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data
                                                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data)
                                            : ((1U 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                                ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data
                                                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data)))),32);
        bufp->chgCData(oldp+320,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel),3);
        bufp->chgIData(oldp+321,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q),32);
        bufp->chgBit(oldp+322,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__load_en_q));
        bufp->chgBit(oldp+323,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_byte_q));
        bufp->chgBit(oldp+324,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_halfword_q));
        bufp->chgBit(oldp+325,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_signed_q));
        bufp->chgBit(oldp+326,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__valid_q));
        bufp->chgBit(oldp+327,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_q));
        bufp->chgBit(oldp+328,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__imem_region_en_q));
        bufp->chgBit(oldp+329,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_q));
        bufp->chgCData(oldp+330,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel),2);
        bufp->chgCData(oldp+331,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel),2);
        bufp->chgCData(oldp+332,((0x3fU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                            << 3U) 
                                           | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] 
                                              >> 0x1dU)))),6);
        bufp->chgCData(oldp+333,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel),3);
        bufp->chgBit(oldp+334,((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                         >> 0xaU)))));
        bufp->chgCData(oldp+335,((0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                           >> 0x15U))),8);
        bufp->chgCData(oldp+336,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux),8);
        bufp->chgBit(oldp+337,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel));
        bufp->chgCData(oldp+338,((0xffU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                                            << 3U) 
                                           | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                              >> 0x1dU)))),8);
        bufp->chgCData(oldp+339,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_2__o_mux),8);
        bufp->chgCData(oldp+340,((0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                                           >> 5U))),8);
        bufp->chgCData(oldp+341,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_3__o_mux),8);
        bufp->chgWData(oldp+342,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R),1024);
        bufp->chgIData(oldp+374,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U]),32);
        bufp->chgIData(oldp+375,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U]),32);
        bufp->chgIData(oldp+376,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U]),32);
        bufp->chgIData(oldp+377,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U]),32);
        bufp->chgIData(oldp+378,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U]),32);
        bufp->chgIData(oldp+379,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U]),32);
        bufp->chgIData(oldp+380,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U]),32);
        bufp->chgIData(oldp+381,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U]),32);
        bufp->chgIData(oldp+382,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U]),32);
        bufp->chgIData(oldp+383,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU]),32);
        bufp->chgIData(oldp+384,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U]),32);
        bufp->chgIData(oldp+385,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU]),32);
        bufp->chgIData(oldp+386,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U]),32);
        bufp->chgIData(oldp+387,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU]),32);
        bufp->chgIData(oldp+388,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U]),32);
        bufp->chgIData(oldp+389,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU]),32);
        bufp->chgIData(oldp+390,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U]),32);
        bufp->chgIData(oldp+391,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU]),32);
        bufp->chgIData(oldp+392,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U]),32);
        bufp->chgIData(oldp+393,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU]),32);
        bufp->chgIData(oldp+394,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U]),32);
        bufp->chgIData(oldp+395,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU]),32);
        bufp->chgIData(oldp+396,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U]),32);
        bufp->chgIData(oldp+397,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU]),32);
        bufp->chgIData(oldp+398,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U]),32);
        bufp->chgIData(oldp+399,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU]),32);
        bufp->chgIData(oldp+400,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U]),32);
        bufp->chgIData(oldp+401,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU]),32);
        bufp->chgIData(oldp+402,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U]),32);
        bufp->chgIData(oldp+403,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU]),32);
        bufp->chgIData(oldp+404,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U]),32);
        bufp->chgIData(oldp+405,(vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU]),32);
        bufp->chgBit(oldp+406,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                              >> 2U)))));
        bufp->chgIData(oldp+407,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                          >> 9U))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgQData(oldp+408,((((QData)((IData)(
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                               >> 4U))))) 
                                   << 0x21U) | (((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux)) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren))))),38);
        __Vtemp_7[0U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U];
        __Vtemp_7[1U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U];
        __Vtemp_7[2U] = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U];
        __Vtemp_7[3U] = ((vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                          << 0xdU) | (0x1fffU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]));
        __Vtemp_7[4U] = (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                         >> 0x13U);
        bufp->chgWData(oldp+410,(__Vtemp_7),141);
        bufp->chgIData(oldp+415,(((((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                     ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                         ? (- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                          >> 0xfU))))
                                         : (- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                          >> 7U)))))
                                     : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                         ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                 >> 0x10U))) 
                                   << 0x10U) | ((((2U 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((1U 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                                       ? 
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                     >> 7U))))
                                                       : 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                       >> 8U)))) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data)))),32);
        bufp->chgIData(oldp+416,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                   ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                            ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                << 0xaU) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                  >> 0x16U))
                                            : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded))),32);
        bufp->chgIData(oldp+417,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                   ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                            ? ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                << 0xaU) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                  >> 0x16U))
                                            : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))),32);
        bufp->chgBit(oldp+418,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                  >> 4U))) 
                                == (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U]))));
        bufp->chgBit(oldp+419,(((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                  >> 4U))) 
                                == (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                    >> 0x1bU))));
        bufp->chgCData(oldp+420,(((2U & ((0xfffffffeU 
                                          & (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y)) 
                                              << 1U) 
                                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor))) 
                                         | (((IData)(
                                                     (3U 
                                                      == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor))) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken) 
                                                 & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor) 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y))) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_3))) 
                                            << 1U))) 
                                  | (1U & (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y)) 
                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor)) 
                                           | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_4)) 
                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken) 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_4)) 
                                                 | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_3))))))),2);
        bufp->chgCData(oldp+421,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                   ? 0U : (0xffU & 
                                           ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                             ? (- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                              >> 7U))))
                                             : (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                >> 8U))))),8);
        bufp->chgSData(oldp+422,((0xffffU & ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                                  ? 
                                                 (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                >> 0xfU))))
                                                  : 
                                                 (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                                >> 7U)))))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                  >> 0x10U))))),16);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+423,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                   << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                               >> 0x12U))),32);
        bufp->chgCData(oldp+424,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel),2);
        bufp->chgBit(oldp+425,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                 >> 0xbU) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken))));
        bufp->chgBit(oldp+426,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+427,(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss));
        __Vtemp_10[0U] = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result) 
                           << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken) 
                                      << 2U) | (3U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                   >> 9U))));
        __Vtemp_10[1U] = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result) 
                           >> 0x1dU) | ((IData)((((QData)((IData)(
                                                                  ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                    << 0xeU) 
                                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                      >> 0x12U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + 
                                                                    ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                      << 0xeU) 
                                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                        >> 0x12U))))))) 
                                        << 3U));
        __Vtemp_10[2U] = (((IData)((((QData)((IData)(
                                                     ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                       << 0xeU) 
                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                         >> 0x12U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                    << 0xeU) 
                                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                      >> 0x12U))))))) 
                           >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                     << 0xeU) 
                                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                       >> 0x12U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                       << 0xeU) 
                                                                      | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                         >> 0x12U)))))) 
                                                 >> 0x20U)) 
                                        << 3U));
        __Vtemp_10[3U] = ((8U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                 >> 8U)) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                         << 0xeU) 
                                                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                           >> 0x12U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(4U) 
                                                                         + 
                                                                         ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                           << 0xeU) 
                                                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                             >> 0x12U)))))) 
                                                     >> 0x20U)) 
                                            >> 0x1dU));
        bufp->chgWData(oldp+428,(__Vtemp_10),100);
        bufp->chgQData(oldp+432,((((QData)((IData)(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                                       ? 0U
                                                       : 
                                                      ((IData)(4U) 
                                                       + 
                                                       ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                         << 0xeU) 
                                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                           >> 0x12U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                                       ? 
                                                      (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                         << 0xeU) 
                                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           >> 0x12U)) 
                                                       | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           << 0xeU) 
                                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x12U)))
                                                       : 
                                                      (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                         << 0xeU) 
                                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           >> 0x12U)) 
                                                       & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           << 0xeU) 
                                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x12U)))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                                       ? 
                                                      (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                         << 0xeU) 
                                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           >> 0x12U)) 
                                                       ^ 
                                                       ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                         << 0xeU) 
                                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                           >> 0x12U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                                         ? vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out
                                                         : vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                                       ? 
                                                      (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                                       | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                                          & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                                             | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))
                                                       : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result)))))) 
                                   << 9U) | (QData)((IData)(
                                                            ((0x1f0U 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                 >> 9U)) 
                                                             | ((0xcU 
                                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                    >> 5U)) 
                                                                | ((2U 
                                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                       >> 0xbU)) 
                                                                   | (1U 
                                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                         >> 0xaU))))))))),41);
        bufp->chgQData(oldp+434,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q),41);
        bufp->chgWData(oldp+436,(vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg),280);
        bufp->chgQData(oldp+445,((((QData)((IData)(
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                               >> 4U))))) 
                                   << 0x21U) | (((QData)((IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                                  >> 9U))) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow))))),38);
        bufp->chgCData(oldp+447,((0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                           >> 0x12U))),6);
        bufp->chgIData(oldp+448,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+449,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                   << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+450,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                   << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+451,(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                   << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                               >> 0x12U))),32);
        bufp->chgIData(oldp+452,(((IData)(4U) + ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                    >> 0x12U)))),32);
        bufp->chgCData(oldp+453,((0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                           >> 0xdU))),5);
        bufp->chgCData(oldp+454,((3U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                        >> 7U))),2);
        bufp->chgBit(oldp+455,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+456,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+457,((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+458,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_jump));
        bufp->chgIData(oldp+459,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                    << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                >> 0x12U)) 
                                  | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                      << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                  >> 0x12U)))),32);
        bufp->chgIData(oldp+460,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                    << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                >> 0x12U)) 
                                  & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                      << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                  >> 0x12U)))),32);
        bufp->chgIData(oldp+461,((((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                    << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                >> 0x12U)) 
                                  ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                      << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                  >> 0x12U)))),32);
        bufp->chgIData(oldp+462,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                  | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                     & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                        | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))),32);
        bufp->chgIData(oldp+463,((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result)),32);
        bufp->chgIData(oldp+464,(((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                   ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                            ? vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out
                                            : vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16))),32);
        bufp->chgIData(oldp+465,(((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                   ? ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                       ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                           ? 0U : ((IData)(4U) 
                                                   + 
                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                     << 0xeU) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                       >> 0x12U))))
                                       : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                           ? (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                << 0xeU) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 0x12U)) 
                                              | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    >> 0x12U)))
                                           : (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                << 0xeU) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 0x12U)) 
                                              & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    >> 0x12U)))))
                                   : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                       ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                           ? (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                << 0xeU) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 0x12U)) 
                                              ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  << 0xeU) 
                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    >> 0x12U)))
                                           : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                                   ? vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out
                                                   : vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16)))
                                       : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                           ? (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                              | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                                 & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                                    | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))
                                           : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result))))),32);
        bufp->chgBit(oldp+466,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl));
        bufp->chgBit(oldp+467,((0x1dU == (0x3fU & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   >> 0x12U)))));
        bufp->chgCData(oldp+468,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1))),2);
        bufp->chgCData(oldp+469,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel),3);
        bufp->chgBit(oldp+470,((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+471,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp));
        bufp->chgBit(oldp+472,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2));
        bufp->chgBit(oldp+473,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2));
        bufp->chgBit(oldp+474,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2));
        bufp->chgBit(oldp+475,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken));
        bufp->chgBit(oldp+476,((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result 
                                              >> 0x20U)))));
        bufp->chgQData(oldp+477,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result),33);
        bufp->chgIData(oldp+479,(((0x1dU == (0x3fU 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                >> 0x12U)))
                                   ? (~ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          << 0xeU) 
                                         | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                            >> 0x12U)))
                                   : ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                       << 0xeU) | (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x12U)))),32);
        bufp->chgBit(oldp+480,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13))));
        bufp->chgBit(oldp+481,((1U & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32) 
                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                      | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                         & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                 >> 0x11U)) 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                >> 0x11U)) 
                                            | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32))))))));
        bufp->chgBit(oldp+482,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                   & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                      | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))));
        bufp->chgBit(oldp+483,((1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0x11U)) 
                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+484,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos));
        bufp->chgBit(oldp+485,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))));
        bufp->chgCData(oldp+486,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal))))))))),8);
        bufp->chgCData(oldp+487,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger))))))))),8);
        bufp->chgCData(oldp+488,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller))))))))),8);
        bufp->chgCData(oldp+489,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17))))),4);
        bufp->chgCData(oldp+490,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8))))),4);
        bufp->chgCData(oldp+491,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9))))),4);
        bufp->chgCData(oldp+492,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13))),2);
        bufp->chgCData(oldp+493,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14))),2);
        bufp->chgCData(oldp+494,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15))),2);
        bufp->chgBit(oldp+495,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32));
        bufp->chgBit(oldp+496,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32));
        bufp->chgBit(oldp+497,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl))));
        bufp->chgBit(oldp+498,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl))));
        bufp->chgBit(oldp+499,((1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                      & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                              >> 0x11U)) 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                             >> 0x11U)) 
                                         | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32)))))));
        bufp->chgBit(oldp+500,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32))))));
        bufp->chgCData(oldp+501,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+502,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0x12U))),4);
        bufp->chgBit(oldp+503,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal));
        bufp->chgBit(oldp+504,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger));
        bufp->chgBit(oldp+505,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller));
        bufp->chgCData(oldp+506,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq),4);
        bufp->chgCData(oldp+507,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0x16U))),4);
        bufp->chgCData(oldp+508,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0x16U))),4);
        bufp->chgBit(oldp+509,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal));
        bufp->chgBit(oldp+510,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger));
        bufp->chgBit(oldp+511,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller));
        bufp->chgCData(oldp+512,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq),4);
        bufp->chgCData(oldp+513,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0x1aU))),4);
        bufp->chgCData(oldp+514,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0x1aU))),4);
        bufp->chgBit(oldp+515,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal));
        bufp->chgBit(oldp+516,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger));
        bufp->chgBit(oldp+517,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller));
        bufp->chgCData(oldp+518,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq),4);
        bufp->chgCData(oldp+519,((0xfU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                           << 2U) | 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                           >> 0x1eU)))),4);
        bufp->chgCData(oldp+520,((0xfU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                           << 2U) | 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                           >> 0x1eU)))),4);
        bufp->chgBit(oldp+521,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal));
        bufp->chgBit(oldp+522,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger));
        bufp->chgBit(oldp+523,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller));
        bufp->chgCData(oldp+524,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq),4);
        bufp->chgCData(oldp+525,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 2U))),4);
        bufp->chgCData(oldp+526,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+527,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal));
        bufp->chgBit(oldp+528,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger));
        bufp->chgBit(oldp+529,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller));
        bufp->chgCData(oldp+530,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq),4);
        bufp->chgCData(oldp+531,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 6U))),4);
        bufp->chgCData(oldp+532,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 6U))),4);
        bufp->chgBit(oldp+533,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal));
        bufp->chgBit(oldp+534,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger));
        bufp->chgBit(oldp+535,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller));
        bufp->chgCData(oldp+536,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq),4);
        bufp->chgCData(oldp+537,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0xaU))),4);
        bufp->chgCData(oldp+538,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0xaU))),4);
        bufp->chgBit(oldp+539,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal));
        bufp->chgBit(oldp+540,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger));
        bufp->chgBit(oldp+541,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller));
        bufp->chgCData(oldp+542,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq),4);
        bufp->chgCData(oldp+543,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                          >> 0xeU))),4);
        bufp->chgCData(oldp+544,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                          >> 0xeU))),4);
        bufp->chgBit(oldp+545,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal));
        bufp->chgBit(oldp+546,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger));
        bufp->chgBit(oldp+547,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller));
        bufp->chgCData(oldp+548,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq),4);
        bufp->chgIData(oldp+549,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in),32);
        bufp->chgIData(oldp+550,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in),32);
        bufp->chgIData(oldp+551,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out),32);
        bufp->chgIData(oldp+552,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit) 
                                   << 0x1fU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
                                                >> 1U))),32);
        bufp->chgIData(oldp+553,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                   << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
                                                >> 2U))),32);
        bufp->chgIData(oldp+554,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                   << 0x1cU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
                                                >> 4U))),32);
        bufp->chgIData(oldp+555,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                   << 0x18U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
                                                >> 8U))),32);
        bufp->chgIData(oldp+556,((((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                                   << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
                                                >> 0x10U))),32);
        bufp->chgIData(oldp+557,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1),32);
        bufp->chgIData(oldp+558,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2),32);
        bufp->chgIData(oldp+559,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4),32);
        bufp->chgIData(oldp+560,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8),32);
        bufp->chgIData(oldp+561,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16),32);
        bufp->chgBit(oldp+562,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode));
        bufp->chgBit(oldp+563,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1)) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0))));
        bufp->chgBit(oldp+564,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode));
        bufp->chgBit(oldp+565,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit));
        bufp->chgBit(oldp+566,((0U != (0x7ffffffU & 
                                       ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                         << 9U) | (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x17U))))));
        bufp->chgCData(oldp+567,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel),2);
        bufp->chgBit(oldp+568,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel));
        bufp->chgBit(oldp+569,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel));
        bufp->chgBit(oldp+570,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel));
        bufp->chgBit(oldp+571,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel));
        bufp->chgBit(oldp+572,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel));
        bufp->chgBit(oldp+573,((1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0x11U)) 
                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+574,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos));
        bufp->chgBit(oldp+575,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)))));
        bufp->chgCData(oldp+576,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal))))))))),8);
        bufp->chgCData(oldp+577,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger))))))))),8);
        bufp->chgCData(oldp+578,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller) 
                                   << 7U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller) 
                                              << 6U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller))))))))),8);
        bufp->chgCData(oldp+579,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17))))),4);
        bufp->chgCData(oldp+580,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8))))),4);
        bufp->chgCData(oldp+581,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3) 
                                   << 3U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9))))),4);
        bufp->chgCData(oldp+582,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13))),2);
        bufp->chgCData(oldp+583,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14))),2);
        bufp->chgCData(oldp+584,((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12) 
                                   << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15))),2);
        bufp->chgBit(oldp+585,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32));
        bufp->chgBit(oldp+586,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32));
        bufp->chgBit(oldp+587,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp))));
        bufp->chgBit(oldp+588,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp))));
        bufp->chgBit(oldp+589,((1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                                      & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                              >> 0x11U)) 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                             >> 0x11U)) 
                                         | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                                            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32)))))));
        bufp->chgBit(oldp+590,(((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos) 
                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32))))));
        bufp->chgCData(oldp+591,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0x12U))),4);
        bufp->chgCData(oldp+592,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                          >> 0x12U))),4);
        bufp->chgBit(oldp+593,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal));
        bufp->chgBit(oldp+594,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger));
        bufp->chgBit(oldp+595,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller));
        bufp->chgCData(oldp+596,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq),4);
        bufp->chgCData(oldp+597,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0x16U))),4);
        bufp->chgCData(oldp+598,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                          >> 0x16U))),4);
        bufp->chgBit(oldp+599,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal));
        bufp->chgBit(oldp+600,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger));
        bufp->chgBit(oldp+601,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller));
        bufp->chgCData(oldp+602,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq),4);
        bufp->chgCData(oldp+603,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0x1aU))),4);
        bufp->chgCData(oldp+604,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                          >> 0x1aU))),4);
        bufp->chgBit(oldp+605,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal));
        bufp->chgBit(oldp+606,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger));
        bufp->chgBit(oldp+607,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller));
        bufp->chgCData(oldp+608,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq),4);
        bufp->chgCData(oldp+609,((0xfU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                           << 2U) | 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                           >> 0x1eU)))),4);
        bufp->chgCData(oldp+610,((0xfU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                           << 2U) | 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                           >> 0x1eU)))),4);
        bufp->chgBit(oldp+611,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal));
        bufp->chgBit(oldp+612,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger));
        bufp->chgBit(oldp+613,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller));
        bufp->chgCData(oldp+614,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq),4);
        bufp->chgCData(oldp+615,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 2U))),4);
        bufp->chgCData(oldp+616,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 2U))),4);
        bufp->chgBit(oldp+617,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal));
        bufp->chgBit(oldp+618,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger));
        bufp->chgBit(oldp+619,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller));
        bufp->chgCData(oldp+620,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq),4);
        bufp->chgCData(oldp+621,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 6U))),4);
        bufp->chgCData(oldp+622,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 6U))),4);
        bufp->chgBit(oldp+623,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal));
        bufp->chgBit(oldp+624,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger));
        bufp->chgBit(oldp+625,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller));
        bufp->chgCData(oldp+626,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq),4);
        bufp->chgCData(oldp+627,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0xaU))),4);
        bufp->chgCData(oldp+628,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0xaU))),4);
        bufp->chgBit(oldp+629,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal));
        bufp->chgBit(oldp+630,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger));
        bufp->chgBit(oldp+631,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller));
        bufp->chgCData(oldp+632,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq),4);
        bufp->chgCData(oldp+633,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                          >> 0xeU))),4);
        bufp->chgCData(oldp+634,((0xfU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0xeU))),4);
        bufp->chgBit(oldp+635,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal));
        bufp->chgBit(oldp+636,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger));
        bufp->chgBit(oldp+637,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller));
        bufp->chgCData(oldp+638,(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq),4);
        bufp->chgBit(oldp+639,((1U & (IData)((1ULL 
                                              & ((4ULL 
                                                  + (QData)((IData)(
                                                                    ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                                      << 0xeU) 
                                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                        >> 0x12U))))) 
                                                 >> 0x20U))))));
        bufp->chgQData(oldp+640,((0x1ffffffffULL & 
                                  (4ULL + (QData)((IData)(
                                                          ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                            << 0xeU) 
                                                           | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                              >> 0x12U))))))),33);
        bufp->chgIData(oldp+642,((IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                          >> 9U))),32);
        bufp->chgIData(oldp+643,(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux),32);
        bufp->chgCData(oldp+644,((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                   >> 4U)))),5);
        bufp->chgBit(oldp+645,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow));
        bufp->chgCData(oldp+646,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_fwd_flags),2);
        bufp->chgCData(oldp+647,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_fwd_flags),2);
        bufp->chgIData(oldp+648,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded),32);
        bufp->chgIData(oldp+649,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded),32);
        bufp->chgBit(oldp+650,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched));
        bufp->chgBit(oldp+651,(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched));
        bufp->chgBit(oldp+652,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t));
        bufp->chgBit(oldp+653,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt));
        bufp->chgBit(oldp+654,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y));
        bufp->chgIData(oldp+655,((0xffffffU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                << 6U) 
                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                  >> 0x1aU)))),24);
        bufp->chgCData(oldp+656,((0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                           >> 0x14U))),6);
        bufp->chgBit(oldp+657,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en));
        bufp->chgBit(oldp+658,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_d));
        bufp->chgBit(oldp+659,(((~ (IData)((0U != (0x1fffffU 
                                                   & (IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                              >> 0x14U)))))) 
                                & ((~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                               >> 0x11U))) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8)))));
        bufp->chgBit(oldp+660,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_d));
        bufp->chgBit(oldp+661,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                             >> 0x14U)))))))));
        bufp->chgIData(oldp+662,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__wdata),32);
        bufp->chgBit(oldp+663,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_d))));
        bufp->chgBit(oldp+664,(((~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                            >> 0xdU))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_6))));
        bufp->chgBit(oldp+665,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_6) 
                                & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                           >> 0xdU)))));
        bufp->chgBit(oldp+666,(((~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                            >> 0xdU))) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_5))));
        bufp->chgBit(oldp+667,(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_5) 
                                & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                           >> 0xdU)))));
        bufp->chgIData(oldp+668,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data),32);
        bufp->chgCData(oldp+669,((0xffU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                   >> 9U)))),8);
        bufp->chgCData(oldp+670,((0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+671,((0xffU & (- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                         >> 7U)))))),8);
        bufp->chgSData(oldp+672,((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+673,((0xffffU & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                           >> 7U)))))),16);
        bufp->chgSData(oldp+674,((0xffffU & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                           >> 0xfU)))))),16);
    }
    bufp->chgBit(oldp+675,(vlSelfRef.processor_tb__DOT__clk_i));
    bufp->chgBit(oldp+676,(vlSelfRef.processor_tb__DOT__rst_n));
    bufp->chgIData(oldp+677,(vlSelfRef.processor_tb__DOT__sw_tb),32);
    bufp->chgIData(oldp+678,(vlSelfRef.processor_tb__DOT__input_port_tb),32);
    bufp->chgIData(oldp+679,(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data),32);
    bufp->chgBit(oldp+680,(((~ ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                 >> 1U) | vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                            & (0U != vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data))));
    __Vtemp_11[0U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)
                                                               ? 0U
                                                               : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))))) 
                       << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q) 
                                  << 1U) | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)) 
                                            & ((~ (
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                    >> 1U) 
                                                   | vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                                               & (0U 
                                                  != vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)))));
    __Vtemp_11[1U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)
                                                               ? 0U
                                                               : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))))) 
                       >> 0x1eU) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)
                                                                  ? 0U
                                                                  : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
                                             >> 0x20U)) 
                                    << 2U));
    __Vtemp_11[2U] = ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)
                                                               ? 0U
                                                               : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
                               >> 0x20U)) >> 0x1eU);
    bufp->chgWData(oldp+681,(__Vtemp_11),66);
    bufp->chgIData(oldp+684,(((((0U == (0x1fU & VL_SHIFTL_III(11,11,32, 
                                                              (0x3fU 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                  >> 2U)), 5U)))
                                 ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA[
                                         (((IData)(0x1fU) 
                                           + (0x7ffU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0x3fU 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                  >> 2U)), 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x3fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                 >> 2U)), 5U))))) 
                               | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA[
                                  (0x3fU & (VL_SHIFTL_III(11,11,32, 
                                                          (0x3fU 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                              >> 2U)), 5U) 
                                            >> 5U))] 
                                  >> (0x1fU & VL_SHIFTL_III(11,11,32, 
                                                            (0x3fU 
                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                >> 2U)), 5U)))) 
                              & (- (IData)(((IData)(
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid 
                                                     >> 
                                                     (0x3fU 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                         >> 2U)))) 
                                            & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                >> 8U) 
                                               == (0xffffffU 
                                                   & ((0x5ffU 
                                                       >= 
                                                       (0x7ffU 
                                                        & ((IData)(0x18U) 
                                                           * 
                                                           (0x3fU 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                               >> 2U)))))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x18U) 
                                                             * 
                                                             (0x3fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                 >> 2U)))))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[
                                                         (((IData)(0x17U) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x18U) 
                                                               * 
                                                               (0x3fU 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                   >> 2U))))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x18U) 
                                                              * 
                                                              (0x3fU 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                  >> 2U))))))) 
                                                       | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[
                                                          (0x3fU 
                                                           & (((IData)(0x18U) 
                                                               * 
                                                               (0x3fU 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                   >> 2U))) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x18U) 
                                                              * 
                                                              (0x3fU 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                                  >> 2U))))))
                                                       : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vxrand_hcc53b179__1)))))))),32);
    bufp->chgBit(oldp+685,(((IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid 
                                     >> (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                  >> 2U)))) 
                            & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                >> 8U) == (0xffffffU 
                                           & ((0x5ffU 
                                               >= (0x7ffU 
                                                   & ((IData)(0x18U) 
                                                      * 
                                                      (0x3fU 
                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                          >> 2U)))))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x18U) 
                                                        * 
                                                        (0x3fU 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                            >> 2U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[
                                                    (((IData)(0x17U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x18U) 
                                                          * 
                                                          (0x3fU 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                              >> 2U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x18U) 
                                                         * 
                                                         (0x3fU 
                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                             >> 2U))))))) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[
                                                     (0x3fU 
                                                      & (((IData)(0x18U) 
                                                          * 
                                                          (0x3fU 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                              >> 2U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x18U) 
                                                         * 
                                                         (0x3fU 
                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                             >> 2U))))))
                                               : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vxrand_hcc53b179__1))))));
    bufp->chgBit(oldp+686,(((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                             >> 8U) == (0xffffffU & 
                                        ((0x5ffU >= 
                                          (0x7ffU & 
                                           ((IData)(0x18U) 
                                            * (0x3fU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                  >> 2U)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x18U) 
                                                   * 
                                                   (0x3fU 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                       >> 2U)))))
                                               ? 0U
                                               : (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[
                                                  (((IData)(0x17U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x18U) 
                                                        * 
                                                        (0x3fU 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                            >> 2U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       * 
                                                       (0x3fU 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                           >> 2U))))))) 
                                             | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[
                                                (0x3fU 
                                                 & (((IData)(0x18U) 
                                                     * 
                                                     (0x3fU 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                         >> 2U))) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x18U) 
                                                    * 
                                                    (0x3fU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                        >> 2U))))))
                                          : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vxrand_hcc53b179__1)))));
    bufp->chgIData(oldp+687,(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata),32);
}

void Vprocessor_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root__trace_cleanup\n"); );
    // Init
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
