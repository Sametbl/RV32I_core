// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocessor_tb.h for the primary calling header

#include "Vprocessor_tb__pch.h"
#include "Vprocessor_tb___024root.h"

VL_ATTR_COLD void Vprocessor_tb___024root___eval_initial__TOP(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__0(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__1(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__2(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__3(Vprocessor_tb___024root* vlSelf);
VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__4(Vprocessor_tb___024root* vlSelf);

void Vprocessor_tb___024root___eval_initial(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vprocessor_tb___024root___eval_initial__TOP(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__dut__DOT__stall_from_ID__0 
        = vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID;
    vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__dut__DOT__stall_from_ID__1 
        = vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID;
    vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__clk_i__0 
        = vlSelfRef.processor_tb__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__processor_tb__DOT__rst_n__0 
        = vlSelfRef.processor_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "../../01_tb/processor_tb.sv", 
                                         49);
    vlSelfRef.processor_tb__DOT__clk_i = 1U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "../../01_tb/processor_tb.sv", 
                                             50);
        vlSelfRef.processor_tb__DOT__clk_i = (1U & 
                                              (~ (IData)(vlSelfRef.processor_tb__DOT__clk_i)));
    }
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__1(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "../../01_tb/processor_tb.sv", 
                                         54);
    vlSelfRef.processor_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x9c40ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         55);
    vlSelfRef.processor_tb__DOT__rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__2(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "../../01_tb/processor_tb.sv", 
                                         65);
    vlSelfRef.processor_tb__DOT__sw_tb = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         66);
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                             nullptr, 
                                             "../../01_tb/processor_tb.sv", 
                                             66);
        vlSelfRef.processor_tb__DOT__sw_tb = VL_RANDOM_I();
    }
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__3(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "../../01_tb/processor_tb.sv", 
                                         70);
    vlSelfRef.processor_tb__DOT__input_port_tb = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         71);
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1e8480ULL, 
                                             nullptr, 
                                             "../../01_tb/processor_tb.sv", 
                                             71);
        vlSelfRef.processor_tb__DOT__input_port_tb 
            = VL_RANDOM_I();
    }
}

VL_INLINE_OPT VlCoroutine Vprocessor_tb___024root___eval_initial__TOP__Vtiming__4(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_initial__TOP__Vtiming__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1312d00ULL, 
                                         nullptr, "../../01_tb/processor_tb.sv", 
                                         74);
    VL_FINISH_MT("../../01_tb/processor_tb.sv", 75, "");
}

void Vprocessor_tb___024root___act_sequent__TOP__0(Vprocessor_tb___024root* vlSelf);

void Vprocessor_tb___024root___eval_act(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vprocessor_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vprocessor_tb___024root___act_sequent__TOP__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<6>/*191:0*/ __Vtemp_21;
    // Body
    vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid 
        = (1U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                 & ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID)) 
                    & (~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)))));
    __Vtemp_1[0U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                              << 0x1eU) 
                                                             | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                >> 2U)))))) 
                      << 0xeU) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_a_use_pc) 
                                   << 0xdU) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_b_use_imm) 
                                                << 0xcU) 
                                               | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren) 
                                                         << 9U) 
                                                        | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                            << 8U) 
                                                           | (((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                    >> 2U))) 
                                                               << 6U) 
                                                              | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__prd_en) 
                                                                  << 5U) 
                                                                 | ((0x10U 
                                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                        << 3U)) 
                                                                    | (((0x23U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                             >> 2U))) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_byte) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_halfword) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_signed))))))))))))));
    __Vtemp_14[3U] = ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__prd_en)) 
                       << 0xeU) | ((0xffffe000U & (
                                                   ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                    << 0xdU) 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                      << 0xcU))) 
                                   | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                        & (0xcU == 
                                           (0x1fcU 
                                            & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                       << 0xcU) | (
                                                   (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                     & (0x8cU 
                                                        == 
                                                        (0x1fcU 
                                                         & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U]))) 
                                                    << 0xbU) 
                                                   | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                        & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_byte)) 
                                                       << 0xaU) 
                                                      | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_halfword)) 
                                                          << 9U) 
                                                         | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_signed)) 
                                                             << 8U) 
                                                            | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                                << 7U) 
                                                               | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded) 
                                                                     >> 3U))))))))));
    __Vtemp_21[3U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid)
                                                               ? 
                                                              ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                << 0x1eU) 
                                                               | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                  >> 2U))
                                                               : 0U))))) 
                       << 0x16U) | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_a_use_pc)) 
                                     << 0x15U) | ((
                                                   ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                    & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_b_use_imm)) 
                                                   << 0x14U) 
                                                  | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1) 
                                                       & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid)) 
                                                      << 0x13U) 
                                                     | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                          & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2)) 
                                                         << 0x12U) 
                                                        | ((((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid) 
                                                             & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren)) 
                                                            << 0x11U) 
                                                           | (((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                    >> 2U))) 
                                                               << 0xfU) 
                                                              | __Vtemp_14[3U])))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[0U] 
        = __Vtemp_1[0U];
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                    << 0x1eU) 
                                                   | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                      >> 2U)))))) 
            >> 0x12U) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                  << 0x1eU) 
                                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                    >> 2U))))) 
                                  >> 0x20U)) << 0xeU));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[2U] 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded) 
            << 0x1dU) | ((0x1f000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                         << 7U)) | 
                         ((0xf80000U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        >> 3U)) | (
                                                   (0x7c000U 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                       << 5U)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                                << 0x1eU) 
                                                                                | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                                >> 2U))))) 
                                                               >> 0x20U)) 
                                                      >> 0x12U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[3U] 
        = __Vtemp_21[3U];
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[4U] 
        = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid)
                                                    ? 
                                                   ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                     << 0x1eU) 
                                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                       >> 2U))
                                                    : 0U))))) 
            >> 0xaU) | ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid)
                                                                 ? 
                                                                ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                  << 0x1eU) 
                                                                 | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                    >> 2U))
                                                                 : 0U)))) 
                                 >> 0x20U)) << 0x16U));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
        = ((0xf8000000U & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                           << 5U)) | ((0x7c00000U & 
                                       (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                        << 0xdU)) | 
                                      ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid)
                                                                     ? 
                                                                    ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                                                      << 0x1eU) 
                                                                     | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                                                                        >> 2U))
                                                                     : 0U)))) 
                                                >> 0x20U)) 
                                       >> 0xaU)));
    vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U] 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded) 
            << 0xbU) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded) 
                         << 5U) | (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
                                            >> 0x11U))));
    vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID 
        = (((IData)((0x21000U == (0x21000U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]))) 
            & ((0U != (0x1fU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                >> 0x16U))) & (((0x1fU 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                    >> 0x16U)) 
                                                == 
                                                (0x1fU 
                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U])) 
                                               | ((0x1fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
                                                      >> 0x16U)) 
                                                  == 
                                                  (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                                                   >> 0x1bU))))) 
           | ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren) 
              & ((0U != (0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                          >> 4U)))) 
                 & (((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                       >> 4U))) == 
                     (0x1fU & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U])) 
                    | ((0x1fU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                         >> 4U))) == 
                       (vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U] 
                        >> 0x1bU))))));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d 
        = ((2U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel))
            ? ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel))
                ? vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_target
                : ((IData)(4U) + ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                   << 0xeU) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                               >> 0x12U))))
            : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel))
                ? (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result)
                : (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                   + (IData)((QData)((IData)((((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID)) 
                                               & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q)) 
                                              << 2U)))))));
}

void Vprocessor_tb___024root___nba_sequent__TOP__0(Vprocessor_tb___024root* vlSelf);
void Vprocessor_tb___024root___nba_sequent__TOP__1(Vprocessor_tb___024root* vlSelf);
void Vprocessor_tb___024root___nba_sequent__TOP__2(Vprocessor_tb___024root* vlSelf);
void Vprocessor_tb___024root___nba_comb__TOP__0(Vprocessor_tb___024root* vlSelf);

void Vprocessor_tb___024root___eval_nba(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vprocessor_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vprocessor_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vprocessor_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vprocessor_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vprocessor_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

extern const VlWide<48>/*1535:0*/ Vprocessor_tb__ConstPool__CONST_hefd400c6_0;
extern const VlWide<63>/*2015:0*/ Vprocessor_tb__ConstPool__CONST_he1fbfdd3_0;
extern const VlWide<32>/*1023:0*/ Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void Vprocessor_tb___024root___nba_sequent__TOP__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___nba_sequent__TOP__0\n"); );
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
    CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_3_0;
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_3_0 = 0;
    VlWide<48>/*1535:0*/ __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag;
    VL_ZERO_W(1536, __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag);
    IData/*31:0*/ __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q;
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q = 0;
    CData/*0:0*/ __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q;
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q = 0;
    VlWide<32>/*1023:0*/ __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R;
    VL_ZERO_W(1024, __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R);
    VlWide<3>/*95:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_7;
    // Body
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q;
    __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2fU)) {
        __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[__Vilp1] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU];
    __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU] 
        = vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU];
    if ((1U & (~ (IData)(vlSelfRef.processor_tb__DOT__rst_n)))) {
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__unnamedblk1__DOT__i = 0x3fU;
    }
    if (vlSelfRef.processor_tb__DOT__rst_n) {
        __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q 
            = (1U & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID) 
                     && (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q)));
        vlSelfRef.processor_tb__DOT__clk_counter = 
            ((IData)(1U) + vlSelfRef.processor_tb__DOT__clk_counter);
        if (vlSelfRef.processor_tb__DOT__dut__DOT__stall_from_ID) {
            __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q;
            __Vtemp_2[1U] = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U];
            __Vtemp_2[2U] = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U];
            vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U];
        } else {
            __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d;
            __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)
                                                                      ? 0U
                                                                      : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))))) 
                              >> 0x1eU) | ((IData)(
                                                   ((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)
                                                                         ? 0U
                                                                         : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
                                                    >> 0x20U)) 
                                           << 2U));
            __Vtemp_2[2U] = ((IData)(((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)
                                                                      ? 0U
                                                                      : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)))) 
                                      >> 0x20U)) >> 0x1eU);
            vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] 
                = (((IData)((((QData)((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)
                                                            ? 0U
                                                            : vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q))))) 
                    << 2U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q) 
                               << 1U) | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__branch_miss)) 
                                         & ((~ ((vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
                                                 >> 1U) 
                                                | vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q)) 
                                            & (0U != vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data)))));
        }
    } else {
        __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q = 0U;
        vlSelfRef.processor_tb__DOT__clk_counter = 0U;
        __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q = 0U;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[0U] = 0U;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_d));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_d));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__imem_region_en_q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           && ((~ (IData)((0U != (0x1fffffU & (IData)(
                                                      (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                       >> 0x14U)))))) 
               & ((~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                              >> 0x11U))) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_halfword_q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           && (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                     >> 9U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__load_en_q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           && (IData)((0x1080U == (0x1080U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U]))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__valid_q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           && (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                     >> 7U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_byte_q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           && (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                     >> 0xaU)));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_signed_q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n) 
           && (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                     >> 8U)));
    if (vlSelfRef.processor_tb__DOT__rst_n) {
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid 
            = (((~ (1ULL << (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                      >> 0x14U)))) 
                & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid) 
               | ((QData)((IData)(((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y) 
                                   || (1U & (IData)(
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid 
                                                     >> 
                                                     (0x3fU 
                                                      & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                         >> 0x14U)))))))) 
                  << (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                               >> 0x14U))));
        if (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y) {
            vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__0 
                = (0xffffffU & ((vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[4U] 
                                 << 6U) | (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                           >> 0x1aU)));
            if ((0x5ffU >= (0x7ffU & ((IData)(0x18U) 
                                      * (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                  >> 0x14U)))))) {
                VL_ASSIGNSEL_WI(1536,24,(0x7ffU & ((IData)(0x18U) 
                                                   * 
                                                   (0x3fU 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                       >> 0x14U)))), __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag, vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__0);
            }
            __Vtemp_7 = (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result);
        } else {
            if ((0x5ffU >= (0x7ffU & ((IData)(0x18U) 
                                      * (0x3fU & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                  >> 0x14U)))))) {
                vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__1 
                    = (0xffffffU & (((0U == (0x1fU 
                                             & ((IData)(0x18U) 
                                                * (0x3fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                      >> 0x14U)))))
                                      ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[
                                              (((IData)(0x17U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x18U) 
                                                      * 
                                                      (0x3fU 
                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                          >> 0x14U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * 
                                                      (0x3fU 
                                                       & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                          >> 0x14U))))))) 
                                    | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[
                                       (0x3fU & (((IData)(0x18U) 
                                                  * 
                                                  (0x3fU 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                      >> 0x14U))) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x18U) 
                                            * (0x3fU 
                                               & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                  >> 0x14U)))))));
                VL_ASSIGNSEL_WI(1536,24,(0x7ffU & ((IData)(0x18U) 
                                                   * 
                                                   (0x3fU 
                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                       >> 0x14U)))), __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag, vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__1);
            } else {
                vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__1 
                    = (0xffffffU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vxrand_hcc53b179__0);
            }
            __Vtemp_7 = (((0U == (0x1fU & VL_SHIFTL_III(11,32,32, 
                                                        (0x3fU 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                            >> 0x14U)), 5U)))
                           ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA[
                                   (((IData)(0x1fU) 
                                     + (0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                               (0x3fU 
                                                                & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                   >> 0x14U)), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0x3fU 
                                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                       >> 0x14U)), 5U))))) 
                         | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA[
                            (0x3fU & (VL_SHIFTL_III(11,32,32, 
                                                    (0x3fU 
                                                     & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                        >> 0x14U)), 5U) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_SHIFTL_III(11,32,32, 
                                                                   (0x3fU 
                                                                    & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                                       >> 0x14U)), 5U))));
        }
        VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, 
                                                        (0x3fU 
                                                         & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                            >> 0x14U)), 5U)), vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA, __Vtemp_7);
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data 
            = (((~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                            >> 0xdU))) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_6))
                ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__wdata
                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data);
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data 
            = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_6) 
                & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                           >> 0xdU))) ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__wdata
                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data);
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data 
            = (((~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                            >> 0xdU))) & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_5))
                ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__wdata
                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data);
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data 
            = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_5) 
                & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                           >> 0xdU))) ? vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__wdata
                : vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data);
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                                    >> 4U))), 5U)), __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R, 
                        (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren) 
                          & (0U != (0x1fU & (IData)(
                                                    (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                     >> 4U)))))
                          ? vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux
                          : (((0U == (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                                        >> 4U))), 5U)))
                               ? 0U : (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                       (((IData)(0x1fU) 
                                         + (0x3ffU 
                                            & VL_SHIFTL_III(10,32,32, 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                                        >> 4U))), 5U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(10,32,32, 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                                     >> 4U))), 5U))))) 
                             | (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
                                (0x1fU & (VL_SHIFTL_III(10,32,32, 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                                    >> 4U))), 5U) 
                                          >> 5U))] 
                                >> (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
                                                                      >> 4U))), 5U))))));
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor 
            = vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__D_predictor;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data 
            = vlSelfRef.processor_tb__DOT__sw_tb;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data 
            = vlSelfRef.processor_tb__DOT__input_port_tb;
        vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data 
            = (((QData)((IData)((((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
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
                                                               >> 0x1bU), 5U)))))) 
                << 0x20U) | (QData)((IData)((((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x1fU 
                                                                 & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U)))
                                               ? 0U
                                               : (vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[
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
                                                                  & vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U]), 5U)))))));
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q 
            = (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                       >> 9U));
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
            = ((vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
                << 0xdU) | (0x1fffU & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U]));
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] 
            = (vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded 
               >> 0x13U);
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[0U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[1U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[2U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[3U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[4U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[5U];
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] 
            = vlSelfRef.processor_tb__DOT__dut__DOT__decode_pkg_ID[6U];
    } else {
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid 
            = (0x8000000000000000ULL & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid);
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x2eU)) {
            __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[__Vilp2] 
                = Vprocessor_tb__ConstPool__CONST_hefd400c6_0[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[0x2fU] 
            = ((0xffffff00U & __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[0x2fU]) 
               | Vprocessor_tb__ConstPool__CONST_hefd400c6_0[0x2fU]);
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3eU)) {
            vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA[__Vilp3] 
                = Vprocessor_tb__ConstPool__CONST_he1fbfdd3_0[__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data = 0U;
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU] 
            = Vprocessor_tb__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor = 1U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT__EX_rs_data = 0ULL;
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__address_q = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q = 0ULL;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[0U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[1U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[2U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[4U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[0U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[1U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[2U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[4U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[5U] = 0U;
        vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[6U] = 0U;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q 
        = __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q;
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q 
        = __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x2fU)) {
        vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[__Vilp4] 
            = __Vdly__processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[1U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[2U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[3U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[4U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[5U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[6U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[7U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[8U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[9U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xaU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xbU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xcU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xdU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xeU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0xfU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x10U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x11U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x12U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x13U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x14U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x15U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x16U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x17U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x18U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x19U];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1aU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1bU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1cU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1dU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1eU];
    vlSelfRef.processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU] 
        = __Vdly__processor_tb__DOT__dut__DOT__Register_File__DOT__R[0x1fU];
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
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q 
        = vlSelfRef.processor_tb__DOT__rst_n;
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
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_3_0 
        = ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_signed_q)) 
           & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__lsu_byte_q));
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
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren 
        = (IData)((3ULL == (3ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q)));
    if ((0x400U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux = 0U;
    } else if ((1U & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                         >> 0xaU)))) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux 
            = (0xffU & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                        >> 0x15U));
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel 
        = (IData)((0U == (0x600U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])));
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
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel 
        = ((2U & ((~ (IData)((0U != (0x280000U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])))) 
                  << 1U)) | (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 0x15U)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel 
        = ((2U & ((~ (IData)((0U != (0x140000U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U])))) 
                  << 1U)) | (1U & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q[3U] 
                                   >> 0x14U)));
}

VL_INLINE_OPT void Vprocessor_tb___024root___nba_sequent__TOP__1(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0;
    __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0;
    __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0;
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 0;
    // Body
    __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 0U;
    if (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en) 
         & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_d))) {
        __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 
            = vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__wdata;
        __VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 
            = (0xffU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                >> 9U)));
        __VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0 = 1U;
    }
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata 
        = vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem
        [(0xffU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                           >> 9U)))];
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data 
        = ((0xffffff00U & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data) 
           | vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem
           [(0x7ffU & ((IData)(3U) + (0x7fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)))]);
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data 
        = ((0xffff00ffU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data) 
           | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem
              [(0x7ffU & ((IData)(2U) + (0x7fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)))] 
              << 8U));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data 
        = ((0xff00ffffU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data) 
           | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem
              [(0x7ffU & ((IData)(1U) + (0x7fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)))] 
              << 0x10U));
    vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data 
        = ((0xffffffU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data) 
           | (vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem
              [(0x7fcU & vlSelfRef.processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d)] 
              << 0x18U));
    if (__VdlySet__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0) {
        vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem[__VdlyDim0__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0] 
            = __VdlyVal__processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vprocessor_tb___024root___nba_sequent__TOP__2(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7;
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7 = 0;
    // Body
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__wdata 
        = (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_3__o_mux) 
            << 0x18U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_2__o_mux) 
                          << 0x10U) | (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux) 
                                        << 8U) | (0xffU 
                                                  & (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                                                     >> 0xdU)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en 
        = (IData)((0x880U == (0x880U & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U])));
    vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
        = ((IData)(vlSelfRef.processor_tb__DOT__rst_n)
            ? (((QData)((IData)(((4U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
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
                                              ? 0U : 
                                             ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel))
                                               ? vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out
                                               : vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16)))
                                      : ((1U & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__output_sel))
                                          ? (((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32) 
                                              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                             | ((~ (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl)) 
                                                & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos) 
                                                   | ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                      & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32)))))
                                          : (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result)))))) 
                << 9U) | (QData)((IData)(((0x1f0U & 
                                           (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                            >> 9U)) 
                                          | ((0xcU 
                                              & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                 >> 5U)) 
                                             | ((2U 
                                                 & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                    >> 0xbU)) 
                                                | (1U 
                                                   & (vlSelfRef.processor_tb__DOT__dut__DOT__abt_alu_pkg[3U] 
                                                      >> 0xaU))))))))
            : 0ULL);
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_d 
        = (1U & ((~ (IData)((0U != (0x1fffffU & (IData)(
                                                        (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                         >> 0x14U)))))) 
                 & (~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                               >> 0x13U)))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8 
        = (IData)((0x80000ULL == (0xc0000ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)));
    vlSelfRef.processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow 
        = (IData)(((3ULL == (3ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)) 
                   & (~ (vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q[3U] 
                         >> 0xcU))));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_d 
        = ((~ (IData)((0U != (0x1fffffU & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                                                   >> 0x14U)))))) 
           & ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8) 
              & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                         >> 0x11U))));
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
    processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7 
        = ((IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__store_en) 
           & ((~ (IData)((0ULL != (0x18000ULL & vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q)))) 
              & (IData)(vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_d)));
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
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_6 
        = ((~ (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                       >> 0xeU))) & (IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7));
    vlSelfRef.processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_5 
        = ((IData)(processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_7) 
           & (IData)((vlSelfRef.processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q 
                      >> 0xeU)));
}

VL_INLINE_OPT void Vprocessor_tb___024root___nba_comb__TOP__0(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    VlWide<6>/*191:0*/ __Vtemp_4;
    // Body
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

void Vprocessor_tb___024root___timing_resume(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vprocessor_tb___024root___eval_triggers__act(Vprocessor_tb___024root* vlSelf);

bool Vprocessor_tb___024root___eval_phase__act(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vprocessor_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vprocessor_tb___024root___timing_resume(vlSelf);
        Vprocessor_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vprocessor_tb___024root___eval_phase__nba(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vprocessor_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__nba(Vprocessor_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocessor_tb___024root___dump_triggers__act(Vprocessor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vprocessor_tb___024root___eval(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval\n"); );
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
            Vprocessor_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../01_tb/processor_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vprocessor_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../01_tb/processor_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vprocessor_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vprocessor_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vprocessor_tb___024root___eval_debug_assertions(Vprocessor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocessor_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
