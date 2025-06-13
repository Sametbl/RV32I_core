// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vprocessor_tb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"NOP", "LUI", "AUIPC", "JAL", "JALR", "BEQ", 
                                "BNE", "BLT", "BGE", 
                                "BLTU", "BGEU", "LB", 
                                "LH", "LW", "LBU", 
                                "LHU", "SB", "SH", 
                                "SW", "ADDI", "SLTI", 
                                "SLTIU", "XORI", "ORI", 
                                "ANDI", "SLLI", "SRLI", 
                                "SRAI", "ADD", "SUB", 
                                "SLT", "SLTU", "XOR", 
                                "OR", "AND", "SLL", 
                                "SRL", "SRA", "ECALL", 
                                "EBREAK", "PAUSE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000"};
        tracep->declDTypeEnum(1, "pipeline_pkg::instr_e", 41, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NONE", "R_TYPE", "I_TYPE", "L_TYPE", "S_TYPE", 
                                "B_TYPE", "E_TYPE", 
                                "SYS_TYPE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(2, "pipeline_pkg::instr_type_e", 8, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"r0", "r1", "r2", "r3", "r4", "r5", "r6", 
                                "r7", "r8", "r9", "r10", 
                                "r11", "r12", "r13", 
                                "r14", "r15", "r16", 
                                "r17", "r18", "r19", 
                                "r20", "r21", "r22", 
                                "r23", "r24", "r25", 
                                "r26", "r27", "r28", 
                                "r29", "r30", "r31"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111"};
        tracep->declDTypeEnum(3, "pipeline_pkg::register_idx", 32, 5, __VenumItemNames, __VenumItemValues);
    }
}

void Vprocessor_tb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vprocessor_tb___024root__traceDeclTypesSub0(tracep);
}
