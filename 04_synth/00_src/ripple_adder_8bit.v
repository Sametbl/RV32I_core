module adder_8bit(A, B, sub_mode, S, Co);
 input  [7:0] A;     // 8-bit inputs
 input  [7:0] B;     // 8-bit inputs
 input        sub_mode;
 output [7:0] S;
 output       Co;

wire [7:0] invert_B;

xor    u0 (invert_B[0], B[0], sub_mode);
xor    u1 (invert_B[1], B[1], sub_mode);
xor    u2 (invert_B[2], B[2], sub_mode);
xor    u3 (invert_B[3], B[3], sub_mode);
xor    u4 (invert_B[4], B[4], sub_mode);
xor    u5 (invert_B[5], B[5], sub_mode);
xor    u6 (invert_B[6], B[6], sub_mode);
xor    u7 (invert_B[7], B[7], sub_mode);

ripple_adder_8bit  u8(A, invert_B, sub_mode, S, Co);

endmodule


module ripple_adder_8bit(A, B, Cin, S, Co);
 input  [7:0] A;     // 8-bit inputs
 input  [7:0] B;     // 8-bit inputs
 input        Cin;
 output [7:0] S;
 output       Co;
 wire   [6:0] c_wire;

 // instantiating 8 1-bit full adders in Verilog
 fulladder u1(A[0], B[0], Cin,       S[0], c_wire[0]);
 fulladder u2(A[1], B[1], c_wire[0], S[1], c_wire[1]);
 fulladder u3(A[2], B[2], c_wire[1], S[2], c_wire[2]);
 fulladder u4(A[3], B[3], c_wire[2], S[3], c_wire[3]);
 fulladder u5(A[4], B[4], c_wire[3], S[4], c_wire[4]);
 fulladder u6(A[5], B[5], c_wire[4], S[5], c_wire[5]);
 fulladder u7(A[6], B[6], c_wire[5], S[6], c_wire[6]);
 fulladder u8(A[7], B[7], c_wire[6], S[7], Co       );

endmodule
