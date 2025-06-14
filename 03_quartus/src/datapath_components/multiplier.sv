// This file contains modules:
// 1. multiplier_64x64
// 2. multiplier_32x32
// 3. multiplier_16x16
// 4. multiplier_8x8
// 5. multiplier_4x4


// =============================================================================
// =============================================================================
module multiplier_64x64(
    input  logic [63:0]  A, B,
    output logic [127:0] S
);

// Lower 32-bit of B (B[31:0])
wire logic [63:0] q0, q1, Q_1;
multiplier_32x32      L_A0_A31  (.A(A[31:0]),  .B(B[31:0]), .S(q0) );
multiplier_32x32      L_A32_A63 (.A(A[63:32]), .B(B[31:0]), .S(q1) );
assign S[31:0] = q0[31:0];
 
full_adder_64bit     Add_low   (.A(q1), .B({32'b0, q0[63:32]}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_1), .C_out() );

// Higher 32-bit of B (B[63:32])
wire logic [63:0]  q2, q3;
wire logic [127:0] Q_2;
multiplier_32x32      H_A0_A31  (.A(A[31:0]),  .B(B[63:32]), .S(q2) );
multiplier_32x32      H_A32_A63 (.A(A[63:32]), .B(B[63:32]), .S(q3) );

full_adder_128bit    Add_high  (.A({32'b0, q3, 32'b0}), .B({64'b0, q2}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_2), .C_out() );


// Combine result
wire logic [127:0] Q_3;
full_adder_128bit    Combine   (.A(Q_2), .B({64'b0, Q_1}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_3), .C_out()    );
assign S[127:32] = Q_3[95:0];

endmodule : multiplier_64x64




// =============================================================================
// =============================================================================
module multiplier_32x32(
    input  logic [31:0] A, B,
    output logic [63:0] S
);

// Lower 16-bit of B (B[15:0])
wire logic [31:0] q0, q1, Q_1;
multiplier_16x16      L_A0_A15  (.A(A[15:0]),  .B(B[15:0]), .S(q0) );
multiplier_16x16      L_A16_A31 (.A(A[31:16]), .B(B[15:0]), .S(q1) );
assign S[15:0] = q0[15:0];

full_adder_32bit   Add_low  (.A(q1), .B({16'b0, q0[31:16]}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_1), .C_out() );

// Higher 16-bit of B (B[31:16])
wire logic [31:0] q2, q3;
wire logic [63:0] Q_2;
multiplier_16x16      H_A0_A15  (.A(A[15:0]),  .B(B[31:16]), .S(q2) );
multiplier_16x16      H_A16_A31 (.A(A[31:16]), .B(B[31:16]), .S(q3) );

full_adder_64bit  Add_high  (.A({16'b0, q3, 16'b0}), .B({32'b0, q2}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_2), .C_out() );


// Combine result
wire logic [63:0] Q_3;
full_adder_64bit  Combine  (.A(Q_2), .B({32'b0, Q_1}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_3), .C_out()    );
assign S[63:16] = Q_3[47:0];

endmodule : multiplier_32x32





// =============================================================================
// =============================================================================
module multiplier_16x16(
    input  logic [15:0] A, B,
    output logic [31:0] S
);

// Lower 8-bit of B (B[7:0])
wire logic [15:0] q0, q1, Q_1;
multiplier_8x8      L_A0_A7  (.A(A[7:0]),  .B(B[7:0]), .S(q0) );
multiplier_8x8      L_A8_A15 (.A(A[15:8]), .B(B[7:0]), .S(q1) );
assign S[7:0] = q0[7:0];

full_adder_16bit  Add_low   (.A(q1), .B({8'b0, q0[15:8]}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_1), .C_out() );

// Higher 8-bit of B (B[15:8])
wire logic [15:0] q2, q3;
wire logic [31:0] Q_2;
multiplier_8x8      H_A0_A7  (.A(A[7:0]),  .B(B[15:8]), .S(q2) );
multiplier_8x8      H_A8_A15 (.A(A[15:8]), .B(B[15:8]), .S(q3) );

full_adder_32bit   Add_high (.A({8'b0, q3, 8'b0}), .B({16'b0, q2}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_2), .C_out() );


// Combine result
wire logic [31:0] Q_3;
full_adder_32bit  Combine   (.A(Q_2), .B({16'b0, Q_1}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_3), .C_out()    );
assign S[31:8] = Q_3[23:0];

endmodule : multiplier_16x16






// =============================================================================
// =============================================================================
module multiplier_8x8(
    input  logic [7:0] A, B,
    output logic [15:0] S
);

// Lower 4-bit of B (B[3:0])
wire logic [7:0] q0, q1, Q_1;
multiplier_4x4      L_A0_A3 (.A(A[3:0]), .B(B[3:0]), .S(q0) );
multiplier_4x4      L_A4_A7 (.A(A[7:4]), .B(B[3:0]), .S(q1) );
assign S[3:0] = q0[3:0];

full_adder_8bit   Add_low  (.A(q1), .B({4'b0000, q0[7:4]}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_1), .C_out() );

// Higher 4-bit of B (B[7:4])
wire logic [7:0] q2, q3;
wire logic [15:0] Q_2;
multiplier_4x4      H_A0_A3 (.A(A[3:0]), .B(B[7:4]), .S(q2) );
multiplier_4x4      H_A4_A7 (.A(A[7:4]), .B(B[7:4]), .S(q3) );

full_adder_16bit   Add_high (.A({4'b0000, q3, 4'b0000}), .B({8'b00000000, q2}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_2), .C_out() );


// Combine result
wire logic [15:0] Q_3;
full_adder_16bit  Combine  (.A(Q_2), .B({8'b00000000, Q_1}), .Invert_B(1'b0), .C_in(1'b0), .Sum(Q_3), .C_out()    );
assign S[15:4] = Q_3[11:0];

endmodule : multiplier_8x8







// =============================================================================
// =============================================================================
module multiplier_4x4(
    input  logic [3:0] A, B,
    output logic [7:0] S
);

wire logic [3:0] P0, P1, P2, P3;
partial_product_generator_4x4    Partial_Product (.A(A), .B(B), .PP0(P0), .PP1(P1), .PP2(P2), .PP3(P3)  ); 

//                              A3     A2     A1     A0
//                              B3     B2     B1     B0
//------------------------------------------------------------
//                              P0[3]  P0[2]  P0[1]  P0[0]       ; Row 1
//                       P1[3]  P1[2]  P1[1]  P1[0]              ; Row 2 
//                P2[3]  P2[2]  P2[1]  P2[0]                     ; Row 3
//         P3[3]  P3[2]  P3[1]  P3[0]                            ; Row 4
//------------------------------------------------------------
//  C_out   S[6]   S[5]   S[4]   S[3]   S[2]   S[1]   S[0]       

//   7      6      5      4      3      2      1       0         ; Column


// First Digit
assign S[0] = P0[0];


// Stage 1 (S1): Add the first 2 or 3 PPs 
wire logic T1_S0, T1_S1, T1_S2, T1_S3; // Stage 1: Sum 0, 1, 2, 3 
wire logic T1_C0, T1_C1, T1_C2, T1_C3; // Stage 1: Carry out 0, 1, 2, 3
half_adder   a0 (.A(P0[1]), .B(P1[0]),               .Sum(T1_S0), .C_out(T1_C0) );
full_adder   a1 (.A(P0[2]), .B(P1[1]), .C_in(P2[0]), .Sum(T1_S1), .C_out(T1_C1) );
full_adder   a2 (.A(P0[3]), .B(P1[2]), .C_in(P2[1]), .Sum(T1_S2), .C_out(T1_C2) );
half_adder   a3 (.A(P1[3]), .B(P2[2]),               .Sum(T1_S3), .C_out(T1_C3) );
assign S[1] = T1_S0;

// Stage 2 (S2): Continue adding the previous Sum with the next PPs and Carry out 
wire logic T2_S0, T2_S1, T2_S2, T2_S3; // Stage 2: Sum 0, 1, 2, 3 
wire logic T2_C0, T2_C1, T2_C2, T2_C3; // Stage 2: Carry out 0, 1, 2, 3
half_adder   b0 (.A(T1_C0), .B(T1_S1),               .Sum(T2_S0), .C_out(T2_C0) );
full_adder   b1 (.A(T1_C1), .B(T1_S2), .C_in(P3[0]), .Sum(T2_S1), .C_out(T2_C1) );
full_adder   b2 (.A(T1_C2), .B(T1_S3), .C_in(P3[1]), .Sum(T2_S2), .C_out(T2_C2) );
full_adder   b3 (.A(T1_C3), .B(P2[3]), .C_in(P3[2]), .Sum(T2_S3), .C_out(T2_C3) );
assign S[2] = T2_S0;


// Stage 3 (S3): Add the last P3[3] and all they Sum and Carries together
wire logic T3_S0, T3_S1, T3_S2, T3_S3; // Stage 3: Sum 0, 1, 2, 3 
wire logic T3_C0, T3_C1, T3_C2, T3_C3; // Stage 3: Carry out 0, 1, 2, 3
half_adder   c0 (.A(T2_C0), .B(T2_S1),               .Sum(T3_S0), .C_out(T3_C0) );
full_adder   c1 (.A(T2_C1), .B(T2_S2), .C_in(T3_C0), .Sum(T3_S1), .C_out(T3_C1) );
full_adder   c2 (.A(T2_C2), .B(T2_S3), .C_in(T3_C1), .Sum(T3_S2), .C_out(T3_C2) );
full_adder   c3 (.A(T2_C3), .B(P3[3]), .C_in(T3_C2), .Sum(T3_S3), .C_out(T3_C3) );

assign S[3] = T3_S0;
assign S[4] = T3_S1;
assign S[5] = T3_S2;
assign S[6] = T3_S3;
assign S[7] = T3_C3;

endmodule : multiplier_4x4









