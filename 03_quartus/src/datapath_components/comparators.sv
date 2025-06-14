// This file contain 3 modules:
// 1. comparator_32bit
// 2. comparator_5bit
// 3. compatator_4bit

module comparator_32bit(
	input  logic [31:0] A, B,
	input  logic is_unsigned,
	output logic equal, larger, smaller
);

logic A_pos_B_neg;
logic A_neg_B_pos;
logic same_sign;

assign A_pos_B_neg =  ~A[31] &  B[31]; 
assign A_neg_B_pos =   A[31] & ~B[31]; 
assign same_sign   = ~(A[31] ^  B[31]);

// Unsign comparator
// Compare each 4-bit groups
wire logic [7:0] eq_4, la_4, sm_4;
comparator_4bit  Layer1_7 (.A(A[31:28]), .B(B[31:28]), .equal(eq_4[7]), .larger(la_4[7]), .smaller(sm_4[7]) );
comparator_4bit  Layer1_6 (.A(A[27:24]), .B(B[27:24]), .equal(eq_4[6]), .larger(la_4[6]), .smaller(sm_4[6]) );
comparator_4bit  Layer1_5 (.A(A[23:20]), .B(B[23:20]), .equal(eq_4[5]), .larger(la_4[5]), .smaller(sm_4[5]) );
comparator_4bit  Layer1_4 (.A(A[19:16]), .B(B[19:16]), .equal(eq_4[4]), .larger(la_4[4]), .smaller(sm_4[4]) );
comparator_4bit  Layer1_3 (.A(A[15:12]), .B(B[15:12]), .equal(eq_4[3]), .larger(la_4[3]), .smaller(sm_4[3]) );
comparator_4bit  Layer1_2 (.A(A[11:8]),  .B(B[11:8]),  .equal(eq_4[2]), .larger(la_4[2]), .smaller(sm_4[2]) );
comparator_4bit  Layer1_1 (.A(A[7:4]),   .B(B[7:4]),   .equal(eq_4[1]), .larger(la_4[1]), .smaller(sm_4[1]) );
comparator_4bit  Layer1_0 (.A(A[3:0]),   .B(B[3:0]),   .equal(eq_4[0]), .larger(la_4[0]), .smaller(sm_4[0]) );

// Compare each 4-bit groups with previous 4- segments 
wire logic [3:0] eq_8, la_8, sm_8;
assign eq_8[3] =   eq_4[7] &  eq_4[6];
assign la_8[3] =   la_4[7] | (eq_4[7] & la_4[6]);
assign sm_8[3] =   sm_4[7] | (eq_4[7] & sm_4[6]);

assign eq_8[2] =   eq_4[5] &  eq_4[4];
assign la_8[2] =   la_4[5] | (eq_4[5] & la_4[4]);
assign sm_8[2] =   sm_4[5] | (eq_4[5] & sm_4[4]);  

assign eq_8[1] =   eq_4[3] &  eq_4[2];
assign la_8[1] =   la_4[3] | (eq_4[3] & la_4[2]);
assign sm_8[1] =   sm_4[3] | (eq_4[3] & sm_4[2]);

assign eq_8[0] =   eq_4[1] &  eq_4[0];
assign la_8[0] =   la_4[1] | (eq_4[1] & la_4[0]);
assign sm_8[0] =   sm_4[1] | (eq_4[1] & sm_4[0]);

// Compare each 8- group
wire logic [1:0] eq_16, la_16, sm_16;
assign eq_16[1] =   eq_8[3] &   eq_8[2];
assign la_16[1] =   la_8[3] |  (eq_8[3] & la_8[2]);
assign sm_16[1] =   sm_8[3] |  (eq_8[3] & sm_8[2]);

assign eq_16[0] =   eq_8[1] &  eq_8[0];
assign la_16[0] =   la_8[1] | (eq_8[1] & la_8[0]);
assign sm_16[0] =   sm_8[1] |  (eq_8[1] & sm_8[0]);

// Compare each 16_ groups
wire logic eq_32, la_32, sm_32;
assign eq_32 =   eq_16[1] &  eq_16[0];
assign la_32 =   la_16[1] | (eq_16[1] & la_16[0]);
assign sm_32 =   sm_16[1] | (eq_16[1] & sm_16[0]);

// Conclusion
logic unsigned_larger;
logic unsigned_smaller;
logic signed_larger;
logic signed_smaller;

assign unsigned_larger   = (la_32 & is_unsigned);
assign unsigned_smaller  = (sm_32 & is_unsigned);

// Same sign ==> Compare normally
assign signed_larger     = ~is_unsigned & ((A_pos_B_neg) | (same_sign & la_32));
assign signed_smaller    = ~is_unsigned & ((A_neg_B_pos) | (same_sign & sm_32));



assign equal   = eq_32;
assign larger  = unsigned_larger  | signed_larger; 
assign smaller = unsigned_smaller | signed_smaller;
endmodule : comparator_32bit


// =======================================================================d
module comparator_5bit(
    input  logic [4:0] A, B,
    output logic equal, larger, smaller
);

logic [4:0] AB_eq;
assign AB_eq[4] = ~(A[4] ^ B[4]);
assign AB_eq[3] = ~(A[3] ^ B[3]);
assign AB_eq[2] = ~(A[2] ^ B[2]);
assign AB_eq[1] = ~(A[1] ^ B[1]);
assign AB_eq[0] = ~(A[0] ^ B[0]);

assign larger = (A[4] & ~B[4]) |
                (A[3] & ~B[3] & AB_eq[4]) |
                (A[2] & ~B[2] & AB_eq[4] & AB_eq[3]) |
                (A[1] & ~B[1] & AB_eq[4] & AB_eq[3] & AB_eq[2]) |
                (A[0] & ~B[0] & AB_eq[4] & AB_eq[3] & AB_eq[2] & AB_eq[1]);

assign equal  = AB_eq[4] & AB_eq[3] & AB_eq[2] & AB_eq[1] & AB_eq[0];
assign smaller = ~(equal | larger);
endmodule : comparator_5bit




// =======================================================================d
module comparator_4bit(
    input  logic [3:0] A, B,
    output logic equal, larger, smaller
);

logic [3:0] AB_eq;
assign AB_eq[3] = ~(A[3] ^ B[3]);
assign AB_eq[2] = ~(A[2] ^ B[2]);
assign AB_eq[1] = ~(A[1] ^ B[1]);
assign AB_eq[0] = ~(A[0] ^ B[0]);

assign larger = (A[3] & ~B[3]) |
                (A[2] & ~B[2] & AB_eq[3]) |
                (A[1] & ~B[1] & AB_eq[3] & AB_eq[2]) |
                (A[0] & ~B[0] & AB_eq[3] & AB_eq[2] & AB_eq[1]);

assign equal  = AB_eq[3] & AB_eq[2] & AB_eq[1] & AB_eq[0];
assign smaller = ~(equal | larger);
endmodule : comparator_4bit




