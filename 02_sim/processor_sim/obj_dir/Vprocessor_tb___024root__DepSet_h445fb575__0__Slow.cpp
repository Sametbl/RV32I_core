// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocessor_tb.h for the primary calling header

#include "Vprocessor_tb__pch.h"
#include "Vprocessor_tb___024root.h"

VL_ATTR_COLD void Vprocessor_tb___024root___eval_static(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vprocessor_tb___024root___eval_final(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__stl(Vprocessor_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vprocessor_tb___024root___eval_phase__stl(Vprocessor_tb___024root* vlSelf);

VL_ATTR_COLD void Vprocessor_tb___024root___eval_settle(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_settle\n"); );
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
            Vprocessor_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../01_tb/processor_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vprocessor_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__stl(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] processor_tb.dut.stall_from_ID)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vprocessor_tb___024root___stl_sequent__TOP__0(Vprocessor_tb___024root* vlSelf);
VL_ATTR_COLD void Vprocessor_tb___024root____Vm_traceActivitySetAll(Vprocessor_tb___024root* vlSelf);
void Vprocessor_tb___024root___act_sequent__TOP__0(Vprocessor_tb___024root* vlSelf);

VL_ATTR_COLD void Vprocessor_tb___024root___eval_stl(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vprocessor_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vprocessor_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vprocessor_tb___024root___act_sequent__TOP__0(vlSelf);
        Vprocessor_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vprocessor_tb___024root___stl_sequent__TOP__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_10;
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_10 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_15;
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_15 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16;
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17;
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_13;
    processor_tb__DOT__dut__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_13 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11;
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7;
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7 = 0;
    CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_3_0;
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_3_0 = 0;
    VlWide<6>/*191:0*/ __Vtemp_4;
    // Body
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_d 
        = (1U & ((~ (IData)((0U != (0x1fffffU & (IData)(
                                                        (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                         >> 0x14U)))))) 
                 & (~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                               >> 0x13U)))));
    if ((0x400U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux = 0U;
    } else if ((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                         >> 0xaU)))) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux 
            = (0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                        >> 0x15U));
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en 
        = (IData)((0x880U == (0x880U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel 
        = (IData)((0U == (0x600U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2 
        = ((0x63U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | ((0x23U == 
                                            (0x7fU 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U))) 
                                           | (0x33U 
                                              == (0x7fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     >> 2U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__prd_en 
        = ((0x63U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | ((0x6fU == 
                                            (0x7fU 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                >> 2U))) 
                                           | (0x67U 
                                              == (0x7fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     >> 2U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in 
        = (((0xfU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) << 7U) | ((
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 2U))) 
                                                   << 6U) 
                                                  | (((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                           >> 2U))) 
                                                      << 5U) 
                                                     | (((0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                              >> 2U))) 
                                                         << 4U) 
                                                        | (((3U 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                 >> 2U))) 
                                                            << 3U) 
                                                           | (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                    >> 2U))) 
                                                               << 2U) 
                                                              | ((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                      >> 2U))) 
                                                                 << 1U)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19 
        = (IData)(((0x1ccU == (0x3ffffcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & (0U == (0x7fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                       << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 0x1bU))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11 
        = (IData)((0xccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12 
        = (IData)((0x140ccU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel 
        = ((0x37U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | (0x17U == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U))));
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_15 
        = ((0x23U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | (0x63U == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu 
        = (IData)((0x1000cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu 
        = (IData)((0x1400cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb 
        = (IData)((0x8cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh 
        = (IData)((0x408cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16 
        = ((0x17U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                               >> 2U))) | (0x6fU == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb 
        = (IData)((0xcU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh 
        = (IData)((0x400cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20 
        = (IData)(((0x4000U == (0x1c000U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & (0U == (0x7fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                       << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 0x1bU))))));
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_10 
        = (IData)((0x1404cU == (0x1c1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel 
        = ((2U & ((~ (IData)((0U != (0x280000U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])))) 
                  << 1U)) | (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 0x15U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel 
        = ((2U & ((~ (IData)((0U != (0x140000U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])))) 
                  << 1U)) | (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 0x14U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel 
        = ((2U & (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__imem_region_en_q)) 
                   | (IData)((0U != (0xe0U & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q)))) 
                  << 1U)) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__imem_region_en_q) 
                             & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q 
                                >> 4U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel 
        = ((4U & ((0x7fffffcU & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_q) 
                                  << 2U) & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q 
                                            >> 5U))) 
                  | (0xffffffcU & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q 
                                   >> 4U)))) | (3U 
                                                & ((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_q))) 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q 
                                                      >> 4U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel 
        = (7U & ((vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q 
                  >> 8U) | (- (IData)((1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__load_en_q) 
                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__valid_q))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow 
        = (IData)(((3ULL == (3ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)) 
                   & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                         >> 0xcU))));
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren 
        = (IData)((3ULL == (3ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q)));
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_3_0 
        = ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_signed_q)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_byte_q));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_d 
        = ((~ (IData)((0U != (0x1fffffU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                   >> 0x14U)))))) 
           & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8) 
              & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                         >> 0x11U))));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_2__o_mux 
                = (0xffU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                             << 3U) | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                       >> 0x1dU)));
            vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_3__o_mux 
                = (0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
                            >> 5U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_2__o_mux = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_3__o_mux = 0U;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded 
        = ((IData)((0U != (0xffU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                ? 0U : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                         ? 1U : ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                  ? 2U : ((8U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                           ? 3U : (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                      ? 6U
                                                      : 7U)))))))
            : ((IData)((0U != (0xff00U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))))
                ? ((0x100U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                    ? 8U : ((0x200U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                             ? 9U : ((0x400U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                      ? 0xaU : ((0x800U 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                 ? 0xbU
                                                 : 
                                                ((0x1000U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                  ? 0xcU
                                                  : 
                                                 ((0x2000U 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                   ? 0xdU
                                                   : 
                                                  ((0x4000U 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in))
                                                    ? 0xeU
                                                    : 0xfU)))))))
                : 0U));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel) 
                    | ((0x6fU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 2U))) 
                       | ((0x73U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                              >> 2U))) 
                          | (0xfU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                               >> 2U))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_a_use_pc 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16) 
           | (0x63U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                 >> 2U))));
    processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_16) 
           | ((0x67U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                  >> 2U))) | ((0x37U 
                                               == (0x7fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 2U))) 
                                              | ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                      >> 2U))) 
                                                 | (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                        >> 2U)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_byte 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_signed 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_halfword 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh) 
              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli 
        = (IData)(((0x4cU == (0x1fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_10) 
           & (0U == (0x7fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                               << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                         >> 0x1bU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_10) 
           & (0x20U == (0x7fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                  << 5U) | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                            >> 0x1bU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
        = ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel))
            ? ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel))
                ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel))
                         ? ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                             ? 0U : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                      ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                          ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data
                                          : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data)
                                      : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel))
                                          ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data
                                          : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data)))
                         : ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                             ? 0U : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel))
                                      ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data
                                      : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data))))
            : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata);
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched 
        = (((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                              >> 4U))) == (0x1fU & 
                                           vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U])) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched 
        = (((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                              >> 4U))) == (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                           >> 0x1bU)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel 
        = (((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_3_0) 
            << 1U) | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_byte_q) 
                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_signed_q)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel 
        = ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_signed_q) 
             & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_byte_q) 
                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_halfword_q))) 
            << 1U) | ((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_3_0) 
                      | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_halfword_q)));
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en) 
           & ((~ (IData)((0ULL != (0x18000ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)))) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_d)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__wdata 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_3__o_mux) 
            << 0x18U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_2__o_mux) 
                          << 0x10U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux) 
                                        << 8U) | (0xffU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                                     >> 0xdU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_b_use_imm 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17) 
           | (IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_15));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren 
        = ((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_17) 
           | (0x33U == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                 >> 2U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli) 
              | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
        = (((QData)((IData)(((0x400003cU == (0x7fffffcU 
                                             & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                             & (0U == (0x7fU & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                 << 5U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 0x1bU))))))) 
            << 0x28U) | (((QData)((IData)(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19) 
                                           & (0x400000U 
                                              == (0x7c00000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))))) 
                          << 0x27U) | (((QData)((IData)(
                                                        ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19) 
                                                         & (0U 
                                                            == 
                                                            (0x7c00000U 
                                                             & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))))) 
                                        << 0x26U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12) 
                                                          & (0x20U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                  << 5U) 
                                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                    >> 0x1bU))))))) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12) 
                                                             & (0U 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                     << 5U) 
                                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                       >> 0x1bU))))))) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               ((0xccU 
                                                                 == 
                                                                 (0x1fcU 
                                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20)))) 
                                               << 0x23U) 
                                              | (((QData)((IData)(
                                                                  ((0x1c0ccU 
                                                                    == 
                                                                    (0x1c1fcU 
                                                                     & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                           << 5U) 
                                                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                             >> 0x1bU))))))) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     ((0x180ccU 
                                                                       == 
                                                                       (0x1c1fcU 
                                                                        & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                                                      & (0U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                              << 5U) 
                                                                             | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 0x1bU))))))) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        ((0x100ccU 
                                                                          == 
                                                                          (0x1c1fcU 
                                                                           & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                                                         & (0U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                                << 5U) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 0x1bU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(
                                                                                ((0xc0ccU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                                << 5U) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 0x1bU)))))) 
                                                                           << 0x1fU) 
                                                                          | (((IData)(
                                                                                ((0x80ccU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U])) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                                << 5U) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 0x1bU)))))) 
                                                                              << 0x1eU) 
                                                                             | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                                << 5U) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 0x1bU))))) 
                                                                                << 0x1dU) 
                                                                                | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11) 
                                                                                & (0U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                                << 5U) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 0x1bU))))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0x1c04cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0x1804cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0x1004cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0xc04cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0x804cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0x4cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0x808cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0x800cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0x1c18cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0x1818cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0x1418cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0x1018cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0x418cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0x18cU 
                                                                                == 
                                                                                (0x1c1fcU 
                                                                                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                                                << 5U) 
                                                                                | (((0x67U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                                << 4U) 
                                                                                | (((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                                << 3U) 
                                                                                | (((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                                << 2U) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                >> 2U))) 
                                                                                << 1U))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_fwd_flags 
        = ((0x3ffeU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                        >> 0x12U) & (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched)) 
                                      & (((0x1fU & (IData)(
                                                           (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                            >> 4U))) 
                                          == (0x1fU 
                                              & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U])) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren))) 
                                     << 1U))) | ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                  >> 0x13U) 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_fwd_flags 
        = ((0x7ffeU & ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                        >> 0x11U) & (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched)) 
                                      & (((0x1fU & (IData)(
                                                           (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                            >> 4U))) 
                                          == (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                              >> 0x1bU)) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren))) 
                                     << 1U))) | ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                  >> 0x12U) 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched)));
    if ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                       >> 2U)))) {
        if ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                           >> 2U)))) {
            vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
                = ((((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                      ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                          ? (- (IData)((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                              >> 0xfU))))
                          : (- (IData)((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                              >> 7U)))))
                      : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel))
                          ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                  >> 0x10U))) << 0x10U) 
                   | ((((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                         ? 0U : (0xffU & ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel))
                                           ? (- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                                            >> 7U))))
                                           : (vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data 
                                              >> 8U)))) 
                       << 8U) | (0xffU & vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__mem_data)));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux 
            = (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                       >> 9U));
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_6 
        = ((~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                       >> 0xeU))) & (IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_5 
        = ((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7) 
           & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                      >> 0xeU)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel 
        = ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel) 
             | ((0x6fU == (0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                    >> 2U))) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel))) 
            << 2U) | ((((IData)(processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_15) 
                        | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel)) 
                       << 1U) | (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel)) 
                                  & ((0x13U == (0x7fU 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U))) 
                                     | ((3U == (0x7fU 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                   >> 2U))) 
                                        | (0x67U == 
                                           (0x7fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                             >> 2U)))))) 
                                 | ((0x63U == (0x7fU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                  >> 2U))) 
                                    | (0x6fU == (0x7fU 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                    >> 2U)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded 
        = ((IData)((0ULL != (0xffULL & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in))
                ? 0U : ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                       >> 1U))) ? 1U
                         : ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                           >> 2U)))
                             ? 2U : ((1U & (IData)(
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                    >> 3U)))
                                      ? 3U : ((1U & (IData)(
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                             >> 4U)))
                                               ? 4U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                              >> 5U)))
                                                   ? 5U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 6U)))
                                                    ? 6U
                                                    : 7U)))))))
            : ((IData)((0ULL != (0xff00ULL & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                  >> 8U))) ? 8U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 9U)))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0xaU)))
                                                     ? 0xaU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0xbU)))
                                                      ? 0xbU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0xcU)))
                                                       ? 0xcU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0xdU)))
                                                        ? 0xdU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                    >> 0xeU)))
                                                         ? 0xeU
                                                         : 0xfU)))))))
                : ((IData)((0ULL != (0xff0000ULL & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                    ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                      >> 0x10U))) ? 0x10U
                        : ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                          >> 0x11U)))
                            ? 0x11U : ((1U & (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                      >> 0x12U)))
                                        ? 0x12U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x13U)))
                                                    ? 0x13U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x14U)))
                                                     ? 0x14U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x15U)))
                                                      ? 0x15U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x16U)))
                                                       ? 0x16U
                                                       : 0x17U)))))))
                    : ((IData)((0ULL != (0xff000000ULL 
                                         & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                        ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                          >> 0x18U)))
                            ? 0x18U : ((1U & (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                      >> 0x19U)))
                                        ? 0x19U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x1aU)))
                                                    ? 0x1aU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x1bU)))
                                                     ? 0x1bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x1cU)))
                                                      ? 0x1cU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x1dU)))
                                                       ? 0x1dU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0x1eU)))
                                                        ? 0x1eU
                                                        : 0x1fU)))))))
                        : ((IData)((0ULL != (0xff00000000ULL 
                                             & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                            ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                              >> 0x20U)))
                                ? 0x20U : ((1U & (IData)(
                                                         (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                          >> 0x21U)))
                                            ? 0x21U
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                           >> 0x22U)))
                                                ? 0x22U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x23U)))
                                                    ? 0x23U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x24U)))
                                                     ? 0x24U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x25U)))
                                                      ? 0x25U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x26U)))
                                                       ? 0x26U
                                                       : 0x27U)))))))
                            : ((IData)((0ULL != (0xff0000000000ULL 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                                ? ((1U & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                  >> 0x28U)))
                                    ? 0x28U : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                           >> 0x29U)))
                                                ? 0x29U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x2aU)))
                                                    ? 0x2aU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x2bU)))
                                                     ? 0x2bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x2cU)))
                                                      ? 0x2cU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x2dU)))
                                                       ? 0x2dU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0x2eU)))
                                                        ? 0x2eU
                                                        : 0x2fU)))))))
                                : ((IData)((0ULL != 
                                            (0xff000000000000ULL 
                                             & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                      >> 0x30U)))
                                        ? 0x30U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x31U)))
                                                    ? 0x31U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x32U)))
                                                     ? 0x32U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x33U)))
                                                      ? 0x33U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x34U)))
                                                       ? 0x34U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0x35U)))
                                                        ? 0x35U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                    >> 0x36U)))
                                                         ? 0x36U
                                                         : 0x37U)))))))
                                    : ((IData)((0ULL 
                                                != 
                                                (0xff00000000000000ULL 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in)))
                                        ? ((1U & (IData)(
                                                         (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                          >> 0x38U)))
                                            ? 0x38U
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                           >> 0x39U)))
                                                ? 0x39U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                               >> 0x3aU)))
                                                    ? 0x3aU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                >> 0x3bU)))
                                                     ? 0x3bU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                 >> 0x3cU)))
                                                      ? 0x3cU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                  >> 0x3dU)))
                                                       ? 0x3dU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in 
                                                                   >> 0x3eU)))
                                                        ? 0x3eU
                                                        : 0x3fU)))))))
                                        : 0U))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded 
        = ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_fwd_flags))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_fwd_flags))
                ? 0U : vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux)
            : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_fwd_flags))
                ? (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                           >> 9U)) : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
        = ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_fwd_flags))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_fwd_flags))
                ? 0U : vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux)
            : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_fwd_flags))
                ? (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                           >> 9U)) : (IData)((vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data 
                                              >> 0x20U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate 
        = ((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
            ? ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                    ? 0U : (0xfffff000U & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                            << 0x1eU) 
                                           | (0x3ffff000U 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                 >> 2U)))))
                : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                    ? (((- (IData)((1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                          >> 1U)))) 
                        << 0x15U) | ((0x100000U & (
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                   << 0x13U)) 
                                     | ((0xff000U & 
                                         (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                          >> 2U)) | 
                                        ((0x800U & 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                           >> 0xbU)) 
                                         | (0x7feU 
                                            & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                << 0xaU) 
                                               | (0x3feU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     >> 0x16U))))))))
                    : (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                >> 0x16U)))) : ((2U 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                  >> 1U)))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
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
                                                                 >> 9U))))))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                  >> 1U)))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                          << 0xaU) 
                                                         | (0x3e0U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                               >> 0x16U)))) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                           >> 9U)))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                                  >> 1U)))) 
                                                   << 0xcU) 
                                                  | (0xfffU 
                                                     & ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
                                                         << 0xaU) 
                                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                           >> 0x16U))))
                                                  : 0U)));
    __Vtemp_4[4U] = (((IData)((((QData)((IData)(((2U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                   ? 
                                                  ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                    << 0xaU) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                      >> 0x16U))
                                                   : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((2U 
                                                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                               ? 
                                                              ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                << 0xaU) 
                                                               | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                  >> 0x16U))
                                                               : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))))) 
                      >> 0x15U) | ((IData)(((((QData)((IData)(
                                                              ((2U 
                                                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                 ? 
                                                                ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                  << 0xaU) 
                                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                                    >> 0x16U))
                                                                 : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((2U 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                  ? 
                                                                 ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                   << 0xaU) 
                                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                     >> 0x16U))
                                                                  : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))))) 
                                            >> 0x20U)) 
                                   << 0xbU));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
        = ((0x7fU & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U]) 
           | (((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                << 0x1cU) | (0xffc0000U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                           >> 4U))) 
              | ((0x3e000U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                              >> 9U)) | ((0x1000U & 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                           >> 5U)) 
                                         | ((0x800U 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                >> 3U)) 
                                            | ((0x400U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                   << 3U)) 
                                               | ((0x200U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                      >> 4U)) 
                                                  | (0x180U 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                        >> 8U)))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
        = ((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                     >> 4U)) | ((0x3ff80U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                             >> 4U)) 
                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                                   << 0x12U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
        = ((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                     >> 0xeU)) | ((0x3ff80U & (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                                               >> 0xeU)) 
                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded 
                                     << 0x12U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
        = ((0x7fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded 
                     >> 0xeU)) | ((0x3ff80U & (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded 
                                               >> 0xeU)) 
                                  | ((IData)((((QData)((IData)(
                                                               ((2U 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                  ? 
                                                                 ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                   << 0xaU) 
                                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                                     >> 0x16U))
                                                                  : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((2U 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                  ? 0U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                   ? 
                                                                  ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                    << 0xaU) 
                                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                      >> 0x16U))
                                                                   : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))))) 
                                     << 0x12U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
        = ((0x7fU & ((IData)((((QData)((IData)(((2U 
                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                  ? 
                                                 ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                   << 0xaU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                     >> 0x16U))
                                                  : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((2U 
                                                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                              ? 
                                                             ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                               << 0xaU) 
                                                              | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                 >> 0x16U))
                                                              : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded)))))) 
                     >> 0xeU)) | (__Vtemp_4[4U] << 7U));
    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
        = (0xffffffU & ((__Vtemp_4[4U] >> 0x19U) | 
                        ((0xfc0000U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
                                       << 0xdU)) | 
                         (0x3ff80U & ((IData)(((((QData)((IData)(
                                                                 ((2U 
                                                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                   ? 0U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel))
                                                                    ? 
                                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                     << 0xaU) 
                                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                                                       >> 0x16U))
                                                                    : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((2U 
                                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                    ? 0U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel))
                                                                     ? 
                                                                    ((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                                      << 0xaU) 
                                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
                                                                        >> 0x16U))
                                                                     : vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded))))) 
                                               >> 0x20U)) 
                                      >> 0xeU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl 
        = ((0x1fU == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                               >> 0x12U))) | (0x15U 
                                              == (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result 
        = (0x1ffffffffULL & ((QData)((IData)(((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                               << 0xeU) 
                                              | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 >> 0x12U)))) 
                             + ((QData)((IData)(((0x1dU 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                      >> 0x12U)))
                                                  ? 
                                                 (~ 
                                                  ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    << 0xeU) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                      >> 0x12U)))
                                                  : 
                                                 ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                     >> 0x12U))))) 
                                + (QData)((IData)((0x1dU 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                       >> 0x12U))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in 
        = ((0x80000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                           << 0xdU)) | ((0x40000000U 
                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                            << 0xbU)) 
                                        | ((0x20000000U 
                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                               << 9U)) 
                                           | ((0x10000000U 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  << 7U)) 
                                              | ((0x8000000U 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     << 5U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                        << 3U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           << 1U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                              >> 1U)) 
                                                          | ((0x800000U 
                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                 >> 3U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                    >> 5U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                       >> 7U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                          >> 9U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                             >> 0xbU)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                                                >> 0xdU)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 0x11U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 7U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 0xdU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 0xfU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                                >> 0x11U)))))))))))))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos 
        = (1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                     >> 0x11U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0x11U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                        << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x12U)) ^ ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                     >> 0x12U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y 
        = (IData)((0xc00U == (0xc00U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U])));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_jump 
        = ((3U == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                            >> 0x12U))) | (4U == (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                        << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                     >> 2U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 << 0x1eU) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   >> 2U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                        << 6U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                  >> 0x1aU)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                 << 6U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x1aU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                        << 0x16U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                     >> 0xaU)) ^ ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                     >> 0xaU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                        << 0xaU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x16U)) ^ ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   << 0xaU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                     >> 0x16U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                        << 0x1aU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                     >> 6U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 << 0x1aU) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   >> 6U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                        << 2U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                  >> 0x1eU)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                 << 2U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 0x1eU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0 
        = ((0x25U == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                               >> 0x12U))) | (0x1bU 
                                              == (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1 
        = ((0x23U == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                               >> 0x12U))) | (0x19U 
                                              == (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = (1U 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    ^ 
                                                    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U]) 
                                                   >> 0x11U));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp 
        = ((9U == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                            >> 0x12U))) | (0xaU == 
                                           (0x3fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                             >> 0x12U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos 
        = (1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                     >> 0x11U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                   >> 0x11U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                        << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x12U)) ^ ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                     >> 0x12U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                        << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                     >> 2U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                 << 0x1eU) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                   >> 2U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                        << 6U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                  >> 0x1aU)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                 << 6U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                   >> 0x1aU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                        << 0xaU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x16U)) ^ ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                   << 0xaU) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                     >> 0x16U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                        << 0x16U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                     >> 0xaU)) ^ ((
                                                   vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                     >> 0xaU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                        << 0x1aU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                     >> 6U)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                 << 0x1aU) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                   >> 6U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq 
        = (0xfU & (~ (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                        << 2U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                  >> 0x1eU)) ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                 << 2U) 
                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                   >> 0x1eU)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_3 = (1U 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    ^ 
                                                    vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U]) 
                                                   >> 0x11U));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_4 
        = ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y));
    processor_tb__DOT__dut__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_13 
        = (1U & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                     >> 0xaU)) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_jump)));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode 
        = ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit 
        = (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1)) 
            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0)) 
           & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
              >> 0x11U));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq 
        = (0xfU & (~ (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                       << 3U) | (7U & (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                         << 0x12U) 
                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                           >> 0xeU)) 
                                       ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                           << 0x12U) 
                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                             >> 0xeU)))))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq))));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq 
        = (0xfU & (~ (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3) 
                       << 3U) | (7U & (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                         << 0x12U) 
                                        | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                           >> 0xeU)) 
                                       ^ ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                           << 0x12U) 
                                          | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                             >> 0xeU)))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0x15U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x15U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    >> 0x14U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x14U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x13U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                          >> 0x13U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                         >> 0x12U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x12U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel 
        = ((((0x22U == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 >> 0x12U))) | ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))) 
                                                | ((0x21U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                        >> 0x12U))) 
                                                   | ((0x17U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                           >> 0x12U))) 
                                                      | (IData)(processor_tb__DOT__dut__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_13))))) 
            << 2U) | ((((0x1aU == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                            >> 0x12U))) 
                        | ((0x1bU == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                               >> 0x12U))) 
                           | ((0x19U == (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                  >> 0x12U))) 
                              | ((0x24U == (0x3fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                             >> 0x12U))) 
                                 | ((0x25U == (0x3fU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                  >> 0x12U))) 
                                    | ((0x23U == (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))) 
                                       | ((0x20U == 
                                           (0x3fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                             >> 0x12U))) 
                                          | ((0x16U 
                                              == (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))) 
                                             | (IData)(processor_tb__DOT__dut__DOT__ALU__DOT____VdfgRegularize_h5f12ffbc_0_13))))))))) 
                       << 1U) | (1U & ((0x1eU == (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))) 
                                       | ((0x14U == 
                                           (0x3fU & 
                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                             >> 0x12U))) 
                                          | ((0x1fU 
                                              == (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))) 
                                             | ((0x15U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0x12U))) 
                                                | ((0x20U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                        >> 0x12U))) 
                                                   | ((0x16U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                           >> 0x12U))) 
                                                      | ((0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                              >> 0x12U))) 
                                                         | ((~ 
                                                             (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                              >> 0xaU)) 
                                                            | (0x17U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                                   >> 0x12U))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                      >> 5U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 >> 5U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                              >> 4U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 4U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 3U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    >> 3U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   >> 2U) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                       >> 2U)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0x1dU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x1dU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    >> 0x1cU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x1cU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x1bU)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                          >> 0x1bU) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                         >> 0x1aU) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x1aU)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                      >> 0xdU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                   >> 0xdU)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                  >> 0xcU) 
                                                 & ((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                      >> 0xcU)) 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq) 
                                                       >> 3U))) 
                                                | (((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                      >> 0xbU)) 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                        >> 0xbU) 
                                                       & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                       >> 0xaU) 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                           >> 0xaU)) 
                                                         & (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xeU 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0x19U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                    >> 0x19U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    >> 0x18U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x18U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0x17U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                          >> 0x17U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                         >> 0x16U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                             >> 0x16U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                      >> 9U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 >> 9U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                              >> 8U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 8U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                  >> 7U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    >> 7U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                   >> 6U) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                       >> 6U)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                      >> 1U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                 >> 1U)) | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                             & ((~ 
                                                 vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U]) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                  >> 0x1fU)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                    >> 0x1fU) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   >> 0x1eU) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                       >> 0x1eU)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel 
        = (((IData)((0U != (0x7ffffffU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                           << 9U) | 
                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                           >> 0x17U))))) 
            << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
                = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in;
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
            = ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                            >> 0x12U));
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x16U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x15U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x14U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x13U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel 
        = (1U & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode)) 
                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                    >> 0x12U)));
    processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                      >> 0x15U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x15U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                    >> 0x14U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x14U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x13U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                          >> 0x13U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                         >> 0x12U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                             >> 0x12U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                      >> 5U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                 >> 5U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                              >> 4U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                  >> 4U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                  >> 3U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    >> 3U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 2U) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                       >> 2U)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                      >> 0x1dU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x1dU)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                    >> 0x1cU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x1cU)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x1bU)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                          >> 0x1bU) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                         >> 0x1aU) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                             >> 0x1aU)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                      >> 0x19U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                    >> 0x19U)) | ((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                    >> 0x18U) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x18U)) 
                                                      & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq) 
                                                         >> 3U))) 
                                                  | (((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                        >> 0x17U)) 
                                                      & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                          >> 0x17U) 
                                                         & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                     | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                         >> 0x16U) 
                                                        & ((~ 
                                                            (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                             >> 0x16U)) 
                                                           & (IData)(
                                                                     (0xeU 
                                                                      == 
                                                                      (0xeU 
                                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                      >> 0xdU)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                   >> 0xdU)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                  >> 0xcU) 
                                                 & ((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                      >> 0xcU)) 
                                                    & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq) 
                                                       >> 3U))) 
                                                | (((~ 
                                                     (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                      >> 0xbU)) 
                                                    & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                        >> 0xbU) 
                                                       & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                   | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                       >> 0xaU) 
                                                      & ((~ 
                                                          (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                           >> 0xaU)) 
                                                         & (IData)(
                                                                   (0xeU 
                                                                    == 
                                                                    (0xeU 
                                                                     & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                      >> 9U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                 >> 9U)) | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                              >> 8U) 
                                             & ((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                  >> 8U)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                  >> 7U)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    >> 7U) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                   >> 6U) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                       >> 6U)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger 
        = (1U & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                      >> 1U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                 >> 1U)) | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                             & ((~ 
                                                 vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U]) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq) 
                                                   >> 3U))) 
                                            | (((~ 
                                                 (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                  >> 0x1fU)) 
                                                & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                    >> 0x1fU) 
                                                   & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11))) 
                                               | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                   >> 0x1eU) 
                                                  & ((~ 
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                                       >> 0x1eU)) 
                                                     & (IData)(
                                                               (0xeU 
                                                                == 
                                                                (0xeU 
                                                                 & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq)));
    processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11 
        = (IData)((0xcU == (0xcU & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
                = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit) 
                    << 0x1fU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in 
                                 >> 1U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger 
        = (1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                 | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                      >> 0x10U) & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                       >> 0x10U)) & 
                                   ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq) 
                                    >> 3U))) | (((~ 
                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                   >> 0xfU)) 
                                                 & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                     >> 0xfU) 
                                                    & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U] 
                                                    >> 0xeU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[7U] 
                                                        >> 0xeU)) 
                                                      & (IData)(
                                                                (0xeU 
                                                                 == 
                                                                 (0xeU 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger 
        = (1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos) 
                 | (((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                      >> 0x10U) & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                       >> 0x10U)) & 
                                   ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq) 
                                    >> 3U))) | (((~ 
                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                   >> 0xfU)) 
                                                 & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                     >> 0xfU) 
                                                    & (IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11))) 
                                                | ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                                                    >> 0xeU) 
                                                   & ((~ 
                                                       (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                                        >> 0xeU)) 
                                                      & (IData)(
                                                                (0xeU 
                                                                 == 
                                                                 (0xeU 
                                                                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal 
        = ((IData)(processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT____VdfgRegularize_h7254c567_0_11) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
                = (((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                    << 0x1eU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 
                                 >> 2U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller 
        = (1U & (~ ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal) 
                    | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
                = (((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                    << 0x1cU) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 
                                 >> 4U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
                = (((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                    << 0x18U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 
                                 >> 8U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14)));
    if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel) {
        if (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel) {
            vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                = (((- (IData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit))) 
                    << 0x10U) | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 
                                 >> 0x10U));
        }
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
            = vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15)));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2 
        = (1U & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32) 
                  & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                 | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
                    & (((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[6U] 
                            >> 0x11U)) & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[5U] 
                                          >> 0x11U)) 
                       | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                          & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out 
        = ((vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
            << 0x1fU) | ((0x40000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32) 
            & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
           | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp)) 
              & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos) 
                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken 
        = ((IData)(((0x140000U == (0xfc0000U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])) 
                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2))) 
           | (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2)) 
               & (0x180000U == (0xfc0000U & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U]))) 
              | ((IData)(((0x1c0000U == (0xfc0000U 
                                         & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])) 
                          & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2))) 
                 | ((IData)(((0x200000U == (0xfc0000U 
                                            & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2))) 
                    | ((IData)(((0x200000U == (0xfc0000U 
                                               & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])) 
                                & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2))) 
                       | ((IData)(((0x240000U == (0xfc0000U 
                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])) 
                                   & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2))) 
                          | ((IData)(((0x280000U == 
                                       (0xfc0000U & 
                                        vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2))) 
                             | ((IData)(((0x280000U 
                                          == (0xfc0000U 
                                              & vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[8U])) 
                                         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2))) 
                                | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__br_jump)))))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_3 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken) 
           & (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor) 
               >> 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y) 
           & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken)) 
              & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                 >> 9U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y) 
           & ((~ (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                  >> 9U)) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__D_predictor 
        = ((2U & ((0xfffffffeU & (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y)) 
                                   << 1U) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor))) 
                  | (((IData)((3U == (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor))) 
                      | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken) 
                          & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor) 
                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y))) 
                         | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_3))) 
                     << 1U))) | (1U & (((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y)) 
                                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor)) 
                                       | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor) 
                                            >> 1U) 
                                           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_4)) 
                                          | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken) 
                                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_4)) 
                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_3))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t) 
            << 1U) | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt));
    vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t) 
           | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt));
}

VL_ATTR_COLD void Vprocessor_tb___024root___eval_triggers__stl(Vprocessor_tb___024root* vlSelf);

VL_ATTR_COLD bool Vprocessor_tb___024root___eval_phase__stl(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vprocessor_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vprocessor_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__act(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] processor_tb.dut.stall_from_ID)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge processor_tb.clk_i)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge processor_tb.rst_n)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__nba(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] processor_tb.dut.stall_from_ID)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge processor_tb.clk_i)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge processor_tb.rst_n)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vprocessor_tb___024root____Vm_traceActivitySetAll(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vprocessor_tb___024root___ctor_var_reset(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->processor_tb__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__sw_tb = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__input_port_tb = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__clk_counter = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__branch_miss = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__stall_from_ID = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(207, vlSelf->processor_tb__DOT__dut__DOT__decode_pkg_ID);
    vlSelf->processor_tb__DOT__dut__DOT__EX_rs_data = VL_RAND_RESET_Q(64);
    vlSelf->processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(207, vlSelf->processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q);
    VL_RAND_RESET_W(280, vlSelf->processor_tb__DOT__dut__DOT__abt_alu_pkg);
    vlSelf->processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q = VL_RAND_RESET_Q(41);
    VL_RAND_RESET_W(141, vlSelf->processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q);
    vlSelf->processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q = VL_RAND_RESET_Q(41);
    vlSelf->processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_target = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vxrand_hcc53b179__1 = VL_RAND_RESET_I(24);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vxrand_hcc53b179__0 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(1536, vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag);
    VL_RAND_RESET_W(2048, vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_counter);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__0 = VL_RAND_RESET_I(24);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__1 = VL_RAND_RESET_I(24);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__D_predictor = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_3 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_4 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded = VL_RAND_RESET_I(6);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in = VL_RAND_RESET_Q(64);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in = VL_RAND_RESET_I(16);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel = VL_RAND_RESET_I(3);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__prd_en = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_a_use_pc = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_b_use_imm = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_byte = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_halfword = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_signed = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->processor_tb__DOT__dut__DOT__Register_File__DOT__R);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_fwd_flags = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_fwd_flags = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__br_jump = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__output_sel = VL_RAND_RESET_I(3);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result = VL_RAND_RESET_Q(33);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1 = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2 = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4 = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8 = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16 = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq = VL_RAND_RESET_I(4);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__store_en = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux = VL_RAND_RESET_I(8);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_2__o_mux = VL_RAND_RESET_I(8);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_3__o_mux = VL_RAND_RESET_I(8);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel = VL_RAND_RESET_I(3);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__address_q = VL_RAND_RESET_I(32);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__load_en_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__lsu_byte_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__lsu_halfword_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__lsu_signed_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_d = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__imem_region_en_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_d = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_q = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel = VL_RAND_RESET_I(3);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel = VL_RAND_RESET_I(2);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_5 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_6 = VL_RAND_RESET_I(1);
    vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_3 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__processor_tb__DOT__dut__DOT__stall_from_ID__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__processor_tb__DOT__dut__DOT__stall_from_ID__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__processor_tb__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__processor_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
