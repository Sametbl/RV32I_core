// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"op_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"failed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"a_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+7,0,"b_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+9,0,"expected_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("MAIN", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("my_dutty", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"op_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"A_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"B_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"op_sel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"result_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"carry_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dutty", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"i_rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"i_op_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"o_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"result_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"result_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"result_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"result_not",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"result_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"result_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+27,0,"carry_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"sub_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"shift_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"shift_out_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"cout_adder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"is_logical_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Cout_buff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("S_buff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("bit0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("check_for_LEFT_SHIFT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+153,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"is_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+50,0,"wire1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"wire2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"wire3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("check_for_SUB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+154,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+28,0,"is_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"wire1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"wire2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"wire3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fetch_A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("bit0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch_B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("bit0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bit7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+150,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("select_cout", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+30,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("select_result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"F",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"G",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"H",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u01", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+28,0,"sub_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"invert_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+28,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"c_wire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+62,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+64,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+68,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u67", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+29,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"A_reversed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+137,0,"stage1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"stage1_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"stage2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"stage2_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"stage3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"stage3_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"stage4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"stage4_reversed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"sel_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+146,0,"WIRE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"WIRE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"WIRE_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"more_than_8shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"In",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+29,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"In",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+72,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+139,0,"In",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+139,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+74,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"In",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+76,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"In",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"Out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+152,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__shift_out_bit));
    bufp->fullCData(oldp+153,(7U),4);
    bufp->fullCData(oldp+154,(1U),4);
    bufp->fullBit(oldp+155,(0U));
    bufp->fullCData(oldp+156,(0U),8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.testbench__DOT__A),8);
    bufp->fullCData(oldp+2,(vlSelfRef.testbench__DOT__B),8);
    bufp->fullCData(oldp+3,(vlSelfRef.testbench__DOT__op_sel),3);
    bufp->fullIData(oldp+4,(vlSelfRef.testbench__DOT__passed),32);
    bufp->fullIData(oldp+5,(vlSelfRef.testbench__DOT__failed),32);
    bufp->fullIData(oldp+6,(vlSelfRef.testbench__DOT__a_val),32);
    bufp->fullIData(oldp+7,(vlSelfRef.testbench__DOT__b_val),32);
    bufp->fullCData(oldp+8,(vlSelfRef.testbench__DOT__expected_result),8);
    bufp->fullBit(oldp+9,(vlSelfRef.testbench__DOT__expected_carry));
    bufp->fullIData(oldp+10,(vlSelfRef.testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+11,(vlSelfRef.testbench__DOT__result),8);
    bufp->fullBit(oldp+12,(vlSelfRef.testbench__DOT__carry));
    bufp->fullCData(oldp+13,(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg),8);
    bufp->fullCData(oldp+14,(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg),8);
    bufp->fullCData(oldp+15,(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg),3);
    bufp->fullCData(oldp+16,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4) 
                               << 7U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4) 
                                          << 6U) | 
                                         (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit5____pinNumber4) 
                                           << 5U) | 
                                          (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit4____pinNumber4) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit3____pinNumber4) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit2____pinNumber4) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit1____pinNumber4) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4))))))))),8);
    bufp->fullBit(oldp+17,(vlSelfRef.testbench__DOT__my_dutty__DOT__carry_reg));
    bufp->fullCData(oldp+18,(((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                                ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5)) 
                               << 7U) | ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1) 
                                           ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5)) 
                                          << 6U) | 
                                         ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1) 
                                            ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5)) 
                                           << 5U) | 
                                          ((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1) 
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
    bufp->fullCData(oldp+19,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                              & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B))),8);
    bufp->fullCData(oldp+20,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                              | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B))),8);
    bufp->fullCData(oldp+21,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A) 
                              ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B))),8);
    bufp->fullCData(oldp+22,((0xffU & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A)))),8);
    bufp->fullCData(oldp+23,(((2U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output))
                               ? 0U : ((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output))
                                        ? ((0x80U & 
                                            ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
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
    bufp->fullCData(oldp+24,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__A),8);
    bufp->fullCData(oldp+25,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__B),8);
    bufp->fullCData(oldp+26,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d),8);
    bufp->fullBit(oldp+27,(((~ (IData)((0U != (6U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))) 
                            & (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                                & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5)) 
                               | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
                                  & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                     >> 1U))))));
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2)))));
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2)))));
    bufp->fullBit(oldp+30,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5)) 
                            | ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                  >> 1U)))));
    bufp->fullBit(oldp+31,((IData)((0U != (6U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))));
    bufp->fullBit(oldp+32,((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d))));
    bufp->fullBit(oldp+33,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                  >> 1U))));
    bufp->fullBit(oldp+35,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit1____pinNumber4));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                  >> 2U))));
    bufp->fullBit(oldp+37,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit2____pinNumber4));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                  >> 3U))));
    bufp->fullBit(oldp+39,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit3____pinNumber4));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                  >> 4U))));
    bufp->fullBit(oldp+41,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit4____pinNumber4));
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                  >> 5U))));
    bufp->fullBit(oldp+43,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit5____pinNumber4));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                  >> 6U))));
    bufp->fullBit(oldp+45,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4));
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__result_d) 
                                  >> 7U))));
    bufp->fullBit(oldp+47,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4));
    bufp->fullCData(oldp+48,(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg),4);
    bufp->fullCData(oldp+49,((7U & (~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg)))),4);
    bufp->fullBit(oldp+50,((IData)((3U != (3U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))));
    bufp->fullBit(oldp+51,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2));
    bufp->fullCData(oldp+52,((1U ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))),4);
    bufp->fullBit(oldp+53,((IData)((1U != (3U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__op_sel_reg))))));
    bufp->fullBit(oldp+54,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2));
    bufp->fullBit(oldp+55,((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg))));
    bufp->fullBit(oldp+56,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4));
    bufp->fullBit(oldp+57,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                  >> 1U))));
    bufp->fullBit(oldp+58,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4));
    bufp->fullBit(oldp+59,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                  >> 2U))));
    bufp->fullBit(oldp+60,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4));
    bufp->fullBit(oldp+61,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                  >> 3U))));
    bufp->fullBit(oldp+62,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4));
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                  >> 4U))));
    bufp->fullBit(oldp+64,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4));
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                  >> 5U))));
    bufp->fullBit(oldp+66,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4));
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                  >> 6U))));
    bufp->fullBit(oldp+68,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4));
    bufp->fullBit(oldp+69,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__A_reg) 
                                  >> 7U))));
    bufp->fullBit(oldp+70,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4));
    bufp->fullBit(oldp+71,((1U & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg))));
    bufp->fullBit(oldp+72,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit0____pinNumber4));
    bufp->fullBit(oldp+73,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                  >> 1U))));
    bufp->fullBit(oldp+74,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit1____pinNumber4));
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                  >> 2U))));
    bufp->fullBit(oldp+76,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit2____pinNumber4));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                  >> 3U))));
    bufp->fullBit(oldp+78,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4));
    bufp->fullBit(oldp+79,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                  >> 4U))));
    bufp->fullBit(oldp+80,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                  >> 5U))));
    bufp->fullBit(oldp+82,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4));
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                  >> 6U))));
    bufp->fullBit(oldp+84,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4));
    bufp->fullBit(oldp+85,((1U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__B_reg) 
                                  >> 7U))));
    bufp->fullBit(oldp+86,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4));
    bufp->fullCData(oldp+87,((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                               << 6U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2)))))),8);
    bufp->fullCData(oldp+88,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5) 
                               << 6U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5) 
                                           << 4U) | 
                                          (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5)))))))),7);
    bufp->fullBit(oldp+89,((1U & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2))));
    bufp->fullBit(oldp+90,((1U ^ ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2) 
                                  ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1)))));
    bufp->fullBit(oldp+91,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5));
    bufp->fullBit(oldp+92,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1));
    bufp->fullBit(oldp+93,(((~ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2)) 
                            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1))));
    bufp->fullBit(oldp+94,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2))));
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2) 
                                  >> 1U))));
    bufp->fullBit(oldp+96,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1) 
                            ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5))));
    bufp->fullBit(oldp+97,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5));
    bufp->fullBit(oldp+98,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1));
    bufp->fullBit(oldp+99,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1) 
                            & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5))));
    bufp->fullBit(oldp+100,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4) 
                             & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_2) 
                                >> 1U))));
    bufp->fullBit(oldp+101,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2));
    bufp->fullBit(oldp+102,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1) 
                             ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5))));
    bufp->fullBit(oldp+103,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5));
    bufp->fullBit(oldp+104,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1));
    bufp->fullBit(oldp+105,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5))));
    bufp->fullBit(oldp+106,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2))));
    bufp->fullBit(oldp+107,((1U & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1))));
    bufp->fullBit(oldp+108,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1) 
                             ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5))));
    bufp->fullBit(oldp+109,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5));
    bufp->fullBit(oldp+110,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1));
    bufp->fullBit(oldp+111,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5))));
    bufp->fullBit(oldp+112,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4) 
                             & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1))));
    bufp->fullBit(oldp+113,((1U & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1) 
                                   >> 1U))));
    bufp->fullBit(oldp+114,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1) 
                             ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5))));
    bufp->fullBit(oldp+115,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5));
    bufp->fullBit(oldp+116,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1));
    bufp->fullBit(oldp+117,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5))));
    bufp->fullBit(oldp+118,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4) 
                             & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_1) 
                                >> 1U))));
    bufp->fullBit(oldp+119,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2));
    bufp->fullBit(oldp+120,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1) 
                             ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5))));
    bufp->fullBit(oldp+121,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5));
    bufp->fullBit(oldp+122,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1));
    bufp->fullBit(oldp+123,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5))));
    bufp->fullBit(oldp+124,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2))));
    bufp->fullBit(oldp+125,((1U & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0))));
    bufp->fullBit(oldp+126,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1) 
                             ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5))));
    bufp->fullBit(oldp+127,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5));
    bufp->fullBit(oldp+128,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1));
    bufp->fullBit(oldp+129,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5))));
    bufp->fullBit(oldp+130,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4) 
                             & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                   >> 1U))));
    bufp->fullBit(oldp+132,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                             ^ (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5))));
    bufp->fullBit(oldp+133,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1));
    bufp->fullBit(oldp+134,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1) 
                             & (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5))));
    bufp->fullBit(oldp+135,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4) 
                             & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0) 
                                >> 1U))));
    bufp->fullCData(oldp+136,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4) 
                                << 7U) | (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4) 
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
    bufp->fullCData(oldp+137,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1),8);
    bufp->fullCData(oldp+138,((0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1), 1U))),8);
    bufp->fullCData(oldp+139,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2),8);
    bufp->fullCData(oldp+140,((0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2), 2U))),8);
    bufp->fullCData(oldp+141,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3),8);
    bufp->fullCData(oldp+142,((0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3), 4U))),8);
    bufp->fullCData(oldp+143,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4),8);
    bufp->fullCData(oldp+144,(((0x80U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                         << 7U)) | 
                               ((0x40U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                          << 5U)) | 
                                ((0x20U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                           << 3U)) 
                                 | ((0x10U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                              << 1U)) 
                                    | ((8U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                              >> 1U)) 
                                       | ((4U & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                               >> 5U)) 
                                             | (1U 
                                                & ((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4) 
                                                   >> 7U)))))))))),8);
    bufp->fullCData(oldp+145,(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output),2);
    bufp->fullBit(oldp+146,(((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                             | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4))));
    bufp->fullBit(oldp+147,((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                              | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4)) 
                             | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4))));
    bufp->fullBit(oldp+148,(((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                               | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4)) 
                              | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4)) 
                             | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4))));
    bufp->fullBit(oldp+149,((((((IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4) 
                                | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4)) 
                               | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4)) 
                              | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4)) 
                             | (IData)(vlSelfRef.testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4))));
    bufp->fullBit(oldp+150,(vlSelfRef.testbench__DOT__clk));
    bufp->fullBit(oldp+151,(vlSelfRef.testbench__DOT__rst_n));
}
