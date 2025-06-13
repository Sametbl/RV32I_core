// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprocessor_tb.h for the primary calling header

#ifndef VERILATED_VPROCESSOR_TB___024ROOT_H_
#define VERILATED_VPROCESSOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vprocessor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprocessor_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ processor_tb__DOT__clk_i;
        CData/*0:0*/ processor_tb__DOT__rst_n;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__branch_miss;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__stall_from_ID;
        CData/*0:0*/ processor_tb__DOT__dut__DOT____Vcellinp__Hazard_Detection__i_wb_wren;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit1__Q;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__initialization_bit2__Q;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__alu_update_taken;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_t;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__br_miss_nt;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_taken_q;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__pc_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_valid;
        VlWide<4>/*127:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_counter;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__D_predictor;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__Q_predictor;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT__Y;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_3;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__predictor__DOT__predictor_adder__DOT____VdfgRegularize_h8107f71a_0_4;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__valid;
        CData/*5:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_encoded;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_type_encoded;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__slli;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srli;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__srai;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lb;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lh;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lbu;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lhu;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sb;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__sh;
        CData/*2:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__instr_imm_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_shift_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__imm_ui_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__wren;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__prd_en;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs1;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__use_rs2;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_a_use_pc;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__op_b_use_imm;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_byte;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_halfword;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__lsu_signed;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_11;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_12;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_19;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____VdfgRegularize_h662e6b9b_0_20;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__mem_fwd_allow;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_fwd_flags;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_fwd_flags;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_a_sel;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__operand_b_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs1_mem_matched;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__forwarding__DOT__rs2_mem_matched;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__br_jump;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__cmp_crtl;
        CData/*2:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__output_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__br_unsigned_cmp;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__rs1_eq_rs2;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__rs1_lt_rs2;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__rs1_gt_rs2;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__A_neg_B_pos;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__larger;
    };
    struct {
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_7__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_6__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_5__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_4__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_3__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_2__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_1__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____Vcellout__Layer1_0__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__la_32;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__sm_32;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_2;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_3;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_4;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_5;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_6;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_7;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_8;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_9;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_10;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_11;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_12;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_13;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_14;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_15;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_17;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_18;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_19;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT____VdfgRegularize_h09780577_0_20;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_7__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_6__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_5__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_4__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_3__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_2__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_1__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_comparator__DOT__Layer1_0__DOT__AB_eq;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__left_logic_mode;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reserved_mode;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__shift_in_bit;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_1__sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_2__sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_4__sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_8__sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____Vcellinp__mux_16__sel;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_out_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_0;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT____VdfgRegularize_hb019fdd7_0_1;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__A_neg_B_pos;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__larger;
    };
    struct {
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_7__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_6__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_5__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_4__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_3__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_2__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_1__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__smaller;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__larger;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____Vcellout__Layer1_0__equal;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__la_32;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__sm_32;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_2;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_3;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_4;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_5;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_6;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_7;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_8;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_9;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_10;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_11;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_12;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_13;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_14;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_15;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_17;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_18;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_19;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT____VdfgRegularize_h09780577_0_20;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_7__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_6__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_5__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_4__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_3__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_2__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_1__DOT__AB_eq;
        CData/*3:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__Branch_Condition_Check__DOT__Layer1_0__DOT__AB_eq;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__store_en;
        CData/*7:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_1__o_mux;
        CData/*7:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_2__o_mux;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__mask_2__sel;
        CData/*7:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____Vcellout__mask_3__o_mux;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__I_peripheral_mem_sel;
        CData/*2:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__O_peripheral_mem_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__load_en_q;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__lsu_byte_q;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__lsu_halfword_q;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__lsu_signed_q;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__valid_q;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_d;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__dmem_region_en_q;
    };
    struct {
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__imem_region_en_q;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_d;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__omem_region_en_q;
        CData/*2:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____Vcellinp__Read_data_selection__sel;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte1_sel;
        CData/*1:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__rdata_byte2_3_sel;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_5;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_6;
        CData/*0:0*/ processor_tb__DOT__dut__DOT__LSU__DOT____VdfgRegularize_hc2d89e63_0_8;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_2;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
        CData/*0:0*/ __Vtrigprevexpr___TOP__processor_tb__DOT__dut__DOT__stall_from_ID__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__processor_tb__DOT__dut__DOT__stall_from_ID__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__processor_tb__DOT__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__processor_tb__DOT__rst_n__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_type__in;
        IData/*31:0*/ processor_tb__DOT__sw_tb;
        IData/*31:0*/ processor_tb__DOT__input_port_tb;
        IData/*31:0*/ processor_tb__DOT__clk_counter;
        VlWide<7>/*206:0*/ processor_tb__DOT__dut__DOT____Vcellout__ID_Decoder_package_buffer__Q;
        VlWide<5>/*140:0*/ processor_tb__DOT__dut__DOT____Vcellout__EX_LSU_control_buffer__Q;
        IData/*31:0*/ processor_tb__DOT__dut__DOT____Vcellout__WB_mux__o_mux;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_d;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__next_pc_q;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__prd_br_target;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__cache_instr_data;
        VlWide<3>/*65:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT____Vcellout__fetch_buffer__Q;
        IData/*23:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vxrand_hcc53b179__1;
        IData/*23:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vxrand_hcc53b179__0;
        VlWide<48>/*1535:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_tag;
        VlWide<64>/*2047:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTA;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__unnamedblk1__DOT__i;
        IData/*23:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__0;
        IData/*23:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT____Vlvbound_h1613899f__1;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT__immediate;
        VlWide<32>/*1023:0*/ processor_tb__DOT__dut__DOT__Register_File__DOT__R;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs1_forwarded;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__Arbitrating__DOT__rs2_forwarded;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__bin_in;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_in;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__reversed_out;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R1;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R2;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R4;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R8;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_shifter__DOT__mux_R16;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__wdata;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__dmem_rdata;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__I_switch_data;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__I_gpi_data;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__O_portA_data;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__O_portB_data;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__O_portC_data;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__O_portD_data;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__mem_data;
        IData/*31:0*/ processor_tb__DOT__dut__DOT__LSU__DOT__address_q;
        IData/*31:0*/ __VactIterCount;
        VlWide<7>/*206:0*/ processor_tb__DOT__dut__DOT__decode_pkg_ID;
        QData/*63:0*/ processor_tb__DOT__dut__DOT__EX_rs_data;
        VlWide<9>/*279:0*/ processor_tb__DOT__dut__DOT__abt_alu_pkg;
    };
    struct {
        QData/*40:0*/ processor_tb__DOT__dut__DOT____Vcellout__EX_ALU_data_buffer__Q;
        QData/*40:0*/ processor_tb__DOT__dut__DOT____Vcellout__MEM_ALU_data_buffer__Q;
        QData/*63:0*/ processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__PRD__DOT__Target_Table__DOT__BTB_valid;
        QData/*63:0*/ processor_tb__DOT__dut__DOT__Instr_Decode__DOT____Vcellinp__Encoding_instr_op__in;
        QData/*32:0*/ processor_tb__DOT__dut__DOT__ALU__DOT__ALU_Adder__DOT__result;
        VlUnpacked<CData/*7:0*/, 2048> processor_tb__DOT__dut__DOT__Fetch_Unit__DOT__instr_cache__DOT__imem;
        VlUnpacked<IData/*31:0*/, 256> processor_tb__DOT__dut__DOT__LSU__DOT__D_cache__DOT__mem;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vprocessor_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vprocessor_tb___024root(Vprocessor_tb__Syms* symsp, const char* v__name);
    ~Vprocessor_tb___024root();
    VL_UNCOPYABLE(Vprocessor_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
