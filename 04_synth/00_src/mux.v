// // =================================================================
// // 2x1 MUX - 1-bit
// module mux_2x1(A, B, sel, Y);
//   input  A;
//   input  B;
//   input  sel;
//   output Y;

//   assign Y = sel ? B : A;
// endmodule

// // =================================================================
// // 4x1 MUX - 1-bit
// module mux_4x1(A, B, C, D, sel, Y);
//   input        A;  // 0
//   input        B;  // 1
//   input        C;  // 2
//   input        D;  // 3
//   input  [1:0] sel;
//   output       Y;

//   reg Y;
//   always @(*) begin
//     case (sel)
//       2'b00: Y = A;
//       2'b01: Y = B;
//       2'b10: Y = C;
//       2'b11: Y = D;
//       default: Y = A;
//     endcase
//   end
// endmodule

// // =================================================================
// // 8x1 MUX - 1-bit
// module mux_8x1(A, B, C, D, E, F, G, H, sel, Y);
//   input        A; // 0
//   input        B; // 1
//   input        C; // 2
//   input        D; // 3
//   input        E; // 4
//   input        F; // 5
//   input        G; // 6
//   input        H; // 7
//   input  [2:0] sel;
//   output       Y;

//   reg Y;
//   always @(*) begin
//     case (sel)
//       3'b000:  Y = A;
//       3'b001:  Y = B;
//       3'b010:  Y = C;
//       3'b011:  Y = D;
//       3'b100:  Y = E;
//       3'b101:  Y = F;
//       3'b110:  Y = G;
//       3'b111:  Y = H;
//       default: Y = A;
//     endcase
//   end
// endmodule

// // =================================================================
// // 2x1 MUX - 8-bit
// module mux_2x1_8bit(A, B, sel, Y);
//   input  [7:0] A;
//   input  [7:0] B;
//   input        sel;
//   output [7:0] Y;

//   assign Y = sel ? B : A;
// endmodule

// // =================================================================
// // 4x1 MUX - 8-bit
// module mux_4x1_8bit(A, B, C, D, sel, Y);
//   input  [7:0] A;  // 0
//   input  [7:0] B;  // 1
//   input  [7:0] C;  // 2
//   input  [7:0] D;  // 3
//   input  [1:0] sel;
//   output [7:0] Y;

//   reg [7:0] Y;
//   always @(*) begin
//     case (sel)
//       2'b00:   Y = A;
//       2'b01:   Y = B;
//       2'b10:   Y = C;
//       2'b11:   Y = D;
//       default: Y = A;
//     endcase
//   end
// endmodule

// // =================================================================
// // 8x1 MUX - 8-bit
// module mux_8x1_8bit(A, B, C, D, E, F, G, H, sel, Y);
//   input  [7:0] A;  // 0 
//   input  [7:0] B;  // 1 
//   input  [7:0] C;  // 2 
//   input  [7:0] D;  // 3 
//   input  [7:0] E;  // 4 
//   input  [7:0] F;  // 5 
//   input  [7:0] G;  // 6 
//   input  [7:0] H;  // 7 
//   input  [2:0] sel;
//   output [7:0] Y;

//   reg [7:0] Y;
//   always @(*) begin
//     case (sel)
//       3'b000:  Y = A;
//       3'b001:  Y = B;
//       3'b010:  Y = C;
//       3'b011:  Y = D;
//       3'b100:  Y = E;
//       3'b101:  Y = F;
//       3'b110:  Y = G;
//       3'b111:  Y = H;
//       default: Y = A;
//     endcase
//   end
// endmodule




module mux_2x1(A, B, sel, Y);
input   A;
input   B;
input   sel;
output  Y;

wire select_A;
wire select_B;
wire not_sel;

not  sel_n(not_sel,  sel       );
and  sel_A(select_A, A, not_sel);   // select_A = A & ~sel
and  sel_B(select_B, B, sel    );   // select_B = B &  sel

// Y = (A & ~sel) | (B &  sel)
or   result(Y, select_A, select_B); 
endmodule

// =================================================================
// =================================================================
module mux_4x1(A, B, C, D, sel, Y);
input         A;  // 0
input         B;  // 1
input         C;  // 2
input         D;  // 3
input   [1:0] sel;
output        Y;

wire [1:0] L;
// Level 1
mux_2x1  L1_1(A, B, sel[0], L[0]);    // L[0] = sel[0] ?  B : A;
mux_2x1  L1_2(C, D, sel[0], L[1]);    // L[1] = sel[0] ?  D : C;

// Level 2
mux_2x1  L2  (L[0], L[1], sel[1], Y); // Y = sel[1] ? L[1] : L[0];
endmodule


// =================================================================
// =================================================================
module mux_8x1(A, B, C, D, E, F, G, H, sel, Y);
input         A; // 0
input         B; // 1
input         C; // 2
input         D; // 3
input         E; // 4
input         F; // 5
input         G; // 6
input         H; // 7
input   [2:0] sel;
output        Y;

wire [1:0] L;
// Level 1
mux_4x1  L1_1(A, B, C, D, sel[1:0], L[0]); // L[0] = sel[1:0]  2'b00 = A
                                           //                  2'b01 = B
                                           //                  2'b10 = C
                                           //                  2'b11 = D

mux_4x1  L1_2(E, F, G, H, sel[1:0], L[1]); // L[1] = sel[1:0]  2'b00 = E
                                           //                  2'b01 = F
                                           //                  2'b10 = G
                                           //                  2'b11 = H
// Level 2
mux_2x1  L2  (L[0], L[1], sel[2], Y); // Y = sel[2] ? L[1] : L[0];
endmodule


// =================================================================
// =================================================================
module mux_2x1_8bit(A, B, sel, Y);
input   [7:0] A;
input   [7:0] B;
input   sel;
output  [7:0] Y;

mux_2x1  u1(A[0], B[0], sel, Y[0]);
mux_2x1  u2(A[1], B[1], sel, Y[1]);
mux_2x1  u3(A[2], B[2], sel, Y[2]);
mux_2x1  u4(A[3], B[3], sel, Y[3]);
mux_2x1  u5(A[4], B[4], sel, Y[4]);
mux_2x1  u6(A[5], B[5], sel, Y[5]);
mux_2x1  u7(A[6], B[6], sel, Y[6]);
mux_2x1  u8(A[7], B[7], sel, Y[7]);
endmodule

// =================================================================
// =================================================================
module mux_4x1_8bit(A, B, C, D, sel, Y);
input   [7:0] A;  // 0
input   [7:0] B;  // 1
input   [7:0] C;  // 2
input   [7:0] D;  // 3
input   [1:0] sel;
output  [7:0] Y;

mux_4x1  u1(A[0], B[0], C[0], D[0], sel, Y[0]);
mux_4x1  u2(A[1], B[1], C[1], D[1], sel, Y[1]);
mux_4x1  u3(A[2], B[2], C[2], D[2], sel, Y[2]);
mux_4x1  u4(A[3], B[3], C[3], D[3], sel, Y[3]);
mux_4x1  u5(A[4], B[4], C[4], D[4], sel, Y[4]);
mux_4x1  u6(A[5], B[5], C[5], D[5], sel, Y[5]);
mux_4x1  u7(A[6], B[6], C[6], D[6], sel, Y[6]);
mux_4x1  u8(A[7], B[7], C[7], D[7], sel, Y[7]);
endmodule


// =================================================================
// =================================================================
module mux_8x1_8bit(A, B, C, D, E, F, G, H, sel, Y);
input   [7:0] A;  // 0 
input   [7:0] B;  // 1 
input   [7:0] C;  // 2 
input   [7:0] D;  // 3 
input   [7:0] E;  // 4 
input   [7:0] F;  // 5 
input   [7:0] G;  // 6 
input   [7:0] H;  // 7 
input   [2:0] sel;
output  [7:0] Y;

mux_8x1  u1(A[0], B[0], C[0], D[0], E[0], F[0], G[0], H[0], sel, Y[0]);
mux_8x1  u2(A[1], B[1], C[1], D[1], E[1], F[1], G[1], H[1], sel, Y[1]);
mux_8x1  u3(A[2], B[2], C[2], D[2], E[2], F[2], G[2], H[2], sel, Y[2]);
mux_8x1  u4(A[3], B[3], C[3], D[3], E[3], F[3], G[3], H[3], sel, Y[3]);
mux_8x1  u5(A[4], B[4], C[4], D[4], E[4], F[4], G[4], H[4], sel, Y[4]);
mux_8x1  u6(A[5], B[5], C[5], D[5], E[5], F[5], G[5], H[5], sel, Y[5]);
mux_8x1  u7(A[6], B[6], C[6], D[6], E[6], F[6], G[6], H[6], sel, Y[6]);
mux_8x1  u8(A[7], B[7], C[7], D[7], E[7], F[7], G[7], H[7], sel, Y[7]);
endmodule


